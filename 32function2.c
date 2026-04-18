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
    struct sType**  Value_12  ;
    char**  name_11  ;
    struct sType**  field_type  ;
    struct sType**  field_type2  ;
    _Bool* weak_field;
    struct sType**  Value  ;
    _Bool* owned_cycle;
    struct buffer**  source  ;
    struct tuple2$2char$phsType$ph** it;
    char**  user_real_fun_name  ;
    struct sFun**  user_finalizer  ;
    struct sType**  type2_8  ;
    struct sType**  normalized_type  ;
    struct sType**  lifecycle_type  ;
    struct sClass**  klass  ;
    int* pointer_level;
    struct sType**  type  ;
    const char** fun_name;
    struct sInfo**  info  ;
    struct sClass**  current_stack_frame_struct  ;
    struct sFun**  caller_fun  ;
    struct buffer**  if_expression_buffer  ;
    struct buffer**  loop_expression_buffer  ;
    struct buffer**  paren_block_buffer  ;
    int* right_value_max;
    int* right_value_num;
    int* max_conditional;
    int* num_conditional;
    _Bool* in_conditional;
    char**  last_code  ;
    char**  last_code2  ;
    char**  sname_top  ;
    int* sline_top;
    struct list$1CVALUE$ph** stack_saved;
    struct list$1sRightValueObject$ph** right_value_objects;
    _Bool* no_output_come_code;
    char**  real_fun_name  ;
    struct sFun**  finalizer  ;
    struct sType**  type_before  ;
    struct sType**  type2  ;
    char**  fun_name2  ;
    struct sType**  type_  ;
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
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
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
static struct sType*  expand_typedef_for_compare(struct sType*  type  , struct sInfo*  info  );
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static int pointer_level_for_compare(struct sType*  type  );
static _Bool compare_field_by_pointer(struct sType*  original_field_type  , struct sType*  field_type  );
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
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
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static void sFun_finalize(struct sFun*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static struct sGenericsFun*  map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  );
static void sGenericsFun_finalize(struct sGenericsFun*  self  );
static struct sGenericsFun*  map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  );
static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self);
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static void sClass_finalize(struct sClass*  self  );
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1sType$ph* list$1sType$ph_each(struct list$1sType$ph* self, void* parent, void (*block)(void*,struct sType* ,int,_Bool*));
void method_block1_32function2nc(struct __current_stack1__* parent, struct sType*  it  , int it2, _Bool* it3);
static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType**  values  );
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char**  values  );
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  item  , _Bool by_pointer);
static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self);
static void map$2char$phsFun$ph_remove_ordered_entry(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phsFun$ph_key_position(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
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
static void map$2char$phsVar$ph_remove_ordered_entry(struct map$2char$phsVar$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phsVar$ph_key_position(struct map$2char$phsVar$ph* self, char*  key  , _Bool by_pointer);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject*  self  );
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void CVALUE_finalize(struct CVALUE*  self  );
static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun*  v1  , char*  v2  );
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
static struct sClass*  map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  default_value  , _Bool by_pointer);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
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
static struct sType*  expand_typedef_for_compare(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expand_typedef_for_compare"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    # 5 "32function2.nc"
    result=(struct sType* )come_increment_ref_count(normalize_loadvar_type_for_compare(type,info), "32function2.nc", 5, 1);
    # 11 "32function2.nc"
    if(result==((void*)0)) {
        # 8 "32function2.nc"
                __result_obj__0 = (struct sType* )come_increment_ref_count(((void*)0), "32function2.nc", 8, 2);
        come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 8, 35);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "32function2.nc}", 8, 36);
        return __result_obj__0;
    }
    # 11 "32function2.nc"
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sType* )come_increment_ref_count(((struct sType* )(__right_value0=expand_typedef_for_assign((struct sType* )come_increment_ref_count(result, "32function2.nc", 11, 37),info))), "32function2.nc", 11, 38);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 11, 39);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "32function2.nc}", 11, 40);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "32function2.nc}", 11, 41);
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    # 1 "sType_finalize"
    # 3 "sType_finalize"
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        # 2 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 3);
    }
    # 4 "sType_finalize"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 3 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 4);
    }
    # 5 "sType_finalize"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 4 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 7);
    }
    # 6 "sType_finalize"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 5 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 8);
    }
    # 7 "sType_finalize"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 6 "sType_finalize"
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 9):(void*)0);
    }
    # 8 "sType_finalize"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 7 "sType_finalize"
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 10):(void*)0);
    }
    # 9 "sType_finalize"
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        # 8 "sType_finalize"
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 11));
    }
    # 10 "sType_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 9 "sType_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 12));
    }
    # 11 "sType_finalize"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 10 "sType_finalize"
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 13));
    }
    # 12 "sType_finalize"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 11 "sType_finalize"
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 14));
    }
    # 13 "sType_finalize"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 12 "sType_finalize"
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 15));
    }
    # 14 "sType_finalize"
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        # 13 "sType_finalize"
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 16));
    }
    # 15 "sType_finalize"
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        # 14 "sType_finalize"
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 17));
    }
    # 16 "sType_finalize"
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        # 15 "sType_finalize"
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 18));
    }
    # 17 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        # 16 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 21);
    }
    # 18 "sType_finalize"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 17 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 22);
    }
    # 19 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 18 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 24);
    }
    # 20 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 19 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 25);
    }
    # 21 "sType_finalize"
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        # 20 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 26);
    }
    # 22 "sType_finalize"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 21 "sType_finalize"
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 27));
    }
    # 23 "sType_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 22 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 28);
    }
    # 24 "sType_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 23 "sType_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 0, 31);
    }
    # 25 "sType_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 24 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 32);
    }
    # 26 "sType_finalize"
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        # 25 "sType_finalize"
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 33):(void*)0);
    }
    # 27 "sType_finalize"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 26 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 34);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 6);
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
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 5);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 20);
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
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 19):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 23);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 30);
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
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 29));
    }
            neo_current_frame = fr.prev;
}

static int pointer_level_for_compare(struct sType*  type  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "pointer_level_for_compare"; neo_current_frame = &fr;
    # 20 "32function2.nc"
    if(type==((void*)0)) {
        # 17 "32function2.nc"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 22 "32function2.nc"
        neo_current_frame = fr.prev;
    return type->mPointerNum+(((type->mPointerNum==0)?(type->mArrayPointerNum):(0)))+(((type->mArrayPointerType)?(1):(0)));
    neo_current_frame = fr.prev;
}

static _Bool compare_field_by_pointer(struct sType*  original_field_type  , struct sType*  field_type  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "compare_field_by_pointer"; neo_current_frame = &fr;
    int pointer_level;
    memset(&pointer_level, 0, sizeof(pointer_level));
    # 31 "32function2.nc"
    if(field_type==((void*)0)) {
        # 28 "32function2.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 31 "32function2.nc"
    pointer_level=pointer_level_for_compare(field_type);
    # 37 "32function2.nc"
    if(field_type->mFunctionPointerNum>0) {
        # 34 "32function2.nc"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 41 "32function2.nc"
    if(pointer_level>1) {
        # 38 "32function2.nc"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 45 "32function2.nc"
    if(original_field_type&&original_field_type->mTypedefOriginalType&&pointer_level>0) {
        # 42 "32function2.nc"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 45 "32function2.nc"
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_finalizer_automatically"; neo_current_frame = &fr;
    struct sClass*  current_stack_frame_struct  ;
    struct sFun*  caller_fun  ;
    void* __right_value0 = (void*)0;
    struct buffer*  if_expression_buffer  ;
    struct buffer*  __dec_obj1  ;
    struct buffer*  loop_expression_buffer  ;
    struct buffer*  __dec_obj2  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj3  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char*  last_code  ;
    char*  __dec_obj4  ;
    char*  last_code2  ;
    char*  __dec_obj5  ;
    char*  sname_top  ;
    int sline_top;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    _Bool no_output_come_code;
    char*  real_fun_name  ;
    struct sFun*  finalizer  ;
    struct sType*  type_before  ;
    struct sType*  type2  ;
    char*  fun_name2  ;
    struct sType*  type_  ;
    char*  none_generics_name  ;
    char*  generics_fun_name  ;
    struct sGenericsFun*  generics_fun  ;
    struct tuple2$2char$ph_Bool$* multiple_assign_var1
;    char*  name  =0;
    _Bool err=0;
    char*  __dec_obj40  ;
    int i;
    char*  new_fun_name  ;
    char*  __dec_obj41  ;
    char*  __dec_obj42  ;
    struct sType*  __dec_obj43  ;
    char*  __dec_obj44  ;
    char*  user_real_fun_name  ;
    struct sFun*  user_finalizer  ;
    struct sType*  type2_8  ;
    struct sType*  __dec_obj45  ;
    struct sType*  normalized_type  ;
    struct sType*  lifecycle_type  ;
    struct sClass*  klass  ;
    int pointer_level;
    void* __right_value1 = (void*)0;
    struct buffer*  source  ;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_3;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var2
;    char*  name_11  =0;
    struct sType*  field_type  =0;
    struct sType*  field_type2  ;
    struct sType*  __dec_obj46  ;
    _Bool weak_field;
    struct sType*  Value  ;
    _Bool owned_cycle;
    _Bool _conditional_value_X0;
    struct sType*  Value_12  ;
    struct __current_stack1__ __current_stack1__;
    char* p;
    int sline;
    char*  sname  ;
    char* head;
    struct buffer*  source3  ;
    struct buffer*  __dec_obj47  ;
    char*  __dec_obj48  ;
    struct sBlock*  block  ;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    char*  name_14  ;
    struct sType*  self_type  ;
    struct sType*  __list_values1__[1]  ;
    struct list$1sType$ph* param_types;
    char*  __list_values2__[1]  ;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun*  fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value1;
    struct sFunNode* _inf_obj_value1;
    struct sNode* node;
    _Bool Value_33;
    struct buffer*  __dec_obj87  ;
    char*  __dec_obj88  ;
    char*  __dec_obj89  ;
    char*  __dec_obj90  ;
    char*  __dec_obj91  ;
    struct buffer*  __dec_obj92  ;
    struct buffer*  __dec_obj93  ;
    struct buffer*  __dec_obj94  ;
    struct list$1sRightValueObject$ph* __dec_obj95;
    struct list$1CVALUE$ph* __dec_obj96;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    memset(&current_stack_frame_struct, 0, sizeof(current_stack_frame_struct));
    memset(&caller_fun, 0, sizeof(caller_fun));
    memset(&if_expression_buffer, 0, sizeof(if_expression_buffer));
    memset(&loop_expression_buffer, 0, sizeof(loop_expression_buffer));
    memset(&paren_block_buffer, 0, sizeof(paren_block_buffer));
    memset(&right_value_max, 0, sizeof(right_value_max));
    memset(&right_value_num, 0, sizeof(right_value_num));
    memset(&max_conditional, 0, sizeof(max_conditional));
    memset(&num_conditional, 0, sizeof(num_conditional));
    memset(&in_conditional, 0, sizeof(in_conditional));
    memset(&last_code, 0, sizeof(last_code));
    memset(&last_code2, 0, sizeof(last_code2));
    memset(&sname_top, 0, sizeof(sname_top));
    memset(&sline_top, 0, sizeof(sline_top));
    memset(&stack_saved, 0, sizeof(stack_saved));
    memset(&right_value_objects, 0, sizeof(right_value_objects));
    memset(&no_output_come_code, 0, sizeof(no_output_come_code));
    memset(&real_fun_name, 0, sizeof(real_fun_name));
    memset(&finalizer, 0, sizeof(finalizer));
    memset(&type_before, 0, sizeof(type_before));
    memset(&type2, 0, sizeof(type2));
    memset(&fun_name2, 0, sizeof(fun_name2));
    memset(&type_, 0, sizeof(type_));
    memset(&none_generics_name, 0, sizeof(none_generics_name));
    memset(&generics_fun_name, 0, sizeof(generics_fun_name));
    memset(&generics_fun, 0, sizeof(generics_fun));
    memset(&i, 0, sizeof(i));
    memset(&new_fun_name, 0, sizeof(new_fun_name));
    memset(&user_real_fun_name, 0, sizeof(user_real_fun_name));
    memset(&user_finalizer, 0, sizeof(user_finalizer));
    memset(&type2_8, 0, sizeof(type2_8));
    memset(&normalized_type, 0, sizeof(normalized_type));
    memset(&lifecycle_type, 0, sizeof(lifecycle_type));
    memset(&klass, 0, sizeof(klass));
    memset(&pointer_level, 0, sizeof(pointer_level));
    memset(&source, 0, sizeof(source));
    memset(&_o2_saved_3, 0, sizeof(_o2_saved_3));
    memset(&it, 0, sizeof(it));
    memset(&field_type2, 0, sizeof(field_type2));
    memset(&weak_field, 0, sizeof(weak_field));
    memset(&Value, 0, sizeof(Value));
    memset(&owned_cycle, 0, sizeof(owned_cycle));
    memset(&Value_12, 0, sizeof(Value_12));
    memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
    memset(&p, 0, sizeof(p));
    memset(&sline, 0, sizeof(sline));
    memset(&sname, 0, sizeof(sname));
    memset(&head, 0, sizeof(head));
    memset(&source3, 0, sizeof(source3));
    memset(&block, 0, sizeof(block));
    memset(&result_type, 0, sizeof(result_type));
    memset(&name_14, 0, sizeof(name_14));
    memset(&self_type, 0, sizeof(self_type));
    memset(&param_types, 0, sizeof(param_types));
    memset(&param_names, 0, sizeof(param_names));
    memset(&param_default_parametors, 0, sizeof(param_default_parametors));
    memset(&fun2, 0, sizeof(fun2));
    memset(&fun, 0, sizeof(fun));
    memset(&node, 0, sizeof(node));
    memset(&Value_33, 0, sizeof(Value_33));
    # 51 "32function2.nc"
    current_stack_frame_struct=info->current_stack_frame_struct;
    # 52 "32function2.nc"
    info->current_stack_frame_struct=((void*)0);
    # 53 "32function2.nc"
    caller_fun=info->caller_fun;
    # 54 "32function2.nc"
    info->caller_fun=info->come_fun;
    # 59 "32function2.nc"
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "32function2.nc", 59, 42);
    # 60 "32function2.nc"
    __dec_obj1=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 60, 43);
    # 61 "32function2.nc"
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "32function2.nc", 61, 44);
    # 62 "32function2.nc"
    __dec_obj2=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 62, 45);
    # 63 "32function2.nc"
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "32function2.nc", 63, 46);
    # 64 "32function2.nc"
    __dec_obj3=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 64, 47);
    # 66 "32function2.nc"
    right_value_max=info->right_value_max;
    # 67 "32function2.nc"
    right_value_num=info->right_value_num;
    # 68 "32function2.nc"
    max_conditional=info->max_conditional;
    # 69 "32function2.nc"
    num_conditional=info->num_conditional;
    # 70 "32function2.nc"
    in_conditional=info->in_conditional;
    # 71 "32function2.nc"
    info->in_conditional=(_Bool)0;
    # 73 "32function2.nc"
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "32function2.nc", 73, 48);
    # 74 "32function2.nc"
    __dec_obj4=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 74, 49);
    # 75 "32function2.nc"
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "32function2.nc", 75, 50);
    # 76 "32function2.nc"
    __dec_obj5=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 76, 51);
    # 78 "32function2.nc"
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"32function2.nc",78), "32function2.nc", 78, 52);
    # 79 "32function2.nc"
    sline_top=info->sline;
    # 81 "32function2.nc"
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "32function2.nc", 81, 53);
    # 82 "32function2.nc"
    right_value_objects=info->right_value_objects;
    # 84 "32function2.nc"
    no_output_come_code=info->no_output_come_code;
    # 85 "32function2.nc"
    info->no_output_come_code=(_Bool)0;
    # 52 "32function2.nc"
    real_fun_name=((void*)0);
    # 53 "32function2.nc"
    finalizer=((void*)0);
    # 55 "32function2.nc"
    __right_value0 = (void*)0;
    type_before=(struct sType* )come_increment_ref_count(sType_clone(type), "32function2.nc", 55, 227);
    # 57 "32function2.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(sType_clone(type), "32function2.nc", 57, 228);
    # 58 "32function2.nc"
    type2->mHeap=(_Bool)0;
    # 60 "32function2.nc"
    __right_value0 = (void*)0;
    fun_name2=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1), "32function2.nc", 60, 229);
    # 62 "32function2.nc"
    __right_value0 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(get_no_solved_type2(type), "32function2.nc", 62, 230);
    # 108 "32function2.nc"
    if(list$1sType$ph_length(type_->mGenericsTypes)>0) {
        # 65 "32function2.nc"
        __right_value0 = (void*)0;
        finalizer=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        # 87 "32function2.nc"
        if(finalizer==((void*)0)) {
            # 68 "32function2.nc"
            __right_value0 = (void*)0;
            none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type2->mClass->mName), "32function2.nc", 68, 287);
            # 70 "32function2.nc"
            __right_value0 = (void*)0;
            generics_fun_name=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "32function2.nc", 70, 288);
            # 71 "32function2.nc"
            __right_value0 = (void*)0;
            generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
            # 85 "32function2.nc"
            if(generics_fun) {
                # 74 "32function2.nc"
                __right_value0 = (void*)0;
                multiple_assign_var1=((struct tuple2$2char$ph_Bool$*)(__right_value0=create_generics_fun((char* )come_increment_ref_count(fun_name2, "32function2.nc", 74, 329),generics_fun,type_,info)));
                name=(char* )come_increment_ref_count(multiple_assign_var1->v1, "32function2.nc", 74, 330);
                err=multiple_assign_var1->v2;
                come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "32function2.nc}", 74, 332);
                # 82 "32function2.nc"
                if(!err) {
                    # 78 "32function2.nc"
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    # 79 "32function2.nc"
                    exit(2);
                }
                # 82 "32function2.nc"
                __right_value0 = (void*)0;
                finalizer=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 85, 333));
            }
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 87, 334));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 87, 335));
        }
        # 87 "32function2.nc"
        __dec_obj40=real_fun_name,
        real_fun_name=(char* )come_increment_ref_count(fun_name2, "32function2.nc", 87, 337);
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 87, 336);
    }
    else {
        # 90 "32function2.nc"
        # 101 "32function2.nc"
        for(i=128-1        ;i>=1;i--){
            # 92 "32function2.nc"
            __right_value0 = (void*)0;
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i), "32function2.nc", 92, 338);
            # 93 "32function2.nc"
            __right_value0 = (void*)0;
            finalizer=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            # 99 "32function2.nc"
            if(finalizer) {
                # 96 "32function2.nc"
                __right_value0 = (void*)0;
                __dec_obj41=fun_name2,
                fun_name2=(char* )come_increment_ref_count(__builtin_string(new_fun_name,"32function2.nc",96), "32function2.nc", 96, 340);
                __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 96, 339);
                # 97 "32function2.nc"
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 97, 341));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 101, 342));
        }
        # 105 "32function2.nc"
        if(finalizer==((void*)0)) {
            # 102 "32function2.nc"
            __right_value0 = (void*)0;
            finalizer=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
        # 105 "32function2.nc"
        __dec_obj42=real_fun_name,
        real_fun_name=(char* )come_increment_ref_count(fun_name2, "32function2.nc", 105, 344);
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 105, 343);
    }
    # 271 "32function2.nc"
    if(finalizer==((void*)0)) {
        # 109 "32function2.nc"
        __dec_obj43=type_,
        type_=(struct sType* )come_increment_ref_count(type_before, "32function2.nc", 109, 346);
        come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 109, 345);
        # 111 "32function2.nc"
        __right_value0 = (void*)0;
        __dec_obj44=real_fun_name,
        real_fun_name=(char* )come_increment_ref_count(create_method_name(type_,(_Bool)0,fun_name,info,(_Bool)1), "32function2.nc", 111, 348);
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 111, 347);
        # 113 "32function2.nc"
        __right_value0 = (void*)0;
        user_real_fun_name=(char* )come_increment_ref_count(create_method_name(type_,(_Bool)0,"user_finalize",info,(_Bool)1), "32function2.nc", 113, 349);
        # 114 "32function2.nc"
        __right_value0 = (void*)0;
        user_finalizer=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name)));
        # 116 "32function2.nc"
        __right_value0 = (void*)0;
        type2_8=(struct sType* )come_increment_ref_count(solve_generics(type_,type_,info), "32function2.nc", 116, 350);
        # 118 "32function2.nc"
        __dec_obj45=type_,
        type_=(struct sType* )come_increment_ref_count(type2_8, "32function2.nc", 118, 352);
        come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 118, 351);
        # 120 "32function2.nc"
        __right_value0 = (void*)0;
        normalized_type=(struct sType* )come_increment_ref_count(expand_typedef_for_compare(type_,info), "32function2.nc", 120, 353);
        # 121 "32function2.nc"
        lifecycle_type=type_;
        # 125 "32function2.nc"
        if(normalized_type) {
            # 123 "32function2.nc"
            lifecycle_type=normalized_type;
        }
        # 125 "32function2.nc"
        klass=lifecycle_type->mClass;
        # 126 "32function2.nc"
        pointer_level=pointer_level_for_compare(lifecycle_type);
        # 268 "32function2.nc"
        if((pointer_level==1&&klass->mStruct)||type_->mAllocaValue) {
            # 129 "32function2.nc"
            __right_value0 = (void*)0;
            source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "32function2.nc", 129, 354, "struct buffer* "), "32function2.nc", 129, 355)), "32function2.nc", 129, 356);
            # 131 "32function2.nc"
            buffer_append_char(source,123);
            # 133 "32function2.nc"
            buffer_append_str(source,"\nusing unsafe;\n");
            # 144 "32function2.nc"
            __right_value0 = (void*)0;
            klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            # 195 "32function2.nc"
            for(_o2_saved_3=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields, "32function2.nc", 145, 395),it=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_3)            ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_3);it=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_3)){
                # 146 "32function2.nc"
                multiple_assign_var2=it;
                name_11=(char* )come_increment_ref_count(multiple_assign_var2->v1, "32function2.nc", 146, 396);
                field_type=(struct sType* )come_increment_ref_count(multiple_assign_var2->v2, "32function2.nc", 146, 397);
                # 147 "32function2.nc"
                __right_value0 = (void*)0;
                field_type2=(struct sType* )come_increment_ref_count(expand_typedef_for_compare(field_type,info), "32function2.nc", 147, 398);
                # 152 "32function2.nc"
                if(field_type2==((void*)0)) {
                    # 149 "32function2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj46=field_type2,
                    field_type2=(struct sType* )come_increment_ref_count(sType_clone(field_type), "32function2.nc", 149, 400);
                    come_call_finalizer(sType_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 149, 399);
                }
                # 152 "32function2.nc"
                weak_field=field_type->mWeak;
                # 159 "32function2.nc"
                Value=(struct sType* )come_increment_ref_count(field_type->mNoSolvedGenericsType, "32function2.nc", 153, 401);
                if(Value) {
                    # 157 "32function2.nc"
                    if(Value->mWeak) {
                        # 155 "32function2.nc"
                        weak_field=(_Bool)1;
                    }
                }
                # 159 "32function2.nc"
                owned_cycle=(_Bool)0;
                # 174 "32function2.nc"
                if(!weak_field) {
                    # 165 "32function2.nc"
                    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X0=(is_owned_main((struct sType* )come_increment_ref_count(type_, "32function2.nc", 161, 402),klass,(struct sType* )come_increment_ref_count(sType_clone(field_type), "32function2.nc", 161, 403),(struct sType* )come_increment_ref_count(sType_clone(type_), "32function2.nc", 161, 404),info)));_conditional_value_X0;})) {
                        # 162 "32function2.nc"
                        owned_cycle=(_Bool)1;
                    }
                    # 172 "32function2.nc"
                    Value_12=(struct sType* )come_increment_ref_count(field_type->mNoSolvedGenericsType, "32function2.nc", 165, 405);
                    if(Value_12) {
                        # 171 "32function2.nc"
                        ({                        __current_stack1__.Value_12 = &Value_12;
                        __current_stack1__.name_11 = &name_11;
                        __current_stack1__.field_type = &field_type;
                        __current_stack1__.field_type2 = &field_type2;
                        __current_stack1__.weak_field = &weak_field;
                        __current_stack1__.Value = &Value;
                        __current_stack1__.owned_cycle = &owned_cycle;
                        __current_stack1__.source = &source;
                        __current_stack1__.it = &it;
                        __current_stack1__.user_real_fun_name = &user_real_fun_name;
                        __current_stack1__.user_finalizer = &user_finalizer;
                        __current_stack1__.type2_8 = &type2_8;
                        __current_stack1__.normalized_type = &normalized_type;
                        __current_stack1__.lifecycle_type = &lifecycle_type;
                        __current_stack1__.klass = &klass;
                        __current_stack1__.pointer_level = &pointer_level;
                        __current_stack1__.type = &type;
                        __current_stack1__.fun_name = &fun_name;
                        __current_stack1__.info = &info;
                        __current_stack1__.current_stack_frame_struct = &current_stack_frame_struct;
                        __current_stack1__.caller_fun = &caller_fun;
                        __current_stack1__.if_expression_buffer = &if_expression_buffer;
                        __current_stack1__.loop_expression_buffer = &loop_expression_buffer;
                        __current_stack1__.paren_block_buffer = &paren_block_buffer;
                        __current_stack1__.right_value_max = &right_value_max;
                        __current_stack1__.right_value_num = &right_value_num;
                        __current_stack1__.max_conditional = &max_conditional;
                        __current_stack1__.num_conditional = &num_conditional;
                        __current_stack1__.in_conditional = &in_conditional;
                        __current_stack1__.last_code = &last_code;
                        __current_stack1__.last_code2 = &last_code2;
                        __current_stack1__.sname_top = &sname_top;
                        __current_stack1__.sline_top = &sline_top;
                        __current_stack1__.stack_saved = &stack_saved;
                        __current_stack1__.right_value_objects = &right_value_objects;
                        __current_stack1__.no_output_come_code = &no_output_come_code;
                        __current_stack1__.real_fun_name = &real_fun_name;
                        __current_stack1__.finalizer = &finalizer;
                        __current_stack1__.type_before = &type_before;
                        __current_stack1__.type2 = &type2;
                        __current_stack1__.fun_name2 = &fun_name2;
                        __current_stack1__.type_ = &type_;
                        })                        ,                        list$1sType$ph_each(Value_12->mGenericsTypes,&__current_stack1__,(void*)method_block1_32function2nc);
                    }
                    come_call_finalizer(sType_finalize, Value_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 174, 411);
                }
                # 178 "32function2.nc"
                if(owned_cycle) {
                    # 175 "32function2.nc"
                    warning_msg(info,"Cyclic ownership detected involving %s. Don't use heap to break cycle, but sometimes it works. If you need no check this to use _weak attribute to the fields.",field_type->mClass->mName);
                }
                # 193 "32function2.nc"
                if(field_type2->mHeap) {
                    # 179 "32function2.nc"
                    char source2[1024];
                    memset(&source2, 0, sizeof(source2));
                    # 180 "32function2.nc"
                    snprintf(source2,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_11,name_11,name_11,name_11);
                    # 182 "32function2.nc"
                    buffer_append_str(source,source2);
                }
                else if(field_type2->mChannel) {
                    # 185 "32function2.nc"
                    char source2_13[1024];
                    memset(&source2_13, 0, sizeof(source2_13));
                    # 186 "32function2.nc"
                    snprintf(source2_13,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0) && come_get_ref_count(self) == 0) { close(self.%s[0]); }",name_11,name_11);
                    # 187 "32function2.nc"
                    buffer_append_str(source,source2_13);
                    # 189 "32function2.nc"
                    snprintf(source2_13,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0) && come_get_ref_count(self) == 0) { close(self.%s[1]); }",name_11,name_11);
                    # 191 "32function2.nc"
                    buffer_append_str(source,source2_13);
                }
                (name_11 = come_decrement_ref_count(name_11, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 195, 412));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 195, 413);
                come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 195, 414);
                come_call_finalizer(sType_finalize, Value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 195, 415);
            }
            # 195 "32function2.nc"
            buffer_append_char(source,125);
            # 197 "32function2.nc"
            p=info->p;
            # 198 "32function2.nc"
            sline=info->sline;
            # 199 "32function2.nc"
            sname=(char* )come_increment_ref_count(info->sname, "32function2.nc", 199, 416);
            # 200 "32function2.nc"
            head=info->head;
            # 201 "32function2.nc"
            source3=(struct buffer* )come_increment_ref_count(info->source, "32function2.nc", 201, 417);
            # 203 "32function2.nc"
            __dec_obj47=info->source,
            info->source=(struct buffer* )come_increment_ref_count(source, "32function2.nc", 203, 419);
            come_call_finalizer(buffer_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 203, 418);
            # 207 "32function2.nc"
            if(info->p==((void*)0)) {
                # 205 "32function2.nc"
                info->p=info->source->buf;
            }
            # 207 "32function2.nc"
            info->p=info->source->buf;
            # 208 "32function2.nc"
            info->head=source->buf;
            # 210 "32function2.nc"
            __right_value0 = (void*)0;
            __dec_obj48=info->sname,
            info->sname=(char* )come_increment_ref_count(__builtin_string(real_fun_name,"32function2.nc",210), "32function2.nc", 210, 421);
            __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 210, 420);
            # 211 "32function2.nc"
            info->sline=0;
            # 213 "32function2.nc"
            __right_value0 = (void*)0;
            block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "32function2.nc", 213, 422);
            # 215 "32function2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "32function2.nc", 215, 423, "struct sType* "), "32function2.nc", 215, 424),(char*)come_increment_ref_count(xsprintf("void"), "32function2.nc", 215, 425),(_Bool)0,info,(_Bool)0,0), "32function2.nc", 215, 426);
            # 216 "32function2.nc"
            __right_value0 = (void*)0;
            name_14=(char* )come_increment_ref_count((char* )come_memdup(real_fun_name, "32function2.nc", 216, 427, "char* "), "32function2.nc", 216, 428);
            # 217 "32function2.nc"
            __right_value0 = (void*)0;
            self_type=(struct sType* )come_increment_ref_count(sType_clone(type_), "32function2.nc", 217, 429);
            # 218 "32function2.nc"
            self_type->mHeap=(_Bool)0;
            # 222 "32function2.nc"
            if(self_type->mPointerNum==0) {
                # 220 "32function2.nc"
                self_type->mPointerNum=1;
            }
            # 225 "32function2.nc"
            if(self_type->mPointerNum>1) {
                # 223 "32function2.nc"
                self_type->mPointerNum=1;
            }
            # 225 "32function2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values1__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "32function2.nc", 3, 448, "struct list$1sType$ph"), "32function2.nc", 3, 449),1,__list_values1__)), "32function2.nc", 225, 450);
            # 226 "32function2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values2__[0]=((char* )(__right_value0=__builtin_string("self","32function2.nc",226))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "32function2.nc", 3, 469, "struct list$1char$ph"), "32function2.nc", 3, 470),1,__list_values2__)), "32function2.nc", 226, 471);
            # 227 "32function2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "32function2.nc", 227, 472, "struct list$1char$ph*"), "32function2.nc", 227, 473)), "32function2.nc", 227, 474);
            # 228 "32function2.nc"
            list$1char$ph_push_back(param_default_parametors,((void*)0));
            # 230 "32function2.nc"
            result_type->mStatic=(_Bool)0;
            # 231 "32function2.nc"
            result_type->mUniq=(_Bool)0;
            # 232 "32function2.nc"
            result_type->mInline=(_Bool)0;
            # 234 "32function2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            fun2=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(name_14,"32function2.nc",234)))), "32function2.nc", 234, 475);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "32function2.nc", 234, 476));
            # 258 "32function2.nc"
            if(fun2==((void*)0)||fun2->mExternal) {
                # 240 "32function2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "32function2.nc", 236, 477, "struct sFun* "), "32function2.nc", 240, 478),(char* )come_increment_ref_count(name_14, "32function2.nc", 240, 479),(struct sType*)come_increment_ref_count(result_type, "32function2.nc", 240, 480),(struct list$1sType$ph*)come_increment_ref_count(param_types, "32function2.nc", 240, 481),(struct list$1char$ph*)come_increment_ref_count(param_names, "32function2.nc", 240, 482),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "32function2.nc", 240, 483),(_Bool)0,(_Bool)0,(struct sBlock* )come_increment_ref_count(block, "32function2.nc", 240, 484),(_Bool)1,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "32function2.nc", 240, 485),(char*)come_increment_ref_count(xsprintf(""), "32function2.nc", 240, 486),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "32function2.nc", 240, 487)), "32function2.nc", 240, 488);
                # 241 "32function2.nc"
                fun->mGenericsFun=(_Bool)1;
                # 243 "32function2.nc"
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(name_14,"32function2.nc",243), "32function2.nc", 243, 514),(struct sFun*)come_increment_ref_count(fun, "32function2.nc", 243, 515),(_Bool)0);
                # 245 "32function2.nc"
                finalizer=fun;
                # 247 "32function2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "32function2.nc", 247, 519, "struct sNode");
                _inf_obj_value1=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "32function2.nc", 247, 516, "struct sFunNode* "), "32function2.nc", 247, 517),(struct sFun*)come_increment_ref_count(fun, "32function2.nc", 247, 518),info))), "32function2.nc", 247, 520);
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
                node=(struct sNode*)come_increment_ref_count(_inf_value1, "32function2.nc", 247, 734);
                come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "32function2.nc}", 247, 735);
                # 253 "32function2.nc"
                Value_33=node_compile(node,info);
                if(!Value_33) {
                    # 250 "32function2.nc"
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    # 251 "32function2.nc"
                    exit(2);
                }
                come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 258, 736);
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "32function2.nc", 258, 737):(void*)0);
            }
            else {
                # 255 "32function2.nc"
                finalizer=fun2;
            }
            # 258 "32function2.nc"
            __dec_obj87=info->source,
            info->source=(struct buffer* )come_increment_ref_count(source3, "32function2.nc", 258, 739);
            come_call_finalizer(buffer_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 258, 738);
            # 262 "32function2.nc"
            if(info->p==((void*)0)) {
                # 260 "32function2.nc"
                info->p=info->source->buf;
            }
            # 262 "32function2.nc"
            info->p=info->source->buf;
            # 263 "32function2.nc"
            info->p=p;
            # 264 "32function2.nc"
            info->head=head;
            # 265 "32function2.nc"
            info->sline=sline;
            # 266 "32function2.nc"
            __dec_obj88=info->sname,
            info->sname=(char* )come_increment_ref_count(sname, "32function2.nc", 266, 741);
            __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 266, 740);
            come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 268, 742);
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 268, 743);
            (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 268, 744));
            come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 268, 745);
            come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 268, 746);
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 268, 747);
            (name_14 = come_decrement_ref_count(name_14, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 268, 748));
            come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 268, 749);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 268, 750);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 268, 751);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 268, 752);
            come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 268, 753);
        }
        (user_real_fun_name = come_decrement_ref_count(user_real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 271, 754));
        come_call_finalizer(sType_finalize, type2_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 271, 755);
        come_call_finalizer(sType_finalize, normalized_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 271, 756);
    }
    # 271 "32function2.nc"
    info->no_output_come_code=no_output_come_code;
    # 272 "32function2.nc"
    __right_value0 = (void*)0;
    __dec_obj89=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"32function2.nc",272), "32function2.nc", 272, 758);
    __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 272, 757);
    # 273 "32function2.nc"
    info->sline=sline_top;
    # 275 "32function2.nc"
    __dec_obj90=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "32function2.nc", 275, 760);
    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 275, 759);
    # 276 "32function2.nc"
    __dec_obj91=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "32function2.nc", 276, 762);
    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 276, 761);
    # 278 "32function2.nc"
    info->caller_fun=caller_fun;
    # 282 "32function2.nc"
    info->right_value_max=right_value_max;
    # 283 "32function2.nc"
    info->right_value_num=right_value_num;
    # 284 "32function2.nc"
    info->num_conditional=num_conditional;
    # 285 "32function2.nc"
    info->max_conditional=max_conditional;
    # 286 "32function2.nc"
    info->in_conditional=in_conditional;
    # 287 "32function2.nc"
    __dec_obj92=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "32function2.nc", 287, 764);
    come_call_finalizer(buffer_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 287, 763);
    # 288 "32function2.nc"
    __dec_obj93=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "32function2.nc", 288, 766);
    come_call_finalizer(buffer_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 288, 765);
    # 289 "32function2.nc"
    __dec_obj94=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "32function2.nc", 289, 768);
    come_call_finalizer(buffer_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 289, 767);
    # 290 "32function2.nc"
    info->current_stack_frame_struct=current_stack_frame_struct;
    # 291 "32function2.nc"
    __dec_obj95=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "32function2.nc", 8, 777);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 8, 776);
    # 292 "32function2.nc"
    __dec_obj96=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "32function2.nc", 6, 786);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 6, 785);
    # 272 "32function2.nc"
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "32function2.nc", 272, 787, "struct tuple2$2sFun$pchar$ph"), "32function2.nc", 6, 795),finalizer,(char* )come_increment_ref_count(real_fun_name, "32function2.nc", 6, 796)))), "32function2.nc", 272, 797);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 272, 798);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 272, 799);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 272, 800);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 272, 801));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 272, 802));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 272, 803));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 2, 805);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 2, 806));
    come_call_finalizer(sType_finalize, type_before, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 2, 807);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 2, 808);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 2, 809));
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 2, 810);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "32function2.nc}", 6, 811);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "32function2.nc}", 2, 812);
    return __result_obj__0;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj6  ;
    struct sType*  __dec_obj7  ;
    struct list$1sType$ph* __dec_obj11;
    struct sType*  __dec_obj12  ;
    struct sNode* __dec_obj13;
    struct sNode* __dec_obj14;
    char*  __dec_obj15  ;
    char*  __dec_obj16  ;
    char*  __dec_obj17  ;
    char*  __dec_obj18  ;
    char*  __dec_obj19  ;
    char*  __dec_obj20  ;
    char*  __dec_obj21  ;
    char*  __dec_obj22  ;
    struct list$1sNode$ph* __dec_obj26;
    struct list$1sNode$ph* __dec_obj27;
    struct list$1int$* __dec_obj28;
    struct list$1int$* __dec_obj29;
    struct sType*  __dec_obj30  ;
    char*  __dec_obj31  ;
    struct list$1sType$ph* __dec_obj32;
    struct list$1char$ph* __dec_obj36;
    struct sType*  __dec_obj37  ;
    struct sNode* __dec_obj38;
    struct list$1sNode$ph* __dec_obj39;
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
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 54, "struct sType* "), "sType_clone", 5, 55);
    # 7 "sType_clone"
    if(self!=((void*)0)) {
        # 6 "sType_clone"
        result->mClass=self->mClass;
    }
    # 8 "sType_clone"
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        # 7 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj6=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 57);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 56);
    }
    # 9 "sType_clone"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 8 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj7=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 59);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 58);
    }
    # 10 "sType_clone"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 9 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj11=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 76, 89);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 88);
    }
    # 11 "sType_clone"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 10 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj12=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 91);
        come_call_finalizer(sType_finalize, __dec_obj12,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 90);
    }
    # 12 "sType_clone"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 11 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj13=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 100);
        (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 99) :0);
    }
    # 13 "sType_clone"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 12 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj14=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 102);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 101) :0);
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
        __dec_obj15=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 103, "char* "), "sType_clone", 14, 105);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 104);
    }
    # 16 "sType_clone"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 15 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj16=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 106, "char* "), "sType_clone", 15, 108);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 107);
    }
    # 17 "sType_clone"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 16 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj17=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 109, "char* "), "sType_clone", 16, 111);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 110);
    }
    # 18 "sType_clone"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 17 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj18=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 112, "char* "), "sType_clone", 17, 114);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 113);
    }
    # 19 "sType_clone"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 18 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj19=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 115, "char* "), "sType_clone", 18, 117);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 116);
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
        __dec_obj20=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 118, "char* "), "sType_clone", 49, 120);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 119);
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
        __dec_obj21=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 121, "char* "), "sType_clone", 51, 123);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 122);
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
        __dec_obj22=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 124, "char* "), "sType_clone", 54, 126);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 125);
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
        __dec_obj26=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 15, 156);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 155);
    }
    # 59 "sType_clone"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 58 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj27=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 158);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 157);
    }
    # 60 "sType_clone"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 59 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj28=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 15, 178);
        come_call_finalizer(list$1int$_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 177);
    }
    # 61 "sType_clone"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 60 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj29=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 180);
        come_call_finalizer(list$1int$_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 179);
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
        __dec_obj30=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 182);
        come_call_finalizer(sType_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 181);
    }
    # 68 "sType_clone"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 67 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj31=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 183, "char* "), "sType_clone", 67, 185);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 184);
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
        __dec_obj32=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 187);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 186);
    }
    # 73 "sType_clone"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 72 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj36=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 15, 219);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 218);
    }
    # 74 "sType_clone"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 73 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj37=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 221);
        come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 220);
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
        __dec_obj38=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 223);
        (__dec_obj38 ? __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 222) :0);
    }
    # 77 "sType_clone"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 76 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj39=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 225);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 224);
    }
    # 77 "sType_clone"
        __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 226);
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 60);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 61);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1513, 62, "struct list$1sType$ph*"), "./neo-c.h", 1513, 66)), "./neo-c.h", 1513, 67);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1518, 82));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1521, 83));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 84);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 85);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 86);
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
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 63);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 64);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 65);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj8  ;
    struct list_item$1sType$ph* litem_0;
    struct sType*  __dec_obj9  ;
    struct list_item$1sType$ph* litem_1;
    struct sType*  __dec_obj10  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_0, 0, sizeof(litem_0));
    memset(&litem_1, 0, sizeof(litem_1));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 68);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1534, 69, "struct list_item$1sType$ph*"))), "./neo-c.h", 1534, 70);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj8=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1538, 72);
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 71);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1544, 73, "struct list_item$1sType$ph*"))), "./neo-c.h", 1544, 74);
        # 1546 "./neo-c.h"
        litem_0->prev=self->head;
        # 1547 "./neo-c.h"
        litem_0->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj9=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1548, 76);
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 75);
        # 1550 "./neo-c.h"
        self->tail=litem_0;
        # 1551 "./neo-c.h"
        self->head->next=litem_0;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1554, 77, "struct list_item$1sType$ph*"))), "./neo-c.h", 1554, 78);
        # 1556 "./neo-c.h"
        litem_1->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_1->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj10=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1558, 80);
        come_call_finalizer(sType_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 79);
        # 1560 "./neo-c.h"
        self->tail->next=litem_1;
        # 1561 "./neo-c.h"
        self->tail=litem_1;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 81);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 87);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 92);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 93):(void*)0);
        return __result_obj__0;
    }
    # 5 "sNode_clone"
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 94, "struct sNode*"), "sNode_clone", 5, 95);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 96);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 97):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 98):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 127);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 128);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1513, 129, "struct list$1sNode$ph*"), "./neo-c.h", 1513, 133)), "./neo-c.h", 1513, 134);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1518, 149));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1521, 150));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 151);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 152);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 153);
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
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 130);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 131);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 132);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj23;
    struct list_item$1sNode$ph* litem_2;
    struct sNode* __dec_obj24;
    struct list_item$1sNode$ph* litem_3;
    struct sNode* __dec_obj25;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_2, 0, sizeof(litem_2));
    memset(&litem_3, 0, sizeof(litem_3));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1531, 135):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1534, 136, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1534, 137);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj23=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1538, 139);
        (__dec_obj23 ? __dec_obj23 = come_decrement_ref_count(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1538, 138) :0);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1544, 140, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1544, 141);
        # 1546 "./neo-c.h"
        litem_2->prev=self->head;
        # 1547 "./neo-c.h"
        litem_2->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj24=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1548, 143);
        (__dec_obj24 ? __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1548, 142) :0);
        # 1550 "./neo-c.h"
        self->tail=litem_2;
        # 1551 "./neo-c.h"
        self->head->next=litem_2;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1554, 144, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1554, 145);
        # 1556 "./neo-c.h"
        litem_3->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_3->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj25=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1558, 147);
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1558, 146) :0);
        # 1560 "./neo-c.h"
        self->tail->next=litem_3;
        # 1561 "./neo-c.h"
        self->tail=litem_3;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1566, 148):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 154);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 159);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 160);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1513, 161, "struct list$1int$*"), "./neo-c.h", 1513, 165)), "./neo-c.h", 1513, 166);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1527, 173);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 174);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 175);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1485, 162);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 163);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 164);
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1534, 167, "struct list_item$1int$*"))), "./neo-c.h", 1534, 168);
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
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1544, 169, "struct list_item$1int$*"))), "./neo-c.h", 1544, 170);
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
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1554, 171, "struct list_item$1int$*"))), "./neo-c.h", 1554, 172);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 176);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 188);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 189);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1513, 190, "struct list$1char$ph*"), "./neo-c.h", 1513, 194)), "./neo-c.h", 1513, 195);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1518, 210, "char* "), "./neo-c.h", 1518, 211));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1521, 212, "char* "), "./neo-c.h", 1521, 213));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 214);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 215);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 216);
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 191);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 192);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 193);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj33  ;
    struct list_item$1char$ph* litem_6;
    char*  __dec_obj34  ;
    struct list_item$1char$ph* litem_7;
    char*  __dec_obj35  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_6, 0, sizeof(litem_6));
    memset(&litem_7, 0, sizeof(litem_7));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1531, 196));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1534, 197, "struct list_item$1char$ph*"))), "./neo-c.h", 1534, 198);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj33=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1538, 200);
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1538, 199);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1544, 201, "struct list_item$1char$ph*"))), "./neo-c.h", 1544, 202);
        # 1546 "./neo-c.h"
        litem_6->prev=self->head;
        # 1547 "./neo-c.h"
        litem_6->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj34=litem_6->item,
        litem_6->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1548, 204);
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1548, 203);
        # 1550 "./neo-c.h"
        self->tail=litem_6;
        # 1551 "./neo-c.h"
        self->head->next=litem_6;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1554, 205, "struct list_item$1char$ph*"))), "./neo-c.h", 1554, 206);
        # 1556 "./neo-c.h"
        litem_7->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_7->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj35=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1558, 208);
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1558, 207);
        # 1560 "./neo-c.h"
        self->tail->next=litem_7;
        # 1561 "./neo-c.h"
        self->tail=litem_7;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1566, 209));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 217);
    }
            neo_current_frame = fr.prev;
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

static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    # 4057 "./neo-c.h"
    # 4059 "./neo-c.h"
    # 4060 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sFun* ));
    # 4066 "./neo-c.h"
    if(self==((void*)0)) {
        # 4063 "./neo-c.h"
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4063, 231);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 258);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 259);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4075, 260);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4075, 261);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4075, 262);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4082, 263);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 264);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 265);
                return __result_obj__0;
            }
        }
        else {
            # 4086 "./neo-c.h"
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4086, 266);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 267);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 268);
            return __result_obj__0;
        }
    }
    # 4090 "./neo-c.h"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4090, 269);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 270);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 271);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    # 1 "sFun_finalize"
    # 3 "sFun_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 2 "sFun_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 232));
    }
    # 4 "sFun_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 3 "sFun_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 233);
    }
    # 5 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 4 "sFun_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 234);
    }
    # 6 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 5 "sFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 235);
    }
    # 7 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        # 6 "sFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 236);
    }
    # 8 "sFun_finalize"
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        # 7 "sFun_finalize"
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 237);
    }
    # 9 "sFun_finalize"
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        # 8 "sFun_finalize"
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 19, 244);
    }
    # 10 "sFun_finalize"
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        # 9 "sFun_finalize"
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 247);
    }
    # 11 "sFun_finalize"
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        # 10 "sFun_finalize"
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 248));
    }
    # 12 "sFun_finalize"
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        # 11 "sFun_finalize"
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 249));
    }
    # 13 "sFun_finalize"
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        # 12 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 250);
    }
    # 14 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        # 13 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 251);
    }
    # 15 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        # 14 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 252);
    }
    # 16 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        # 15 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 253);
    }
    # 17 "sFun_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 16 "sFun_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 254));
    }
    # 18 "sFun_finalize"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 17 "sFun_finalize"
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 255));
    }
    # 19 "sFun_finalize"
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        # 18 "sFun_finalize"
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 256));
    }
    # 20 "sFun_finalize"
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        # 19 "sFun_finalize"
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 257));
    }
            neo_current_frame = fr.prev;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sVar$ph* it;
    struct list_item$1sVar$ph* prev_it;
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 243);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1sVar$ph$p_finalize"
    # 3 "list_item$1sVar$ph$p_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 2 "list_item$1sVar$ph$p_finalize"
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 242);
    }
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    # 1 "sVar_finalize"
    # 3 "sVar_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 2 "sVar_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 238));
    }
    # 4 "sVar_finalize"
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        # 3 "sVar_finalize"
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 239));
    }
    # 5 "sVar_finalize"
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        # 4 "sVar_finalize"
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 240);
    }
    # 6 "sVar_finalize"
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        # 5 "sVar_finalize"
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 241));
    }
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    # 1 "sBlock_finalize"
    # 3 "sBlock_finalize"
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        # 2 "sBlock_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 245);
    }
    # 4 "sBlock_finalize"
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        # 3 "sBlock_finalize"
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 246);
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
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    # 4057 "./neo-c.h"
    # 4059 "./neo-c.h"
    # 4060 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sFun* ));
    # 4066 "./neo-c.h"
    if(self==((void*)0)) {
        # 4063 "./neo-c.h"
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4063, 272);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 273);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 274);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4075, 275);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4075, 276);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4075, 277);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4082, 278);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 279);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 280);
                return __result_obj__0;
            }
        }
        else {
            # 4086 "./neo-c.h"
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4086, 281);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 282);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 283);
            return __result_obj__0;
        }
    }
    # 4090 "./neo-c.h"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4090, 284);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 285);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 286);
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
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    # 4057 "./neo-c.h"
    # 4059 "./neo-c.h"
    # 4060 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sGenericsFun* ));
    # 4066 "./neo-c.h"
    if(self==((void*)0)) {
        # 4063 "./neo-c.h"
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4063, 289);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 300);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 301);
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
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4075, 302);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4075, 303);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4075, 304);
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
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4082, 305);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 306);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 307);
                return __result_obj__0;
            }
        }
        else {
            # 4086 "./neo-c.h"
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4086, 308);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 309);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 310);
            return __result_obj__0;
        }
    }
    # 4090 "./neo-c.h"
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4090, 311);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 312);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 313);
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
    # 1 "sGenericsFun_finalize"
    # 3 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        # 2 "sGenericsFun_finalize"
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 2, 290);
    }
    # 4 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        # 3 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 3, 291);
    }
    # 5 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        # 4 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 4, 292);
    }
    # 6 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 5 "sGenericsFun_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 5, 293));
    }
    # 7 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 6 "sGenericsFun_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 6, 294);
    }
    # 8 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 7 "sGenericsFun_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 7, 295);
    }
    # 9 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 8 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 8, 296);
    }
    # 10 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        # 9 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 9, 297);
    }
    # 11 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        # 10 "sGenericsFun_finalize"
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 10, 298));
    }
    # 12 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        # 11 "sGenericsFun_finalize"
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 11, 299));
    }
            neo_current_frame = fr.prev;
}

static struct sGenericsFun*  map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_operator_load_element"; neo_current_frame = &fr;
    struct sGenericsFun*  default_value  ;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    # 4057 "./neo-c.h"
    # 4059 "./neo-c.h"
    # 4060 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sGenericsFun* ));
    # 4066 "./neo-c.h"
    if(self==((void*)0)) {
        # 4063 "./neo-c.h"
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4063, 314);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 315);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 316);
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
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4075, 317);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4075, 318);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4075, 319);
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
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4082, 320);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 321);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 322);
                return __result_obj__0;
            }
        }
        else {
            # 4086 "./neo-c.h"
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4086, 323);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 324);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 325);
            return __result_obj__0;
        }
    }
    # 4090 "./neo-c.h"
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4090, 326);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 327);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 328);
    return __result_obj__0;
}

static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple2$2char$ph_Bool$$p_finalize"
    # 3 "tuple2$2char$ph_Bool$$p_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple2$2char$ph_Bool$$p_finalize"
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$ph_Bool$$p_finalize", 2, 331));
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4063, 357);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 366);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 367);
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
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 4075, 368);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4075, 369);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4075, 370);
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
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4082, 371);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 372);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 373);
                return __result_obj__0;
            }
        }
        else {
            # 4086 "./neo-c.h"
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4086, 374);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 375);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 376);
            return __result_obj__0;
        }
    }
    # 4090 "./neo-c.h"
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4090, 377);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 378);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 379);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    # 1 "sClass_finalize"
    # 3 "sClass_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 2 "sClass_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 358));
    }
    # 4 "sClass_finalize"
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        # 3 "sClass_finalize"
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 5, 363);
    }
    # 5 "sClass_finalize"
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        # 4 "sClass_finalize"
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 364));
    }
    # 6 "sClass_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 5 "sClass_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 365));
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 362);
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
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 361);
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
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 359));
    }
    # 4 "tuple2$2char$phsType$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple2$2char$phsType$ph$p_finalize"
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 360);
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4063, 380);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 381);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 382);
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
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 4075, 383);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4075, 384);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4075, 385);
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
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4082, 386);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 387);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 388);
                return __result_obj__0;
            }
        }
        else {
            # 4086 "./neo-c.h"
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4086, 389);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 390);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 391);
            return __result_obj__0;
        }
    }
    # 4090 "./neo-c.h"
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4090, 392);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 393);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 394);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_9;
    # 1682 "./neo-c.h"
    # 1689 "./neo-c.h"
    if(self==((void*)0)) {
        # 1685 "./neo-c.h"
        # 1686 "./neo-c.h"
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
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
    memset(&result_9,0,sizeof(struct tuple2$2char$phsType$ph*));
    # 1697 "./neo-c.h"
        __result_obj__0 = result_9;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_end"; neo_current_frame = &fr;
    # 1721 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
                neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_next"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_10;
    # 1701 "./neo-c.h"
    # 1709 "./neo-c.h"
    if(self==((void*)0)||self->it==((void*)0)) {
        # 1704 "./neo-c.h"
        # 1705 "./neo-c.h"
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
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
    memset(&result_10,0,sizeof(struct tuple2$2char$phsType$ph*));
    # 1717 "./neo-c.h"
        __result_obj__0 = result_10;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_each(struct list$1sType$ph* self, void* parent, void (*block)(void*,struct sType* ,int,_Bool*))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_each"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    struct list_item$1sType$ph* it;
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
        block(parent,(struct sType* )come_increment_ref_count(it->item, "./neo-c.h", 1733, 406),i,&end_flag);
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

void method_block1_32function2nc(struct __current_stack1__* parent, struct sType*  it  , int it2, _Bool* it3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block1_32function2nc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    _Bool _conditional_value_X0;
    # 171 "32function2.nc"
    if(({(_conditional_value_X0=(is_owned_main((struct sType* )come_increment_ref_count((*(parent->type_)), "32function2.nc", 168, 407),(*(parent->klass)),(struct sType* )come_increment_ref_count(sType_clone(it), "32function2.nc", 168, 408),(struct sType* )come_increment_ref_count(sType_clone((*(parent->type_))), "32function2.nc", 168, 409),(*(parent->info)))));_conditional_value_X0;})) {
        # 169 "32function2.nc"
        (*(parent->owned_cycle))=(_Bool)1;
    }
    come_call_finalizer(sType_finalize, it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 173, 410);
                            neo_current_frame = fr.prev;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType**  values  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1sType$ph* __result_obj__0;
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
        list$1sType$ph_push_back(self,(struct sType* )come_increment_ref_count(values[i], "./neo-c.h", 1494, 444));
    }
    # 1497 "./neo-c.h"
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1497, 445);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1497, 446);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1497, 447);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj49  ;
    struct list_item$1sType$ph* litem_15;
    struct sType*  __dec_obj50  ;
    struct list_item$1sType$ph* litem_16;
    struct sType*  __dec_obj51  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_15, 0, sizeof(litem_15));
    memset(&litem_16, 0, sizeof(litem_16));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 430);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1619, 431, "struct list_item$1sType$ph*"))), "./neo-c.h", 1619, 432);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj49=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1623, 434);
        come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 433);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_15=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1629, 435, "struct list_item$1sType$ph*"))), "./neo-c.h", 1629, 436);
        # 1631 "./neo-c.h"
        litem_15->prev=self->head;
        # 1632 "./neo-c.h"
        litem_15->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj50=litem_15->item,
        litem_15->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1633, 438);
        come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 437);
        # 1635 "./neo-c.h"
        self->tail=litem_15;
        # 1636 "./neo-c.h"
        self->head->next=litem_15;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_16=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1639, 439, "struct list_item$1sType$ph*"))), "./neo-c.h", 1639, 440);
        # 1641 "./neo-c.h"
        litem_16->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_16->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj51=litem_16->item,
        litem_16->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1643, 442);
        come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 441);
        # 1645 "./neo-c.h"
        self->tail->next=litem_16;
        # 1646 "./neo-c.h"
        self->tail=litem_16;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 443);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char**  values  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1char$ph* __result_obj__0;
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
        list$1char$ph_push_back(self,(char* )come_increment_ref_count(values[i], "./neo-c.h", 1494, 465));
    }
    # 1497 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1497, 466);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1497, 467);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1497, 468);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj52  ;
    struct list_item$1char$ph* litem_17;
    char*  __dec_obj53  ;
    struct list_item$1char$ph* litem_18;
    char*  __dec_obj54  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_17, 0, sizeof(litem_17));
    memset(&litem_18, 0, sizeof(litem_18));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1615, 451));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1619, 452, "struct list_item$1char$ph*"))), "./neo-c.h", 1619, 453);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj52=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1623, 455);
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1623, 454);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_17=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1629, 456, "struct list_item$1char$ph*"))), "./neo-c.h", 1629, 457);
        # 1631 "./neo-c.h"
        litem_17->prev=self->head;
        # 1632 "./neo-c.h"
        litem_17->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj53=litem_17->item,
        litem_17->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1633, 459);
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1633, 458);
        # 1635 "./neo-c.h"
        self->tail=litem_17;
        # 1636 "./neo-c.h"
        self->head->next=litem_17;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_18=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1639, 460, "struct list_item$1char$ph*"))), "./neo-c.h", 1639, 461);
        # 1641 "./neo-c.h"
        litem_18->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_18->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj54=litem_18->item,
        litem_18->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1643, 463);
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1643, 462);
        # 1645 "./neo-c.h"
        self->tail->next=litem_18;
        # 1646 "./neo-c.h"
        self->tail=litem_18;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1651, 464));
    neo_current_frame = fr.prev;
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
    memset(&add_to_key_list, 0, sizeof(add_to_key_list));
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    # 3899 "./neo-c.h"
    # 3905 "./neo-c.h"
    if(self==((void*)0)) {
        # 3902 "./neo-c.h"
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3902, 489));
        come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3902, 490);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3908 "./neo-c.h"
    if(self->len*10>=self->size) {
        # 3906 "./neo-c.h"
        map$2char$phsFun$ph_rehash(self);
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
                map$2char$phsFun$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                # 3927 "./neo-c.h"
                if(1) {
                    # 3921 "./neo-c.h"
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3921, 505));
                    # 3922 "./neo-c.h"
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3922, 506);
                }
                else {
                    # 3925 "./neo-c.h"
                    self->keys[it]=key;
                }
                # 3934 "./neo-c.h"
                if(1) {
                    # 3928 "./neo-c.h"
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3928, 507);
                    # 3929 "./neo-c.h"
                    self->items[it]=(struct sFun* )come_increment_ref_count(item, "./neo-c.h", 3929, 508);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3952, 509);
            }
            else {
                # 3955 "./neo-c.h"
                self->keys[it]=key;
            }
            # 3964 "./neo-c.h"
            if(1) {
                # 3958 "./neo-c.h"
                self->items[it]=(struct sFun* )come_increment_ref_count(item, "./neo-c.h", 3958, 510);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 3972, 511));
    }
    # 3975 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3975, 512));
    come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3975, 513);
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
    # 3816 "./neo-c.h"
    # 3818 "./neo-c.h"
    old_size=self->size;
    # 3819 "./neo-c.h"
    size=self->size*10;
    # 3820 "./neo-c.h"
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3820, 491, "char** "))), "./neo-c.h", 3820, 492);
    # 3821 "./neo-c.h"
    __right_value0 = (void*)0;
    items=(struct sFun** )come_increment_ref_count(((struct sFun** )(__right_value0=(struct sFun* *)come_calloc(1, sizeof(struct sFun* )*(1*(size)), "./neo-c.h", 3821, 493, "struct sFun** "))), "./neo-c.h", 3821, 494);
    # 3822 "./neo-c.h"
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3822, 495, "unsigned int*"))), "./neo-c.h", 3822, 496);
    # 3823 "./neo-c.h"
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3823, 497, "_Bool*"))), "./neo-c.h", 3823, 498);
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
    for(i_19=0    ;i_19<old_size;i_19++){
        # 3836 "./neo-c.h"
        if(!self->item_existance[i_19]) {
            # 3833 "./neo-c.h"
            continue;
        }
        # 3836 "./neo-c.h"
        key_hash=self->hashes[i_19];
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
                keys[n]=self->keys[i_19];
                # 3856 "./neo-c.h"
                items[n]=self->items[i_19];
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
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3865, 499));
    # 3866 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3866, 500));
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

static void map$2char$phsFun$ph_remove_ordered_entry(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    memset(&pos, 0, sizeof(pos));
    # 3444 "./neo-c.h"
    pos=map$2char$phsFun$ph_key_position(self,key,by_pointer);
    # 3448 "./neo-c.h"
    if(pos>=0) {
        # 3446 "./neo-c.h"
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phsFun$ph_key_position(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_key_position"; neo_current_frame = &fr;
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1942, 502);
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_22, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1972, 503);
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_25, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2005, 504);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1864, 501);
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

static void sFunNode_finalize(struct sFunNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_finalize"; neo_current_frame = &fr;
    # 1 "sFunNode_finalize"
    # 3 "sFunNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sFunNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFunNode_finalize", 2, 521));
    }
    # 4 "sFunNode_finalize"
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        # 3 "sFunNode_finalize"
        come_call_finalizer(sFun_finalize, self->mFun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunNode_finalize}", 3, 522);
    }
                    neo_current_frame = fr.prev;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_clone"; neo_current_frame = &fr;
    struct sFunNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFunNode*  result  ;
    char*  __dec_obj55  ;
    struct sFun*  __dec_obj86  ;
    memset(&result, 0, sizeof(result));
    # 3 "sFunNode_clone"
    # 5 "sFunNode_clone"
    if(self==(void*)0) {
        # 4 "sFunNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sFunNode_clone"
    result=(struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "sFunNode_clone", 5, 523, "struct sFunNode* "), "sFunNode_clone", 5, 524);
    # 7 "sFunNode_clone"
    if(self!=((void*)0)) {
        # 6 "sFunNode_clone"
        result->sline=self->sline;
    }
    # 8 "sFunNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sFunNode_clone"
        __right_value0 = (void*)0;
        __dec_obj55=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sFunNode_clone", 7, 525, "char* "), "sFunNode_clone", 7, 527);
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "sFunNode_clone", 7, 526);
    }
    # 9 "sFunNode_clone"
    if(self!=((void*)0)) {
        # 8 "sFunNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sFunNode_clone"
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        # 9 "sFunNode_clone"
        __right_value0 = (void*)0;
        __dec_obj86=result->mFun,
        result->mFun=(struct sFun* )come_increment_ref_count(sFun_clone(self->mFun), "sFunNode_clone", 9, 732);
        come_call_finalizer(sFun_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunNode_clone", 9, 731);
    }
    # 10 "sFunNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sFunNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFunNode_clone}", 10, 733);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sFun*  sFun_clone(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_clone"; neo_current_frame = &fr;
    struct sFun*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sFun*  result  ;
    char*  __dec_obj56  ;
    struct sType*  __dec_obj57  ;
    struct list$1sType$ph* __dec_obj58;
    struct list$1char$ph* __dec_obj59;
    struct list$1char$ph* __dec_obj60;
    struct sType*  __dec_obj61  ;
    struct list$1sVar$ph* __dec_obj69;
    struct sBlock*  __dec_obj75  ;
    char*  __dec_obj76  ;
    char*  __dec_obj77  ;
    struct buffer*  __dec_obj78  ;
    struct buffer*  __dec_obj79  ;
    struct buffer*  __dec_obj80  ;
    struct buffer*  __dec_obj81  ;
    char*  __dec_obj82  ;
    char*  __dec_obj83  ;
    char*  __dec_obj84  ;
    char*  __dec_obj85  ;
    memset(&result, 0, sizeof(result));
    # 3 "sFun_clone"
    # 5 "sFun_clone"
    if(self==(void*)0) {
        # 4 "sFun_clone"
                __result_obj__0 = (struct sFun* )come_increment_ref_count((void*)0, "sFun_clone", 4, 528);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 4, 529);
        return __result_obj__0;
    }
    # 5 "sFun_clone"
    result=(struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "sFun_clone", 5, 530, "struct sFun* "), "sFun_clone", 5, 531);
    # 7 "sFun_clone"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 6 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj56=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sFun_clone", 6, 532, "char* "), "sFun_clone", 6, 534);
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 6, 533);
    }
    # 8 "sFun_clone"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 7 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj57=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sFun_clone", 7, 536);
        come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 7, 535);
    }
    # 9 "sFun_clone"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 8 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj58=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sFun_clone", 8, 538);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 8, 537);
    }
    # 10 "sFun_clone"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 9 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj59=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sFun_clone", 9, 540);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 9, 539);
    }
    # 11 "sFun_clone"
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        # 10 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj60=result->mParamDefaultParametors,
        result->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamDefaultParametors), "sFun_clone", 10, 542);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 10, 541);
    }
    # 12 "sFun_clone"
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        # 11 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj61=result->mLambdaType,
        result->mLambdaType=(struct sType* )come_increment_ref_count(sType_clone(self->mLambdaType), "sFun_clone", 11, 544);
        come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 11, 543);
    }
    # 13 "sFun_clone"
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        # 12 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj69=result->mAllVar,
        result->mAllVar=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph$p_clone(self->mAllVar), "sFun_clone", 13, 592);
        come_call_finalizer(list$1sVar$ph_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 13, 591);
    }
    # 14 "sFun_clone"
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        # 13 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj75=result->mBlock,
        result->mBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(self->mBlock), "sFun_clone", 13, 701);
        come_call_finalizer(sBlock_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 13, 700);
    }
    # 15 "sFun_clone"
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        # 14 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj76=result->mTextBlock,
        result->mTextBlock=(char* )come_increment_ref_count((char* )come_memdup(self->mTextBlock, "sFun_clone", 14, 702, "char* "), "sFun_clone", 14, 704);
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 14, 703);
    }
    # 16 "sFun_clone"
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        # 15 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj77=result->mTextBlockSName,
        result->mTextBlockSName=(char* )come_increment_ref_count((char* )come_memdup(self->mTextBlockSName, "sFun_clone", 15, 705, "char* "), "sFun_clone", 15, 707);
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 15, 706);
    }
    # 17 "sFun_clone"
    if(self!=((void*)0)) {
        # 16 "sFun_clone"
        result->mTextBlockSline=self->mTextBlockSline;
    }
    # 18 "sFun_clone"
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        # 17 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj78=result->mSource,
        result->mSource=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSource), "sFun_clone", 17, 709);
        come_call_finalizer(buffer_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 17, 708);
    }
    # 19 "sFun_clone"
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        # 18 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj79=result->mSourceHead,
        result->mSourceHead=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceHead), "sFun_clone", 18, 711);
        come_call_finalizer(buffer_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 18, 710);
    }
    # 20 "sFun_clone"
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        # 19 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj80=result->mSourceHead2,
        result->mSourceHead2=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceHead2), "sFun_clone", 19, 713);
        come_call_finalizer(buffer_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 19, 712);
    }
    # 21 "sFun_clone"
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        # 20 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj81=result->mSourceEnd,
        result->mSourceEnd=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceEnd), "sFun_clone", 20, 715);
        come_call_finalizer(buffer_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 20, 714);
    }
    # 22 "sFun_clone"
    if(self!=((void*)0)) {
        # 21 "sFun_clone"
        result->mStatic=self->mStatic;
    }
    # 23 "sFun_clone"
    if(self!=((void*)0)) {
        # 22 "sFun_clone"
        result->mInline=self->mInline;
    }
    # 24 "sFun_clone"
    if(self!=((void*)0)) {
        # 23 "sFun_clone"
        result->mUniq=self->mUniq;
    }
    # 25 "sFun_clone"
    if(self!=((void*)0)) {
        # 24 "sFun_clone"
        result->mExternal=self->mExternal;
    }
    # 26 "sFun_clone"
    if(self!=((void*)0)) {
        # 25 "sFun_clone"
        result->mVarArgs=self->mVarArgs;
    }
    # 27 "sFun_clone"
    if(self!=((void*)0)) {
        # 26 "sFun_clone"
        result->mNoResultType=self->mNoResultType;
    }
    # 28 "sFun_clone"
    if(self!=((void*)0)) {
        # 27 "sFun_clone"
        result->mConstFun=self->mConstFun;
    }
    # 29 "sFun_clone"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 28 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj82=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sFun_clone", 28, 716, "char* "), "sFun_clone", 28, 718);
        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 28, 717);
    }
    # 30 "sFun_clone"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 29 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj83=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sFun_clone", 29, 719, "char* "), "sFun_clone", 29, 721);
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 29, 720);
    }
    # 31 "sFun_clone"
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        # 30 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj84=result->mFunAttribute,
        result->mFunAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mFunAttribute, "sFun_clone", 30, 722, "char* "), "sFun_clone", 30, 724);
        __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 30, 723);
    }
    # 32 "sFun_clone"
    if(self!=((void*)0)) {
        # 31 "sFun_clone"
        result->mGenericsFun=self->mGenericsFun;
    }
    # 33 "sFun_clone"
    if(self!=((void*)0)) {
        # 32 "sFun_clone"
        result->mDefineReturnVar=self->mDefineReturnVar;
    }
    # 34 "sFun_clone"
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        # 33 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj85=result->mAsmFun,
        result->mAsmFun=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmFun, "sFun_clone", 33, 725, "char* "), "sFun_clone", 33, 727);
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 33, 726);
    }
    # 34 "sFun_clone"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(result, "sFun_clone", 34, 728);
    come_call_finalizer(sFun_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 34, 729);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 34, 730);
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
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    # 1513 "./neo-c.h"
    if(self==((void*)0)) {
        # 1511 "./neo-c.h"
                __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 545);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 546);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc(1, sizeof(struct list$1sVar$ph)*(1), "./neo-c.h", 1513, 547, "struct list$1sVar$ph*"), "./neo-c.h", 1513, 551)), "./neo-c.h", 1513, 552);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sVar$ph_add(result,(struct sVar* )come_increment_ref_count(sVar_clone(it->item), "./neo-c.h", 1518, 585));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sVar$ph_add(result,(struct sVar* )come_increment_ref_count(sVar_clone(it->item), "./neo-c.h", 1521, 586));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 587);
    come_call_finalizer(list$1sVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 588);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 589);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_initialize"; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    # 1481 "./neo-c.h"
    self->head=((void*)0);
    # 1482 "./neo-c.h"
    self->tail=((void*)0);
    # 1483 "./neo-c.h"
    self->len=0;
    # 1485 "./neo-c.h"
        __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 548);
    come_call_finalizer(list$1sVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 549);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 550);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_add"; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sVar$ph* litem;
    struct sVar*  __dec_obj62  ;
    struct list_item$1sVar$ph* litem_26;
    struct sVar*  __dec_obj63  ;
    struct list_item$1sVar$ph* litem_27;
    struct sVar*  __dec_obj64  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_26, 0, sizeof(litem_26));
    memset(&litem_27, 0, sizeof(litem_27));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 553);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./neo-c.h", 1534, 554, "struct list_item$1sVar$ph*"))), "./neo-c.h", 1534, 555);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj62=litem->item,
        litem->item=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 1538, 557);
        come_call_finalizer(sVar_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 556);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_26=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./neo-c.h", 1544, 558, "struct list_item$1sVar$ph*"))), "./neo-c.h", 1544, 559);
        # 1546 "./neo-c.h"
        litem_26->prev=self->head;
        # 1547 "./neo-c.h"
        litem_26->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj63=litem_26->item,
        litem_26->item=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 1548, 561);
        come_call_finalizer(sVar_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 560);
        # 1550 "./neo-c.h"
        self->tail=litem_26;
        # 1551 "./neo-c.h"
        self->head->next=litem_26;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_27=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./neo-c.h", 1554, 562, "struct list_item$1sVar$ph*"))), "./neo-c.h", 1554, 563);
        # 1556 "./neo-c.h"
        litem_27->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_27->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj64=litem_27->item,
        litem_27->item=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 1558, 565);
        come_call_finalizer(sVar_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 564);
        # 1560 "./neo-c.h"
        self->tail->next=litem_27;
        # 1561 "./neo-c.h"
        self->tail=litem_27;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 566);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  sVar_clone(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_clone"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVar*  result  ;
    char*  __dec_obj65  ;
    char*  __dec_obj66  ;
    struct sType*  __dec_obj67  ;
    char*  __dec_obj68  ;
    memset(&result, 0, sizeof(result));
    # 3 "sVar_clone"
    # 5 "sVar_clone"
    if(self==(void*)0) {
        # 4 "sVar_clone"
                __result_obj__0 = (struct sVar* )come_increment_ref_count((void*)0, "sVar_clone", 4, 567);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 4, 568);
        return __result_obj__0;
    }
    # 5 "sVar_clone"
    result=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "sVar_clone", 5, 569, "struct sVar* "), "sVar_clone", 5, 570);
    # 7 "sVar_clone"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 6 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj65=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sVar_clone", 6, 571, "char* "), "sVar_clone", 6, 573);
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 6, 572);
    }
    # 8 "sVar_clone"
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        # 7 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj66=result->mCValueName,
        result->mCValueName=(char* )come_increment_ref_count((char* )come_memdup(self->mCValueName, "sVar_clone", 7, 574, "char* "), "sVar_clone", 7, 576);
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 7, 575);
    }
    # 9 "sVar_clone"
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        # 8 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj67=result->mType,
        result->mType=(struct sType* )come_increment_ref_count(sType_clone(self->mType), "sVar_clone", 8, 578);
        come_call_finalizer(sType_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_clone", 8, 577);
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
        __dec_obj68=result->mFunName,
        result->mFunName=(char* )come_increment_ref_count((char* )come_memdup(self->mFunName, "sVar_clone", 12, 579, "char* "), "sVar_clone", 12, 581);
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 12, 580);
    }
    # 14 "sVar_clone"
    if(self!=((void*)0)) {
        # 13 "sVar_clone"
        result->no_output_come_code=self->no_output_come_code;
    }
    # 14 "sVar_clone"
        __result_obj__0 = (struct sVar* )come_increment_ref_count(result, "sVar_clone", 14, 582);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 583);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 584);
    return __result_obj__0;
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sVar$ph* it;
    struct list_item$1sVar$ph* prev_it;
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 590);
    }
            neo_current_frame = fr.prev;
}

static struct sBlock*  sBlock_clone(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_clone"; neo_current_frame = &fr;
    struct sBlock*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sBlock*  result  ;
    struct list$1sNode$ph* __dec_obj70;
    struct sVarTable*  __dec_obj74  ;
    memset(&result, 0, sizeof(result));
    # 3 "sBlock_clone"
    # 5 "sBlock_clone"
    if(self==(void*)0) {
        # 4 "sBlock_clone"
                __result_obj__0 = (struct sBlock* )come_increment_ref_count((void*)0, "sBlock_clone", 4, 593);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 4, 594);
        return __result_obj__0;
    }
    # 5 "sBlock_clone"
    result=(struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "sBlock_clone", 5, 595, "struct sBlock* "), "sBlock_clone", 5, 596);
    # 7 "sBlock_clone"
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        # 6 "sBlock_clone"
        __right_value0 = (void*)0;
        __dec_obj70=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes), "sBlock_clone", 6, 598);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 6, 597);
    }
    # 8 "sBlock_clone"
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        # 7 "sBlock_clone"
        __right_value0 = (void*)0;
        __dec_obj74=result->mVarTable,
        result->mVarTable=(struct sVarTable* )come_increment_ref_count(sVarTable_clone(self->mVarTable), "sBlock_clone", 7, 696);
        come_call_finalizer(sVarTable_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 7, 695);
    }
    # 9 "sBlock_clone"
    if(self!=((void*)0)) {
        # 8 "sBlock_clone"
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
    # 9 "sBlock_clone"
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(result, "sBlock_clone", 9, 697);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 698);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 699);
    return __result_obj__0;
}

static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_clone"; neo_current_frame = &fr;
    struct sVarTable*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVarTable*  result  ;
    struct map$2char$phsVar$ph* __dec_obj73;
    memset(&result, 0, sizeof(result));
    # 3 "sVarTable_clone"
    # 5 "sVarTable_clone"
    if(self==(void*)0) {
        # 4 "sVarTable_clone"
                __result_obj__0 = (struct sVarTable* )come_increment_ref_count((void*)0, "sVarTable_clone", 4, 599);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 4, 600);
        return __result_obj__0;
    }
    # 5 "sVarTable_clone"
    result=(struct sVarTable* )come_increment_ref_count((struct sVarTable *)come_calloc(1, sizeof(struct sVarTable )*(1), "sVarTable_clone", 5, 601, "struct sVarTable* "), "sVarTable_clone", 5, 602);
    # 7 "sVarTable_clone"
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        # 6 "sVarTable_clone"
        __right_value0 = (void*)0;
        __dec_obj73=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars), "sVarTable_clone", 8, 691);
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarTable_clone", 8, 690);
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
        __result_obj__0 = (struct sVarTable* )come_increment_ref_count(result, "sVarTable_clone", 9, 692);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 693);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 694);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_clone"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* result;
    struct list$1char$ph* __dec_obj72;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    memset(&it2, 0, sizeof(it2));
    # 3451 "./neo-c.h"
    # 3457 "./neo-c.h"
    if(self==((void*)0)) {
        # 3454 "./neo-c.h"
                __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 3454, 603);
        neo_current_frame = fr.prev;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 8, 609);
        return __result_obj__0;
    }
    # 3457 "./neo-c.h"
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./neo-c.h", 3457, 610, "struct map$2char$phsVar$ph*"), "./neo-c.h", 3457, 626)), "./neo-c.h", 3457, 627);
    # 3459 "./neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj72=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3459, 628, "struct list$1char$ph*"), "./neo-c.h", 3459, 629)), "./neo-c.h", 3459, 631);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3459, 630);
    # 3481 "./neo-c.h"
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        # 3462 "./neo-c.h"
        # 3463 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sVar* ));
        # 3465 "./neo-c.h"
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3465, 647),(_Bool)1), "./neo-c.h", 3465, 648);
        # 3479 "./neo-c.h"
        if(1&&1) {
            # 3468 "./neo-c.h"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "./neo-c.h", 3468, 670, "char* "), "./neo-c.h", 3468, 671),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3468, 672),(_Bool)0);
        }
        else if(1) {
            # 3471 "./neo-c.h"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "./neo-c.h", 3471, 673, "char* "), "./neo-c.h", 3471, 674),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3471, 675),(_Bool)0);
        }
        else if(1) {
            # 3474 "./neo-c.h"
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "./neo-c.h", 3474, 676),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3474, 677),(_Bool)0);
        }
        else {
            # 3477 "./neo-c.h"
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "./neo-c.h", 3477, 678),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3477, 679),(_Bool)0);
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3481, 680);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3481, 681);
    }
    # 3481 "./neo-c.h"
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result, "./neo-c.h", 3481, 682);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3481, 683);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3481, 684);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_28;
    memset(&i, 0, sizeof(i));
    memset(&i_28, 0, sizeof(i_28));
    # 3399 "./neo-c.h"
    # 3408 "./neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3407 "./neo-c.h"
        if(self->item_existance[i]) {
            # 3406 "./neo-c.h"
            if(1) {
                # 3404 "./neo-c.h"
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3404, 604);
            }
        }
    }
    # 3408 "./neo-c.h"
    come_free((char*)self->items);
    # 3417 "./neo-c.h"
    for(i_28=0    ;i_28<self->size;i_28++){
        # 3416 "./neo-c.h"
        if(self->item_existance[i_28]) {
            # 3415 "./neo-c.h"
            if(1) {
                # 3413 "./neo-c.h"
                (self->keys[i_28] = come_decrement_ref_count(self->keys[i_28], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3413, 605));
            }
        }
    }
    # 3417 "./neo-c.h"
    come_free((char*)self->keys);
    # 3419 "./neo-c.h"
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3419, 606);
    # 3421 "./neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3421, 607));
    # 3422 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3422, 608));
            neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj71;
    struct map$2char$phsVar$ph* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 3348 "./neo-c.h"
    # 3350 "./neo-c.h"
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "./neo-c.h", 3350, 611, "char** "))), "./neo-c.h", 3350, 612);
    # 3351 "./neo-c.h"
    __right_value0 = (void*)0;
    self->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), "./neo-c.h", 3351, 613, "struct sVar** "))), "./neo-c.h", 3351, 614);
    # 3352 "./neo-c.h"
    __right_value0 = (void*)0;
    self->hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(128)), "./neo-c.h", 3352, 615, "unsigned int*"))), "./neo-c.h", 3352, 616);
    # 3353 "./neo-c.h"
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 3353, 617, "_Bool*"))), "./neo-c.h", 3353, 618);
    # 3361 "./neo-c.h"
    for(i=0    ;i<128;i++){
        # 3357 "./neo-c.h"
        self->hashes[i]=0;
        # 3358 "./neo-c.h"
        self->item_existance[i]=(_Bool)0;
    }
    # 3361 "./neo-c.h"
    self->size=128;
    # 3362 "./neo-c.h"
    self->len=0;
    # 3364 "./neo-c.h"
    __right_value0 = (void*)0;
    __dec_obj71=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3364, 619, "struct list$1char$ph*"), "./neo-c.h", 3364, 620)), "./neo-c.h", 3364, 622);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3364, 621);
    # 3366 "./neo-c.h"
    self->it=0;
    # 3368 "./neo-c.h"
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self, "./neo-c.h", 3368, 623);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3368, 624);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3368, 625);
    return __result_obj__0;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_29  ;
    # 3774 "./neo-c.h"
    # 3781 "./neo-c.h"
    if(self==((void*)0)) {
        # 3777 "./neo-c.h"
        # 3778 "./neo-c.h"
        memset(&result,0,sizeof(char* ));
        # 3779 "./neo-c.h"
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3781 "./neo-c.h"
    self->key_list->it=self->key_list->head;
    # 3787 "./neo-c.h"
    if(self->key_list->it) {
        # 3784 "./neo-c.h"
                __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3787 "./neo-c.h"
    # 3788 "./neo-c.h"
    memset(&result_29,0,sizeof(char* ));
    # 3789 "./neo-c.h"
        __result_obj__0 = result_29;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_end"; neo_current_frame = &fr;
    # 3812 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_30  ;
    # 3793 "./neo-c.h"
    # 3800 "./neo-c.h"
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        # 3796 "./neo-c.h"
        # 3797 "./neo-c.h"
        memset(&result,0,sizeof(char* ));
        # 3798 "./neo-c.h"
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3800 "./neo-c.h"
    self->key_list->it=self->key_list->it->next;
    # 3806 "./neo-c.h"
    if(self->key_list->it) {
        # 3803 "./neo-c.h"
                __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3806 "./neo-c.h"
    # 3807 "./neo-c.h"
    memset(&result_30,0,sizeof(char* ));
    # 3808 "./neo-c.h"
        __result_obj__0 = result_30;
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
    # 3519 "./neo-c.h"
    # 3525 "./neo-c.h"
    if(self==((void*)0)) {
        # 3522 "./neo-c.h"
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3522, 632);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3522, 633);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3522, 634);
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
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "./neo-c.h", 3535, 635);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3535, 636);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3535, 637);
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
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3542, 638);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3542, 639);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3542, 640);
                return __result_obj__0;
            }
        }
        else {
            # 3546 "./neo-c.h"
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3546, 641);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3546, 642);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3546, 643);
            return __result_obj__0;
        }
    }
    # 3550 "./neo-c.h"
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3550, 644);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3550, 645);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3550, 646);
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
    # 3978 "./neo-c.h"
    # 3984 "./neo-c.h"
    if(self==((void*)0)) {
        # 3981 "./neo-c.h"
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3981, 649));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3981, 650);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3987 "./neo-c.h"
    if(self->len*2>=self->size) {
        # 3985 "./neo-c.h"
        map$2char$phsVar$ph_rehash(self);
    }
    # 3987 "./neo-c.h"
    add_to_key_list=(_Bool)0;
    # 3988 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 3989 "./neo-c.h"
    hash=key_hash%self->size;
    # 3990 "./neo-c.h"
    it=hash;
    # 4050 "./neo-c.h"
    while((_Bool)1) {
        # 4048 "./neo-c.h"
        if(self->item_existance[it]) {
            # 4018 "./neo-c.h"
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                # 3998 "./neo-c.h"
                map$2char$phsVar$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                # 4006 "./neo-c.h"
                if(1) {
                    # 4000 "./neo-c.h"
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4000, 661));
                    # 4001 "./neo-c.h"
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4001, 662);
                }
                else {
                    # 4004 "./neo-c.h"
                    self->keys[it]=key;
                }
                # 4013 "./neo-c.h"
                if(1) {
                    # 4007 "./neo-c.h"
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4007, 663);
                    # 4008 "./neo-c.h"
                    self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 4008, 664);
                }
                else {
                    # 4011 "./neo-c.h"
                    self->items[it]=item;
                }
                # 4013 "./neo-c.h"
                self->hashes[it]=key_hash;
                # 4014 "./neo-c.h"
                add_to_key_list=(_Bool)1;
                # 4015 "./neo-c.h"
                break;
            }
            # 4021 "./neo-c.h"
            if(++it>=self->size) {
                # 4019 "./neo-c.h"
                it=0;
            }
            # 4026 "./neo-c.h"
            if(it==hash) {
                # 4022 "./neo-c.h"
                printf("unexpected error in map.insert\n");
                # 4023 "./neo-c.h"
                stackframe2(self);
                # 4024 "./neo-c.h"
                exit(2);
            }
        }
        else {
            # 4028 "./neo-c.h"
            self->item_existance[it]=(_Bool)1;
            # 4029 "./neo-c.h"
            self->hashes[it]=key_hash;
            # 4036 "./neo-c.h"
            if(1) {
                # 4031 "./neo-c.h"
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4031, 665);
            }
            else {
                # 4034 "./neo-c.h"
                self->keys[it]=key;
            }
            # 4043 "./neo-c.h"
            if(1) {
                # 4037 "./neo-c.h"
                self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 4037, 666);
            }
            else {
                # 4040 "./neo-c.h"
                self->items[it]=item;
            }
            # 4043 "./neo-c.h"
            self->len++;
            # 4044 "./neo-c.h"
            add_to_key_list=(_Bool)1;
            # 4046 "./neo-c.h"
            break;
        }
    }
    # 4054 "./neo-c.h"
    if(add_to_key_list) {
        # 4051 "./neo-c.h"
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 4051, 667));
    }
    # 4054 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4054, 668));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4054, 669);
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
    int i_31;
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
    memset(&i_31, 0, sizeof(i_31));
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&n, 0, sizeof(n));
    # 3816 "./neo-c.h"
    # 3818 "./neo-c.h"
    old_size=self->size;
    # 3819 "./neo-c.h"
    size=self->size*10;
    # 3820 "./neo-c.h"
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3820, 651, "char** "))), "./neo-c.h", 3820, 652);
    # 3821 "./neo-c.h"
    __right_value0 = (void*)0;
    items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(size)), "./neo-c.h", 3821, 653, "struct sVar** "))), "./neo-c.h", 3821, 654);
    # 3822 "./neo-c.h"
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3822, 655, "unsigned int*"))), "./neo-c.h", 3822, 656);
    # 3823 "./neo-c.h"
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3823, 657, "_Bool*"))), "./neo-c.h", 3823, 658);
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
    for(i_31=0    ;i_31<old_size;i_31++){
        # 3836 "./neo-c.h"
        if(!self->item_existance[i_31]) {
            # 3833 "./neo-c.h"
            continue;
        }
        # 3836 "./neo-c.h"
        key_hash=self->hashes[i_31];
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
                keys[n]=self->keys[i_31];
                # 3856 "./neo-c.h"
                items[n]=self->items[i_31];
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
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3865, 659));
    # 3866 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3866, 660));
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

static void map$2char$phsVar$ph_remove_ordered_entry(struct map$2char$phsVar$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    memset(&pos, 0, sizeof(pos));
    # 3444 "./neo-c.h"
    pos=map$2char$phsVar$ph_key_position(self,key,by_pointer);
    # 3448 "./neo-c.h"
    if(pos>=0) {
        # 3446 "./neo-c.h"
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

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_32;
    memset(&i, 0, sizeof(i));
    memset(&i_32, 0, sizeof(i_32));
    # 3399 "./neo-c.h"
    # 3408 "./neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3407 "./neo-c.h"
        if(self->item_existance[i]) {
            # 3406 "./neo-c.h"
            if(1) {
                # 3404 "./neo-c.h"
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3404, 685);
            }
        }
    }
    # 3408 "./neo-c.h"
    come_free((char*)self->items);
    # 3417 "./neo-c.h"
    for(i_32=0    ;i_32<self->size;i_32++){
        # 3416 "./neo-c.h"
        if(self->item_existance[i_32]) {
            # 3415 "./neo-c.h"
            if(1) {
                # 3413 "./neo-c.h"
                (self->keys[i_32] = come_decrement_ref_count(self->keys[i_32], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3413, 686));
            }
        }
    }
    # 3417 "./neo-c.h"
    come_free((char*)self->keys);
    # 3419 "./neo-c.h"
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3419, 687);
    # 3421 "./neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3421, 688));
    # 3422 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3422, 689));
            neo_current_frame = fr.prev;
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sRightValueObject$ph* it;
    struct list_item$1sRightValueObject$ph* prev_it;
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
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 775);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sRightValueObject$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1sRightValueObject$ph$p_finalize"
    # 3 "list_item$1sRightValueObject$ph$p_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 2 "list_item$1sRightValueObject$ph$p_finalize"
        come_call_finalizer(sRightValueObject_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sRightValueObject$ph$p_finalize}", 2, 774);
    }
            neo_current_frame = fr.prev;
}

static void sRightValueObject_finalize(struct sRightValueObject*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRightValueObject_finalize"; neo_current_frame = &fr;
    # 1 "sRightValueObject_finalize"
    # 3 "sRightValueObject_finalize"
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        # 2 "sRightValueObject_finalize"
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sRightValueObject_finalize}", 2, 769);
    }
    # 4 "sRightValueObject_finalize"
    if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
        # 3 "sRightValueObject_finalize"
        (self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0, 0, (void*)0, "sRightValueObject_finalize", 3, 770));
    }
    # 5 "sRightValueObject_finalize"
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        # 4 "sRightValueObject_finalize"
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sRightValueObject_finalize", 4, 771));
    }
    # 6 "sRightValueObject_finalize"
    if(self!=((void*)0)&&self->mObjType!=((void*)0)) {
        # 5 "sRightValueObject_finalize"
        come_call_finalizer(sType_finalize, self->mObjType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sRightValueObject_finalize}", 5, 772);
    }
    # 7 "sRightValueObject_finalize"
    if(self!=((void*)0)&&self->mObjValue!=((void*)0)) {
        # 6 "sRightValueObject_finalize"
        (self->mObjValue = come_decrement_ref_count(self->mObjValue, (void*)0, (void*)0, 0, 0, (void*)0, "sRightValueObject_finalize", 6, 773));
    }
            neo_current_frame = fr.prev;
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1CVALUE$ph* it;
    struct list_item$1CVALUE$ph* prev_it;
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
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 784);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1CVALUE$ph$p_finalize"
    # 3 "list_item$1CVALUE$ph$p_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 2 "list_item$1CVALUE$ph$p_finalize"
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1CVALUE$ph$p_finalize}", 2, 783);
    }
            neo_current_frame = fr.prev;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    # 1 "CVALUE_finalize"
    # 3 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        # 2 "CVALUE_finalize"
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 778));
    }
    # 4 "CVALUE_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 3 "CVALUE_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 779);
    }
    # 5 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        # 4 "CVALUE_finalize"
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 780));
    }
    # 6 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        # 5 "CVALUE_finalize"
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 781));
    }
    # 7 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        # 6 "CVALUE_finalize"
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 782));
    }
            neo_current_frame = fr.prev;
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun*  v1  , char*  v2  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sFun$pchar$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj97  ;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    # 4465 "./neo-c.h"
    self->v1=v1;
    # 4466 "./neo-c.h"
    __dec_obj97=self->v2,
    self->v2=(char* )come_increment_ref_count(v2, "./neo-c.h", 4466, 789);
    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4466, 788);
    # 4468 "./neo-c.h"
        __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(self, "./neo-c.h", 4468, 790);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4468, 792);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4468, 793));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4468, 794);
    return __result_obj__0;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sFun$pchar$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple2$2sFun$pchar$ph$p_finalize"
    # 3 "tuple2$2sFun$pchar$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 2 "tuple2$2sFun$pchar$ph$p_finalize"
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2sFun$pchar$ph$p_finalize", 2, 791));
    }
        neo_current_frame = fr.prev;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1CVALUE$ph* it;
    struct list_item$1CVALUE$ph* prev_it;
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
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 804);
    }
        neo_current_frame = fr.prev;
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_equals_automatically"; neo_current_frame = &fr;
    struct sClass*  current_stack_frame_struct  ;
    struct sFun*  caller_fun  ;
    void* __right_value0 = (void*)0;
    struct buffer*  if_expression_buffer  ;
    struct buffer*  __dec_obj98  ;
    struct buffer*  loop_expression_buffer  ;
    struct buffer*  __dec_obj99  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj100  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char*  last_code  ;
    char*  __dec_obj101  ;
    char*  last_code2  ;
    char*  __dec_obj102  ;
    char*  sname_top  ;
    int sline_top;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    _Bool no_output_come_code;
    struct sFun*  equaler  ;
    char*  real_fun_name  ;
    struct sType*  type2  ;
    struct sType*  compare_type  ;
    struct sClass*  klass  ;
    int pointer_num;
    int compare_pointer_num;
    int max_pointer_num;
    int function_pointer_num;
    _Bool pointer_like;
    _Bool deep_compare_fields;
    void* __right_value1 = (void*)0;
    struct buffer*  source  ;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_4;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var3
;    char*  name_34  =0;
    struct sType*  field_type  =0;
    struct sType*  field_type2  ;
    _Bool field_pointer_like;
    char* p;
    int sline;
    char*  sname  ;
    char* head;
    struct buffer*  source3  ;
    struct buffer*  __dec_obj103  ;
    char*  __dec_obj104  ;
    struct sBlock*  block  ;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    char*  name_36  ;
    struct sType*  left_type  ;
    struct sType*  right_type  ;
    struct sType*  __list_values3__[2]  ;
    struct list$1sType$ph* param_types;
    char*  __list_values4__[2]  ;
    void* __right_value3 = (void*)0;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun*  fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value2;
    struct sFunNode* _inf_obj_value2;
    struct sNode* node;
    _Bool Value;
    struct buffer*  __dec_obj105  ;
    char*  __dec_obj106  ;
    char*  __dec_obj107  ;
    char*  __dec_obj108  ;
    char*  __dec_obj109  ;
    struct buffer*  __dec_obj110  ;
    struct buffer*  __dec_obj111  ;
    struct buffer*  __dec_obj112  ;
    struct list$1sRightValueObject$ph* __dec_obj113;
    struct list$1CVALUE$ph* __dec_obj114;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    memset(&current_stack_frame_struct, 0, sizeof(current_stack_frame_struct));
    memset(&caller_fun, 0, sizeof(caller_fun));
    memset(&if_expression_buffer, 0, sizeof(if_expression_buffer));
    memset(&loop_expression_buffer, 0, sizeof(loop_expression_buffer));
    memset(&paren_block_buffer, 0, sizeof(paren_block_buffer));
    memset(&right_value_max, 0, sizeof(right_value_max));
    memset(&right_value_num, 0, sizeof(right_value_num));
    memset(&max_conditional, 0, sizeof(max_conditional));
    memset(&num_conditional, 0, sizeof(num_conditional));
    memset(&in_conditional, 0, sizeof(in_conditional));
    memset(&last_code, 0, sizeof(last_code));
    memset(&last_code2, 0, sizeof(last_code2));
    memset(&sname_top, 0, sizeof(sname_top));
    memset(&sline_top, 0, sizeof(sline_top));
    memset(&stack_saved, 0, sizeof(stack_saved));
    memset(&right_value_objects, 0, sizeof(right_value_objects));
    memset(&no_output_come_code, 0, sizeof(no_output_come_code));
    memset(&equaler, 0, sizeof(equaler));
    memset(&real_fun_name, 0, sizeof(real_fun_name));
    memset(&type2, 0, sizeof(type2));
    memset(&compare_type, 0, sizeof(compare_type));
    memset(&klass, 0, sizeof(klass));
    memset(&pointer_num, 0, sizeof(pointer_num));
    memset(&compare_pointer_num, 0, sizeof(compare_pointer_num));
    memset(&max_pointer_num, 0, sizeof(max_pointer_num));
    memset(&function_pointer_num, 0, sizeof(function_pointer_num));
    memset(&pointer_like, 0, sizeof(pointer_like));
    memset(&deep_compare_fields, 0, sizeof(deep_compare_fields));
    memset(&source, 0, sizeof(source));
    memset(&_o2_saved_4, 0, sizeof(_o2_saved_4));
    memset(&it, 0, sizeof(it));
    memset(&field_type2, 0, sizeof(field_type2));
    memset(&field_pointer_like, 0, sizeof(field_pointer_like));
    memset(&p, 0, sizeof(p));
    memset(&sline, 0, sizeof(sline));
    memset(&sname, 0, sizeof(sname));
    memset(&head, 0, sizeof(head));
    memset(&source3, 0, sizeof(source3));
    memset(&block, 0, sizeof(block));
    memset(&result_type, 0, sizeof(result_type));
    memset(&name_36, 0, sizeof(name_36));
    memset(&left_type, 0, sizeof(left_type));
    memset(&right_type, 0, sizeof(right_type));
    memset(&param_types, 0, sizeof(param_types));
    memset(&param_names, 0, sizeof(param_names));
    memset(&param_default_parametors, 0, sizeof(param_default_parametors));
    memset(&fun2, 0, sizeof(fun2));
    memset(&fun, 0, sizeof(fun));
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    # 279 "32function2.nc"
    current_stack_frame_struct=info->current_stack_frame_struct;
    # 280 "32function2.nc"
    info->current_stack_frame_struct=((void*)0);
    # 281 "32function2.nc"
    caller_fun=info->caller_fun;
    # 282 "32function2.nc"
    info->caller_fun=info->come_fun;
    # 287 "32function2.nc"
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "32function2.nc", 287, 813);
    # 288 "32function2.nc"
    __dec_obj98=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 288, 814);
    # 289 "32function2.nc"
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "32function2.nc", 289, 815);
    # 290 "32function2.nc"
    __dec_obj99=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 290, 816);
    # 291 "32function2.nc"
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "32function2.nc", 291, 817);
    # 292 "32function2.nc"
    __dec_obj100=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 292, 818);
    # 294 "32function2.nc"
    right_value_max=info->right_value_max;
    # 295 "32function2.nc"
    right_value_num=info->right_value_num;
    # 296 "32function2.nc"
    max_conditional=info->max_conditional;
    # 297 "32function2.nc"
    num_conditional=info->num_conditional;
    # 298 "32function2.nc"
    in_conditional=info->in_conditional;
    # 299 "32function2.nc"
    info->in_conditional=(_Bool)0;
    # 301 "32function2.nc"
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "32function2.nc", 301, 819);
    # 302 "32function2.nc"
    __dec_obj101=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 302, 820);
    # 303 "32function2.nc"
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "32function2.nc", 303, 821);
    # 304 "32function2.nc"
    __dec_obj102=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 304, 822);
    # 306 "32function2.nc"
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"32function2.nc",306), "32function2.nc", 306, 823);
    # 307 "32function2.nc"
    sline_top=info->sline;
    # 309 "32function2.nc"
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "32function2.nc", 309, 824);
    # 310 "32function2.nc"
    right_value_objects=info->right_value_objects;
    # 312 "32function2.nc"
    no_output_come_code=info->no_output_come_code;
    # 313 "32function2.nc"
    info->no_output_come_code=(_Bool)0;
    # 281 "32function2.nc"
    equaler=((void*)0);
    # 283 "32function2.nc"
    __right_value0 = (void*)0;
    real_fun_name=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1), "32function2.nc", 283, 825);
    # 285 "32function2.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,type,info), "32function2.nc", 285, 826);
    # 287 "32function2.nc"
    type=type2;
    # 289 "32function2.nc"
    __right_value0 = (void*)0;
    compare_type=(struct sType* )come_increment_ref_count(expand_typedef_for_compare(type,info), "32function2.nc", 289, 827);
    # 290 "32function2.nc"
    klass=compare_type->mClass;
    # 291 "32function2.nc"
    pointer_num=pointer_level_for_compare(type);
    # 292 "32function2.nc"
    compare_pointer_num=pointer_level_for_compare(compare_type);
    # 293 "32function2.nc"
    max_pointer_num=((pointer_num>compare_pointer_num)?(pointer_num):(compare_pointer_num));
    # 294 "32function2.nc"
    function_pointer_num=((type->mFunctionPointerNum>compare_type->mFunctionPointerNum)?(type->mFunctionPointerNum):(compare_type->mFunctionPointerNum));
    # 295 "32function2.nc"
    pointer_like=max_pointer_num>0||function_pointer_num>0;
    # 298 "32function2.nc"
    deep_compare_fields=!klass->mNumber&&function_pointer_num==0&&max_pointer_num<=1;
    # 417 "32function2.nc"
    if(pointer_like||!klass->mNumber) {
        # 301 "32function2.nc"
        __right_value0 = (void*)0;
        source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "32function2.nc", 301, 828, "struct buffer* "), "32function2.nc", 301, 829)), "32function2.nc", 301, 830);
        # 303 "32function2.nc"
        buffer_append_char(source,123);
        # 344 "32function2.nc"
        if(klass->mProtocol) {
            # 306 "32function2.nc"
            const char* name="_protocol_obj";
            # 307 "32function2.nc"
            char source2[1024];
            memset(&source2, 0, sizeof(source2));
            # 308 "32function2.nc"
            snprintf(source2,1024,"return left.%s.equals(right.%s);\n",name,name);
            # 309 "32function2.nc"
            buffer_append_str(source,source2);
        }
        else if(pointer_like&&!deep_compare_fields) {
            # 312 "32function2.nc"
            buffer_append_str(source,"return left == right;\n");
        }
        else {
            # 315 "32function2.nc"
            __right_value0 = (void*)0;
            klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(info->classes,klass->mName,((void*)0),(_Bool)0)));
            # 342 "32function2.nc"
            if(klass==((void*)0)||klass->mFields==((void*)0)||list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)==0) {
                # 323 "32function2.nc"
                if(pointer_like) {
                    # 318 "32function2.nc"
                    buffer_append_str(source,"return left == right;\n");
                }
                else {
                    # 321 "32function2.nc"
                    buffer_append_str(source,"return true;\n");
                }
            }
            else {
                # 342 "32function2.nc"
                for(_o2_saved_4=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields, "32function2.nc", 324, 846),it=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_4)                ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_4);it=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_4)){
                    # 325 "32function2.nc"
                    multiple_assign_var3=it;
                    name_34=(char* )come_increment_ref_count(multiple_assign_var3->v1, "32function2.nc", 325, 847);
                    field_type=(struct sType* )come_increment_ref_count(multiple_assign_var3->v2, "32function2.nc", 325, 848);
                    # 326 "32function2.nc"
                    __right_value0 = (void*)0;
                    field_type2=(struct sType* )come_increment_ref_count(expand_typedef_for_compare(field_type,info), "32function2.nc", 326, 849);
                    # 327 "32function2.nc"
                    field_pointer_like=pointer_level_for_compare(field_type2)>0||field_type2->mFunctionPointerNum>0;
                    # 329 "32function2.nc"
                    char source2_35[1024];
                    memset(&source2_35, 0, sizeof(source2_35));
                    # 340 "32function2.nc"
                    if(list$1sNode$ph_length(field_type2->mArrayNum)>0) {
                        # 331 "32function2.nc"
                        snprintf(source2_35,1024,"if(memcmp(left.%s, right.%s, sizeof(left.%s)) != 0) { return false; }\n",name_34,name_34,name_34);
                    }
                    else if(compare_field_by_pointer(field_type,field_type2)) {
                        # 334 "32function2.nc"
                        snprintf(source2_35,1024,"if(left.%s != right.%s) { return false; }\n",name_34,name_34,name_34);
                    }
                    else {
                        # 337 "32function2.nc"
                        snprintf(source2_35,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_34,name_34,name_34);
                    }
                    # 340 "32function2.nc"
                    buffer_append_str(source,source2_35);
                    (name_34 = come_decrement_ref_count(name_34, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 342, 850));
                    come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 342, 851);
                    come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 342, 852);
                }
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 342, 853);
            }
        }
        # 344 "32function2.nc"
        buffer_append_str(source,"return true;");
        # 345 "32function2.nc"
        buffer_append_char(source,125);
        # 347 "32function2.nc"
        p=info->p;
        # 348 "32function2.nc"
        sline=info->sline;
        # 349 "32function2.nc"
        sname=(char* )come_increment_ref_count(info->sname, "32function2.nc", 349, 854);
        # 350 "32function2.nc"
        head=info->head;
        # 351 "32function2.nc"
        source3=(struct buffer* )come_increment_ref_count(info->source, "32function2.nc", 351, 855);
        # 353 "32function2.nc"
        __dec_obj103=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source, "32function2.nc", 353, 857);
        come_call_finalizer(buffer_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 353, 856);
        # 357 "32function2.nc"
        if(info->p==((void*)0)) {
            # 355 "32function2.nc"
            info->p=info->source->buf;
        }
        # 357 "32function2.nc"
        info->p=info->source->buf;
        # 358 "32function2.nc"
        info->head=source->buf;
        # 360 "32function2.nc"
        __right_value0 = (void*)0;
        __dec_obj104=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(real_fun_name,"32function2.nc",360), "32function2.nc", 360, 859);
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 360, 858);
        # 361 "32function2.nc"
        info->sline=0;
        # 363 "32function2.nc"
        __right_value0 = (void*)0;
        block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "32function2.nc", 363, 860);
        # 365 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "32function2.nc", 365, 861, "struct sType* "), "32function2.nc", 365, 862),(char*)come_increment_ref_count(xsprintf("bool"), "32function2.nc", 365, 863),(_Bool)0,info,(_Bool)0,0), "32function2.nc", 365, 864);
        # 366 "32function2.nc"
        __right_value0 = (void*)0;
        name_36=(char* )come_increment_ref_count((char* )come_memdup(real_fun_name, "32function2.nc", 366, 865, "char* "), "32function2.nc", 366, 866);
        # 367 "32function2.nc"
        __right_value0 = (void*)0;
        left_type=(struct sType* )come_increment_ref_count(sType_clone(type), "32function2.nc", 367, 867);
        # 368 "32function2.nc"
        left_type->mHeap=(_Bool)0;
        # 369 "32function2.nc"
        __right_value0 = (void*)0;
        right_type=(struct sType* )come_increment_ref_count(sType_clone(type), "32function2.nc", 369, 868);
        # 370 "32function2.nc"
        right_type->mHeap=(_Bool)0;
        # 371 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values3__[0]=left_type,
__list_values3__[1]=right_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "32function2.nc", 371, 869, "struct list$1sType$ph"), "32function2.nc", 371, 870),2,__list_values3__)), "32function2.nc", 371, 871);
        # 372 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values4__[0]=((char* )(__right_value0=__builtin_string("left","32function2.nc",372))),
__list_values4__[1]=((char* )(__right_value1=__builtin_string("right","32function2.nc",372))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "32function2.nc", 372, 872, "struct list$1char$ph"), "32function2.nc", 372, 873),2,__list_values4__)), "32function2.nc", 372, 874);
        # 373 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "32function2.nc", 373, 875, "struct list$1char$ph*"), "32function2.nc", 373, 876)), "32function2.nc", 373, 877);
        # 374 "32function2.nc"
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        # 375 "32function2.nc"
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        # 377 "32function2.nc"
        result_type->mStatic=(_Bool)0;
        # 378 "32function2.nc"
        result_type->mUniq=(_Bool)0;
        # 379 "32function2.nc"
        result_type->mInline=(_Bool)0;
        # 381 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(name_36,"32function2.nc",381)))), "32function2.nc", 381, 878);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "32function2.nc", 381, 879));
        # 405 "32function2.nc"
        if(fun2==((void*)0)||fun2->mExternal) {
            # 387 "32function2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "32function2.nc", 383, 880, "struct sFun* "), "32function2.nc", 387, 881),(char* )come_increment_ref_count(name_36, "32function2.nc", 387, 882),(struct sType*)come_increment_ref_count(result_type, "32function2.nc", 387, 883),(struct list$1sType$ph*)come_increment_ref_count(param_types, "32function2.nc", 387, 884),(struct list$1char$ph*)come_increment_ref_count(param_names, "32function2.nc", 387, 885),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "32function2.nc", 387, 886),(_Bool)0,(_Bool)0,(struct sBlock* )come_increment_ref_count(block, "32function2.nc", 387, 887),(_Bool)1,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "32function2.nc", 387, 888),(char*)come_increment_ref_count(xsprintf(""), "32function2.nc", 387, 889),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "32function2.nc", 387, 890)), "32function2.nc", 387, 891);
            # 388 "32function2.nc"
            fun->mGenericsFun=(_Bool)1;
            # 390 "32function2.nc"
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(name_36,"32function2.nc",390), "32function2.nc", 390, 892),(struct sFun*)come_increment_ref_count(fun, "32function2.nc", 390, 893),(_Bool)0);
            # 392 "32function2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "32function2.nc", 392, 897, "struct sNode");
            _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "32function2.nc", 392, 894, "struct sFunNode* "), "32function2.nc", 392, 895),(struct sFun*)come_increment_ref_count(fun, "32function2.nc", 392, 896),info))), "32function2.nc", 392, 898);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value2, "32function2.nc", 392, 899);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "32function2.nc}", 392, 900);
            # 399 "32function2.nc"
            Value=node_compile(node,info);
            if(!Value) {
                # 395 "32function2.nc"
                err_msg(info,"compiling error");
                # 396 "32function2.nc"
                exit(2);
            }
            # 399 "32function2.nc"
            equaler=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 405, 901);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "32function2.nc", 405, 902):(void*)0);
        }
        else {
            # 402 "32function2.nc"
            equaler=fun2;
        }
        # 405 "32function2.nc"
        __dec_obj105=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source3, "32function2.nc", 405, 904);
        come_call_finalizer(buffer_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 405, 903);
        # 409 "32function2.nc"
        if(info->p==((void*)0)) {
            # 407 "32function2.nc"
            info->p=info->source->buf;
        }
        # 409 "32function2.nc"
        info->p=info->source->buf;
        # 410 "32function2.nc"
        info->p=p;
        # 411 "32function2.nc"
        info->head=head;
        # 412 "32function2.nc"
        info->sline=sline;
        # 413 "32function2.nc"
        __dec_obj106=info->sname,
        info->sname=(char* )come_increment_ref_count(sname, "32function2.nc", 413, 906);
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 413, 905);
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 417, 907);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 417, 908));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 417, 909);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 417, 910);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 417, 911);
        (name_36 = come_decrement_ref_count(name_36, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 417, 912));
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 417, 913);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 417, 914);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 417, 915);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 417, 916);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 417, 917);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 417, 918);
    }
    # 417 "32function2.nc"
    info->no_output_come_code=no_output_come_code;
    # 418 "32function2.nc"
    __right_value0 = (void*)0;
    __dec_obj107=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"32function2.nc",418), "32function2.nc", 418, 920);
    __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 418, 919);
    # 419 "32function2.nc"
    info->sline=sline_top;
    # 421 "32function2.nc"
    __dec_obj108=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "32function2.nc", 421, 922);
    __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 421, 921);
    # 422 "32function2.nc"
    __dec_obj109=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "32function2.nc", 422, 924);
    __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 422, 923);
    # 424 "32function2.nc"
    info->caller_fun=caller_fun;
    # 428 "32function2.nc"
    info->right_value_max=right_value_max;
    # 429 "32function2.nc"
    info->right_value_num=right_value_num;
    # 430 "32function2.nc"
    info->num_conditional=num_conditional;
    # 431 "32function2.nc"
    info->max_conditional=max_conditional;
    # 432 "32function2.nc"
    info->in_conditional=in_conditional;
    # 433 "32function2.nc"
    __dec_obj110=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "32function2.nc", 433, 926);
    come_call_finalizer(buffer_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 433, 925);
    # 434 "32function2.nc"
    __dec_obj111=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "32function2.nc", 434, 928);
    come_call_finalizer(buffer_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 434, 927);
    # 435 "32function2.nc"
    __dec_obj112=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "32function2.nc", 435, 930);
    come_call_finalizer(buffer_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 435, 929);
    # 436 "32function2.nc"
    info->current_stack_frame_struct=current_stack_frame_struct;
    # 437 "32function2.nc"
    __dec_obj113=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "32function2.nc", 437, 932);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 437, 931);
    # 438 "32function2.nc"
    __dec_obj114=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "32function2.nc", 438, 934);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 438, 933);
    # 418 "32function2.nc"
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "32function2.nc", 418, 935, "struct tuple2$2sFun$pchar$ph"), "32function2.nc", 418, 936),equaler,(char* )come_increment_ref_count(real_fun_name, "32function2.nc", 418, 937)))), "32function2.nc", 418, 938);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 418, 939);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 418, 940);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 418, 941);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 418, 942));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 418, 943));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 418, 944));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 418, 945);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 418, 946));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 418, 947);
    come_call_finalizer(sType_finalize, compare_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 418, 948);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "32function2.nc}", 418, 949);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "32function2.nc}", 418, 950);
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3522, 831);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3522, 832);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3522, 833);
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
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 3535, 834);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3535, 835);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3535, 836);
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
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3542, 837);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3542, 838);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3542, 839);
                return __result_obj__0;
            }
        }
        else {
            # 3546 "./neo-c.h"
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3546, 840);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3546, 841);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3546, 842);
            return __result_obj__0;
        }
    }
    # 3550 "./neo-c.h"
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3550, 843);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3550, 844);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3550, 845);
    return __result_obj__0;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_length"; neo_current_frame = &fr;
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

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_operator_not_equals_automatically"; neo_current_frame = &fr;
    struct sClass*  current_stack_frame_struct  ;
    struct sFun*  caller_fun  ;
    void* __right_value0 = (void*)0;
    struct buffer*  if_expression_buffer  ;
    struct buffer*  __dec_obj115  ;
    struct buffer*  loop_expression_buffer  ;
    struct buffer*  __dec_obj116  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj117  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char*  last_code  ;
    char*  __dec_obj118  ;
    char*  last_code2  ;
    char*  __dec_obj119  ;
    char*  sname_top  ;
    int sline_top;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    _Bool no_output_come_code;
    struct sFun*  equaler  ;
    char*  real_fun_name  ;
    struct sType*  type2  ;
    struct sType*  compare_type  ;
    struct sClass*  klass  ;
    int pointer_num;
    int compare_pointer_num;
    int max_pointer_num;
    int function_pointer_num;
    _Bool pointer_like;
    _Bool deep_compare_fields;
    void* __right_value1 = (void*)0;
    struct buffer*  source  ;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_5;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var4
;    char*  name_37  =0;
    struct sType*  field_type  =0;
    struct sType*  field_type2  ;
    _Bool field_pointer_like;
    char* p;
    int sline;
    char*  sname  ;
    char* head;
    struct buffer*  source3  ;
    struct buffer*  __dec_obj120  ;
    char*  __dec_obj121  ;
    struct sBlock*  block  ;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    char*  name_39  ;
    struct sType*  left_type  ;
    struct sType*  right_type  ;
    struct sType*  __list_values5__[2]  ;
    struct list$1sType$ph* param_types;
    char*  __list_values6__[2]  ;
    void* __right_value3 = (void*)0;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun*  fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value3;
    struct sFunNode* _inf_obj_value3;
    struct sNode* node;
    _Bool Value;
    struct buffer*  __dec_obj122  ;
    char*  __dec_obj123  ;
    char*  __dec_obj124  ;
    char*  __dec_obj125  ;
    char*  __dec_obj126  ;
    struct buffer*  __dec_obj127  ;
    struct buffer*  __dec_obj128  ;
    struct buffer*  __dec_obj129  ;
    struct list$1sRightValueObject$ph* __dec_obj130;
    struct list$1CVALUE$ph* __dec_obj131;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    memset(&current_stack_frame_struct, 0, sizeof(current_stack_frame_struct));
    memset(&caller_fun, 0, sizeof(caller_fun));
    memset(&if_expression_buffer, 0, sizeof(if_expression_buffer));
    memset(&loop_expression_buffer, 0, sizeof(loop_expression_buffer));
    memset(&paren_block_buffer, 0, sizeof(paren_block_buffer));
    memset(&right_value_max, 0, sizeof(right_value_max));
    memset(&right_value_num, 0, sizeof(right_value_num));
    memset(&max_conditional, 0, sizeof(max_conditional));
    memset(&num_conditional, 0, sizeof(num_conditional));
    memset(&in_conditional, 0, sizeof(in_conditional));
    memset(&last_code, 0, sizeof(last_code));
    memset(&last_code2, 0, sizeof(last_code2));
    memset(&sname_top, 0, sizeof(sname_top));
    memset(&sline_top, 0, sizeof(sline_top));
    memset(&stack_saved, 0, sizeof(stack_saved));
    memset(&right_value_objects, 0, sizeof(right_value_objects));
    memset(&no_output_come_code, 0, sizeof(no_output_come_code));
    memset(&equaler, 0, sizeof(equaler));
    memset(&real_fun_name, 0, sizeof(real_fun_name));
    memset(&type2, 0, sizeof(type2));
    memset(&compare_type, 0, sizeof(compare_type));
    memset(&klass, 0, sizeof(klass));
    memset(&pointer_num, 0, sizeof(pointer_num));
    memset(&compare_pointer_num, 0, sizeof(compare_pointer_num));
    memset(&max_pointer_num, 0, sizeof(max_pointer_num));
    memset(&function_pointer_num, 0, sizeof(function_pointer_num));
    memset(&pointer_like, 0, sizeof(pointer_like));
    memset(&deep_compare_fields, 0, sizeof(deep_compare_fields));
    memset(&source, 0, sizeof(source));
    memset(&_o2_saved_5, 0, sizeof(_o2_saved_5));
    memset(&it, 0, sizeof(it));
    memset(&field_type2, 0, sizeof(field_type2));
    memset(&field_pointer_like, 0, sizeof(field_pointer_like));
    memset(&p, 0, sizeof(p));
    memset(&sline, 0, sizeof(sline));
    memset(&sname, 0, sizeof(sname));
    memset(&head, 0, sizeof(head));
    memset(&source3, 0, sizeof(source3));
    memset(&block, 0, sizeof(block));
    memset(&result_type, 0, sizeof(result_type));
    memset(&name_39, 0, sizeof(name_39));
    memset(&left_type, 0, sizeof(left_type));
    memset(&right_type, 0, sizeof(right_type));
    memset(&param_types, 0, sizeof(param_types));
    memset(&param_names, 0, sizeof(param_names));
    memset(&param_default_parametors, 0, sizeof(param_default_parametors));
    memset(&fun2, 0, sizeof(fun2));
    memset(&fun, 0, sizeof(fun));
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    # 424 "32function2.nc"
    current_stack_frame_struct=info->current_stack_frame_struct;
    # 425 "32function2.nc"
    info->current_stack_frame_struct=((void*)0);
    # 426 "32function2.nc"
    caller_fun=info->caller_fun;
    # 427 "32function2.nc"
    info->caller_fun=info->come_fun;
    # 432 "32function2.nc"
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "32function2.nc", 432, 951);
    # 433 "32function2.nc"
    __dec_obj115=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 433, 952);
    # 434 "32function2.nc"
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "32function2.nc", 434, 953);
    # 435 "32function2.nc"
    __dec_obj116=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 435, 954);
    # 436 "32function2.nc"
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "32function2.nc", 436, 955);
    # 437 "32function2.nc"
    __dec_obj117=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 437, 956);
    # 439 "32function2.nc"
    right_value_max=info->right_value_max;
    # 440 "32function2.nc"
    right_value_num=info->right_value_num;
    # 441 "32function2.nc"
    max_conditional=info->max_conditional;
    # 442 "32function2.nc"
    num_conditional=info->num_conditional;
    # 443 "32function2.nc"
    in_conditional=info->in_conditional;
    # 444 "32function2.nc"
    info->in_conditional=(_Bool)0;
    # 446 "32function2.nc"
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "32function2.nc", 446, 957);
    # 447 "32function2.nc"
    __dec_obj118=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 447, 958);
    # 448 "32function2.nc"
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "32function2.nc", 448, 959);
    # 449 "32function2.nc"
    __dec_obj119=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 449, 960);
    # 451 "32function2.nc"
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"32function2.nc",451), "32function2.nc", 451, 961);
    # 452 "32function2.nc"
    sline_top=info->sline;
    # 454 "32function2.nc"
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "32function2.nc", 454, 962);
    # 455 "32function2.nc"
    right_value_objects=info->right_value_objects;
    # 457 "32function2.nc"
    no_output_come_code=info->no_output_come_code;
    # 458 "32function2.nc"
    info->no_output_come_code=(_Bool)0;
    # 425 "32function2.nc"
    equaler=((void*)0);
    # 427 "32function2.nc"
    __right_value0 = (void*)0;
    real_fun_name=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1), "32function2.nc", 427, 963);
    # 429 "32function2.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,type,info), "32function2.nc", 429, 964);
    # 431 "32function2.nc"
    type=type2;
    # 433 "32function2.nc"
    __right_value0 = (void*)0;
    compare_type=(struct sType* )come_increment_ref_count(expand_typedef_for_compare(type,info), "32function2.nc", 433, 965);
    # 434 "32function2.nc"
    klass=compare_type->mClass;
    # 435 "32function2.nc"
    pointer_num=pointer_level_for_compare(type);
    # 436 "32function2.nc"
    compare_pointer_num=pointer_level_for_compare(compare_type);
    # 437 "32function2.nc"
    max_pointer_num=((pointer_num>compare_pointer_num)?(pointer_num):(compare_pointer_num));
    # 438 "32function2.nc"
    function_pointer_num=((type->mFunctionPointerNum>compare_type->mFunctionPointerNum)?(type->mFunctionPointerNum):(compare_type->mFunctionPointerNum));
    # 439 "32function2.nc"
    pointer_like=max_pointer_num>0||function_pointer_num>0;
    # 442 "32function2.nc"
    deep_compare_fields=!klass->mNumber&&function_pointer_num==0&&max_pointer_num<=1;
    # 562 "32function2.nc"
    if(pointer_like||!klass->mNumber) {
        # 445 "32function2.nc"
        __right_value0 = (void*)0;
        source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "32function2.nc", 445, 966, "struct buffer* "), "32function2.nc", 445, 967)), "32function2.nc", 445, 968);
        # 447 "32function2.nc"
        buffer_append_char(source,123);
        # 490 "32function2.nc"
        if(klass->mProtocol) {
            # 450 "32function2.nc"
            const char* name="_protocol_obj";
            # 451 "32function2.nc"
            char source2[1024];
            memset(&source2, 0, sizeof(source2));
            # 452 "32function2.nc"
            snprintf(source2,1024,"return left.%s !== right.%s;\n",name,name);
            # 453 "32function2.nc"
            buffer_append_str(source,source2);
        }
        else if(pointer_like&&!deep_compare_fields) {
            # 456 "32function2.nc"
            buffer_append_str(source,"return left != right;\n");
        }
        else {
            # 459 "32function2.nc"
            __right_value0 = (void*)0;
            klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(info->classes,klass->mName,((void*)0),(_Bool)0)));
            # 488 "32function2.nc"
            if(klass==((void*)0)||klass->mFields==((void*)0)||list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)==0) {
                # 467 "32function2.nc"
                if(pointer_like) {
                    # 462 "32function2.nc"
                    buffer_append_str(source,"return left != right;\n");
                }
                else {
                    # 465 "32function2.nc"
                    buffer_append_str(source,"return false;\n");
                }
            }
            else {
                # 486 "32function2.nc"
                for(_o2_saved_5=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields, "32function2.nc", 469, 969),it=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_5)                ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_5);it=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_5)){
                    # 470 "32function2.nc"
                    multiple_assign_var4=it;
                    name_37=(char* )come_increment_ref_count(multiple_assign_var4->v1, "32function2.nc", 470, 970);
                    field_type=(struct sType* )come_increment_ref_count(multiple_assign_var4->v2, "32function2.nc", 470, 971);
                    # 471 "32function2.nc"
                    __right_value0 = (void*)0;
                    field_type2=(struct sType* )come_increment_ref_count(expand_typedef_for_compare(field_type,info), "32function2.nc", 471, 972);
                    # 472 "32function2.nc"
                    field_pointer_like=pointer_level_for_compare(field_type2)>0||field_type2->mFunctionPointerNum>0;
                    # 474 "32function2.nc"
                    char source2_38[1024];
                    memset(&source2_38, 0, sizeof(source2_38));
                    # 484 "32function2.nc"
                    if(list$1sNode$ph_length(field_type2->mArrayNum)>0) {
                        # 476 "32function2.nc"
                        snprintf(source2_38,1024,"if(memcmp(left.%s, right.%s, sizeof(left.%s)) != 0) { return true; }\n",name_37,name_37,name_37);
                    }
                    else if(compare_field_by_pointer(field_type,field_type2)) {
                        # 479 "32function2.nc"
                        snprintf(source2_38,1024,"if(left.%s != right.%s) { return true; }\n",name_37,name_37,name_37);
                    }
                    else {
                        # 482 "32function2.nc"
                        snprintf(source2_38,1024,"if(left.%s !== right.%s) { return true; }\n",name_37,name_37,name_37);
                    }
                    # 484 "32function2.nc"
                    buffer_append_str(source,source2_38);
                    (name_37 = come_decrement_ref_count(name_37, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 486, 973));
                    come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 486, 974);
                    come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 486, 975);
                }
                # 486 "32function2.nc"
                buffer_append_str(source,"return false;\n");
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 488, 976);
            }
        }
        # 490 "32function2.nc"
        buffer_append_char(source,125);
        # 492 "32function2.nc"
        p=info->p;
        # 493 "32function2.nc"
        sline=info->sline;
        # 494 "32function2.nc"
        sname=(char* )come_increment_ref_count(info->sname, "32function2.nc", 494, 977);
        # 495 "32function2.nc"
        head=info->head;
        # 496 "32function2.nc"
        source3=(struct buffer* )come_increment_ref_count(info->source, "32function2.nc", 496, 978);
        # 498 "32function2.nc"
        __dec_obj120=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source, "32function2.nc", 498, 980);
        come_call_finalizer(buffer_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 498, 979);
        # 502 "32function2.nc"
        if(info->p==((void*)0)) {
            # 500 "32function2.nc"
            info->p=info->source->buf;
        }
        # 502 "32function2.nc"
        info->p=info->source->buf;
        # 503 "32function2.nc"
        info->head=source->buf;
        # 505 "32function2.nc"
        __right_value0 = (void*)0;
        __dec_obj121=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(real_fun_name,"32function2.nc",505), "32function2.nc", 505, 982);
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 505, 981);
        # 506 "32function2.nc"
        info->sline=0;
        # 508 "32function2.nc"
        __right_value0 = (void*)0;
        block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "32function2.nc", 508, 983);
        # 510 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "32function2.nc", 510, 984, "struct sType* "), "32function2.nc", 510, 985),(char*)come_increment_ref_count(xsprintf("bool"), "32function2.nc", 510, 986),(_Bool)0,info,(_Bool)0,0), "32function2.nc", 510, 987);
        # 511 "32function2.nc"
        __right_value0 = (void*)0;
        name_39=(char* )come_increment_ref_count((char* )come_memdup(real_fun_name, "32function2.nc", 511, 988, "char* "), "32function2.nc", 511, 989);
        # 512 "32function2.nc"
        __right_value0 = (void*)0;
        left_type=(struct sType* )come_increment_ref_count(sType_clone(type), "32function2.nc", 512, 990);
        # 513 "32function2.nc"
        left_type->mHeap=(_Bool)0;
        # 514 "32function2.nc"
        __right_value0 = (void*)0;
        right_type=(struct sType* )come_increment_ref_count(sType_clone(type), "32function2.nc", 514, 991);
        # 515 "32function2.nc"
        right_type->mHeap=(_Bool)0;
        # 516 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values5__[0]=left_type,
__list_values5__[1]=right_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "32function2.nc", 516, 992, "struct list$1sType$ph"), "32function2.nc", 516, 993),2,__list_values5__)), "32function2.nc", 516, 994);
        # 517 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values6__[0]=((char* )(__right_value0=__builtin_string("left","32function2.nc",517))),
__list_values6__[1]=((char* )(__right_value1=__builtin_string("right","32function2.nc",517))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "32function2.nc", 517, 995, "struct list$1char$ph"), "32function2.nc", 517, 996),2,__list_values6__)), "32function2.nc", 517, 997);
        # 518 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "32function2.nc", 518, 998, "struct list$1char$ph*"), "32function2.nc", 518, 999)), "32function2.nc", 518, 1000);
        # 519 "32function2.nc"
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        # 520 "32function2.nc"
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        # 522 "32function2.nc"
        result_type->mStatic=(_Bool)0;
        # 523 "32function2.nc"
        result_type->mUniq=(_Bool)0;
        # 524 "32function2.nc"
        result_type->mInline=(_Bool)0;
        # 526 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(name_39,"32function2.nc",526)))), "32function2.nc", 526, 1001);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "32function2.nc", 526, 1002));
        # 550 "32function2.nc"
        if(fun2==((void*)0)||fun2->mExternal) {
            # 532 "32function2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "32function2.nc", 528, 1003, "struct sFun* "), "32function2.nc", 532, 1004),(char* )come_increment_ref_count(name_39, "32function2.nc", 532, 1005),(struct sType*)come_increment_ref_count(result_type, "32function2.nc", 532, 1006),(struct list$1sType$ph*)come_increment_ref_count(param_types, "32function2.nc", 532, 1007),(struct list$1char$ph*)come_increment_ref_count(param_names, "32function2.nc", 532, 1008),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "32function2.nc", 532, 1009),(_Bool)0,(_Bool)0,(struct sBlock* )come_increment_ref_count(block, "32function2.nc", 532, 1010),(_Bool)1,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "32function2.nc", 532, 1011),(char*)come_increment_ref_count(xsprintf(""), "32function2.nc", 532, 1012),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "32function2.nc", 532, 1013)), "32function2.nc", 532, 1014);
            # 533 "32function2.nc"
            fun->mGenericsFun=(_Bool)1;
            # 535 "32function2.nc"
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(name_39,"32function2.nc",535), "32function2.nc", 535, 1015),(struct sFun*)come_increment_ref_count(fun, "32function2.nc", 535, 1016),(_Bool)0);
            # 537 "32function2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "32function2.nc", 537, 1020, "struct sNode");
            _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "32function2.nc", 537, 1017, "struct sFunNode* "), "32function2.nc", 537, 1018),(struct sFun*)come_increment_ref_count(fun, "32function2.nc", 537, 1019),info))), "32function2.nc", 537, 1021);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value3, "32function2.nc", 537, 1022);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "32function2.nc}", 537, 1023);
            # 544 "32function2.nc"
            Value=node_compile(node,info);
            if(!Value) {
                # 540 "32function2.nc"
                err_msg(info,"compiling error");
                # 541 "32function2.nc"
                exit(2);
            }
            # 544 "32function2.nc"
            equaler=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 550, 1024);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "32function2.nc", 550, 1025):(void*)0);
        }
        else {
            # 547 "32function2.nc"
            equaler=fun2;
        }
        # 550 "32function2.nc"
        __dec_obj122=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source3, "32function2.nc", 550, 1027);
        come_call_finalizer(buffer_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 550, 1026);
        # 554 "32function2.nc"
        if(info->p==((void*)0)) {
            # 552 "32function2.nc"
            info->p=info->source->buf;
        }
        # 554 "32function2.nc"
        info->p=info->source->buf;
        # 555 "32function2.nc"
        info->p=p;
        # 556 "32function2.nc"
        info->head=head;
        # 557 "32function2.nc"
        info->sline=sline;
        # 558 "32function2.nc"
        __dec_obj123=info->sname,
        info->sname=(char* )come_increment_ref_count(sname, "32function2.nc", 558, 1029);
        __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 558, 1028);
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 562, 1030);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 562, 1031));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 562, 1032);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 562, 1033);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 562, 1034);
        (name_39 = come_decrement_ref_count(name_39, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 562, 1035));
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 562, 1036);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 562, 1037);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 562, 1038);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 562, 1039);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 562, 1040);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 562, 1041);
    }
    # 562 "32function2.nc"
    info->no_output_come_code=no_output_come_code;
    # 563 "32function2.nc"
    __right_value0 = (void*)0;
    __dec_obj124=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"32function2.nc",563), "32function2.nc", 563, 1043);
    __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 563, 1042);
    # 564 "32function2.nc"
    info->sline=sline_top;
    # 566 "32function2.nc"
    __dec_obj125=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "32function2.nc", 566, 1045);
    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 566, 1044);
    # 567 "32function2.nc"
    __dec_obj126=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "32function2.nc", 567, 1047);
    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 567, 1046);
    # 569 "32function2.nc"
    info->caller_fun=caller_fun;
    # 573 "32function2.nc"
    info->right_value_max=right_value_max;
    # 574 "32function2.nc"
    info->right_value_num=right_value_num;
    # 575 "32function2.nc"
    info->num_conditional=num_conditional;
    # 576 "32function2.nc"
    info->max_conditional=max_conditional;
    # 577 "32function2.nc"
    info->in_conditional=in_conditional;
    # 578 "32function2.nc"
    __dec_obj127=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "32function2.nc", 578, 1049);
    come_call_finalizer(buffer_finalize, __dec_obj127,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 578, 1048);
    # 579 "32function2.nc"
    __dec_obj128=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "32function2.nc", 579, 1051);
    come_call_finalizer(buffer_finalize, __dec_obj128,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 579, 1050);
    # 580 "32function2.nc"
    __dec_obj129=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "32function2.nc", 580, 1053);
    come_call_finalizer(buffer_finalize, __dec_obj129,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 580, 1052);
    # 581 "32function2.nc"
    info->current_stack_frame_struct=current_stack_frame_struct;
    # 582 "32function2.nc"
    __dec_obj130=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "32function2.nc", 582, 1055);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 582, 1054);
    # 583 "32function2.nc"
    __dec_obj131=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "32function2.nc", 583, 1057);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj131,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 583, 1056);
    # 563 "32function2.nc"
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "32function2.nc", 563, 1058, "struct tuple2$2sFun$pchar$ph"), "32function2.nc", 563, 1059),equaler,(char* )come_increment_ref_count(real_fun_name, "32function2.nc", 563, 1060)))), "32function2.nc", 563, 1061);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 563, 1062);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 563, 1063);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 563, 1064);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 563, 1065));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 563, 1066));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 563, 1067));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 563, 1068);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 563, 1069));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 563, 1070);
    come_call_finalizer(sType_finalize, compare_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 563, 1071);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "32function2.nc}", 563, 1072);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "32function2.nc}", 563, 1073);
    return __result_obj__0;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_not_equals_automatically"; neo_current_frame = &fr;
    struct sClass*  current_stack_frame_struct  ;
    struct sFun*  caller_fun  ;
    void* __right_value0 = (void*)0;
    struct buffer*  if_expression_buffer  ;
    struct buffer*  __dec_obj132  ;
    struct buffer*  loop_expression_buffer  ;
    struct buffer*  __dec_obj133  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj134  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char*  last_code  ;
    char*  __dec_obj135  ;
    char*  last_code2  ;
    char*  __dec_obj136  ;
    char*  sname_top  ;
    int sline_top;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    _Bool no_output_come_code;
    struct sFun*  equaler  ;
    char*  real_fun_name  ;
    struct sType*  type2  ;
    struct sType*  compare_type  ;
    struct sClass*  klass  ;
    int pointer_num;
    int compare_pointer_num;
    int max_pointer_num;
    int function_pointer_num;
    _Bool pointer_like;
    _Bool deep_compare_fields;
    void* __right_value1 = (void*)0;
    struct buffer*  source  ;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_6;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var5
;    char*  name_40  =0;
    struct sType*  field_type  =0;
    struct sType*  field_type2  ;
    _Bool field_pointer_like;
    char* p;
    int sline;
    char*  sname  ;
    char* head;
    struct buffer*  source3  ;
    struct buffer*  __dec_obj137  ;
    char*  __dec_obj138  ;
    struct sBlock*  block  ;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    char*  name_42  ;
    struct sType*  left_type  ;
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
    struct buffer*  __dec_obj139  ;
    char*  __dec_obj140  ;
    char*  __dec_obj141  ;
    char*  __dec_obj142  ;
    char*  __dec_obj143  ;
    struct buffer*  __dec_obj144  ;
    struct buffer*  __dec_obj145  ;
    struct buffer*  __dec_obj146  ;
    struct list$1sRightValueObject$ph* __dec_obj147;
    struct list$1CVALUE$ph* __dec_obj148;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    memset(&current_stack_frame_struct, 0, sizeof(current_stack_frame_struct));
    memset(&caller_fun, 0, sizeof(caller_fun));
    memset(&if_expression_buffer, 0, sizeof(if_expression_buffer));
    memset(&loop_expression_buffer, 0, sizeof(loop_expression_buffer));
    memset(&paren_block_buffer, 0, sizeof(paren_block_buffer));
    memset(&right_value_max, 0, sizeof(right_value_max));
    memset(&right_value_num, 0, sizeof(right_value_num));
    memset(&max_conditional, 0, sizeof(max_conditional));
    memset(&num_conditional, 0, sizeof(num_conditional));
    memset(&in_conditional, 0, sizeof(in_conditional));
    memset(&last_code, 0, sizeof(last_code));
    memset(&last_code2, 0, sizeof(last_code2));
    memset(&sname_top, 0, sizeof(sname_top));
    memset(&sline_top, 0, sizeof(sline_top));
    memset(&stack_saved, 0, sizeof(stack_saved));
    memset(&right_value_objects, 0, sizeof(right_value_objects));
    memset(&no_output_come_code, 0, sizeof(no_output_come_code));
    memset(&equaler, 0, sizeof(equaler));
    memset(&real_fun_name, 0, sizeof(real_fun_name));
    memset(&type2, 0, sizeof(type2));
    memset(&compare_type, 0, sizeof(compare_type));
    memset(&klass, 0, sizeof(klass));
    memset(&pointer_num, 0, sizeof(pointer_num));
    memset(&compare_pointer_num, 0, sizeof(compare_pointer_num));
    memset(&max_pointer_num, 0, sizeof(max_pointer_num));
    memset(&function_pointer_num, 0, sizeof(function_pointer_num));
    memset(&pointer_like, 0, sizeof(pointer_like));
    memset(&deep_compare_fields, 0, sizeof(deep_compare_fields));
    memset(&source, 0, sizeof(source));
    memset(&_o2_saved_6, 0, sizeof(_o2_saved_6));
    memset(&it, 0, sizeof(it));
    memset(&field_type2, 0, sizeof(field_type2));
    memset(&field_pointer_like, 0, sizeof(field_pointer_like));
    memset(&p, 0, sizeof(p));
    memset(&sline, 0, sizeof(sline));
    memset(&sname, 0, sizeof(sname));
    memset(&head, 0, sizeof(head));
    memset(&source3, 0, sizeof(source3));
    memset(&block, 0, sizeof(block));
    memset(&result_type, 0, sizeof(result_type));
    memset(&name_42, 0, sizeof(name_42));
    memset(&left_type, 0, sizeof(left_type));
    memset(&right_type, 0, sizeof(right_type));
    memset(&param_types, 0, sizeof(param_types));
    memset(&param_names, 0, sizeof(param_names));
    memset(&param_default_parametors, 0, sizeof(param_default_parametors));
    memset(&fun2, 0, sizeof(fun2));
    memset(&fun, 0, sizeof(fun));
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    # 569 "32function2.nc"
    current_stack_frame_struct=info->current_stack_frame_struct;
    # 570 "32function2.nc"
    info->current_stack_frame_struct=((void*)0);
    # 571 "32function2.nc"
    caller_fun=info->caller_fun;
    # 572 "32function2.nc"
    info->caller_fun=info->come_fun;
    # 577 "32function2.nc"
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "32function2.nc", 577, 1074);
    # 578 "32function2.nc"
    __dec_obj132=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj132,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 578, 1075);
    # 579 "32function2.nc"
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "32function2.nc", 579, 1076);
    # 580 "32function2.nc"
    __dec_obj133=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 580, 1077);
    # 581 "32function2.nc"
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "32function2.nc", 581, 1078);
    # 582 "32function2.nc"
    __dec_obj134=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 582, 1079);
    # 584 "32function2.nc"
    right_value_max=info->right_value_max;
    # 585 "32function2.nc"
    right_value_num=info->right_value_num;
    # 586 "32function2.nc"
    max_conditional=info->max_conditional;
    # 587 "32function2.nc"
    num_conditional=info->num_conditional;
    # 588 "32function2.nc"
    in_conditional=info->in_conditional;
    # 589 "32function2.nc"
    info->in_conditional=(_Bool)0;
    # 591 "32function2.nc"
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "32function2.nc", 591, 1080);
    # 592 "32function2.nc"
    __dec_obj135=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 592, 1081);
    # 593 "32function2.nc"
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "32function2.nc", 593, 1082);
    # 594 "32function2.nc"
    __dec_obj136=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 594, 1083);
    # 596 "32function2.nc"
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"32function2.nc",596), "32function2.nc", 596, 1084);
    # 597 "32function2.nc"
    sline_top=info->sline;
    # 599 "32function2.nc"
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "32function2.nc", 599, 1085);
    # 600 "32function2.nc"
    right_value_objects=info->right_value_objects;
    # 602 "32function2.nc"
    no_output_come_code=info->no_output_come_code;
    # 603 "32function2.nc"
    info->no_output_come_code=(_Bool)0;
    # 570 "32function2.nc"
    equaler=((void*)0);
    # 572 "32function2.nc"
    __right_value0 = (void*)0;
    real_fun_name=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1), "32function2.nc", 572, 1086);
    # 574 "32function2.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,type,info), "32function2.nc", 574, 1087);
    # 576 "32function2.nc"
    type=type2;
    # 578 "32function2.nc"
    __right_value0 = (void*)0;
    compare_type=(struct sType* )come_increment_ref_count(expand_typedef_for_compare(type,info), "32function2.nc", 578, 1088);
    # 579 "32function2.nc"
    klass=compare_type->mClass;
    # 580 "32function2.nc"
    pointer_num=pointer_level_for_compare(type);
    # 581 "32function2.nc"
    compare_pointer_num=pointer_level_for_compare(compare_type);
    # 582 "32function2.nc"
    max_pointer_num=((pointer_num>compare_pointer_num)?(pointer_num):(compare_pointer_num));
    # 583 "32function2.nc"
    function_pointer_num=((type->mFunctionPointerNum>compare_type->mFunctionPointerNum)?(type->mFunctionPointerNum):(compare_type->mFunctionPointerNum));
    # 584 "32function2.nc"
    pointer_like=max_pointer_num>0||function_pointer_num>0;
    # 587 "32function2.nc"
    deep_compare_fields=!klass->mNumber&&function_pointer_num==0&&max_pointer_num<=1;
    # 707 "32function2.nc"
    if(pointer_like||!klass->mNumber) {
        # 590 "32function2.nc"
        __right_value0 = (void*)0;
        source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "32function2.nc", 590, 1089, "struct buffer* "), "32function2.nc", 590, 1090)), "32function2.nc", 590, 1091);
        # 592 "32function2.nc"
        buffer_append_char(source,123);
        # 635 "32function2.nc"
        if(klass->mProtocol) {
            # 595 "32function2.nc"
            const char* name="_protocol_obj";
            # 596 "32function2.nc"
            char source2[1024];
            memset(&source2, 0, sizeof(source2));
            # 597 "32function2.nc"
            snprintf(source2,1024,"return !left.%s.equals(right.%s);\n",name,name);
            # 598 "32function2.nc"
            buffer_append_str(source,source2);
        }
        else if(pointer_like&&!deep_compare_fields) {
            # 601 "32function2.nc"
            buffer_append_str(source,"return left != right;\n");
        }
        else {
            # 604 "32function2.nc"
            __right_value0 = (void*)0;
            klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(info->classes,klass->mName,((void*)0),(_Bool)0)));
            # 633 "32function2.nc"
            if(klass==((void*)0)||klass->mFields==((void*)0)||list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)==0) {
                # 612 "32function2.nc"
                if(pointer_like) {
                    # 607 "32function2.nc"
                    buffer_append_str(source,"return left != right;\n");
                }
                else {
                    # 610 "32function2.nc"
                    buffer_append_str(source,"return false;\n");
                }
            }
            else {
                # 631 "32function2.nc"
                for(_o2_saved_6=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields, "32function2.nc", 614, 1092),it=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_6)                ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_6);it=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_6)){
                    # 615 "32function2.nc"
                    multiple_assign_var5=it;
                    name_40=(char* )come_increment_ref_count(multiple_assign_var5->v1, "32function2.nc", 615, 1093);
                    field_type=(struct sType* )come_increment_ref_count(multiple_assign_var5->v2, "32function2.nc", 615, 1094);
                    # 616 "32function2.nc"
                    __right_value0 = (void*)0;
                    field_type2=(struct sType* )come_increment_ref_count(expand_typedef_for_compare(field_type,info), "32function2.nc", 616, 1095);
                    # 617 "32function2.nc"
                    field_pointer_like=pointer_level_for_compare(field_type2)>0||field_type2->mFunctionPointerNum>0;
                    # 619 "32function2.nc"
                    char source2_41[1024];
                    memset(&source2_41, 0, sizeof(source2_41));
                    # 629 "32function2.nc"
                    if(list$1sNode$ph_length(field_type2->mArrayNum)>0) {
                        # 621 "32function2.nc"
                        snprintf(source2_41,1024,"if(memcmp(left.%s, right.%s, sizeof(left.%s)) != 0) { return true; }\n",name_40,name_40,name_40);
                    }
                    else if(compare_field_by_pointer(field_type,field_type2)) {
                        # 624 "32function2.nc"
                        snprintf(source2_41,1024,"if(left.%s != right.%s) { return true; }\n",name_40,name_40,name_40);
                    }
                    else {
                        # 627 "32function2.nc"
                        snprintf(source2_41,1024,"if(!left.%s.equals(right.%s)) { return true; }\n",name_40,name_40,name_40);
                    }
                    # 629 "32function2.nc"
                    buffer_append_str(source,source2_41);
                    (name_40 = come_decrement_ref_count(name_40, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 631, 1096));
                    come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 631, 1097);
                    come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 631, 1098);
                }
                # 631 "32function2.nc"
                buffer_append_str(source,"return false;\n");
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 633, 1099);
            }
        }
        # 635 "32function2.nc"
        buffer_append_char(source,125);
        # 637 "32function2.nc"
        p=info->p;
        # 638 "32function2.nc"
        sline=info->sline;
        # 639 "32function2.nc"
        sname=(char* )come_increment_ref_count(info->sname, "32function2.nc", 639, 1100);
        # 640 "32function2.nc"
        head=info->head;
        # 641 "32function2.nc"
        source3=(struct buffer* )come_increment_ref_count(info->source, "32function2.nc", 641, 1101);
        # 643 "32function2.nc"
        __dec_obj137=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source, "32function2.nc", 643, 1103);
        come_call_finalizer(buffer_finalize, __dec_obj137,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 643, 1102);
        # 647 "32function2.nc"
        if(info->p==((void*)0)) {
            # 645 "32function2.nc"
            info->p=info->source->buf;
        }
        # 647 "32function2.nc"
        info->p=info->source->buf;
        # 648 "32function2.nc"
        info->head=source->buf;
        # 650 "32function2.nc"
        __right_value0 = (void*)0;
        __dec_obj138=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(real_fun_name,"32function2.nc",650), "32function2.nc", 650, 1105);
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 650, 1104);
        # 651 "32function2.nc"
        info->sline=0;
        # 653 "32function2.nc"
        __right_value0 = (void*)0;
        block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "32function2.nc", 653, 1106);
        # 655 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "32function2.nc", 655, 1107, "struct sType* "), "32function2.nc", 655, 1108),(char*)come_increment_ref_count(xsprintf("bool"), "32function2.nc", 655, 1109),(_Bool)0,info,(_Bool)0,0), "32function2.nc", 655, 1110);
        # 656 "32function2.nc"
        __right_value0 = (void*)0;
        name_42=(char* )come_increment_ref_count((char* )come_memdup(real_fun_name, "32function2.nc", 656, 1111, "char* "), "32function2.nc", 656, 1112);
        # 657 "32function2.nc"
        __right_value0 = (void*)0;
        left_type=(struct sType* )come_increment_ref_count(sType_clone(type), "32function2.nc", 657, 1113);
        # 658 "32function2.nc"
        left_type->mHeap=(_Bool)0;
        # 659 "32function2.nc"
        __right_value0 = (void*)0;
        right_type=(struct sType* )come_increment_ref_count(sType_clone(type), "32function2.nc", 659, 1114);
        # 660 "32function2.nc"
        right_type->mHeap=(_Bool)0;
        # 661 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values7__[0]=left_type,
__list_values7__[1]=right_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "32function2.nc", 661, 1115, "struct list$1sType$ph"), "32function2.nc", 661, 1116),2,__list_values7__)), "32function2.nc", 661, 1117);
        # 662 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values8__[0]=((char* )(__right_value0=__builtin_string("left","32function2.nc",662))),
__list_values8__[1]=((char* )(__right_value1=__builtin_string("right","32function2.nc",662))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "32function2.nc", 662, 1118, "struct list$1char$ph"), "32function2.nc", 662, 1119),2,__list_values8__)), "32function2.nc", 662, 1120);
        # 663 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "32function2.nc", 663, 1121, "struct list$1char$ph*"), "32function2.nc", 663, 1122)), "32function2.nc", 663, 1123);
        # 664 "32function2.nc"
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        # 665 "32function2.nc"
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        # 667 "32function2.nc"
        result_type->mStatic=(_Bool)0;
        # 668 "32function2.nc"
        result_type->mUniq=(_Bool)0;
        # 669 "32function2.nc"
        result_type->mInline=(_Bool)0;
        # 671 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(name_42,"32function2.nc",671)))), "32function2.nc", 671, 1124);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "32function2.nc", 671, 1125));
        # 695 "32function2.nc"
        if(fun2==((void*)0)||fun2->mExternal) {
            # 677 "32function2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "32function2.nc", 673, 1126, "struct sFun* "), "32function2.nc", 677, 1127),(char* )come_increment_ref_count(name_42, "32function2.nc", 677, 1128),(struct sType*)come_increment_ref_count(result_type, "32function2.nc", 677, 1129),(struct list$1sType$ph*)come_increment_ref_count(param_types, "32function2.nc", 677, 1130),(struct list$1char$ph*)come_increment_ref_count(param_names, "32function2.nc", 677, 1131),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "32function2.nc", 677, 1132),(_Bool)0,(_Bool)0,(struct sBlock* )come_increment_ref_count(block, "32function2.nc", 677, 1133),(_Bool)1,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "32function2.nc", 677, 1134),(char*)come_increment_ref_count(xsprintf(""), "32function2.nc", 677, 1135),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "32function2.nc", 677, 1136)), "32function2.nc", 677, 1137);
            # 678 "32function2.nc"
            fun->mGenericsFun=(_Bool)1;
            # 680 "32function2.nc"
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(name_42,"32function2.nc",680), "32function2.nc", 680, 1138),(struct sFun*)come_increment_ref_count(fun, "32function2.nc", 680, 1139),(_Bool)0);
            # 682 "32function2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "32function2.nc", 682, 1143, "struct sNode");
            _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "32function2.nc", 682, 1140, "struct sFunNode* "), "32function2.nc", 682, 1141),(struct sFun*)come_increment_ref_count(fun, "32function2.nc", 682, 1142),info))), "32function2.nc", 682, 1144);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value4, "32function2.nc", 682, 1145);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "32function2.nc}", 682, 1146);
            # 689 "32function2.nc"
            Value=node_compile(node,info);
            if(!Value) {
                # 685 "32function2.nc"
                err_msg(info,"compiling error");
                # 686 "32function2.nc"
                exit(2);
            }
            # 689 "32function2.nc"
            equaler=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 695, 1147);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "32function2.nc", 695, 1148):(void*)0);
        }
        else {
            # 692 "32function2.nc"
            equaler=fun2;
        }
        # 695 "32function2.nc"
        __dec_obj139=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source3, "32function2.nc", 695, 1150);
        come_call_finalizer(buffer_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 695, 1149);
        # 699 "32function2.nc"
        if(info->p==((void*)0)) {
            # 697 "32function2.nc"
            info->p=info->source->buf;
        }
        # 699 "32function2.nc"
        info->p=info->source->buf;
        # 700 "32function2.nc"
        info->p=p;
        # 701 "32function2.nc"
        info->head=head;
        # 702 "32function2.nc"
        info->sline=sline;
        # 703 "32function2.nc"
        __dec_obj140=info->sname,
        info->sname=(char* )come_increment_ref_count(sname, "32function2.nc", 703, 1152);
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 703, 1151);
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 707, 1153);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 707, 1154));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 707, 1155);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 707, 1156);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 707, 1157);
        (name_42 = come_decrement_ref_count(name_42, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 707, 1158));
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 707, 1159);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 707, 1160);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 707, 1161);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 707, 1162);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 707, 1163);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 707, 1164);
    }
    # 707 "32function2.nc"
    info->no_output_come_code=no_output_come_code;
    # 708 "32function2.nc"
    __right_value0 = (void*)0;
    __dec_obj141=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"32function2.nc",708), "32function2.nc", 708, 1166);
    __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 708, 1165);
    # 709 "32function2.nc"
    info->sline=sline_top;
    # 711 "32function2.nc"
    __dec_obj142=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "32function2.nc", 711, 1168);
    __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 711, 1167);
    # 712 "32function2.nc"
    __dec_obj143=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "32function2.nc", 712, 1170);
    __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 712, 1169);
    # 714 "32function2.nc"
    info->caller_fun=caller_fun;
    # 718 "32function2.nc"
    info->right_value_max=right_value_max;
    # 719 "32function2.nc"
    info->right_value_num=right_value_num;
    # 720 "32function2.nc"
    info->num_conditional=num_conditional;
    # 721 "32function2.nc"
    info->max_conditional=max_conditional;
    # 722 "32function2.nc"
    info->in_conditional=in_conditional;
    # 723 "32function2.nc"
    __dec_obj144=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "32function2.nc", 723, 1172);
    come_call_finalizer(buffer_finalize, __dec_obj144,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 723, 1171);
    # 724 "32function2.nc"
    __dec_obj145=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "32function2.nc", 724, 1174);
    come_call_finalizer(buffer_finalize, __dec_obj145,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 724, 1173);
    # 725 "32function2.nc"
    __dec_obj146=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "32function2.nc", 725, 1176);
    come_call_finalizer(buffer_finalize, __dec_obj146,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 725, 1175);
    # 726 "32function2.nc"
    info->current_stack_frame_struct=current_stack_frame_struct;
    # 727 "32function2.nc"
    __dec_obj147=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "32function2.nc", 727, 1178);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj147,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 727, 1177);
    # 728 "32function2.nc"
    __dec_obj148=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "32function2.nc", 728, 1180);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj148,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 728, 1179);
    # 708 "32function2.nc"
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "32function2.nc", 708, 1181, "struct tuple2$2sFun$pchar$ph"), "32function2.nc", 708, 1182),equaler,(char* )come_increment_ref_count(real_fun_name, "32function2.nc", 708, 1183)))), "32function2.nc", 708, 1184);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 708, 1185);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 708, 1186);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 708, 1187);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 708, 1188));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 708, 1189));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 708, 1190));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 708, 1191);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 708, 1192));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 708, 1193);
    come_call_finalizer(sType_finalize, compare_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 708, 1194);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "32function2.nc}", 708, 1195);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "32function2.nc}", 708, 1196);
    return __result_obj__0;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_operator_equals_automatically"; neo_current_frame = &fr;
    struct sClass*  current_stack_frame_struct  ;
    struct sFun*  caller_fun  ;
    void* __right_value0 = (void*)0;
    struct buffer*  if_expression_buffer  ;
    struct buffer*  __dec_obj149  ;
    struct buffer*  loop_expression_buffer  ;
    struct buffer*  __dec_obj150  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj151  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char*  last_code  ;
    char*  __dec_obj152  ;
    char*  last_code2  ;
    char*  __dec_obj153  ;
    char*  sname_top  ;
    int sline_top;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    _Bool no_output_come_code;
    struct sFun*  equaler  ;
    char*  real_fun_name  ;
    struct sType*  type2  ;
    struct sType*  compare_type  ;
    struct sClass*  klass  ;
    int pointer_num;
    int compare_pointer_num;
    int max_pointer_num;
    int function_pointer_num;
    _Bool pointer_like;
    _Bool deep_compare_fields;
    void* __right_value1 = (void*)0;
    struct buffer*  source  ;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_7;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var6
;    char*  name_43  =0;
    struct sType*  field_type  =0;
    struct sType*  field_type2  ;
    _Bool field_pointer_like;
    char* p;
    int sline;
    char*  sname  ;
    char* head;
    struct buffer*  source3  ;
    struct buffer*  __dec_obj154  ;
    char*  __dec_obj155  ;
    struct sBlock*  block  ;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    char*  name_45  ;
    struct sType*  left_type  ;
    struct sType*  right_type  ;
    struct sType*  __list_values9__[2]  ;
    struct list$1sType$ph* param_types;
    char*  __list_values10__[2]  ;
    void* __right_value3 = (void*)0;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun*  fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value5;
    struct sFunNode* _inf_obj_value5;
    struct sNode* node;
    _Bool Value;
    struct buffer*  __dec_obj156  ;
    char*  __dec_obj157  ;
    char*  __dec_obj158  ;
    char*  __dec_obj159  ;
    char*  __dec_obj160  ;
    struct buffer*  __dec_obj161  ;
    struct buffer*  __dec_obj162  ;
    struct buffer*  __dec_obj163  ;
    struct list$1sRightValueObject$ph* __dec_obj164;
    struct list$1CVALUE$ph* __dec_obj165;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    memset(&current_stack_frame_struct, 0, sizeof(current_stack_frame_struct));
    memset(&caller_fun, 0, sizeof(caller_fun));
    memset(&if_expression_buffer, 0, sizeof(if_expression_buffer));
    memset(&loop_expression_buffer, 0, sizeof(loop_expression_buffer));
    memset(&paren_block_buffer, 0, sizeof(paren_block_buffer));
    memset(&right_value_max, 0, sizeof(right_value_max));
    memset(&right_value_num, 0, sizeof(right_value_num));
    memset(&max_conditional, 0, sizeof(max_conditional));
    memset(&num_conditional, 0, sizeof(num_conditional));
    memset(&in_conditional, 0, sizeof(in_conditional));
    memset(&last_code, 0, sizeof(last_code));
    memset(&last_code2, 0, sizeof(last_code2));
    memset(&sname_top, 0, sizeof(sname_top));
    memset(&sline_top, 0, sizeof(sline_top));
    memset(&stack_saved, 0, sizeof(stack_saved));
    memset(&right_value_objects, 0, sizeof(right_value_objects));
    memset(&no_output_come_code, 0, sizeof(no_output_come_code));
    memset(&equaler, 0, sizeof(equaler));
    memset(&real_fun_name, 0, sizeof(real_fun_name));
    memset(&type2, 0, sizeof(type2));
    memset(&compare_type, 0, sizeof(compare_type));
    memset(&klass, 0, sizeof(klass));
    memset(&pointer_num, 0, sizeof(pointer_num));
    memset(&compare_pointer_num, 0, sizeof(compare_pointer_num));
    memset(&max_pointer_num, 0, sizeof(max_pointer_num));
    memset(&function_pointer_num, 0, sizeof(function_pointer_num));
    memset(&pointer_like, 0, sizeof(pointer_like));
    memset(&deep_compare_fields, 0, sizeof(deep_compare_fields));
    memset(&source, 0, sizeof(source));
    memset(&_o2_saved_7, 0, sizeof(_o2_saved_7));
    memset(&it, 0, sizeof(it));
    memset(&field_type2, 0, sizeof(field_type2));
    memset(&field_pointer_like, 0, sizeof(field_pointer_like));
    memset(&p, 0, sizeof(p));
    memset(&sline, 0, sizeof(sline));
    memset(&sname, 0, sizeof(sname));
    memset(&head, 0, sizeof(head));
    memset(&source3, 0, sizeof(source3));
    memset(&block, 0, sizeof(block));
    memset(&result_type, 0, sizeof(result_type));
    memset(&name_45, 0, sizeof(name_45));
    memset(&left_type, 0, sizeof(left_type));
    memset(&right_type, 0, sizeof(right_type));
    memset(&param_types, 0, sizeof(param_types));
    memset(&param_names, 0, sizeof(param_names));
    memset(&param_default_parametors, 0, sizeof(param_default_parametors));
    memset(&fun2, 0, sizeof(fun2));
    memset(&fun, 0, sizeof(fun));
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    # 714 "32function2.nc"
    current_stack_frame_struct=info->current_stack_frame_struct;
    # 715 "32function2.nc"
    info->current_stack_frame_struct=((void*)0);
    # 716 "32function2.nc"
    caller_fun=info->caller_fun;
    # 717 "32function2.nc"
    info->caller_fun=info->come_fun;
    # 722 "32function2.nc"
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "32function2.nc", 722, 1197);
    # 723 "32function2.nc"
    __dec_obj149=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj149,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 723, 1198);
    # 724 "32function2.nc"
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "32function2.nc", 724, 1199);
    # 725 "32function2.nc"
    __dec_obj150=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj150,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 725, 1200);
    # 726 "32function2.nc"
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "32function2.nc", 726, 1201);
    # 727 "32function2.nc"
    __dec_obj151=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj151,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 727, 1202);
    # 729 "32function2.nc"
    right_value_max=info->right_value_max;
    # 730 "32function2.nc"
    right_value_num=info->right_value_num;
    # 731 "32function2.nc"
    max_conditional=info->max_conditional;
    # 732 "32function2.nc"
    num_conditional=info->num_conditional;
    # 733 "32function2.nc"
    in_conditional=info->in_conditional;
    # 734 "32function2.nc"
    info->in_conditional=(_Bool)0;
    # 736 "32function2.nc"
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "32function2.nc", 736, 1203);
    # 737 "32function2.nc"
    __dec_obj152=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 737, 1204);
    # 738 "32function2.nc"
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "32function2.nc", 738, 1205);
    # 739 "32function2.nc"
    __dec_obj153=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 739, 1206);
    # 741 "32function2.nc"
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"32function2.nc",741), "32function2.nc", 741, 1207);
    # 742 "32function2.nc"
    sline_top=info->sline;
    # 744 "32function2.nc"
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "32function2.nc", 744, 1208);
    # 745 "32function2.nc"
    right_value_objects=info->right_value_objects;
    # 747 "32function2.nc"
    no_output_come_code=info->no_output_come_code;
    # 748 "32function2.nc"
    info->no_output_come_code=(_Bool)0;
    # 715 "32function2.nc"
    equaler=((void*)0);
    # 717 "32function2.nc"
    __right_value0 = (void*)0;
    real_fun_name=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1), "32function2.nc", 717, 1209);
    # 719 "32function2.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,type,info), "32function2.nc", 719, 1210);
    # 721 "32function2.nc"
    type=type2;
    # 723 "32function2.nc"
    __right_value0 = (void*)0;
    compare_type=(struct sType* )come_increment_ref_count(expand_typedef_for_compare(type,info), "32function2.nc", 723, 1211);
    # 724 "32function2.nc"
    klass=compare_type->mClass;
    # 725 "32function2.nc"
    pointer_num=pointer_level_for_compare(type);
    # 726 "32function2.nc"
    compare_pointer_num=pointer_level_for_compare(compare_type);
    # 727 "32function2.nc"
    max_pointer_num=((pointer_num>compare_pointer_num)?(pointer_num):(compare_pointer_num));
    # 728 "32function2.nc"
    function_pointer_num=((type->mFunctionPointerNum>compare_type->mFunctionPointerNum)?(type->mFunctionPointerNum):(compare_type->mFunctionPointerNum));
    # 729 "32function2.nc"
    pointer_like=max_pointer_num>0||function_pointer_num>0;
    # 732 "32function2.nc"
    deep_compare_fields=!klass->mNumber&&function_pointer_num==0&&max_pointer_num<=1;
    # 853 "32function2.nc"
    if(pointer_like||!klass->mNumber) {
        # 735 "32function2.nc"
        __right_value0 = (void*)0;
        source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "32function2.nc", 735, 1212, "struct buffer* "), "32function2.nc", 735, 1213)), "32function2.nc", 735, 1214);
        # 737 "32function2.nc"
        buffer_append_char(source,123);
        # 780 "32function2.nc"
        if(klass->mProtocol) {
            # 740 "32function2.nc"
            const char* name="_protocol_obj";
            # 741 "32function2.nc"
            char source2[1024];
            memset(&source2, 0, sizeof(source2));
            # 742 "32function2.nc"
            snprintf(source2,1024,"return left.%s === right.%s;\n",name,name);
            # 743 "32function2.nc"
            buffer_append_str(source,source2);
        }
        else if(pointer_like&&!deep_compare_fields) {
            # 746 "32function2.nc"
            buffer_append_str(source,"return left == right;\n");
        }
        else {
            # 749 "32function2.nc"
            __right_value0 = (void*)0;
            klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(info->classes,klass->mName,((void*)0),(_Bool)0)));
            # 778 "32function2.nc"
            if(klass==((void*)0)||klass->mFields==((void*)0)||list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)==0) {
                # 757 "32function2.nc"
                if(pointer_like) {
                    # 752 "32function2.nc"
                    buffer_append_str(source,"return left == right;\n");
                }
                else {
                    # 755 "32function2.nc"
                    buffer_append_str(source,"return true;\n");
                }
            }
            else {
                # 777 "32function2.nc"
                for(_o2_saved_7=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields, "32function2.nc", 759, 1215),it=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_7)                ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_7);it=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_7)){
                    # 760 "32function2.nc"
                    multiple_assign_var6=it;
                    name_43=(char* )come_increment_ref_count(multiple_assign_var6->v1, "32function2.nc", 760, 1216);
                    field_type=(struct sType* )come_increment_ref_count(multiple_assign_var6->v2, "32function2.nc", 760, 1217);
                    # 761 "32function2.nc"
                    __right_value0 = (void*)0;
                    field_type2=(struct sType* )come_increment_ref_count(expand_typedef_for_compare(field_type,info), "32function2.nc", 761, 1218);
                    # 762 "32function2.nc"
                    field_pointer_like=pointer_level_for_compare(field_type2)>0||field_type2->mFunctionPointerNum>0;
                    # 764 "32function2.nc"
                    char source2_44[1024];
                    memset(&source2_44, 0, sizeof(source2_44));
                    # 775 "32function2.nc"
                    if(list$1sNode$ph_length(field_type2->mArrayNum)>0) {
                        # 766 "32function2.nc"
                        snprintf(source2_44,1024,"if(memcmp(left.%s, right.%s, sizeof(left.%s)) != 0) { return false; }\n",name_43,name_43,name_43);
                    }
                    else if(compare_field_by_pointer(field_type,field_type2)) {
                        # 769 "32function2.nc"
                        snprintf(source2_44,1024,"if(left.%s != right.%s) { return false; }\n",name_43,name_43,name_43);
                    }
                    else {
                        # 772 "32function2.nc"
                        snprintf(source2_44,1024,"if(left.%s !== right.%s) { return false; }\n",name_43,name_43,name_43);
                    }
                    # 775 "32function2.nc"
                    buffer_append_str(source,source2_44);
                    (name_43 = come_decrement_ref_count(name_43, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 777, 1219));
                    come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 777, 1220);
                    come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 777, 1221);
                }
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 778, 1222);
            }
        }
        # 780 "32function2.nc"
        buffer_append_str(source,"return true;\n");
        # 781 "32function2.nc"
        buffer_append_char(source,125);
        # 783 "32function2.nc"
        p=info->p;
        # 784 "32function2.nc"
        sline=info->sline;
        # 785 "32function2.nc"
        sname=(char* )come_increment_ref_count(info->sname, "32function2.nc", 785, 1223);
        # 786 "32function2.nc"
        head=info->head;
        # 787 "32function2.nc"
        source3=(struct buffer* )come_increment_ref_count(info->source, "32function2.nc", 787, 1224);
        # 789 "32function2.nc"
        __dec_obj154=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source, "32function2.nc", 789, 1226);
        come_call_finalizer(buffer_finalize, __dec_obj154,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 789, 1225);
        # 793 "32function2.nc"
        if(info->p==((void*)0)) {
            # 791 "32function2.nc"
            info->p=info->source->buf;
        }
        # 793 "32function2.nc"
        info->p=info->source->buf;
        # 794 "32function2.nc"
        info->head=source->buf;
        # 796 "32function2.nc"
        __right_value0 = (void*)0;
        __dec_obj155=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(real_fun_name,"32function2.nc",796), "32function2.nc", 796, 1228);
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 796, 1227);
        # 797 "32function2.nc"
        info->sline=0;
        # 799 "32function2.nc"
        __right_value0 = (void*)0;
        block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "32function2.nc", 799, 1229);
        # 801 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "32function2.nc", 801, 1230, "struct sType* "), "32function2.nc", 801, 1231),(char*)come_increment_ref_count(xsprintf("bool"), "32function2.nc", 801, 1232),(_Bool)0,info,(_Bool)0,0), "32function2.nc", 801, 1233);
        # 802 "32function2.nc"
        __right_value0 = (void*)0;
        name_45=(char* )come_increment_ref_count((char* )come_memdup(real_fun_name, "32function2.nc", 802, 1234, "char* "), "32function2.nc", 802, 1235);
        # 803 "32function2.nc"
        __right_value0 = (void*)0;
        left_type=(struct sType* )come_increment_ref_count(sType_clone(type), "32function2.nc", 803, 1236);
        # 804 "32function2.nc"
        left_type->mHeap=(_Bool)0;
        # 805 "32function2.nc"
        __right_value0 = (void*)0;
        right_type=(struct sType* )come_increment_ref_count(sType_clone(type), "32function2.nc", 805, 1237);
        # 806 "32function2.nc"
        right_type->mHeap=(_Bool)0;
        # 807 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values9__[0]=left_type,
__list_values9__[1]=right_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "32function2.nc", 807, 1238, "struct list$1sType$ph"), "32function2.nc", 807, 1239),2,__list_values9__)), "32function2.nc", 807, 1240);
        # 808 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values10__[0]=((char* )(__right_value0=__builtin_string("left","32function2.nc",808))),
__list_values10__[1]=((char* )(__right_value1=__builtin_string("right","32function2.nc",808))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "32function2.nc", 808, 1241, "struct list$1char$ph"), "32function2.nc", 808, 1242),2,__list_values10__)), "32function2.nc", 808, 1243);
        # 809 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "32function2.nc", 809, 1244, "struct list$1char$ph*"), "32function2.nc", 809, 1245)), "32function2.nc", 809, 1246);
        # 810 "32function2.nc"
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        # 811 "32function2.nc"
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        # 813 "32function2.nc"
        result_type->mStatic=(_Bool)0;
        # 814 "32function2.nc"
        result_type->mUniq=(_Bool)0;
        # 815 "32function2.nc"
        result_type->mInline=(_Bool)0;
        # 817 "32function2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(name_45,"32function2.nc",817)))), "32function2.nc", 817, 1247);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "32function2.nc", 817, 1248));
        # 841 "32function2.nc"
        if(fun2==((void*)0)||fun2->mExternal) {
            # 823 "32function2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "32function2.nc", 819, 1249, "struct sFun* "), "32function2.nc", 823, 1250),(char* )come_increment_ref_count(name_45, "32function2.nc", 823, 1251),(struct sType*)come_increment_ref_count(result_type, "32function2.nc", 823, 1252),(struct list$1sType$ph*)come_increment_ref_count(param_types, "32function2.nc", 823, 1253),(struct list$1char$ph*)come_increment_ref_count(param_names, "32function2.nc", 823, 1254),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "32function2.nc", 823, 1255),(_Bool)0,(_Bool)0,(struct sBlock* )come_increment_ref_count(block, "32function2.nc", 823, 1256),(_Bool)1,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "32function2.nc", 823, 1257),(char*)come_increment_ref_count(xsprintf(""), "32function2.nc", 823, 1258),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "32function2.nc", 823, 1259)), "32function2.nc", 823, 1260);
            # 824 "32function2.nc"
            fun->mGenericsFun=(_Bool)1;
            # 826 "32function2.nc"
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(name_45,"32function2.nc",826), "32function2.nc", 826, 1261),(struct sFun*)come_increment_ref_count(fun, "32function2.nc", 826, 1262),(_Bool)0);
            # 828 "32function2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "32function2.nc", 828, 1266, "struct sNode");
            _inf_obj_value5=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "32function2.nc", 828, 1263, "struct sFunNode* "), "32function2.nc", 828, 1264),(struct sFun*)come_increment_ref_count(fun, "32function2.nc", 828, 1265),info))), "32function2.nc", 828, 1267);
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sFunNode_finalize;
            _inf_value5->clone=(void*)sFunNode_clone;
            _inf_value5->compile=(void*)sFunNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sFunNode_kind;
            _inf_value5->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(_inf_value5, "32function2.nc", 828, 1268);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "32function2.nc}", 828, 1269);
            # 835 "32function2.nc"
            Value=node_compile(node,info);
            if(!Value) {
                # 831 "32function2.nc"
                err_msg(info,"compiling error(X)");
                # 832 "32function2.nc"
                exit(2);
            }
            # 835 "32function2.nc"
            equaler=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 841, 1270);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "32function2.nc", 841, 1271):(void*)0);
        }
        else {
            # 838 "32function2.nc"
            equaler=fun2;
        }
        # 841 "32function2.nc"
        __dec_obj156=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source3, "32function2.nc", 841, 1273);
        come_call_finalizer(buffer_finalize, __dec_obj156,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 841, 1272);
        # 845 "32function2.nc"
        if(info->p==((void*)0)) {
            # 843 "32function2.nc"
            info->p=info->source->buf;
        }
        # 845 "32function2.nc"
        info->p=info->source->buf;
        # 846 "32function2.nc"
        info->p=p;
        # 847 "32function2.nc"
        info->head=head;
        # 848 "32function2.nc"
        info->sline=sline;
        # 849 "32function2.nc"
        __dec_obj157=info->sname,
        info->sname=(char* )come_increment_ref_count(sname, "32function2.nc", 849, 1275);
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 849, 1274);
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 853, 1276);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 853, 1277));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 853, 1278);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 853, 1279);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 853, 1280);
        (name_45 = come_decrement_ref_count(name_45, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 853, 1281));
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 853, 1282);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 853, 1283);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 853, 1284);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 853, 1285);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 853, 1286);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 853, 1287);
    }
    # 853 "32function2.nc"
    info->no_output_come_code=no_output_come_code;
    # 854 "32function2.nc"
    __right_value0 = (void*)0;
    __dec_obj158=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"32function2.nc",854), "32function2.nc", 854, 1289);
    __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 854, 1288);
    # 855 "32function2.nc"
    info->sline=sline_top;
    # 857 "32function2.nc"
    __dec_obj159=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "32function2.nc", 857, 1291);
    __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 857, 1290);
    # 858 "32function2.nc"
    __dec_obj160=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "32function2.nc", 858, 1293);
    __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0, (void*)0, "32function2.nc", 858, 1292);
    # 860 "32function2.nc"
    info->caller_fun=caller_fun;
    # 864 "32function2.nc"
    info->right_value_max=right_value_max;
    # 865 "32function2.nc"
    info->right_value_num=right_value_num;
    # 866 "32function2.nc"
    info->num_conditional=num_conditional;
    # 867 "32function2.nc"
    info->max_conditional=max_conditional;
    # 868 "32function2.nc"
    info->in_conditional=in_conditional;
    # 869 "32function2.nc"
    __dec_obj161=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "32function2.nc", 869, 1295);
    come_call_finalizer(buffer_finalize, __dec_obj161,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 869, 1294);
    # 870 "32function2.nc"
    __dec_obj162=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "32function2.nc", 870, 1297);
    come_call_finalizer(buffer_finalize, __dec_obj162,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 870, 1296);
    # 871 "32function2.nc"
    __dec_obj163=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "32function2.nc", 871, 1299);
    come_call_finalizer(buffer_finalize, __dec_obj163,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 871, 1298);
    # 872 "32function2.nc"
    info->current_stack_frame_struct=current_stack_frame_struct;
    # 873 "32function2.nc"
    __dec_obj164=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "32function2.nc", 873, 1301);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj164,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 873, 1300);
    # 874 "32function2.nc"
    __dec_obj165=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "32function2.nc", 874, 1303);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj165,(void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc", 874, 1302);
    # 854 "32function2.nc"
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "32function2.nc", 854, 1304, "struct tuple2$2sFun$pchar$ph"), "32function2.nc", 854, 1305),equaler,(char* )come_increment_ref_count(real_fun_name, "32function2.nc", 854, 1306)))), "32function2.nc", 854, 1307);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 854, 1308);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 854, 1309);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 854, 1310);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 854, 1311));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 854, 1312));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 854, 1313));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 854, 1314);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "32function2.nc", 854, 1315));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 854, 1316);
    come_call_finalizer(sType_finalize, compare_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "32function2.nc}", 854, 1317);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "32function2.nc}", 854, 1318);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "32function2.nc}", 854, 1319);
    return __result_obj__0;
}

