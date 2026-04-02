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

struct sStoreNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  name  ;
    _Bool alloc;
    struct sType*  type  ;
    struct sNode* right_value;
    struct list$1char$ph* multiple_assign;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare;
    char*  attribute  ;
    _Bool iter_;
};

struct sNewChannel
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sWriteChannelNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
    struct sNode* right_value;
};

struct sReadChannelNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sLoadNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  name  ;
};

struct sFunLoadNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  name  ;
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
struct sNode* parse_array_initializer(struct sInfo*  info  );
struct sNode* parse_struct_initializer(struct sInfo*  info  );
struct sNode* parse_global_variable(struct sInfo*  info  );
struct sNode* load_var(char*  name  , struct sInfo*  info  );
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char*  name  , struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType*  type  , _Bool alloc, struct sNode* right_value, struct sInfo*  info  , char*  attribute  , _Bool iter_);
char*  sStoreNode_kind(struct sStoreNode* self);
_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo*  info  );
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
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self);
static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self);
static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sVar*  map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  default_value  , _Bool by_pointer);
static void sVar_finalize(struct sVar*  self  );
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_remove(struct map$2char$phsVar$ph* self, char*  key  , _Bool by_pointer);
static void map$2char$phsVar$ph_remove_ordered_entry(struct map$2char$phsVar$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phsVar$ph_key_position(struct map$2char$phsVar$ph* self, char*  key  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void CVALUE_finalize(struct CVALUE*  self  );
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static void sFun_finalize(struct sFun*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sBlock_finalize(struct sBlock*  self  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static int list$1tuple3$3sType$phchar$phsNode$ph$ph_length(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self);
struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo*  info  );
char*  sNewChannel_kind(struct sNewChannel* self);
_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo*  info  );
static void sNewChannel_finalize(struct sNewChannel* self);
struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo*  info  );
char*  sWriteChannelNode_kind(struct sWriteChannelNode* self);
_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo*  info  );
static void sWriteChannelNode_finalize(struct sWriteChannelNode* self);
struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo*  info  );
char*  sReadChannelNode_kind(struct sReadChannelNode* self);
_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo*  info  );
static void sReadChannelNode_finalize(struct sReadChannelNode* self);
struct sNode* store_var(char*  name  , struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType*  type  , _Bool alloc, struct sNode* right_value, struct sInfo*  info  , _Bool iter_);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char*  name  , struct sInfo*  info  );
char*  sLoadNode_kind(struct sLoadNode* self);
_Bool sLoadNode_terminated(struct sLoadNode* self);
_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo*  info  );
static void sLoadNode_finalize(struct sLoadNode* self);
static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
struct sNode* create_load_var(const char* var_name, struct sInfo*  info  );
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char*  name  , struct sInfo*  info  );
char*  sFunLoadNode_kind(struct sFunLoadNode* self);
_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo*  info  );
static void sFunLoadNode_finalize(struct sFunLoadNode* self);
void add_variable_to_table(char* name, struct sType*  type  , struct sInfo*  info  , _Bool function_param, _Bool comma, _Bool to_function_table);
static struct sVar*  list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar*  list$1sVar$ph_next(struct list$1sVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  item  , _Bool by_pointer);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar*  item  );
void add_variable_to_global_table(char* name, struct sType*  type  , struct sInfo*  info  );
void add_variable_to_global_table_with_int_value(char* name, struct sType*  type  , char* c_value, struct sInfo*  info  );
static void add_defining_class_field_if_missing(char*  name  , struct sType*  type  , struct sInfo*  info  );
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char*  v1  , struct sType*  v2  );
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo*  info  );
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType*  v1  , char*  v2  , struct sNode* v3);
struct sNode* expression_node_v95(struct sInfo*  info  );
static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo*  info  );
static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self);
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char*  name  , struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType*  type  , _Bool alloc, struct sNode* right_value, struct sInfo*  info  , char*  attribute  , _Bool iter_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj1  ;
    struct sType*  __dec_obj36  ;
    struct sNode* __dec_obj37;
    struct list$1char$ph* __dec_obj38;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj45;
    char*  __dec_obj46  ;
    struct sStoreNode* __result_obj__0;
    # 7 "37var2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sStoreNode*)come_increment_ref_count(self, "37var2.nc", 7, 1),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 7, 3);
    # 9 "37var2.nc"
    __right_value0 = (void*)0;
    __dec_obj1=self->name,
    self->name=(char* )come_increment_ref_count(__builtin_string(name,"37var2.nc",9), "37var2.nc", 9, 5);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 9, 4);
    # 10 "37var2.nc"
    self->alloc=alloc;
    # 11 "37var2.nc"
    __right_value0 = (void*)0;
    __dec_obj36=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "37var2.nc", 11, 212);
    come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 11, 211);
    # 12 "37var2.nc"
    __right_value0 = (void*)0;
    __dec_obj37=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(right_value), "37var2.nc", 12, 214);
    (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0, (void*)0, "37var2.nc", 12, 213) :0);
    # 13 "37var2.nc"
    __right_value0 = (void*)0;
    __dec_obj38=self->multiple_assign,
    self->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(multiple_assign), "37var2.nc", 13, 216);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 13, 215);
    # 14 "37var2.nc"
    __right_value0 = (void*)0;
    __dec_obj45=self->multiple_declare,
    self->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(multiple_declare), "37var2.nc", 4, 268);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 4, 267);
    # 15 "37var2.nc"
    __dec_obj46=self->attribute,
    self->attribute=(char* )come_increment_ref_count(attribute, "37var2.nc", 15, 270);
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 15, 269);
    # 16 "37var2.nc"
    self->iter_=iter_;
    # 19 "37var2.nc"
        __result_obj__0 = (struct sStoreNode*)come_increment_ref_count(self, "37var2.nc", 19, 271);
    come_call_finalizer(sStoreNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "37var2.nc}", 19, 279);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 19, 280));
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 19, 281));
    neo_current_frame = fr.prev;
    come_call_finalizer(sStoreNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "37var2.nc}", 19, 282);
    return __result_obj__0;
}

char*  sStoreNode_kind(struct sStoreNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 21 "37var2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sStoreNode","37var2.nc",21))), "37var2.nc", 21, 283);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 21, 284));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "37var2.nc", 21, 285));
    return __result_obj__0;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sVar*  var_  ;
    struct sType*  type_  ;
    struct sType*  type  ;
    struct buffer*  buf  ;
    int n;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* _o2_saved_3;
    struct tuple3$3sType$phchar$phsNode$ph* it;
    struct tuple3$3sType$phchar$phsNode$ph* multiple_assign_var1
;    struct sType*  type_18  =0;
    char*  var_name  =0;
    struct sNode* right_value=0;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    _Bool __result_obj__0;
    struct sType*  left_type  ;
    _Bool Value;
    struct CVALUE*  come_value  ;
    char*  var_name2  ;
    void* __right_value2 = (void*)0;
    _Bool _conditional_value_X0;
    char*  var_name2_19  ;
    struct CVALUE*  come_value_20  ;
    char*  __dec_obj47  ;
    struct sType*  __dec_obj48  ;
    struct buffer*  buf_23  ;
    _Bool Value_24;
    struct CVALUE*  right_value_25  ;
    struct sType*  right_type  ;
    struct sType*  __dec_obj52  ;
    struct sType*  __dec_obj53  ;
    int i;
    struct list$1char$ph* _o2_saved_4;
    char*  it_27  ;
    struct sVar*  var__29  ;
    struct sType*  right_type2  ;
    char*  multiple_var_name  ;
    char*  __dec_obj54  ;
    struct list$1char$ph* _o2_saved_5;
    char*  it_32  ;
    struct sType*  right_type2_33  ;
    struct sVar*  var__34  ;
    struct sType*  left_type_35  ;
    struct CVALUE*  right_value2  ;
    char*  __dec_obj55  ;
    struct sType*  __dec_obj56  ;
    struct CVALUE*  come_value_36  ;
    char*  __dec_obj57  ;
    char*  __dec_obj58  ;
    struct sType*  __dec_obj59  ;
    _Bool _conditional_value_X1;
    struct CVALUE*  come_value_37  ;
    char*  __dec_obj60  ;
    struct sVar*  var__40  ;
    struct sType*  type__41  ;
    struct sType*  type_42  ;
    struct sType*  left_type_43  ;
    _Bool _conditional_value_X2;
    _Bool _conditional_value_X3;
    _Bool _conditional_value_X4;
    struct CVALUE*  come_value_44  ;
    char*  __dec_obj64  ;
    struct sType*  __dec_obj65  ;
    struct sVar*  var__45  ;
    struct sVar*  old_var_  ;
    struct sType*  type__46  ;
    struct sType*  type_47  ;
    _Bool Value_48;
    _Bool array_initializer;
    _Bool string_initializer;
    _Bool new_channel;
    struct CVALUE*  right_value_49  ;
    struct sType*  right_type_50  ;
    struct sType*  type__51  ;
    struct sType*  type_52  ;
    struct sType*  __dec_obj66  ;
    struct sType*  left_type_53  ;
    struct sVar*  var__54  ;
    struct CVALUE*  come_value_55  ;
    char*  __dec_obj67  ;
    struct sType*  __dec_obj68  ;
    _Bool _conditional_value_X5;
    struct CVALUE*  come_value_56  ;
    char*  __dec_obj69  ;
    struct sType*  __dec_obj70  ;
    struct sType*  type__57  ;
    struct sType*  type_58  ;
    struct CVALUE*  come_value_59  ;
    char*  __dec_obj71  ;
    struct sType*  __dec_obj72  ;
    _Bool Value_60;
    _Bool new_channel_61;
    struct CVALUE*  right_value_62  ;
    struct sType*  right_type_63  ;
    struct sClass*  current_stack_frame_struct  ;
    _Bool _conditional_value_X6;
    struct sVar*  parent_var  ;
    struct sType*  left_type_64  ;
    char*  c_value  ;
    char*  c_value_65  ;
    struct CVALUE*  come_value_66  ;
    char*  __dec_obj73  ;
    struct sType*  __dec_obj74  ;
    struct sVar*  var__67  ;
    struct CVALUE*  come_value_68  ;
    char*  __dec_obj75  ;
    struct sType*  __dec_obj76  ;
    struct sType*  __dec_obj77  ;
    struct sType*  left_type_69  ;
    struct CVALUE*  come_value_70  ;
    char*  __dec_obj78  ;
    struct sType*  __dec_obj79  ;
    struct CVALUE*  come_value_71  ;
    char*  __dec_obj80  ;
    struct sType*  __dec_obj81  ;
    memset(&right_type, 0, sizeof(right_type));
    # 549 "37var2.nc"
    if(self->multiple_declare) {
        # 27 "37var2.nc"
        var_=((struct sVar* )(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char* )(__right_value0=__builtin_string(self->name,"37var2.nc",27))),((void*)0),(_Bool)0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 27, 305));
        # 38 "37var2.nc"
        if(var_) {
            # 35 "37var2.nc"
            if(var_->mType->mHeap) {
                # 33 "37var2.nc"
                if(!var_->no_output_come_code) {
                    # 31 "37var2.nc"
                    __right_value0 = (void*)0;
                    free_object(((struct sType* )(__right_value0=sType_clone(var_->mType))),var_->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 31, 306);
                }
            }
            # 35 "37var2.nc"
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_remove(info->lv_table->mVars,(char* )come_increment_ref_count(__builtin_string(self->name,"37var2.nc",35), "37var2.nc", 35, 315),(_Bool)0);
        }
        # 43 "37var2.nc"
        if(self->type==((void*)0)) {
            # 39 "37var2.nc"
            err_msg(info,"Require concrete variable type(%s)",self->name);
            # 40 "37var2.nc"
                        neo_current_frame = fr.prev;
            return (_Bool)1;
        }
        # 43 "37var2.nc"
        __right_value0 = (void*)0;
        type_=(struct sType* )come_increment_ref_count(solve_generics(self->type,info->generics_type,info), "37var2.nc", 43, 316);
        # 44 "37var2.nc"
        __right_value0 = (void*)0;
        type=(struct sType* )come_increment_ref_count(solve_method_generics(type_,info), "37var2.nc", 44, 317);
        # 46 "37var2.nc"
        type->mPointerNum=0;
        # 48 "37var2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "37var2.nc", 48, 318, "struct buffer* "), "37var2.nc", 48, 319)), "37var2.nc", 48, 320);
        # 49 "37var2.nc"
        __right_value0 = (void*)0;
        buffer_append_format(buf,"%s ",((char* )(__right_value0=make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 49, 321));
        # 51 "37var2.nc"
        n=0;
        # 103 "37var2.nc"
        for(_o2_saved_3=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(self->multiple_declare, "37var2.nc", 52, 322),it=list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(_o2_saved_3)        ;!list$1tuple3$3sType$phchar$phsNode$ph$ph_end(_o2_saved_3);it=list$1tuple3$3sType$phchar$phsNode$ph$ph_next(_o2_saved_3)){
            # 53 "37var2.nc"
            multiple_assign_var1=it;
            type_18=(struct sType* )come_increment_ref_count(multiple_assign_var1->v1, "37var2.nc", 53, 323);
            var_name=(char* )come_increment_ref_count(multiple_assign_var1->v2, "37var2.nc", 53, 324);
            right_value=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3, "37var2.nc", 53, 325);
            # 54 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            var_=((struct sVar* )(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char* )(__right_value0=__builtin_string(var_name,"37var2.nc",54))),((void*)0),(_Bool)0)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 54, 326));
            # 64 "37var2.nc"
            if(var_) {
                # 62 "37var2.nc"
                if(var_->mType->mHeap) {
                    # 60 "37var2.nc"
                    if(!var_->no_output_come_code) {
                        # 58 "37var2.nc"
                        __right_value0 = (void*)0;
                        free_object(((struct sType* )(__right_value0=sType_clone(var_->mType))),var_->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 58, 327);
                    }
                }
                # 62 "37var2.nc"
                __right_value0 = (void*)0;
                map$2char$phsVar$ph_remove(info->lv_table->mVars,(char* )come_increment_ref_count(__builtin_string(var_name,"37var2.nc",62), "37var2.nc", 62, 328),(_Bool)0);
            }
            # 64 "37var2.nc"
            __right_value0 = (void*)0;
            type2_=(struct sType* )come_increment_ref_count(solve_generics(type_18,info->generics_type,info), "37var2.nc", 64, 329);
            # 65 "37var2.nc"
            __right_value0 = (void*)0;
            type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "37var2.nc", 65, 330);
            # 66 "37var2.nc"
            add_variable_to_table(var_name,type2,info,(_Bool)0,(_Bool)0,(_Bool)0);
            # 68 "37var2.nc"
            var_=get_variable_from_table(info->lv_table,var_name);
            # 75 "37var2.nc"
            if(var_==((void*)0)) {
                # 71 "37var2.nc"
                warning_msg(info,"var not found(%s)(ZY) at definition of variable",it);
                # 72 "37var2.nc"
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, type_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 72, 331);
                (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 72, 332));
                ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 72, 333):(void*)0);
                come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 72, 334);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 72, 335);
                come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 72, 336);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 72, 337);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 72, 338);
                come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 72, 339);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            # 75 "37var2.nc"
            left_type=(struct sType* )come_increment_ref_count(var_->mType, "37var2.nc", 75, 340);
            # 97 "37var2.nc"
            if(right_value) {
                # 81 "37var2.nc"
                Value=node_compile(right_value,info);
                if(!Value) {
                    # 79 "37var2.nc"
                                        __result_obj__0 = (_Bool)0;
                    come_call_finalizer(sType_finalize, type_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 79, 341);
                    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 79, 342));
                    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 79, 343):(void*)0);
                    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 79, 344);
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 79, 345);
                    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 79, 346);
                    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 79, 347);
                    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 79, 348);
                    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 79, 349);
                    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 79, 350);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 81 "37var2.nc"
                __right_value0 = (void*)0;
                come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "37var2.nc", 81, 351);
                # 83 "37var2.nc"
                __right_value0 = (void*)0;
                var_name2=(char* )come_increment_ref_count(make_var_name(type2,var_name,info,(_Bool)0), "37var2.nc", 83, 352);
                # 85 "37var2.nc"
                buffer_append_format(buf,"%s=%s",var_name2,come_value->c_value);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 97, 358);
                (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 97, 359));
            }
            else {
                # 92 "37var2.nc"
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X0=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type->mNoCallingDestructor&&((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("memset"))))))));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 88, 412));
                come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 6, 413);
_conditional_value_X0;})) {
                    # 89 "37var2.nc"
                    add_come_last_code2(info,"memset(&%s, 0, sizeof(%s));\n",var_->mCValueName,var_->mCValueName);
                }
                # 92 "37var2.nc"
                __right_value0 = (void*)0;
                var_name2_19=(char* )come_increment_ref_count(make_var_name(type2,var_name,info,(_Bool)0), "37var2.nc", 92, 414);
                # 94 "37var2.nc"
                buffer_append_format(buf,"%s",var_name2_19);
                (var_name2_19 = come_decrement_ref_count(var_name2_19, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 97, 415));
            }
            # 100 "37var2.nc"
            if(n!=list$1tuple3$3sType$phchar$phsNode$ph$ph_length(self->multiple_declare)-1) {
                # 98 "37var2.nc"
                buffer_append_format(buf,", ");
            }
            # 100 "37var2.nc"
            n++;
            come_call_finalizer(sType_finalize, type_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 103, 416);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 103, 417));
            ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 103, 418):(void*)0);
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 103, 419);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 103, 420);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 103, 421);
        }
        # 103 "37var2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_20=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 103, 422, "struct CVALUE* "), "37var2.nc", 103, 423)), "37var2.nc", 103, 424);
        # 104 "37var2.nc"
        __right_value0 = (void*)0;
        __dec_obj47=come_value_20->c_value,
        come_value_20->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "37var2.nc", 104, 426);
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 104, 425);
        # 105 "37var2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj48=come_value_20->type,
        come_value_20->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "37var2.nc", 105, 427, "struct sType* "), "37var2.nc", 105, 428),(char*)come_increment_ref_count(xsprintf("void"), "37var2.nc", 105, 429),(_Bool)0,info,(_Bool)0,0), "37var2.nc", 105, 431);
        come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 105, 430);
        # 106 "37var2.nc"
        come_value_20->var=((void*)0);
        # 108 "37var2.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_20, "37var2.nc", 108, 446));
        # 110 "37var2.nc"
        add_come_last_code(info,"%s",come_value_20->c_value);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 447);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 448);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 449);
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 450);
        come_call_finalizer(CVALUE_finalize, come_value_20, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 451);
    }
    else if(self->multiple_assign) {
        # 113 "37var2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_23=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "37var2.nc", 113, 452, "struct buffer* "), "37var2.nc", 113, 453)), "37var2.nc", 113, 454);
        # 119 "37var2.nc"
        Value_24=node_compile(self->right_value,info);
        if(!Value_24) {
            # 116 "37var2.nc"
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(buffer_finalize, buf_23, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 116, 455);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 119 "37var2.nc"
        __right_value0 = (void*)0;
        right_value_25=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "37var2.nc", 119, 456);
        # 120 "37var2.nc"
        # 129 "37var2.nc"
        if(right_value_25->type->mNoSolvedGenericsType) {
            # 123 "37var2.nc"
            __right_value0 = (void*)0;
            __dec_obj52=right_type,
            right_type=(struct sType* )come_increment_ref_count(sType_clone(right_value_25->type->mNoSolvedGenericsType), "37var2.nc", 123, 458);
            come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 123, 457);
        }
        else {
            # 126 "37var2.nc"
            __right_value0 = (void*)0;
            __dec_obj53=right_type,
            right_type=(struct sType* )come_increment_ref_count(sType_clone(right_value_25->type), "37var2.nc", 126, 460);
            come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 126, 459);
        }
        # 129 "37var2.nc"
        i=0;
        # 151 "37var2.nc"
        for(_o2_saved_4=(struct list$1char$ph*)come_increment_ref_count(self->multiple_assign, "37var2.nc", 130, 461),it_27=list$1char$ph_begin(_o2_saved_4)        ;!list$1char$ph_end(_o2_saved_4);it_27=list$1char$ph_next(_o2_saved_4)){
            # 148 "37var2.nc"
            if(i<list$1sType$ph_length(right_type->mGenericsTypes)) {
                # 132 "37var2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                var__29=((struct sVar* )(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char* )(__right_value0=__builtin_string(it_27,"37var2.nc",132))),((void*)0),(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 132, 462));
                # 143 "37var2.nc"
                if(var__29) {
                    # 140 "37var2.nc"
                    if(var__29->mType->mHeap) {
                        # 138 "37var2.nc"
                        if(!var__29->no_output_come_code) {
                            # 136 "37var2.nc"
                            __right_value0 = (void*)0;
                            free_object(((struct sType* )(__right_value0=sType_clone(var__29->mType))),var__29->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 136, 463);
                        }
                    }
                    # 140 "37var2.nc"
                    __right_value0 = (void*)0;
                    map$2char$phsVar$ph_remove(info->lv_table->mVars,(char* )come_increment_ref_count(__builtin_string(it_27,"37var2.nc",140), "37var2.nc", 140, 464),(_Bool)0);
                }
                # 143 "37var2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                right_type2=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(right_type->mGenericsTypes,i)))), "37var2.nc", 143, 483);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 3, 484);
                # 144 "37var2.nc"
                right_type2->mStatic=(_Bool)0;
                # 145 "37var2.nc"
                add_variable_to_table(it_27,right_type2,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 148, 485);
            }
            # 148 "37var2.nc"
            i++;
        }
        # 151 "37var2.nc"
        static int num_multiple_var=0;
        # 152 "37var2.nc"
        __right_value0 = (void*)0;
        multiple_var_name=(char* )come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var), "37var2.nc", 152, 486);
        # 153 "37var2.nc"
        __right_value0 = (void*)0;
        add_come_code_at_function_head(info,"%s\n;",((char* )(__right_value0=make_define_var(right_value_25->type,multiple_var_name,info,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 153, 487));
        # 155 "37var2.nc"
        add_come_code(info,"%s=%s;\n",multiple_var_name,right_value_25->c_value);
        # 157 "37var2.nc"
        __right_value0 = (void*)0;
        __dec_obj54=right_value_25->c_value,
        right_value_25->c_value=(char* )come_increment_ref_count((char* )come_memdup(multiple_var_name, "37var2.nc", 157, 488, "char* "), "37var2.nc", 157, 490);
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 157, 489);
        # 159 "37var2.nc"
        i=0;
        # 206 "37var2.nc"
        for(_o2_saved_5=(struct list$1char$ph*)come_increment_ref_count(self->multiple_assign, "37var2.nc", 160, 491),it_32=list$1char$ph_begin(_o2_saved_5)        ;!list$1char$ph_end(_o2_saved_5);it_32=list$1char$ph_next(_o2_saved_5)){
            # 203 "37var2.nc"
            if(i<list$1sType$ph_length(right_type->mGenericsTypes)) {
                # 162 "37var2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                right_type2_33=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(right_type->mGenericsTypes,i)))), "37var2.nc", 162, 492);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 162, 493);
                # 164 "37var2.nc"
                var__34=get_variable_from_table(info->lv_table,it_32);
                # 166 "37var2.nc"
                left_type_35=(struct sType* )come_increment_ref_count(var__34->mType, "37var2.nc", 166, 494);
                # 168 "37var2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                right_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 168, 495, "struct CVALUE* "), "37var2.nc", 168, 496)), "37var2.nc", 168, 497);
                # 170 "37var2.nc"
                __right_value0 = (void*)0;
                __dec_obj55=right_value2->c_value,
                right_value2->c_value=(char* )come_increment_ref_count(xsprintf("%s->v%d",right_value_25->c_value,i+1), "37var2.nc", 170, 499);
                __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 170, 498);
                # 171 "37var2.nc"
                __dec_obj56=right_value2->type,
                right_value2->type=(struct sType* )come_increment_ref_count(right_type2_33, "37var2.nc", 171, 501);
                come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 171, 500);
                # 172 "37var2.nc"
                right_value2->var=((void*)0);
                # 174 "37var2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                come_value_36=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 174, 502, "struct CVALUE* "), "37var2.nc", 174, 503)), "37var2.nc", 174, 504);
                # 176 "37var2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                check_assign_type(((char*)(__right_value1=xsprintf("\%s is assigning to (1)",((char* )(__right_value0=string_to_string(self->name)))))),left_type_35,right_type2_33,come_value_36,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 176, 505));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 176, 506));
                # 182 "37var2.nc"
                if(right_type2_33->mHeap&&!left_type_35->mHeap) {
                    # 178 "37var2.nc"
                    err_msg(info,"require borrow");
                    # 179 "37var2.nc"
                    exit(1);
                }
                # 195 "37var2.nc"
                if(right_type2_33->mHeap&&left_type_35->mHeap&&left_type_35->mPointerNum>0&&right_type2_33->mPointerNum>0) {
                    # 184 "37var2.nc"
                    std_move(left_type_35,right_type2_33,right_value2,info);
                    # 185 "37var2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj57=come_value_36->c_value,
                    come_value_36->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",var__34->mCValueName,right_value2->c_value), "37var2.nc", 185, 508);
                    __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 185, 507);
                }
                else if(right_type2_33->mHeap!=left_type_35->mHeap&&left_type_35->mPointerNum>0&&right_type2_33->mPointerNum>0) {
                    # 189 "37var2.nc"
                    err_msg(info,"invalid heap object left  %d right %d",left_type_35->mHeap,right_type2_33->mHeap);
                    # 190 "37var2.nc"
                                        __result_obj__0 = (_Bool)0;
                    come_call_finalizer(sType_finalize, right_type2_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 190, 509);
                    come_call_finalizer(sType_finalize, left_type_35, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 190, 510);
                    come_call_finalizer(CVALUE_finalize, right_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 190, 511);
                    come_call_finalizer(CVALUE_finalize, come_value_36, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 190, 512);
                    come_call_finalizer(buffer_finalize, buf_23, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 190, 513);
                    come_call_finalizer(CVALUE_finalize, right_value_25, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 190, 514);
                    come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 190, 515);
                    come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 190, 516);
                    (multiple_var_name = come_decrement_ref_count(multiple_var_name, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 190, 517));
                    come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 190, 518);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                else {
                    # 193 "37var2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj58=come_value_36->c_value,
                    come_value_36->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",var__34->mCValueName,right_value2->c_value), "37var2.nc", 193, 520);
                    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 193, 519);
                }
                # 195 "37var2.nc"
                __right_value0 = (void*)0;
                __dec_obj59=come_value_36->type,
                come_value_36->type=(struct sType* )come_increment_ref_count(sType_clone(left_type_35), "37var2.nc", 195, 522);
                come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 195, 521);
                # 196 "37var2.nc"
                come_value_36->var=var__34;
                # 198 "37var2.nc"
                __right_value0 = (void*)0;
                add_come_code_at_function_head(info,"%s=0;\n",((char* )(__right_value0=make_define_var(left_type_35,var__34->mCValueName,info,(_Bool)0,(_Bool)0))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 198, 523));
                # 200 "37var2.nc"
                add_come_code(info,"%s;\n",come_value_36->c_value);
                come_call_finalizer(sType_finalize, right_type2_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 203, 524);
                come_call_finalizer(sType_finalize, left_type_35, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 203, 525);
                come_call_finalizer(CVALUE_finalize, right_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 203, 526);
                come_call_finalizer(CVALUE_finalize, come_value_36, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 203, 527);
            }
            # 203 "37var2.nc"
            i++;
        }
        # 213 "37var2.nc"
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X1=(string_operator_not_equals(((char* )(__right_value1=buffer_to_string(buf_23))),"")));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 206, 528));
_conditional_value_X1;})) {
            # 207 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_37=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 207, 529, "struct CVALUE* "), "37var2.nc", 207, 530)), "37var2.nc", 207, 531);
            # 209 "37var2.nc"
            __right_value0 = (void*)0;
            __dec_obj60=come_value_37->c_value,
            come_value_37->c_value=(char* )come_increment_ref_count(buffer_to_string(buf_23), "37var2.nc", 209, 533);
            __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 209, 532);
            # 211 "37var2.nc"
            list$1CVALUE$ph_add(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_37, "37var2.nc", 211, 548));
            come_call_finalizer(CVALUE_finalize, come_value_37, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 213, 549);
        }
        come_call_finalizer(buffer_finalize, buf_23, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 550);
        come_call_finalizer(CVALUE_finalize, right_value_25, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 551);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 552);
        come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 553);
        (multiple_var_name = come_decrement_ref_count(multiple_var_name, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 549, 554));
        come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 555);
    }
    else if(self->right_value==((void*)0)) {
        # 215 "37var2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        var__40=((struct sVar* )(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char* )(__right_value0=__builtin_string(self->name,"37var2.nc",215))),((void*)0),(_Bool)0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 215, 556));
        # 226 "37var2.nc"
        if(var__40) {
            # 223 "37var2.nc"
            if(var__40->mType->mHeap) {
                # 221 "37var2.nc"
                if(!var__40->no_output_come_code) {
                    # 219 "37var2.nc"
                    __right_value0 = (void*)0;
                    free_object(((struct sType* )(__right_value0=sType_clone(var__40->mType))),var__40->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 219, 557);
                }
            }
            # 223 "37var2.nc"
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_remove(info->lv_table->mVars,(char* )come_increment_ref_count(__builtin_string(self->name,"37var2.nc",223), "37var2.nc", 223, 558),(_Bool)0);
        }
        # 231 "37var2.nc"
        if(self->type==((void*)0)) {
            # 227 "37var2.nc"
            err_msg(info,"Require concrete variable type(%s)",self->name);
            # 228 "37var2.nc"
                        neo_current_frame = fr.prev;
            return (_Bool)1;
        }
        # 231 "37var2.nc"
        __right_value0 = (void*)0;
        type__41=(struct sType* )come_increment_ref_count(solve_generics(self->type,info->generics_type,info), "37var2.nc", 231, 559);
        # 232 "37var2.nc"
        __right_value0 = (void*)0;
        type_42=(struct sType* )come_increment_ref_count(solve_method_generics(type__41,info), "37var2.nc", 232, 560);
        # 234 "37var2.nc"
        __right_value0 = (void*)0;
        add_variable_to_table(self->name,((struct sType* )(__right_value0=sType_clone(type_42))),info,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 234, 561);
        # 236 "37var2.nc"
        var__40=get_variable_from_table(info->lv_table,self->name);
        # 247 "37var2.nc"
        if(var__40==((void*)0)) {
            # 239 "37var2.nc"
            var__40=get_variable_from_table(info->gv_table,self->name);
            # 245 "37var2.nc"
            if(var__40==((void*)0)) {
                # 242 "37var2.nc"
                err_msg(info,"var not found(%s)(Y) at definition of variable",self->name);
                # 243 "37var2.nc"
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, type__41, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 243, 562);
                come_call_finalizer(sType_finalize, type_42, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 243, 563);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
        }
        # 247 "37var2.nc"
        __right_value0 = (void*)0;
        left_type_43=(struct sType* )come_increment_ref_count(sType_clone(var__40->mType), "37var2.nc", 247, 564);
        # 269 "37var2.nc"
        if(left_type_43->mChannel) {
            # 253 "37var2.nc"
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X2=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_43->mNoCallingDestructor&&((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("memset"))))))));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 250, 565));
            come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 250, 566);
_conditional_value_X2;})) {
                # 251 "37var2.nc"
                add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__40->mCValueName);
            }
        }
        else if(list$1sNode$ph_length(left_type_43->mArrayNum)>0||list$1sNode$ph_length(left_type_43->mVarNameArrayNum)>0) {
            # 255 "37var2.nc"
            __right_value0 = (void*)0;
            add_come_code(info,"%s;\n",((char* )(__right_value0=make_define_var(left_type_43,var__40->mCValueName,info,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 255, 567));
            # 260 "37var2.nc"
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X3=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_43->mNoCallingDestructor&&((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("memset"))))))));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 257, 568));
            come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 257, 569);
_conditional_value_X3;})) {
                # 258 "37var2.nc"
                add_come_code(info,"memset(&%s, 0, sizeof(%s));\n",var__40->mCValueName,var__40->mCValueName);
            }
        }
        else {
            # 262 "37var2.nc"
            __right_value0 = (void*)0;
            add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(left_type_43,var__40->mCValueName,info,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 262, 570));
            # 267 "37var2.nc"
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X4=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_43->mNoCallingDestructor&&((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("memset"))))))));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 264, 571));
            come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 264, 572);
_conditional_value_X4;})) {
                # 265 "37var2.nc"
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__40->mCValueName,var__40->mCValueName);
            }
        }
        # 269 "37var2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_44=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 269, 573, "struct CVALUE* "), "37var2.nc", 269, 574)), "37var2.nc", 269, 575);
        # 271 "37var2.nc"
        __right_value0 = (void*)0;
        __dec_obj64=come_value_44->c_value,
        come_value_44->c_value=(char* )come_increment_ref_count(xsprintf("%s",var__40->mCValueName), "37var2.nc", 271, 577);
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 271, 576);
        # 272 "37var2.nc"
        __right_value0 = (void*)0;
        __dec_obj65=come_value_44->type,
        come_value_44->type=(struct sType* )come_increment_ref_count(sType_clone(left_type_43), "37var2.nc", 272, 579);
        come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 272, 578);
        # 273 "37var2.nc"
        come_value_44->var=var__40;
        # 275 "37var2.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_44, "37var2.nc", 275, 580));
        # 283 "37var2.nc"
        if(!left_type_43->mClass->mNumber&&left_type_43->mPointerNum==0) {
            # 278 "37var2.nc"
            var__40->mType->mAllocaValue=(_Bool)1;
            # 282 "37var2.nc"
            if(var__40->mType->mNoSolvedGenericsType) {
                # 280 "37var2.nc"
                var__40->mType->mNoSolvedGenericsType->mAllocaValue=(_Bool)1;
            }
        }
        come_call_finalizer(sType_finalize, type__41, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 581);
        come_call_finalizer(sType_finalize, type_42, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 582);
        come_call_finalizer(sType_finalize, left_type_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 583);
        come_call_finalizer(CVALUE_finalize, come_value_44, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 584);
    }
    else if(self->alloc) {
        # 285 "37var2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        var__45=((struct sVar* )(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char* )(__right_value0=__builtin_string(self->name,"37var2.nc",285))),((void*)0),(_Bool)0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 285, 585));
        # 286 "37var2.nc"
        old_var_=var__45;
        # 297 "37var2.nc"
        if(var__45&&!self->iter_) {
            # 294 "37var2.nc"
            if(var__45->mType->mHeap) {
                # 292 "37var2.nc"
                if(!var__45->no_output_come_code) {
                    # 290 "37var2.nc"
                    __right_value0 = (void*)0;
                    free_object(((struct sType* )(__right_value0=sType_clone(var__45->mType))),var__45->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 290, 586);
                }
            }
            # 294 "37var2.nc"
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_remove(info->lv_table->mVars,(char* )come_increment_ref_count(__builtin_string(self->name,"37var2.nc",294), "37var2.nc", 294, 587),(_Bool)0);
        }
        # 306 "37var2.nc"
        if(self->type==((void*)0)) {
        }
        else {
            # 300 "37var2.nc"
            __right_value0 = (void*)0;
            type__46=(struct sType* )come_increment_ref_count(solve_generics(self->type,info->generics_type,info), "37var2.nc", 300, 588);
            # 301 "37var2.nc"
            __right_value0 = (void*)0;
            type_47=(struct sType* )come_increment_ref_count(solve_method_generics(type__46,info), "37var2.nc", 301, 589);
            # 303 "37var2.nc"
            add_variable_to_table(self->name,type_47,info,(_Bool)0,(_Bool)0,(_Bool)0);
            come_call_finalizer(sType_finalize, type__46, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 306, 590);
            come_call_finalizer(sType_finalize, type_47, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 306, 591);
        }
        # 310 "37var2.nc"
        Value_48=node_compile(self->right_value,info);
        if(!Value_48) {
            # 307 "37var2.nc"
                        neo_current_frame = fr.prev;
            return (_Bool)0;
        }
        # 310 "37var2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        array_initializer=string_operator_equals(((char* )(__right_value1=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 310, 592));
        # 311 "37var2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        string_initializer=string_operator_equals(((char* )(__right_value1=self->right_value->kind(self->right_value->_protocol_obj))),"sStrNode");
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 311, 593));
        # 312 "37var2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        new_channel=string_operator_equals(((char* )(__right_value1=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 312, 594));
        # 314 "37var2.nc"
        __right_value0 = (void*)0;
        right_value_49=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "37var2.nc", 314, 595);
        # 315 "37var2.nc"
        __right_value0 = (void*)0;
        right_type_50=(struct sType* )come_increment_ref_count(sType_clone(right_value_49->type), "37var2.nc", 315, 596);
        # 316 "37var2.nc"
        right_type_50->mStatic=(_Bool)0;
        # 328 "37var2.nc"
        if(self->iter_&&old_var_) {
            # 325 "37var2.nc"
            if(old_var_->mType->mHeap) {
                # 323 "37var2.nc"
                if(!old_var_->no_output_come_code) {
                    # 321 "37var2.nc"
                    __right_value0 = (void*)0;
                    free_object(((struct sType* )(__right_value0=sType_clone(old_var_->mType))),old_var_->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 321, 597);
                }
            }
            # 325 "37var2.nc"
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_remove(info->lv_table->mVars,(char* )come_increment_ref_count(__builtin_string(self->name,"37var2.nc",325), "37var2.nc", 325, 598),(_Bool)0);
        }
        # 334 "37var2.nc"
        if(self->type==((void*)0)) {
            # 329 "37var2.nc"
            __right_value0 = (void*)0;
            type__51=(struct sType* )come_increment_ref_count(solve_generics(right_type_50,info->generics_type,info), "37var2.nc", 329, 599);
            # 330 "37var2.nc"
            __right_value0 = (void*)0;
            type_52=(struct sType* )come_increment_ref_count(solve_method_generics(type__51,info), "37var2.nc", 330, 600);
            # 331 "37var2.nc"
            add_variable_to_table(self->name,type_52,info,(_Bool)0,(_Bool)0,(_Bool)0);
            come_call_finalizer(sType_finalize, type__51, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 334, 601);
            come_call_finalizer(sType_finalize, type_52, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 334, 602);
        }
        # 340 "37var2.nc"
        if(self->iter_) {
            # 335 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj66=info->generics_type,
            info->generics_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "37var2.nc", 335, 603, "struct sType* "), "37var2.nc", 335, 604),(char*)come_increment_ref_count(xsprintf("list"), "37var2.nc", 335, 605),(_Bool)0,info,(_Bool)0,0), "37var2.nc", 335, 607);
            come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 335, 606);
            # 336 "37var2.nc"
            list$1sType$ph_reset(info->generics_type->mGenericsTypes);
            # 337 "37var2.nc"
            __right_value0 = (void*)0;
            list$1sType$ph_add(info->generics_type->mGenericsTypes,(struct sType* )come_increment_ref_count(sType_clone(right_type_50), "37var2.nc", 337, 609));
        }
        # 340 "37var2.nc"
        var__45=get_variable_from_table(info->lv_table,self->name);
        # 342 "37var2.nc"
        __right_value0 = (void*)0;
        left_type_53=(struct sType* )come_increment_ref_count(sType_clone(var__45->mType), "37var2.nc", 342, 610);
        # 416 "37var2.nc"
        if(left_type_53->mHeap&&(left_type_53->mConstant||left_type_53->mStatic||left_type_53->mRegister)) {
            # 345 "37var2.nc"
            err_msg(info,"don't append heap with constant, static, register");
            # 346 "37var2.nc"
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(CVALUE_finalize, right_value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 346, 611);
            come_call_finalizer(sType_finalize, right_type_50, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 346, 612);
            come_call_finalizer(sType_finalize, left_type_53, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 346, 613);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(array_initializer||(string_operator_equals(left_type_53->mClass->mName,"char")&&(list$1sNode$ph_length(left_type_53->mArrayNum)>0||left_type_53->mArrayPointerType)&&string_initializer)||left_type_53->mStatic||left_type_53->mConstant||left_type_53->mRegister||list$1sNode$ph_length(left_type_53->mArrayNum)>0||left_type_53->mArrayPointerType) {
            # 350 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            var__54=((struct sVar* )(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char* )(__right_value0=__builtin_string(self->name,"37var2.nc",350))),((void*)0),(_Bool)0)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 350, 614));
            # 351 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_55=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 351, 615, "struct CVALUE* "), "37var2.nc", 351, 616)), "37var2.nc", 351, 617);
            # 353 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj67=come_value_55->c_value,
            come_value_55->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",((char* )(__right_value0=make_define_var(left_type_53,var__54->mCValueName,info,(_Bool)0,(_Bool)0))),right_value_49->c_value), "37var2.nc", 353, 619);
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 353, 618);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 353, 620));
            # 354 "37var2.nc"
            __right_value0 = (void*)0;
            __dec_obj68=come_value_55->type,
            come_value_55->type=(struct sType* )come_increment_ref_count(sType_clone(left_type_53), "37var2.nc", 354, 622);
            come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 354, 621);
            # 355 "37var2.nc"
            come_value_55->var=var__54;
            # 357 "37var2.nc"
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_55, "37var2.nc", 357, 623));
            # 359 "37var2.nc"
            add_come_last_code(info,"%s",come_value_55->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_55, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 416, 624);
        }
        else if(left_type_53->mChannel&&new_channel) {
            # 362 "37var2.nc"
            __right_value0 = (void*)0;
            add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(left_type_53,var__45->mCValueName,info,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 362, 625));
            # 368 "37var2.nc"
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X5=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_53->mNoCallingDestructor&&((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("memset"))))))));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 364, 626));
            come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 364, 627);
_conditional_value_X5;})) {
                # 365 "37var2.nc"
                add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__45->mCValueName);
            }
            # 368 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_56=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 368, 628, "struct CVALUE* "), "37var2.nc", 368, 629)), "37var2.nc", 368, 630);
            # 369 "37var2.nc"
            __right_value0 = (void*)0;
            __dec_obj69=come_value_56->c_value,
            come_value_56->c_value=(char* )come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__45->mCValueName), "37var2.nc", 369, 632);
            __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 369, 631);
            # 370 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj70=come_value_56->type,
            come_value_56->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "37var2.nc", 370, 633, "struct sType* "), "37var2.nc", 370, 634),(char*)come_increment_ref_count(xsprintf("void"), "37var2.nc", 370, 635),(_Bool)0,info,(_Bool)0,0), "37var2.nc", 370, 637);
            come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 370, 636);
            # 371 "37var2.nc"
            come_value_56->type->mPointerNum=1;
            # 372 "37var2.nc"
            come_value_56->var=var__45;
            # 374 "37var2.nc"
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_56, "37var2.nc", 374, 638));
            # 376 "37var2.nc"
            add_come_last_code(info,"%s",come_value_56->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_56, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 416, 639);
        }
        else {
            # 379 "37var2.nc"
            __right_value0 = (void*)0;
            type__57=(struct sType* )come_increment_ref_count(solve_generics(left_type_53,info->generics_type,info), "37var2.nc", 379, 640);
            # 380 "37var2.nc"
            __right_value0 = (void*)0;
            type_58=(struct sType* )come_increment_ref_count(solve_method_generics(type__57,info), "37var2.nc", 380, 641);
            # 381 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            check_assign_type(((char*)(__right_value1=xsprintf("\%s is assigning to (2)",((char* )(__right_value0=string_to_string(self->name)))))),type_58,right_type_50,right_value_49,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 381, 642));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 381, 643));
            # 387 "37var2.nc"
            if(right_type_50->mHeap&&!type_58->mHeap) {
                # 383 "37var2.nc"
                err_msg(info,"require borrow");
                # 384 "37var2.nc"
                exit(1);
            }
            # 404 "37var2.nc"
            if(left_type_53->mPointerNum>0&&left_type_53->mHeap&&string_operator_equals(right_type_50->mClass->mName,"void")&&right_type_50->mPointerNum>0) {
            }
            else if(right_type_50->mHeap&&left_type_53->mHeap&&left_type_53->mPointerNum>0&&right_type_50->mPointerNum>0) {
                # 392 "37var2.nc"
                std_move(left_type_53,right_type_50,right_value_49,info);
            }
            else if(right_type_50->mHeap!=left_type_53->mHeap&&left_type_53->mPointerNum>0&&right_type_50->mPointerNum>0) {
                # 396 "37var2.nc"
                err_msg(info,"invalid heap object(%s) left  %d right %d",self->name,left_type_53->mHeap,right_type_50->mHeap);
                # 397 "37var2.nc"
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, type__57, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 397, 644);
                come_call_finalizer(sType_finalize, type_58, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 397, 645);
                come_call_finalizer(CVALUE_finalize, right_value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 397, 646);
                come_call_finalizer(sType_finalize, right_type_50, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 397, 647);
                come_call_finalizer(sType_finalize, left_type_53, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 397, 648);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            else if(left_type_53->mHeap&&!right_value_49->type->mHeap) {
                # 400 "37var2.nc"
                err_msg(info,"require right value as heap object(%s)",self->name);
                # 401 "37var2.nc"
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, type__57, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 401, 649);
                come_call_finalizer(sType_finalize, type_58, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 401, 650);
                come_call_finalizer(CVALUE_finalize, right_value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 401, 651);
                come_call_finalizer(sType_finalize, right_type_50, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 401, 652);
                come_call_finalizer(sType_finalize, left_type_53, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 401, 653);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            # 404 "37var2.nc"
            __right_value0 = (void*)0;
            add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(left_type_53,var__45->mCValueName,info,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 404, 654));
            # 406 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_59=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 406, 655, "struct CVALUE* "), "37var2.nc", 406, 656)), "37var2.nc", 406, 657);
            # 408 "37var2.nc"
            __right_value0 = (void*)0;
            __dec_obj71=come_value_59->c_value,
            come_value_59->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",var__45->mCValueName,right_value_49->c_value), "37var2.nc", 408, 659);
            __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 408, 658);
            # 409 "37var2.nc"
            __right_value0 = (void*)0;
            __dec_obj72=come_value_59->type,
            come_value_59->type=(struct sType* )come_increment_ref_count(sType_clone(left_type_53), "37var2.nc", 409, 661);
            come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 409, 660);
            # 410 "37var2.nc"
            come_value_59->var=var__45;
            # 412 "37var2.nc"
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_59, "37var2.nc", 412, 662));
            # 414 "37var2.nc"
            add_come_last_code(info,"%s",come_value_59->c_value);
            come_call_finalizer(sType_finalize, type__57, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 416, 663);
            come_call_finalizer(sType_finalize, type_58, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 416, 664);
            come_call_finalizer(CVALUE_finalize, come_value_59, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 416, 665);
        }
        come_call_finalizer(CVALUE_finalize, right_value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 666);
        come_call_finalizer(sType_finalize, right_type_50, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 667);
        come_call_finalizer(sType_finalize, left_type_53, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 668);
    }
    else {
        # 422 "37var2.nc"
        Value_60=node_compile(self->right_value,info);
        if(!Value_60) {
            # 419 "37var2.nc"
                        neo_current_frame = fr.prev;
            return (_Bool)0;
        }
        # 422 "37var2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        new_channel_61=string_operator_equals(((char* )(__right_value1=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 422, 669));
        # 424 "37var2.nc"
        __right_value0 = (void*)0;
        right_value_62=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "37var2.nc", 424, 670);
        # 425 "37var2.nc"
        right_type_63=right_value_62->type;
        # 427 "37var2.nc"
        current_stack_frame_struct=info->current_stack_frame_struct;
        # 476 "37var2.nc"
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X6=(current_stack_frame_struct&&((struct sVar* )(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char* )(__right_value0=__builtin_string(self->name,"37var2.nc",429))),((void*)0),(_Bool)0)))==((void*)0)));        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 429, 671));
        come_call_finalizer(sVar_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 429, 672);
_conditional_value_X6;})) {
            # 430 "37var2.nc"
            parent_var=get_variable_from_table(info->lv_table->mParent,self->name);
            # 474 "37var2.nc"
            if(parent_var!=((void*)0)) {
                # 473 "37var2.nc"
                if(string_operator_not_equals(parent_var->mFunName,info->come_fun->mName)) {
                    # 434 "37var2.nc"
                    left_type_64=parent_var->mType;
                    # 436 "37var2.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    check_assign_type(((char*)(__right_value1=xsprintf("\%s is assigning to(3)",((char* )(__right_value0=string_to_string(self->name)))))),left_type_64,right_type_63,right_value_62,info);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 436, 673));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 436, 674));
                    # 442 "37var2.nc"
                    if(right_type_63->mHeap&&!left_type_64->mHeap) {
                        # 438 "37var2.nc"
                        err_msg(info,"require borrow");
                        # 439 "37var2.nc"
                        exit(1);
                    }
                    # 461 "37var2.nc"
                    if(left_type_64->mPointerNum>0&&right_type_63->mPointerNum>0&&right_type_63->mHeap&&left_type_64->mHeap) {
                        # 443 "37var2.nc"
                        __right_value0 = (void*)0;
                        c_value=(char* )come_increment_ref_count(xsprintf("*(parent->%s)",parent_var->mCValueName), "37var2.nc", 443, 675);
                        # 445 "37var2.nc"
                        decrement_ref_count_object(parent_var->mType,c_value,info,(_Bool)0);
                        # 446 "37var2.nc"
                        std_move(left_type_64,right_type_63,right_value_62,info);
                        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 461, 676));
                    }
                    else if(left_type_64->mPointerNum>0&&right_type_63->mPointerNum>0&&string_operator_equals(right_type_63->mClass->mName,"void")&&left_type_64->mHeap) {
                        # 449 "37var2.nc"
                        __right_value0 = (void*)0;
                        c_value_65=(char* )come_increment_ref_count(xsprintf("*(parent->%s)",parent_var->mCValueName), "37var2.nc", 449, 677);
                        # 450 "37var2.nc"
                        decrement_ref_count_object(parent_var->mType,c_value_65,info,(_Bool)0);
                        (c_value_65 = come_decrement_ref_count(c_value_65, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 461, 678));
                    }
                    else if(left_type_64->mHeap&&!right_value_62->type->mHeap) {
                        # 453 "37var2.nc"
                        err_msg(info,"require right value as heap object(%s)",self->name);
                        # 454 "37var2.nc"
                                                __result_obj__0 = (_Bool)1;
                        come_call_finalizer(CVALUE_finalize, right_value_62, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 454, 679);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                    else if(left_type_64->mHeap!=right_value_62->type->mHeap) {
                        # 457 "37var2.nc"
                        err_msg(info,"invalid heap object(%s) left  %d right %d",self->name,left_type_64->mHeap,right_value_62->type->mHeap);
                        # 458 "37var2.nc"
                                                __result_obj__0 = (_Bool)1;
                        come_call_finalizer(CVALUE_finalize, right_value_62, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 458, 680);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                    # 461 "37var2.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    come_value_66=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 461, 681, "struct CVALUE* "), "37var2.nc", 461, 682)), "37var2.nc", 461, 683);
                    # 463 "37var2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj73=come_value_66->c_value,
                    come_value_66->c_value=(char* )come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var->mCValueName,right_value_62->c_value), "37var2.nc", 463, 685);
                    __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 463, 684);
                    # 464 "37var2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj74=come_value_66->type,
                    come_value_66->type=(struct sType* )come_increment_ref_count(sType_clone(left_type_64), "37var2.nc", 464, 687);
                    come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 464, 686);
                    # 465 "37var2.nc"
                    come_value_66->var=((void*)0);
                    # 467 "37var2.nc"
                    add_come_last_code(info,"%s",come_value_66->c_value);
                    # 469 "37var2.nc"
                    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_66, "37var2.nc", 469, 688));
                    # 471 "37var2.nc"
                                        __result_obj__0 = (_Bool)1;
                    come_call_finalizer(CVALUE_finalize, come_value_66, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 471, 689);
                    come_call_finalizer(CVALUE_finalize, right_value_62, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 471, 690);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                    come_call_finalizer(CVALUE_finalize, come_value_66, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 473, 691);
                }
            }
        }
        # 476 "37var2.nc"
        var__67=get_variable_from_table(info->lv_table,self->name);
        # 498 "37var2.nc"
        if(var__67==((void*)0)) {
            # 479 "37var2.nc"
            var__67=get_variable_from_table(info->gv_table,self->name);
            # 496 "37var2.nc"
            if(var__67==((void*)0)) {
                # 482 "37var2.nc"
                warning_msg(info,"var not found(%s)(X) at storing variable",self->name);
                # 484 "37var2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                come_value_68=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 484, 692, "struct CVALUE* "), "37var2.nc", 484, 693)), "37var2.nc", 484, 694);
                # 486 "37var2.nc"
                __right_value0 = (void*)0;
                __dec_obj75=come_value_68->c_value,
                come_value_68->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",self->name,right_value_62->c_value), "37var2.nc", 486, 696);
                __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 486, 695);
                # 487 "37var2.nc"
                __right_value0 = (void*)0;
                __dec_obj76=come_value_68->type,
                come_value_68->type=(struct sType* )come_increment_ref_count(sType_clone(right_type_63), "37var2.nc", 487, 698);
                come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 487, 697);
                # 488 "37var2.nc"
                come_value_68->var=var__67;
                # 490 "37var2.nc"
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_68, "37var2.nc", 490, 699));
                # 492 "37var2.nc"
                add_come_last_code(info,"%s",come_value_68->c_value);
                # 494 "37var2.nc"
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value_68, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 494, 700);
                come_call_finalizer(CVALUE_finalize, right_value_62, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 494, 701);
                neo_current_frame = fr.prev;
                return __result_obj__0;
                come_call_finalizer(CVALUE_finalize, come_value_68, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 496, 702);
            }
        }
        # 502 "37var2.nc"
        if(var__67->mType==((void*)0)) {
            # 499 "37var2.nc"
            __right_value0 = (void*)0;
            __dec_obj77=var__67->mType,
            var__67->mType=(struct sType* )come_increment_ref_count(sType_clone(right_type_63), "37var2.nc", 499, 704);
            come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 499, 703);
        }
        # 502 "37var2.nc"
        __right_value0 = (void*)0;
        left_type_69=(struct sType* )come_increment_ref_count(sType_clone(var__67->mType), "37var2.nc", 502, 705);
        # 547 "37var2.nc"
        if(left_type_69->mChannel&&new_channel_61) {
            # 505 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_70=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 505, 706, "struct CVALUE* "), "37var2.nc", 505, 707)), "37var2.nc", 505, 708);
            # 507 "37var2.nc"
            __right_value0 = (void*)0;
            __dec_obj78=come_value_70->c_value,
            come_value_70->c_value=(char* )come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__67->mCValueName), "37var2.nc", 507, 710);
            __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 507, 709);
            # 508 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj79=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "37var2.nc", 508, 711, "struct sType* "), "37var2.nc", 508, 712),(char*)come_increment_ref_count(xsprintf("void"), "37var2.nc", 508, 713),(_Bool)0,info,(_Bool)0,0), "37var2.nc", 508, 715);
            come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 508, 714);
            # 509 "37var2.nc"
            come_value_70->type->mPointerNum=1;
            # 510 "37var2.nc"
            come_value_70->var=var__67;
            # 512 "37var2.nc"
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_70, "37var2.nc", 512, 716));
            # 514 "37var2.nc"
            add_come_last_code(info,"%s",come_value_70->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_70, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 547, 717);
        }
        else {
            # 517 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            check_assign_type(((char*)(__right_value1=xsprintf("\%s is assigning to(4)",((char* )(__right_value0=string_to_string(self->name)))))),left_type_69,right_type_63,right_value_62,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 517, 718));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 517, 719));
            # 523 "37var2.nc"
            if(right_type_63->mHeap&&!left_type_69->mHeap) {
                # 519 "37var2.nc"
                err_msg(info,"require borrow");
                # 520 "37var2.nc"
                exit(1);
            }
            # 537 "37var2.nc"
            if(right_type_63->mHeap&&left_type_69->mHeap&&left_type_69->mPointerNum>0&&right_type_63->mPointerNum>0) {
                # 525 "37var2.nc"
                decrement_ref_count_object(left_type_69,var__67->mCValueName,info,(_Bool)0);
                # 526 "37var2.nc"
                std_move(left_type_69,right_type_63,right_value_62,info);
            }
            else if(left_type_69->mPointerNum>0&&left_type_69->mHeap&&string_operator_equals(right_type_63->mClass->mName,"void")&&right_type_63->mPointerNum>0) {
                # 530 "37var2.nc"
                decrement_ref_count_object(left_type_69,var__67->mCValueName,info,(_Bool)0);
            }
            else if(left_type_69->mHeap!=right_value_62->type->mHeap) {
                # 533 "37var2.nc"
                err_msg(info,"invalid heap object(%s) left  %d right %d",self->name,left_type_69->mHeap,right_value_62->type->mHeap);
                # 534 "37var2.nc"
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, right_value_62, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 534, 720);
                come_call_finalizer(sType_finalize, left_type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 534, 721);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            # 537 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_71=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 537, 722, "struct CVALUE* "), "37var2.nc", 537, 723)), "37var2.nc", 537, 724);
            # 539 "37var2.nc"
            __right_value0 = (void*)0;
            __dec_obj80=come_value_71->c_value,
            come_value_71->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",var__67->mCValueName,right_value_62->c_value), "37var2.nc", 539, 726);
            __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 539, 725);
            # 540 "37var2.nc"
            __right_value0 = (void*)0;
            __dec_obj81=come_value_71->type,
            come_value_71->type=(struct sType* )come_increment_ref_count(sType_clone(left_type_69), "37var2.nc", 540, 728);
            come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 540, 727);
            # 541 "37var2.nc"
            come_value_71->var=var__67;
            # 543 "37var2.nc"
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_71, "37var2.nc", 543, 729));
            # 545 "37var2.nc"
            add_come_last_code(info,"%s",come_value_71->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_71, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 547, 730);
        }
        come_call_finalizer(CVALUE_finalize, right_value_62, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 731);
        come_call_finalizer(sType_finalize, left_type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 549, 732);
    }
    # 549 "37var2.nc"
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
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
    # 3 "sType_clone"
    # 5 "sType_clone"
    if(self==(void*)0) {
        # 4 "sType_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sType_clone"
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 6, "struct sType* "), "sType_clone", 5, 7);
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
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 41);
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 40);
    }
    # 9 "sType_clone"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 8 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj3=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 43);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 42);
    }
    # 10 "sType_clone"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 9 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj7=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 2, 73);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 2, 72);
    }
    # 11 "sType_clone"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 10 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj8=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 75);
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 74);
    }
    # 12 "sType_clone"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 11 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj9=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 84);
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 83) :0);
    }
    # 13 "sType_clone"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 12 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj10=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 86);
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 85) :0);
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
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 87, "char* "), "sType_clone", 14, 89);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 88);
    }
    # 16 "sType_clone"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 15 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj12=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 90, "char* "), "sType_clone", 15, 92);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 91);
    }
    # 17 "sType_clone"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 16 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj13=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 93, "char* "), "sType_clone", 16, 95);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 94);
    }
    # 18 "sType_clone"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 17 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj14=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 96, "char* "), "sType_clone", 17, 98);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 97);
    }
    # 19 "sType_clone"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 18 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj15=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 99, "char* "), "sType_clone", 18, 101);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 100);
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
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 102, "char* "), "sType_clone", 49, 104);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 103);
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
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 105, "char* "), "sType_clone", 51, 107);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 106);
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
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 108, "char* "), "sType_clone", 54, 110);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 109);
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
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 15, 140);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 139);
    }
    # 59 "sType_clone"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 58 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj23=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 142);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 141);
    }
    # 60 "sType_clone"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 59 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj24=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 15, 162);
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 161);
    }
    # 61 "sType_clone"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 60 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj25=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 164);
        come_call_finalizer(list$1int$_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 163);
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
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 166);
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 165);
    }
    # 68 "sType_clone"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 67 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj27=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 167, "char* "), "sType_clone", 67, 169);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 168);
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
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 171);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 170);
    }
    # 73 "sType_clone"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 72 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj32=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 15, 203);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 202);
    }
    # 74 "sType_clone"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 73 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj33=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 205);
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 204);
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
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 207);
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 206) :0);
    }
    # 77 "sType_clone"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 76 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj35=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 209);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 208);
    }
    # 77 "sType_clone"
        __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 210);
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
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 8);
    }
    # 4 "sType_finalize"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 3 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 9);
    }
    # 5 "sType_finalize"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 4 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 12);
    }
    # 6 "sType_finalize"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 5 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 13);
    }
    # 7 "sType_finalize"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 6 "sType_finalize"
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 14):(void*)0);
    }
    # 8 "sType_finalize"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 7 "sType_finalize"
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 15):(void*)0);
    }
    # 9 "sType_finalize"
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        # 8 "sType_finalize"
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 16));
    }
    # 10 "sType_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 9 "sType_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 17));
    }
    # 11 "sType_finalize"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 10 "sType_finalize"
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 18));
    }
    # 12 "sType_finalize"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 11 "sType_finalize"
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 19));
    }
    # 13 "sType_finalize"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 12 "sType_finalize"
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 20));
    }
    # 14 "sType_finalize"
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        # 13 "sType_finalize"
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 21));
    }
    # 15 "sType_finalize"
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        # 14 "sType_finalize"
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 22));
    }
    # 16 "sType_finalize"
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        # 15 "sType_finalize"
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 23));
    }
    # 17 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        # 16 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 26);
    }
    # 18 "sType_finalize"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 17 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 27);
    }
    # 19 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 18 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 29);
    }
    # 20 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 19 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 30);
    }
    # 21 "sType_finalize"
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        # 20 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 31);
    }
    # 22 "sType_finalize"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 21 "sType_finalize"
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 32));
    }
    # 23 "sType_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 22 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 33);
    }
    # 24 "sType_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 23 "sType_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 0, 36);
    }
    # 25 "sType_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 24 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 37);
    }
    # 26 "sType_finalize"
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        # 25 "sType_finalize"
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 38):(void*)0);
    }
    # 27 "sType_finalize"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 26 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 39);
    }
            neo_current_frame = fr.prev;
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 11);
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
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 10);
    }
            neo_current_frame = fr.prev;
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 25);
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
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 24):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 28);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 35);
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
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 34));
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
    # 1513 "./neo-c.h"
    if(self==((void*)0)) {
        # 1511 "./neo-c.h"
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 44);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 45);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1513, 46, "struct list$1sType$ph*"), "./neo-c.h", 1513, 50)), "./neo-c.h", 1513, 51);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1518, 66));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1521, 67));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 68);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 69);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 70);
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
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 47);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 48);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 49);
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
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 52);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1534, 53, "struct list_item$1sType$ph*"))), "./neo-c.h", 1534, 54);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj4=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1538, 56);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 55);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1544, 57, "struct list_item$1sType$ph*"))), "./neo-c.h", 1544, 58);
        # 1546 "./neo-c.h"
        litem_0->prev=self->head;
        # 1547 "./neo-c.h"
        litem_0->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj5=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1548, 60);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 59);
        # 1550 "./neo-c.h"
        self->tail=litem_0;
        # 1551 "./neo-c.h"
        self->head->next=litem_0;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1554, 61, "struct list_item$1sType$ph*"))), "./neo-c.h", 1554, 62);
        # 1556 "./neo-c.h"
        litem_1->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_1->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj6=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1558, 64);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 63);
        # 1560 "./neo-c.h"
        self->tail->next=litem_1;
        # 1561 "./neo-c.h"
        self->tail=litem_1;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 65);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 71);
    }
            neo_current_frame = fr.prev;
}

static struct sNode* sNode_clone(struct sNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNode_clone"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNode* result;
    # 3 "sNode_clone"
    # 5 "sNode_clone"
    if(self==(void*)0) {
        # 4 "sNode_clone"
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 76);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 77):(void*)0);
        return __result_obj__0;
    }
    # 5 "sNode_clone"
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 78, "struct sNode*"), "sNode_clone", 5, 79);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 80);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 81):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 82):(void*)0);
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
    # 1513 "./neo-c.h"
    if(self==((void*)0)) {
        # 1511 "./neo-c.h"
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 111);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 112);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1513, 113, "struct list$1sNode$ph*"), "./neo-c.h", 1513, 117)), "./neo-c.h", 1513, 118);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1518, 133));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1521, 134));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 135);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 136);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 137);
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
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 114);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 115);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 116);
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
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1531, 119):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1534, 120, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1534, 121);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj19=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1538, 123);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1538, 122) :0);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1544, 124, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1544, 125);
        # 1546 "./neo-c.h"
        litem_2->prev=self->head;
        # 1547 "./neo-c.h"
        litem_2->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj20=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1548, 127);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1548, 126) :0);
        # 1550 "./neo-c.h"
        self->tail=litem_2;
        # 1551 "./neo-c.h"
        self->head->next=litem_2;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1554, 128, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1554, 129);
        # 1556 "./neo-c.h"
        litem_3->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_3->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj21=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1558, 131);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1558, 130) :0);
        # 1560 "./neo-c.h"
        self->tail->next=litem_3;
        # 1561 "./neo-c.h"
        self->tail=litem_3;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1566, 132):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 138);
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
    # 1513 "./neo-c.h"
    if(self==((void*)0)) {
        # 1511 "./neo-c.h"
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 143);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 144);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1513, 145, "struct list$1int$*"), "./neo-c.h", 1513, 149)), "./neo-c.h", 1513, 150);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1527, 157);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 158);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 159);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1485, 146);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 147);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 148);
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1534, 151, "struct list_item$1int$*"))), "./neo-c.h", 1534, 152);
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
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1544, 153, "struct list_item$1int$*"))), "./neo-c.h", 1544, 154);
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
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1554, 155, "struct list_item$1int$*"))), "./neo-c.h", 1554, 156);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 160);
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
    # 1513 "./neo-c.h"
    if(self==((void*)0)) {
        # 1511 "./neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 172);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 173);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1513, 174, "struct list$1char$ph*"), "./neo-c.h", 1513, 178)), "./neo-c.h", 1513, 179);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1518, 194, "char* "), "./neo-c.h", 1518, 195));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1521, 196, "char* "), "./neo-c.h", 1521, 197));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 198);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 199);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 200);
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 175);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 176);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 177);
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
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1531, 180));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1534, 181, "struct list_item$1char$ph*"))), "./neo-c.h", 1534, 182);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj29=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1538, 184);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1538, 183);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1544, 185, "struct list_item$1char$ph*"))), "./neo-c.h", 1544, 186);
        # 1546 "./neo-c.h"
        litem_6->prev=self->head;
        # 1547 "./neo-c.h"
        litem_6->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj30=litem_6->item,
        litem_6->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1548, 188);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1548, 187);
        # 1550 "./neo-c.h"
        self->tail=litem_6;
        # 1551 "./neo-c.h"
        self->head->next=litem_6;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1554, 189, "struct list_item$1char$ph*"))), "./neo-c.h", 1554, 190);
        # 1556 "./neo-c.h"
        litem_7->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_7->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj31=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1558, 192);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1558, 191);
        # 1560 "./neo-c.h"
        self->tail->next=litem_7;
        # 1561 "./neo-c.h"
        self->tail=litem_7;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1566, 193));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$ph_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 201);
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone"; neo_current_frame = &fr;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* result;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
    # 1513 "./neo-c.h"
    if(self==((void*)0)) {
        # 1511 "./neo-c.h"
                __result_obj__0 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 217);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 15, 223);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./neo-c.h", 1513, 224, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"), "./neo-c.h", 1513, 228)), "./neo-c.h", 1513, 229);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_clone(it->item), "./neo-c.h", 1518, 261));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_clone(it->item), "./neo-c.h", 1521, 262));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 263);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 264);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 265);
    return __result_obj__0;
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it;
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
        come_call_finalizer(list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 222);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize"
    # 3 "list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 2 "list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize"
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize}", 2, 221);
    }
            neo_current_frame = fr.prev;
}

static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple3$3sType$phchar$phsNode$ph$p_finalize"
    # 3 "tuple3$3sType$phchar$phsNode$ph$p_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple3$3sType$phchar$phsNode$ph$p_finalize"
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$phsNode$ph$p_finalize}", 2, 218);
    }
    # 4 "tuple3$3sType$phchar$phsNode$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple3$3sType$phchar$phsNode$ph$p_finalize"
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$phsNode$ph$p_finalize", 3, 219));
    }
    # 5 "tuple3$3sType$phchar$phsNode$ph$p_finalize"
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        # 4 "tuple3$3sType$phchar$phsNode$ph$p_finalize"
        ((self->v3) ? self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0,(void*)0, "tuple3$3sType$phchar$phsNode$ph$p_finalize", 4, 220):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__0;
    # 1481 "./neo-c.h"
    self->head=((void*)0);
    # 1482 "./neo-c.h"
    self->tail=((void*)0);
    # 1483 "./neo-c.h"
    self->len=0;
    # 1485 "./neo-c.h"
        __result_obj__0 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 225);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 226);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 227);
    return __result_obj__0;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3sType$phchar$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem;
    struct tuple3$3sType$phchar$phsNode$ph* __dec_obj39;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_8;
    struct tuple3$3sType$phchar$phsNode$ph* __dec_obj40;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_9;
    struct tuple3$3sType$phchar$phsNode$ph* __dec_obj41;
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 230);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./neo-c.h", 1534, 231, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))), "./neo-c.h", 1534, 232);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj39=litem->item,
        litem->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1538, 234);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 233);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./neo-c.h", 1544, 235, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))), "./neo-c.h", 1544, 236);
        # 1546 "./neo-c.h"
        litem_8->prev=self->head;
        # 1547 "./neo-c.h"
        litem_8->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj40=litem_8->item,
        litem_8->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1548, 238);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 237);
        # 1550 "./neo-c.h"
        self->tail=litem_8;
        # 1551 "./neo-c.h"
        self->head->next=litem_8;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./neo-c.h", 1554, 239, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))), "./neo-c.h", 1554, 240);
        # 1556 "./neo-c.h"
        litem_9->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_9->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj41=litem_9->item,
        litem_9->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1558, 242);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 241);
        # 1560 "./neo-c.h"
        self->tail->next=litem_9;
        # 1561 "./neo-c.h"
        self->tail=litem_9;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 243);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$phsNode$ph_clone"; neo_current_frame = &fr;
    struct tuple3$3sType$phchar$phsNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple3$3sType$phchar$phsNode$ph* result;
    struct sType*  __dec_obj42  ;
    char*  __dec_obj43  ;
    struct sNode* __dec_obj44;
    # 3 "tuple3$3sType$phchar$phsNode$ph_clone"
    # 5 "tuple3$3sType$phchar$phsNode$ph_clone"
    if(self==(void*)0) {
        # 4 "tuple3$3sType$phchar$phsNode$ph_clone"
                __result_obj__0 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((void*)0, "tuple3$3sType$phchar$phsNode$ph_clone", 4, 244);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple3$3sType$phchar$phsNode$ph_clone}", 4, 245);
        return __result_obj__0;
    }
    # 5 "tuple3$3sType$phchar$phsNode$ph_clone"
    result=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "tuple3$3sType$phchar$phsNode$ph_clone", 5, 246, "struct tuple3$3sType$phchar$phsNode$ph*"), "tuple3$3sType$phchar$phsNode$ph_clone", 5, 247);
    # 7 "tuple3$3sType$phchar$phsNode$ph_clone"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 6 "tuple3$3sType$phchar$phsNode$ph_clone"
        __right_value0 = (void*)0;
        __dec_obj42=result->v1,
        result->v1=(struct sType* )come_increment_ref_count(sType_clone(self->v1), "tuple3$3sType$phchar$phsNode$ph_clone", 6, 249);
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$phsNode$ph_clone", 6, 248);
    }
    # 8 "tuple3$3sType$phchar$phsNode$ph_clone"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 7 "tuple3$3sType$phchar$phsNode$ph_clone"
        __right_value0 = (void*)0;
        __dec_obj43=result->v2,
        result->v2=(char* )come_increment_ref_count((char* )come_memdup(self->v2, "tuple3$3sType$phchar$phsNode$ph_clone", 7, 250, "char* "), "tuple3$3sType$phchar$phsNode$ph_clone", 7, 252);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "tuple3$3sType$phchar$phsNode$ph_clone", 7, 251);
    }
    # 9 "tuple3$3sType$phchar$phsNode$ph_clone"
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        # 8 "tuple3$3sType$phchar$phsNode$ph_clone"
        __right_value0 = (void*)0;
        __dec_obj44=result->v3,
        result->v3=(struct sNode*)come_increment_ref_count(sNode_clone(self->v3), "tuple3$3sType$phchar$phsNode$ph_clone", 8, 254);
        (__dec_obj44 ? __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0, (void*)0, "tuple3$3sType$phchar$phsNode$ph_clone", 8, 253) :0);
    }
    # 9 "tuple3$3sType$phchar$phsNode$ph_clone"
        __result_obj__0 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(result, "tuple3$3sType$phchar$phsNode$ph_clone", 9, 255);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple3$3sType$phchar$phsNode$ph_clone}", 9, 259);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple3$3sType$phchar$phsNode$ph_clone}", 9, 260);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$phsNode$ph_finalize"; neo_current_frame = &fr;
    # 1 "tuple3$3sType$phchar$phsNode$ph_finalize"
    # 3 "tuple3$3sType$phchar$phsNode$ph_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple3$3sType$phchar$phsNode$ph_finalize"
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$phsNode$ph_finalize}", 2, 256);
    }
    # 4 "tuple3$3sType$phchar$phsNode$ph_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple3$3sType$phchar$phsNode$ph_finalize"
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$phsNode$ph_finalize", 3, 257));
    }
    # 5 "tuple3$3sType$phchar$phsNode$ph_finalize"
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        # 4 "tuple3$3sType$phchar$phsNode$ph_finalize"
        ((self->v3) ? self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0,(void*)0, "tuple3$3sType$phchar$phsNode$ph_finalize", 4, 258):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it;
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
        come_call_finalizer(list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 266);
    }
        neo_current_frame = fr.prev;
}

static void sStoreNode_finalize(struct sStoreNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreNode_finalize"; neo_current_frame = &fr;
    # 1 "sStoreNode_finalize"
    # 3 "sStoreNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sStoreNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sStoreNode_finalize", 2, 272));
    }
    # 4 "sStoreNode_finalize"
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        # 3 "sStoreNode_finalize"
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0, "sStoreNode_finalize", 3, 273));
    }
    # 5 "sStoreNode_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 4 "sStoreNode_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sStoreNode_finalize}", 4, 274);
    }
    # 6 "sStoreNode_finalize"
    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
        # 5 "sStoreNode_finalize"
        ((self->right_value) ? self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0,(void*)0, "sStoreNode_finalize", 5, 275):(void*)0);
    }
    # 7 "sStoreNode_finalize"
    if(self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        # 6 "sStoreNode_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sStoreNode_finalize}", 6, 276);
    }
    # 8 "sStoreNode_finalize"
    if(self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        # 7 "sStoreNode_finalize"
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sStoreNode_finalize}", 7, 277);
    }
    # 9 "sStoreNode_finalize"
    if(self!=((void*)0)&&self->attribute!=((void*)0)) {
        # 8 "sStoreNode_finalize"
        (self->attribute = come_decrement_ref_count(self->attribute, (void*)0, (void*)0, 0, 0, (void*)0, "sStoreNode_finalize", 8, 278));
    }
        neo_current_frame = fr.prev;
}

static struct sVar*  map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_at"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 3493 "./neo-c.h"
    # 3499 "./neo-c.h"
    if(self==((void*)0)) {
        # 3496 "./neo-c.h"
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3496, 286);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3496, 291);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3496, 292);
        return __result_obj__0;
    }
    # 3499 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 3500 "./neo-c.h"
    hash=key_hash%self->size;
    # 3501 "./neo-c.h"
    it=hash;
    # 3524 "./neo-c.h"
    while((_Bool)1) {
        # 3522 "./neo-c.h"
        if(self->item_existance[it]) {
            # 3512 "./neo-c.h"
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                # 3509 "./neo-c.h"
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "./neo-c.h", 3509, 293);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3509, 294);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3509, 295);
                return __result_obj__0;
            }
            # 3515 "./neo-c.h"
            if(++it>=self->size) {
                # 3513 "./neo-c.h"
                it=0;
            }
            # 3518 "./neo-c.h"
            if(it==hash) {
                # 3516 "./neo-c.h"
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3516, 296);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3516, 297);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3516, 298);
                return __result_obj__0;
            }
        }
        else {
            # 3520 "./neo-c.h"
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3520, 299);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3520, 300);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3520, 301);
            return __result_obj__0;
        }
    }
    # 3524 "./neo-c.h"
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3524, 302);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3524, 303);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3524, 304);
    return __result_obj__0;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    # 1 "sVar_finalize"
    # 3 "sVar_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 2 "sVar_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 287));
    }
    # 4 "sVar_finalize"
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        # 3 "sVar_finalize"
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 288));
    }
    # 5 "sVar_finalize"
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        # 4 "sVar_finalize"
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 289);
    }
    # 6 "sVar_finalize"
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        # 5 "sVar_finalize"
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 290));
    }
            neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_remove(struct map$2char$phsVar$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_remove"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 3527 "./neo-c.h"
    # 3533 "./neo-c.h"
    if(self==((void*)0)) {
        # 3530 "./neo-c.h"
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3530, 307));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3533 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 3534 "./neo-c.h"
    hash=key_hash%self->size;
    # 3535 "./neo-c.h"
    it=hash;
    # 3573 "./neo-c.h"
    while((_Bool)1) {
        # 3571 "./neo-c.h"
        if(self->item_existance[it]) {
            # 3561 "./neo-c.h"
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                # 3543 "./neo-c.h"
                map$2char$phsVar$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                # 3545 "./neo-c.h"
                self->item_existance[it]=(_Bool)0;
                # 3546 "./neo-c.h"
                self->hashes[it]=0;
                # 3550 "./neo-c.h"
                if(1) {
                    # 3548 "./neo-c.h"
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3548, 312));
                }
                # 3550 "./neo-c.h"
                self->keys[it]=((void*)0);
                # 3555 "./neo-c.h"
                if(1) {
                    # 3553 "./neo-c.h"
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3553, 313);
                }
                # 3555 "./neo-c.h"
                memset(self->items+it,0,sizeof(struct sVar* ));
                # 3557 "./neo-c.h"
                self->len--;
                # 3558 "./neo-c.h"
                break;
            }
            # 3564 "./neo-c.h"
            if(++it>=self->size) {
                # 3562 "./neo-c.h"
                it=0;
            }
            # 3567 "./neo-c.h"
            if(it==hash) {
                # 3565 "./neo-c.h"
                break;
            }
        }
        else {
            # 3569 "./neo-c.h"
            break;
        }
    }
    # 3573 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3573, 314));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsVar$ph_remove_ordered_entry(struct map$2char$phsVar$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    # 3418 "./neo-c.h"
    pos=map$2char$phsVar$ph_key_position(self,key,by_pointer);
    # 3422 "./neo-c.h"
    if(pos>=0) {
        # 3420 "./neo-c.h"
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phsVar$ph_key_position(struct map$2char$phsVar$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_key_position"; neo_current_frame = &fr;
    int pos;
    struct list_item$1char$ph* it;
    # 3404 "./neo-c.h"
    if(self==((void*)0)) {
        # 3401 "./neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 3404 "./neo-c.h"
    pos=0;
    # 3405 "./neo-c.h"
    it=self->key_list->head;
    # 3414 "./neo-c.h"
    while(it!=((void*)0)) {
        # 3410 "./neo-c.h"
        if((!by_pointer&&string_equals(it->item,key))||(by_pointer&&it->item==key)) {
            # 3408 "./neo-c.h"
                        neo_current_frame = fr.prev;
            return pos;
        }
        # 3410 "./neo-c.h"
        it=it->next;
        # 3411 "./neo-c.h"
        pos++;
    }
    # 3414 "./neo-c.h"
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
    struct list_item$1char$ph* it_10;
    int i_11;
    struct list_item$1char$ph* prev_it_12;
    struct list_item$1char$ph* it_13;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_14;
    struct list_item$1char$ph* prev_it_15;
    # 1891 "./neo-c.h"
    if(self==((void*)0)) {
        # 1888 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1894 "./neo-c.h"
    if(head<0) {
        # 1892 "./neo-c.h"
        head+=self->len;
    }
    # 1898 "./neo-c.h"
    if(tail<0) {
        # 1895 "./neo-c.h"
        tail+=self->len+1;
    }
    # 1904 "./neo-c.h"
    if(head>tail) {
        # 1899 "./neo-c.h"
        tmp=tail;
        # 1900 "./neo-c.h"
        tail=head;
        # 1901 "./neo-c.h"
        head=tmp;
    }
    # 1908 "./neo-c.h"
    if(head<0) {
        # 1905 "./neo-c.h"
        head=0;
    }
    # 1912 "./neo-c.h"
    if(tail>self->len) {
        # 1909 "./neo-c.h"
        tail=self->len;
    }
    # 1916 "./neo-c.h"
    if(head>=self->len) {
        # 1913 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1920 "./neo-c.h"
    if(head==tail) {
        # 1917 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2015 "./neo-c.h"
    if(head==0&&tail==self->len) {
        # 1922 "./neo-c.h"
        list$1char$ph_reset(self);
    }
    else if(head==0) {
        # 1925 "./neo-c.h"
        it=self->head;
        # 1926 "./neo-c.h"
        i=0;
        # 1948 "./neo-c.h"
        while(it!=((void*)0)) {
            # 1947 "./neo-c.h"
            if(i<tail) {
                # 1929 "./neo-c.h"
                prev_it=it;
                # 1931 "./neo-c.h"
                it=it->next;
                # 1932 "./neo-c.h"
                i++;
                # 1934 "./neo-c.h"
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1934, 309);
                # 1936 "./neo-c.h"
                self->len--;
            }
            else if(i==tail) {
                # 1939 "./neo-c.h"
                self->head=it;
                # 1940 "./neo-c.h"
                self->head->prev=((void*)0);
                # 1941 "./neo-c.h"
                break;
            }
            else {
                # 1944 "./neo-c.h"
                it=it->next;
                # 1945 "./neo-c.h"
                i++;
            }
        }
    }
    else if(tail==self->len) {
        # 1950 "./neo-c.h"
        it_10=self->head;
        # 1951 "./neo-c.h"
        i_11=0;
        # 1973 "./neo-c.h"
        while(it_10!=((void*)0)) {
            # 1958 "./neo-c.h"
            if(i_11==head) {
                # 1954 "./neo-c.h"
                self->tail=it_10->prev;
                # 1955 "./neo-c.h"
                self->tail->next=((void*)0);
            }
            # 1972 "./neo-c.h"
            if(i_11>=head) {
                # 1959 "./neo-c.h"
                prev_it_12=it_10;
                # 1961 "./neo-c.h"
                it_10=it_10->next;
                # 1962 "./neo-c.h"
                i_11++;
                # 1964 "./neo-c.h"
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1964, 310);
                # 1966 "./neo-c.h"
                self->len--;
            }
            else {
                # 1969 "./neo-c.h"
                it_10=it_10->next;
                # 1970 "./neo-c.h"
                i_11++;
            }
        }
    }
    else {
        # 1975 "./neo-c.h"
        it_13=self->head;
        # 1977 "./neo-c.h"
        head_prev_it=((void*)0);
        # 1978 "./neo-c.h"
        tail_it=((void*)0);
        # 1981 "./neo-c.h"
        i_14=0;
        # 2007 "./neo-c.h"
        while(it_13!=((void*)0)) {
            # 1986 "./neo-c.h"
            if(i_14==head) {
                # 1984 "./neo-c.h"
                head_prev_it=it_13->prev;
            }
            # 1990 "./neo-c.h"
            if(i_14==tail) {
                # 1987 "./neo-c.h"
                tail_it=it_13;
            }
            # 2005 "./neo-c.h"
            if(i_14>=head&&i_14<tail) {
                # 1992 "./neo-c.h"
                prev_it_15=it_13;
                # 1994 "./neo-c.h"
                it_13=it_13->next;
                # 1995 "./neo-c.h"
                i_14++;
                # 1997 "./neo-c.h"
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1997, 311);
                # 1999 "./neo-c.h"
                self->len--;
            }
            else {
                # 2002 "./neo-c.h"
                it_13=it_13->next;
                # 2003 "./neo-c.h"
                i_14++;
            }
        }
        # 2010 "./neo-c.h"
        if(head_prev_it!=((void*)0)) {
            # 2008 "./neo-c.h"
            head_prev_it->next=tail_it;
        }
        # 2013 "./neo-c.h"
        if(tail_it!=((void*)0)) {
            # 2011 "./neo-c.h"
            tail_it->prev=head_prev_it;
        }
    }
    # 2015 "./neo-c.h"
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
    # 1852 "./neo-c.h"
    if(self==((void*)0)) {
        # 1849 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1852 "./neo-c.h"
    it=self->head;
    # 1859 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1854 "./neo-c.h"
        prev_it=it;
        # 1855 "./neo-c.h"
        it=it->next;
        # 1856 "./neo-c.h"
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1856, 308);
    }
    # 1859 "./neo-c.h"
    self->head=((void*)0);
    # 1860 "./neo-c.h"
    self->tail=((void*)0);
    # 1862 "./neo-c.h"
    self->len=0;
    # 1864 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3sType$phchar$phsNode$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple3$3sType$phchar$phsNode$ph* result;
    struct tuple3$3sType$phchar$phsNode$ph* __result_obj__0;
    struct tuple3$3sType$phchar$phsNode$ph* result_16;
    # 1682 "./neo-c.h"
    # 1689 "./neo-c.h"
    if(self==((void*)0)) {
        # 1685 "./neo-c.h"
        # 1686 "./neo-c.h"
        memset(&result,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
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
    memset(&result_16,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    # 1697 "./neo-c.h"
        __result_obj__0 = result_16;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3sType$phchar$phsNode$ph$ph_end"; neo_current_frame = &fr;
    # 1721 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
            neo_current_frame = fr.prev;
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3sType$phchar$phsNode$ph$ph_next"; neo_current_frame = &fr;
    struct tuple3$3sType$phchar$phsNode$ph* result;
    struct tuple3$3sType$phchar$phsNode$ph* __result_obj__0;
    struct tuple3$3sType$phchar$phsNode$ph* result_17;
    # 1701 "./neo-c.h"
    # 1709 "./neo-c.h"
    if(self==((void*)0)||self->it==((void*)0)) {
        # 1704 "./neo-c.h"
        # 1705 "./neo-c.h"
        memset(&result,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
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
    memset(&result_17,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    # 1717 "./neo-c.h"
        __result_obj__0 = result_17;
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
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 353));
    }
    # 4 "CVALUE_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 3 "CVALUE_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 354);
    }
    # 5 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        # 4 "CVALUE_finalize"
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 355));
    }
    # 6 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        # 5 "CVALUE_finalize"
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 356));
    }
    # 7 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        # 6 "CVALUE_finalize"
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 357));
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
    # 4023 "./neo-c.h"
    # 4025 "./neo-c.h"
    # 4026 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sFun* ));
    # 4032 "./neo-c.h"
    if(self==((void*)0)) {
        # 4029 "./neo-c.h"
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4029, 360);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4029, 383);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4029, 384);
        return __result_obj__0;
    }
    # 4032 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 4033 "./neo-c.h"
    hash=key_hash%self->size;
    # 4034 "./neo-c.h"
    it=hash;
    # 4056 "./neo-c.h"
    while((_Bool)1) {
        # 4054 "./neo-c.h"
        if(self->item_existance[it]) {
            # 4044 "./neo-c.h"
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                # 4041 "./neo-c.h"
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4041, 385);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4041, 386);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4041, 387);
                return __result_obj__0;
            }
            # 4047 "./neo-c.h"
            if(++it>=self->size) {
                # 4045 "./neo-c.h"
                it=0;
            }
            # 4050 "./neo-c.h"
            if(it==hash) {
                # 4048 "./neo-c.h"
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4048, 388);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4048, 389);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4048, 390);
                return __result_obj__0;
            }
        }
        else {
            # 4052 "./neo-c.h"
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4052, 391);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4052, 392);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4052, 393);
            return __result_obj__0;
        }
    }
    # 4056 "./neo-c.h"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4056, 394);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4056, 395);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4056, 396);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    # 1 "sFun_finalize"
    # 3 "sFun_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 2 "sFun_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 361));
    }
    # 4 "sFun_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 3 "sFun_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 362);
    }
    # 5 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 4 "sFun_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 363);
    }
    # 6 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 5 "sFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 364);
    }
    # 7 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        # 6 "sFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 365);
    }
    # 8 "sFun_finalize"
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        # 7 "sFun_finalize"
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 366);
    }
    # 9 "sFun_finalize"
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        # 8 "sFun_finalize"
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 19, 369);
    }
    # 10 "sFun_finalize"
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        # 9 "sFun_finalize"
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 372);
    }
    # 11 "sFun_finalize"
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        # 10 "sFun_finalize"
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 373));
    }
    # 12 "sFun_finalize"
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        # 11 "sFun_finalize"
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 374));
    }
    # 13 "sFun_finalize"
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        # 12 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 375);
    }
    # 14 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        # 13 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 376);
    }
    # 15 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        # 14 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 377);
    }
    # 16 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        # 15 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 378);
    }
    # 17 "sFun_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 16 "sFun_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 379));
    }
    # 18 "sFun_finalize"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 17 "sFun_finalize"
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 380));
    }
    # 19 "sFun_finalize"
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        # 18 "sFun_finalize"
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 381));
    }
    # 20 "sFun_finalize"
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        # 19 "sFun_finalize"
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 382));
    }
            neo_current_frame = fr.prev;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sVar$ph* it;
    struct list_item$1sVar$ph* prev_it;
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 368);
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
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 367);
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
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 370);
    }
    # 4 "sBlock_finalize"
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        # 3 "sBlock_finalize"
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 371);
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
    # 4023 "./neo-c.h"
    # 4025 "./neo-c.h"
    # 4026 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sFun* ));
    # 4032 "./neo-c.h"
    if(self==((void*)0)) {
        # 4029 "./neo-c.h"
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4029, 397);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4029, 398);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4029, 399);
        return __result_obj__0;
    }
    # 4032 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 4033 "./neo-c.h"
    hash=key_hash%self->size;
    # 4034 "./neo-c.h"
    it=hash;
    # 4056 "./neo-c.h"
    while((_Bool)1) {
        # 4054 "./neo-c.h"
        if(self->item_existance[it]) {
            # 4044 "./neo-c.h"
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                # 4041 "./neo-c.h"
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4041, 400);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4041, 401);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4041, 402);
                return __result_obj__0;
            }
            # 4047 "./neo-c.h"
            if(++it>=self->size) {
                # 4045 "./neo-c.h"
                it=0;
            }
            # 4050 "./neo-c.h"
            if(it==hash) {
                # 4048 "./neo-c.h"
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4048, 403);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4048, 404);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4048, 405);
                return __result_obj__0;
            }
        }
        else {
            # 4052 "./neo-c.h"
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4052, 406);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4052, 407);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4052, 408);
            return __result_obj__0;
        }
    }
    # 4056 "./neo-c.h"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4056, 409);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4056, 410);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4056, 411);
    return __result_obj__0;
}

static int list$1tuple3$3sType$phchar$phsNode$ph$ph_length(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3sType$phchar$phsNode$ph$ph_length"; neo_current_frame = &fr;
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

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj49  ;
    struct list_item$1CVALUE$ph* litem_21;
    struct CVALUE*  __dec_obj50  ;
    struct list_item$1CVALUE$ph* litem_22;
    struct CVALUE*  __dec_obj51  ;
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 432);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1619, 433, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1619, 434);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj49=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1623, 436);
        come_call_finalizer(CVALUE_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 435);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_21=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1629, 437, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1629, 438);
        # 1631 "./neo-c.h"
        litem_21->prev=self->head;
        # 1632 "./neo-c.h"
        litem_21->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj50=litem_21->item,
        litem_21->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1633, 440);
        come_call_finalizer(CVALUE_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 439);
        # 1635 "./neo-c.h"
        self->tail=litem_21;
        # 1636 "./neo-c.h"
        self->head->next=litem_21;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_22=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1639, 441, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1639, 442);
        # 1641 "./neo-c.h"
        litem_22->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_22->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj51=litem_22->item,
        litem_22->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1643, 444);
        come_call_finalizer(CVALUE_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 443);
        # 1645 "./neo-c.h"
        self->tail->next=litem_22;
        # 1646 "./neo-c.h"
        self->tail=litem_22;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 445);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_26  ;
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
    memset(&result_26,0,sizeof(char* ));
    # 1697 "./neo-c.h"
        __result_obj__0 = result_26;
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
    char*  result_28  ;
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
    memset(&result_28,0,sizeof(char* ));
    # 1717 "./neo-c.h"
        __result_obj__0 = result_28;
    neo_current_frame = fr.prev;
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

static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_30  ;
    # 2145 "./neo-c.h"
    # 2153 "./neo-c.h"
    if(self==((void*)0)) {
        # 2148 "./neo-c.h"
        # 2149 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sType* ));
        # 2150 "./neo-c.h"
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 2150, 465);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2150, 466);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2150, 467);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2153, 468);
    }
    # 2157 "./neo-c.h"
    if(position<0) {
        # 2154 "./neo-c.h"
        position+=self->len;
    }
    # 2157 "./neo-c.h"
    it=self->head;
    # 2158 "./neo-c.h"
    i=0;
    # 2165 "./neo-c.h"
    while(it!=((void*)0)) {
        # 2163 "./neo-c.h"
        if(position==i) {
            # 2161 "./neo-c.h"
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "./neo-c.h", 2161, 469);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2161, 470);
            return __result_obj__0;
        }
        # 2163 "./neo-c.h"
        it=it->next;
        # 2164 "./neo-c.h"
        i++;
    }
    # 2167 "./neo-c.h"
    # 2168 "./neo-c.h"
    memset(&default_value_30,0,sizeof(struct sType* ));
    # 2169 "./neo-c.h"
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_30, "./neo-c.h", 2169, 471);
    come_call_finalizer(sType_finalize, default_value_30, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 472);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 473);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_31  ;
    # 2145 "./neo-c.h"
    # 2153 "./neo-c.h"
    if(self==((void*)0)) {
        # 2148 "./neo-c.h"
        # 2149 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sType* ));
        # 2150 "./neo-c.h"
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 2150, 474);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2150, 475);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2150, 476);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2153, 477);
    }
    # 2157 "./neo-c.h"
    if(position<0) {
        # 2154 "./neo-c.h"
        position+=self->len;
    }
    # 2157 "./neo-c.h"
    it=self->head;
    # 2158 "./neo-c.h"
    i=0;
    # 2165 "./neo-c.h"
    while(it!=((void*)0)) {
        # 2163 "./neo-c.h"
        if(position==i) {
            # 2161 "./neo-c.h"
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "./neo-c.h", 2161, 478);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2161, 479);
            return __result_obj__0;
        }
        # 2163 "./neo-c.h"
        it=it->next;
        # 2164 "./neo-c.h"
        i++;
    }
    # 2167 "./neo-c.h"
    # 2168 "./neo-c.h"
    memset(&default_value_31,0,sizeof(struct sType* ));
    # 2169 "./neo-c.h"
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_31, "./neo-c.h", 2169, 480);
    come_call_finalizer(sType_finalize, default_value_31, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 481);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 482);
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_add"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj61  ;
    struct list_item$1CVALUE$ph* litem_38;
    struct CVALUE*  __dec_obj62  ;
    struct list_item$1CVALUE$ph* litem_39;
    struct CVALUE*  __dec_obj63  ;
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 534);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1534, 535, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1534, 536);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj61=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1538, 538);
        come_call_finalizer(CVALUE_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 537);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_38=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1544, 539, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1544, 540);
        # 1546 "./neo-c.h"
        litem_38->prev=self->head;
        # 1547 "./neo-c.h"
        litem_38->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj62=litem_38->item,
        litem_38->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1548, 542);
        come_call_finalizer(CVALUE_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 541);
        # 1550 "./neo-c.h"
        self->tail=litem_38;
        # 1551 "./neo-c.h"
        self->head->next=litem_38;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_39=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1554, 543, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1554, 544);
        # 1556 "./neo-c.h"
        litem_39->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_39->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj63=litem_39->item,
        litem_39->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1558, 546);
        come_call_finalizer(CVALUE_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 545);
        # 1560 "./neo-c.h"
        self->tail->next=litem_39;
        # 1561 "./neo-c.h"
        self->tail=litem_39;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 547);
    neo_current_frame = fr.prev;
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

static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_reset"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
    # 1852 "./neo-c.h"
    if(self==((void*)0)) {
        # 1849 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1852 "./neo-c.h"
    it=self->head;
    # 1859 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1854 "./neo-c.h"
        prev_it=it;
        # 1855 "./neo-c.h"
        it=it->next;
        # 1856 "./neo-c.h"
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1856, 608);
    }
    # 1859 "./neo-c.h"
    self->head=((void*)0);
    # 1860 "./neo-c.h"
    self->tail=((void*)0);
    # 1862 "./neo-c.h"
    self->len=0;
    # 1864 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewChannel_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNewChannel* __result_obj__0;
    # 557 "37var2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNewChannel*)come_increment_ref_count(self, "37var2.nc", 557, 733),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 557, 734);
    # 560 "37var2.nc"
        __result_obj__0 = (struct sNewChannel*)come_increment_ref_count(self, "37var2.nc", 560, 735);
    come_call_finalizer(sNewChannel_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "37var2.nc}", 560, 737);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNewChannel_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "37var2.nc}", 560, 738);
    return __result_obj__0;
}

char*  sNewChannel_kind(struct sNewChannel* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewChannel_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 562 "37var2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNewChannel","37var2.nc",562))), "37var2.nc", 562, 739);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 562, 740));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "37var2.nc", 562, 741));
    return __result_obj__0;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewChannel_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    # 567 "37var2.nc"
    node=(struct sNode*)come_increment_ref_count(create_null_node(info), "37var2.nc", 567, 742);
    # 573 "37var2.nc"
    Value=node_compile(node,info);
    if(!Value) {
        # 570 "37var2.nc"
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 570, 743):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 573 "37var2.nc"
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 573, 744):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNewChannel_finalize(struct sNewChannel* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewChannel_finalize"; neo_current_frame = &fr;
    # 1 "sNewChannel_finalize"
    # 3 "sNewChannel_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sNewChannel_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNewChannel_finalize", 2, 736));
    }
        neo_current_frame = fr.prev;
}

struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWriteChannelNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj82;
    struct sNode* __dec_obj83;
    struct sWriteChannelNode* __result_obj__0;
    # 582 "37var2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sWriteChannelNode*)come_increment_ref_count(self, "37var2.nc", 582, 745),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 582, 746);
    # 584 "37var2.nc"
    __dec_obj82=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp, "37var2.nc", 584, 748);
    (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0, (void*)0, "37var2.nc", 584, 747) :0);
    # 585 "37var2.nc"
    __dec_obj83=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value, "37var2.nc", 585, 750);
    (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0, (void*)0, "37var2.nc", 585, 749) :0);
    # 588 "37var2.nc"
        __result_obj__0 = (struct sWriteChannelNode*)come_increment_ref_count(self, "37var2.nc", 588, 751);
    come_call_finalizer(sWriteChannelNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "37var2.nc}", 588, 755);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 588, 756):(void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 588, 757):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sWriteChannelNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "37var2.nc}", 588, 758);
    return __result_obj__0;
}

char*  sWriteChannelNode_kind(struct sWriteChannelNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWriteChannelNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 590 "37var2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sWriteChannelNode","37var2.nc",590))), "37var2.nc", 590, 759);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 590, 760));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "37var2.nc", 590, 761));
    return __result_obj__0;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWriteChannelNode_compile"; neo_current_frame = &fr;
    _Bool Value;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    _Bool Value_72;
    _Bool __result_obj__0;
    struct CVALUE*  right_value  ;
    struct sType*  right_type  ;
    struct sType*  left_type  ;
    struct sType*  channel_type  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj84  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj85  ;
    # 599 "37var2.nc"
    Value=node_compile(self->exp,info);
    if(!Value) {
        # 596 "37var2.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 599 "37var2.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "37var2.nc", 599, 762);
    # 605 "37var2.nc"
    Value_72=node_compile(self->right_value,info);
    if(!Value_72) {
        # 602 "37var2.nc"
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 602, 763);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 605 "37var2.nc"
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "37var2.nc", 605, 764);
    # 606 "37var2.nc"
    right_type=right_value->type;
    # 608 "37var2.nc"
    __right_value0 = (void*)0;
    left_type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "37var2.nc", 608, 765);
    # 610 "37var2.nc"
    channel_type=(struct sType* )come_increment_ref_count(left_type->mChannelType, "37var2.nc", 610, 766);
    # 612 "37var2.nc"
    static int var_num=0;
    # 613 "37var2.nc"
    var_num++;
    # 620 "37var2.nc"
    if(right_value->type->mHeap) {
        # 616 "37var2.nc"
        err_msg(info,"channel can't get heap type");
        # 617 "37var2.nc"
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 617, 767);
        come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 617, 768);
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 617, 769);
        come_call_finalizer(sType_finalize, channel_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 617, 770);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 620 "37var2.nc"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "37var2.nc", 620, 771, "struct buffer* "), "37var2.nc", 620, 772)), "37var2.nc", 620, 773);
    # 622 "37var2.nc"
    __right_value0 = (void*)0;
    buffer_append_format(buf,"char __channel_buf%d[sizeof(%s)+1];\n",var_num,((char* )(__right_value0=make_type_name_string(channel_type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 622, 774));
    # 623 "37var2.nc"
    __right_value0 = (void*)0;
    buffer_append_format(buf,"%s* __channel_p%d = __channel_buf%d;\n",((char* )(__right_value0=make_type_name_string(channel_type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))),var_num,var_num);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 623, 775));
    # 624 "37var2.nc"
    buffer_append_format(buf,"*__channel_p%d = %s;\n",var_num,right_value->c_value);
    # 626 "37var2.nc"
    __right_value0 = (void*)0;
    add_come_code(info,((char* )(__right_value0=buffer_to_string(buf))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 626, 776));
    # 628 "37var2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 628, 777, "struct CVALUE* "), "37var2.nc", 628, 778)), "37var2.nc", 628, 779);
    # 630 "37var2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj84=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value->c_value,var_num,((char* )(__right_value0=make_type_name_string(channel_type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0)))), "37var2.nc", 630, 781);
    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 630, 780);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 630, 782));
    # 632 "37var2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj85=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "37var2.nc", 632, 783, "struct sType* "), "37var2.nc", 632, 784),(char*)come_increment_ref_count(xsprintf("void"), "37var2.nc", 632, 785),(_Bool)0,info,(_Bool)0,0), "37var2.nc", 632, 787);
    come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 632, 786);
    # 633 "37var2.nc"
    come_value2->type->mPointerNum=1;
    # 634 "37var2.nc"
    come_value2->var=((void*)0);
    # 636 "37var2.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "37var2.nc", 636, 788));
    # 638 "37var2.nc"
    add_come_last_code(info,"%s",come_value2->c_value);
    # 640 "37var2.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 640, 789);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 640, 790);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 640, 791);
    come_call_finalizer(sType_finalize, channel_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 640, 792);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 640, 793);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 640, 794);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sWriteChannelNode_finalize(struct sWriteChannelNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWriteChannelNode_finalize"; neo_current_frame = &fr;
    # 1 "sWriteChannelNode_finalize"
    # 3 "sWriteChannelNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sWriteChannelNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sWriteChannelNode_finalize", 2, 752));
    }
    # 4 "sWriteChannelNode_finalize"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 3 "sWriteChannelNode_finalize"
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sWriteChannelNode_finalize", 3, 753):(void*)0);
    }
    # 5 "sWriteChannelNode_finalize"
    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
        # 4 "sWriteChannelNode_finalize"
        ((self->right_value) ? self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0,(void*)0, "sWriteChannelNode_finalize", 4, 754):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReadChannelNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj86;
    struct sReadChannelNode* __result_obj__0;
    # 649 "37var2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sReadChannelNode*)come_increment_ref_count(self, "37var2.nc", 649, 795),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 649, 796);
    # 651 "37var2.nc"
    __dec_obj86=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp, "37var2.nc", 651, 798);
    (__dec_obj86 ? __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0, (void*)0, "37var2.nc", 651, 797) :0);
    # 654 "37var2.nc"
        __result_obj__0 = (struct sReadChannelNode*)come_increment_ref_count(self, "37var2.nc", 654, 799);
    come_call_finalizer(sReadChannelNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "37var2.nc}", 654, 802);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 654, 803):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sReadChannelNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "37var2.nc}", 654, 804);
    return __result_obj__0;
}

char*  sReadChannelNode_kind(struct sReadChannelNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReadChannelNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 656 "37var2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sReadChannelNode","37var2.nc",656))), "37var2.nc", 656, 805);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 656, 806));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "37var2.nc", 656, 807));
    return __result_obj__0;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReadChannelNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  var_type  ;
    struct sType*  channel_type  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    void* __right_value2 = (void*)0;
    char*  __dec_obj87  ;
    struct sType*  __dec_obj88  ;
    # 661 "37var2.nc"
    exp=(struct sNode*)come_increment_ref_count(self->exp, "37var2.nc", 661, 808);
    # 667 "37var2.nc"
    Value=node_compile(exp,info);
    if(!Value) {
        # 664 "37var2.nc"
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 664, 809):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 667 "37var2.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "37var2.nc", 667, 810);
    # 669 "37var2.nc"
    __right_value0 = (void*)0;
    var_type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "37var2.nc", 669, 811);
    # 676 "37var2.nc"
    if(!var_type->mChannel) {
        # 672 "37var2.nc"
        err_msg(info,"require right type is channel");
        # 673 "37var2.nc"
                __result_obj__0 = (_Bool)1;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 673, 812):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 673, 813);
        come_call_finalizer(sType_finalize, var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 673, 814);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 676 "37var2.nc"
    channel_type=(struct sType* )come_increment_ref_count(var_type->mChannelType, "37var2.nc", 676, 815);
    # 678 "37var2.nc"
    static int var_num=0;
    # 679 "37var2.nc"
    var_num++;
    # 681 "37var2.nc"
    __right_value0 = (void*)0;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num,((char* )(__right_value0=make_type_name_string(channel_type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 681, 816));
    # 683 "37var2.nc"
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 683, 817, "struct CVALUE* "), "37var2.nc", 683, 818)), "37var2.nc", 683, 819);
    # 685 "37var2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj87=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value->c_value,var_num,((char* )(__right_value0=make_type_name_string(channel_type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))),((char* )(__right_value1=make_type_name_string(channel_type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))),var_num), "37var2.nc", 685, 821);
    __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 685, 820);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 685, 822));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 685, 823));
    # 686 "37var2.nc"
    __right_value0 = (void*)0;
    __dec_obj88=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(channel_type), "37var2.nc", 686, 825);
    come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 686, 824);
    # 687 "37var2.nc"
    come_value2->var=((void*)0);
    # 689 "37var2.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "37var2.nc", 689, 826));
    # 691 "37var2.nc"
    add_come_last_code(info,"%s",come_value2->c_value);
    # 693 "37var2.nc"
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 693, 827):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 693, 828);
    come_call_finalizer(sType_finalize, var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 693, 829);
    come_call_finalizer(sType_finalize, channel_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 693, 830);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 693, 831);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sReadChannelNode_finalize(struct sReadChannelNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReadChannelNode_finalize"; neo_current_frame = &fr;
    # 1 "sReadChannelNode_finalize"
    # 3 "sReadChannelNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sReadChannelNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sReadChannelNode_finalize", 2, 800));
    }
    # 4 "sReadChannelNode_finalize"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 3 "sReadChannelNode_finalize"
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sReadChannelNode_finalize", 3, 801):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNode* store_var(char*  name  , struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType*  type  , _Bool alloc, struct sNode* right_value, struct sInfo*  info  , _Bool iter_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "store_var"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sStoreNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 700 "37var2.nc"
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "37var2.nc", 700, 836, "struct sNode");
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value1=sStoreNode_initialize((struct sStoreNode* )come_increment_ref_count((struct sStoreNode *)come_calloc(1, sizeof(struct sStoreNode )*(1), "37var2.nc", 700, 832, "struct sStoreNode* "), "37var2.nc", 700, 833),(char* )come_increment_ref_count(name, "37var2.nc", 700, 834),multiple_assign,multiple_declare,type,alloc,right_value,info,(char*)come_increment_ref_count(xsprintf(""), "37var2.nc", 700, 835),iter_))), "37var2.nc", 700, 837);
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    _inf_value1->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "37var2.nc", 700, 858);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 700, 859));
    come_call_finalizer(sStoreNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 700, 860);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "37var2.nc", 700, 861):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 700, 862):(void*)0);
    return __result_obj__0;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreNode_clone"; neo_current_frame = &fr;
    struct sStoreNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sStoreNode*  result  ;
    char*  __dec_obj89  ;
    char*  __dec_obj90  ;
    struct sType*  __dec_obj91  ;
    struct sNode* __dec_obj92;
    struct list$1char$ph* __dec_obj93;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj94;
    char*  __dec_obj95  ;
    # 3 "sStoreNode_clone"
    # 5 "sStoreNode_clone"
    if(self==(void*)0) {
        # 4 "sStoreNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sStoreNode_clone"
    result=(struct sStoreNode* )come_increment_ref_count((struct sStoreNode *)come_calloc(1, sizeof(struct sStoreNode )*(1), "sStoreNode_clone", 5, 838, "struct sStoreNode* "), "sStoreNode_clone", 5, 839);
    # 7 "sStoreNode_clone"
    if(self!=((void*)0)) {
        # 6 "sStoreNode_clone"
        result->sline=self->sline;
    }
    # 8 "sStoreNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sStoreNode_clone"
        __right_value0 = (void*)0;
        __dec_obj89=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sStoreNode_clone", 7, 840, "char* "), "sStoreNode_clone", 7, 842);
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "sStoreNode_clone", 7, 841);
    }
    # 9 "sStoreNode_clone"
    if(self!=((void*)0)) {
        # 8 "sStoreNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sStoreNode_clone"
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        # 9 "sStoreNode_clone"
        __right_value0 = (void*)0;
        __dec_obj90=result->name,
        result->name=(char* )come_increment_ref_count((char* )come_memdup(self->name, "sStoreNode_clone", 9, 843, "char* "), "sStoreNode_clone", 9, 845);
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "sStoreNode_clone", 9, 844);
    }
    # 11 "sStoreNode_clone"
    if(self!=((void*)0)) {
        # 10 "sStoreNode_clone"
        result->alloc=self->alloc;
    }
    # 12 "sStoreNode_clone"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 11 "sStoreNode_clone"
        __right_value0 = (void*)0;
        __dec_obj91=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sStoreNode_clone", 11, 847);
        come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sStoreNode_clone", 11, 846);
    }
    # 13 "sStoreNode_clone"
    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
        # 12 "sStoreNode_clone"
        __right_value0 = (void*)0;
        __dec_obj92=result->right_value,
        result->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value), "sStoreNode_clone", 12, 849);
        (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0, (void*)0, "sStoreNode_clone", 12, 848) :0);
    }
    # 14 "sStoreNode_clone"
    if(self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        # 13 "sStoreNode_clone"
        __right_value0 = (void*)0;
        __dec_obj93=result->multiple_assign,
        result->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->multiple_assign), "sStoreNode_clone", 13, 851);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sStoreNode_clone", 13, 850);
    }
    # 15 "sStoreNode_clone"
    if(self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        # 14 "sStoreNode_clone"
        __right_value0 = (void*)0;
        __dec_obj94=result->multiple_declare,
        result->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(self->multiple_declare), "sStoreNode_clone", 14, 853);
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sStoreNode_clone", 14, 852);
    }
    # 16 "sStoreNode_clone"
    if(self!=((void*)0)&&self->attribute!=((void*)0)) {
        # 15 "sStoreNode_clone"
        __right_value0 = (void*)0;
        __dec_obj95=result->attribute,
        result->attribute=(char* )come_increment_ref_count((char* )come_memdup(self->attribute, "sStoreNode_clone", 15, 854, "char* "), "sStoreNode_clone", 15, 856);
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0, "sStoreNode_clone", 15, 855);
    }
    # 17 "sStoreNode_clone"
    if(self!=((void*)0)) {
        # 16 "sStoreNode_clone"
        result->iter_=self->iter_;
    }
    # 17 "sStoreNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sStoreNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sStoreNode_clone}", 17, 857);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char*  name  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj96  ;
    struct sLoadNode* __result_obj__0;
    # 707 "37var2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLoadNode*)come_increment_ref_count(self, "37var2.nc", 707, 863),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 707, 864);
    # 709 "37var2.nc"
    __right_value0 = (void*)0;
    __dec_obj96=self->name,
    self->name=(char* )come_increment_ref_count(__builtin_string(name,"37var2.nc",709), "37var2.nc", 709, 866);
    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 709, 865);
    # 712 "37var2.nc"
        __result_obj__0 = (struct sLoadNode*)come_increment_ref_count(self, "37var2.nc", 712, 867);
    come_call_finalizer(sLoadNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "37var2.nc}", 712, 870);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 712, 871));
    neo_current_frame = fr.prev;
    come_call_finalizer(sLoadNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "37var2.nc}", 712, 872);
    return __result_obj__0;
}

char*  sLoadNode_kind(struct sLoadNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 714 "37var2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLoadNode","37var2.nc",714))), "37var2.nc", 714, 873);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 714, 874));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "37var2.nc", 714, 875));
    return __result_obj__0;
}

_Bool sLoadNode_terminated(struct sLoadNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadNode_terminated"; neo_current_frame = &fr;
    # 718 "37var2.nc"
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadNode_compile"; neo_current_frame = &fr;
    struct sClass*  current_stack_frame_struct  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    _Bool _conditional_value_X0;
    struct sVar*  parent_var  ;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    char*  __dec_obj97  ;
    struct sType*  __dec_obj98  ;
    _Bool __result_obj__0;
    struct sVar*  var_  ;
    void* __right_value2 = (void*)0;
    struct sFun*  fun  ;
    struct CVALUE*  come_value_73  ;
    char*  __dec_obj99  ;
    struct sType*  __dec_obj100  ;
    struct CVALUE*  come_value_74  ;
    char*  __dec_obj101  ;
    struct sType*  __dec_obj102  ;
    struct CVALUE*  come_value_75  ;
    char*  __dec_obj103  ;
    struct sType*  __dec_obj104  ;
    struct sType*  original_load_var_type  ;
    struct sType*  __dec_obj105  ;
    struct sType*  original_load_var_type_76  ;
    struct sType*  __dec_obj106  ;
    struct sType*  original_load_var_type_77  ;
    struct sType*  __dec_obj107  ;
    # 723 "37var2.nc"
    current_stack_frame_struct=info->current_stack_frame_struct;
    # 747 "37var2.nc"
    if(({(_conditional_value_X0=(current_stack_frame_struct&&((struct sVar* )(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char* )(__right_value0=__builtin_string(self->name,"37var2.nc",725))),((void*)0),(_Bool)0)))==((void*)0)));    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 725, 876));
    come_call_finalizer(sVar_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 725, 877);
_conditional_value_X0;})) {
        # 726 "37var2.nc"
        parent_var=get_variable_from_table(info->lv_table->mParent,self->name);
        # 745 "37var2.nc"
        if(parent_var!=((void*)0)) {
            # 744 "37var2.nc"
            if(string_operator_not_equals(parent_var->mFunName,info->come_fun->mName)) {
                # 730 "37var2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 730, 878, "struct CVALUE* "), "37var2.nc", 730, 879)), "37var2.nc", 730, 880);
                # 732 "37var2.nc"
                type=parent_var->mType;
                # 734 "37var2.nc"
                __right_value0 = (void*)0;
                __dec_obj97=come_value->c_value,
                come_value->c_value=(char* )come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var->mCValueName), "37var2.nc", 734, 882);
                __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 734, 881);
                # 735 "37var2.nc"
                __right_value0 = (void*)0;
                __dec_obj98=come_value->type,
                come_value->type=(struct sType* )come_increment_ref_count(sType_clone(type), "37var2.nc", 735, 884);
                come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 735, 883);
                # 736 "37var2.nc"
                come_value->var=parent_var;
                # 738 "37var2.nc"
                add_come_last_code(info,"%s",come_value->c_value);
                # 740 "37var2.nc"
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "37var2.nc", 740, 885));
                # 742 "37var2.nc"
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 742, 886);
                neo_current_frame = fr.prev;
                return __result_obj__0;
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 744, 887);
            }
        }
    }
    # 747 "37var2.nc"
    var_=get_variable_from_table(info->lv_table,self->name);
    # 791 "37var2.nc"
    if(var_==((void*)0)) {
        # 750 "37var2.nc"
        var_=get_variable_from_table(info->gv_table,self->name);
        # 789 "37var2.nc"
        if(var_==((void*)0)) {
            # 753 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(self->name,"37var2.nc",753))))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 753, 888));
            # 788 "37var2.nc"
            if(fun) {
                # 756 "37var2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                come_value_73=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 756, 889, "struct CVALUE* "), "37var2.nc", 756, 890)), "37var2.nc", 756, 891);
                # 758 "37var2.nc"
                __right_value0 = (void*)0;
                __dec_obj99=come_value_73->c_value,
                come_value_73->c_value=(char* )come_increment_ref_count(xsprintf("%s",fun->mName), "37var2.nc", 758, 893);
                __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 758, 892);
                # 759 "37var2.nc"
                __dec_obj100=come_value_73->type,
                come_value_73->type=(struct sType* )come_increment_ref_count(fun->mLambdaType, "37var2.nc", 759, 895);
                come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 759, 894);
                # 760 "37var2.nc"
                come_value_73->var=((void*)0);
                # 762 "37var2.nc"
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_73, "37var2.nc", 762, 896));
                # 764 "37var2.nc"
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value_73, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 764, 897);
                neo_current_frame = fr.prev;
                return __result_obj__0;
                come_call_finalizer(CVALUE_finalize, come_value_73, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 788, 898);
            }
            else {
                # 787 "37var2.nc"
                if(var_==((void*)0)) {
                    # 770 "37var2.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    come_value_74=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 770, 899, "struct CVALUE* "), "37var2.nc", 770, 900)), "37var2.nc", 770, 901);
                    # 772 "37var2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj101=come_value_74->c_value,
                    come_value_74->c_value=(char* )come_increment_ref_count(xsprintf("%s",self->name), "37var2.nc", 772, 903);
                    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 772, 902);
                    # 773 "37var2.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj102=come_value_74->type,
                    come_value_74->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "37var2.nc", 773, 904, "struct sType* "), "37var2.nc", 773, 905),(char*)come_increment_ref_count(xsprintf("void"), "37var2.nc", 773, 906),(_Bool)0,info,(_Bool)0,0), "37var2.nc", 773, 908);
                    come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 773, 907);
                    # 774 "37var2.nc"
                    come_value_74->type->mPointerNum=1;
                    # 775 "37var2.nc"
                    come_value_74->var=((void*)0);
                    # 777 "37var2.nc"
                    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_74, "37var2.nc", 777, 909));
                    # 779 "37var2.nc"
                    add_come_last_code(info,"%s;\n",come_value_74->c_value);
                    # 781 "37var2.nc"
                                        __result_obj__0 = (_Bool)1;
                    come_call_finalizer(CVALUE_finalize, come_value_74, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 781, 910);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                    come_call_finalizer(CVALUE_finalize, come_value_74, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 787, 911);
                }
                else {
                    # 784 "37var2.nc"
                    err_msg(info,"var not found(%s)(Z) at loading variable",self->name);
                    # 785 "37var2.nc"
                                        neo_current_frame = fr.prev;
                    return (_Bool)1;
                }
            }
        }
    }
    # 791 "37var2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_75=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 791, 912, "struct CVALUE* "), "37var2.nc", 791, 913)), "37var2.nc", 791, 914);
    # 792 "37var2.nc"
    __right_value0 = (void*)0;
    __dec_obj103=come_value_75->c_value,
    come_value_75->c_value=(char* )come_increment_ref_count(xsprintf("%s",var_->mCValueName), "37var2.nc", 792, 916);
    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 792, 915);
    # 793 "37var2.nc"
    __right_value0 = (void*)0;
    __dec_obj104=come_value_75->type,
    come_value_75->type=(struct sType* )come_increment_ref_count(sType_clone(var_->mType), "37var2.nc", 793, 918);
    come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 793, 917);
    # 794 "37var2.nc"
    come_value_75->var=var_;
    # 825 "37var2.nc"
    if(list$1sNode$ph_length(come_value_75->type->mArrayNum)>0) {
        # 823 "37var2.nc"
        if(info->in_typeof) {
            # 798 "37var2.nc"
            __right_value0 = (void*)0;
            original_load_var_type=(struct sType* )come_increment_ref_count(sType_clone(come_value_75->type), "37var2.nc", 798, 919);
            # 799 "37var2.nc"
            __right_value0 = (void*)0;
            __dec_obj105=come_value_75->type->mOriginalLoadVarType,
            come_value_75->type->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(original_load_var_type), "37var2.nc", 799, 921);
            come_call_finalizer(sType_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 799, 920);
            come_call_finalizer(sType_finalize, original_load_var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 823, 922);
        }
        else if(info->in_refference) {
            # 802 "37var2.nc"
            __right_value0 = (void*)0;
            original_load_var_type_76=(struct sType* )come_increment_ref_count(sType_clone(come_value_75->type), "37var2.nc", 802, 923);
            # 803 "37var2.nc"
            __dec_obj106=come_value_75->type->mOriginalLoadVarType,
            come_value_75->type->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(original_load_var_type_76, "37var2.nc", 803, 925);
            come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 803, 924);
            # 806 "37var2.nc"
            come_value_75->type->mArrayPointerNum++;
            come_call_finalizer(sType_finalize, original_load_var_type_76, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 823, 926);
        }
        else {
            # 809 "37var2.nc"
            __right_value0 = (void*)0;
            original_load_var_type_77=(struct sType* )come_increment_ref_count(sType_clone(come_value_75->type), "37var2.nc", 809, 927);
            # 810 "37var2.nc"
            __dec_obj107=come_value_75->type->mOriginalLoadVarType,
            come_value_75->type->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(original_load_var_type_77, "37var2.nc", 810, 929);
            come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 810, 928);
            # 813 "37var2.nc"
            list$1sNode$ph_delete(come_value_75->type->mArrayNum,0,1);
            # 822 "37var2.nc"
            if(come_value_75->type->mPointerNum>0) {
                # 816 "37var2.nc"
                come_value_75->type->mPointerNum++;
            }
            else {
                # 820 "37var2.nc"
                come_value_75->type->mArrayPointerNum++;
            }
            come_call_finalizer(sType_finalize, original_load_var_type_77, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 823, 934);
        }
    }
    # 825 "37var2.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_75, "37var2.nc", 825, 935));
    # 827 "37var2.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_75, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 827, 936);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLoadNode_finalize(struct sLoadNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadNode_finalize"; neo_current_frame = &fr;
    # 1 "sLoadNode_finalize"
    # 3 "sLoadNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sLoadNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLoadNode_finalize", 2, 868));
    }
    # 4 "sLoadNode_finalize"
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        # 3 "sLoadNode_finalize"
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0, "sLoadNode_finalize", 3, 869));
    }
        neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_delete"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    int tmp;
    struct list_item$1sNode$ph* it;
    int i;
    struct list_item$1sNode$ph* prev_it;
    struct list_item$1sNode$ph* it_78;
    int i_79;
    struct list_item$1sNode$ph* prev_it_80;
    struct list_item$1sNode$ph* it_81;
    struct list_item$1sNode$ph* head_prev_it;
    struct list_item$1sNode$ph* tail_it;
    int i_82;
    struct list_item$1sNode$ph* prev_it_83;
    # 1891 "./neo-c.h"
    if(self==((void*)0)) {
        # 1888 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1894 "./neo-c.h"
    if(head<0) {
        # 1892 "./neo-c.h"
        head+=self->len;
    }
    # 1898 "./neo-c.h"
    if(tail<0) {
        # 1895 "./neo-c.h"
        tail+=self->len+1;
    }
    # 1904 "./neo-c.h"
    if(head>tail) {
        # 1899 "./neo-c.h"
        tmp=tail;
        # 1900 "./neo-c.h"
        tail=head;
        # 1901 "./neo-c.h"
        head=tmp;
    }
    # 1908 "./neo-c.h"
    if(head<0) {
        # 1905 "./neo-c.h"
        head=0;
    }
    # 1912 "./neo-c.h"
    if(tail>self->len) {
        # 1909 "./neo-c.h"
        tail=self->len;
    }
    # 1916 "./neo-c.h"
    if(head>=self->len) {
        # 1913 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1920 "./neo-c.h"
    if(head==tail) {
        # 1917 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2015 "./neo-c.h"
    if(head==0&&tail==self->len) {
        # 1922 "./neo-c.h"
        list$1sNode$ph_reset(self);
    }
    else if(head==0) {
        # 1925 "./neo-c.h"
        it=self->head;
        # 1926 "./neo-c.h"
        i=0;
        # 1948 "./neo-c.h"
        while(it!=((void*)0)) {
            # 1947 "./neo-c.h"
            if(i<tail) {
                # 1929 "./neo-c.h"
                prev_it=it;
                # 1931 "./neo-c.h"
                it=it->next;
                # 1932 "./neo-c.h"
                i++;
                # 1934 "./neo-c.h"
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1934, 931);
                # 1936 "./neo-c.h"
                self->len--;
            }
            else if(i==tail) {
                # 1939 "./neo-c.h"
                self->head=it;
                # 1940 "./neo-c.h"
                self->head->prev=((void*)0);
                # 1941 "./neo-c.h"
                break;
            }
            else {
                # 1944 "./neo-c.h"
                it=it->next;
                # 1945 "./neo-c.h"
                i++;
            }
        }
    }
    else if(tail==self->len) {
        # 1950 "./neo-c.h"
        it_78=self->head;
        # 1951 "./neo-c.h"
        i_79=0;
        # 1973 "./neo-c.h"
        while(it_78!=((void*)0)) {
            # 1958 "./neo-c.h"
            if(i_79==head) {
                # 1954 "./neo-c.h"
                self->tail=it_78->prev;
                # 1955 "./neo-c.h"
                self->tail->next=((void*)0);
            }
            # 1972 "./neo-c.h"
            if(i_79>=head) {
                # 1959 "./neo-c.h"
                prev_it_80=it_78;
                # 1961 "./neo-c.h"
                it_78=it_78->next;
                # 1962 "./neo-c.h"
                i_79++;
                # 1964 "./neo-c.h"
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_80, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1964, 932);
                # 1966 "./neo-c.h"
                self->len--;
            }
            else {
                # 1969 "./neo-c.h"
                it_78=it_78->next;
                # 1970 "./neo-c.h"
                i_79++;
            }
        }
    }
    else {
        # 1975 "./neo-c.h"
        it_81=self->head;
        # 1977 "./neo-c.h"
        head_prev_it=((void*)0);
        # 1978 "./neo-c.h"
        tail_it=((void*)0);
        # 1981 "./neo-c.h"
        i_82=0;
        # 2007 "./neo-c.h"
        while(it_81!=((void*)0)) {
            # 1986 "./neo-c.h"
            if(i_82==head) {
                # 1984 "./neo-c.h"
                head_prev_it=it_81->prev;
            }
            # 1990 "./neo-c.h"
            if(i_82==tail) {
                # 1987 "./neo-c.h"
                tail_it=it_81;
            }
            # 2005 "./neo-c.h"
            if(i_82>=head&&i_82<tail) {
                # 1992 "./neo-c.h"
                prev_it_83=it_81;
                # 1994 "./neo-c.h"
                it_81=it_81->next;
                # 1995 "./neo-c.h"
                i_82++;
                # 1997 "./neo-c.h"
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_83, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1997, 933);
                # 1999 "./neo-c.h"
                self->len--;
            }
            else {
                # 2002 "./neo-c.h"
                it_81=it_81->next;
                # 2003 "./neo-c.h"
                i_82++;
            }
        }
        # 2010 "./neo-c.h"
        if(head_prev_it!=((void*)0)) {
            # 2008 "./neo-c.h"
            head_prev_it->next=tail_it;
        }
        # 2013 "./neo-c.h"
        if(tail_it!=((void*)0)) {
            # 2011 "./neo-c.h"
            tail_it->prev=head_prev_it;
        }
    }
    # 2015 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_reset"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    # 1852 "./neo-c.h"
    if(self==((void*)0)) {
        # 1849 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1852 "./neo-c.h"
    it=self->head;
    # 1859 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1854 "./neo-c.h"
        prev_it=it;
        # 1855 "./neo-c.h"
        it=it->next;
        # 1856 "./neo-c.h"
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1856, 930);
    }
    # 1859 "./neo-c.h"
    self->head=((void*)0);
    # 1860 "./neo-c.h"
    self->tail=((void*)0);
    # 1862 "./neo-c.h"
    self->len=0;
    # 1864 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_load_var(const char* var_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_load_var"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value2;
    struct sLoadNode* _inf_obj_value2;
    void* __right_value3 = (void*)0;
    struct sNode* node;
    struct sNode* __result_obj__0;
    # 833 "37var2.nc"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "37var2.nc", 833, 940, "struct sNode");
    _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value2=sLoadNode_initialize((struct sLoadNode* )come_increment_ref_count((struct sLoadNode *)come_calloc(1, sizeof(struct sLoadNode )*(1), "37var2.nc", 833, 937, "struct sLoadNode* "), "37var2.nc", 833, 938),(char* )come_increment_ref_count(__builtin_string(var_name,"37var2.nc",833), "37var2.nc", 833, 939),info))), "37var2.nc", 833, 941);
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    _inf_value2->left_value=(void*)sNodeBase_left_value;
    node=(struct sNode*)come_increment_ref_count(_inf_value2, "37var2.nc", 833, 951);
    come_call_finalizer(sLoadNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 833, 952);
    # 835 "37var2.nc"
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "37var2.nc", 835, 953);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 835, 954):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 835, 955):(void*)0);
    return __result_obj__0;
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadNode_clone"; neo_current_frame = &fr;
    struct sLoadNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLoadNode*  result  ;
    char*  __dec_obj108  ;
    char*  __dec_obj109  ;
    # 3 "sLoadNode_clone"
    # 5 "sLoadNode_clone"
    if(self==(void*)0) {
        # 4 "sLoadNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sLoadNode_clone"
    result=(struct sLoadNode* )come_increment_ref_count((struct sLoadNode *)come_calloc(1, sizeof(struct sLoadNode )*(1), "sLoadNode_clone", 5, 942, "struct sLoadNode* "), "sLoadNode_clone", 5, 943);
    # 7 "sLoadNode_clone"
    if(self!=((void*)0)) {
        # 6 "sLoadNode_clone"
        result->sline=self->sline;
    }
    # 8 "sLoadNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sLoadNode_clone"
        __right_value0 = (void*)0;
        __dec_obj108=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLoadNode_clone", 7, 944, "char* "), "sLoadNode_clone", 7, 946);
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0, "sLoadNode_clone", 7, 945);
    }
    # 9 "sLoadNode_clone"
    if(self!=((void*)0)) {
        # 8 "sLoadNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sLoadNode_clone"
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        # 9 "sLoadNode_clone"
        __right_value0 = (void*)0;
        __dec_obj109=result->name,
        result->name=(char* )come_increment_ref_count((char* )come_memdup(self->name, "sLoadNode_clone", 9, 947, "char* "), "sLoadNode_clone", 9, 949);
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "sLoadNode_clone", 9, 948);
    }
    # 10 "sLoadNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sLoadNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLoadNode_clone}", 10, 950);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char*  name  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunLoadNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj110  ;
    struct sFunLoadNode* __result_obj__0;
    # 842 "37var2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sFunLoadNode*)come_increment_ref_count(self, "37var2.nc", 842, 956),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 842, 957);
    # 844 "37var2.nc"
    __right_value0 = (void*)0;
    __dec_obj110=self->name,
    self->name=(char* )come_increment_ref_count(__builtin_string(name,"37var2.nc",844), "37var2.nc", 844, 959);
    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 844, 958);
    # 847 "37var2.nc"
        __result_obj__0 = (struct sFunLoadNode*)come_increment_ref_count(self, "37var2.nc", 847, 960);
    come_call_finalizer(sFunLoadNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "37var2.nc}", 847, 963);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 847, 964));
    neo_current_frame = fr.prev;
    come_call_finalizer(sFunLoadNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "37var2.nc}", 847, 965);
    return __result_obj__0;
}

char*  sFunLoadNode_kind(struct sFunLoadNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunLoadNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 849 "37var2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sFunLoadNode","37var2.nc",849))), "37var2.nc", 849, 966);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 849, 967));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "37var2.nc", 849, 968));
    return __result_obj__0;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunLoadNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sFun*  fun  ;
    struct CVALUE*  come_value  ;
    char*  __dec_obj111  ;
    struct sType*  __dec_obj112  ;
    # 854 "37var2.nc"
    fun=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(self->name,"37var2.nc",854))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 854, 969));
    # 870 "37var2.nc"
    if(fun==((void*)0)) {
        # 857 "37var2.nc"
        err_msg(info,"fun not found(%s) at loading variable",self->name);
        # 858 "37var2.nc"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else {
        # 861 "37var2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "37var2.nc", 861, 970, "struct CVALUE* "), "37var2.nc", 861, 971)), "37var2.nc", 861, 972);
        # 863 "37var2.nc"
        __right_value0 = (void*)0;
        __dec_obj111=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s",fun->mName), "37var2.nc", 863, 974);
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 863, 973);
        # 864 "37var2.nc"
        __dec_obj112=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(fun->mLambdaType, "37var2.nc", 864, 976);
        come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 864, 975);
        # 865 "37var2.nc"
        come_value->var=((void*)0);
        # 867 "37var2.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "37var2.nc", 867, 977));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 870, 978);
    }
    # 870 "37var2.nc"
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunLoadNode_finalize"; neo_current_frame = &fr;
    # 1 "sFunLoadNode_finalize"
    # 3 "sFunLoadNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sFunLoadNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFunLoadNode_finalize", 2, 961));
    }
    # 4 "sFunLoadNode_finalize"
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        # 3 "sFunLoadNode_finalize"
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0, "sFunLoadNode_finalize", 3, 962));
    }
        neo_current_frame = fr.prev;
}

void add_variable_to_table(char* name, struct sType*  type  , struct sInfo*  info  , _Bool function_param, _Bool comma, _Bool to_function_table)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_variable_to_table"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sVar*  self  ;
    char*  __dec_obj113  ;
    struct sType*  __dec_obj114  ;
    _Bool same_name;
    struct list$1sVar$ph* _o2_saved_6;
    struct sVar*  it  ;
    char*  __dec_obj115  ;
    char*  __dec_obj116  ;
    char*  __dec_obj117  ;
    char*  __dec_obj118  ;
    char*  __dec_obj119  ;
    char*  __dec_obj120  ;
    # 876 "37var2.nc"
    self=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "37var2.nc", 876, 979, "struct sVar* "), "37var2.nc", 876, 980);
    # 878 "37var2.nc"
    self->no_output_come_code=info->no_output_come_code;
    # 880 "37var2.nc"
    __right_value0 = (void*)0;
    __dec_obj113=self->mName,
    self->mName=(char* )come_increment_ref_count(__builtin_string(name,"37var2.nc",880), "37var2.nc", 880, 982);
    __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 880, 981);
    # 881 "37var2.nc"
    __right_value0 = (void*)0;
    __dec_obj114=self->mType,
    self->mType=(struct sType* )come_increment_ref_count(sType_clone(type), "37var2.nc", 881, 984);
    come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 881, 983);
    # 883 "37var2.nc"
    same_name=(_Bool)0;
    # 893 "37var2.nc"
    for(_o2_saved_6=(struct list$1sVar$ph*)come_increment_ref_count(info->come_fun->mAllVar, "37var2.nc", 885, 985),it=list$1sVar$ph_begin(_o2_saved_6)    ;!list$1sVar$ph_end(_o2_saved_6);it=list$1sVar$ph_next(_o2_saved_6)){
        # 889 "37var2.nc"
        if(string_operator_equals(it->mCValueName,name)) {
            # 887 "37var2.nc"
            same_name=(_Bool)1;
        }
    }
    # 907 "37var2.nc"
    if(function_param) {
        # 894 "37var2.nc"
        __right_value0 = (void*)0;
        __dec_obj115=self->mCValueName,
        self->mCValueName=(char* )come_increment_ref_count(__builtin_string(name,"37var2.nc",894), "37var2.nc", 894, 987);
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 894, 986);
    }
    else if(type->mRegister) {
        # 897 "37var2.nc"
        __right_value0 = (void*)0;
        __dec_obj116=self->mCValueName,
        self->mCValueName=(char* )come_increment_ref_count(__builtin_string(name,"37var2.nc",897), "37var2.nc", 897, 989);
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 897, 988);
    }
    else if(!same_name) {
        # 900 "37var2.nc"
        __right_value0 = (void*)0;
        __dec_obj117=self->mCValueName,
        self->mCValueName=(char* )come_increment_ref_count(__builtin_string(name,"37var2.nc",900), "37var2.nc", 900, 991);
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 900, 990);
    }
    else {
        # 903 "37var2.nc"
        static int n=0;
        # 904 "37var2.nc"
        __right_value0 = (void*)0;
        __dec_obj118=self->mCValueName,
        self->mCValueName=(char* )come_increment_ref_count(xsprintf("%s_%d",name,n++), "37var2.nc", 904, 993);
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 904, 992);
    }
    # 907 "37var2.nc"
    self->mAllocaValue=(_Bool)0;
    # 908 "37var2.nc"
    self->mNoFree=(_Bool)0;
    # 917 "37var2.nc"
    if(info->come_fun) {
        # 910 "37var2.nc"
        __right_value0 = (void*)0;
        __dec_obj119=self->mFunName,
        self->mFunName=(char* )come_increment_ref_count((char* )come_memdup(info->come_fun->mName, "37var2.nc", 910, 994, "char* "), "37var2.nc", 910, 996);
        __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 910, 995);
    }
    else {
        # 913 "37var2.nc"
        __dec_obj120=self->mFunName,
        self->mFunName=((void*)0);
        __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 913, 997);
    }
    # 924 "37var2.nc"
    if(to_function_table) {
        # 918 "37var2.nc"
        __right_value0 = (void*)0;
        map$2char$phsVar$ph_insert(info->come_fun->mBlock->mVarTable->mVars,(char* )come_increment_ref_count(__builtin_string(name,"37var2.nc",918), "37var2.nc", 918, 1033),(struct sVar* )come_increment_ref_count(self, "37var2.nc", 918, 1034),(_Bool)0);
    }
    else {
        # 921 "37var2.nc"
        __right_value0 = (void*)0;
        map$2char$phsVar$ph_insert(info->lv_table->mVars,(char* )come_increment_ref_count(__builtin_string(name,"37var2.nc",921), "37var2.nc", 921, 1035),(struct sVar* )come_increment_ref_count(self, "37var2.nc", 921, 1036),(_Bool)0);
    }
    # 927 "37var2.nc"
    if(info->come_fun) {
        # 925 "37var2.nc"
        list$1sVar$ph_add(info->come_fun->mAllVar,(struct sVar* )come_increment_ref_count(self, "37var2.nc", 925, 1051));
    }
    come_call_finalizer(sVar_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 929, 1052);
    come_call_finalizer(list$1sVar$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 929, 1053);
    neo_current_frame = fr.prev;
}

static struct sVar*  list$1sVar$ph_begin(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_begin"; neo_current_frame = &fr;
    struct sVar*  result  ;
    struct sVar*  __result_obj__0  ;
    struct sVar*  result_84  ;
    # 1682 "./neo-c.h"
    # 1689 "./neo-c.h"
    if(self==((void*)0)) {
        # 1685 "./neo-c.h"
        # 1686 "./neo-c.h"
        memset(&result,0,sizeof(struct sVar* ));
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
    memset(&result_84,0,sizeof(struct sVar* ));
    # 1697 "./neo-c.h"
        __result_obj__0 = result_84;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_end"; neo_current_frame = &fr;
    # 1721 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct sVar*  list$1sVar$ph_next(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_next"; neo_current_frame = &fr;
    struct sVar*  result  ;
    struct sVar*  __result_obj__0  ;
    struct sVar*  result_85  ;
    # 1701 "./neo-c.h"
    # 1709 "./neo-c.h"
    if(self==((void*)0)||self->it==((void*)0)) {
        # 1704 "./neo-c.h"
        # 1705 "./neo-c.h"
        memset(&result,0,sizeof(struct sVar* ));
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
    memset(&result_85,0,sizeof(struct sVar* ));
    # 1717 "./neo-c.h"
        __result_obj__0 = result_85;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    _Bool add_to_key_list;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 3865 "./neo-c.h"
    # 3871 "./neo-c.h"
    if(self==((void*)0)) {
        # 3868 "./neo-c.h"
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3868, 998));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3868, 999);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3874 "./neo-c.h"
    if(self->len*10>=self->size) {
        # 3872 "./neo-c.h"
        map$2char$phsVar$ph_rehash(self);
    }
    # 3874 "./neo-c.h"
    add_to_key_list=(_Bool)0;
    # 3875 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 3876 "./neo-c.h"
    hash=key_hash%self->size;
    # 3877 "./neo-c.h"
    it=hash;
    # 3937 "./neo-c.h"
    while((_Bool)1) {
        # 3935 "./neo-c.h"
        if(self->item_existance[it]) {
            # 3905 "./neo-c.h"
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                # 3885 "./neo-c.h"
                map$2char$phsVar$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                # 3893 "./neo-c.h"
                if(1) {
                    # 3887 "./neo-c.h"
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3887, 1010));
                    # 3888 "./neo-c.h"
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3888, 1011);
                }
                else {
                    # 3891 "./neo-c.h"
                    self->keys[it]=key;
                }
                # 3900 "./neo-c.h"
                if(1) {
                    # 3894 "./neo-c.h"
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3894, 1012);
                    # 3895 "./neo-c.h"
                    self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 3895, 1013);
                }
                else {
                    # 3898 "./neo-c.h"
                    self->items[it]=item;
                }
                # 3900 "./neo-c.h"
                self->hashes[it]=key_hash;
                # 3901 "./neo-c.h"
                add_to_key_list=(_Bool)1;
                # 3902 "./neo-c.h"
                break;
            }
            # 3908 "./neo-c.h"
            if(++it>=self->size) {
                # 3906 "./neo-c.h"
                it=0;
            }
            # 3913 "./neo-c.h"
            if(it==hash) {
                # 3909 "./neo-c.h"
                printf("unexpected error in map.insert\n");
                # 3910 "./neo-c.h"
                stackframe2(self);
                # 3911 "./neo-c.h"
                exit(2);
            }
        }
        else {
            # 3915 "./neo-c.h"
            self->item_existance[it]=(_Bool)1;
            # 3916 "./neo-c.h"
            self->hashes[it]=key_hash;
            # 3923 "./neo-c.h"
            if(1) {
                # 3918 "./neo-c.h"
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3918, 1014);
            }
            else {
                # 3921 "./neo-c.h"
                self->keys[it]=key;
            }
            # 3930 "./neo-c.h"
            if(1) {
                # 3924 "./neo-c.h"
                self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 3924, 1015);
            }
            else {
                # 3927 "./neo-c.h"
                self->items[it]=item;
            }
            # 3930 "./neo-c.h"
            self->len++;
            # 3931 "./neo-c.h"
            add_to_key_list=(_Bool)1;
            # 3933 "./neo-c.h"
            break;
        }
    }
    # 3941 "./neo-c.h"
    if(add_to_key_list) {
        # 3938 "./neo-c.h"
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 3938, 1030));
    }
    # 3941 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3941, 1031));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3941, 1032);
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
    int i_86;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    # 3782 "./neo-c.h"
    # 3784 "./neo-c.h"
    old_size=self->size;
    # 3785 "./neo-c.h"
    size=self->size*10;
    # 3786 "./neo-c.h"
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3786, 1000, "char** "))), "./neo-c.h", 3786, 1001);
    # 3787 "./neo-c.h"
    __right_value0 = (void*)0;
    items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(size)), "./neo-c.h", 3787, 1002, "struct sVar** "))), "./neo-c.h", 3787, 1003);
    # 3788 "./neo-c.h"
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3788, 1004, "unsigned int*"))), "./neo-c.h", 3788, 1005);
    # 3789 "./neo-c.h"
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3789, 1006, "_Bool*"))), "./neo-c.h", 3789, 1007);
    # 3795 "./neo-c.h"
    for(i=0    ;i<size;i++){
        # 3791 "./neo-c.h"
        hashes[i]=0;
        # 3792 "./neo-c.h"
        item_existance[i]=(_Bool)0;
    }
    # 3795 "./neo-c.h"
    len=0;
    # 3830 "./neo-c.h"
    for(i_86=0    ;i_86<old_size;i_86++){
        # 3802 "./neo-c.h"
        if(!self->item_existance[i_86]) {
            # 3799 "./neo-c.h"
            continue;
        }
        # 3802 "./neo-c.h"
        key_hash=self->hashes[i_86];
        # 3803 "./neo-c.h"
        hash=key_hash%size;
        # 3804 "./neo-c.h"
        n=hash;
        # 3828 "./neo-c.h"
        while((_Bool)1) {
            # 3827 "./neo-c.h"
            if(item_existance[n]) {
                # 3812 "./neo-c.h"
                if(++n>=size) {
                    # 3810 "./neo-c.h"
                    n=0;
                }
                # 3817 "./neo-c.h"
                if(n==hash) {
                    # 3813 "./neo-c.h"
                    printf("unexpected error in map.rehash(1)\n");
                    # 3814 "./neo-c.h"
                    stackframe2(self);
                    # 3815 "./neo-c.h"
                    exit(2);
                }
            }
            else {
                # 3819 "./neo-c.h"
                item_existance[n]=(_Bool)1;
                # 3820 "./neo-c.h"
                hashes[n]=key_hash;
                # 3821 "./neo-c.h"
                keys[n]=self->keys[i_86];
                # 3822 "./neo-c.h"
                items[n]=self->items[i_86];
                # 3824 "./neo-c.h"
                len++;
                # 3825 "./neo-c.h"
                break;
            }
        }
    }
    # 3830 "./neo-c.h"
    come_free((char*)self->items);
    # 3831 "./neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3831, 1008));
    # 3832 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3832, 1009));
    # 3833 "./neo-c.h"
    come_free((char*)self->keys);
    # 3835 "./neo-c.h"
    self->keys=keys;
    # 3836 "./neo-c.h"
    self->items=items;
    # 3837 "./neo-c.h"
    self->hashes=hashes;
    # 3838 "./neo-c.h"
    self->item_existance=item_existance;
    # 3840 "./neo-c.h"
    self->size=size;
    # 3841 "./neo-c.h"
    self->len=len;
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj121  ;
    struct list_item$1char$ph* litem_87;
    char*  __dec_obj122  ;
    struct list_item$1char$ph* litem_88;
    char*  __dec_obj123  ;
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1615, 1016));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1619, 1017, "struct list_item$1char$ph*"))), "./neo-c.h", 1619, 1018);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj121=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1623, 1020);
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1623, 1019);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_87=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1629, 1021, "struct list_item$1char$ph*"))), "./neo-c.h", 1629, 1022);
        # 1631 "./neo-c.h"
        litem_87->prev=self->head;
        # 1632 "./neo-c.h"
        litem_87->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj122=litem_87->item,
        litem_87->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1633, 1024);
        __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1633, 1023);
        # 1635 "./neo-c.h"
        self->tail=litem_87;
        # 1636 "./neo-c.h"
        self->head->next=litem_87;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_88=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1639, 1025, "struct list_item$1char$ph*"))), "./neo-c.h", 1639, 1026);
        # 1641 "./neo-c.h"
        litem_88->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_88->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj123=litem_88->item,
        litem_88->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1643, 1028);
        __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1643, 1027);
        # 1645 "./neo-c.h"
        self->tail->next=litem_88;
        # 1646 "./neo-c.h"
        self->tail=litem_88;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1651, 1029));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_add"; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sVar$ph* litem;
    struct sVar*  __dec_obj124  ;
    struct list_item$1sVar$ph* litem_89;
    struct sVar*  __dec_obj125  ;
    struct list_item$1sVar$ph* litem_90;
    struct sVar*  __dec_obj126  ;
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 1037);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./neo-c.h", 1534, 1038, "struct list_item$1sVar$ph*"))), "./neo-c.h", 1534, 1039);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj124=litem->item,
        litem->item=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 1538, 1041);
        come_call_finalizer(sVar_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 1040);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_89=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./neo-c.h", 1544, 1042, "struct list_item$1sVar$ph*"))), "./neo-c.h", 1544, 1043);
        # 1546 "./neo-c.h"
        litem_89->prev=self->head;
        # 1547 "./neo-c.h"
        litem_89->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj125=litem_89->item,
        litem_89->item=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 1548, 1045);
        come_call_finalizer(sVar_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 1044);
        # 1550 "./neo-c.h"
        self->tail=litem_89;
        # 1551 "./neo-c.h"
        self->head->next=litem_89;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_90=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./neo-c.h", 1554, 1046, "struct list_item$1sVar$ph*"))), "./neo-c.h", 1554, 1047);
        # 1556 "./neo-c.h"
        litem_90->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_90->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj126=litem_90->item,
        litem_90->item=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 1558, 1049);
        come_call_finalizer(sVar_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 1048);
        # 1560 "./neo-c.h"
        self->tail->next=litem_90;
        # 1561 "./neo-c.h"
        self->tail=litem_90;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 1050);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void add_variable_to_global_table(char* name, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_variable_to_global_table"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sVar*  self  ;
    char*  __dec_obj127  ;
    struct sType*  __dec_obj128  ;
    char*  __dec_obj129  ;
    # 931 "37var2.nc"
    self=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "37var2.nc", 931, 1054, "struct sVar* "), "37var2.nc", 931, 1055);
    # 933 "37var2.nc"
    __right_value0 = (void*)0;
    __dec_obj127=self->mName,
    self->mName=(char* )come_increment_ref_count(__builtin_string(name,"37var2.nc",933), "37var2.nc", 933, 1057);
    __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 933, 1056);
    # 934 "37var2.nc"
    __right_value0 = (void*)0;
    __dec_obj128=self->mType,
    self->mType=(struct sType* )come_increment_ref_count(sType_clone(type), "37var2.nc", 934, 1059);
    come_call_finalizer(sType_finalize, __dec_obj128,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 934, 1058);
    # 936 "37var2.nc"
    self->mGlobal=(_Bool)1;
    # 938 "37var2.nc"
    __right_value0 = (void*)0;
    __dec_obj129=self->mCValueName,
    self->mCValueName=(char* )come_increment_ref_count(__builtin_string(name,"37var2.nc",938), "37var2.nc", 938, 1061);
    __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 938, 1060);
    # 940 "37var2.nc"
    self->mAllocaValue=(_Bool)0;
    # 941 "37var2.nc"
    self->mNoFree=(_Bool)0;
    # 943 "37var2.nc"
    __right_value0 = (void*)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char* )come_increment_ref_count(__builtin_string(name,"37var2.nc",943), "37var2.nc", 943, 1062),(struct sVar* )come_increment_ref_count(self, "37var2.nc", 943, 1063),(_Bool)0);
    come_call_finalizer(sVar_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 946, 1064);
    neo_current_frame = fr.prev;
}

void add_variable_to_global_table_with_int_value(char* name, struct sType*  type  , char* c_value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_variable_to_global_table_with_int_value"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sVar*  self  ;
    char*  __dec_obj130  ;
    struct sType*  __dec_obj131  ;
    char*  __dec_obj132  ;
    # 948 "37var2.nc"
    self=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "37var2.nc", 948, 1065, "struct sVar* "), "37var2.nc", 948, 1066);
    # 950 "37var2.nc"
    __right_value0 = (void*)0;
    __dec_obj130=self->mName,
    self->mName=(char* )come_increment_ref_count(__builtin_string(name,"37var2.nc",950), "37var2.nc", 950, 1068);
    __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 950, 1067);
    # 951 "37var2.nc"
    __right_value0 = (void*)0;
    __dec_obj131=self->mType,
    self->mType=(struct sType* )come_increment_ref_count(sType_clone(type), "37var2.nc", 951, 1070);
    come_call_finalizer(sType_finalize, __dec_obj131,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 951, 1069);
    # 953 "37var2.nc"
    self->mGlobal=(_Bool)1;
    # 955 "37var2.nc"
    __right_value0 = (void*)0;
    __dec_obj132=self->mCValueName,
    self->mCValueName=(char* )come_increment_ref_count(__builtin_string(c_value,"37var2.nc",955), "37var2.nc", 955, 1072);
    __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 955, 1071);
    # 957 "37var2.nc"
    self->mAllocaValue=(_Bool)0;
    # 958 "37var2.nc"
    self->mNoFree=(_Bool)0;
    # 960 "37var2.nc"
    __right_value0 = (void*)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char* )come_increment_ref_count(__builtin_string(name,"37var2.nc",960), "37var2.nc", 960, 1073),(struct sVar* )come_increment_ref_count(self, "37var2.nc", 960, 1074),(_Bool)0);
    come_call_finalizer(sVar_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 963, 1075);
    neo_current_frame = fr.prev;
}

static void add_defining_class_field_if_missing(char*  name  , struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_defining_class_field_if_missing"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_7;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var2
;    char*  field_name  =0;
    struct sType*  field_type  =0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    # 969 "37var2.nc"
    if(info->defining_class==((void*)0)) {
        # 966 "37var2.nc"
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 966, 1076));
        neo_current_frame = fr.prev;
        return;
    }
    # 977 "37var2.nc"
    for(_o2_saved_7=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(info->defining_class->mFields, "37var2.nc", 969, 1077),it=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_7)    ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_7);it=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_7)){
        # 970 "37var2.nc"
        multiple_assign_var2=it;
        field_name=(char* )come_increment_ref_count(multiple_assign_var2->v1, "37var2.nc", 970, 1078);
        field_type=(struct sType* )come_increment_ref_count(multiple_assign_var2->v2, "37var2.nc", 970, 1079);
        # 975 "37var2.nc"
        if(string_operator_equals(field_name,name)) {
            # 973 "37var2.nc"
                        (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 973, 1080));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 973, 1081);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 973, 1082));
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 972, 1087);
            neo_current_frame = fr.prev;
            return;
        }
        (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 977, 1088));
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 977, 1089);
    }
    # 977 "37var2.nc"
    list$1tuple2$2char$phsType$ph$ph_add(info->defining_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "37var2.nc", 977, 1105, "struct tuple2$2char$phsType$ph"), "37var2.nc", 3, 1115),(char* )come_increment_ref_count((char* )come_memdup(name, "37var2.nc", 977, 1104, "char* "), "37var2.nc", 3, 1116),(struct sType* )come_increment_ref_count(sType_clone(type), "37var2.nc", 3, 1117)), "37var2.nc", 977, 1118));
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 980, 1119));
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 980, 1120);
    neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_91;
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
    memset(&result_91,0,sizeof(struct tuple2$2char$phsType$ph*));
    # 1697 "./neo-c.h"
        __result_obj__0 = result_91;
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
    struct tuple2$2char$phsType$ph* result_92;
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
    memset(&result_92,0,sizeof(struct tuple2$2char$phsType$ph*));
    # 1717 "./neo-c.h"
        __result_obj__0 = result_92;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 1086);
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
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 1085);
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
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 1083));
    }
    # 4 "tuple2$2char$phsType$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple2$2char$phsType$ph$p_finalize"
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 1084);
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem;
    struct tuple2$2char$phsType$ph* __dec_obj133;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_93;
    struct tuple2$2char$phsType$ph* __dec_obj134;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_94;
    struct tuple2$2char$phsType$ph* __dec_obj135;
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 1090);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./neo-c.h", 1534, 1091, "struct list_item$1tuple2$2char$phsType$ph$ph*"))), "./neo-c.h", 1534, 1092);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj133=litem->item,
        litem->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item, "./neo-c.h", 1538, 1094);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 1093);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_93=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./neo-c.h", 1544, 1095, "struct list_item$1tuple2$2char$phsType$ph$ph*"))), "./neo-c.h", 1544, 1096);
        # 1546 "./neo-c.h"
        litem_93->prev=self->head;
        # 1547 "./neo-c.h"
        litem_93->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj134=litem_93->item,
        litem_93->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item, "./neo-c.h", 1548, 1098);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 1097);
        # 1550 "./neo-c.h"
        self->tail=litem_93;
        # 1551 "./neo-c.h"
        self->head->next=litem_93;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_94=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./neo-c.h", 1554, 1099, "struct list_item$1tuple2$2char$phsType$ph$ph*"))), "./neo-c.h", 1554, 1100);
        # 1556 "./neo-c.h"
        litem_94->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_94->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj135=litem_94->item,
        litem_94->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item, "./neo-c.h", 1558, 1102);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj135,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 1101);
        # 1560 "./neo-c.h"
        self->tail->next=litem_94;
        # 1561 "./neo-c.h"
        self->tail=litem_94;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 1103);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char*  v1  , struct sType*  v2  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj136  ;
    struct sType*  __dec_obj137  ;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    # 4420 "./neo-c.h"
    __dec_obj136=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "./neo-c.h", 4420, 1107);
    __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4420, 1106);
    # 4421 "./neo-c.h"
    __dec_obj137=self->v2,
    self->v2=(struct sType* )come_increment_ref_count(v2, "./neo-c.h", 4421, 1109);
    come_call_finalizer(sType_finalize, __dec_obj137,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 4421, 1108);
    # 4423 "./neo-c.h"
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self, "./neo-c.h", 4423, 1110);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4423, 1111);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4423, 1112));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4423, 1113);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4423, 1114);
    return __result_obj__0;
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_node_v7"; neo_current_frame = &fr;
    int sline_real;
    _Bool is_type_name_flag;
    _Bool multiple_declare;
    _Bool no_output_come_code;
    char* p;
    int sline;
    void* __right_value0 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var3
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    struct tuple2$2sType$phchar$ph* multiple_assign_var4
;    struct sType*  type_95  =0;
    char*  name_96  =0;
    _Bool no_comma;
    _Bool no_output_come_code_97;
    struct sNode* exp;
    _Bool attr_define;
    char* p_98;
    int sline_99;
    _Bool no_output_come_code_100;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var5
;    struct sType*  type_101  =0;
    char*  name_102  =0;
    _Bool err_103=0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sFun*  fun  ;
    char*  buf2  ;
    struct list$1char$ph* multiple_assign;
    struct list$1char$ph* __dec_obj138;
    char*  buf3  ;
    _Bool no_comma_104;
    struct sNode* right_value;
    struct sNode* __dec_obj139;
    struct sNode* _inf_value3;
    struct sStoreNode* _inf_obj_value3;
    void* __right_value3 = (void*)0;
    struct sNode* node;
    struct sNode* __result_obj__0;
    struct sNode* _inf_value4;
    struct sNewChannel* _inf_obj_value4;
    struct sNode* node_105;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare_106;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var6
;    struct sType*  base_type  =0;
    char*  name_107  =0;
    _Bool err_108=0;
    struct tuple2$2sType$phchar$ph* multiple_assign_var7
;    struct sType*  type2  =0;
    char*  var_name  =0;
    _Bool no_comma_109;
    struct sNode* exp_110;
    _Bool no_comma_113;
    struct sNode* exp_114;
    struct tuple2$2sType$phchar$ph* multiple_assign_var8
;    struct sType*  type2_115  =0;
    char*  var_name_116  =0;
    _Bool no_comma_117;
    struct sNode* exp_118;
    _Bool no_comma_119;
    struct sNode* exp_120;
    struct sNode* right_node;
    char*  var_name2  ;
    struct sNode* _inf_value5;
    struct sStoreNode* _inf_obj_value5;
    struct sNode* node_121;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var9
;    struct sType*  type_122  =0;
    char*  name_123  =0;
    _Bool err_124=0;
    char*  __dec_obj147  ;
    struct sNode* _inf_value6;
    struct sLoadNode* _inf_obj_value6;
    struct sNode* self_node;
    struct sNode* right_node_125;
    struct sNode* node_126;
    struct sNode* right_value_127;
    struct sNode* __dec_obj148;
    struct sNode* _inf_value7;
    struct sStoreNode* _inf_obj_value7;
    struct sNode* node_128;
    _Bool _conditional_value_X0;
    struct sNode* _inf_value8;
    struct sLoadNode* _inf_obj_value8;
    struct sNode* node_129;
    struct sNode* __dec_obj149;
    struct sNode* _inf_value9;
    struct sLoadNode* _inf_obj_value9;
    struct sNode* node_130;
    struct sNode* __dec_obj150;
    char*  word  ;
    char*  __dec_obj151  ;
    char*  __dec_obj152  ;
    _Bool is_type_name_flag_131;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var10
;    struct sType*  type_132  =0;
    char*  name_133  =0;
    _Bool err_134=0;
    struct sNode* _inf_value10;
    struct sLoadNode* _inf_obj_value10;
    struct sNode* node_135;
    struct sNode* right_value_136;
    _Bool no_comma_137;
    struct sNode* __dec_obj153;
    struct sNode* __dec_obj154;
    struct sNode* __dec_obj155;
    struct sNode* __dec_obj156;
    struct sNode* _inf_value11;
    struct sStoreNode* _inf_obj_value11;
    struct sNode* node_138;
    struct sNode* _inf_value12;
    struct sStoreNode* _inf_obj_value12;
    struct sNode* node_139;
    memset(&word, 0, sizeof(word));
    # 982 "37var2.nc"
    sline_real=info->sline_real;
    # 983 "37var2.nc"
    info->sline_real=head_sline;
    # 984 "37var2.nc"
    is_type_name_flag=is_type_name(buf,info);
    # 987 "37var2.nc"
    multiple_declare=(_Bool)0;
    # 1040 "37var2.nc"
    if(is_type_name_flag&&!info->in_offsetof) {
        # 990 "37var2.nc"
        no_output_come_code=info->no_output_come_code;
        # 991 "37var2.nc"
        info->no_output_come_code=(_Bool)1;
        # 993 "37var2.nc"
        p=info->p;
        # 994 "37var2.nc"
        sline=info->sline;
        # 996 "37var2.nc"
        info->p=head;
        # 997 "37var2.nc"
        info->sline=head_sline;
        # 1035 "37var2.nc"
        if(xisalpha(*info->p)||*info->p==95) {
            # 1000 "37var2.nc"
            skip_spaces_and_lf(info);
            # 1001 "37var2.nc"
            multiple_assign_var3=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type=(struct sType* )come_increment_ref_count(multiple_assign_var3->v1, "37var2.nc", 1001, 1121);
            name=(char* )come_increment_ref_count(multiple_assign_var3->v2, "37var2.nc", 1001, 1122);
            err=multiple_assign_var3->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1001, 1125);
            # 1002 "37var2.nc"
            skip_spaces_and_lf(info);
            # 1033 "37var2.nc"
            if(err) {
                # 1005 "37var2.nc"
                skip_spaces_and_lf(info);
                # 1006 "37var2.nc"
                __right_value0 = (void*)0;
                multiple_assign_var4=((struct tuple2$2sType$phchar$ph*)(__right_value0=parse_variable_name_on_multiple_declare(type,(_Bool)1,info)));
                type_95=(struct sType* )come_increment_ref_count(multiple_assign_var4->v1, "37var2.nc", 1006, 1126);
                name_96=(char* )come_increment_ref_count(multiple_assign_var4->v2, "37var2.nc", 1006, 1127);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1006, 1130);
                # 1029 "37var2.nc"
                if(*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
                    # 1009 "37var2.nc"
                    info->p++;
                    # 1010 "37var2.nc"
                    skip_spaces_and_lf(info);
                    # 1027 "37var2.nc"
                    if(*info->p==123) {
                        # 1013 "37var2.nc"
                        __right_value0 = (void*)0;
                        ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 1013, 1131));
                    }
                    else {
                        # 1016 "37var2.nc"
                        no_comma=info->no_comma;
                        # 1017 "37var2.nc"
                        no_output_come_code_97=info->no_output_come_code;
                        # 1019 "37var2.nc"
                        info->no_comma=(_Bool)1;
                        # 1020 "37var2.nc"
                        info->no_output_come_code=(_Bool)1;
                        # 1022 "37var2.nc"
                        __right_value0 = (void*)0;
                        exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "37var2.nc", 1022, 1132);
                        # 1024 "37var2.nc"
                        info->no_comma=no_comma;
                        # 1025 "37var2.nc"
                        info->no_output_come_code=no_output_come_code_97;
                        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1027, 1133):(void*)0);
                    }
                }
                # 1032 "37var2.nc"
                if(!is_type_name(name_96,info)&&*info->p==44) {
                    # 1030 "37var2.nc"
                    multiple_declare=(_Bool)1;
                }
                come_call_finalizer(sType_finalize, type_95, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1033, 1134);
                (name_96 = come_decrement_ref_count(name_96, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1033, 1135));
            }
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1035, 1136);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1035, 1137));
        }
        # 1035 "37var2.nc"
        info->p=p;
        # 1036 "37var2.nc"
        info->sline=sline;
        # 1037 "37var2.nc"
        info->no_output_come_code=no_output_come_code;
    }
    # 1040 "37var2.nc"
    attr_define=(_Bool)0;
    # 1063 "37var2.nc"
    if(is_type_name_flag&&info->defining_class&&!info->in_offsetof) {
        # 1042 "37var2.nc"
        p_98=info->p;
        # 1043 "37var2.nc"
        sline_99=info->sline;
        # 1044 "37var2.nc"
        no_output_come_code_100=info->no_output_come_code;
        # 1045 "37var2.nc"
        info->no_output_come_code=(_Bool)1;
        # 1047 "37var2.nc"
        info->p=head;
        # 1048 "37var2.nc"
        info->sline=head_sline;
        # 1050 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1051 "37var2.nc"
        __right_value0 = (void*)0;
        multiple_assign_var5=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_101=(struct sType* )come_increment_ref_count(multiple_assign_var5->v1, "37var2.nc", 1051, 1138);
        name_102=(char* )come_increment_ref_count(multiple_assign_var5->v2, "37var2.nc", 1051, 1139);
        err_103=multiple_assign_var5->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1051, 1140);
        # 1052 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1058 "37var2.nc"
        if(err_103&&parsecmp("self",info)) {
            # 1055 "37var2.nc"
            attr_define=(_Bool)1;
        }
        # 1058 "37var2.nc"
        info->p=p_98;
        # 1059 "37var2.nc"
        info->sline=sline_99;
        # 1060 "37var2.nc"
        info->no_output_come_code=no_output_come_code_100;
        come_call_finalizer(sType_finalize, type_101, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1063, 1141);
        (name_102 = come_decrement_ref_count(name_102, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1063, 1142));
    }
    # 1063 "37var2.nc"
    skip_spaces_and_lf(info);
    # 1064 "37var2.nc"
    __right_value0 = (void*)0;
    fun=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(buf,"37var2.nc",1064))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 1064, 1143));
    # 1356 "37var2.nc"
    if((!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")||charp_operator_equals(buf,"__auto_type")) {
        # 1068 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1069 "37var2.nc"
        __right_value0 = (void*)0;
        buf2=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "37var2.nc", 1069, 1144);
        # 1070 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1072 "37var2.nc"
        multiple_assign=((void*)0);
        # 1088 "37var2.nc"
        if(*info->p==44) {
            # 1075 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj138=multiple_assign,
            multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "37var2.nc", 1075, 1145, "struct list$1char$ph*"), "37var2.nc", 1075, 1146)), "37var2.nc", 1075, 1148);
            come_call_finalizer(list$1char$ph_finalize, __dec_obj138,(void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc", 1075, 1147);
            # 1076 "37var2.nc"
            __right_value0 = (void*)0;
            list$1char$ph_push_back(multiple_assign,(char* )come_increment_ref_count((char* )come_memdup(buf2, "37var2.nc", 1076, 1149, "char* "), "37var2.nc", 1076, 1150));
            # 1087 "37var2.nc"
            while(*info->p==44) {
                # 1079 "37var2.nc"
                info->p++;
                # 1080 "37var2.nc"
                skip_spaces_and_lf(info);
                # 1082 "37var2.nc"
                __right_value0 = (void*)0;
                buf3=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "37var2.nc", 1082, 1151);
                # 1083 "37var2.nc"
                skip_spaces_and_lf(info);
                # 1085 "37var2.nc"
                __right_value0 = (void*)0;
                list$1char$ph_push_back(multiple_assign,(char* )come_increment_ref_count((char* )come_memdup(buf3, "37var2.nc", 1085, 1152, "char* "), "37var2.nc", 1085, 1153));
                (buf3 = come_decrement_ref_count(buf3, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1087, 1154));
            }
        }
        # 1088 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1111 "37var2.nc"
        if(*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
            # 1091 "37var2.nc"
            info->p++;
            # 1092 "37var2.nc"
            skip_spaces_and_lf(info);
            # 1095 "37var2.nc"
            no_comma_104=info->no_comma;
            # 1095 "37var2.nc"
            info->no_comma=(_Bool)1;
            # 1096 "37var2.nc"
            __right_value0 = (void*)0;
            right_value=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "37var2.nc", 1096, 1155);
            # 1097 "37var2.nc"
            info->no_comma=no_comma_104;
            # 1098 "37var2.nc"
            skip_spaces_and_lf(info);
            # 1100 "37var2.nc"
            __right_value0 = (void*)0;
            __dec_obj139=right_value,
            right_value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value, "37var2.nc", 1100, 1156),info), "37var2.nc", 1100, 1158);
            (__dec_obj139 ? __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0, (void*)0, "37var2.nc", 1100, 1157) :0);
            # 1101 "37var2.nc"
            skip_spaces_and_lf(info);
            # 1103 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "37var2.nc", 1103, 1163, "struct sNode");
            _inf_obj_value3=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value2=sStoreNode_initialize((struct sStoreNode* )come_increment_ref_count((struct sStoreNode *)come_calloc(1, sizeof(struct sStoreNode )*(1), "37var2.nc", 1103, 1159, "struct sStoreNode* "), "37var2.nc", 1103, 1160),(char* )come_increment_ref_count(__builtin_string(buf2,"37var2.nc",1103), "37var2.nc", 1103, 1161),multiple_assign,((void*)0),((void*)0),(_Bool)1,right_value,info,(char*)come_increment_ref_count(xsprintf(""), "37var2.nc", 1103, 1162),(_Bool)0))), "37var2.nc", 1103, 1164);
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            _inf_value3->left_value=(void*)sNodeBase_left_value;
            node=(struct sNode*)come_increment_ref_count(_inf_value3, "37var2.nc", 1103, 1165);
            come_call_finalizer(sStoreNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1103, 1166);
            # 1104 "37var2.nc"
            info->sline_real=sline_real;
            # 1105 "37var2.nc"
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "37var2.nc", 1105, 1167);
            ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1105, 1168):(void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1105, 1169):(void*)0);
            (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1105, 1170));
            come_call_finalizer(list$1char$ph$p_finalize, multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1105, 1171);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1105, 1172):(void*)0);
            return __result_obj__0;
            ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1111, 1173):(void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1111, 1174):(void*)0);
        }
        else {
            # 1108 "37var2.nc"
            err_msg(info,"var requires a right value(%c)",*info->p);
            # 1109 "37var2.nc"
            exit(1);
        }
        (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1356, 1175));
        come_call_finalizer(list$1char$ph$p_finalize, multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1356, 1176);
    }
    else if(gComePthread&&charp_operator_equals(buf,"__channel__")) {
        # 1113 "37var2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "37var2.nc", 1113, 1179, "struct sNode");
        _inf_obj_value4=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value1=sNewChannel_initialize((struct sNewChannel* )come_increment_ref_count((struct sNewChannel *)come_calloc(1, sizeof(struct sNewChannel )*(1), "37var2.nc", 1113, 1177, "struct sNewChannel* "), "37var2.nc", 1113, 1178),info))), "37var2.nc", 1113, 1180);
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sNewChannel_finalize;
        _inf_value4->clone=(void*)sNewChannel_clone;
        _inf_value4->compile=(void*)sNewChannel_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sNewChannel_kind;
        _inf_value4->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        node_105=(struct sNode*)come_increment_ref_count(_inf_value4, "37var2.nc", 1113, 1187);
        come_call_finalizer(sNewChannel_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1113, 1188);
        # 1114 "37var2.nc"
        info->sline_real=sline_real;
        # 1115 "37var2.nc"
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_105, "37var2.nc", 1115, 1189);
        ((node_105) ? node_105 = come_decrement_ref_count(node_105, ((struct sNode*)node_105)->finalize, ((struct sNode*)node_105)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1115, 1190):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1115, 1191):(void*)0);
        return __result_obj__0;
        ((node_105) ? node_105 = come_decrement_ref_count(node_105, ((struct sNode*)node_105)->finalize, ((struct sNode*)node_105)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1356, 1192):(void*)0);
    }
    else if(multiple_declare) {
        # 1118 "37var2.nc"
        info->p=head;
        # 1119 "37var2.nc"
        info->sline=head_sline;
        # 1121 "37var2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        multiple_declare_106=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "37var2.nc", 1121, 1193, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"), "37var2.nc", 1121, 1194)), "37var2.nc", 1121, 1195);
        # 1123 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1124 "37var2.nc"
        __right_value0 = (void*)0;
        multiple_assign_var6=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type=(struct sType* )come_increment_ref_count(multiple_assign_var6->v1, "37var2.nc", 1124, 1196);
        name_107=(char* )come_increment_ref_count(multiple_assign_var6->v2, "37var2.nc", 1124, 1197);
        err_108=multiple_assign_var6->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1124, 1198);
        # 1125 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1132 "37var2.nc"
        if(!err_108) {
            # 1128 "37var2.nc"
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            # 1129 "37var2.nc"
            exit(2);
        }
        # 1132 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1133 "37var2.nc"
        __right_value0 = (void*)0;
        multiple_assign_var7=((struct tuple2$2sType$phchar$ph*)(__right_value0=parse_variable_name_on_multiple_declare(base_type,(_Bool)1,info)));
        type2=(struct sType* )come_increment_ref_count(multiple_assign_var7->v1, "37var2.nc", 1133, 1199);
        var_name=(char* )come_increment_ref_count(multiple_assign_var7->v2, "37var2.nc", 1133, 1200);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1133, 1201);
        # 1134 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1165 "37var2.nc"
        if(*info->p==61&&*(info->p+1)!=61) {
            # 1137 "37var2.nc"
            info->p++;
            # 1138 "37var2.nc"
            skip_spaces_and_lf(info);
            # 1160 "37var2.nc"
            if(type2->mClass->mStruct&&list$1sNode$ph_length(type2->mArrayNum)==0) {
                # 1141 "37var2.nc"
                info->array_initializer=(_Bool)1;
                # 1142 "37var2.nc"
                no_comma_109=info->no_comma;
                # 1143 "37var2.nc"
                info->no_comma=(_Bool)1;
                # 1144 "37var2.nc"
                __right_value0 = (void*)0;
                exp_110=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "37var2.nc", 1144, 1202);
                # 1145 "37var2.nc"
                info->no_comma=no_comma_109;
                # 1146 "37var2.nc"
                info->array_initializer=(_Bool)0;
                # 1148 "37var2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_106,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "37var2.nc", 1148, 1217, "struct tuple3$3sType$phchar$phsNode$ph"), "37var2.nc", 8, 1230),(struct sType* )come_increment_ref_count(type2, "37var2.nc", 8, 1231),(char* )come_increment_ref_count(var_name, "37var2.nc", 8, 1232),(struct sNode*)come_increment_ref_count(exp_110, "37var2.nc", 8, 1233)), "37var2.nc", 1148, 1234));
                ((exp_110) ? exp_110 = come_decrement_ref_count(exp_110, ((struct sNode*)exp_110)->finalize, ((struct sNode*)exp_110)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1160, 1235):(void*)0);
            }
            else {
                # 1151 "37var2.nc"
                info->array_initializer=(_Bool)1;
                # 1152 "37var2.nc"
                no_comma_113=info->no_comma;
                # 1153 "37var2.nc"
                info->no_comma=(_Bool)1;
                # 1154 "37var2.nc"
                __right_value0 = (void*)0;
                exp_114=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "37var2.nc", 1154, 1236);
                # 1155 "37var2.nc"
                info->no_comma=no_comma_113;
                # 1156 "37var2.nc"
                info->array_initializer=(_Bool)0;
                # 1158 "37var2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_106,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "37var2.nc", 1158, 1237, "struct tuple3$3sType$phchar$phsNode$ph"), "37var2.nc", 1158, 1238),(struct sType* )come_increment_ref_count(type2, "37var2.nc", 1158, 1239),(char* )come_increment_ref_count(var_name, "37var2.nc", 1158, 1240),(struct sNode*)come_increment_ref_count(exp_114, "37var2.nc", 1158, 1241)), "37var2.nc", 1158, 1242));
                ((exp_114) ? exp_114 = come_decrement_ref_count(exp_114, ((struct sNode*)exp_114)->finalize, ((struct sNode*)exp_114)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1160, 1243):(void*)0);
            }
        }
        else {
            # 1162 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_106,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "37var2.nc", 1162, 1244, "struct tuple3$3sType$phchar$phsNode$ph"), "37var2.nc", 1162, 1245),(struct sType* )come_increment_ref_count(type2, "37var2.nc", 1162, 1246),(char* )come_increment_ref_count(var_name, "37var2.nc", 1162, 1247),(struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "37var2.nc", 1162, 1248)), "37var2.nc", 1162, 1249));
        }
        # 1203 "37var2.nc"
        while(*info->p==44) {
            # 1166 "37var2.nc"
            info->p++;
            # 1167 "37var2.nc"
            skip_spaces_and_lf(info);
            # 1169 "37var2.nc"
            __right_value0 = (void*)0;
            multiple_assign_var8=((struct tuple2$2sType$phchar$ph*)(__right_value0=parse_variable_name_on_multiple_declare(base_type,(_Bool)0,info)));
            type2_115=(struct sType* )come_increment_ref_count(multiple_assign_var8->v1, "37var2.nc", 1169, 1250);
            var_name_116=(char* )come_increment_ref_count(multiple_assign_var8->v2, "37var2.nc", 1169, 1251);
            come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1169, 1252);
            # 1201 "37var2.nc"
            if(*info->p==61&&*(info->p+1)!=61) {
                # 1172 "37var2.nc"
                info->p++;
                # 1173 "37var2.nc"
                skip_spaces_and_lf(info);
                # 1197 "37var2.nc"
                if(type2_115->mClass->mStruct&&list$1sNode$ph_length(type2_115->mArrayNum)==0) {
                    # 1176 "37var2.nc"
                    info->array_initializer=(_Bool)1;
                    # 1177 "37var2.nc"
                    no_comma_117=info->no_comma;
                    # 1178 "37var2.nc"
                    info->no_comma=(_Bool)1;
                    # 1179 "37var2.nc"
                    __right_value0 = (void*)0;
                    exp_118=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "37var2.nc", 1179, 1253);
                    # 1180 "37var2.nc"
                    info->no_comma=no_comma_117;
                    # 1181 "37var2.nc"
                    info->array_initializer=(_Bool)0;
                    # 1183 "37var2.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_106,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "37var2.nc", 1183, 1254, "struct tuple3$3sType$phchar$phsNode$ph"), "37var2.nc", 1183, 1255),(struct sType* )come_increment_ref_count(type2_115, "37var2.nc", 1183, 1256),(char* )come_increment_ref_count(var_name_116, "37var2.nc", 1183, 1257),(struct sNode*)come_increment_ref_count(exp_118, "37var2.nc", 1183, 1258)), "37var2.nc", 1183, 1259));
                    ((exp_118) ? exp_118 = come_decrement_ref_count(exp_118, ((struct sNode*)exp_118)->finalize, ((struct sNode*)exp_118)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1197, 1260):(void*)0);
                }
                else {
                    # 1186 "37var2.nc"
                    no_comma_119=info->no_comma;
                    # 1187 "37var2.nc"
                    info->no_comma=(_Bool)1;
                    # 1188 "37var2.nc"
                    info->array_initializer=(_Bool)1;
                    # 1190 "37var2.nc"
                    __right_value0 = (void*)0;
                    exp_120=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "37var2.nc", 1190, 1261);
                    # 1192 "37var2.nc"
                    info->no_comma=no_comma_119;
                    # 1193 "37var2.nc"
                    info->array_initializer=(_Bool)0;
                    # 1195 "37var2.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_106,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "37var2.nc", 1195, 1262, "struct tuple3$3sType$phchar$phsNode$ph"), "37var2.nc", 1195, 1263),(struct sType* )come_increment_ref_count(type2_115, "37var2.nc", 1195, 1264),(char* )come_increment_ref_count(var_name_116, "37var2.nc", 1195, 1265),(struct sNode*)come_increment_ref_count(exp_120, "37var2.nc", 1195, 1266)), "37var2.nc", 1195, 1267));
                    ((exp_120) ? exp_120 = come_decrement_ref_count(exp_120, ((struct sNode*)exp_120)->finalize, ((struct sNode*)exp_120)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1197, 1268):(void*)0);
                }
            }
            else {
                # 1199 "37var2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_106,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "37var2.nc", 1199, 1269, "struct tuple3$3sType$phchar$phsNode$ph"), "37var2.nc", 1199, 1270),(struct sType* )come_increment_ref_count(type2_115, "37var2.nc", 1199, 1271),(char* )come_increment_ref_count(var_name_116, "37var2.nc", 1199, 1272),(struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "37var2.nc", 1199, 1273)), "37var2.nc", 1199, 1274));
            }
            come_call_finalizer(sType_finalize, type2_115, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1203, 1275);
            (var_name_116 = come_decrement_ref_count(var_name_116, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1203, 1276));
        }
        # 1203 "37var2.nc"
        right_node=((void*)0);
        # 1204 "37var2.nc"
        __right_value0 = (void*)0;
        var_name2=(char* )come_increment_ref_count(__builtin_string("","37var2.nc",1204), "37var2.nc", 1204, 1277);
        # 1206 "37var2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "37var2.nc", 1206, 1282, "struct sNode");
        _inf_obj_value5=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value2=sStoreNode_initialize((struct sStoreNode* )come_increment_ref_count((struct sStoreNode *)come_calloc(1, sizeof(struct sStoreNode )*(1), "37var2.nc", 1206, 1278, "struct sStoreNode* "), "37var2.nc", 1206, 1279),(char* )come_increment_ref_count(__builtin_string(buf,"37var2.nc",1206), "37var2.nc", 1206, 1280),((void*)0),multiple_declare_106,base_type,(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""), "37var2.nc", 1206, 1281),(_Bool)0))), "37var2.nc", 1206, 1283);
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sStoreNode_finalize;
        _inf_value5->clone=(void*)sStoreNode_clone;
        _inf_value5->compile=(void*)sStoreNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sStoreNode_kind;
        _inf_value5->left_value=(void*)sNodeBase_left_value;
        __right_value3 = (void*)0;
        node_121=(struct sNode*)come_increment_ref_count(_inf_value5, "37var2.nc", 1206, 1284);
        come_call_finalizer(sStoreNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1206, 1285);
        # 1207 "37var2.nc"
        info->sline_real=sline_real;
        # 1208 "37var2.nc"
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_121, "37var2.nc", 1208, 1286);
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare_106, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1208, 1287);
        come_call_finalizer(sType_finalize, base_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1208, 1288);
        (name_107 = come_decrement_ref_count(name_107, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1208, 1289));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1208, 1290);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1208, 1291));
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1208, 1292):(void*)0);
        (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1208, 1293));
        ((node_121) ? node_121 = come_decrement_ref_count(node_121, ((struct sNode*)node_121)->finalize, ((struct sNode*)node_121)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1208, 1294):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1208, 1295):(void*)0);
        return __result_obj__0;
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare_106, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1356, 1296);
        come_call_finalizer(sType_finalize, base_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1356, 1297);
        (name_107 = come_decrement_ref_count(name_107, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1356, 1298));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1356, 1299);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1356, 1300));
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1356, 1301):(void*)0);
        (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1356, 1302));
        ((node_121) ? node_121 = come_decrement_ref_count(node_121, ((struct sNode*)node_121)->finalize, ((struct sNode*)node_121)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1356, 1303):(void*)0);
    }
    else if(attr_define) {
        # 1212 "37var2.nc"
        info->p=head;
        # 1213 "37var2.nc"
        info->sline=head_sline;
        # 1215 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1216 "37var2.nc"
        __right_value0 = (void*)0;
        multiple_assign_var9=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_122=(struct sType* )come_increment_ref_count(multiple_assign_var9->v1, "37var2.nc", 1216, 1304);
        name_123=(char* )come_increment_ref_count(multiple_assign_var9->v2, "37var2.nc", 1216, 1305);
        err_124=multiple_assign_var9->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1216, 1306);
        # 1217 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1224 "37var2.nc"
        if(!err_124) {
            # 1220 "37var2.nc"
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            # 1221 "37var2.nc"
            exit(2);
        }
        # 1224 "37var2.nc"
        info->p+=strlen("self.");
        # 1226 "37var2.nc"
        __right_value0 = (void*)0;
        __dec_obj147=name_123,
        name_123=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "37var2.nc", 1226, 1308);
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 1226, 1307);
        # 1228 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1229 "37var2.nc"
        add_defining_class_field_if_missing((char* )come_increment_ref_count(name_123, "37var2.nc", 1229, 1309),type_122,info);
        # 1248 "37var2.nc"
        if(*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
            # 1232 "37var2.nc"
            info->p++;
            # 1233 "37var2.nc"
            skip_spaces_and_lf(info);
            # 1236 "37var2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "37var2.nc", 1236, 1313, "struct sNode");
            _inf_obj_value6=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value2=sLoadNode_initialize((struct sLoadNode* )come_increment_ref_count((struct sLoadNode *)come_calloc(1, sizeof(struct sLoadNode )*(1), "37var2.nc", 1236, 1310, "struct sLoadNode* "), "37var2.nc", 1236, 1311),(char* )come_increment_ref_count(__builtin_string("self","37var2.nc",1236), "37var2.nc", 1236, 1312),info))), "37var2.nc", 1236, 1314);
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sLoadNode_finalize;
            _inf_value6->clone=(void*)sLoadNode_clone;
            _inf_value6->compile=(void*)sLoadNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sLoadNode_terminated;
            _inf_value6->kind=(void*)sLoadNode_kind;
            _inf_value6->left_value=(void*)sNodeBase_left_value;
            __right_value3 = (void*)0;
            self_node=(struct sNode*)come_increment_ref_count(_inf_value6, "37var2.nc", 1236, 1315);
            come_call_finalizer(sLoadNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1236, 1316);
            # 1238 "37var2.nc"
            __right_value0 = (void*)0;
            right_node_125=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "37var2.nc", 1238, 1317);
            # 1240 "37var2.nc"
            __right_value0 = (void*)0;
            node_126=(struct sNode*)come_increment_ref_count(store_field((struct sNode*)come_increment_ref_count(self_node, "37var2.nc", 1240, 1318),(struct sNode*)come_increment_ref_count(right_node_125, "37var2.nc", 1240, 1319),(char* )come_increment_ref_count(name_123, "37var2.nc", 1240, 1320),info), "37var2.nc", 1240, 1321);
            # 1241 "37var2.nc"
            info->sline_real=sline_real;
            # 1242 "37var2.nc"
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_126, "37var2.nc", 1242, 1322);
            ((self_node) ? self_node = come_decrement_ref_count(self_node, ((struct sNode*)self_node)->finalize, ((struct sNode*)self_node)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1242, 1323):(void*)0);
            ((right_node_125) ? right_node_125 = come_decrement_ref_count(right_node_125, ((struct sNode*)right_node_125)->finalize, ((struct sNode*)right_node_125)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1242, 1324):(void*)0);
            ((node_126) ? node_126 = come_decrement_ref_count(node_126, ((struct sNode*)node_126)->finalize, ((struct sNode*)node_126)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1242, 1325):(void*)0);
            come_call_finalizer(sType_finalize, type_122, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1242, 1326);
            (name_123 = come_decrement_ref_count(name_123, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1242, 1327));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1242, 1328):(void*)0);
            return __result_obj__0;
            ((self_node) ? self_node = come_decrement_ref_count(self_node, ((struct sNode*)self_node)->finalize, ((struct sNode*)self_node)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1248, 1329):(void*)0);
            ((right_node_125) ? right_node_125 = come_decrement_ref_count(right_node_125, ((struct sNode*)right_node_125)->finalize, ((struct sNode*)right_node_125)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1248, 1330):(void*)0);
            ((node_126) ? node_126 = come_decrement_ref_count(node_126, ((struct sNode*)node_126)->finalize, ((struct sNode*)node_126)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1248, 1331):(void*)0);
        }
        else {
            # 1245 "37var2.nc"
            info->sline_real=sline_real;
            # 1246 "37var2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_null_node(info))), "37var2.nc", 1246, 1332);
            come_call_finalizer(sType_finalize, type_122, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1246, 1333);
            (name_123 = come_decrement_ref_count(name_123, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1246, 1334));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "37var2.nc", 1246, 1335):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1246, 1336):(void*)0);
            return __result_obj__0;
        }
        come_call_finalizer(sType_finalize, type_122, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1356, 1337);
        (name_123 = come_decrement_ref_count(name_123, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1356, 1338));
    }
    else if(!is_type_name_flag&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
        # 1250 "37var2.nc"
        info->p++;
        # 1251 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1253 "37var2.nc"
        __right_value0 = (void*)0;
        right_value_127=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "37var2.nc", 1253, 1339);
        # 1254 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1256 "37var2.nc"
        __right_value0 = (void*)0;
        __dec_obj148=right_value_127,
        right_value_127=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_127, "37var2.nc", 1256, 1340),info), "37var2.nc", 1256, 1342);
        (__dec_obj148 ? __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0, (void*)0, "37var2.nc", 1256, 1341) :0);
        # 1258 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1260 "37var2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "37var2.nc", 1260, 1347, "struct sNode");
        _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value2=sStoreNode_initialize((struct sStoreNode* )come_increment_ref_count((struct sStoreNode *)come_calloc(1, sizeof(struct sStoreNode )*(1), "37var2.nc", 1260, 1343, "struct sStoreNode* "), "37var2.nc", 1260, 1344),(char* )come_increment_ref_count(__builtin_string(buf,"37var2.nc",1260), "37var2.nc", 1260, 1345),((void*)0),((void*)0),((void*)0),(_Bool)0,right_value_127,info,(char*)come_increment_ref_count(xsprintf(""), "37var2.nc", 1260, 1346),(_Bool)0))), "37var2.nc", 1260, 1348);
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sStoreNode_finalize;
        _inf_value7->clone=(void*)sStoreNode_clone;
        _inf_value7->compile=(void*)sStoreNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sStoreNode_kind;
        _inf_value7->left_value=(void*)sNodeBase_left_value;
        __right_value3 = (void*)0;
        node_128=(struct sNode*)come_increment_ref_count(_inf_value7, "37var2.nc", 1260, 1349);
        come_call_finalizer(sStoreNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1260, 1350);
        # 1261 "37var2.nc"
        info->sline_real=sline_real;
        # 1262 "37var2.nc"
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_128, "37var2.nc", 1262, 1351);
        ((right_value_127) ? right_value_127 = come_decrement_ref_count(right_value_127, ((struct sNode*)right_value_127)->finalize, ((struct sNode*)right_value_127)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1262, 1352):(void*)0);
        ((node_128) ? node_128 = come_decrement_ref_count(node_128, ((struct sNode*)node_128)->finalize, ((struct sNode*)node_128)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1262, 1353):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1262, 1354):(void*)0);
        return __result_obj__0;
        ((right_value_127) ? right_value_127 = come_decrement_ref_count(right_value_127, ((struct sNode*)right_value_127)->finalize, ((struct sNode*)right_value_127)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1356, 1355):(void*)0);
        ((node_128) ? node_128 = come_decrement_ref_count(node_128, ((struct sNode*)node_128)->finalize, ((struct sNode*)node_128)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1356, 1356):(void*)0);
    }
    else if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X0=(!is_type_name_flag||((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(buf,"37var2.nc",1264))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "37var2.nc", 1264, 1357));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1264, 1358);
_conditional_value_X0;})) {
        # 1265 "37var2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "37var2.nc", 1265, 1362, "struct sNode");
        _inf_obj_value8=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value2=sLoadNode_initialize((struct sLoadNode* )come_increment_ref_count((struct sLoadNode *)come_calloc(1, sizeof(struct sLoadNode )*(1), "37var2.nc", 1265, 1359, "struct sLoadNode* "), "37var2.nc", 1265, 1360),(char* )come_increment_ref_count(__builtin_string(buf,"37var2.nc",1265), "37var2.nc", 1265, 1361),info))), "37var2.nc", 1265, 1363);
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sLoadNode_finalize;
        _inf_value8->clone=(void*)sLoadNode_clone;
        _inf_value8->compile=(void*)sLoadNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sLoadNode_terminated;
        _inf_value8->kind=(void*)sLoadNode_kind;
        _inf_value8->left_value=(void*)sNodeBase_left_value;
        __right_value3 = (void*)0;
        node_129=(struct sNode*)come_increment_ref_count(_inf_value8, "37var2.nc", 1265, 1364);
        come_call_finalizer(sLoadNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1265, 1365);
        # 1267 "37var2.nc"
        __right_value0 = (void*)0;
        __dec_obj149=node_129,
        node_129=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_129, "37var2.nc", 1267, 1366),info), "37var2.nc", 1267, 1368);
        (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0, (void*)0, "37var2.nc", 1267, 1367) :0);
        # 1269 "37var2.nc"
        info->sline_real=sline_real;
        # 1271 "37var2.nc"
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_129, "37var2.nc", 1271, 1369);
        ((node_129) ? node_129 = come_decrement_ref_count(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1271, 1370):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1271, 1371):(void*)0);
        return __result_obj__0;
        ((node_129) ? node_129 = come_decrement_ref_count(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1356, 1372):(void*)0);
    }
    else if(!is_type_name_flag) {
        # 1274 "37var2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "37var2.nc", 1274, 1376, "struct sNode");
        _inf_obj_value9=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value2=sLoadNode_initialize((struct sLoadNode* )come_increment_ref_count((struct sLoadNode *)come_calloc(1, sizeof(struct sLoadNode )*(1), "37var2.nc", 1274, 1373, "struct sLoadNode* "), "37var2.nc", 1274, 1374),(char* )come_increment_ref_count(__builtin_string(buf,"37var2.nc",1274), "37var2.nc", 1274, 1375),info))), "37var2.nc", 1274, 1377);
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sLoadNode_finalize;
        _inf_value9->clone=(void*)sLoadNode_clone;
        _inf_value9->compile=(void*)sLoadNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sLoadNode_terminated;
        _inf_value9->kind=(void*)sLoadNode_kind;
        _inf_value9->left_value=(void*)sNodeBase_left_value;
        __right_value3 = (void*)0;
        node_130=(struct sNode*)come_increment_ref_count(_inf_value9, "37var2.nc", 1274, 1378);
        come_call_finalizer(sLoadNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1274, 1379);
        # 1276 "37var2.nc"
        __right_value0 = (void*)0;
        __dec_obj150=node_130,
        node_130=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_130, "37var2.nc", 1276, 1380),info), "37var2.nc", 1276, 1382);
        (__dec_obj150 ? __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0, (void*)0, "37var2.nc", 1276, 1381) :0);
        # 1278 "37var2.nc"
        info->sline_real=sline_real;
        # 1279 "37var2.nc"
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_130, "37var2.nc", 1279, 1383);
        ((node_130) ? node_130 = come_decrement_ref_count(node_130, ((struct sNode*)node_130)->finalize, ((struct sNode*)node_130)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1279, 1384):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1279, 1385):(void*)0);
        return __result_obj__0;
        ((node_130) ? node_130 = come_decrement_ref_count(node_130, ((struct sNode*)node_130)->finalize, ((struct sNode*)node_130)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1356, 1386):(void*)0);
    }
    else {
        # 1283 "37var2.nc"
        info->p=head;
        # 1284 "37var2.nc"
        info->sline=head_sline;
        # 1286 "37var2.nc"
        # 1294 "37var2.nc"
        if(xisalpha(*info->p)||*info->p==95) {
            # 1288 "37var2.nc"
            __right_value0 = (void*)0;
            __dec_obj151=word,
            word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "37var2.nc", 1288, 1388);
            __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 1288, 1387);
        }
        else {
            # 1291 "37var2.nc"
            __right_value0 = (void*)0;
            __dec_obj152=word,
            word=(char* )come_increment_ref_count(__builtin_string("","37var2.nc",1291), "37var2.nc", 1291, 1390);
            __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0, "37var2.nc", 1291, 1389);
        }
        # 1294 "37var2.nc"
        is_type_name_flag_131=is_type_name(word,info);
        # 1296 "37var2.nc"
        info->p=head;
        # 1297 "37var2.nc"
        info->sline=head_sline;
        # 1354 "37var2.nc"
        if(is_type_name_flag_131) {
            # 1300 "37var2.nc"
            skip_spaces_and_lf(info);
            # 1301 "37var2.nc"
            __right_value0 = (void*)0;
            multiple_assign_var10=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_132=(struct sType* )come_increment_ref_count(multiple_assign_var10->v1, "37var2.nc", 1301, 1391);
            name_133=(char* )come_increment_ref_count(multiple_assign_var10->v2, "37var2.nc", 1301, 1392);
            err_134=multiple_assign_var10->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1301, 1393);
            # 1302 "37var2.nc"
            skip_spaces_and_lf(info);
            # 1308 "37var2.nc"
            if(!err_134) {
                # 1305 "37var2.nc"
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                # 1306 "37var2.nc"
                exit(2);
            }
            # 1308 "37var2.nc"
            skip_spaces_and_lf(info);
            # 1353 "37var2.nc"
            if(*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&info->no_assign) {
                # 1311 "37var2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "37var2.nc", 1311, 1397, "struct sNode");
                _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value1=sLoadNode_initialize((struct sLoadNode* )come_increment_ref_count((struct sLoadNode *)come_calloc(1, sizeof(struct sLoadNode )*(1), "37var2.nc", 1311, 1394, "struct sLoadNode* "), "37var2.nc", 1311, 1395),(char* )come_increment_ref_count(name_133, "37var2.nc", 1311, 1396),info))), "37var2.nc", 1311, 1398);
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sLoadNode_finalize;
                _inf_value10->clone=(void*)sLoadNode_clone;
                _inf_value10->compile=(void*)sLoadNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sLoadNode_terminated;
                _inf_value10->kind=(void*)sLoadNode_kind;
                _inf_value10->left_value=(void*)sNodeBase_left_value;
                __right_value2 = (void*)0;
                node_135=(struct sNode*)come_increment_ref_count(_inf_value10, "37var2.nc", 1311, 1399);
                come_call_finalizer(sLoadNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1311, 1400);
                # 1313 "37var2.nc"
                info->sline_real=sline_real;
                # 1314 "37var2.nc"
                                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_135, "37var2.nc", 1314, 1401);
                ((node_135) ? node_135 = come_decrement_ref_count(node_135, ((struct sNode*)node_135)->finalize, ((struct sNode*)node_135)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1314, 1402):(void*)0);
                come_call_finalizer(sType_finalize, type_132, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1314, 1403);
                (name_133 = come_decrement_ref_count(name_133, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1314, 1404));
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1314, 1405));
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1314, 1406):(void*)0);
                return __result_obj__0;
                ((node_135) ? node_135 = come_decrement_ref_count(node_135, ((struct sNode*)node_135)->finalize, ((struct sNode*)node_135)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1353, 1407):(void*)0);
            }
            else if(*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
                # 1317 "37var2.nc"
                info->p++;
                # 1318 "37var2.nc"
                skip_spaces_and_lf(info);
                # 1320 "37var2.nc"
                right_value_136=((void*)0);
                # 1342 "37var2.nc"
                if((type_132->mClass->mStruct||type_132->mClass->mUnion)&&list$1sNode$ph_length(type_132->mArrayNum)==0) {
                    # 1322 "37var2.nc"
                    info->array_initializer=(_Bool)1;
                    # 1323 "37var2.nc"
                    no_comma_137=info->no_comma;
                    # 1324 "37var2.nc"
                    info->no_comma=(_Bool)1;
                    # 1325 "37var2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj153=right_value_136,
                    right_value_136=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "37var2.nc", 1325, 1409);
                    (__dec_obj153 ? __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0, (void*)0, "37var2.nc", 1325, 1408) :0);
                    # 1326 "37var2.nc"
                    info->no_comma=no_comma_137;
                    # 1327 "37var2.nc"
                    info->array_initializer=(_Bool)0;
                }
                else if(list$1sNode$ph_length(type_132->mArrayNum)>0||type_132->mArrayPointerType) {
                    # 1330 "37var2.nc"
                    info->array_initializer=(_Bool)1;
                    # 1331 "37var2.nc"
                    skip_spaces_and_lf(info);
                    # 1332 "37var2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj154=right_value_136,
                    right_value_136=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "37var2.nc", 1332, 1411);
                    (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0, (void*)0, "37var2.nc", 1332, 1410) :0);
                    # 1333 "37var2.nc"
                    skip_spaces_and_lf(info);
                    # 1334 "37var2.nc"
                    info->array_initializer=(_Bool)0;
                }
                else {
                    # 1337 "37var2.nc"
                    skip_spaces_and_lf(info);
                    # 1338 "37var2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj155=right_value_136,
                    right_value_136=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "37var2.nc", 1338, 1413);
                    (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0, (void*)0, "37var2.nc", 1338, 1412) :0);
                    # 1339 "37var2.nc"
                    skip_spaces_and_lf(info);
                }
                # 1342 "37var2.nc"
                __right_value0 = (void*)0;
                __dec_obj156=right_value_136,
                right_value_136=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_136, "37var2.nc", 1342, 1414),info), "37var2.nc", 1342, 1416);
                (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0, (void*)0, "37var2.nc", 1342, 1415) :0);
                # 1344 "37var2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "37var2.nc", 1344, 1421, "struct sNode");
                _inf_obj_value11=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value1=sStoreNode_initialize((struct sStoreNode* )come_increment_ref_count((struct sStoreNode *)come_calloc(1, sizeof(struct sStoreNode )*(1), "37var2.nc", 1344, 1417, "struct sStoreNode* "), "37var2.nc", 1344, 1418),(char* )come_increment_ref_count(name_133, "37var2.nc", 1344, 1419),((void*)0),((void*)0),type_132,(_Bool)1,right_value_136,info,(char*)come_increment_ref_count(xsprintf(""), "37var2.nc", 1344, 1420),(_Bool)0))), "37var2.nc", 1344, 1422);
                _inf_value11->_protocol_obj=_inf_obj_value11;
                _inf_value11->finalize=(void*)sStoreNode_finalize;
                _inf_value11->clone=(void*)sStoreNode_clone;
                _inf_value11->compile=(void*)sStoreNode_compile;
                _inf_value11->sline=(void*)sNodeBase_sline;
                _inf_value11->sline_real=(void*)sNodeBase_sline_real;
                _inf_value11->sname=(void*)sNodeBase_sname;
                _inf_value11->terminated=(void*)sNodeBase_terminated;
                _inf_value11->kind=(void*)sStoreNode_kind;
                _inf_value11->left_value=(void*)sNodeBase_left_value;
                __right_value2 = (void*)0;
                node_138=(struct sNode*)come_increment_ref_count(_inf_value11, "37var2.nc", 1344, 1423);
                come_call_finalizer(sStoreNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1344, 1424);
                # 1345 "37var2.nc"
                info->sline_real=sline_real;
                # 1346 "37var2.nc"
                                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_138, "37var2.nc", 1346, 1425);
                ((right_value_136) ? right_value_136 = come_decrement_ref_count(right_value_136, ((struct sNode*)right_value_136)->finalize, ((struct sNode*)right_value_136)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1346, 1426):(void*)0);
                ((node_138) ? node_138 = come_decrement_ref_count(node_138, ((struct sNode*)node_138)->finalize, ((struct sNode*)node_138)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1346, 1427):(void*)0);
                come_call_finalizer(sType_finalize, type_132, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1346, 1428);
                (name_133 = come_decrement_ref_count(name_133, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1346, 1429));
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1346, 1430));
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1346, 1431):(void*)0);
                return __result_obj__0;
                ((right_value_136) ? right_value_136 = come_decrement_ref_count(right_value_136, ((struct sNode*)right_value_136)->finalize, ((struct sNode*)right_value_136)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1353, 1432):(void*)0);
                ((node_138) ? node_138 = come_decrement_ref_count(node_138, ((struct sNode*)node_138)->finalize, ((struct sNode*)node_138)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1353, 1433):(void*)0);
            }
            else {
                # 1349 "37var2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "37var2.nc", 1349, 1438, "struct sNode");
                _inf_obj_value12=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value1=sStoreNode_initialize((struct sStoreNode* )come_increment_ref_count((struct sStoreNode *)come_calloc(1, sizeof(struct sStoreNode )*(1), "37var2.nc", 1349, 1434, "struct sStoreNode* "), "37var2.nc", 1349, 1435),(char* )come_increment_ref_count(name_133, "37var2.nc", 1349, 1436),((void*)0),((void*)0),type_132,(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""), "37var2.nc", 1349, 1437),(_Bool)0))), "37var2.nc", 1349, 1439);
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sStoreNode_finalize;
                _inf_value12->clone=(void*)sStoreNode_clone;
                _inf_value12->compile=(void*)sStoreNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sNodeBase_terminated;
                _inf_value12->kind=(void*)sStoreNode_kind;
                _inf_value12->left_value=(void*)sNodeBase_left_value;
                __right_value2 = (void*)0;
                node_139=(struct sNode*)come_increment_ref_count(_inf_value12, "37var2.nc", 1349, 1440);
                come_call_finalizer(sStoreNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1349, 1441);
                # 1350 "37var2.nc"
                info->sline_real=sline_real;
                # 1351 "37var2.nc"
                                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_139, "37var2.nc", 1351, 1442);
                ((node_139) ? node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1351, 1443):(void*)0);
                come_call_finalizer(sType_finalize, type_132, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1351, 1444);
                (name_133 = come_decrement_ref_count(name_133, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1351, 1445));
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1351, 1446));
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1351, 1447):(void*)0);
                return __result_obj__0;
                ((node_139) ? node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1353, 1448):(void*)0);
            }
            come_call_finalizer(sType_finalize, type_132, (void*)0, (void*)0, 0, 0, 0, (void*)0, "37var2.nc}", 1354, 1449);
            (name_133 = come_decrement_ref_count(name_133, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1354, 1450));
        }
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "37var2.nc", 1356, 1451));
    }
    # 1356 "37var2.nc"
    err_msg(info,"unexpected word(%s)(1)",buf);
    # 1357 "37var2.nc"
    exit(2);
    neo_current_frame = fr.prev;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple3$3sType$phchar$ph_Bool$$p_finalize"
    # 3 "tuple3$3sType$phchar$ph_Bool$$p_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple3$3sType$phchar$ph_Bool$$p_finalize"
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 1123);
    }
    # 4 "tuple3$3sType$phchar$ph_Bool$$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple3$3sType$phchar$ph_Bool$$p_finalize"
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 1124));
    }
                neo_current_frame = fr.prev;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sType$phchar$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple2$2sType$phchar$ph$p_finalize"
    # 3 "tuple2$2sType$phchar$ph$p_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple2$2sType$phchar$ph$p_finalize"
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2sType$phchar$ph$p_finalize}", 2, 1128);
    }
    # 4 "tuple2$2sType$phchar$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple2$2sType$phchar$ph$p_finalize"
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2sType$phchar$ph$p_finalize", 3, 1129));
    }
                    neo_current_frame = fr.prev;
}

static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewChannel_clone"; neo_current_frame = &fr;
    struct sNewChannel* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNewChannel*  result  ;
    char*  __dec_obj140  ;
    # 3 "sNewChannel_clone"
    # 5 "sNewChannel_clone"
    if(self==(void*)0) {
        # 4 "sNewChannel_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sNewChannel_clone"
    result=(struct sNewChannel* )come_increment_ref_count((struct sNewChannel *)come_calloc(1, sizeof(struct sNewChannel )*(1), "sNewChannel_clone", 5, 1181, "struct sNewChannel* "), "sNewChannel_clone", 5, 1182);
    # 7 "sNewChannel_clone"
    if(self!=((void*)0)) {
        # 6 "sNewChannel_clone"
        result->sline=self->sline;
    }
    # 8 "sNewChannel_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sNewChannel_clone"
        __right_value0 = (void*)0;
        __dec_obj140=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNewChannel_clone", 7, 1183, "char* "), "sNewChannel_clone", 7, 1185);
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0, "sNewChannel_clone", 7, 1184);
    }
    # 9 "sNewChannel_clone"
    if(self!=((void*)0)) {
        # 8 "sNewChannel_clone"
        result->sline_real=self->sline_real;
    }
    # 9 "sNewChannel_clone"
        __result_obj__0 = result;
    come_call_finalizer(sNewChannel_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sNewChannel_clone}", 9, 1186);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back"; neo_current_frame = &fr;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem;
    struct tuple3$3sType$phchar$phsNode$ph* __dec_obj141;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_111;
    struct tuple3$3sType$phchar$phsNode$ph* __dec_obj142;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_112;
    struct tuple3$3sType$phchar$phsNode$ph* __dec_obj143;
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 1203);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./neo-c.h", 1619, 1204, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))), "./neo-c.h", 1619, 1205);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj141=litem->item,
        litem->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1623, 1207);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj141,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 1206);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_111=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./neo-c.h", 1629, 1208, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))), "./neo-c.h", 1629, 1209);
        # 1631 "./neo-c.h"
        litem_111->prev=self->head;
        # 1632 "./neo-c.h"
        litem_111->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj142=litem_111->item,
        litem_111->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1633, 1211);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj142,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 1210);
        # 1635 "./neo-c.h"
        self->tail=litem_111;
        # 1636 "./neo-c.h"
        self->head->next=litem_111;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_112=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./neo-c.h", 1639, 1212, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))), "./neo-c.h", 1639, 1213);
        # 1641 "./neo-c.h"
        litem_112->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_112->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj143=litem_112->item,
        litem_112->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1643, 1215);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 1214);
        # 1645 "./neo-c.h"
        self->tail->next=litem_112;
        # 1646 "./neo-c.h"
        self->tail=litem_112;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 1216);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType*  v1  , char*  v2  , struct sNode* v3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$phsNode$ph_initialize"; neo_current_frame = &fr;
    struct sType*  __dec_obj144  ;
    char*  __dec_obj145  ;
    struct sNode* __dec_obj146;
    struct tuple3$3sType$phchar$phsNode$ph* __result_obj__0;
    # 4495 "./neo-c.h"
    __dec_obj144=self->v1,
    self->v1=(struct sType* )come_increment_ref_count(v1, "./neo-c.h", 4495, 1219);
    come_call_finalizer(sType_finalize, __dec_obj144,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 4495, 1218);
    # 4496 "./neo-c.h"
    __dec_obj145=self->v2,
    self->v2=(char* )come_increment_ref_count(v2, "./neo-c.h", 4496, 1221);
    __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4496, 1220);
    # 4497 "./neo-c.h"
    __dec_obj146=self->v3,
    self->v3=(struct sNode*)come_increment_ref_count(v3, "./neo-c.h", 4497, 1223);
    (__dec_obj146 ? __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 4497, 1222) :0);
    # 4499 "./neo-c.h"
        __result_obj__0 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(self, "./neo-c.h", 4499, 1224);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4499, 1225);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4499, 1226);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4499, 1227));
    ((v3) ? v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 4499, 1228):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4499, 1229);
    return __result_obj__0;
}

struct sNode* expression_node_v95(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expression_node_v95"; neo_current_frame = &fr;
    struct sNode* node;
    void* __right_value0 = (void*)0;
    struct sNode* exp;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value13;
    struct sReadChannelNode* _inf_obj_value13;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    struct sNode* __dec_obj159;
    memset(&node, 0, sizeof(node));
    # 1362 "37var2.nc"
    skip_spaces_and_lf(info);
    # 1364 "37var2.nc"
    # 1379 "37var2.nc"
    if(strncmp(info->p,"<-",strlen("<-"))==0) {
        # 1367 "37var2.nc"
        info->p+=strlen("<-");
        # 1368 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1370 "37var2.nc"
        exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "37var2.nc", 1370, 1452);
        # 1371 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1373 "37var2.nc"
                __right_value0 = (void*)0;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "37var2.nc", 1373, 1456, "struct sNode");
        _inf_obj_value13=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value1=sReadChannelNode_initialize((struct sReadChannelNode* )come_increment_ref_count((struct sReadChannelNode *)come_calloc(1, sizeof(struct sReadChannelNode )*(1), "37var2.nc", 1373, 1453, "struct sReadChannelNode* "), "37var2.nc", 1373, 1454),(struct sNode*)come_increment_ref_count(exp, "37var2.nc", 1373, 1455),info))), "37var2.nc", 1373, 1457);
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sReadChannelNode_finalize;
        _inf_value13->clone=(void*)sReadChannelNode_clone;
        _inf_value13->compile=(void*)sReadChannelNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sReadChannelNode_kind;
        _inf_value13->left_value=(void*)sNodeBase_left_value;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)), "37var2.nc", 1373, 1466);
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1373, 1467):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1373, 1468):(void*)0);
        come_call_finalizer(sReadChannelNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1373, 1469);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "37var2.nc", 1373, 1470):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1373, 1471):(void*)0);
        return __result_obj__0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1379, 1472):(void*)0);
    }
    else {
        # 1376 "37var2.nc"
        __right_value0 = (void*)0;
        __dec_obj159=node,
        node=(struct sNode*)come_increment_ref_count(expression_node_v1(info), "37var2.nc", 1376, 1474);
        (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0, (void*)0, "37var2.nc", 1376, 1473) :0);
    }
    # 1379 "37var2.nc"
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "37var2.nc", 1379, 1475);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1379, 1476):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1379, 1477):(void*)0);
    return __result_obj__0;
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReadChannelNode_clone"; neo_current_frame = &fr;
    struct sReadChannelNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sReadChannelNode*  result  ;
    char*  __dec_obj157  ;
    struct sNode* __dec_obj158;
    # 3 "sReadChannelNode_clone"
    # 5 "sReadChannelNode_clone"
    if(self==(void*)0) {
        # 4 "sReadChannelNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sReadChannelNode_clone"
    result=(struct sReadChannelNode* )come_increment_ref_count((struct sReadChannelNode *)come_calloc(1, sizeof(struct sReadChannelNode )*(1), "sReadChannelNode_clone", 5, 1458, "struct sReadChannelNode* "), "sReadChannelNode_clone", 5, 1459);
    # 7 "sReadChannelNode_clone"
    if(self!=((void*)0)) {
        # 6 "sReadChannelNode_clone"
        result->sline=self->sline;
    }
    # 8 "sReadChannelNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sReadChannelNode_clone"
        __right_value0 = (void*)0;
        __dec_obj157=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sReadChannelNode_clone", 7, 1460, "char* "), "sReadChannelNode_clone", 7, 1462);
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0, (void*)0, "sReadChannelNode_clone", 7, 1461);
    }
    # 9 "sReadChannelNode_clone"
    if(self!=((void*)0)) {
        # 8 "sReadChannelNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sReadChannelNode_clone"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 9 "sReadChannelNode_clone"
        __right_value0 = (void*)0;
        __dec_obj158=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sReadChannelNode_clone", 9, 1464);
        (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0, (void*)0, "sReadChannelNode_clone", 9, 1463) :0);
    }
    # 10 "sReadChannelNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sReadChannelNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sReadChannelNode_clone}", 10, 1465);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "post_position_operator_v7"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* right_value;
    struct sNode* __dec_obj160;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value14;
    struct sWriteChannelNode* _inf_obj_value14;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1398 "37var2.nc"
    if(!node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0) {
        # 1385 "37var2.nc"
        info->p+=2;
        # 1386 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1388 "37var2.nc"
        right_value=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "37var2.nc", 1388, 1478);
        # 1389 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1391 "37var2.nc"
        __right_value0 = (void*)0;
        __dec_obj160=right_value,
        right_value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value, "37var2.nc", 1391, 1479),info), "37var2.nc", 1391, 1481);
        (__dec_obj160 ? __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0, (void*)0, "37var2.nc", 1391, 1480) :0);
        # 1393 "37var2.nc"
        skip_spaces_and_lf(info);
        # 1395 "37var2.nc"
                __right_value0 = (void*)0;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "37var2.nc", 1395, 1486, "struct sNode");
        _inf_obj_value14=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value1=sWriteChannelNode_initialize((struct sWriteChannelNode* )come_increment_ref_count((struct sWriteChannelNode *)come_calloc(1, sizeof(struct sWriteChannelNode )*(1), "37var2.nc", 1395, 1482, "struct sWriteChannelNode* "), "37var2.nc", 1395, 1483),(struct sNode*)come_increment_ref_count(node, "37var2.nc", 1395, 1484),(struct sNode*)come_increment_ref_count(right_value, "37var2.nc", 1395, 1485),info))), "37var2.nc", 1395, 1487);
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value14->clone=(void*)sWriteChannelNode_clone;
        _inf_value14->compile=(void*)sWriteChannelNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sWriteChannelNode_kind;
        _inf_value14->left_value=(void*)sNodeBase_left_value;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)), "37var2.nc", 1395, 1498);
        ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1395, 1499):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1395, 1500):(void*)0);
        come_call_finalizer(sWriteChannelNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "37var2.nc}", 1395, 1501);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "37var2.nc", 1395, 1502):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1395, 1503):(void*)0);
        return __result_obj__0;
        ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1398, 1504):(void*)0);
    }
    # 1398 "37var2.nc"
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=post_position_operator((struct sNode*)come_increment_ref_count(node, "37var2.nc", 1398, 1505),info))), "37var2.nc", 1398, 1506);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "37var2.nc", 1398, 1507):(void*)0);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "37var2.nc", 1398, 1508):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "37var2.nc", 1398, 1509):(void*)0);
    return __result_obj__0;
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWriteChannelNode_clone"; neo_current_frame = &fr;
    struct sWriteChannelNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sWriteChannelNode*  result  ;
    char*  __dec_obj161  ;
    struct sNode* __dec_obj162;
    struct sNode* __dec_obj163;
    # 3 "sWriteChannelNode_clone"
    # 5 "sWriteChannelNode_clone"
    if(self==(void*)0) {
        # 4 "sWriteChannelNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sWriteChannelNode_clone"
    result=(struct sWriteChannelNode* )come_increment_ref_count((struct sWriteChannelNode *)come_calloc(1, sizeof(struct sWriteChannelNode )*(1), "sWriteChannelNode_clone", 5, 1488, "struct sWriteChannelNode* "), "sWriteChannelNode_clone", 5, 1489);
    # 7 "sWriteChannelNode_clone"
    if(self!=((void*)0)) {
        # 6 "sWriteChannelNode_clone"
        result->sline=self->sline;
    }
    # 8 "sWriteChannelNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sWriteChannelNode_clone"
        __right_value0 = (void*)0;
        __dec_obj161=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sWriteChannelNode_clone", 7, 1490, "char* "), "sWriteChannelNode_clone", 7, 1492);
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0, (void*)0, "sWriteChannelNode_clone", 7, 1491);
    }
    # 9 "sWriteChannelNode_clone"
    if(self!=((void*)0)) {
        # 8 "sWriteChannelNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sWriteChannelNode_clone"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 9 "sWriteChannelNode_clone"
        __right_value0 = (void*)0;
        __dec_obj162=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sWriteChannelNode_clone", 9, 1494);
        (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0, (void*)0, "sWriteChannelNode_clone", 9, 1493) :0);
    }
    # 11 "sWriteChannelNode_clone"
    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
        # 10 "sWriteChannelNode_clone"
        __right_value0 = (void*)0;
        __dec_obj163=result->right_value,
        result->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value), "sWriteChannelNode_clone", 10, 1496);
        (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0, (void*)0, "sWriteChannelNode_clone", 10, 1495) :0);
    }
    # 11 "sWriteChannelNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sWriteChannelNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sWriteChannelNode_clone}", 11, 1497);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

