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

struct sStrNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  value  ;
};

struct sBufferNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct buffer*  value  ;
    unsigned long  int  size  ;
};

struct sSStringNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  value  ;
    struct list$1sNode$ph* exps;
};

struct sCharNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    int value;
};

struct sWCharNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    int  value  ;
    _Bool quote;
};

struct sWStringNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    int*  value  ;
};

struct sPrefixedCharNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    int value;
    char*  prefix  ;
};

struct sPrefixedStringNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  value  ;
    char*  prefix  ;
};

struct sListNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1sNode$ph* list_elements;
};

struct sVectorNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1sNode$ph* list_elements;
};

struct sTupleNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
};

struct sMapNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1sNode$ph* map_key_elements;
    struct list$1sNode$ph* map_elements;
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char*  value  , int sline, struct sInfo*  info  );
char*  sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStrNode_finalize(struct sStrNode* self);
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static void CVALUE_finalize(struct CVALUE*  self  );
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer*  value  , unsigned long  int  size  , struct sInfo*  info  );
char*  sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo*  info  );
static void sBufferNode_finalize(struct sBufferNode* self);
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
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char*  value  , struct list$1sNode$ph* exps, int sline, struct sInfo*  info  );
char*  sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo*  info  );
static void sSStringNode_finalize(struct sSStringNode* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo*  info  );
char*  sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo*  info  );
static void sCharNode_finalize(struct sCharNode* self);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int  value  , _Bool quote, struct sInfo*  info  );
char*  sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo*  info  );
static void sWCharNode_finalize(struct sWCharNode* self);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int*  value  , int sline, struct sInfo*  info  );
char*  sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo*  info  );
static void sWStringNode_finalize(struct sWStringNode* self);
struct sPrefixedCharNode* sPrefixedCharNode_initialize(struct sPrefixedCharNode* self, int value, char*  prefix  , struct sInfo*  info  );
char*  sPrefixedCharNode_kind(struct sPrefixedCharNode* self);
_Bool sPrefixedCharNode_compile(struct sPrefixedCharNode* self, struct sInfo*  info  );
static void sPrefixedCharNode_finalize(struct sPrefixedCharNode* self);
struct sPrefixedStringNode* sPrefixedStringNode_initialize(struct sPrefixedStringNode* self, char*  value  , char*  prefix  , int sline, struct sInfo*  info  );
char*  sPrefixedStringNode_kind(struct sPrefixedStringNode* self);
_Bool sPrefixedStringNode_compile(struct sPrefixedStringNode* self, struct sInfo*  info  );
static void sPrefixedStringNode_finalize(struct sPrefixedStringNode* self);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo*  info  );
char*  sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo*  info  );
static void sListNode_finalize(struct sListNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE*  list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer);
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
struct sVectorNode* sVectorNode_initialize(struct sVectorNode* self, struct list$1sNode$ph* list_elements, struct sInfo*  info  );
char*  sVectorNode_kind(struct sVectorNode* self);
_Bool sVectorNode_compile(struct sVectorNode* self, struct sInfo*  info  );
static void sVectorNode_finalize(struct sVectorNode* self);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo*  info  );
char*  sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo*  info  );
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct CVALUE*  CVALUE_clone(struct CVALUE*  self  );
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo*  info  );
char*  sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo*  info  );
static void sMapNode_finalize(struct sMapNode* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
struct sNode* create_str_node(char*  value  , int sline, struct sInfo*  info  );
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
struct sNode* create_buffer_node(struct buffer*  value  , unsigned long  int  size  , struct sInfo*  info  );
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
struct sNode* create_sstring_node(char*  value  , struct list$1sNode$ph* exps, int sline, struct sInfo*  info  );
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
struct sNode* create_char_node(int value, struct sInfo*  info  );
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
struct sNode* create_wchar_node(int  value  , _Bool quote, struct sInfo*  info  );
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
struct sNode* create_wstring_node(int*  value  , int sline, struct sInfo*  info  );
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
struct sNode* create_prefixed_char_node(int value, char*  prefix  , struct sInfo*  info  );
static struct sPrefixedCharNode* sPrefixedCharNode_clone(struct sPrefixedCharNode* self);
struct sNode* create_prefixed_string_node(char*  value  , char*  prefix  , int sline, struct sInfo*  info  );
static struct sPrefixedStringNode* sPrefixedStringNode_clone(struct sPrefixedStringNode* self);
struct sNode* create_list_node(struct list$1sNode$ph* list_elements, struct sInfo*  info  );
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* create_vector_node(struct list$1sNode$ph* list_elements, struct sInfo*  info  );
static struct sVectorNode* sVectorNode_clone(struct sVectorNode* self);
struct sNode* create_tuple_node(struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo*  info  );
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
struct sNode* create_map_node(struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo*  info  );
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char*  value  , int sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStrNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj1  ;
    struct sStrNode* __result_obj__0;
    # 7 "36str2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sStrNode*)come_increment_ref_count(self, "36str2.nc", 7, 1),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 7, 3);
    # 9 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj1=self->value,
    self->value=(char* )come_increment_ref_count(__builtin_string(value,"36str2.nc",9), "36str2.nc", 9, 5);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 9, 4);
    # 12 "36str2.nc"
        __result_obj__0 = (struct sStrNode*)come_increment_ref_count(self, "36str2.nc", 12, 6);
    come_call_finalizer(sStrNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 12, 9);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 12, 10));
    neo_current_frame = fr.prev;
    come_call_finalizer(sStrNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 12, 11);
    return __result_obj__0;
}

char*  sStrNode_kind(struct sStrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStrNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 14 "36str2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sStrNode","36str2.nc",14))), "36str2.nc", 14, 12);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 14, 13));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "36str2.nc", 14, 14));
    return __result_obj__0;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStrNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj2  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj3  ;
    _Bool __result_obj__0;
    memset(&come_value, 0, sizeof(come_value));
    # 19 "36str2.nc"
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 19, 15, "struct CVALUE* "), "36str2.nc", 19, 16)), "36str2.nc", 19, 17);
    # 21 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj2=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",self->value), "36str2.nc", 21, 19);
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 21, 18);
    # 22 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj3=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "36str2.nc", 22, 20, "struct sType* "), "36str2.nc", 22, 21),(char*)come_increment_ref_count(xsprintf("char*"), "36str2.nc", 22, 22),(_Bool)0,info,(_Bool)0,0), "36str2.nc", 22, 56);
    come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 22, 55);
    # 26 "36str2.nc"
    if(gComeSafe) {
        # 24 "36str2.nc"
        come_value->type->mConstant=(_Bool)1;
    }
    # 26 "36str2.nc"
    come_value->var=((void*)0);
    # 28 "36str2.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "36str2.nc", 28, 76));
    # 30 "36str2.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 32 "36str2.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 32, 77);
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

static void sStrNode_finalize(struct sStrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStrNode_finalize"; neo_current_frame = &fr;
    # 1 "sStrNode_finalize"
    # 3 "sStrNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sStrNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sStrNode_finalize", 2, 7));
    }
    # 4 "sStrNode_finalize"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 3 "sStrNode_finalize"
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0, "sStrNode_finalize", 3, 8));
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
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 23);
    }
    # 4 "sType_finalize"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 3 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 24);
    }
    # 5 "sType_finalize"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 4 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 27);
    }
    # 6 "sType_finalize"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 5 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 28);
    }
    # 7 "sType_finalize"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 6 "sType_finalize"
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 29):(void*)0);
    }
    # 8 "sType_finalize"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 7 "sType_finalize"
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 30):(void*)0);
    }
    # 9 "sType_finalize"
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        # 8 "sType_finalize"
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 31));
    }
    # 10 "sType_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 9 "sType_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 32));
    }
    # 11 "sType_finalize"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 10 "sType_finalize"
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 33));
    }
    # 12 "sType_finalize"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 11 "sType_finalize"
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 34));
    }
    # 13 "sType_finalize"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 12 "sType_finalize"
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 35));
    }
    # 14 "sType_finalize"
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        # 13 "sType_finalize"
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 36));
    }
    # 15 "sType_finalize"
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        # 14 "sType_finalize"
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 37));
    }
    # 16 "sType_finalize"
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        # 15 "sType_finalize"
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 38));
    }
    # 17 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        # 16 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 41);
    }
    # 18 "sType_finalize"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 17 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 42);
    }
    # 19 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 18 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 44);
    }
    # 20 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 19 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 45);
    }
    # 21 "sType_finalize"
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        # 20 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 46);
    }
    # 22 "sType_finalize"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 21 "sType_finalize"
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 47));
    }
    # 23 "sType_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 22 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 48);
    }
    # 24 "sType_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 23 "sType_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 0, 51);
    }
    # 25 "sType_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 24 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 52);
    }
    # 26 "sType_finalize"
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        # 25 "sType_finalize"
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 53):(void*)0);
    }
    # 27 "sType_finalize"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 26 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 54);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 26);
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
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 25);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 40);
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
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 39):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 43);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 50);
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
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 49));
    }
            neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj4  ;
    struct list_item$1CVALUE$ph* litem_0;
    struct CVALUE*  __dec_obj5  ;
    struct list_item$1CVALUE$ph* litem_1;
    struct CVALUE*  __dec_obj6  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_0, 0, sizeof(litem_0));
    memset(&litem_1, 0, sizeof(litem_1));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 62);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1619, 63, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1619, 64);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj4=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1623, 66);
        come_call_finalizer(CVALUE_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 65);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1629, 67, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1629, 68);
        # 1631 "./neo-c.h"
        litem_0->prev=self->head;
        # 1632 "./neo-c.h"
        litem_0->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj5=litem_0->item,
        litem_0->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1633, 70);
        come_call_finalizer(CVALUE_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 69);
        # 1635 "./neo-c.h"
        self->tail=litem_0;
        # 1636 "./neo-c.h"
        self->head->next=litem_0;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1639, 71, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1639, 72);
        # 1641 "./neo-c.h"
        litem_1->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_1->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj6=litem_1->item,
        litem_1->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1643, 74);
        come_call_finalizer(CVALUE_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 73);
        # 1645 "./neo-c.h"
        self->tail->next=litem_1;
        # 1646 "./neo-c.h"
        self->tail=litem_1;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 75);
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
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 57));
    }
    # 4 "CVALUE_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 3 "CVALUE_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 58);
    }
    # 5 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        # 4 "CVALUE_finalize"
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 59));
    }
    # 6 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        # 5 "CVALUE_finalize"
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 60));
    }
    # 7 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        # 6 "CVALUE_finalize"
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 61));
    }
            neo_current_frame = fr.prev;
}

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer*  value  , unsigned long  int  size  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBufferNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct buffer*  __dec_obj7  ;
    struct sBufferNode* __result_obj__0;
    # 40 "36str2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sBufferNode*)come_increment_ref_count(self, "36str2.nc", 40, 78),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 40, 79);
    # 42 "36str2.nc"
    __dec_obj7=self->value,
    self->value=(struct buffer* )come_increment_ref_count(value, "36str2.nc", 42, 81);
    come_call_finalizer(buffer_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 42, 80);
    # 43 "36str2.nc"
    self->size=size;
    # 46 "36str2.nc"
        __result_obj__0 = (struct sBufferNode*)come_increment_ref_count(self, "36str2.nc", 46, 82);
    come_call_finalizer(sBufferNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 46, 85);
    come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 46, 86);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBufferNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 46, 87);
    return __result_obj__0;
}

char*  sBufferNode_kind(struct sBufferNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBufferNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 48 "36str2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sBufferNode","36str2.nc",48))), "36str2.nc", 48, 88);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 48, 89));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "36str2.nc", 48, 90));
    return __result_obj__0;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBufferNode_compile"; neo_current_frame = &fr;
    struct buffer*  value  ;
    unsigned long  int  size  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct buffer*  buf  ;
    void* __right_value2 = (void*)0;
    struct sType*  type2  ;
    struct sType*  any_type  ;
    _Bool _conditional_value_X0;
    struct sType*  type2_2  ;
    char*  __dec_obj8  ;
    struct sType*  __dec_obj43  ;
    _Bool __result_obj__0;
    memset(&value, 0, sizeof(value));
    memset(&size, 0, sizeof(size));
    memset(&come_value, 0, sizeof(come_value));
    memset(&buf, 0, sizeof(buf));
    memset(&type2, 0, sizeof(type2));
    memset(&any_type, 0, sizeof(any_type));
    memset(&type2_2, 0, sizeof(type2_2));
    # 53 "36str2.nc"
    value=(struct buffer* )come_increment_ref_count(self->value, "36str2.nc", 53, 91);
    # 54 "36str2.nc"
    size=self->size;
    # 56 "36str2.nc"
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 56, 92, "struct CVALUE* "), "36str2.nc", 56, 93)), "36str2.nc", 56, 94);
    # 58 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "36str2.nc", 58, 95, "struct buffer* "), "36str2.nc", 58, 96)), "36str2.nc", 58, 97);
    # 60 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "36str2.nc", 60, 98, "struct sType* "), "36str2.nc", 60, 99),(char*)come_increment_ref_count(xsprintf("buffer"), "36str2.nc", 60, 100),(_Bool)0,info,(_Bool)0,0), "36str2.nc", 60, 101);
    # 61 "36str2.nc"
    type2->mPointerNum++;
    # 63 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    any_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "36str2.nc", 63, 102, "struct sType* "), "36str2.nc", 63, 103),(char*)come_increment_ref_count(xsprintf("buffer"), "36str2.nc", 63, 104),(_Bool)0,info,(_Bool)0,0), "36str2.nc", 63, 105);
    # 64 "36str2.nc"
    any_type->mPointerNum=1;
    # 65 "36str2.nc"
    any_type->mHeap=(_Bool)1;
    # 74 "36str2.nc"
    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 67, 162));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 3, 163);
_conditional_value_X0;})) {
        # 68 "36str2.nc"
        __right_value0 = (void*)0;
        buffer_append_format(buf,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc_v2(1, sizeof(struct buffer), \"%s\", %d, %d, \"buffer\"), \"%s\", %d, %d), \"%s\", %ld)",info->sname,info->sline,++info->id,info->sname,info->sline,++info->id,((char* )(__right_value0=buffer_to_string(value))),size);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 68, 164));
    }
    else {
        # 71 "36str2.nc"
        __right_value0 = (void*)0;
        buffer_append_format(buf,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, %d, \"buffer\"), \"%s\", %d, %d), \"%s\", %ld)",info->sname,info->sline,++info->id,info->sname,info->sline,++info->id,((char* )(__right_value0=buffer_to_string(value))),size);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 71, 165));
    }
    # 74 "36str2.nc"
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 74, 166);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    type2_2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "36str2.nc", 74, 167, "struct sType* "), "36str2.nc", 74, 168),(char*)come_increment_ref_count(xsprintf("buffer*"), "36str2.nc", 74, 169),(_Bool)0,info,(_Bool)0,0), "36str2.nc", 74, 170);
    # 75 "36str2.nc"
    type2_2->mHeap=(_Bool)1;
    # 77 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj8=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "36str2.nc", 77, 172);
    __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 77, 171);
    # 78 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj43=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(type2_2), "36str2.nc", 78, 351);
    come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 78, 350);
    # 79 "36str2.nc"
    come_value->var=((void*)0);
    # 81 "36str2.nc"
    append_object_to_right_values(come_value,type2_2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    # 83 "36str2.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "36str2.nc", 83, 352));
    # 85 "36str2.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 87 "36str2.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 87, 353);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 87, 354);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 87, 355);
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 87, 356);
    come_call_finalizer(sType_finalize, type2_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 87, 357);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sBufferNode_finalize(struct sBufferNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBufferNode_finalize"; neo_current_frame = &fr;
    # 1 "sBufferNode_finalize"
    # 3 "sBufferNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sBufferNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sBufferNode_finalize", 2, 83));
    }
    # 4 "sBufferNode_finalize"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 3 "sBufferNode_finalize"
        come_call_finalizer(buffer_finalize, self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBufferNode_finalize}", 3, 84);
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
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    # 4047 "./neo-c.h"
    # 4049 "./neo-c.h"
    # 4050 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sFun* ));
    # 4056 "./neo-c.h"
    if(self==((void*)0)) {
        # 4053 "./neo-c.h"
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 106);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 133);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 134);
        return __result_obj__0;
    }
    # 4056 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 4057 "./neo-c.h"
    hash=key_hash%self->size;
    # 4058 "./neo-c.h"
    it=hash;
    # 4080 "./neo-c.h"
    while((_Bool)1) {
        # 4078 "./neo-c.h"
        if(self->item_existance[it]) {
            # 4068 "./neo-c.h"
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                # 4065 "./neo-c.h"
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 135);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4065, 136);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4065, 137);
                return __result_obj__0;
            }
            # 4071 "./neo-c.h"
            if(++it>=self->size) {
                # 4069 "./neo-c.h"
                it=0;
            }
            # 4074 "./neo-c.h"
            if(it==hash) {
                # 4072 "./neo-c.h"
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 138);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 139);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 140);
                return __result_obj__0;
            }
        }
        else {
            # 4076 "./neo-c.h"
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 141);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 142);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 143);
            return __result_obj__0;
        }
    }
    # 4080 "./neo-c.h"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 144);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 145);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 146);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    # 1 "sFun_finalize"
    # 3 "sFun_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 2 "sFun_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 107));
    }
    # 4 "sFun_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 3 "sFun_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 108);
    }
    # 5 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 4 "sFun_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 109);
    }
    # 6 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 5 "sFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 110);
    }
    # 7 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        # 6 "sFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 111);
    }
    # 8 "sFun_finalize"
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        # 7 "sFun_finalize"
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 112);
    }
    # 9 "sFun_finalize"
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        # 8 "sFun_finalize"
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 19, 119);
    }
    # 10 "sFun_finalize"
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        # 9 "sFun_finalize"
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 122);
    }
    # 11 "sFun_finalize"
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        # 10 "sFun_finalize"
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 123));
    }
    # 12 "sFun_finalize"
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        # 11 "sFun_finalize"
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 124));
    }
    # 13 "sFun_finalize"
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        # 12 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 125);
    }
    # 14 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        # 13 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 126);
    }
    # 15 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        # 14 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 127);
    }
    # 16 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        # 15 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 128);
    }
    # 17 "sFun_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 16 "sFun_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 129));
    }
    # 18 "sFun_finalize"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 17 "sFun_finalize"
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 130));
    }
    # 19 "sFun_finalize"
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        # 18 "sFun_finalize"
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 131));
    }
    # 20 "sFun_finalize"
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        # 19 "sFun_finalize"
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 132));
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 118);
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
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 117);
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
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 113));
    }
    # 4 "sVar_finalize"
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        # 3 "sVar_finalize"
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 114));
    }
    # 5 "sVar_finalize"
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        # 4 "sVar_finalize"
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 115);
    }
    # 6 "sVar_finalize"
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        # 5 "sVar_finalize"
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 116));
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
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 120);
    }
    # 4 "sBlock_finalize"
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        # 3 "sBlock_finalize"
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 121);
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
    # 4047 "./neo-c.h"
    # 4049 "./neo-c.h"
    # 4050 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sFun* ));
    # 4056 "./neo-c.h"
    if(self==((void*)0)) {
        # 4053 "./neo-c.h"
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 147);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 148);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 149);
        return __result_obj__0;
    }
    # 4056 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 4057 "./neo-c.h"
    hash=key_hash%self->size;
    # 4058 "./neo-c.h"
    it=hash;
    # 4080 "./neo-c.h"
    while((_Bool)1) {
        # 4078 "./neo-c.h"
        if(self->item_existance[it]) {
            # 4068 "./neo-c.h"
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                # 4065 "./neo-c.h"
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 150);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4065, 151);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4065, 152);
                return __result_obj__0;
            }
            # 4071 "./neo-c.h"
            if(++it>=self->size) {
                # 4069 "./neo-c.h"
                it=0;
            }
            # 4074 "./neo-c.h"
            if(it==hash) {
                # 4072 "./neo-c.h"
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 153);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 154);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 155);
                return __result_obj__0;
            }
        }
        else {
            # 4076 "./neo-c.h"
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 156);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 157);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 158);
            return __result_obj__0;
        }
    }
    # 4080 "./neo-c.h"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 159);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 160);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 161);
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
    memset(&result, 0, sizeof(result));
    # 3 "sType_clone"
    # 5 "sType_clone"
    if(self==(void*)0) {
        # 4 "sType_clone"
                __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0, "sType_clone", 4, 173);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 4, 174);
        return __result_obj__0;
    }
    # 5 "sType_clone"
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 175, "struct sType* "), "sType_clone", 5, 176);
    # 7 "sType_clone"
    if(self!=((void*)0)) {
        # 6 "sType_clone"
        result->mClass=self->mClass;
    }
    # 8 "sType_clone"
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        # 7 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj9=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 178);
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 177);
    }
    # 9 "sType_clone"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 8 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj10=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 180);
        come_call_finalizer(sType_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 179);
    }
    # 10 "sType_clone"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 9 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj14=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 76, 210);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 209);
    }
    # 11 "sType_clone"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 10 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj15=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 212);
        come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 211);
    }
    # 12 "sType_clone"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 11 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj16=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 221);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 220) :0);
    }
    # 13 "sType_clone"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 12 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj17=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 223);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 222) :0);
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
        __dec_obj18=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 224, "char* "), "sType_clone", 14, 226);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 225);
    }
    # 16 "sType_clone"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 15 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj19=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 227, "char* "), "sType_clone", 15, 229);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 228);
    }
    # 17 "sType_clone"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 16 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj20=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 230, "char* "), "sType_clone", 16, 232);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 231);
    }
    # 18 "sType_clone"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 17 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj21=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 233, "char* "), "sType_clone", 17, 235);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 234);
    }
    # 19 "sType_clone"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 18 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj22=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 236, "char* "), "sType_clone", 18, 238);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 237);
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
        __dec_obj23=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 239, "char* "), "sType_clone", 49, 241);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 240);
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
        __dec_obj24=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 242, "char* "), "sType_clone", 51, 244);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 243);
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
        __dec_obj25=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 245, "char* "), "sType_clone", 54, 247);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 246);
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
        __dec_obj29=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 15, 277);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 276);
    }
    # 59 "sType_clone"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 58 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj30=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 279);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 278);
    }
    # 60 "sType_clone"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 59 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj31=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 15, 299);
        come_call_finalizer(list$1int$_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 298);
    }
    # 61 "sType_clone"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 60 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj32=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 301);
        come_call_finalizer(list$1int$_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 300);
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
        __dec_obj33=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 303);
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 302);
    }
    # 68 "sType_clone"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 67 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj34=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 304, "char* "), "sType_clone", 67, 306);
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 305);
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
        __dec_obj35=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 308);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 307);
    }
    # 73 "sType_clone"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 72 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj39=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 15, 340);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 339);
    }
    # 74 "sType_clone"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 73 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj40=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 342);
        come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 341);
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
        __dec_obj41=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 344);
        (__dec_obj41 ? __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 343) :0);
    }
    # 77 "sType_clone"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 76 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj42=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 346);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 345);
    }
    # 77 "sType_clone"
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "sType_clone", 77, 347);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 348);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 349);
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 181);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 182);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1513, 183, "struct list$1sType$ph*"), "./neo-c.h", 1513, 187)), "./neo-c.h", 1513, 188);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1518, 203));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1521, 204));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 205);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 206);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 207);
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
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 184);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 185);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 186);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj11  ;
    struct list_item$1sType$ph* litem_3;
    struct sType*  __dec_obj12  ;
    struct list_item$1sType$ph* litem_4;
    struct sType*  __dec_obj13  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_3, 0, sizeof(litem_3));
    memset(&litem_4, 0, sizeof(litem_4));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 189);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1534, 190, "struct list_item$1sType$ph*"))), "./neo-c.h", 1534, 191);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj11=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1538, 193);
        come_call_finalizer(sType_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 192);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1544, 194, "struct list_item$1sType$ph*"))), "./neo-c.h", 1544, 195);
        # 1546 "./neo-c.h"
        litem_3->prev=self->head;
        # 1547 "./neo-c.h"
        litem_3->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj12=litem_3->item,
        litem_3->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1548, 197);
        come_call_finalizer(sType_finalize, __dec_obj12,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 196);
        # 1550 "./neo-c.h"
        self->tail=litem_3;
        # 1551 "./neo-c.h"
        self->head->next=litem_3;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1554, 198, "struct list_item$1sType$ph*"))), "./neo-c.h", 1554, 199);
        # 1556 "./neo-c.h"
        litem_4->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_4->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj13=litem_4->item,
        litem_4->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1558, 201);
        come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 200);
        # 1560 "./neo-c.h"
        self->tail->next=litem_4;
        # 1561 "./neo-c.h"
        self->tail=litem_4;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 202);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 208);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 213);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 214):(void*)0);
        return __result_obj__0;
    }
    # 5 "sNode_clone"
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 215, "struct sNode*"), "sNode_clone", 5, 216);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 217);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 218):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 219):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 248);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 249);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1513, 250, "struct list$1sNode$ph*"), "./neo-c.h", 1513, 254)), "./neo-c.h", 1513, 255);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1518, 270));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1521, 271));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 272);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 273);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 274);
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
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 251);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 252);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 253);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj26;
    struct list_item$1sNode$ph* litem_5;
    struct sNode* __dec_obj27;
    struct list_item$1sNode$ph* litem_6;
    struct sNode* __dec_obj28;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_5, 0, sizeof(litem_5));
    memset(&litem_6, 0, sizeof(litem_6));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1531, 256):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1534, 257, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1534, 258);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj26=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1538, 260);
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1538, 259) :0);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1544, 261, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1544, 262);
        # 1546 "./neo-c.h"
        litem_5->prev=self->head;
        # 1547 "./neo-c.h"
        litem_5->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj27=litem_5->item,
        litem_5->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1548, 264);
        (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1548, 263) :0);
        # 1550 "./neo-c.h"
        self->tail=litem_5;
        # 1551 "./neo-c.h"
        self->head->next=litem_5;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1554, 265, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1554, 266);
        # 1556 "./neo-c.h"
        litem_6->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_6->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj28=litem_6->item,
        litem_6->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1558, 268);
        (__dec_obj28 ? __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1558, 267) :0);
        # 1560 "./neo-c.h"
        self->tail->next=litem_6;
        # 1561 "./neo-c.h"
        self->tail=litem_6;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1566, 269):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 275);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 280);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 281);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1513, 282, "struct list$1int$*"), "./neo-c.h", 1513, 286)), "./neo-c.h", 1513, 287);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1527, 294);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 295);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 296);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1485, 283);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 284);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 285);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_7;
    struct list_item$1int$* litem_8;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_7, 0, sizeof(litem_7));
    memset(&litem_8, 0, sizeof(litem_8));
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1534, 288, "struct list_item$1int$*"))), "./neo-c.h", 1534, 289);
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
        litem_7=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1544, 290, "struct list_item$1int$*"))), "./neo-c.h", 1544, 291);
        # 1546 "./neo-c.h"
        litem_7->prev=self->head;
        # 1547 "./neo-c.h"
        litem_7->next=((void*)0);
        # 1548 "./neo-c.h"
        litem_7->item=item;
        # 1550 "./neo-c.h"
        self->tail=litem_7;
        # 1551 "./neo-c.h"
        self->head->next=litem_7;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1554, 292, "struct list_item$1int$*"))), "./neo-c.h", 1554, 293);
        # 1556 "./neo-c.h"
        litem_8->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_8->next=((void*)0);
        # 1558 "./neo-c.h"
        litem_8->item=item;
        # 1560 "./neo-c.h"
        self->tail->next=litem_8;
        # 1561 "./neo-c.h"
        self->tail=litem_8;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 297);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 309);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 310);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1513, 311, "struct list$1char$ph*"), "./neo-c.h", 1513, 315)), "./neo-c.h", 1513, 316);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1518, 331, "char* "), "./neo-c.h", 1518, 332));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1521, 333, "char* "), "./neo-c.h", 1521, 334));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 335);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 336);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 337);
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 312);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 313);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 314);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj36  ;
    struct list_item$1char$ph* litem_9;
    char*  __dec_obj37  ;
    struct list_item$1char$ph* litem_10;
    char*  __dec_obj38  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_9, 0, sizeof(litem_9));
    memset(&litem_10, 0, sizeof(litem_10));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1531, 317));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1534, 318, "struct list_item$1char$ph*"))), "./neo-c.h", 1534, 319);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj36=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1538, 321);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1538, 320);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1544, 322, "struct list_item$1char$ph*"))), "./neo-c.h", 1544, 323);
        # 1546 "./neo-c.h"
        litem_9->prev=self->head;
        # 1547 "./neo-c.h"
        litem_9->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj37=litem_9->item,
        litem_9->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1548, 325);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1548, 324);
        # 1550 "./neo-c.h"
        self->tail=litem_9;
        # 1551 "./neo-c.h"
        self->head->next=litem_9;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_10=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1554, 326, "struct list_item$1char$ph*"))), "./neo-c.h", 1554, 327);
        # 1556 "./neo-c.h"
        litem_10->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_10->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj38=litem_10->item,
        litem_10->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1558, 329);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1558, 328);
        # 1560 "./neo-c.h"
        self->tail->next=litem_10;
        # 1561 "./neo-c.h"
        self->tail=litem_10;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1566, 330));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 338);
    }
            neo_current_frame = fr.prev;
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char*  value  , struct list$1sNode$ph* exps, int sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSStringNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj44  ;
    struct list$1sNode$ph* __dec_obj45;
    struct sSStringNode* __result_obj__0;
    # 95 "36str2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSStringNode*)come_increment_ref_count(self, "36str2.nc", 95, 358),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 95, 359);
    # 97 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj44=self->value,
    self->value=(char* )come_increment_ref_count(__builtin_string(value,"36str2.nc",97), "36str2.nc", 97, 361);
    __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 97, 360);
    # 98 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj45=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(exps), "36str2.nc", 98, 363);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 98, 362);
    # 101 "36str2.nc"
        __result_obj__0 = (struct sSStringNode*)come_increment_ref_count(self, "36str2.nc", 101, 364);
    come_call_finalizer(sSStringNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 101, 368);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 101, 369));
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 101, 370);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSStringNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 101, 371);
    return __result_obj__0;
}

char*  sSStringNode_kind(struct sSStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSStringNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 103 "36str2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSStringNode","36str2.nc",103))), "36str2.nc", 103, 372);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 103, 373));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "36str2.nc", 103, 374));
    return __result_obj__0;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSStringNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct buffer*  buf  ;
    struct list$1sNode$ph* _o2_saved_3;
    struct sNode* it;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  come_value_15  ;
    struct sType*  type2  ;
    char*  __dec_obj51  ;
    struct sType*  __dec_obj52  ;
    memset(&come_value, 0, sizeof(come_value));
    memset(&buf, 0, sizeof(buf));
    memset(&_o2_saved_3, 0, sizeof(_o2_saved_3));
    memset(&it, 0, sizeof(it));
    memset(&obj, 0, sizeof(obj));
    memset(&params, 0, sizeof(params));
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value_15, 0, sizeof(come_value_15));
    memset(&type2, 0, sizeof(type2));
    # 108 "36str2.nc"
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 108, 375, "struct CVALUE* "), "36str2.nc", 108, 376)), "36str2.nc", 108, 377);
    # 110 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "36str2.nc", 110, 378, "struct buffer* "), "36str2.nc", 110, 379)), "36str2.nc", 110, 380);
    # 112 "36str2.nc"
    buffer_append_str(buf,"xsprintf(\"");
    # 113 "36str2.nc"
    buffer_append_str(buf,self->value);
    # 114 "36str2.nc"
    buffer_append_str(buf,"\"");
    # 136 "36str2.nc"
    if(list$1sNode$ph_length(self->exps)>0) {
        # 134 "36str2.nc"
        for(_o2_saved_3=(struct list$1sNode$ph*)come_increment_ref_count(self->exps, "36str2.nc", 117, 381),it=list$1sNode$ph_begin(_o2_saved_3)        ;!list$1sNode$ph_end(_o2_saved_3);it=list$1sNode$ph_next(_o2_saved_3)){
            # 118 "36str2.nc"
            __right_value0 = (void*)0;
            obj=(struct sNode*)come_increment_ref_count(sNode_clone(it), "36str2.nc", 118, 382);
            # 120 "36str2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "36str2.nc", 120, 383, "struct list$1tuple2$2char$phsNode$ph$ph*"), "36str2.nc", 120, 391)), "36str2.nc", 120, 392);
            # 121 "36str2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "36str2.nc", 121, 407, "struct tuple2$2char$phsNode$ph"), "36str2.nc", 3, 417),(char*)come_increment_ref_count(xsprintf("self"), "36str2.nc", 3, 418),(struct sNode*)come_increment_ref_count(sNode_clone(it), "36str2.nc", 3, 419)), "36str2.nc", 121, 420));
            # 123 "36str2.nc"
            __right_value0 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj, "36str2.nc", 123, 421),params,((void*)0),0,((void*)0),info,(_Bool)0), "36str2.nc", 123, 422);
            # 129 "36str2.nc"
            Value=node_compile(node,info);
            if(!Value) {
                # 126 "36str2.nc"
                                __result_obj__0 = (_Bool)0;
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "36str2.nc", 126, 423):(void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 126, 424);
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "36str2.nc", 126, 425):(void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 126, 426);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 126, 427);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 126, 428);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            # 129 "36str2.nc"
            __right_value0 = (void*)0;
            come_value_15=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "36str2.nc", 129, 429);
            # 131 "36str2.nc"
            buffer_append_str(buf,",");
            # 132 "36str2.nc"
            buffer_append_str(buf,come_value_15->c_value);
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "36str2.nc", 134, 430):(void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 134, 431);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "36str2.nc", 134, 432):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 134, 433);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 136, 434);
    }
    # 136 "36str2.nc"
    buffer_append_str(buf,")");
    # 138 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    type2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "36str2.nc", 138, 435, "struct sType* "), "36str2.nc", 138, 436),(char*)come_increment_ref_count(xsprintf("char*"), "36str2.nc", 138, 437),(_Bool)0,info,(_Bool)0,0), "36str2.nc", 138, 438);
    # 139 "36str2.nc"
    type2->mHeap=(_Bool)1;
    # 141 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj51=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "36str2.nc", 141, 440);
    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 141, 439);
    # 142 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj52=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(type2), "36str2.nc", 142, 442);
    come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 142, 441);
    # 143 "36str2.nc"
    come_value->var=((void*)0);
    # 145 "36str2.nc"
    append_object_to_right_values(come_value,type2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    # 147 "36str2.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "36str2.nc", 147, 443));
    # 149 "36str2.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 151 "36str2.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 151, 444);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 151, 445);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 151, 446);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSStringNode_finalize(struct sSStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSStringNode_finalize"; neo_current_frame = &fr;
    # 1 "sSStringNode_finalize"
    # 3 "sSStringNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sSStringNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sSStringNode_finalize", 2, 365));
    }
    # 4 "sSStringNode_finalize"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 3 "sSStringNode_finalize"
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0, "sSStringNode_finalize", 3, 366));
    }
    # 5 "sSStringNode_finalize"
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        # 4 "sSStringNode_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sSStringNode_finalize}", 4, 367);
    }
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

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_11;
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
    memset(&result_11,0,sizeof(struct sNode*));
    # 1697 "./neo-c.h"
        __result_obj__0 = result_11;
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
    struct sNode* result_12;
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
    memset(&result_12,0,sizeof(struct sNode*));
    # 1717 "./neo-c.h"
        __result_obj__0 = result_12;
    neo_current_frame = fr.prev;
    return __result_obj__0;
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
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 384);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4, 389);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4, 390);
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 388);
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
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 387);
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
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph$p_finalize", 2, 385));
    }
    # 4 "tuple2$2char$phsNode$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple2$2char$phsNode$ph$p_finalize"
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph$p_finalize", 3, 386):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj46;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_13;
    struct tuple2$2char$phsNode$ph* __dec_obj47;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_14;
    struct tuple2$2char$phsNode$ph* __dec_obj48;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_13, 0, sizeof(litem_13));
    memset(&litem_14, 0, sizeof(litem_14));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 393);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1534, 394, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1534, 395);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj46=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1538, 397);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 396);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1544, 398, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1544, 399);
        # 1546 "./neo-c.h"
        litem_13->prev=self->head;
        # 1547 "./neo-c.h"
        litem_13->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj47=litem_13->item,
        litem_13->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1548, 401);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 400);
        # 1550 "./neo-c.h"
        self->tail=litem_13;
        # 1551 "./neo-c.h"
        self->head->next=litem_13;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_14=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1554, 402, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1554, 403);
        # 1556 "./neo-c.h"
        litem_14->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_14->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj48=litem_14->item,
        litem_14->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1558, 405);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 404);
        # 1560 "./neo-c.h"
        self->tail->next=litem_14;
        # 1561 "./neo-c.h"
        self->tail=litem_14;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 406);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj49  ;
    struct sNode* __dec_obj50;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    # 4455 "./neo-c.h"
    __dec_obj49=self->v1,
    self->v1=(char*)come_increment_ref_count(v1, "./neo-c.h", 4455, 409);
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4455, 408);
    # 4456 "./neo-c.h"
    __dec_obj50=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "./neo-c.h", 4456, 411);
    (__dec_obj50 ? __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 4456, 410) :0);
    # 4458 "./neo-c.h"
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "./neo-c.h", 4458, 412);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4458, 413);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4458, 414));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 4458, 415):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4458, 416);
    return __result_obj__0;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCharNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCharNode* __result_obj__0;
    # 159 "36str2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCharNode*)come_increment_ref_count(self, "36str2.nc", 159, 447),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 159, 448);
    # 161 "36str2.nc"
    self->value=value;
    # 164 "36str2.nc"
        __result_obj__0 = (struct sCharNode*)come_increment_ref_count(self, "36str2.nc", 164, 449);
    come_call_finalizer(sCharNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 164, 451);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCharNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 164, 452);
    return __result_obj__0;
}

char*  sCharNode_kind(struct sCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCharNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 166 "36str2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCharNode","36str2.nc",166))), "36str2.nc", 166, 453);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 166, 454));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "36str2.nc", 166, 455));
    return __result_obj__0;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCharNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj53  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj54  ;
    _Bool __result_obj__0;
    memset(&come_value, 0, sizeof(come_value));
    # 171 "36str2.nc"
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 171, 456, "struct CVALUE* "), "36str2.nc", 171, 457)), "36str2.nc", 171, 458);
    # 173 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj53=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%d",self->value), "36str2.nc", 173, 460);
    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 173, 459);
    # 174 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj54=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "36str2.nc", 174, 461, "struct sType* "), "36str2.nc", 174, 462),(char*)come_increment_ref_count(xsprintf("char"), "36str2.nc", 174, 463),(_Bool)0,info,(_Bool)0,0), "36str2.nc", 174, 465);
    come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 174, 464);
    # 175 "36str2.nc"
    come_value->var=((void*)0);
    # 177 "36str2.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "36str2.nc", 177, 466));
    # 179 "36str2.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 181 "36str2.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 181, 467);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCharNode_finalize(struct sCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCharNode_finalize"; neo_current_frame = &fr;
    # 1 "sCharNode_finalize"
    # 3 "sCharNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sCharNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCharNode_finalize", 2, 450));
    }
        neo_current_frame = fr.prev;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int  value  , _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWCharNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sWCharNode* __result_obj__0;
    # 189 "36str2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sWCharNode*)come_increment_ref_count(self, "36str2.nc", 189, 468),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 189, 469);
    # 191 "36str2.nc"
    self->value=value;
    # 192 "36str2.nc"
    self->quote=quote;
    # 195 "36str2.nc"
        __result_obj__0 = (struct sWCharNode*)come_increment_ref_count(self, "36str2.nc", 195, 470);
    come_call_finalizer(sWCharNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 195, 472);
    neo_current_frame = fr.prev;
    come_call_finalizer(sWCharNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 195, 473);
    return __result_obj__0;
}

char*  sWCharNode_kind(struct sWCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWCharNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 197 "36str2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sWCharNode","36str2.nc",197))), "36str2.nc", 197, 474);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 197, 475));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "36str2.nc", 197, 476));
    return __result_obj__0;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWCharNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj55  ;
    char*  __dec_obj56  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj57  ;
    _Bool __result_obj__0;
    memset(&come_value, 0, sizeof(come_value));
    # 202 "36str2.nc"
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 202, 477, "struct CVALUE* "), "36str2.nc", 202, 478)), "36str2.nc", 202, 479);
    # 210 "36str2.nc"
    if(self->quote) {
        # 205 "36str2.nc"
        __right_value0 = (void*)0;
        __dec_obj55=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("L'\\%o'",self->value), "36str2.nc", 205, 481);
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 205, 480);
    }
    else {
        # 208 "36str2.nc"
        __right_value0 = (void*)0;
        __dec_obj56=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("L'%lc'",self->value), "36str2.nc", 208, 483);
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 208, 482);
    }
    # 210 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj57=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "36str2.nc", 210, 484, "struct sType* "), "36str2.nc", 210, 485),(char*)come_increment_ref_count(xsprintf("int"), "36str2.nc", 210, 486),(_Bool)0,info,(_Bool)0,0), "36str2.nc", 210, 488);
    come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 210, 487);
    # 211 "36str2.nc"
    come_value->var=((void*)0);
    # 213 "36str2.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "36str2.nc", 213, 489));
    # 215 "36str2.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 217 "36str2.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 217, 490);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sWCharNode_finalize(struct sWCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWCharNode_finalize"; neo_current_frame = &fr;
    # 1 "sWCharNode_finalize"
    # 3 "sWCharNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sWCharNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sWCharNode_finalize", 2, 471));
    }
        neo_current_frame = fr.prev;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int*  value  , int sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWStringNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __dec_obj58  ;
    struct sWStringNode* __result_obj__0;
    # 225 "36str2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sWStringNode*)come_increment_ref_count(self, "36str2.nc", 225, 491),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 225, 492);
    # 227 "36str2.nc"
    __dec_obj58=self->value,
    self->value=(int* )come_increment_ref_count(value, "36str2.nc", 227, 494);
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 227, 493);
    # 230 "36str2.nc"
        __result_obj__0 = (struct sWStringNode*)come_increment_ref_count(self, "36str2.nc", 230, 495);
    come_call_finalizer(sWStringNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 230, 498);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 230, 499));
    neo_current_frame = fr.prev;
    come_call_finalizer(sWStringNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 230, 500);
    return __result_obj__0;
}

char*  sWStringNode_kind(struct sWStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWStringNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 232 "36str2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sWStringNode","36str2.nc",232))), "36str2.nc", 232, 501);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 232, 502));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "36str2.nc", 232, 503));
    return __result_obj__0;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWStringNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj59  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj60  ;
    _Bool __result_obj__0;
    memset(&come_value, 0, sizeof(come_value));
    # 237 "36str2.nc"
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 237, 504, "struct CVALUE* "), "36str2.nc", 237, 505)), "36str2.nc", 237, 506);
    # 239 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj59=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("L\"%ls\"",self->value), "36str2.nc", 239, 508);
    __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 239, 507);
    # 240 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj60=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "36str2.nc", 240, 509, "struct sType* "), "36str2.nc", 240, 510),(char*)come_increment_ref_count(xsprintf("int*"), "36str2.nc", 240, 511),(_Bool)0,info,(_Bool)0,0), "36str2.nc", 240, 513);
    come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 240, 512);
    # 241 "36str2.nc"
    come_value->var=((void*)0);
    # 243 "36str2.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "36str2.nc", 243, 514));
    # 245 "36str2.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 247 "36str2.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 247, 515);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sWStringNode_finalize(struct sWStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWStringNode_finalize"; neo_current_frame = &fr;
    # 1 "sWStringNode_finalize"
    # 3 "sWStringNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sWStringNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sWStringNode_finalize", 2, 496));
    }
    # 4 "sWStringNode_finalize"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 3 "sWStringNode_finalize"
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0, "sWStringNode_finalize", 3, 497));
    }
        neo_current_frame = fr.prev;
}

struct sPrefixedCharNode* sPrefixedCharNode_initialize(struct sPrefixedCharNode* self, int value, char*  prefix  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedCharNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj61  ;
    struct sPrefixedCharNode* __result_obj__0;
    # 255 "36str2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sPrefixedCharNode*)come_increment_ref_count(self, "36str2.nc", 255, 516),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 255, 517);
    # 257 "36str2.nc"
    self->value=value;
    # 258 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj61=self->prefix,
    self->prefix=(char* )come_increment_ref_count(__builtin_string(prefix,"36str2.nc",258), "36str2.nc", 258, 519);
    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 258, 518);
    # 261 "36str2.nc"
        __result_obj__0 = (struct sPrefixedCharNode*)come_increment_ref_count(self, "36str2.nc", 261, 520);
    come_call_finalizer(sPrefixedCharNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 261, 523);
    (prefix = come_decrement_ref_count(prefix, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 261, 524));
    neo_current_frame = fr.prev;
    come_call_finalizer(sPrefixedCharNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 261, 525);
    return __result_obj__0;
}

char*  sPrefixedCharNode_kind(struct sPrefixedCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedCharNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 263 "36str2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sPrefixedCharNode","36str2.nc",263))), "36str2.nc", 263, 526);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 263, 527));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "36str2.nc", 263, 528));
    return __result_obj__0;
}

_Bool sPrefixedCharNode_compile(struct sPrefixedCharNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedCharNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj62  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj63  ;
    _Bool __result_obj__0;
    memset(&come_value, 0, sizeof(come_value));
    # 268 "36str2.nc"
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 268, 529, "struct CVALUE* "), "36str2.nc", 268, 530)), "36str2.nc", 268, 531);
    # 270 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj62=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s'\\%o'",self->prefix,self->value), "36str2.nc", 270, 533);
    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 270, 532);
    # 271 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj63=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "36str2.nc", 271, 534, "struct sType* "), "36str2.nc", 271, 535),(char*)come_increment_ref_count(xsprintf("int"), "36str2.nc", 271, 536),(_Bool)0,info,(_Bool)0,0), "36str2.nc", 271, 538);
    come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 271, 537);
    # 272 "36str2.nc"
    come_value->var=((void*)0);
    # 274 "36str2.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "36str2.nc", 274, 539));
    # 276 "36str2.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 278 "36str2.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 278, 540);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sPrefixedCharNode_finalize(struct sPrefixedCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedCharNode_finalize"; neo_current_frame = &fr;
    # 1 "sPrefixedCharNode_finalize"
    # 3 "sPrefixedCharNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sPrefixedCharNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sPrefixedCharNode_finalize", 2, 521));
    }
    # 4 "sPrefixedCharNode_finalize"
    if(self!=((void*)0)&&self->prefix!=((void*)0)) {
        # 3 "sPrefixedCharNode_finalize"
        (self->prefix = come_decrement_ref_count(self->prefix, (void*)0, (void*)0, 0, 0, (void*)0, "sPrefixedCharNode_finalize", 3, 522));
    }
        neo_current_frame = fr.prev;
}

struct sPrefixedStringNode* sPrefixedStringNode_initialize(struct sPrefixedStringNode* self, char*  value  , char*  prefix  , int sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedStringNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj64  ;
    char*  __dec_obj65  ;
    struct sPrefixedStringNode* __result_obj__0;
    # 286 "36str2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sPrefixedStringNode*)come_increment_ref_count(self, "36str2.nc", 286, 541),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 286, 542);
    # 288 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj64=self->value,
    self->value=(char* )come_increment_ref_count(__builtin_string(value,"36str2.nc",288), "36str2.nc", 288, 544);
    __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 288, 543);
    # 289 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj65=self->prefix,
    self->prefix=(char* )come_increment_ref_count(__builtin_string(prefix,"36str2.nc",289), "36str2.nc", 289, 546);
    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 289, 545);
    # 292 "36str2.nc"
        __result_obj__0 = (struct sPrefixedStringNode*)come_increment_ref_count(self, "36str2.nc", 292, 547);
    come_call_finalizer(sPrefixedStringNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 292, 551);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 292, 552));
    (prefix = come_decrement_ref_count(prefix, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 292, 553));
    neo_current_frame = fr.prev;
    come_call_finalizer(sPrefixedStringNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 292, 554);
    return __result_obj__0;
}

char*  sPrefixedStringNode_kind(struct sPrefixedStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedStringNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 294 "36str2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sPrefixedStringNode","36str2.nc",294))), "36str2.nc", 294, 555);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 294, 556));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "36str2.nc", 294, 557));
    return __result_obj__0;
}

_Bool sPrefixedStringNode_compile(struct sPrefixedStringNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedStringNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj66  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj67  ;
    _Bool __result_obj__0;
    memset(&come_value, 0, sizeof(come_value));
    # 299 "36str2.nc"
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 299, 558, "struct CVALUE* "), "36str2.nc", 299, 559)), "36str2.nc", 299, 560);
    # 301 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj66=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s\"%s\"",self->prefix,self->value), "36str2.nc", 301, 562);
    __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 301, 561);
    # 302 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj67=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "36str2.nc", 302, 563, "struct sType* "), "36str2.nc", 302, 564),(char*)come_increment_ref_count(xsprintf("int*"), "36str2.nc", 302, 565),(_Bool)0,info,(_Bool)0,0), "36str2.nc", 302, 567);
    come_call_finalizer(sType_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 302, 566);
    # 303 "36str2.nc"
    come_value->var=((void*)0);
    # 305 "36str2.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "36str2.nc", 305, 568));
    # 307 "36str2.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 309 "36str2.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 309, 569);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sPrefixedStringNode_finalize(struct sPrefixedStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedStringNode_finalize"; neo_current_frame = &fr;
    # 1 "sPrefixedStringNode_finalize"
    # 3 "sPrefixedStringNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sPrefixedStringNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sPrefixedStringNode_finalize", 2, 548));
    }
    # 4 "sPrefixedStringNode_finalize"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 3 "sPrefixedStringNode_finalize"
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, (void*)0, "sPrefixedStringNode_finalize", 3, 549));
    }
    # 5 "sPrefixedStringNode_finalize"
    if(self!=((void*)0)&&self->prefix!=((void*)0)) {
        # 4 "sPrefixedStringNode_finalize"
        (self->prefix = come_decrement_ref_count(self->prefix, (void*)0, (void*)0, 0, 0, (void*)0, "sPrefixedStringNode_finalize", 4, 550));
    }
        neo_current_frame = fr.prev;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sListNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj68;
    struct sListNode* __result_obj__0;
    # 317 "36str2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sListNode*)come_increment_ref_count(self, "36str2.nc", 317, 570),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 317, 571);
    # 319 "36str2.nc"
    __dec_obj68=self->list_elements,
    self->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list_elements, "36str2.nc", 319, 573);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 319, 572);
    # 322 "36str2.nc"
        __result_obj__0 = (struct sListNode*)come_increment_ref_count(self, "36str2.nc", 322, 574);
    come_call_finalizer(sListNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 322, 577);
    come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 322, 578);
    neo_current_frame = fr.prev;
    come_call_finalizer(sListNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 322, 579);
    return __result_obj__0;
}

char*  sListNode_kind(struct sListNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sListNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 324 "36str2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sListNode","36str2.nc",324))), "36str2.nc", 324, 580);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 324, 581));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "36str2.nc", 324, 582));
    return __result_obj__0;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sListNode_compile"; neo_current_frame = &fr;
    struct list$1sNode$ph* list_elements;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* params;
    struct sType*  list_element_type  ;
    _Bool __result_obj__0;
    int n;
    struct list$1sNode$ph* _o2_saved_4;
    struct sNode* it;
    _Bool Value;
    struct CVALUE*  come_value  ;
    struct sType*  __dec_obj69  ;
    struct sType*  type_values  ;
    char*  var_name  ;
    struct sVar*  var_  ;
    struct buffer*  source  ;
    int i;
    struct list$1CVALUE$ph* _o2_saved_5;
    struct CVALUE*  it_19  ;
    void* __right_value2 = (void*)0;
    struct sType*  list_type  ;
    struct sType*  obj_type  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var1
;    char*  name  =0;
    struct sGenericsFun*  generics_fun  =0;
    char*  generics_fun_name  ;
    struct sFun*  fun  ;
    char*  __dec_obj76  ;
    struct sType*  result_type  ;
    struct sType*  type  ;
    struct CVALUE*  obj_value  ;
    struct buffer*  num_string  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    struct sType*  any_type  ;
    _Bool _conditional_value_X0;
    char*  __dec_obj77  ;
    char*  __dec_obj78  ;
    struct sType*  type3  ;
    struct sType*  __dec_obj79  ;
    struct list$1CVALUE$ph* come_params;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj80  ;
    struct sType*  __dec_obj81  ;
    struct CVALUE*  come_value3  ;
    char*  __dec_obj82  ;
    struct sType*  __dec_obj83  ;
    int j;
    struct list$1CVALUE$ph* _o2_saved_6;
    struct CVALUE*  it_27  ;
    struct CVALUE*  come_value4  ;
    char*  __dec_obj84  ;
    struct sType*  __dec_obj85  ;
    memset(&list_elements, 0, sizeof(list_elements));
    memset(&params, 0, sizeof(params));
    memset(&list_element_type, 0, sizeof(list_element_type));
    memset(&n, 0, sizeof(n));
    memset(&_o2_saved_4, 0, sizeof(_o2_saved_4));
    memset(&it, 0, sizeof(it));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type_values, 0, sizeof(type_values));
    memset(&var_name, 0, sizeof(var_name));
    memset(&var_, 0, sizeof(var_));
    memset(&source, 0, sizeof(source));
    memset(&i, 0, sizeof(i));
    memset(&_o2_saved_5, 0, sizeof(_o2_saved_5));
    memset(&it_19, 0, sizeof(it_19));
    memset(&list_type, 0, sizeof(list_type));
    memset(&obj_type, 0, sizeof(obj_type));
    memset(&generics_fun_name, 0, sizeof(generics_fun_name));
    memset(&fun, 0, sizeof(fun));
    memset(&result_type, 0, sizeof(result_type));
    memset(&type, 0, sizeof(type));
    memset(&obj_value, 0, sizeof(obj_value));
    memset(&num_string, 0, sizeof(num_string));
    memset(&type2_, 0, sizeof(type2_));
    memset(&type2, 0, sizeof(type2));
    memset(&type_name, 0, sizeof(type_name));
    memset(&any_type, 0, sizeof(any_type));
    memset(&type3, 0, sizeof(type3));
    memset(&come_params, 0, sizeof(come_params));
    memset(&come_value2, 0, sizeof(come_value2));
    memset(&come_value3, 0, sizeof(come_value3));
    memset(&j, 0, sizeof(j));
    memset(&_o2_saved_6, 0, sizeof(_o2_saved_6));
    memset(&it_27, 0, sizeof(it_27));
    memset(&come_value4, 0, sizeof(come_value4));
    # 329 "36str2.nc"
    list_elements=self->list_elements;
    # 331 "36str2.nc"
    params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "36str2.nc", 331, 583, "struct list$1CVALUE$ph*"), "36str2.nc", 331, 589)), "36str2.nc", 331, 590);
    # 332 "36str2.nc"
    list_element_type=((void*)0);
    # 338 "36str2.nc"
    if(info->exp_value) {
        # 335 "36str2.nc"
        err_msg(info,"nest value expression is prohibited");
        # 336 "36str2.nc"
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 336, 591);
        come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 336, 592);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 338 "36str2.nc"
    info->exp_value=(_Bool)1;
    # 340 "36str2.nc"
    n=0;
    # 363 "36str2.nc"
    for(_o2_saved_4=list_elements,it=list$1sNode$ph_begin(_o2_saved_4)    ;!list$1sNode$ph_end(_o2_saved_4);it=list$1sNode$ph_next(_o2_saved_4)){
        # 346 "36str2.nc"
        Value=node_compile(it,info);
        if(!Value) {
            # 343 "36str2.nc"
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 343, 593);
            come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 343, 594);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 346 "36str2.nc"
        __right_value0 = (void*)0;
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "36str2.nc", 346, 595);
        # 352 "36str2.nc"
        if(list_element_type) {
            # 349 "36str2.nc"
            __right_value0 = (void*)0;
            check_assign_type(((char*)(__right_value0=xsprintf("invalid list element type"))),list_element_type,come_value->type,come_value,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 349, 596));
        }
        # 352 "36str2.nc"
        remove_value_from_right_value_objects(come_value,info);
        # 354 "36str2.nc"
        list$1CVALUE$ph_push_back(params,(struct CVALUE* )come_increment_ref_count(come_value, "36str2.nc", 354, 597));
        # 359 "36str2.nc"
        if(list_element_type) {
            # 357 "36str2.nc"
            __right_value0 = (void*)0;
            check_assign_type(((char*)(__right_value0=xsprintf("List element type"))),list_element_type,come_value->type,come_value,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 357, 598));
        }
        # 359 "36str2.nc"
        __right_value0 = (void*)0;
        __dec_obj69=list_element_type,
        list_element_type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "36str2.nc", 359, 600);
        come_call_finalizer(sType_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 359, 599);
        # 361 "36str2.nc"
        n++;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 363, 601);
    }
    # 363 "36str2.nc"
    info->exp_value=(_Bool)0;
    # 365 "36str2.nc"
    __right_value0 = (void*)0;
    type_values=(struct sType* )come_increment_ref_count(sType_clone(list_element_type), "36str2.nc", 365, 602);
    # 366 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1sNode$ph_push_back(type_values->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(list$1CVALUE$ph_length(params)), "36str2.nc", 366, 617),info), "36str2.nc", 366, 618));
    # 367 "36str2.nc"
    type_values->mHeap=(_Bool)0;
    # 369 "36str2.nc"
    static int list_value_num=0;
    # 370 "36str2.nc"
    __right_value0 = (void*)0;
    var_name=(char* )come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num), "36str2.nc", 370, 619);
    # 372 "36str2.nc"
    __right_value0 = (void*)0;
    add_variable_to_table(var_name,((struct sType* )(__right_value0=sType_clone(type_values))),info,(_Bool)0,(_Bool)0,(_Bool)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 372, 620);
    # 374 "36str2.nc"
    var_=get_variable_from_table(info->lv_table,var_name);
    # 376 "36str2.nc"
    __right_value0 = (void*)0;
    add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(type_values,var_->mCValueName,info,(_Bool)0,(_Bool)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 376, 621));
    # 378 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "36str2.nc", 378, 622, "struct buffer* "), "36str2.nc", 378, 623)), "36str2.nc", 378, 624);
    # 380 "36str2.nc"
    buffer_append_str(source,"(");
    # 382 "36str2.nc"
    i=0;
    # 398 "36str2.nc"
    for(_o2_saved_5=(struct list$1CVALUE$ph*)come_increment_ref_count(params, "36str2.nc", 383, 625),it_19=list$1CVALUE$ph_begin(_o2_saved_5)    ;!list$1CVALUE$ph_end(_o2_saved_5);it_19=list$1CVALUE$ph_next(_o2_saved_5)){
        # 391 "36str2.nc"
        if(list_element_type->mHeap) {
            # 386 "36str2.nc"
            __right_value0 = (void*)0;
            buffer_append_format(source,"%s[%d]=%s,\n",var_->mCValueName,i,((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(params,i)))->c_value);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 2, 644);
        }
        else {
            # 389 "36str2.nc"
            __right_value0 = (void*)0;
            buffer_append_format(source,"%s[%d]=%s,\n",var_->mCValueName,i,((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(params,i)))->c_value);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 389, 645);
        }
        # 391 "36str2.nc"
        i++;
    }
    # 398 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "36str2.nc", 398, 646, "struct sType* "), "36str2.nc", 398, 647),(char*)come_increment_ref_count(xsprintf("list"), "36str2.nc", 398, 648),(_Bool)0,info,(_Bool)0,0), "36str2.nc", 398, 649);
    # 399 "36str2.nc"
    __right_value0 = (void*)0;
    list$1sType$ph_push_back(list_type->mGenericsTypes,(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(list_element_type)))), "36str2.nc", 399, 664));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 399, 665);
    # 401 "36str2.nc"
    __right_value0 = (void*)0;
    obj_type=(struct sType* )come_increment_ref_count(sType_clone(list_type), "36str2.nc", 401, 666);
    # 402 "36str2.nc"
    const char* fun_name="initialize_with_values";
    # 404 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    multiple_assign_var1=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char* )come_increment_ref_count(__builtin_string(fun_name,"36str2.nc",404), "36str2.nc", 404, 667),info,(_Bool)1)));
    name=(char* )come_increment_ref_count(multiple_assign_var1->v1, "36str2.nc", 404, 668);
    generics_fun=multiple_assign_var1->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 404, 670);
    # 405 "36str2.nc"
    generics_fun_name=(char* )come_increment_ref_count(name, "36str2.nc", 405, 671);
    # 407 "36str2.nc"
    __right_value0 = (void*)0;
    fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
    # 420 "36str2.nc"
    if(fun==((void*)0)) {
        # 410 "36str2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj76=generics_fun_name,
        generics_fun_name=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char* )(__right_value0=__builtin_string(fun_name,"36str2.nc",410))),info,(_Bool)1), "36str2.nc", 410, 688);
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 410, 687);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 410, 689));
        # 412 "36str2.nc"
        __right_value0 = (void*)0;
        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
        # 418 "36str2.nc"
        if(fun==((void*)0)) {
            # 415 "36str2.nc"
            err_msg(info,"function not found(%s) at method(%s)(1)",generics_fun_name,info->come_fun->mName);
            # 416 "36str2.nc"
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 416, 690);
            come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 416, 691);
            come_call_finalizer(sType_finalize, type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 416, 692);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 416, 693));
            come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 416, 694);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 416, 695);
            come_call_finalizer(sType_finalize, list_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 416, 696);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 416, 697);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 416, 698));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 416, 699));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    # 420 "36str2.nc"
    __right_value0 = (void*)0;
    result_type=(struct sType* )come_increment_ref_count(sType_clone(fun->mResultType), "36str2.nc", 420, 700);
    # 421 "36str2.nc"
    result_type->mStatic=(_Bool)0;
    # 423 "36str2.nc"
    type=(struct sType* )come_increment_ref_count(list_type, "36str2.nc", 423, 701);
    # 425 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 425, 702, "struct CVALUE* "), "36str2.nc", 425, 703)), "36str2.nc", 425, 704);
    # 427 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    num_string=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "36str2.nc", 427, 705, "struct buffer* "), "36str2.nc", 427, 706)), "36str2.nc", 427, 707);
    # 429 "36str2.nc"
    buffer_append_str(num_string,"1");
    # 431 "36str2.nc"
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,type,info), "36str2.nc", 431, 708);
    # 432 "36str2.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "36str2.nc", 432, 709);
    # 434 "36str2.nc"
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0), "36str2.nc", 434, 710);
    # 436 "36str2.nc"
    any_type=(struct sType* )come_increment_ref_count(type2, "36str2.nc", 436, 711);
    # 437 "36str2.nc"
    any_type->mPointerNum=1;
    # 438 "36str2.nc"
    any_type->mHeap=(_Bool)1;
    # 447 "36str2.nc"
    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 440, 712));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 440, 713);
_conditional_value_X0;})) {
        # 441 "36str2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj77=obj_value->c_value,
        obj_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name), "36str2.nc", 441, 715);
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 441, 714);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 441, 716));
    }
    else {
        # 444 "36str2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj78=obj_value->c_value,
        obj_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name), "36str2.nc", 444, 718);
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 444, 717);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 444, 719));
    }
    # 447 "36str2.nc"
    __right_value0 = (void*)0;
    type3=(struct sType* )come_increment_ref_count(sType_clone(type2), "36str2.nc", 447, 720);
    # 448 "36str2.nc"
    type3->mPointerNum++;
    # 449 "36str2.nc"
    type3->mHeap=(_Bool)1;
    # 450 "36str2.nc"
    type2->mHeap=(_Bool)1;
    # 451 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj79=obj_value->type,
    obj_value->type=(struct sType* )come_increment_ref_count(sType_clone(type2), "36str2.nc", 451, 722);
    come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 451, 721);
    # 453 "36str2.nc"
    obj_value->var=((void*)0);
    # 455 "36str2.nc"
    append_object_to_right_values(obj_value,type3,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    # 457 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "36str2.nc", 457, 723, "struct list$1CVALUE$ph*"), "36str2.nc", 457, 724)), "36str2.nc", 457, 725);
    # 462 "36str2.nc"
    if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0)))->mHeap&&obj_value->type->mHeap));    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 2, 744);
_conditional_value_X0;})) {
        # 460 "36str2.nc"
        __right_value0 = (void*)0;
        std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0))),obj_value->type,obj_value,info);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 460, 745);
    }
    # 462 "36str2.nc"
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(obj_value, "36str2.nc", 462, 746));
    # 464 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 464, 747, "struct CVALUE* "), "36str2.nc", 464, 748)), "36str2.nc", 464, 749);
    # 466 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj80=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(params)), "36str2.nc", 466, 751);
    __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 466, 750);
    # 467 "36str2.nc"
    __dec_obj81=come_value2->type,
    come_value2->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 467, 752);
    # 468 "36str2.nc"
    come_value2->var=((void*)0);
    # 470 "36str2.nc"
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value2, "36str2.nc", 470, 753));
    # 472 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value3=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 472, 754, "struct CVALUE* "), "36str2.nc", 472, 755)), "36str2.nc", 472, 756);
    # 474 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj82=come_value3->c_value,
    come_value3->c_value=(char* )come_increment_ref_count(xsprintf("%s",var_->mCValueName), "36str2.nc", 474, 758);
    __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 474, 757);
    # 475 "36str2.nc"
    __dec_obj83=come_value3->type,
    come_value3->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 475, 759);
    # 476 "36str2.nc"
    come_value3->var=((void*)0);
    # 478 "36str2.nc"
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value3, "36str2.nc", 478, 760));
    # 482 "36str2.nc"
    buffer_append_str(source,generics_fun_name);
    # 483 "36str2.nc"
    buffer_append_str(source,"(");
    # 485 "36str2.nc"
    j=0;
    # 495 "36str2.nc"
    for(_o2_saved_6=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params, "36str2.nc", 486, 761),it_27=list$1CVALUE$ph_begin(_o2_saved_6)    ;!list$1CVALUE$ph_end(_o2_saved_6);it_27=list$1CVALUE$ph_next(_o2_saved_6)){
        # 487 "36str2.nc"
        buffer_append_str(source,it_27->c_value);
        # 493 "36str2.nc"
        if(j!=list$1CVALUE$ph_length(come_params)-1) {
            # 490 "36str2.nc"
            buffer_append_str(source,",");
        }
        # 493 "36str2.nc"
        j++;
    }
    # 495 "36str2.nc"
    buffer_append_str(source,")");
    # 496 "36str2.nc"
    buffer_append_str(source,")");
    # 498 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value4=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 498, 762, "struct CVALUE* "), "36str2.nc", 498, 763)), "36str2.nc", 498, 764);
    # 500 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj84=come_value4->c_value,
    come_value4->c_value=(char* )come_increment_ref_count(buffer_to_string(source), "36str2.nc", 500, 766);
    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 500, 765);
    # 502 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj85=come_value4->type,
    come_value4->type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "36str2.nc", 502, 768);
    come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 502, 767);
    # 503 "36str2.nc"
    come_value4->type->mStatic=(_Bool)0;
    # 504 "36str2.nc"
    come_value4->var=((void*)0);
    # 510 "36str2.nc"
    if(result_type->mHeap) {
        # 507 "36str2.nc"
        append_object_to_right_values(come_value4,result_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    # 510 "36str2.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value4, "36str2.nc", 510, 769));
    # 512 "36str2.nc"
    add_come_last_code(info,"%s",come_value4->c_value);
    # 514 "36str2.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 770);
    come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 771);
    come_call_finalizer(sType_finalize, type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 772);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 514, 773));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 774);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 775);
    come_call_finalizer(sType_finalize, list_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 776);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 777);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 514, 778));
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 514, 779));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 780);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 781);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 782);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 783);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 784);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 785);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 514, 786));
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 787);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 788);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 789);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 790);
    come_call_finalizer(CVALUE_finalize, come_value3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 791);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 792);
    come_call_finalizer(CVALUE_finalize, come_value4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 514, 793);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sListNode_finalize(struct sListNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sListNode_finalize"; neo_current_frame = &fr;
    # 1 "sListNode_finalize"
    # 3 "sListNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sListNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sListNode_finalize", 2, 575));
    }
    # 4 "sListNode_finalize"
    if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
        # 3 "sListNode_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sListNode_finalize}", 3, 576);
    }
        neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_initialize"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    # 1481 "./neo-c.h"
    self->head=((void*)0);
    # 1482 "./neo-c.h"
    self->tail=((void*)0);
    # 1483 "./neo-c.h"
    self->len=0;
    # 1485 "./neo-c.h"
        __result_obj__0 = (struct list$1CVALUE$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 584);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3, 587);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3, 588);
    return __result_obj__0;
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
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 586);
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
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1CVALUE$ph$p_finalize}", 2, 585);
    }
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_push_back"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj70;
    struct list_item$1sNode$ph* litem_16;
    struct sNode* __dec_obj71;
    struct list_item$1sNode$ph* litem_17;
    struct sNode* __dec_obj72;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_16, 0, sizeof(litem_16));
    memset(&litem_17, 0, sizeof(litem_17));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1615, 603):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1619, 604, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1619, 605);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj70=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1623, 607);
        (__dec_obj70 ? __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1623, 606) :0);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_16=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1629, 608, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1629, 609);
        # 1631 "./neo-c.h"
        litem_16->prev=self->head;
        # 1632 "./neo-c.h"
        litem_16->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj71=litem_16->item,
        litem_16->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1633, 611);
        (__dec_obj71 ? __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1633, 610) :0);
        # 1635 "./neo-c.h"
        self->tail=litem_16;
        # 1636 "./neo-c.h"
        self->head->next=litem_16;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_17=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1639, 612, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1639, 613);
        # 1641 "./neo-c.h"
        litem_17->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_17->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj72=litem_17->item,
        litem_17->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1643, 615);
        (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1643, 614) :0);
        # 1645 "./neo-c.h"
        self->tail->next=litem_17;
        # 1646 "./neo-c.h"
        self->tail=litem_17;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1651, 616):(void*)0);
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

static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_begin"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_18  ;
    # 1682 "./neo-c.h"
    # 1689 "./neo-c.h"
    if(self==((void*)0)) {
        # 1685 "./neo-c.h"
        # 1686 "./neo-c.h"
        memset(&result,0,sizeof(struct CVALUE* ));
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
    memset(&result_18,0,sizeof(struct CVALUE* ));
    # 1697 "./neo-c.h"
        __result_obj__0 = result_18;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_end"; neo_current_frame = &fr;
    # 1721 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_next"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_20  ;
    # 1701 "./neo-c.h"
    # 1709 "./neo-c.h"
    if(self==((void*)0)||self->it==((void*)0)) {
        # 1704 "./neo-c.h"
        # 1705 "./neo-c.h"
        memset(&result,0,sizeof(struct CVALUE* ));
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
    memset(&result_20,0,sizeof(struct CVALUE* ));
    # 1717 "./neo-c.h"
        __result_obj__0 = result_20;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_21  ;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct CVALUE* ));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 626);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 627);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 628);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2161, 629);
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
                        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 630);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 631);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_21,0,sizeof(struct CVALUE* ));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_21, "./neo-c.h", 2177, 632);
    come_call_finalizer(CVALUE_finalize, default_value_21, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 633);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 634);
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_22  ;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct CVALUE* ));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 635);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 636);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 637);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2161, 638);
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
                        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 639);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 640);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_22,0,sizeof(struct CVALUE* ));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_22, "./neo-c.h", 2177, 641);
    come_call_finalizer(CVALUE_finalize, default_value_22, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 642);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 643);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj73  ;
    struct list_item$1sType$ph* litem_23;
    struct sType*  __dec_obj74  ;
    struct list_item$1sType$ph* litem_24;
    struct sType*  __dec_obj75  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_23, 0, sizeof(litem_23));
    memset(&litem_24, 0, sizeof(litem_24));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 650);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1619, 651, "struct list_item$1sType$ph*"))), "./neo-c.h", 1619, 652);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj73=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1623, 654);
        come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 653);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_23=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1629, 655, "struct list_item$1sType$ph*"))), "./neo-c.h", 1629, 656);
        # 1631 "./neo-c.h"
        litem_23->prev=self->head;
        # 1632 "./neo-c.h"
        litem_23->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj74=litem_23->item,
        litem_23->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1633, 658);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 657);
        # 1635 "./neo-c.h"
        self->tail=litem_23;
        # 1636 "./neo-c.h"
        self->head->next=litem_23;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_24=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1639, 659, "struct list_item$1sType$ph*"))), "./neo-c.h", 1639, 660);
        # 1641 "./neo-c.h"
        litem_24->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_24->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj75=litem_24->item,
        litem_24->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1643, 662);
        come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 661);
        # 1645 "./neo-c.h"
        self->tail->next=litem_24;
        # 1646 "./neo-c.h"
        self->tail=litem_24;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 663);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsGenericsFun$p$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple2$2char$phsGenericsFun$p$p_finalize"
    # 3 "tuple2$2char$phsGenericsFun$p$p_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple2$2char$phsGenericsFun$p$p_finalize"
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsGenericsFun$p$p_finalize", 2, 669));
    }
        neo_current_frame = fr.prev;
}

static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_at"; neo_current_frame = &fr;
    struct sFun*  __result_obj__0  ;
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3512, 672);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 673);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 674);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 3525, 675);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3525, 676);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3525, 677);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3532, 678);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 679);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 680);
                return __result_obj__0;
            }
        }
        else {
            # 3536 "./neo-c.h"
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3536, 681);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 682);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 683);
            return __result_obj__0;
        }
    }
    # 3540 "./neo-c.h"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3540, 684);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 685);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 686);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_25  ;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sType* ));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 726);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 727);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 728);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2161, 729);
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
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 730);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 731);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_25,0,sizeof(struct sType* ));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_25, "./neo-c.h", 2177, 732);
    come_call_finalizer(sType_finalize, default_value_25, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 733);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 734);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_26  ;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sType* ));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 735);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 736);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 737);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2161, 738);
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
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 739);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 740);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_26,0,sizeof(struct sType* ));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_26, "./neo-c.h", 2177, 741);
    come_call_finalizer(sType_finalize, default_value_26, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 742);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 743);
    return __result_obj__0;
}

struct sVectorNode* sVectorNode_initialize(struct sVectorNode* self, struct list$1sNode$ph* list_elements, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVectorNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj86;
    struct sVectorNode* __result_obj__0;
    # 522 "36str2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sVectorNode*)come_increment_ref_count(self, "36str2.nc", 522, 794),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 522, 795);
    # 524 "36str2.nc"
    __dec_obj86=self->list_elements,
    self->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list_elements, "36str2.nc", 524, 797);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 524, 796);
    # 527 "36str2.nc"
        __result_obj__0 = (struct sVectorNode*)come_increment_ref_count(self, "36str2.nc", 527, 798);
    come_call_finalizer(sVectorNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 527, 801);
    come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 527, 802);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVectorNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 527, 803);
    return __result_obj__0;
}

char*  sVectorNode_kind(struct sVectorNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVectorNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 529 "36str2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sVectorNode","36str2.nc",529))), "36str2.nc", 529, 804);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 529, 805));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "36str2.nc", 529, 806));
    return __result_obj__0;
}

_Bool sVectorNode_compile(struct sVectorNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVectorNode_compile"; neo_current_frame = &fr;
    struct list$1sNode$ph* list_elements;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* params;
    struct sType*  list_element_type  ;
    _Bool __result_obj__0;
    int n;
    struct list$1sNode$ph* _o2_saved_7;
    struct sNode* it;
    _Bool Value;
    struct CVALUE*  come_value  ;
    struct sType*  __dec_obj87  ;
    struct sType*  type_values  ;
    char*  var_name  ;
    struct sVar*  var_  ;
    struct buffer*  source  ;
    int i;
    struct list$1CVALUE$ph* _o2_saved_8;
    struct CVALUE*  it_28  ;
    void* __right_value2 = (void*)0;
    struct sType*  list_type  ;
    struct sType*  obj_type  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2
;    char*  name  =0;
    struct sGenericsFun*  generics_fun  =0;
    char*  generics_fun_name  ;
    struct sFun*  fun  ;
    char*  __dec_obj88  ;
    struct sType*  result_type  ;
    struct sType*  type  ;
    struct CVALUE*  obj_value  ;
    struct buffer*  num_string  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    struct sType*  any_type  ;
    _Bool _conditional_value_X0;
    char*  __dec_obj89  ;
    char*  __dec_obj90  ;
    struct sType*  type3  ;
    struct sType*  __dec_obj91  ;
    struct list$1CVALUE$ph* come_params;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj92  ;
    struct sType*  __dec_obj93  ;
    struct CVALUE*  come_value3  ;
    char*  __dec_obj94  ;
    struct sType*  __dec_obj95  ;
    int j;
    struct list$1CVALUE$ph* _o2_saved_9;
    struct CVALUE*  it_29  ;
    struct CVALUE*  come_value4  ;
    char*  __dec_obj96  ;
    struct sType*  __dec_obj97  ;
    memset(&list_elements, 0, sizeof(list_elements));
    memset(&params, 0, sizeof(params));
    memset(&list_element_type, 0, sizeof(list_element_type));
    memset(&n, 0, sizeof(n));
    memset(&_o2_saved_7, 0, sizeof(_o2_saved_7));
    memset(&it, 0, sizeof(it));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type_values, 0, sizeof(type_values));
    memset(&var_name, 0, sizeof(var_name));
    memset(&var_, 0, sizeof(var_));
    memset(&source, 0, sizeof(source));
    memset(&i, 0, sizeof(i));
    memset(&_o2_saved_8, 0, sizeof(_o2_saved_8));
    memset(&it_28, 0, sizeof(it_28));
    memset(&list_type, 0, sizeof(list_type));
    memset(&obj_type, 0, sizeof(obj_type));
    memset(&generics_fun_name, 0, sizeof(generics_fun_name));
    memset(&fun, 0, sizeof(fun));
    memset(&result_type, 0, sizeof(result_type));
    memset(&type, 0, sizeof(type));
    memset(&obj_value, 0, sizeof(obj_value));
    memset(&num_string, 0, sizeof(num_string));
    memset(&type2_, 0, sizeof(type2_));
    memset(&type2, 0, sizeof(type2));
    memset(&type_name, 0, sizeof(type_name));
    memset(&any_type, 0, sizeof(any_type));
    memset(&type3, 0, sizeof(type3));
    memset(&come_params, 0, sizeof(come_params));
    memset(&come_value2, 0, sizeof(come_value2));
    memset(&come_value3, 0, sizeof(come_value3));
    memset(&j, 0, sizeof(j));
    memset(&_o2_saved_9, 0, sizeof(_o2_saved_9));
    memset(&it_29, 0, sizeof(it_29));
    memset(&come_value4, 0, sizeof(come_value4));
    # 534 "36str2.nc"
    list_elements=self->list_elements;
    # 536 "36str2.nc"
    params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "36str2.nc", 536, 807, "struct list$1CVALUE$ph*"), "36str2.nc", 536, 808)), "36str2.nc", 536, 809);
    # 537 "36str2.nc"
    list_element_type=((void*)0);
    # 543 "36str2.nc"
    if(info->exp_value) {
        # 540 "36str2.nc"
        err_msg(info,"nest value expression is prohibited");
        # 541 "36str2.nc"
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 541, 810);
        come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 541, 811);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 543 "36str2.nc"
    info->exp_value=(_Bool)1;
    # 545 "36str2.nc"
    n=0;
    # 568 "36str2.nc"
    for(_o2_saved_7=list_elements,it=list$1sNode$ph_begin(_o2_saved_7)    ;!list$1sNode$ph_end(_o2_saved_7);it=list$1sNode$ph_next(_o2_saved_7)){
        # 551 "36str2.nc"
        Value=node_compile(it,info);
        if(!Value) {
            # 548 "36str2.nc"
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 548, 812);
            come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 548, 813);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 551 "36str2.nc"
        __right_value0 = (void*)0;
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "36str2.nc", 551, 814);
        # 557 "36str2.nc"
        if(list_element_type) {
            # 554 "36str2.nc"
            __right_value0 = (void*)0;
            check_assign_type(((char*)(__right_value0=xsprintf("invalid list element type"))),list_element_type,come_value->type,come_value,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 554, 815));
        }
        # 557 "36str2.nc"
        remove_value_from_right_value_objects(come_value,info);
        # 559 "36str2.nc"
        list$1CVALUE$ph_push_back(params,(struct CVALUE* )come_increment_ref_count(come_value, "36str2.nc", 559, 816));
        # 564 "36str2.nc"
        if(list_element_type) {
            # 562 "36str2.nc"
            __right_value0 = (void*)0;
            check_assign_type(((char*)(__right_value0=xsprintf("Vector element type"))),list_element_type,come_value->type,come_value,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 562, 817));
        }
        # 564 "36str2.nc"
        __right_value0 = (void*)0;
        __dec_obj87=list_element_type,
        list_element_type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "36str2.nc", 564, 819);
        come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 564, 818);
        # 566 "36str2.nc"
        n++;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 568, 820);
    }
    # 568 "36str2.nc"
    info->exp_value=(_Bool)0;
    # 570 "36str2.nc"
    __right_value0 = (void*)0;
    type_values=(struct sType* )come_increment_ref_count(sType_clone(list_element_type), "36str2.nc", 570, 821);
    # 571 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1sNode$ph_push_back(type_values->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(list$1CVALUE$ph_length(params)), "36str2.nc", 571, 822),info), "36str2.nc", 571, 823));
    # 572 "36str2.nc"
    type_values->mHeap=(_Bool)0;
    # 574 "36str2.nc"
    static int list_value_num=0;
    # 575 "36str2.nc"
    __right_value0 = (void*)0;
    var_name=(char* )come_increment_ref_count(xsprintf("__vector_values%d__",++list_value_num), "36str2.nc", 575, 824);
    # 577 "36str2.nc"
    __right_value0 = (void*)0;
    add_variable_to_table(var_name,((struct sType* )(__right_value0=sType_clone(type_values))),info,(_Bool)0,(_Bool)0,(_Bool)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 577, 825);
    # 579 "36str2.nc"
    var_=get_variable_from_table(info->lv_table,var_name);
    # 581 "36str2.nc"
    __right_value0 = (void*)0;
    add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(type_values,var_->mCValueName,info,(_Bool)0,(_Bool)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 581, 826));
    # 583 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "36str2.nc", 583, 827, "struct buffer* "), "36str2.nc", 583, 828)), "36str2.nc", 583, 829);
    # 585 "36str2.nc"
    buffer_append_str(source,"({");
    # 587 "36str2.nc"
    i=0;
    # 603 "36str2.nc"
    for(_o2_saved_8=(struct list$1CVALUE$ph*)come_increment_ref_count(params, "36str2.nc", 588, 830),it_28=list$1CVALUE$ph_begin(_o2_saved_8)    ;!list$1CVALUE$ph_end(_o2_saved_8);it_28=list$1CVALUE$ph_next(_o2_saved_8)){
        # 596 "36str2.nc"
        if(list_element_type->mHeap) {
            # 591 "36str2.nc"
            __right_value0 = (void*)0;
            buffer_append_format(source,"%s[%d]=%s;",var_->mCValueName,i,((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(params,i)))->c_value);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 591, 831);
        }
        else {
            # 594 "36str2.nc"
            __right_value0 = (void*)0;
            buffer_append_format(source,"%s[%d]=%s;",var_->mCValueName,i,((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(params,i)))->c_value);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 594, 832);
        }
        # 596 "36str2.nc"
        i++;
    }
    # 603 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "36str2.nc", 603, 833, "struct sType* "), "36str2.nc", 603, 834),(char*)come_increment_ref_count(xsprintf("vector"), "36str2.nc", 603, 835),(_Bool)0,info,(_Bool)0,0), "36str2.nc", 603, 836);
    # 604 "36str2.nc"
    __right_value0 = (void*)0;
    list$1sType$ph_push_back(list_type->mGenericsTypes,(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(list_element_type)))), "36str2.nc", 604, 837));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 604, 838);
    # 606 "36str2.nc"
    __right_value0 = (void*)0;
    obj_type=(struct sType* )come_increment_ref_count(sType_clone(list_type), "36str2.nc", 606, 839);
    # 607 "36str2.nc"
    const char* fun_name="initialize_with_values";
    # 609 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char* )come_increment_ref_count(__builtin_string(fun_name,"36str2.nc",609), "36str2.nc", 609, 840),info,(_Bool)1)));
    name=(char* )come_increment_ref_count(multiple_assign_var2->v1, "36str2.nc", 609, 841);
    generics_fun=multiple_assign_var2->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 609, 842);
    # 610 "36str2.nc"
    generics_fun_name=(char* )come_increment_ref_count(name, "36str2.nc", 610, 843);
    # 612 "36str2.nc"
    __right_value0 = (void*)0;
    fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
    # 625 "36str2.nc"
    if(fun==((void*)0)) {
        # 615 "36str2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj88=generics_fun_name,
        generics_fun_name=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char* )(__right_value0=__builtin_string(fun_name,"36str2.nc",615))),info,(_Bool)1), "36str2.nc", 615, 845);
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 615, 844);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 615, 846));
        # 617 "36str2.nc"
        __right_value0 = (void*)0;
        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
        # 623 "36str2.nc"
        if(fun==((void*)0)) {
            # 620 "36str2.nc"
            err_msg(info,"function not found(%s) at method(%s)(1)",generics_fun_name,info->come_fun->mName);
            # 621 "36str2.nc"
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 621, 847);
            come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 621, 848);
            come_call_finalizer(sType_finalize, type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 621, 849);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 621, 850));
            come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 621, 851);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 621, 852);
            come_call_finalizer(sType_finalize, list_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 621, 853);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 621, 854);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 621, 855));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 621, 856));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    # 625 "36str2.nc"
    __right_value0 = (void*)0;
    result_type=(struct sType* )come_increment_ref_count(sType_clone(fun->mResultType), "36str2.nc", 625, 857);
    # 626 "36str2.nc"
    result_type->mStatic=(_Bool)0;
    # 628 "36str2.nc"
    type=(struct sType* )come_increment_ref_count(list_type, "36str2.nc", 628, 858);
    # 630 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 630, 859, "struct CVALUE* "), "36str2.nc", 630, 860)), "36str2.nc", 630, 861);
    # 632 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    num_string=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "36str2.nc", 632, 862, "struct buffer* "), "36str2.nc", 632, 863)), "36str2.nc", 632, 864);
    # 634 "36str2.nc"
    buffer_append_str(num_string,"1");
    # 636 "36str2.nc"
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,type,info), "36str2.nc", 636, 865);
    # 637 "36str2.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "36str2.nc", 637, 866);
    # 639 "36str2.nc"
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0), "36str2.nc", 639, 867);
    # 641 "36str2.nc"
    any_type=(struct sType* )come_increment_ref_count(type2, "36str2.nc", 641, 868);
    # 642 "36str2.nc"
    any_type->mPointerNum=1;
    # 643 "36str2.nc"
    any_type->mHeap=(_Bool)1;
    # 652 "36str2.nc"
    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 645, 869));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 645, 870);
_conditional_value_X0;})) {
        # 646 "36str2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj89=obj_value->c_value,
        obj_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name), "36str2.nc", 646, 872);
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 646, 871);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 646, 873));
    }
    else {
        # 649 "36str2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj90=obj_value->c_value,
        obj_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name), "36str2.nc", 649, 875);
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 649, 874);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 649, 876));
    }
    # 652 "36str2.nc"
    __right_value0 = (void*)0;
    type3=(struct sType* )come_increment_ref_count(sType_clone(type2), "36str2.nc", 652, 877);
    # 653 "36str2.nc"
    type3->mPointerNum++;
    # 654 "36str2.nc"
    type3->mHeap=(_Bool)1;
    # 655 "36str2.nc"
    type2->mHeap=(_Bool)1;
    # 656 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj91=obj_value->type,
    obj_value->type=(struct sType* )come_increment_ref_count(sType_clone(type2), "36str2.nc", 656, 879);
    come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 656, 878);
    # 658 "36str2.nc"
    obj_value->var=((void*)0);
    # 660 "36str2.nc"
    append_object_to_right_values(obj_value,type3,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    # 662 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "36str2.nc", 662, 880, "struct list$1CVALUE$ph*"), "36str2.nc", 662, 881)), "36str2.nc", 662, 882);
    # 667 "36str2.nc"
    if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0)))->mHeap&&obj_value->type->mHeap));    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 664, 883);
_conditional_value_X0;})) {
        # 665 "36str2.nc"
        __right_value0 = (void*)0;
        std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0))),obj_value->type,obj_value,info);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 665, 884);
    }
    # 667 "36str2.nc"
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(obj_value, "36str2.nc", 667, 885));
    # 669 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 669, 886, "struct CVALUE* "), "36str2.nc", 669, 887)), "36str2.nc", 669, 888);
    # 671 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj92=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(params)), "36str2.nc", 671, 890);
    __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 671, 889);
    # 672 "36str2.nc"
    __dec_obj93=come_value2->type,
    come_value2->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 672, 891);
    # 673 "36str2.nc"
    come_value2->var=((void*)0);
    # 675 "36str2.nc"
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value2, "36str2.nc", 675, 892));
    # 677 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value3=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 677, 893, "struct CVALUE* "), "36str2.nc", 677, 894)), "36str2.nc", 677, 895);
    # 679 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj94=come_value3->c_value,
    come_value3->c_value=(char* )come_increment_ref_count(xsprintf("%s",var_->mCValueName), "36str2.nc", 679, 897);
    __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 679, 896);
    # 680 "36str2.nc"
    __dec_obj95=come_value3->type,
    come_value3->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 680, 898);
    # 681 "36str2.nc"
    come_value3->var=((void*)0);
    # 683 "36str2.nc"
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value3, "36str2.nc", 683, 899));
    # 687 "36str2.nc"
    buffer_append_str(source,generics_fun_name);
    # 688 "36str2.nc"
    buffer_append_str(source,"(");
    # 690 "36str2.nc"
    j=0;
    # 700 "36str2.nc"
    for(_o2_saved_9=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params, "36str2.nc", 691, 900),it_29=list$1CVALUE$ph_begin(_o2_saved_9)    ;!list$1CVALUE$ph_end(_o2_saved_9);it_29=list$1CVALUE$ph_next(_o2_saved_9)){
        # 692 "36str2.nc"
        buffer_append_str(source,it_29->c_value);
        # 698 "36str2.nc"
        if(j!=list$1CVALUE$ph_length(come_params)-1) {
            # 695 "36str2.nc"
            buffer_append_str(source,",");
        }
        # 698 "36str2.nc"
        j++;
    }
    # 700 "36str2.nc"
    buffer_append_str(source,");");
    # 701 "36str2.nc"
    buffer_append_str(source,"})");
    # 703 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value4=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 703, 901, "struct CVALUE* "), "36str2.nc", 703, 902)), "36str2.nc", 703, 903);
    # 705 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj96=come_value4->c_value,
    come_value4->c_value=(char* )come_increment_ref_count(buffer_to_string(source), "36str2.nc", 705, 905);
    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 705, 904);
    # 707 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj97=come_value4->type,
    come_value4->type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "36str2.nc", 707, 907);
    come_call_finalizer(sType_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 707, 906);
    # 708 "36str2.nc"
    come_value4->type->mStatic=(_Bool)0;
    # 709 "36str2.nc"
    come_value4->var=((void*)0);
    # 715 "36str2.nc"
    if(result_type->mHeap) {
        # 712 "36str2.nc"
        append_object_to_right_values(come_value4,result_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    # 715 "36str2.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value4, "36str2.nc", 715, 908));
    # 717 "36str2.nc"
    add_come_last_code(info,"%s",come_value4->c_value);
    # 719 "36str2.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 909);
    come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 910);
    come_call_finalizer(sType_finalize, type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 911);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 719, 912));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 913);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 914);
    come_call_finalizer(sType_finalize, list_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 915);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 916);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 719, 917));
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 719, 918));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 919);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 920);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 921);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 922);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 923);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 924);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 719, 925));
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 926);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 927);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 928);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 929);
    come_call_finalizer(CVALUE_finalize, come_value3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 930);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 931);
    come_call_finalizer(CVALUE_finalize, come_value4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 719, 932);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sVectorNode_finalize(struct sVectorNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVectorNode_finalize"; neo_current_frame = &fr;
    # 1 "sVectorNode_finalize"
    # 3 "sVectorNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sVectorNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sVectorNode_finalize", 2, 799));
    }
    # 4 "sVectorNode_finalize"
    if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
        # 3 "sVectorNode_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVectorNode_finalize}", 3, 800);
    }
        neo_current_frame = fr.prev;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTupleNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj98;
    struct sTupleNode* __result_obj__0;
    # 727 "36str2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTupleNode*)come_increment_ref_count(self, "36str2.nc", 727, 933),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 727, 934);
    # 729 "36str2.nc"
    __dec_obj98=self->tuple_elements,
    self->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements, "36str2.nc", 873, 937);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 873, 936);
    # 732 "36str2.nc"
        __result_obj__0 = (struct sTupleNode*)come_increment_ref_count(self, "36str2.nc", 732, 938);
    come_call_finalizer(sTupleNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 732, 941);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 732, 942);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTupleNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 732, 943);
    return __result_obj__0;
}

char*  sTupleNode_kind(struct sTupleNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTupleNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 734 "36str2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTupleNode","36str2.nc",734))), "36str2.nc", 734, 944);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 734, 945));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "36str2.nc", 734, 946));
    return __result_obj__0;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTupleNode_compile"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* tuple_types;
    struct list$1CVALUE$ph* tuple_values;
    _Bool __result_obj__0;
    int n;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_10;
    struct tuple2$2char$phsNode$ph* it;
    struct tuple2$2char$phsNode$ph* multiple_assign_var3
;    char*  name  =0;
    struct sNode* node=0;
    _Bool Value;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    char*  __dec_obj104  ;
    void* __right_value2 = (void*)0;
    struct sType*  type_32  ;
    struct list$1sType$ph* _o2_saved_11;
    struct sType*  it_34  ;
    struct CVALUE*  obj_value  ;
    struct buffer*  num_string  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    struct sType*  any_type  ;
    _Bool _conditional_value_X0;
    char*  __dec_obj105  ;
    char*  __dec_obj106  ;
    struct sType*  type3  ;
    struct sType*  __dec_obj107  ;
    struct sType*  obj_type  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4
;    char*  name_36  =0;
    struct sGenericsFun*  generics_fun  =0;
    char*  generics_fun_name  ;
    struct sFun*  fun  ;
    char*  __dec_obj108  ;
    struct sType*  result_type  ;
    struct list$1CVALUE$ph* come_params;
    int i;
    struct list$1CVALUE$ph* _o2_saved_12;
    struct CVALUE*  it_37  ;
    struct CVALUE*  come_value_38  ;
    struct buffer*  buf  ;
    int j;
    struct list$1CVALUE$ph* _o2_saved_13;
    struct CVALUE*  it_39  ;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj109  ;
    struct sType*  __dec_obj110  ;
    memset(&tuple_elements, 0, sizeof(tuple_elements));
    memset(&tuple_types, 0, sizeof(tuple_types));
    memset(&tuple_values, 0, sizeof(tuple_values));
    memset(&n, 0, sizeof(n));
    memset(&_o2_saved_10, 0, sizeof(_o2_saved_10));
    memset(&it, 0, sizeof(it));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type, 0, sizeof(type));
    memset(&type_32, 0, sizeof(type_32));
    memset(&_o2_saved_11, 0, sizeof(_o2_saved_11));
    memset(&it_34, 0, sizeof(it_34));
    memset(&obj_value, 0, sizeof(obj_value));
    memset(&num_string, 0, sizeof(num_string));
    memset(&type2_, 0, sizeof(type2_));
    memset(&type2, 0, sizeof(type2));
    memset(&type_name, 0, sizeof(type_name));
    memset(&any_type, 0, sizeof(any_type));
    memset(&type3, 0, sizeof(type3));
    memset(&obj_type, 0, sizeof(obj_type));
    memset(&generics_fun_name, 0, sizeof(generics_fun_name));
    memset(&fun, 0, sizeof(fun));
    memset(&result_type, 0, sizeof(result_type));
    memset(&come_params, 0, sizeof(come_params));
    memset(&i, 0, sizeof(i));
    memset(&_o2_saved_12, 0, sizeof(_o2_saved_12));
    memset(&it_37, 0, sizeof(it_37));
    memset(&come_value_38, 0, sizeof(come_value_38));
    memset(&buf, 0, sizeof(buf));
    memset(&j, 0, sizeof(j));
    memset(&_o2_saved_13, 0, sizeof(_o2_saved_13));
    memset(&it_39, 0, sizeof(it_39));
    memset(&come_value2, 0, sizeof(come_value2));
    # 739 "36str2.nc"
    tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->tuple_elements, "36str2.nc", 739, 947);
    # 740 "36str2.nc"
    tuple_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "36str2.nc", 740, 948, "struct list$1sType$ph*"), "36str2.nc", 740, 949)), "36str2.nc", 740, 950);
    # 741 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    tuple_values=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "36str2.nc", 741, 951, "struct list$1CVALUE$ph*"), "36str2.nc", 741, 952)), "36str2.nc", 741, 953);
    # 747 "36str2.nc"
    if(info->exp_value) {
        # 744 "36str2.nc"
        err_msg(info,"nest value expression is prohibited");
        # 745 "36str2.nc"
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 745, 954);
        come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 745, 955);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 745, 956);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 747 "36str2.nc"
    info->exp_value=(_Bool)1;
    # 749 "36str2.nc"
    n=0;
    # 767 "36str2.nc"
    for(_o2_saved_10=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements, "36str2.nc", 750, 957),it=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_10)    ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_10);it=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_10)){
        # 751 "36str2.nc"
        multiple_assign_var3=it;
        name=(char* )come_increment_ref_count(multiple_assign_var3->v1, "36str2.nc", 751, 958);
        node=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2, "36str2.nc", 751, 959);
        # 757 "36str2.nc"
        Value=node_compile(node,info);
        if(!Value) {
            # 754 "36str2.nc"
                        __result_obj__0 = (_Bool)0;
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 754, 960));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "36str2.nc", 754, 961):(void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 754, 962);
            come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 754, 963);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 754, 964);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_10, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 754, 965);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 757 "36str2.nc"
        __right_value0 = (void*)0;
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "36str2.nc", 757, 966);
        # 759 "36str2.nc"
        __right_value0 = (void*)0;
        list$1CVALUE$ph_push_back(tuple_values,(struct CVALUE* )come_increment_ref_count(CVALUE_clone(come_value), "36str2.nc", 759, 988));
        # 760 "36str2.nc"
        __right_value0 = (void*)0;
        type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "36str2.nc", 760, 989);
        # 761 "36str2.nc"
        __dec_obj104=type->mTupleName,
        type->mTupleName=(char* )come_increment_ref_count(name, "36str2.nc", 761, 991);
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 761, 990);
        # 762 "36str2.nc"
        list$1sType$ph_push_back(tuple_types,(struct sType* )come_increment_ref_count(type, "36str2.nc", 762, 992));
        # 764 "36str2.nc"
        n++;
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 767, 993));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "36str2.nc", 767, 994):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 767, 995);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 767, 996);
    }
    # 767 "36str2.nc"
    info->exp_value=(_Bool)0;
    # 769 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    type_32=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "36str2.nc", 769, 997, "struct sType* "), "36str2.nc", 769, 998),(char* )come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph_length(tuple_types)), "36str2.nc", 769, 999),(_Bool)0,info,(_Bool)0,0), "36str2.nc", 769, 1000);
    # 775 "36str2.nc"
    for(_o2_saved_11=(struct list$1sType$ph*)come_increment_ref_count(tuple_types, "36str2.nc", 771, 1001),it_34=list$1sType$ph_begin(_o2_saved_11)    ;!list$1sType$ph_end(_o2_saved_11);it_34=list$1sType$ph_next(_o2_saved_11)){
        # 772 "36str2.nc"
        __right_value0 = (void*)0;
        list$1sType$ph_push_back(type_32->mGenericsTypes,(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(it_34)))), "36str2.nc", 772, 1002));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 772, 1003);
    }
    # 775 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 775, 1004, "struct CVALUE* "), "36str2.nc", 775, 1005)), "36str2.nc", 775, 1006);
    # 777 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    num_string=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "36str2.nc", 777, 1007, "struct buffer* "), "36str2.nc", 777, 1008)), "36str2.nc", 777, 1009);
    # 779 "36str2.nc"
    buffer_append_str(num_string,"1");
    # 781 "36str2.nc"
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type_32,type_32,info), "36str2.nc", 781, 1010);
    # 782 "36str2.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "36str2.nc", 782, 1011);
    # 784 "36str2.nc"
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0), "36str2.nc", 784, 1012);
    # 786 "36str2.nc"
    any_type=(struct sType* )come_increment_ref_count(type2, "36str2.nc", 786, 1013);
    # 787 "36str2.nc"
    any_type->mPointerNum=1;
    # 788 "36str2.nc"
    any_type->mHeap=(_Bool)1;
    # 797 "36str2.nc"
    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 790, 1014));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 790, 1015);
_conditional_value_X0;})) {
        # 791 "36str2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj105=obj_value->c_value,
        obj_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name), "36str2.nc", 791, 1017);
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 791, 1016);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 791, 1018));
    }
    else {
        # 794 "36str2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj106=obj_value->c_value,
        obj_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name), "36str2.nc", 794, 1020);
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 794, 1019);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 794, 1021));
    }
    # 797 "36str2.nc"
    __right_value0 = (void*)0;
    type3=(struct sType* )come_increment_ref_count(sType_clone(type2), "36str2.nc", 797, 1022);
    # 798 "36str2.nc"
    type3->mPointerNum++;
    # 799 "36str2.nc"
    type3->mHeap=(_Bool)1;
    # 800 "36str2.nc"
    type2->mHeap=(_Bool)1;
    # 801 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj107=obj_value->type,
    obj_value->type=(struct sType* )come_increment_ref_count(sType_clone(type2), "36str2.nc", 801, 1024);
    come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 801, 1023);
    # 803 "36str2.nc"
    obj_value->var=((void*)0);
    # 805 "36str2.nc"
    append_object_to_right_values(obj_value,type3,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    # 807 "36str2.nc"
    __right_value0 = (void*)0;
    obj_type=(struct sType* )come_increment_ref_count(sType_clone(type2), "36str2.nc", 807, 1025);
    # 808 "36str2.nc"
    const char* fun_name="initialize";
    # 810 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char* )come_increment_ref_count(__builtin_string(fun_name,"36str2.nc",810), "36str2.nc", 810, 1026),info,(_Bool)1)));
    name_36=(char* )come_increment_ref_count(multiple_assign_var4->v1, "36str2.nc", 810, 1027);
    generics_fun=multiple_assign_var4->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 810, 1028);
    # 811 "36str2.nc"
    generics_fun_name=(char* )come_increment_ref_count(name_36, "36str2.nc", 811, 1029);
    # 813 "36str2.nc"
    __right_value0 = (void*)0;
    fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
    # 826 "36str2.nc"
    if(fun==((void*)0)) {
        # 816 "36str2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj108=generics_fun_name,
        generics_fun_name=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char* )(__right_value0=__builtin_string(fun_name,"36str2.nc",816))),info,(_Bool)1), "36str2.nc", 816, 1031);
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 816, 1030);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 816, 1032));
        # 818 "36str2.nc"
        __right_value0 = (void*)0;
        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
        # 824 "36str2.nc"
        if(fun==((void*)0)) {
            # 821 "36str2.nc"
            err_msg(info,"function not found(%s) at method(%s)(2)",generics_fun_name,info->come_fun->mName);
            # 822 "36str2.nc"
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 822, 1033);
            come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 822, 1034);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 822, 1035);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_10, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 822, 1036);
            come_call_finalizer(sType_finalize, type_32, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 822, 1037);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 822, 1038);
            come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 822, 1039);
            come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 822, 1040);
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 822, 1041);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 822, 1042);
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 822, 1043));
            come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 822, 1044);
            come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 822, 1045);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 822, 1046);
            (name_36 = come_decrement_ref_count(name_36, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 822, 1047));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 822, 1048));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    # 826 "36str2.nc"
    __right_value0 = (void*)0;
    result_type=(struct sType* )come_increment_ref_count(sType_clone(fun->mResultType), "36str2.nc", 826, 1049);
    # 827 "36str2.nc"
    result_type->mStatic=(_Bool)0;
    # 829 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "36str2.nc", 829, 1050, "struct list$1CVALUE$ph*"), "36str2.nc", 829, 1051)), "36str2.nc", 829, 1052);
    # 834 "36str2.nc"
    if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0)))->mHeap&&obj_value->type->mHeap));    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 831, 1053);
_conditional_value_X0;})) {
        # 832 "36str2.nc"
        __right_value0 = (void*)0;
        std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0))),obj_value->type,obj_value,info);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 832, 1054);
    }
    # 834 "36str2.nc"
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(obj_value, "36str2.nc", 834, 1055));
    # 836 "36str2.nc"
    i=1;
    # 848 "36str2.nc"
    for(_o2_saved_12=(struct list$1CVALUE$ph*)come_increment_ref_count(tuple_values, "36str2.nc", 837, 1056),it_37=list$1CVALUE$ph_begin(_o2_saved_12)    ;!list$1CVALUE$ph_end(_o2_saved_12);it_37=list$1CVALUE$ph_next(_o2_saved_12)){
        # 838 "36str2.nc"
        __right_value0 = (void*)0;
        come_value_38=(struct CVALUE* )come_increment_ref_count(CVALUE_clone(it_37), "36str2.nc", 838, 1057);
        # 843 "36str2.nc"
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,i)))&&((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(fun->mParamTypes,i)))->mHeap&&come_value_38->type->mHeap));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 840, 1058);
        come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 840, 1059);
_conditional_value_X0;})) {
            # 841 "36str2.nc"
            __right_value0 = (void*)0;
            std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,i))),come_value_38->type,come_value_38,info);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 841, 1060);
        }
        # 843 "36str2.nc"
        list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value_38, "36str2.nc", 843, 1061));
        # 845 "36str2.nc"
        i++;
        come_call_finalizer(CVALUE_finalize, come_value_38, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 848, 1062);
    }
    # 848 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "36str2.nc", 848, 1063, "struct buffer* "), "36str2.nc", 848, 1064)), "36str2.nc", 848, 1065);
    # 850 "36str2.nc"
    buffer_append_str(buf,generics_fun_name);
    # 851 "36str2.nc"
    buffer_append_str(buf,"(");
    # 853 "36str2.nc"
    j=0;
    # 863 "36str2.nc"
    for(_o2_saved_13=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params, "36str2.nc", 854, 1066),it_39=list$1CVALUE$ph_begin(_o2_saved_13)    ;!list$1CVALUE$ph_end(_o2_saved_13);it_39=list$1CVALUE$ph_next(_o2_saved_13)){
        # 855 "36str2.nc"
        buffer_append_str(buf,it_39->c_value);
        # 861 "36str2.nc"
        if(j!=list$1CVALUE$ph_length(come_params)-1) {
            # 858 "36str2.nc"
            buffer_append_str(buf,",");
        }
        # 861 "36str2.nc"
        j++;
    }
    # 863 "36str2.nc"
    buffer_append_str(buf,")");
    # 865 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 865, 1067, "struct CVALUE* "), "36str2.nc", 865, 1068)), "36str2.nc", 865, 1069);
    # 867 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj109=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "36str2.nc", 867, 1071);
    __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 867, 1070);
    # 869 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj110=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "36str2.nc", 869, 1073);
    come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 869, 1072);
    # 870 "36str2.nc"
    come_value2->type->mStatic=(_Bool)0;
    # 871 "36str2.nc"
    come_value2->var=((void*)0);
    # 877 "36str2.nc"
    if(result_type->mHeap) {
        # 874 "36str2.nc"
        append_object_to_right_values(come_value2,result_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    # 877 "36str2.nc"
    add_come_last_code(info,"%s",come_value2->c_value);
    # 879 "36str2.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "36str2.nc", 879, 1074));
    # 881 "36str2.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1075);
    come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1076);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1077);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_10, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1078);
    come_call_finalizer(sType_finalize, type_32, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1079);
    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1080);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1081);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1082);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1083);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1084);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 881, 1085));
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1086);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1087);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1088);
    (name_36 = come_decrement_ref_count(name_36, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 881, 1089));
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 881, 1090));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1091);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1092);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1093);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1094);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_13, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1095);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 881, 1096);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 935);
    }
        neo_current_frame = fr.prev;
}

static void sTupleNode_finalize(struct sTupleNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTupleNode_finalize"; neo_current_frame = &fr;
    # 1 "sTupleNode_finalize"
    # 3 "sTupleNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sTupleNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sTupleNode_finalize", 2, 939));
    }
    # 4 "sTupleNode_finalize"
    if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        # 3 "sTupleNode_finalize"
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sTupleNode_finalize}", 3, 940);
    }
        neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_30;
    # 1682 "./neo-c.h"
    # 1689 "./neo-c.h"
    if(self==((void*)0)) {
        # 1685 "./neo-c.h"
        # 1686 "./neo-c.h"
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
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
    memset(&result_30,0,sizeof(struct tuple2$2char$phsNode$ph*));
    # 1697 "./neo-c.h"
        __result_obj__0 = result_30;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_end"; neo_current_frame = &fr;
    # 1721 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_next"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_31;
    # 1701 "./neo-c.h"
    # 1709 "./neo-c.h"
    if(self==((void*)0)||self->it==((void*)0)) {
        # 1704 "./neo-c.h"
        # 1705 "./neo-c.h"
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
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
    memset(&result_31,0,sizeof(struct tuple2$2char$phsNode$ph*));
    # 1717 "./neo-c.h"
        __result_obj__0 = result_31;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct CVALUE*  CVALUE_clone(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_clone"; neo_current_frame = &fr;
    struct CVALUE*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  result  ;
    char*  __dec_obj99  ;
    struct sType*  __dec_obj100  ;
    char*  __dec_obj101  ;
    char*  __dec_obj102  ;
    char*  __dec_obj103  ;
    memset(&result, 0, sizeof(result));
    # 3 "CVALUE_clone"
    # 5 "CVALUE_clone"
    if(self==(void*)0) {
        # 4 "CVALUE_clone"
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count((void*)0, "CVALUE_clone", 4, 967);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "CVALUE_clone}", 4, 968);
        return __result_obj__0;
    }
    # 5 "CVALUE_clone"
    result=(struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "CVALUE_clone", 5, 969, "struct CVALUE* "), "CVALUE_clone", 5, 970);
    # 7 "CVALUE_clone"
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        # 6 "CVALUE_clone"
        __right_value0 = (void*)0;
        __dec_obj99=result->c_value,
        result->c_value=(char* )come_increment_ref_count((char* )come_memdup(self->c_value, "CVALUE_clone", 6, 971, "char* "), "CVALUE_clone", 6, 973);
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0, "CVALUE_clone", 6, 972);
    }
    # 8 "CVALUE_clone"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 7 "CVALUE_clone"
        __right_value0 = (void*)0;
        __dec_obj100=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "CVALUE_clone", 7, 975);
        come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_clone", 7, 974);
    }
    # 9 "CVALUE_clone"
    if(self!=((void*)0)) {
        # 8 "CVALUE_clone"
        result->var=self->var;
    }
    # 10 "CVALUE_clone"
    if(self!=((void*)0)) {
        # 9 "CVALUE_clone"
        result->right_value_objects=self->right_value_objects;
    }
    # 11 "CVALUE_clone"
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        # 10 "CVALUE_clone"
        __right_value0 = (void*)0;
        __dec_obj101=result->c_value_without_right_value_objects,
        result->c_value_without_right_value_objects=(char* )come_increment_ref_count((char* )come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 10, 976, "char* "), "CVALUE_clone", 10, 978);
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0, "CVALUE_clone", 10, 977);
    }
    # 12 "CVALUE_clone"
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        # 11 "CVALUE_clone"
        __right_value0 = (void*)0;
        __dec_obj102=result->c_value_without_cast_object_value,
        result->c_value_without_cast_object_value=(char* )come_increment_ref_count((char* )come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 11, 979, "char* "), "CVALUE_clone", 11, 981);
        __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0, "CVALUE_clone", 11, 980);
    }
    # 13 "CVALUE_clone"
    if(self!=((void*)0)) {
        # 12 "CVALUE_clone"
        result->mLoadField=self->mLoadField;
    }
    # 14 "CVALUE_clone"
    if(self!=((void*)0)) {
        # 13 "CVALUE_clone"
        result->mCastValue=self->mCastValue;
    }
    # 15 "CVALUE_clone"
    if(self!=((void*)0)) {
        # 14 "CVALUE_clone"
        result->mNullValue=self->mNullValue;
    }
    # 16 "CVALUE_clone"
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        # 15 "CVALUE_clone"
        __right_value0 = (void*)0;
        __dec_obj103=result->c_value_without_null_checker,
        result->c_value_without_null_checker=(char* )come_increment_ref_count((char* )come_memdup(self->c_value_without_null_checker, "CVALUE_clone", 15, 982, "char* "), "CVALUE_clone", 15, 984);
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0, "CVALUE_clone", 15, 983);
    }
    # 16 "CVALUE_clone"
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(result, "CVALUE_clone", 16, 985);
    come_call_finalizer(CVALUE_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "CVALUE_clone}", 16, 986);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "CVALUE_clone}", 16, 987);
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

static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_begin"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_33  ;
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
    memset(&result_33,0,sizeof(struct sType* ));
    # 1697 "./neo-c.h"
        __result_obj__0 = result_33;
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
    struct sType*  result_35  ;
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
    memset(&result_35,0,sizeof(struct sType* ));
    # 1717 "./neo-c.h"
        __result_obj__0 = result_35;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMapNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj111;
    struct list$1sNode$ph* __dec_obj112;
    struct sMapNode* __result_obj__0;
    # 889 "36str2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sMapNode*)come_increment_ref_count(self, "36str2.nc", 889, 1097),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 889, 1098);
    # 891 "36str2.nc"
    __dec_obj111=self->map_key_elements,
    self->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_key_elements, "36str2.nc", 891, 1100);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 891, 1099);
    # 892 "36str2.nc"
    __dec_obj112=self->map_elements,
    self->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_elements, "36str2.nc", 892, 1102);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 892, 1101);
    # 895 "36str2.nc"
        __result_obj__0 = (struct sMapNode*)come_increment_ref_count(self, "36str2.nc", 895, 1103);
    come_call_finalizer(sMapNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 895, 1107);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 895, 1108);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 895, 1109);
    neo_current_frame = fr.prev;
    come_call_finalizer(sMapNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "36str2.nc}", 895, 1110);
    return __result_obj__0;
}

char*  sMapNode_kind(struct sMapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMapNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 897 "36str2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sMapNode","36str2.nc",897))), "36str2.nc", 897, 1111);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 897, 1112));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "36str2.nc", 897, 1113));
    return __result_obj__0;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMapNode_compile"; neo_current_frame = &fr;
    struct list$1sNode$ph* map_key_elements;
    struct list$1sNode$ph* map_elements;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* key_params;
    struct list$1CVALUE$ph* element_params;
    struct sType*  map_key_type  ;
    struct sType*  map_element_type  ;
    _Bool __result_obj__0;
    int i;
    struct sNode* key_elements;
    struct sNode* elements;
    _Bool Value;
    struct CVALUE*  come_value  ;
    struct sType*  __dec_obj113  ;
    _Bool Value_42;
    struct CVALUE*  come_value2  ;
    struct sType*  __dec_obj114  ;
    struct sType*  key_type_values  ;
    char*  var_name  ;
    struct sVar*  var_  ;
    struct sType*  element_type_values  ;
    char*  var_name2  ;
    struct sVar*  var2_  ;
    struct buffer*  source  ;
    int i_43;
    struct CVALUE*  key_param  ;
    struct CVALUE*  element_param  ;
    void* __right_value2 = (void*)0;
    struct sType*  map_type  ;
    struct sType*  obj_type  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var5
;    char*  name  =0;
    struct sGenericsFun*  generics_fun  =0;
    char*  generics_fun_name  ;
    struct sFun*  fun  ;
    char*  __dec_obj115  ;
    struct sType*  result_type  ;
    struct sType*  type  ;
    struct CVALUE*  obj_value  ;
    struct buffer*  num_string  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    struct sType*  any_type  ;
    _Bool _conditional_value_X0;
    char*  __dec_obj116  ;
    char*  __dec_obj117  ;
    struct sType*  type3  ;
    struct sType*  __dec_obj118  ;
    struct list$1CVALUE$ph* come_params;
    struct CVALUE*  come_value2_44  ;
    char*  __dec_obj119  ;
    struct sType*  __dec_obj120  ;
    struct CVALUE*  come_value3  ;
    char*  __dec_obj121  ;
    struct sType*  __dec_obj122  ;
    struct CVALUE*  come_value4  ;
    char*  __dec_obj123  ;
    struct sType*  __dec_obj124  ;
    int j;
    struct list$1CVALUE$ph* _o2_saved_14;
    struct CVALUE*  it  ;
    struct CVALUE*  come_value5  ;
    char*  __dec_obj125  ;
    struct sType*  __dec_obj126  ;
    memset(&map_key_elements, 0, sizeof(map_key_elements));
    memset(&map_elements, 0, sizeof(map_elements));
    memset(&key_params, 0, sizeof(key_params));
    memset(&element_params, 0, sizeof(element_params));
    memset(&map_key_type, 0, sizeof(map_key_type));
    memset(&map_element_type, 0, sizeof(map_element_type));
    memset(&i, 0, sizeof(i));
    memset(&key_elements, 0, sizeof(key_elements));
    memset(&elements, 0, sizeof(elements));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&Value_42, 0, sizeof(Value_42));
    memset(&come_value2, 0, sizeof(come_value2));
    memset(&key_type_values, 0, sizeof(key_type_values));
    memset(&var_name, 0, sizeof(var_name));
    memset(&var_, 0, sizeof(var_));
    memset(&element_type_values, 0, sizeof(element_type_values));
    memset(&var_name2, 0, sizeof(var_name2));
    memset(&var2_, 0, sizeof(var2_));
    memset(&source, 0, sizeof(source));
    memset(&i_43, 0, sizeof(i_43));
    memset(&key_param, 0, sizeof(key_param));
    memset(&element_param, 0, sizeof(element_param));
    memset(&map_type, 0, sizeof(map_type));
    memset(&obj_type, 0, sizeof(obj_type));
    memset(&generics_fun_name, 0, sizeof(generics_fun_name));
    memset(&fun, 0, sizeof(fun));
    memset(&result_type, 0, sizeof(result_type));
    memset(&type, 0, sizeof(type));
    memset(&obj_value, 0, sizeof(obj_value));
    memset(&num_string, 0, sizeof(num_string));
    memset(&type2_, 0, sizeof(type2_));
    memset(&type2, 0, sizeof(type2));
    memset(&type_name, 0, sizeof(type_name));
    memset(&any_type, 0, sizeof(any_type));
    memset(&type3, 0, sizeof(type3));
    memset(&come_params, 0, sizeof(come_params));
    memset(&come_value2_44, 0, sizeof(come_value2_44));
    memset(&come_value3, 0, sizeof(come_value3));
    memset(&come_value4, 0, sizeof(come_value4));
    memset(&j, 0, sizeof(j));
    memset(&_o2_saved_14, 0, sizeof(_o2_saved_14));
    memset(&it, 0, sizeof(it));
    memset(&come_value5, 0, sizeof(come_value5));
    # 902 "36str2.nc"
    map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(self->map_key_elements, "36str2.nc", 902, 1114);
    # 903 "36str2.nc"
    map_elements=(struct list$1sNode$ph*)come_increment_ref_count(self->map_elements, "36str2.nc", 903, 1115);
    # 905 "36str2.nc"
    key_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "36str2.nc", 905, 1116, "struct list$1CVALUE$ph*"), "36str2.nc", 905, 1117)), "36str2.nc", 905, 1118);
    # 906 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    element_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "36str2.nc", 906, 1119, "struct list$1CVALUE$ph*"), "36str2.nc", 906, 1120)), "36str2.nc", 906, 1121);
    # 907 "36str2.nc"
    map_key_type=((void*)0);
    # 908 "36str2.nc"
    map_element_type=((void*)0);
    # 914 "36str2.nc"
    if(info->exp_value) {
        # 911 "36str2.nc"
        err_msg(info,"nest value expression is prohibited");
        # 912 "36str2.nc"
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 912, 1122);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 912, 1123);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 912, 1124);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 912, 1125);
        come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 912, 1126);
        come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 912, 1127);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 914 "36str2.nc"
    info->exp_value=(_Bool)1;
    # 950 "36str2.nc"
    for(i=0    ;i<list$1sNode$ph_length(map_key_elements);i++){
        # 917 "36str2.nc"
        __right_value0 = (void*)0;
        key_elements=((struct sNode*)(__right_value0=list$1sNode$ph_operator_load_element(map_key_elements,i)));
        # 918 "36str2.nc"
        __right_value0 = (void*)0;
        elements=((struct sNode*)(__right_value0=list$1sNode$ph_operator_load_element(map_elements,i)));
        # 924 "36str2.nc"
        Value=node_compile(key_elements,info);
        if(!Value) {
            # 921 "36str2.nc"
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 921, 1146);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 921, 1147);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 921, 1148);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 921, 1149);
            come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 921, 1150);
            come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 921, 1151);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 924 "36str2.nc"
        __right_value0 = (void*)0;
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "36str2.nc", 924, 1152);
        # 926 "36str2.nc"
        remove_value_from_right_value_objects(come_value,info);
        # 932 "36str2.nc"
        if(map_key_type) {
            # 929 "36str2.nc"
            __right_value0 = (void*)0;
            check_assign_type(((char*)(__right_value0=xsprintf("Map key type"))),map_key_type,come_value->type,come_value,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 929, 1153));
        }
        # 932 "36str2.nc"
        list$1CVALUE$ph_push_back(key_params,(struct CVALUE* )come_increment_ref_count(come_value, "36str2.nc", 932, 1154));
        # 933 "36str2.nc"
        __right_value0 = (void*)0;
        __dec_obj113=map_key_type,
        map_key_type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "36str2.nc", 933, 1156);
        come_call_finalizer(sType_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 933, 1155);
        # 939 "36str2.nc"
        Value_42=node_compile(elements,info);
        if(!Value_42) {
            # 936 "36str2.nc"
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 936, 1157);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 936, 1158);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 936, 1159);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 936, 1160);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 936, 1161);
            come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 936, 1162);
            come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 936, 1163);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 939 "36str2.nc"
        __right_value0 = (void*)0;
        come_value2=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "36str2.nc", 939, 1164);
        # 941 "36str2.nc"
        remove_value_from_right_value_objects(come_value2,info);
        # 947 "36str2.nc"
        if(map_element_type) {
            # 944 "36str2.nc"
            __right_value0 = (void*)0;
            check_assign_type(((char*)(__right_value0=xsprintf("Map element type"))),map_element_type,come_value2->type,come_value2,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 944, 1165));
        }
        # 947 "36str2.nc"
        list$1CVALUE$ph_push_back(element_params,(struct CVALUE* )come_increment_ref_count(come_value2, "36str2.nc", 947, 1166));
        # 948 "36str2.nc"
        __right_value0 = (void*)0;
        __dec_obj114=map_element_type,
        map_element_type=(struct sType* )come_increment_ref_count(sType_clone(come_value2->type), "36str2.nc", 948, 1168);
        come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 948, 1167);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 950, 1169);
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 950, 1170);
    }
    # 950 "36str2.nc"
    info->exp_value=(_Bool)0;
    # 952 "36str2.nc"
    static int map_value_num=0;
    # 954 "36str2.nc"
    __right_value0 = (void*)0;
    key_type_values=(struct sType* )come_increment_ref_count(sType_clone(map_key_type), "36str2.nc", 954, 1171);
    # 955 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1sNode$ph_push_back(key_type_values->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(list$1CVALUE$ph_length(key_params)), "36str2.nc", 955, 1172),info), "36str2.nc", 955, 1173));
    # 956 "36str2.nc"
    key_type_values->mHeap=(_Bool)0;
    # 958 "36str2.nc"
    __right_value0 = (void*)0;
    var_name=(char* )come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num), "36str2.nc", 958, 1174);
    # 960 "36str2.nc"
    __right_value0 = (void*)0;
    add_variable_to_table(var_name,((struct sType* )(__right_value0=sType_clone(key_type_values))),info,(_Bool)0,(_Bool)0,(_Bool)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 960, 1175);
    # 962 "36str2.nc"
    var_=get_variable_from_table(info->lv_table,var_name);
    # 964 "36str2.nc"
    __right_value0 = (void*)0;
    add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(key_type_values,var_->mCValueName,info,(_Bool)0,(_Bool)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 964, 1176));
    # 966 "36str2.nc"
    __right_value0 = (void*)0;
    element_type_values=(struct sType* )come_increment_ref_count(sType_clone(map_element_type), "36str2.nc", 966, 1177);
    # 967 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1sNode$ph_push_back(element_type_values->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(list$1CVALUE$ph_length(element_params)), "36str2.nc", 967, 1178),info), "36str2.nc", 967, 1179));
    # 968 "36str2.nc"
    element_type_values->mHeap=(_Bool)0;
    # 970 "36str2.nc"
    __right_value0 = (void*)0;
    var_name2=(char* )come_increment_ref_count(xsprintf("__map_element%d__",map_value_num), "36str2.nc", 970, 1180);
    # 972 "36str2.nc"
    __right_value0 = (void*)0;
    add_variable_to_table(var_name2,((struct sType* )(__right_value0=sType_clone(element_type_values))),info,(_Bool)0,(_Bool)0,(_Bool)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 972, 1181);
    # 974 "36str2.nc"
    var2_=get_variable_from_table(info->lv_table,var_name2);
    # 976 "36str2.nc"
    __right_value0 = (void*)0;
    add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(element_type_values,var2_->mCValueName,info,(_Bool)0,(_Bool)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 976, 1182));
    # 978 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "36str2.nc", 978, 1183, "struct buffer* "), "36str2.nc", 978, 1184)), "36str2.nc", 978, 1185);
    # 980 "36str2.nc"
    buffer_append_str(source,"(");
    # 1003 "36str2.nc"
    for(i_43=0    ;i_43<list$1CVALUE$ph_length(key_params);i_43++){
        # 983 "36str2.nc"
        __right_value0 = (void*)0;
        key_param=((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(key_params,i_43)));
        # 984 "36str2.nc"
        __right_value0 = (void*)0;
        element_param=((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(element_params,i_43)));
        # 994 "36str2.nc"
        if(map_key_type->mHeap) {
            # 988 "36str2.nc"
            buffer_append_format(source,"%s[%d]=%s,\n",var_->mCValueName,i_43,key_param->c_value);
        }
        else {
            # 991 "36str2.nc"
            buffer_append_format(source,"%s[%d]=%s,\n",var_->mCValueName,i_43,key_param->c_value);
        }
        # 1001 "36str2.nc"
        if(map_element_type->mHeap) {
            # 996 "36str2.nc"
            buffer_append_format(source,"%s[%d]=%s,\n",var2_->mCValueName,i_43,element_param->c_value);
        }
        else {
            # 999 "36str2.nc"
            buffer_append_format(source,"%s[%d]=%s,\n",var2_->mCValueName,i_43,element_param->c_value);
        }
    }
    # 1003 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    map_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "36str2.nc", 1003, 1186, "struct sType* "), "36str2.nc", 1003, 1187),(char*)come_increment_ref_count(xsprintf("map"), "36str2.nc", 1003, 1188),(_Bool)0,info,(_Bool)0,0), "36str2.nc", 1003, 1189);
    # 1004 "36str2.nc"
    __right_value0 = (void*)0;
    list$1sType$ph_push_back(map_type->mGenericsTypes,(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(map_key_type)))), "36str2.nc", 1004, 1190));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 1004, 1191);
    # 1005 "36str2.nc"
    __right_value0 = (void*)0;
    list$1sType$ph_push_back(map_type->mGenericsTypes,(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(map_element_type)))), "36str2.nc", 1005, 1192));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 1005, 1193);
    # 1007 "36str2.nc"
    __right_value0 = (void*)0;
    obj_type=(struct sType* )come_increment_ref_count(sType_clone(map_type), "36str2.nc", 1007, 1194);
    # 1008 "36str2.nc"
    const char* fun_name="initialize_with_values";
    # 1010 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    multiple_assign_var5=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char* )come_increment_ref_count(__builtin_string(fun_name,"36str2.nc",1010), "36str2.nc", 1010, 1195),info,(_Bool)1)));
    name=(char* )come_increment_ref_count(multiple_assign_var5->v1, "36str2.nc", 1010, 1196);
    generics_fun=multiple_assign_var5->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 1010, 1197);
    # 1011 "36str2.nc"
    generics_fun_name=(char* )come_increment_ref_count(name, "36str2.nc", 1011, 1198);
    # 1013 "36str2.nc"
    __right_value0 = (void*)0;
    fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
    # 1026 "36str2.nc"
    if(fun==((void*)0)) {
        # 1016 "36str2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj115=generics_fun_name,
        generics_fun_name=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char* )(__right_value0=__builtin_string(fun_name,"36str2.nc",1016))),info,(_Bool)1), "36str2.nc", 1016, 1200);
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 1016, 1199);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 1016, 1201));
        # 1018 "36str2.nc"
        __right_value0 = (void*)0;
        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
        # 1024 "36str2.nc"
        if(fun==((void*)0)) {
            # 1021 "36str2.nc"
            err_msg(info,"function not found(%s) at method(%s)(3)",generics_fun_name,info->come_fun->mName);
            # 1022 "36str2.nc"
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1022, 1202);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1022, 1203);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1022, 1204);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1022, 1205);
            come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1022, 1206);
            come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1022, 1207);
            come_call_finalizer(sType_finalize, key_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1022, 1208);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 1022, 1209));
            come_call_finalizer(sType_finalize, element_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1022, 1210);
            (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 1022, 1211));
            come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1022, 1212);
            come_call_finalizer(sType_finalize, map_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1022, 1213);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1022, 1214);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 1022, 1215));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 1022, 1216));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    # 1026 "36str2.nc"
    __right_value0 = (void*)0;
    result_type=(struct sType* )come_increment_ref_count(sType_clone(fun->mResultType), "36str2.nc", 1026, 1217);
    # 1027 "36str2.nc"
    result_type->mStatic=(_Bool)0;
    # 1029 "36str2.nc"
    type=(struct sType* )come_increment_ref_count(map_type, "36str2.nc", 1029, 1218);
    # 1031 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 1031, 1219, "struct CVALUE* "), "36str2.nc", 1031, 1220)), "36str2.nc", 1031, 1221);
    # 1033 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    num_string=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "36str2.nc", 1033, 1222, "struct buffer* "), "36str2.nc", 1033, 1223)), "36str2.nc", 1033, 1224);
    # 1035 "36str2.nc"
    buffer_append_str(num_string,"1");
    # 1037 "36str2.nc"
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,type,info), "36str2.nc", 1037, 1225);
    # 1038 "36str2.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "36str2.nc", 1038, 1226);
    # 1040 "36str2.nc"
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0), "36str2.nc", 1040, 1227);
    # 1042 "36str2.nc"
    any_type=(struct sType* )come_increment_ref_count(type2, "36str2.nc", 1042, 1228);
    # 1043 "36str2.nc"
    any_type->mPointerNum=1;
    # 1044 "36str2.nc"
    any_type->mHeap=(_Bool)1;
    # 1053 "36str2.nc"
    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 1046, 1229));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 1046, 1230);
_conditional_value_X0;})) {
        # 1047 "36str2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj116=obj_value->c_value,
        obj_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name), "36str2.nc", 1047, 1232);
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 1047, 1231);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 1047, 1233));
    }
    else {
        # 1050 "36str2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj117=obj_value->c_value,
        obj_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name), "36str2.nc", 1050, 1235);
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 1050, 1234);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "36str2.nc", 1050, 1236));
    }
    # 1053 "36str2.nc"
    __right_value0 = (void*)0;
    type3=(struct sType* )come_increment_ref_count(sType_clone(type2), "36str2.nc", 1053, 1237);
    # 1054 "36str2.nc"
    type3->mPointerNum++;
    # 1055 "36str2.nc"
    type3->mHeap=(_Bool)1;
    # 1056 "36str2.nc"
    type2->mHeap=(_Bool)1;
    # 1057 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj118=obj_value->type,
    obj_value->type=(struct sType* )come_increment_ref_count(sType_clone(type2), "36str2.nc", 1057, 1239);
    come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 1057, 1238);
    # 1059 "36str2.nc"
    obj_value->var=((void*)0);
    # 1061 "36str2.nc"
    append_object_to_right_values(obj_value,type3,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    # 1063 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "36str2.nc", 1063, 1240, "struct list$1CVALUE$ph*"), "36str2.nc", 1063, 1241)), "36str2.nc", 1063, 1242);
    # 1068 "36str2.nc"
    if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0)))->mHeap&&obj_value->type->mHeap));    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 1065, 1243);
_conditional_value_X0;})) {
        # 1066 "36str2.nc"
        __right_value0 = (void*)0;
        std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0))),obj_value->type,obj_value,info);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 1066, 1244);
    }
    # 1068 "36str2.nc"
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(obj_value, "36str2.nc", 1068, 1245));
    # 1070 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2_44=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 1070, 1246, "struct CVALUE* "), "36str2.nc", 1070, 1247)), "36str2.nc", 1070, 1248);
    # 1072 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj119=come_value2_44->c_value,
    come_value2_44->c_value=(char* )come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(key_params)), "36str2.nc", 1072, 1250);
    __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 1072, 1249);
    # 1073 "36str2.nc"
    __dec_obj120=come_value2_44->type,
    come_value2_44->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 1073, 1251);
    # 1074 "36str2.nc"
    come_value2_44->var=((void*)0);
    # 1076 "36str2.nc"
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value2_44, "36str2.nc", 1076, 1252));
    # 1078 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value3=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 1078, 1253, "struct CVALUE* "), "36str2.nc", 1078, 1254)), "36str2.nc", 1078, 1255);
    # 1080 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj121=come_value3->c_value,
    come_value3->c_value=(char* )come_increment_ref_count(xsprintf("%s",var_->mCValueName), "36str2.nc", 1080, 1257);
    __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 1080, 1256);
    # 1081 "36str2.nc"
    __dec_obj122=come_value3->type,
    come_value3->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 1081, 1258);
    # 1082 "36str2.nc"
    come_value3->var=((void*)0);
    # 1084 "36str2.nc"
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value3, "36str2.nc", 1084, 1259));
    # 1086 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value4=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 1086, 1260, "struct CVALUE* "), "36str2.nc", 1086, 1261)), "36str2.nc", 1086, 1262);
    # 1088 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj123=come_value4->c_value,
    come_value4->c_value=(char* )come_increment_ref_count(xsprintf("%s",var2_->mCValueName), "36str2.nc", 1088, 1264);
    __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 1088, 1263);
    # 1089 "36str2.nc"
    __dec_obj124=come_value4->type,
    come_value4->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 1089, 1265);
    # 1090 "36str2.nc"
    come_value4->var=((void*)0);
    # 1092 "36str2.nc"
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value4, "36str2.nc", 1092, 1266));
    # 1096 "36str2.nc"
    buffer_append_str(source,generics_fun_name);
    # 1097 "36str2.nc"
    buffer_append_str(source,"(");
    # 1099 "36str2.nc"
    j=0;
    # 1109 "36str2.nc"
    for(_o2_saved_14=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params, "36str2.nc", 1100, 1267),it=list$1CVALUE$ph_begin(_o2_saved_14)    ;!list$1CVALUE$ph_end(_o2_saved_14);it=list$1CVALUE$ph_next(_o2_saved_14)){
        # 1101 "36str2.nc"
        buffer_append_str(source,it->c_value);
        # 1107 "36str2.nc"
        if(j!=list$1CVALUE$ph_length(come_params)-1) {
            # 1104 "36str2.nc"
            buffer_append_str(source,",");
        }
        # 1107 "36str2.nc"
        j++;
    }
    # 1109 "36str2.nc"
    buffer_append_str(source,")");
    # 1110 "36str2.nc"
    buffer_append_str(source,")");
    # 1112 "36str2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value5=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "36str2.nc", 1112, 1268, "struct CVALUE* "), "36str2.nc", 1112, 1269)), "36str2.nc", 1112, 1270);
    # 1114 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj125=come_value5->c_value,
    come_value5->c_value=(char* )come_increment_ref_count(buffer_to_string(source), "36str2.nc", 1114, 1272);
    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0, "36str2.nc", 1114, 1271);
    # 1115 "36str2.nc"
    __right_value0 = (void*)0;
    __dec_obj126=come_value5->type,
    come_value5->type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "36str2.nc", 1115, 1274);
    come_call_finalizer(sType_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc", 1115, 1273);
    # 1116 "36str2.nc"
    come_value5->type->mStatic=(_Bool)0;
    # 1117 "36str2.nc"
    come_value5->var=((void*)0);
    # 1123 "36str2.nc"
    if(result_type->mHeap) {
        # 1120 "36str2.nc"
        append_object_to_right_values(come_value5,result_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    # 1123 "36str2.nc"
    add_come_last_code(info,"%s",come_value5->c_value);
    # 1125 "36str2.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value5, "36str2.nc", 1125, 1275));
    # 1127 "36str2.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1276);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1277);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1278);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1279);
    come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1280);
    come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1281);
    come_call_finalizer(sType_finalize, key_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1282);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 1127, 1283));
    come_call_finalizer(sType_finalize, element_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1284);
    (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 1127, 1285));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1286);
    come_call_finalizer(sType_finalize, map_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1287);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1288);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 1127, 1289));
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 1127, 1290));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1291);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1292);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1293);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1294);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1295);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1296);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 1127, 1297));
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1298);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1299);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1300);
    come_call_finalizer(CVALUE_finalize, come_value2_44, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1301);
    come_call_finalizer(CVALUE_finalize, come_value3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1302);
    come_call_finalizer(CVALUE_finalize, come_value4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1303);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1304);
    come_call_finalizer(CVALUE_finalize, come_value5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1127, 1305);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sMapNode_finalize(struct sMapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMapNode_finalize"; neo_current_frame = &fr;
    # 1 "sMapNode_finalize"
    # 3 "sMapNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sMapNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sMapNode_finalize", 2, 1104));
    }
    # 4 "sMapNode_finalize"
    if(self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        # 3 "sMapNode_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sMapNode_finalize}", 3, 1105);
    }
    # 5 "sMapNode_finalize"
    if(self!=((void*)0)&&self->map_elements!=((void*)0)) {
        # 4 "sMapNode_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sMapNode_finalize}", 4, 1106);
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
    struct sNode* default_value_40;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sNode*));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value, "./neo-c.h", 2158, 1128);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2158, 1129):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2158, 1130):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 2161, 1131):(void*)0);
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
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item, "./neo-c.h", 2169, 1132);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2169, 1133):(void*)0);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_40,0,sizeof(struct sNode*));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_40, "./neo-c.h", 2177, 1134);
    ((default_value_40) ? default_value_40 = come_decrement_ref_count(default_value_40, ((struct sNode*)default_value_40)->finalize, ((struct sNode*)default_value_40)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2177, 1135):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2177, 1136):(void*)0);
    return __result_obj__0;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_operator_load_element"; neo_current_frame = &fr;
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_41;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sNode*));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value, "./neo-c.h", 2158, 1137);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2158, 1138):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2158, 1139):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 2161, 1140):(void*)0);
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
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item, "./neo-c.h", 2169, 1141);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2169, 1142):(void*)0);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_41,0,sizeof(struct sNode*));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_41, "./neo-c.h", 2177, 1143);
    ((default_value_41) ? default_value_41 = come_decrement_ref_count(default_value_41, ((struct sNode*)default_value_41)->finalize, ((struct sNode*)default_value_41)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2177, 1144):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2177, 1145):(void*)0);
    return __result_obj__0;
}

struct sNode* create_str_node(char*  value  , int sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_str_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sStrNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1133 "36str2.nc"
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "36str2.nc", 1133, 1309, "struct sNode");
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value1=sStrNode_initialize((struct sStrNode* )come_increment_ref_count((struct sStrNode *)come_calloc(1, sizeof(struct sStrNode )*(1), "36str2.nc", 1133, 1306, "struct sStrNode* "), "36str2.nc", 1133, 1307),(char* )come_increment_ref_count(value, "36str2.nc", 1133, 1308),sline,info))), "36str2.nc", 1133, 1310);
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    _inf_value1->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "36str2.nc", 1133, 1320);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 1133, 1321));
    come_call_finalizer(sStrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 1133, 1322);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "36str2.nc", 1133, 1323):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "36str2.nc", 1133, 1324):(void*)0);
    return __result_obj__0;
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStrNode_clone"; neo_current_frame = &fr;
    struct sStrNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sStrNode*  result  ;
    char*  __dec_obj127  ;
    char*  __dec_obj128  ;
    memset(&result, 0, sizeof(result));
    # 3 "sStrNode_clone"
    # 5 "sStrNode_clone"
    if(self==(void*)0) {
        # 4 "sStrNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sStrNode_clone"
    result=(struct sStrNode* )come_increment_ref_count((struct sStrNode *)come_calloc(1, sizeof(struct sStrNode )*(1), "sStrNode_clone", 5, 1311, "struct sStrNode* "), "sStrNode_clone", 5, 1312);
    # 7 "sStrNode_clone"
    if(self!=((void*)0)) {
        # 6 "sStrNode_clone"
        result->sline=self->sline;
    }
    # 8 "sStrNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sStrNode_clone"
        __right_value0 = (void*)0;
        __dec_obj127=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sStrNode_clone", 7, 1313, "char* "), "sStrNode_clone", 7, 1315);
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0, "sStrNode_clone", 7, 1314);
    }
    # 9 "sStrNode_clone"
    if(self!=((void*)0)) {
        # 8 "sStrNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sStrNode_clone"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 9 "sStrNode_clone"
        __right_value0 = (void*)0;
        __dec_obj128=result->value,
        result->value=(char* )come_increment_ref_count((char* )come_memdup(self->value, "sStrNode_clone", 9, 1316, "char* "), "sStrNode_clone", 9, 1318);
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0, "sStrNode_clone", 9, 1317);
    }
    # 10 "sStrNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sStrNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sStrNode_clone}", 10, 1319);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_buffer_node(struct buffer*  value  , unsigned long  int  size  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_buffer_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value2;
    struct sBufferNode* _inf_obj_value2;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1138 "36str2.nc"
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "36str2.nc", 1138, 1328, "struct sNode");
    _inf_obj_value2=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value1=sBufferNode_initialize((struct sBufferNode* )come_increment_ref_count((struct sBufferNode *)come_calloc(1, sizeof(struct sBufferNode )*(1), "36str2.nc", 1138, 1325, "struct sBufferNode* "), "36str2.nc", 1138, 1326),(struct buffer* )come_increment_ref_count(value, "36str2.nc", 1138, 1327),size,info))), "36str2.nc", 1138, 1329);
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sBufferNode_finalize;
    _inf_value2->clone=(void*)sBufferNode_clone;
    _inf_value2->compile=(void*)sBufferNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sBufferNode_kind;
    _inf_value2->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)), "36str2.nc", 1138, 1338);
    come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1138, 1339);
    come_call_finalizer(sBufferNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 1138, 1340);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "36str2.nc", 1138, 1341):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "36str2.nc", 1138, 1342):(void*)0);
    return __result_obj__0;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBufferNode_clone"; neo_current_frame = &fr;
    struct sBufferNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sBufferNode*  result  ;
    char*  __dec_obj129  ;
    struct buffer*  __dec_obj130  ;
    memset(&result, 0, sizeof(result));
    # 3 "sBufferNode_clone"
    # 5 "sBufferNode_clone"
    if(self==(void*)0) {
        # 4 "sBufferNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sBufferNode_clone"
    result=(struct sBufferNode* )come_increment_ref_count((struct sBufferNode *)come_calloc(1, sizeof(struct sBufferNode )*(1), "sBufferNode_clone", 5, 1330, "struct sBufferNode* "), "sBufferNode_clone", 5, 1331);
    # 7 "sBufferNode_clone"
    if(self!=((void*)0)) {
        # 6 "sBufferNode_clone"
        result->sline=self->sline;
    }
    # 8 "sBufferNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sBufferNode_clone"
        __right_value0 = (void*)0;
        __dec_obj129=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sBufferNode_clone", 7, 1332, "char* "), "sBufferNode_clone", 7, 1334);
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "sBufferNode_clone", 7, 1333);
    }
    # 9 "sBufferNode_clone"
    if(self!=((void*)0)) {
        # 8 "sBufferNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sBufferNode_clone"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 9 "sBufferNode_clone"
        __right_value0 = (void*)0;
        __dec_obj130=result->value,
        result->value=(struct buffer* )come_increment_ref_count(buffer_clone(self->value), "sBufferNode_clone", 9, 1336);
        come_call_finalizer(buffer_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBufferNode_clone", 9, 1335);
    }
    # 11 "sBufferNode_clone"
    if(self!=((void*)0)) {
        # 10 "sBufferNode_clone"
        result->size=self->size;
    }
    # 11 "sBufferNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sBufferNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBufferNode_clone}", 11, 1337);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_sstring_node(char*  value  , struct list$1sNode$ph* exps, int sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_sstring_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sSStringNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1143 "36str2.nc"
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "36str2.nc", 1143, 1347, "struct sNode");
    _inf_obj_value3=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value1=sSStringNode_initialize((struct sSStringNode* )come_increment_ref_count((struct sSStringNode *)come_calloc(1, sizeof(struct sSStringNode )*(1), "36str2.nc", 1143, 1343, "struct sSStringNode* "), "36str2.nc", 1143, 1344),(char* )come_increment_ref_count(value, "36str2.nc", 1143, 1345),(struct list$1sNode$ph*)come_increment_ref_count(exps, "36str2.nc", 1143, 1346),sline,info))), "36str2.nc", 1143, 1348);
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sSStringNode_finalize;
    _inf_value3->clone=(void*)sSStringNode_clone;
    _inf_value3->compile=(void*)sSStringNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sSStringNode_kind;
    _inf_value3->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)), "36str2.nc", 1143, 1360);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 1143, 1361));
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1143, 1362);
    come_call_finalizer(sSStringNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 1143, 1363);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "36str2.nc", 1143, 1364):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "36str2.nc", 1143, 1365):(void*)0);
    return __result_obj__0;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSStringNode_clone"; neo_current_frame = &fr;
    struct sSStringNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSStringNode*  result  ;
    char*  __dec_obj131  ;
    char*  __dec_obj132  ;
    struct list$1sNode$ph* __dec_obj133;
    memset(&result, 0, sizeof(result));
    # 3 "sSStringNode_clone"
    # 5 "sSStringNode_clone"
    if(self==(void*)0) {
        # 4 "sSStringNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sSStringNode_clone"
    result=(struct sSStringNode* )come_increment_ref_count((struct sSStringNode *)come_calloc(1, sizeof(struct sSStringNode )*(1), "sSStringNode_clone", 5, 1349, "struct sSStringNode* "), "sSStringNode_clone", 5, 1350);
    # 7 "sSStringNode_clone"
    if(self!=((void*)0)) {
        # 6 "sSStringNode_clone"
        result->sline=self->sline;
    }
    # 8 "sSStringNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sSStringNode_clone"
        __right_value0 = (void*)0;
        __dec_obj131=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSStringNode_clone", 7, 1351, "char* "), "sSStringNode_clone", 7, 1353);
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0, "sSStringNode_clone", 7, 1352);
    }
    # 9 "sSStringNode_clone"
    if(self!=((void*)0)) {
        # 8 "sSStringNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sSStringNode_clone"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 9 "sSStringNode_clone"
        __right_value0 = (void*)0;
        __dec_obj132=result->value,
        result->value=(char* )come_increment_ref_count((char* )come_memdup(self->value, "sSStringNode_clone", 9, 1354, "char* "), "sSStringNode_clone", 9, 1356);
        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0, "sSStringNode_clone", 9, 1355);
    }
    # 11 "sSStringNode_clone"
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        # 10 "sSStringNode_clone"
        __right_value0 = (void*)0;
        __dec_obj133=result->exps,
        result->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps), "sSStringNode_clone", 10, 1358);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sSStringNode_clone", 10, 1357);
    }
    # 11 "sSStringNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sSStringNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sSStringNode_clone}", 11, 1359);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_char_node(int value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_char_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value4;
    struct sCharNode* _inf_obj_value4;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1148 "36str2.nc"
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "36str2.nc", 1148, 1368, "struct sNode");
    _inf_obj_value4=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value1=sCharNode_initialize((struct sCharNode* )come_increment_ref_count((struct sCharNode *)come_calloc(1, sizeof(struct sCharNode )*(1), "36str2.nc", 1148, 1366, "struct sCharNode* "), "36str2.nc", 1148, 1367),value,info))), "36str2.nc", 1148, 1369);
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sCharNode_finalize;
    _inf_value4->clone=(void*)sCharNode_clone;
    _inf_value4->compile=(void*)sCharNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sCharNode_kind;
    _inf_value4->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value4)), "36str2.nc", 1148, 1376);
    come_call_finalizer(sCharNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 1148, 1377);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "36str2.nc", 1148, 1378):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "36str2.nc", 1148, 1379):(void*)0);
    return __result_obj__0;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCharNode_clone"; neo_current_frame = &fr;
    struct sCharNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCharNode*  result  ;
    char*  __dec_obj134  ;
    memset(&result, 0, sizeof(result));
    # 3 "sCharNode_clone"
    # 5 "sCharNode_clone"
    if(self==(void*)0) {
        # 4 "sCharNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sCharNode_clone"
    result=(struct sCharNode* )come_increment_ref_count((struct sCharNode *)come_calloc(1, sizeof(struct sCharNode )*(1), "sCharNode_clone", 5, 1370, "struct sCharNode* "), "sCharNode_clone", 5, 1371);
    # 7 "sCharNode_clone"
    if(self!=((void*)0)) {
        # 6 "sCharNode_clone"
        result->sline=self->sline;
    }
    # 8 "sCharNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sCharNode_clone"
        __right_value0 = (void*)0;
        __dec_obj134=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCharNode_clone", 7, 1372, "char* "), "sCharNode_clone", 7, 1374);
        __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0, "sCharNode_clone", 7, 1373);
    }
    # 9 "sCharNode_clone"
    if(self!=((void*)0)) {
        # 8 "sCharNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sCharNode_clone"
    if(self!=((void*)0)) {
        # 9 "sCharNode_clone"
        result->value=self->value;
    }
    # 10 "sCharNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sCharNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCharNode_clone}", 10, 1375);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_wchar_node(int  value  , _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_wchar_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value5;
    struct sWCharNode* _inf_obj_value5;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1153 "36str2.nc"
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "36str2.nc", 1153, 1382, "struct sNode");
    _inf_obj_value5=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value1=sWCharNode_initialize((struct sWCharNode* )come_increment_ref_count((struct sWCharNode *)come_calloc(1, sizeof(struct sWCharNode )*(1), "36str2.nc", 1153, 1380, "struct sWCharNode* "), "36str2.nc", 1153, 1381),value,quote,info))), "36str2.nc", 1153, 1383);
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sWCharNode_finalize;
    _inf_value5->clone=(void*)sWCharNode_clone;
    _inf_value5->compile=(void*)sWCharNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sWCharNode_kind;
    _inf_value5->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value5)), "36str2.nc", 1153, 1390);
    come_call_finalizer(sWCharNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 1153, 1391);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "36str2.nc", 1153, 1392):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "36str2.nc", 1153, 1393):(void*)0);
    return __result_obj__0;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWCharNode_clone"; neo_current_frame = &fr;
    struct sWCharNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sWCharNode*  result  ;
    char*  __dec_obj135  ;
    memset(&result, 0, sizeof(result));
    # 3 "sWCharNode_clone"
    # 5 "sWCharNode_clone"
    if(self==(void*)0) {
        # 4 "sWCharNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sWCharNode_clone"
    result=(struct sWCharNode* )come_increment_ref_count((struct sWCharNode *)come_calloc(1, sizeof(struct sWCharNode )*(1), "sWCharNode_clone", 5, 1384, "struct sWCharNode* "), "sWCharNode_clone", 5, 1385);
    # 7 "sWCharNode_clone"
    if(self!=((void*)0)) {
        # 6 "sWCharNode_clone"
        result->sline=self->sline;
    }
    # 8 "sWCharNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sWCharNode_clone"
        __right_value0 = (void*)0;
        __dec_obj135=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sWCharNode_clone", 7, 1386, "char* "), "sWCharNode_clone", 7, 1388);
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0, "sWCharNode_clone", 7, 1387);
    }
    # 9 "sWCharNode_clone"
    if(self!=((void*)0)) {
        # 8 "sWCharNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sWCharNode_clone"
    if(self!=((void*)0)) {
        # 9 "sWCharNode_clone"
        result->value=self->value;
    }
    # 11 "sWCharNode_clone"
    if(self!=((void*)0)) {
        # 10 "sWCharNode_clone"
        result->quote=self->quote;
    }
    # 11 "sWCharNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sWCharNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sWCharNode_clone}", 11, 1389);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_wstring_node(int*  value  , int sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_wstring_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value6;
    struct sWStringNode* _inf_obj_value6;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1158 "36str2.nc"
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "36str2.nc", 1158, 1397, "struct sNode");
    _inf_obj_value6=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value1=sWStringNode_initialize((struct sWStringNode* )come_increment_ref_count((struct sWStringNode *)come_calloc(1, sizeof(struct sWStringNode )*(1), "36str2.nc", 1158, 1394, "struct sWStringNode* "), "36str2.nc", 1158, 1395),(int* )come_increment_ref_count(value, "36str2.nc", 1158, 1396),sline,info))), "36str2.nc", 1158, 1398);
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sWStringNode_finalize;
    _inf_value6->clone=(void*)sWStringNode_clone;
    _inf_value6->compile=(void*)sWStringNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sNodeBase_terminated;
    _inf_value6->kind=(void*)sWStringNode_kind;
    _inf_value6->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)), "36str2.nc", 1158, 1408);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 1158, 1409));
    come_call_finalizer(sWStringNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 1158, 1410);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "36str2.nc", 1158, 1411):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "36str2.nc", 1158, 1412):(void*)0);
    return __result_obj__0;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWStringNode_clone"; neo_current_frame = &fr;
    struct sWStringNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sWStringNode*  result  ;
    char*  __dec_obj136  ;
    int*  __dec_obj137  ;
    memset(&result, 0, sizeof(result));
    # 3 "sWStringNode_clone"
    # 5 "sWStringNode_clone"
    if(self==(void*)0) {
        # 4 "sWStringNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sWStringNode_clone"
    result=(struct sWStringNode* )come_increment_ref_count((struct sWStringNode *)come_calloc(1, sizeof(struct sWStringNode )*(1), "sWStringNode_clone", 5, 1399, "struct sWStringNode* "), "sWStringNode_clone", 5, 1400);
    # 7 "sWStringNode_clone"
    if(self!=((void*)0)) {
        # 6 "sWStringNode_clone"
        result->sline=self->sline;
    }
    # 8 "sWStringNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sWStringNode_clone"
        __right_value0 = (void*)0;
        __dec_obj136=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sWStringNode_clone", 7, 1401, "char* "), "sWStringNode_clone", 7, 1403);
        __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0, (void*)0, "sWStringNode_clone", 7, 1402);
    }
    # 9 "sWStringNode_clone"
    if(self!=((void*)0)) {
        # 8 "sWStringNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sWStringNode_clone"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 9 "sWStringNode_clone"
        __right_value0 = (void*)0;
        __dec_obj137=result->value,
        result->value=(int* )come_increment_ref_count((int* )come_memdup(self->value, "sWStringNode_clone", 9, 1404, "int* "), "sWStringNode_clone", 9, 1406);
        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0, "sWStringNode_clone", 9, 1405);
    }
    # 10 "sWStringNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sWStringNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sWStringNode_clone}", 10, 1407);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_prefixed_char_node(int value, char*  prefix  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_prefixed_char_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value7;
    struct sPrefixedCharNode* _inf_obj_value7;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1163 "36str2.nc"
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "36str2.nc", 1163, 1416, "struct sNode");
    _inf_obj_value7=(struct sPrefixedCharNode*)come_increment_ref_count(((struct sPrefixedCharNode*)(__right_value1=sPrefixedCharNode_initialize((struct sPrefixedCharNode* )come_increment_ref_count((struct sPrefixedCharNode *)come_calloc(1, sizeof(struct sPrefixedCharNode )*(1), "36str2.nc", 1163, 1413, "struct sPrefixedCharNode* "), "36str2.nc", 1163, 1414),value,(char* )come_increment_ref_count(prefix, "36str2.nc", 1163, 1415),info))), "36str2.nc", 1163, 1417);
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sPrefixedCharNode_finalize;
    _inf_value7->clone=(void*)sPrefixedCharNode_clone;
    _inf_value7->compile=(void*)sPrefixedCharNode_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sNodeBase_terminated;
    _inf_value7->kind=(void*)sPrefixedCharNode_kind;
    _inf_value7->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value7)), "36str2.nc", 1163, 1427);
    (prefix = come_decrement_ref_count(prefix, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 1163, 1428));
    come_call_finalizer(sPrefixedCharNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 1163, 1429);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "36str2.nc", 1163, 1430):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "36str2.nc", 1163, 1431):(void*)0);
    return __result_obj__0;
}

static struct sPrefixedCharNode* sPrefixedCharNode_clone(struct sPrefixedCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedCharNode_clone"; neo_current_frame = &fr;
    struct sPrefixedCharNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sPrefixedCharNode*  result  ;
    char*  __dec_obj138  ;
    char*  __dec_obj139  ;
    memset(&result, 0, sizeof(result));
    # 3 "sPrefixedCharNode_clone"
    # 5 "sPrefixedCharNode_clone"
    if(self==(void*)0) {
        # 4 "sPrefixedCharNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sPrefixedCharNode_clone"
    result=(struct sPrefixedCharNode* )come_increment_ref_count((struct sPrefixedCharNode *)come_calloc(1, sizeof(struct sPrefixedCharNode )*(1), "sPrefixedCharNode_clone", 5, 1418, "struct sPrefixedCharNode* "), "sPrefixedCharNode_clone", 5, 1419);
    # 7 "sPrefixedCharNode_clone"
    if(self!=((void*)0)) {
        # 6 "sPrefixedCharNode_clone"
        result->sline=self->sline;
    }
    # 8 "sPrefixedCharNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sPrefixedCharNode_clone"
        __right_value0 = (void*)0;
        __dec_obj138=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sPrefixedCharNode_clone", 7, 1420, "char* "), "sPrefixedCharNode_clone", 7, 1422);
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0, "sPrefixedCharNode_clone", 7, 1421);
    }
    # 9 "sPrefixedCharNode_clone"
    if(self!=((void*)0)) {
        # 8 "sPrefixedCharNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sPrefixedCharNode_clone"
    if(self!=((void*)0)) {
        # 9 "sPrefixedCharNode_clone"
        result->value=self->value;
    }
    # 11 "sPrefixedCharNode_clone"
    if(self!=((void*)0)&&self->prefix!=((void*)0)) {
        # 10 "sPrefixedCharNode_clone"
        __right_value0 = (void*)0;
        __dec_obj139=result->prefix,
        result->prefix=(char* )come_increment_ref_count((char* )come_memdup(self->prefix, "sPrefixedCharNode_clone", 10, 1423, "char* "), "sPrefixedCharNode_clone", 10, 1425);
        __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0, (void*)0, "sPrefixedCharNode_clone", 10, 1424);
    }
    # 11 "sPrefixedCharNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sPrefixedCharNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sPrefixedCharNode_clone}", 11, 1426);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_prefixed_string_node(char*  value  , char*  prefix  , int sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_prefixed_string_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value8;
    struct sPrefixedStringNode* _inf_obj_value8;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1168 "36str2.nc"
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "36str2.nc", 1168, 1436, "struct sNode");
    _inf_obj_value8=(struct sPrefixedStringNode*)come_increment_ref_count(((struct sPrefixedStringNode*)(__right_value1=sPrefixedStringNode_initialize((struct sPrefixedStringNode* )come_increment_ref_count((struct sPrefixedStringNode *)come_calloc(1, sizeof(struct sPrefixedStringNode )*(1), "36str2.nc", 1168, 1432, "struct sPrefixedStringNode* "), "36str2.nc", 1168, 1433),(char* )come_increment_ref_count(value, "36str2.nc", 1168, 1434),(char* )come_increment_ref_count(prefix, "36str2.nc", 1168, 1435),sline,info))), "36str2.nc", 1168, 1437);
    _inf_value8->_protocol_obj=_inf_obj_value8;
    _inf_value8->finalize=(void*)sPrefixedStringNode_finalize;
    _inf_value8->clone=(void*)sPrefixedStringNode_clone;
    _inf_value8->compile=(void*)sPrefixedStringNode_compile;
    _inf_value8->sline=(void*)sNodeBase_sline;
    _inf_value8->sline_real=(void*)sNodeBase_sline_real;
    _inf_value8->sname=(void*)sNodeBase_sname;
    _inf_value8->terminated=(void*)sNodeBase_terminated;
    _inf_value8->kind=(void*)sPrefixedStringNode_kind;
    _inf_value8->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)), "36str2.nc", 1168, 1450);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 1168, 1451));
    (prefix = come_decrement_ref_count(prefix, (void*)0, (void*)0, 0, 0, (void*)0, "36str2.nc", 1168, 1452));
    come_call_finalizer(sPrefixedStringNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 1168, 1453);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "36str2.nc", 1168, 1454):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "36str2.nc", 1168, 1455):(void*)0);
    return __result_obj__0;
}

static struct sPrefixedStringNode* sPrefixedStringNode_clone(struct sPrefixedStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPrefixedStringNode_clone"; neo_current_frame = &fr;
    struct sPrefixedStringNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sPrefixedStringNode*  result  ;
    char*  __dec_obj140  ;
    char*  __dec_obj141  ;
    char*  __dec_obj142  ;
    memset(&result, 0, sizeof(result));
    # 3 "sPrefixedStringNode_clone"
    # 5 "sPrefixedStringNode_clone"
    if(self==(void*)0) {
        # 4 "sPrefixedStringNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sPrefixedStringNode_clone"
    result=(struct sPrefixedStringNode* )come_increment_ref_count((struct sPrefixedStringNode *)come_calloc(1, sizeof(struct sPrefixedStringNode )*(1), "sPrefixedStringNode_clone", 5, 1438, "struct sPrefixedStringNode* "), "sPrefixedStringNode_clone", 5, 1439);
    # 7 "sPrefixedStringNode_clone"
    if(self!=((void*)0)) {
        # 6 "sPrefixedStringNode_clone"
        result->sline=self->sline;
    }
    # 8 "sPrefixedStringNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sPrefixedStringNode_clone"
        __right_value0 = (void*)0;
        __dec_obj140=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sPrefixedStringNode_clone", 7, 1440, "char* "), "sPrefixedStringNode_clone", 7, 1442);
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0, "sPrefixedStringNode_clone", 7, 1441);
    }
    # 9 "sPrefixedStringNode_clone"
    if(self!=((void*)0)) {
        # 8 "sPrefixedStringNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sPrefixedStringNode_clone"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 9 "sPrefixedStringNode_clone"
        __right_value0 = (void*)0;
        __dec_obj141=result->value,
        result->value=(char* )come_increment_ref_count((char* )come_memdup(self->value, "sPrefixedStringNode_clone", 9, 1443, "char* "), "sPrefixedStringNode_clone", 9, 1445);
        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0, "sPrefixedStringNode_clone", 9, 1444);
    }
    # 11 "sPrefixedStringNode_clone"
    if(self!=((void*)0)&&self->prefix!=((void*)0)) {
        # 10 "sPrefixedStringNode_clone"
        __right_value0 = (void*)0;
        __dec_obj142=result->prefix,
        result->prefix=(char* )come_increment_ref_count((char* )come_memdup(self->prefix, "sPrefixedStringNode_clone", 10, 1446, "char* "), "sPrefixedStringNode_clone", 10, 1448);
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0, "sPrefixedStringNode_clone", 10, 1447);
    }
    # 11 "sPrefixedStringNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sPrefixedStringNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sPrefixedStringNode_clone}", 11, 1449);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_list_node(struct list$1sNode$ph* list_elements, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_list_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value9;
    struct sListNode* _inf_obj_value9;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1173 "36str2.nc"
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "36str2.nc", 1173, 1459, "struct sNode");
    _inf_obj_value9=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value1=sListNode_initialize((struct sListNode* )come_increment_ref_count((struct sListNode *)come_calloc(1, sizeof(struct sListNode )*(1), "36str2.nc", 1173, 1456, "struct sListNode* "), "36str2.nc", 1173, 1457),(struct list$1sNode$ph*)come_increment_ref_count(list_elements, "36str2.nc", 1173, 1458),info))), "36str2.nc", 1173, 1460);
    _inf_value9->_protocol_obj=_inf_obj_value9;
    _inf_value9->finalize=(void*)sListNode_finalize;
    _inf_value9->clone=(void*)sListNode_clone;
    _inf_value9->compile=(void*)sListNode_compile;
    _inf_value9->sline=(void*)sNodeBase_sline;
    _inf_value9->sline_real=(void*)sNodeBase_sline_real;
    _inf_value9->sname=(void*)sNodeBase_sname;
    _inf_value9->terminated=(void*)sNodeBase_terminated;
    _inf_value9->kind=(void*)sListNode_kind;
    _inf_value9->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)), "36str2.nc", 1173, 1469);
    come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1173, 1470);
    come_call_finalizer(sListNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 1173, 1471);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "36str2.nc", 1173, 1472):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "36str2.nc", 1173, 1473):(void*)0);
    return __result_obj__0;
}

static struct sListNode* sListNode_clone(struct sListNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sListNode_clone"; neo_current_frame = &fr;
    struct sListNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sListNode*  result  ;
    char*  __dec_obj143  ;
    struct list$1sNode$ph* __dec_obj144;
    memset(&result, 0, sizeof(result));
    # 3 "sListNode_clone"
    # 5 "sListNode_clone"
    if(self==(void*)0) {
        # 4 "sListNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sListNode_clone"
    result=(struct sListNode* )come_increment_ref_count((struct sListNode *)come_calloc(1, sizeof(struct sListNode )*(1), "sListNode_clone", 5, 1461, "struct sListNode* "), "sListNode_clone", 5, 1462);
    # 7 "sListNode_clone"
    if(self!=((void*)0)) {
        # 6 "sListNode_clone"
        result->sline=self->sline;
    }
    # 8 "sListNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sListNode_clone"
        __right_value0 = (void*)0;
        __dec_obj143=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sListNode_clone", 7, 1463, "char* "), "sListNode_clone", 7, 1465);
        __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0, (void*)0, "sListNode_clone", 7, 1464);
    }
    # 9 "sListNode_clone"
    if(self!=((void*)0)) {
        # 8 "sListNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sListNode_clone"
    if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
        # 9 "sListNode_clone"
        __right_value0 = (void*)0;
        __dec_obj144=result->list_elements,
        result->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->list_elements), "sListNode_clone", 9, 1467);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj144,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sListNode_clone", 9, 1466);
    }
    # 10 "sListNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sListNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sListNode_clone}", 10, 1468);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_vector_node(struct list$1sNode$ph* list_elements, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_vector_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value10;
    struct sVectorNode* _inf_obj_value10;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1178 "36str2.nc"
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "36str2.nc", 1178, 1477, "struct sNode");
    _inf_obj_value10=(struct sVectorNode*)come_increment_ref_count(((struct sVectorNode*)(__right_value1=sVectorNode_initialize((struct sVectorNode* )come_increment_ref_count((struct sVectorNode *)come_calloc(1, sizeof(struct sVectorNode )*(1), "36str2.nc", 1178, 1474, "struct sVectorNode* "), "36str2.nc", 1178, 1475),(struct list$1sNode$ph*)come_increment_ref_count(list_elements, "36str2.nc", 1178, 1476),info))), "36str2.nc", 1178, 1478);
    _inf_value10->_protocol_obj=_inf_obj_value10;
    _inf_value10->finalize=(void*)sVectorNode_finalize;
    _inf_value10->clone=(void*)sVectorNode_clone;
    _inf_value10->compile=(void*)sVectorNode_compile;
    _inf_value10->sline=(void*)sNodeBase_sline;
    _inf_value10->sline_real=(void*)sNodeBase_sline_real;
    _inf_value10->sname=(void*)sNodeBase_sname;
    _inf_value10->terminated=(void*)sNodeBase_terminated;
    _inf_value10->kind=(void*)sVectorNode_kind;
    _inf_value10->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)), "36str2.nc", 1178, 1487);
    come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1178, 1488);
    come_call_finalizer(sVectorNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 1178, 1489);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "36str2.nc", 1178, 1490):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "36str2.nc", 1178, 1491):(void*)0);
    return __result_obj__0;
}

static struct sVectorNode* sVectorNode_clone(struct sVectorNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVectorNode_clone"; neo_current_frame = &fr;
    struct sVectorNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sVectorNode*  result  ;
    char*  __dec_obj145  ;
    struct list$1sNode$ph* __dec_obj146;
    memset(&result, 0, sizeof(result));
    # 3 "sVectorNode_clone"
    # 5 "sVectorNode_clone"
    if(self==(void*)0) {
        # 4 "sVectorNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sVectorNode_clone"
    result=(struct sVectorNode* )come_increment_ref_count((struct sVectorNode *)come_calloc(1, sizeof(struct sVectorNode )*(1), "sVectorNode_clone", 5, 1479, "struct sVectorNode* "), "sVectorNode_clone", 5, 1480);
    # 7 "sVectorNode_clone"
    if(self!=((void*)0)) {
        # 6 "sVectorNode_clone"
        result->sline=self->sline;
    }
    # 8 "sVectorNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sVectorNode_clone"
        __right_value0 = (void*)0;
        __dec_obj145=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sVectorNode_clone", 7, 1481, "char* "), "sVectorNode_clone", 7, 1483);
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0, (void*)0, "sVectorNode_clone", 7, 1482);
    }
    # 9 "sVectorNode_clone"
    if(self!=((void*)0)) {
        # 8 "sVectorNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sVectorNode_clone"
    if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
        # 9 "sVectorNode_clone"
        __right_value0 = (void*)0;
        __dec_obj146=result->list_elements,
        result->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->list_elements), "sVectorNode_clone", 9, 1485);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj146,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVectorNode_clone", 9, 1484);
    }
    # 10 "sVectorNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sVectorNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVectorNode_clone}", 10, 1486);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_tuple_node(struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_tuple_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value11;
    struct sTupleNode* _inf_obj_value11;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1183 "36str2.nc"
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "36str2.nc", 1183, 1495, "struct sNode");
    _inf_obj_value11=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value1=sTupleNode_initialize((struct sTupleNode* )come_increment_ref_count((struct sTupleNode *)come_calloc(1, sizeof(struct sTupleNode )*(1), "36str2.nc", 1183, 1492, "struct sTupleNode* "), "36str2.nc", 1183, 1493),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements, "36str2.nc", 1183, 1494),info))), "36str2.nc", 1183, 1496);
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sTupleNode_finalize;
    _inf_value11->clone=(void*)sTupleNode_clone;
    _inf_value11->compile=(void*)sTupleNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sline_real=(void*)sNodeBase_sline_real;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sNodeBase_terminated;
    _inf_value11->kind=(void*)sTupleNode_kind;
    _inf_value11->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)), "36str2.nc", 1183, 1529);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1183, 1530);
    come_call_finalizer(sTupleNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 1183, 1531);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "36str2.nc", 1183, 1532):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "36str2.nc", 1183, 1533):(void*)0);
    return __result_obj__0;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTupleNode_clone"; neo_current_frame = &fr;
    struct sTupleNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sTupleNode*  result  ;
    char*  __dec_obj147  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj150;
    memset(&result, 0, sizeof(result));
    # 3 "sTupleNode_clone"
    # 5 "sTupleNode_clone"
    if(self==(void*)0) {
        # 4 "sTupleNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sTupleNode_clone"
    result=(struct sTupleNode* )come_increment_ref_count((struct sTupleNode *)come_calloc(1, sizeof(struct sTupleNode )*(1), "sTupleNode_clone", 5, 1497, "struct sTupleNode* "), "sTupleNode_clone", 5, 1498);
    # 7 "sTupleNode_clone"
    if(self!=((void*)0)) {
        # 6 "sTupleNode_clone"
        result->sline=self->sline;
    }
    # 8 "sTupleNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sTupleNode_clone"
        __right_value0 = (void*)0;
        __dec_obj147=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sTupleNode_clone", 7, 1499, "char* "), "sTupleNode_clone", 7, 1501);
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0, "sTupleNode_clone", 7, 1500);
    }
    # 9 "sTupleNode_clone"
    if(self!=((void*)0)) {
        # 8 "sTupleNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sTupleNode_clone"
    if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        # 9 "sTupleNode_clone"
        __right_value0 = (void*)0;
        __dec_obj150=result->tuple_elements,
        result->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->tuple_elements), "sTupleNode_clone", 9, 1527);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj150,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sTupleNode_clone", 9, 1526);
    }
    # 10 "sTupleNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sTupleNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sTupleNode_clone}", 10, 1528);
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
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    # 1513 "./neo-c.h"
    if(self==((void*)0)) {
        # 1511 "./neo-c.h"
                __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 1502);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 1503);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1513, 1504, "struct list$1tuple2$2char$phsNode$ph$ph*"), "./neo-c.h", 1513, 1505)), "./neo-c.h", 1513, 1506);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item), "./neo-c.h", 1518, 1521));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item), "./neo-c.h", 1521, 1522));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 1523);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 1524);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 1525);
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_clone"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsNode$ph* result;
    char*  __dec_obj148  ;
    struct sNode* __dec_obj149;
    memset(&result, 0, sizeof(result));
    # 3 "tuple2$2char$phsNode$ph_clone"
    # 5 "tuple2$2char$phsNode$ph_clone"
    if(self==(void*)0) {
        # 4 "tuple2$2char$phsNode$ph_clone"
                __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count((void*)0, "tuple2$2char$phsNode$ph_clone", 4, 1507);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 4, 1508);
        return __result_obj__0;
    }
    # 5 "tuple2$2char$phsNode$ph_clone"
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 5, 1509, "struct tuple2$2char$phsNode$ph*"), "tuple2$2char$phsNode$ph_clone", 5, 1510);
    # 7 "tuple2$2char$phsNode$ph_clone"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 6 "tuple2$2char$phsNode$ph_clone"
        __right_value0 = (void*)0;
        __dec_obj148=result->v1,
        result->v1=(char* )come_increment_ref_count((char* )come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 6, 1511, "char* "), "tuple2$2char$phsNode$ph_clone", 6, 1513);
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0, "tuple2$2char$phsNode$ph_clone", 6, 1512);
    }
    # 8 "tuple2$2char$phsNode$ph_clone"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 7 "tuple2$2char$phsNode$ph_clone"
        __right_value0 = (void*)0;
        __dec_obj149=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2), "tuple2$2char$phsNode$ph_clone", 7, 1515);
        (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0, (void*)0, "tuple2$2char$phsNode$ph_clone", 7, 1514) :0);
    }
    # 8 "tuple2$2char$phsNode$ph_clone"
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result, "tuple2$2char$phsNode$ph_clone", 8, 1516);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 8, 1519);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 8, 1520);
    return __result_obj__0;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_finalize"; neo_current_frame = &fr;
    # 1 "tuple2$2char$phsNode$ph_finalize"
    # 3 "tuple2$2char$phsNode$ph_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple2$2char$phsNode$ph_finalize"
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph_finalize", 2, 1517));
    }
    # 4 "tuple2$2char$phsNode$ph_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple2$2char$phsNode$ph_finalize"
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph_finalize", 3, 1518):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNode* create_map_node(struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_map_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value12;
    struct sMapNode* _inf_obj_value12;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1188 "36str2.nc"
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "36str2.nc", 1188, 1538, "struct sNode");
    _inf_obj_value12=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1=sMapNode_initialize((struct sMapNode* )come_increment_ref_count((struct sMapNode *)come_calloc(1, sizeof(struct sMapNode )*(1), "36str2.nc", 1188, 1534, "struct sMapNode* "), "36str2.nc", 1188, 1535),(struct list$1sNode$ph*)come_increment_ref_count(map_key_elements, "36str2.nc", 1188, 1536),(struct list$1sNode$ph*)come_increment_ref_count(map_elements, "36str2.nc", 1188, 1537),info))), "36str2.nc", 1188, 1539);
    _inf_value12->_protocol_obj=_inf_obj_value12;
    _inf_value12->finalize=(void*)sMapNode_finalize;
    _inf_value12->clone=(void*)sMapNode_clone;
    _inf_value12->compile=(void*)sMapNode_compile;
    _inf_value12->sline=(void*)sNodeBase_sline;
    _inf_value12->sline_real=(void*)sNodeBase_sline_real;
    _inf_value12->sname=(void*)sNodeBase_sname;
    _inf_value12->terminated=(void*)sNodeBase_terminated;
    _inf_value12->kind=(void*)sMapNode_kind;
    _inf_value12->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)), "36str2.nc", 1188, 1550);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1188, 1551);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "36str2.nc}", 1188, 1552);
    come_call_finalizer(sMapNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "36str2.nc}", 1188, 1553);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "36str2.nc", 1188, 1554):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "36str2.nc", 1188, 1555):(void*)0);
    return __result_obj__0;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMapNode_clone"; neo_current_frame = &fr;
    struct sMapNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sMapNode*  result  ;
    char*  __dec_obj151  ;
    struct list$1sNode$ph* __dec_obj152;
    struct list$1sNode$ph* __dec_obj153;
    memset(&result, 0, sizeof(result));
    # 3 "sMapNode_clone"
    # 5 "sMapNode_clone"
    if(self==(void*)0) {
        # 4 "sMapNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sMapNode_clone"
    result=(struct sMapNode* )come_increment_ref_count((struct sMapNode *)come_calloc(1, sizeof(struct sMapNode )*(1), "sMapNode_clone", 5, 1540, "struct sMapNode* "), "sMapNode_clone", 5, 1541);
    # 7 "sMapNode_clone"
    if(self!=((void*)0)) {
        # 6 "sMapNode_clone"
        result->sline=self->sline;
    }
    # 8 "sMapNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sMapNode_clone"
        __right_value0 = (void*)0;
        __dec_obj151=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sMapNode_clone", 7, 1542, "char* "), "sMapNode_clone", 7, 1544);
        __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0, "sMapNode_clone", 7, 1543);
    }
    # 9 "sMapNode_clone"
    if(self!=((void*)0)) {
        # 8 "sMapNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sMapNode_clone"
    if(self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        # 9 "sMapNode_clone"
        __right_value0 = (void*)0;
        __dec_obj152=result->map_key_elements,
        result->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->map_key_elements), "sMapNode_clone", 9, 1546);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj152,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sMapNode_clone", 9, 1545);
    }
    # 11 "sMapNode_clone"
    if(self!=((void*)0)&&self->map_elements!=((void*)0)) {
        # 10 "sMapNode_clone"
        __right_value0 = (void*)0;
        __dec_obj153=result->map_elements,
        result->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->map_elements), "sMapNode_clone", 10, 1548);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj153,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sMapNode_clone", 10, 1547);
    }
    # 11 "sMapNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sMapNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sMapNode_clone}", 11, 1549);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

