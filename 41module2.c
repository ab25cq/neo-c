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
static void map$2char$phbuffer$ph_remove_ordered_entry(struct map$2char$phbuffer$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phbuffer$ph_key_position(struct map$2char$phbuffer$ph* self, char*  key  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer);
static void map$2char$phsFun$ph_remove_ordered_entry(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phsFun$ph_key_position(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer);
static void sFun_finalize(struct sFun*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_remove(struct map$2char$phsGenericsFun$ph* self, char*  key  , _Bool by_pointer);
static void map$2char$phsGenericsFun$ph_remove_ordered_entry(struct map$2char$phsGenericsFun$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phsGenericsFun$ph_key_position(struct map$2char$phsGenericsFun$ph* self, char*  key  , _Bool by_pointer);
static void sGenericsFun_finalize(struct sGenericsFun*  self  );
static struct map$2char$phsType$ph* map$2char$phsType$ph_remove(struct map$2char$phsType$ph* self, char*  key  , _Bool by_pointer);
static void map$2char$phsType$ph_remove_ordered_entry(struct map$2char$phsType$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phsType$ph_key_position(struct map$2char$phsType$ph* self, char*  key  , _Bool by_pointer);
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
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static void sNothingNode_finalize(struct sNothingNode* self);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
static struct sUndefNode* sUndefNode_clone(struct sUndefNode* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char*  key  , char*  item  , _Bool by_pointer);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_remove_ordered_entry(struct map$2char$phchar$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phchar$ph_key_position(struct map$2char$phchar$ph* self, char*  key  , _Bool by_pointer);
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
static inline int align_up(int x, int align)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "align_up"; neo_current_frame = &fr;
    # 99 "41module2.nc"
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
    # 6 "41module2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sStaticAssert*)come_increment_ref_count(self, "41module2.nc", 6, 1),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 6, 3);
    # 8 "41module2.nc"
    __dec_obj1=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp, "41module2.nc", 8, 5);
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0,0, (void*)0, "41module2.nc", 8, 4) :0);
    # 9 "41module2.nc"
    __dec_obj2=self->exp2,
    self->exp2=(struct sNode*)come_increment_ref_count(exp2, "41module2.nc", 9, 7);
    (__dec_obj2 ? __dec_obj2 = come_decrement_ref_count(__dec_obj2, ((struct sNode*)__dec_obj2)->finalize, ((struct sNode*)__dec_obj2)->_protocol_obj, 0,0, (void*)0, "41module2.nc", 9, 6) :0);
    # 12 "41module2.nc"
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
    # 14 "41module2.nc"
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
    # 19 "41module2.nc"
    exp=(struct sNode*)come_increment_ref_count(self->exp, "41module2.nc", 19, 19);
    # 25 "41module2.nc"
    Value=node_compile(exp,info);
    if(!Value) {
        # 22 "41module2.nc"
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 22, 20):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 25 "41module2.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "41module2.nc", 25, 21);
    # 27 "41module2.nc"
    exp2=(struct sNode*)come_increment_ref_count(self->exp2, "41module2.nc", 27, 22);
    # 33 "41module2.nc"
    Value_0=node_compile(exp2,info);
    if(!Value_0) {
        # 30 "41module2.nc"
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 30, 23):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 30, 61);
        ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 30, 62):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 33 "41module2.nc"
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "41module2.nc", 33, 63);
    # 35 "41module2.nc"
    __right_value0 = (void*)0;
    come_value3=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "41module2.nc", 35, 64, "struct CVALUE* "), "41module2.nc", 35, 65)), "41module2.nc", 35, 66);
    # 37 "41module2.nc"
    __right_value0 = (void*)0;
    __dec_obj3=come_value3->c_value,
    come_value3->c_value=(char* )come_increment_ref_count(xsprintf("_Static_assert(%s, %s)",come_value->c_value,come_value2->c_value), "41module2.nc", 37, 68);
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 37, 67);
    # 38 "41module2.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj4=come_value3->type,
    come_value3->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "41module2.nc", 38, 69, "struct sType* "), "41module2.nc", 38, 70),(char*)come_increment_ref_count(xsprintf("void"), "41module2.nc", 38, 71),(_Bool)0,info,(_Bool)0,0), "41module2.nc", 38, 73);
    come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc", 38, 72);
    # 39 "41module2.nc"
    come_value3->var=((void*)0);
    # 41 "41module2.nc"
    add_come_last_code(info,"%s",come_value3->c_value);
    # 43 "41module2.nc"
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
    # 1 "sNodeBase_finalize"
    # 3 "sNodeBase_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sNodeBase_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 2));
    }
        neo_current_frame = fr.prev;
}

static void sStaticAssert_finalize(struct sStaticAssert* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStaticAssert_finalize"; neo_current_frame = &fr;
    # 1 "sStaticAssert_finalize"
    # 3 "sStaticAssert_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sStaticAssert_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sStaticAssert_finalize", 2, 9));
    }
    # 4 "sStaticAssert_finalize"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 3 "sStaticAssert_finalize"
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sStaticAssert_finalize", 3, 10):(void*)0);
    }
    # 5 "sStaticAssert_finalize"
    if(self!=((void*)0)&&self->exp2!=((void*)0)) {
        # 4 "sStaticAssert_finalize"
        ((self->exp2) ? self->exp2 = come_decrement_ref_count(self->exp2, ((struct sNode*)self->exp2)->finalize, ((struct sNode*)self->exp2)->_protocol_obj, 0, 0,(void*)0, "sStaticAssert_finalize", 4, 11):(void*)0);
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
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 24));
    }
    # 4 "CVALUE_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 3 "CVALUE_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 57);
    }
    # 5 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        # 4 "CVALUE_finalize"
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 58));
    }
    # 6 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        # 5 "CVALUE_finalize"
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 59));
    }
    # 7 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        # 6 "CVALUE_finalize"
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 60));
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
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 25);
    }
    # 4 "sType_finalize"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 3 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 26);
    }
    # 5 "sType_finalize"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 4 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 29);
    }
    # 6 "sType_finalize"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 5 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 30);
    }
    # 7 "sType_finalize"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 6 "sType_finalize"
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 31):(void*)0);
    }
    # 8 "sType_finalize"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 7 "sType_finalize"
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 32):(void*)0);
    }
    # 9 "sType_finalize"
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        # 8 "sType_finalize"
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 33));
    }
    # 10 "sType_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 9 "sType_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 34));
    }
    # 11 "sType_finalize"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 10 "sType_finalize"
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 35));
    }
    # 12 "sType_finalize"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 11 "sType_finalize"
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 36));
    }
    # 13 "sType_finalize"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 12 "sType_finalize"
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 37));
    }
    # 14 "sType_finalize"
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        # 13 "sType_finalize"
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 38));
    }
    # 15 "sType_finalize"
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        # 14 "sType_finalize"
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 39));
    }
    # 16 "sType_finalize"
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        # 15 "sType_finalize"
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 40));
    }
    # 17 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        # 16 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 43);
    }
    # 18 "sType_finalize"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 17 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 44);
    }
    # 19 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 18 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 46);
    }
    # 20 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 19 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 47);
    }
    # 21 "sType_finalize"
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        # 20 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 48);
    }
    # 22 "sType_finalize"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 21 "sType_finalize"
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 49));
    }
    # 23 "sType_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 22 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 50);
    }
    # 24 "sType_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 23 "sType_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 0, 53);
    }
    # 25 "sType_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 24 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 54);
    }
    # 26 "sType_finalize"
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        # 25 "sType_finalize"
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 55):(void*)0);
    }
    # 27 "sType_finalize"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 26 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 56);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 28);
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
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 27);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 42);
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
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 41):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 45);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 52);
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
    # 49 "41module2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sUndefNode*)come_increment_ref_count(self, "41module2.nc", 49, 79),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 49, 80);
    # 51 "41module2.nc"
    __dec_obj5=self->str,
    self->str=(char* )come_increment_ref_count(str, "41module2.nc", 51, 82);
    __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 51, 81);
    # 54 "41module2.nc"
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
    # 56 "41module2.nc"
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
    # 61 "41module2.nc"
    str=(char* )come_increment_ref_count(self->str, "41module2.nc", 61, 92);
    # 63 "41module2.nc"
    map$2char$phbuffer$ph_remove(info->struct_definition,(char* )come_increment_ref_count(str, "41module2.nc", 63, 101),(_Bool)0);
    # 64 "41module2.nc"
    map$2char$phsFun$ph_remove(info->funcs,(char* )come_increment_ref_count(str, "41module2.nc", 64, 132),(_Bool)0);
    # 65 "41module2.nc"
    map$2char$phsGenericsFun$ph_remove(info->generics_funcs,(char* )come_increment_ref_count(str, "41module2.nc", 65, 147),(_Bool)0);
    # 66 "41module2.nc"
    map$2char$phsType$ph_remove(info->types,(char* )come_increment_ref_count(str, "41module2.nc", 66, 152),(_Bool)0);
    # 67 "41module2.nc"
    map$2char$phbuffer$ph_remove(info->typedef_definition,(char* )come_increment_ref_count(str, "41module2.nc", 67, 153),(_Bool)0);
    # 69 "41module2.nc"
        __result_obj__0 = (_Bool)1;
    (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 69, 154));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sUndefNode_finalize(struct sUndefNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUndefNode_finalize"; neo_current_frame = &fr;
    # 1 "sUndefNode_finalize"
    # 3 "sUndefNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sUndefNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sUndefNode_finalize", 2, 84));
    }
    # 4 "sUndefNode_finalize"
    if(self!=((void*)0)&&self->str!=((void*)0)) {
        # 3 "sUndefNode_finalize"
        (self->str = come_decrement_ref_count(self->str, (void*)0, (void*)0, 0, 0, (void*)0, "sUndefNode_finalize", 3, 85));
    }
        neo_current_frame = fr.prev;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_remove(struct map$2char$phbuffer$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_remove"; neo_current_frame = &fr;
    struct map$2char$phbuffer$ph* __result_obj__0;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 3543 "./neo-c.h"
    # 3549 "./neo-c.h"
    if(self==((void*)0)) {
        # 3546 "./neo-c.h"
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3546, 93));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3549 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 3550 "./neo-c.h"
    hash=key_hash%self->size;
    # 3551 "./neo-c.h"
    it=hash;
    # 3589 "./neo-c.h"
    while((_Bool)1) {
        # 3587 "./neo-c.h"
        if(self->item_existance[it]) {
            # 3577 "./neo-c.h"
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                # 3559 "./neo-c.h"
                map$2char$phbuffer$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                # 3561 "./neo-c.h"
                self->item_existance[it]=(_Bool)0;
                # 3562 "./neo-c.h"
                self->hashes[it]=0;
                # 3566 "./neo-c.h"
                if(1) {
                    # 3564 "./neo-c.h"
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3564, 98));
                }
                # 3566 "./neo-c.h"
                self->keys[it]=((void*)0);
                # 3571 "./neo-c.h"
                if(1) {
                    # 3569 "./neo-c.h"
                    come_call_finalizer(buffer_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3569, 99);
                }
                # 3571 "./neo-c.h"
                memset(self->items+it,0,sizeof(struct buffer* ));
                # 3573 "./neo-c.h"
                self->len--;
                # 3574 "./neo-c.h"
                break;
            }
            # 3580 "./neo-c.h"
            if(++it>=self->size) {
                # 3578 "./neo-c.h"
                it=0;
            }
            # 3583 "./neo-c.h"
            if(it==hash) {
                # 3581 "./neo-c.h"
                break;
            }
        }
        else {
            # 3585 "./neo-c.h"
            break;
        }
    }
    # 3589 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3589, 100));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phbuffer$ph_remove_ordered_entry(struct map$2char$phbuffer$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    # 3434 "./neo-c.h"
    pos=map$2char$phbuffer$ph_key_position(self,key,by_pointer);
    # 3438 "./neo-c.h"
    if(pos>=0) {
        # 3436 "./neo-c.h"
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phbuffer$ph_key_position(struct map$2char$phbuffer$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_key_position"; neo_current_frame = &fr;
    int pos;
    struct list_item$1char$ph* it;
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
    struct list_item$1char$ph* it_1;
    int i_2;
    struct list_item$1char$ph* prev_it_3;
    struct list_item$1char$ph* it_4;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_5;
    struct list_item$1char$ph* prev_it_6;
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1942, 95);
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
        it_1=self->head;
        # 1959 "./neo-c.h"
        i_2=0;
        # 1981 "./neo-c.h"
        while(it_1!=((void*)0)) {
            # 1966 "./neo-c.h"
            if(i_2==head) {
                # 1962 "./neo-c.h"
                self->tail=it_1->prev;
                # 1963 "./neo-c.h"
                self->tail->next=((void*)0);
            }
            # 1980 "./neo-c.h"
            if(i_2>=head) {
                # 1967 "./neo-c.h"
                prev_it_3=it_1;
                # 1969 "./neo-c.h"
                it_1=it_1->next;
                # 1970 "./neo-c.h"
                i_2++;
                # 1972 "./neo-c.h"
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1972, 96);
                # 1974 "./neo-c.h"
                self->len--;
            }
            else {
                # 1977 "./neo-c.h"
                it_1=it_1->next;
                # 1978 "./neo-c.h"
                i_2++;
            }
        }
    }
    else {
        # 1983 "./neo-c.h"
        it_4=self->head;
        # 1985 "./neo-c.h"
        head_prev_it=((void*)0);
        # 1986 "./neo-c.h"
        tail_it=((void*)0);
        # 1989 "./neo-c.h"
        i_5=0;
        # 2015 "./neo-c.h"
        while(it_4!=((void*)0)) {
            # 1994 "./neo-c.h"
            if(i_5==head) {
                # 1992 "./neo-c.h"
                head_prev_it=it_4->prev;
            }
            # 1998 "./neo-c.h"
            if(i_5==tail) {
                # 1995 "./neo-c.h"
                tail_it=it_4;
            }
            # 2013 "./neo-c.h"
            if(i_5>=head&&i_5<tail) {
                # 2000 "./neo-c.h"
                prev_it_6=it_4;
                # 2002 "./neo-c.h"
                it_4=it_4->next;
                # 2003 "./neo-c.h"
                i_5++;
                # 2005 "./neo-c.h"
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2005, 97);
                # 2007 "./neo-c.h"
                self->len--;
            }
            else {
                # 2010 "./neo-c.h"
                it_4=it_4->next;
                # 2011 "./neo-c.h"
                i_5++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1864, 94);
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

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_remove"; neo_current_frame = &fr;
    struct map$2char$phsFun$ph* __result_obj__0;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 3543 "./neo-c.h"
    # 3549 "./neo-c.h"
    if(self==((void*)0)) {
        # 3546 "./neo-c.h"
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3546, 102));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3549 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 3550 "./neo-c.h"
    hash=key_hash%self->size;
    # 3551 "./neo-c.h"
    it=hash;
    # 3589 "./neo-c.h"
    while((_Bool)1) {
        # 3587 "./neo-c.h"
        if(self->item_existance[it]) {
            # 3577 "./neo-c.h"
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                # 3559 "./neo-c.h"
                map$2char$phsFun$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                # 3561 "./neo-c.h"
                self->item_existance[it]=(_Bool)0;
                # 3562 "./neo-c.h"
                self->hashes[it]=0;
                # 3566 "./neo-c.h"
                if(1) {
                    # 3564 "./neo-c.h"
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3564, 103));
                }
                # 3566 "./neo-c.h"
                self->keys[it]=((void*)0);
                # 3571 "./neo-c.h"
                if(1) {
                    # 3569 "./neo-c.h"
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3569, 130);
                }
                # 3571 "./neo-c.h"
                memset(self->items+it,0,sizeof(struct sFun* ));
                # 3573 "./neo-c.h"
                self->len--;
                # 3574 "./neo-c.h"
                break;
            }
            # 3580 "./neo-c.h"
            if(++it>=self->size) {
                # 3578 "./neo-c.h"
                it=0;
            }
            # 3583 "./neo-c.h"
            if(it==hash) {
                # 3581 "./neo-c.h"
                break;
            }
        }
        else {
            # 3585 "./neo-c.h"
            break;
        }
    }
    # 3589 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3589, 131));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsFun$ph_remove_ordered_entry(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    # 3434 "./neo-c.h"
    pos=map$2char$phsFun$ph_key_position(self,key,by_pointer);
    # 3438 "./neo-c.h"
    if(pos>=0) {
        # 3436 "./neo-c.h"
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phsFun$ph_key_position(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_key_position"; neo_current_frame = &fr;
    int pos;
    struct list_item$1char$ph* it;
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

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    # 1 "sFun_finalize"
    # 3 "sFun_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 2 "sFun_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 104));
    }
    # 4 "sFun_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 3 "sFun_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 105);
    }
    # 5 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 4 "sFun_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 106);
    }
    # 6 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 5 "sFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 107);
    }
    # 7 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        # 6 "sFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 108);
    }
    # 8 "sFun_finalize"
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        # 7 "sFun_finalize"
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 109);
    }
    # 9 "sFun_finalize"
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        # 8 "sFun_finalize"
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 19, 116);
    }
    # 10 "sFun_finalize"
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        # 9 "sFun_finalize"
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 119);
    }
    # 11 "sFun_finalize"
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        # 10 "sFun_finalize"
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 120));
    }
    # 12 "sFun_finalize"
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        # 11 "sFun_finalize"
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 121));
    }
    # 13 "sFun_finalize"
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        # 12 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 122);
    }
    # 14 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        # 13 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 123);
    }
    # 15 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        # 14 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 124);
    }
    # 16 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        # 15 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 125);
    }
    # 17 "sFun_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 16 "sFun_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 126));
    }
    # 18 "sFun_finalize"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 17 "sFun_finalize"
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 127));
    }
    # 19 "sFun_finalize"
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        # 18 "sFun_finalize"
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 128));
    }
    # 20 "sFun_finalize"
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        # 19 "sFun_finalize"
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 129));
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 115);
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
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 114);
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
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 110));
    }
    # 4 "sVar_finalize"
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        # 3 "sVar_finalize"
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 111));
    }
    # 5 "sVar_finalize"
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        # 4 "sVar_finalize"
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 112);
    }
    # 6 "sVar_finalize"
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        # 5 "sVar_finalize"
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 113));
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
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 117);
    }
    # 4 "sBlock_finalize"
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        # 3 "sBlock_finalize"
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 118);
    }
            neo_current_frame = fr.prev;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_remove(struct map$2char$phsGenericsFun$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_remove"; neo_current_frame = &fr;
    struct map$2char$phsGenericsFun$ph* __result_obj__0;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 3543 "./neo-c.h"
    # 3549 "./neo-c.h"
    if(self==((void*)0)) {
        # 3546 "./neo-c.h"
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3546, 133));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3549 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 3550 "./neo-c.h"
    hash=key_hash%self->size;
    # 3551 "./neo-c.h"
    it=hash;
    # 3589 "./neo-c.h"
    while((_Bool)1) {
        # 3587 "./neo-c.h"
        if(self->item_existance[it]) {
            # 3577 "./neo-c.h"
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                # 3559 "./neo-c.h"
                map$2char$phsGenericsFun$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                # 3561 "./neo-c.h"
                self->item_existance[it]=(_Bool)0;
                # 3562 "./neo-c.h"
                self->hashes[it]=0;
                # 3566 "./neo-c.h"
                if(1) {
                    # 3564 "./neo-c.h"
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3564, 134));
                }
                # 3566 "./neo-c.h"
                self->keys[it]=((void*)0);
                # 3571 "./neo-c.h"
                if(1) {
                    # 3569 "./neo-c.h"
                    come_call_finalizer(sGenericsFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3569, 145);
                }
                # 3571 "./neo-c.h"
                memset(self->items+it,0,sizeof(struct sGenericsFun* ));
                # 3573 "./neo-c.h"
                self->len--;
                # 3574 "./neo-c.h"
                break;
            }
            # 3580 "./neo-c.h"
            if(++it>=self->size) {
                # 3578 "./neo-c.h"
                it=0;
            }
            # 3583 "./neo-c.h"
            if(it==hash) {
                # 3581 "./neo-c.h"
                break;
            }
        }
        else {
            # 3585 "./neo-c.h"
            break;
        }
    }
    # 3589 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3589, 146));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsGenericsFun$ph_remove_ordered_entry(struct map$2char$phsGenericsFun$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    # 3434 "./neo-c.h"
    pos=map$2char$phsGenericsFun$ph_key_position(self,key,by_pointer);
    # 3438 "./neo-c.h"
    if(pos>=0) {
        # 3436 "./neo-c.h"
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phsGenericsFun$ph_key_position(struct map$2char$phsGenericsFun$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_key_position"; neo_current_frame = &fr;
    int pos;
    struct list_item$1char$ph* it;
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

static void sGenericsFun_finalize(struct sGenericsFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
    # 1 "sGenericsFun_finalize"
    # 3 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        # 2 "sGenericsFun_finalize"
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 2, 135);
    }
    # 4 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        # 3 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 3, 136);
    }
    # 5 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        # 4 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 4, 137);
    }
    # 6 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 5 "sGenericsFun_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 5, 138));
    }
    # 7 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 6 "sGenericsFun_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 6, 139);
    }
    # 8 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 7 "sGenericsFun_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 7, 140);
    }
    # 9 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 8 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 8, 141);
    }
    # 10 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        # 9 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 9, 142);
    }
    # 11 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        # 10 "sGenericsFun_finalize"
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 10, 143));
    }
    # 12 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        # 11 "sGenericsFun_finalize"
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 11, 144));
    }
                        neo_current_frame = fr.prev;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_remove(struct map$2char$phsType$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_remove"; neo_current_frame = &fr;
    struct map$2char$phsType$ph* __result_obj__0;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 3543 "./neo-c.h"
    # 3549 "./neo-c.h"
    if(self==((void*)0)) {
        # 3546 "./neo-c.h"
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3546, 148));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3549 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 3550 "./neo-c.h"
    hash=key_hash%self->size;
    # 3551 "./neo-c.h"
    it=hash;
    # 3589 "./neo-c.h"
    while((_Bool)1) {
        # 3587 "./neo-c.h"
        if(self->item_existance[it]) {
            # 3577 "./neo-c.h"
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                # 3559 "./neo-c.h"
                map$2char$phsType$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                # 3561 "./neo-c.h"
                self->item_existance[it]=(_Bool)0;
                # 3562 "./neo-c.h"
                self->hashes[it]=0;
                # 3566 "./neo-c.h"
                if(1) {
                    # 3564 "./neo-c.h"
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3564, 149));
                }
                # 3566 "./neo-c.h"
                self->keys[it]=((void*)0);
                # 3571 "./neo-c.h"
                if(1) {
                    # 3569 "./neo-c.h"
                    come_call_finalizer(sType_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3569, 150);
                }
                # 3571 "./neo-c.h"
                memset(self->items+it,0,sizeof(struct sType* ));
                # 3573 "./neo-c.h"
                self->len--;
                # 3574 "./neo-c.h"
                break;
            }
            # 3580 "./neo-c.h"
            if(++it>=self->size) {
                # 3578 "./neo-c.h"
                it=0;
            }
            # 3583 "./neo-c.h"
            if(it==hash) {
                # 3581 "./neo-c.h"
                break;
            }
        }
        else {
            # 3585 "./neo-c.h"
            break;
        }
    }
    # 3589 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3589, 151));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsType$ph_remove_ordered_entry(struct map$2char$phsType$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    # 3434 "./neo-c.h"
    pos=map$2char$phsType$ph_key_position(self,key,by_pointer);
    # 3438 "./neo-c.h"
    if(pos>=0) {
        # 3436 "./neo-c.h"
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phsType$ph_key_position(struct map$2char$phsType$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_key_position"; neo_current_frame = &fr;
    int pos;
    struct list_item$1char$ph* it;
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

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNoneNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNoneNode* __result_obj__0;
    # 75 "41module2.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNoneNode*)come_increment_ref_count(self, "41module2.nc", 75, 155),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 75, 156);
    # 78 "41module2.nc"
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
    # 80 "41module2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNoneNode","41module2.nc",80))), "41module2.nc", 80, 161);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 80, 162));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 80, 163));
    return __result_obj__0;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNoneNode_compile"; neo_current_frame = &fr;
    # 85 "41module2.nc"
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sNoneNode_finalize(struct sNoneNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNoneNode_finalize"; neo_current_frame = &fr;
    # 1 "sNoneNode_finalize"
    # 3 "sNoneNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sNoneNode_finalize"
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
    # 92 "41module2.nc"
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
    # 3 "sStaticAssert_clone"
    # 5 "sStaticAssert_clone"
    if(self==(void*)0) {
        # 4 "sStaticAssert_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sStaticAssert_clone"
    result=(struct sStaticAssert* )come_increment_ref_count((struct sStaticAssert *)come_calloc(1, sizeof(struct sStaticAssert )*(1), "sStaticAssert_clone", 5, 170, "struct sStaticAssert* "), "sStaticAssert_clone", 5, 171);
    # 7 "sStaticAssert_clone"
    if(self!=((void*)0)) {
        # 6 "sStaticAssert_clone"
        result->sline=self->sline;
    }
    # 8 "sStaticAssert_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sStaticAssert_clone"
        __right_value0 = (void*)0;
        __dec_obj6=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sStaticAssert_clone", 7, 172, "char* "), "sStaticAssert_clone", 7, 174);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "sStaticAssert_clone", 7, 173);
    }
    # 9 "sStaticAssert_clone"
    if(self!=((void*)0)) {
        # 8 "sStaticAssert_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sStaticAssert_clone"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 9 "sStaticAssert_clone"
        __right_value0 = (void*)0;
        __dec_obj7=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sStaticAssert_clone", 9, 183);
        (__dec_obj7 ? __dec_obj7 = come_decrement_ref_count(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0, (void*)0, "sStaticAssert_clone", 9, 182) :0);
    }
    # 11 "sStaticAssert_clone"
    if(self!=((void*)0)&&self->exp2!=((void*)0)) {
        # 10 "sStaticAssert_clone"
        __right_value0 = (void*)0;
        __dec_obj8=result->exp2,
        result->exp2=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp2), "sStaticAssert_clone", 10, 185);
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0, "sStaticAssert_clone", 10, 184) :0);
    }
    # 11 "sStaticAssert_clone"
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
    # 3 "sNode_clone"
    # 5 "sNode_clone"
    if(self==(void*)0) {
        # 4 "sNode_clone"
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 175);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 176):(void*)0);
        return __result_obj__0;
    }
    # 5 "sNode_clone"
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 177, "struct sNode*"), "sNode_clone", 5, 178);
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
    # 109 "41module2.nc"
    offset=0;
    # 110 "41module2.nc"
    max_align=1;
    # 112 "41module2.nc"
    n=list$1tuple2$2char$phsType$ph$ph_length(type->mClass->mFields);
    # 127 "41module2.nc"
    for(i=0    ;i<n;i++){
        # 114 "41module2.nc"
        multiple_assign_var1=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(type->mClass->mFields,i)));
        name=(char* )come_increment_ref_count(multiple_assign_var1->v1, "41module2.nc", 114, 213);
        field_type=(struct sType* )come_increment_ref_count(multiple_assign_var1->v2, "41module2.nc", 114, 214);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 122, 215);
        # 116 "41module2.nc"
        align=alignof_type(field_type,info);
        # 117 "41module2.nc"
        size=(sizeof_type)(field_type,info);
        # 119 "41module2.nc"
        offset=align_up(offset,align);
        # 120 "41module2.nc"
        offset+=size;
        # 125 "41module2.nc"
        if(align>max_align) {
            # 123 "41module2.nc"
            max_align=align;
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 127, 216));
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 127, 217);
    }
    # 127 "41module2.nc"
    offset=align_up(offset,max_align);
    # 128 "41module2.nc"
        neo_current_frame = fr.prev;
    return offset;
    neo_current_frame = fr.prev;
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

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* default_value;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    int i;
    struct tuple2$2char$phsType$ph* default_value_7;
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value, "./neo-c.h", 2158, 193);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 196);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 197);
        return __result_obj__0;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2161, 198);
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
                        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it->item, "./neo-c.h", 2169, 199);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 200);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_7,0,sizeof(struct tuple2$2char$phsType$ph*));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_7, "./neo-c.h", 2177, 201);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_7, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 202);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 203);
    return __result_obj__0;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple2$2char$phsType$ph$p_finalize"
    # 3 "tuple2$2char$phsType$ph$p_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple2$2char$phsType$ph$p_finalize"
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 194));
    }
    # 4 "tuple2$2char$phsType$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple2$2char$phsType$ph$p_finalize"
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
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value, "./neo-c.h", 2158, 204);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 205);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 206);
        return __result_obj__0;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2161, 207);
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
                        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it->item, "./neo-c.h", 2169, 208);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 209);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_8,0,sizeof(struct tuple2$2char$phsType$ph*));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_8, "./neo-c.h", 2177, 210);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_8, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 211);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 212);
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
    # 133 "41module2.nc"
    max_size=0;
    # 134 "41module2.nc"
    max_align=1;
    # 136 "41module2.nc"
    n=list$1tuple2$2char$phsType$ph$ph_length(type->mClass->mFields);
    # 151 "41module2.nc"
    for(i=0    ;i<n;i++){
        # 138 "41module2.nc"
        multiple_assign_var2=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(type->mClass->mFields,i)));
        name=(char* )come_increment_ref_count(multiple_assign_var2->v1, "41module2.nc", 138, 218);
        field_type=(struct sType* )come_increment_ref_count(multiple_assign_var2->v2, "41module2.nc", 138, 219);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 138, 220);
        # 140 "41module2.nc"
        size=(sizeof_type)(field_type,info);
        # 141 "41module2.nc"
        align=alignof_type(field_type,info);
        # 146 "41module2.nc"
        if(size>max_size) {
            # 144 "41module2.nc"
            max_size=size;
        }
        # 149 "41module2.nc"
        if(align>max_align) {
            # 147 "41module2.nc"
            max_align=align;
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 151, 221));
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 151, 222);
    }
    # 151 "41module2.nc"
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
    # 180 "41module2.nc"
    if(list$1sNode$ph_length(type->mArrayNum)>0) {
        # 158 "41module2.nc"
        element_num=0;
        # 174 "41module2.nc"
        for(i=0        ;i<list$1sNode$ph_length(type->mArrayNum);i++){
            # 160 "41module2.nc"
            node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,i), "41module2.nc", 160, 241);
            # 162 "41module2.nc"
            no_output_come_code=info->no_output_come_code;
            # 163 "41module2.nc"
            info->no_output_come_code=(_Bool)1;
            # 168 "41module2.nc"
            Value=node_compile(node,info);
            if(!Value) {
                # 165 "41module2.nc"
                err_msg(info,"invalid array num");
                # 166 "41module2.nc"
                exit(2);
            }
            # 168 "41module2.nc"
            info->no_output_come_code=no_output_come_code;
            # 170 "41module2.nc"
            __right_value0 = (void*)0;
            cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "41module2.nc", 170, 242);
            # 172 "41module2.nc"
            element_num+=atoi(cvalue->c_value);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 174, 243):(void*)0);
            come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 174, 244);
        }
        # 174 "41module2.nc"
        __right_value0 = (void*)0;
        element_type=(struct sType* )come_increment_ref_count(sType_clone(type), "41module2.nc", 174, 411);
        # 175 "41module2.nc"
        list$1sNode$ph_reset(element_type->mArrayNum);
        # 177 "41module2.nc"
                __result_obj__0 = (sizeof_type)(element_type,info)*element_num;
        come_call_finalizer(sType_finalize, element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 177, 413);
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(sType_finalize, element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 180, 414);
    }
    # 183 "41module2.nc"
    if(type->mPointerNum>0) {
        # 181 "41module2.nc"
                neo_current_frame = fr.prev;
        return 8;
    }
    # 187 "41module2.nc"
    if(type->mClass->mStruct) {
        # 184 "41module2.nc"
                neo_current_frame = fr.prev;
        return (sizeof_struct)(type,info);
    }
    # 191 "41module2.nc"
    if(type->mClass->mUnion) {
        # 188 "41module2.nc"
                neo_current_frame = fr.prev;
        return (sizeof_union)(type,info);
    }
    # 192 "41module2.nc"
    if(string_operator_equals(type->mClass->mName,"char")) {
        # 191 "41module2.nc"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 193 "41module2.nc"
    if(string_operator_equals(type->mClass->mName,"short")) {
        # 192 "41module2.nc"
                neo_current_frame = fr.prev;
        return 2;
    }
    # 194 "41module2.nc"
    if(string_operator_equals(type->mClass->mName,"int")) {
        # 193 "41module2.nc"
                neo_current_frame = fr.prev;
        return 4;
    }
    # 196 "41module2.nc"
    if(string_operator_equals(type->mClass->mName,"long")) {
        # 194 "41module2.nc"
                neo_current_frame = fr.prev;
        return 8;
    }
    # 196 "41module2.nc"
    err_msg(info,"sizeof: unsupported type");
    # 197 "41module2.nc"
    exit(2);
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

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_9;
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sNode*));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value, "./neo-c.h", 2158, 223);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2158, 224):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2158, 225):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 2161, 226):(void*)0);
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
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item, "./neo-c.h", 2169, 227);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2169, 228):(void*)0);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_9,0,sizeof(struct sNode*));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_9, "./neo-c.h", 2177, 229);
    ((default_value_9) ? default_value_9 = come_decrement_ref_count(default_value_9, ((struct sNode*)default_value_9)->finalize, ((struct sNode*)default_value_9)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2177, 230):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2177, 231):(void*)0);
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
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sNode*));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value, "./neo-c.h", 2158, 232);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2158, 233):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2158, 234):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 2161, 235):(void*)0);
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
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item, "./neo-c.h", 2169, 236);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2169, 237):(void*)0);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_10,0,sizeof(struct sNode*));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_10, "./neo-c.h", 2177, 238);
    ((default_value_10) ? default_value_10 = come_decrement_ref_count(default_value_10, ((struct sNode*)default_value_10)->finalize, ((struct sNode*)default_value_10)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2177, 239):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2177, 240):(void*)0);
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
    # 3 "sType_clone"
    # 5 "sType_clone"
    if(self==(void*)0) {
        # 4 "sType_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sType_clone"
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 245, "struct sType* "), "sType_clone", 5, 246);
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
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 248);
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 247);
    }
    # 9 "sType_clone"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 8 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj10=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 250);
        come_call_finalizer(sType_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 249);
    }
    # 10 "sType_clone"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 9 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj14=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 76, 280);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 279);
    }
    # 11 "sType_clone"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 10 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj15=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 282);
        come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 281);
    }
    # 12 "sType_clone"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 11 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj16=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 284);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 283) :0);
    }
    # 13 "sType_clone"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 12 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj17=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 286);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 285) :0);
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
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 287, "char* "), "sType_clone", 14, 289);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 288);
    }
    # 16 "sType_clone"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 15 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj19=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 290, "char* "), "sType_clone", 15, 292);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 291);
    }
    # 17 "sType_clone"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 16 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj20=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 293, "char* "), "sType_clone", 16, 295);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 294);
    }
    # 18 "sType_clone"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 17 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj21=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 296, "char* "), "sType_clone", 17, 298);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 297);
    }
    # 19 "sType_clone"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 18 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj22=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 299, "char* "), "sType_clone", 18, 301);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 300);
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
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 302, "char* "), "sType_clone", 49, 304);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 303);
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
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 305, "char* "), "sType_clone", 51, 307);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 306);
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
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 308, "char* "), "sType_clone", 54, 310);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 309);
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
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 76, 340);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 339);
    }
    # 59 "sType_clone"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 58 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj30=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 342);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 341);
    }
    # 60 "sType_clone"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 59 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj31=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 76, 362);
        come_call_finalizer(list$1int$_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 361);
    }
    # 61 "sType_clone"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 60 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj32=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 364);
        come_call_finalizer(list$1int$_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 363);
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
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 366);
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 365);
    }
    # 68 "sType_clone"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 67 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj34=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 367, "char* "), "sType_clone", 67, 369);
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 368);
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
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 371);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 370);
    }
    # 73 "sType_clone"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 72 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj39=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 76, 403);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 402);
    }
    # 74 "sType_clone"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 73 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj40=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 405);
        come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 404);
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
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 407);
        (__dec_obj41 ? __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 406) :0);
    }
    # 77 "sType_clone"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 76 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj42=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 409);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 408);
    }
    # 77 "sType_clone"
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
    # 1513 "./neo-c.h"
    if(self==((void*)0)) {
        # 1511 "./neo-c.h"
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 251);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 252);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1513, 253, "struct list$1sType$ph*"), "./neo-c.h", 1513, 257)), "./neo-c.h", 1513, 258);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1518, 273));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1521, 274));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 275);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 276);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 277);
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
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 254);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 255);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 256);
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
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 259);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1534, 260, "struct list_item$1sType$ph*"))), "./neo-c.h", 1534, 261);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj11=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1538, 263);
        come_call_finalizer(sType_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 262);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_11=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1544, 264, "struct list_item$1sType$ph*"))), "./neo-c.h", 1544, 265);
        # 1546 "./neo-c.h"
        litem_11->prev=self->head;
        # 1547 "./neo-c.h"
        litem_11->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj12=litem_11->item,
        litem_11->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1548, 267);
        come_call_finalizer(sType_finalize, __dec_obj12,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 266);
        # 1550 "./neo-c.h"
        self->tail=litem_11;
        # 1551 "./neo-c.h"
        self->head->next=litem_11;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1554, 268, "struct list_item$1sType$ph*"))), "./neo-c.h", 1554, 269);
        # 1556 "./neo-c.h"
        litem_12->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_12->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj13=litem_12->item,
        litem_12->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1558, 271);
        come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 270);
        # 1560 "./neo-c.h"
        self->tail->next=litem_12;
        # 1561 "./neo-c.h"
        self->tail=litem_12;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 272);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 278);
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
    # 1513 "./neo-c.h"
    if(self==((void*)0)) {
        # 1511 "./neo-c.h"
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 311);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 312);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1513, 313, "struct list$1sNode$ph*"), "./neo-c.h", 1513, 317)), "./neo-c.h", 1513, 318);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1518, 333));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1521, 334));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 335);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 336);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 337);
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
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 314);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 315);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 316);
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
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1531, 319):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1534, 320, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1534, 321);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj26=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1538, 323);
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1538, 322) :0);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1544, 324, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1544, 325);
        # 1546 "./neo-c.h"
        litem_13->prev=self->head;
        # 1547 "./neo-c.h"
        litem_13->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj27=litem_13->item,
        litem_13->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1548, 327);
        (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1548, 326) :0);
        # 1550 "./neo-c.h"
        self->tail=litem_13;
        # 1551 "./neo-c.h"
        self->head->next=litem_13;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_14=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1554, 328, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1554, 329);
        # 1556 "./neo-c.h"
        litem_14->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_14->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj28=litem_14->item,
        litem_14->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1558, 331);
        (__dec_obj28 ? __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1558, 330) :0);
        # 1560 "./neo-c.h"
        self->tail->next=litem_14;
        # 1561 "./neo-c.h"
        self->tail=litem_14;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1566, 332):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 338);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 343);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 344);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1513, 345, "struct list$1int$*"), "./neo-c.h", 1513, 349)), "./neo-c.h", 1513, 350);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1527, 357);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 358);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 359);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1485, 346);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 347);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 348);
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1534, 351, "struct list_item$1int$*"))), "./neo-c.h", 1534, 352);
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
        litem_15=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1544, 353, "struct list_item$1int$*"))), "./neo-c.h", 1544, 354);
        # 1546 "./neo-c.h"
        litem_15->prev=self->head;
        # 1547 "./neo-c.h"
        litem_15->next=((void*)0);
        # 1548 "./neo-c.h"
        litem_15->item=item;
        # 1550 "./neo-c.h"
        self->tail=litem_15;
        # 1551 "./neo-c.h"
        self->head->next=litem_15;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_16=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1554, 355, "struct list_item$1int$*"))), "./neo-c.h", 1554, 356);
        # 1556 "./neo-c.h"
        litem_16->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_16->next=((void*)0);
        # 1558 "./neo-c.h"
        litem_16->item=item;
        # 1560 "./neo-c.h"
        self->tail->next=litem_16;
        # 1561 "./neo-c.h"
        self->tail=litem_16;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 360);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 372);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 373);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1513, 374, "struct list$1char$ph*"), "./neo-c.h", 1513, 378)), "./neo-c.h", 1513, 379);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1518, 394, "char* "), "./neo-c.h", 1518, 395));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1521, 396, "char* "), "./neo-c.h", 1521, 397));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 398);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 399);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 400);
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 375);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 376);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 377);
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
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1531, 380));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1534, 381, "struct list_item$1char$ph*"))), "./neo-c.h", 1534, 382);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj36=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1538, 384);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1538, 383);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_17=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1544, 385, "struct list_item$1char$ph*"))), "./neo-c.h", 1544, 386);
        # 1546 "./neo-c.h"
        litem_17->prev=self->head;
        # 1547 "./neo-c.h"
        litem_17->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj37=litem_17->item,
        litem_17->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1548, 388);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1548, 387);
        # 1550 "./neo-c.h"
        self->tail=litem_17;
        # 1551 "./neo-c.h"
        self->head->next=litem_17;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_18=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1554, 389, "struct list_item$1char$ph*"))), "./neo-c.h", 1554, 390);
        # 1556 "./neo-c.h"
        litem_18->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_18->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj38=litem_18->item,
        litem_18->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1558, 392);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1558, 391);
        # 1560 "./neo-c.h"
        self->tail->next=litem_18;
        # 1561 "./neo-c.h"
        self->tail=litem_18;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1566, 393));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 401);
    }
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_reset"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1864, 412);
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
    # 206 "41module2.nc"
    if(type->mPointerNum>0) {
        # 203 "41module2.nc"
                neo_current_frame = fr.prev;
        return 8;
    }
    # 220 "41module2.nc"
    if(type->mClass->mStruct||type->mClass->mUnion) {
        # 207 "41module2.nc"
        max_align=1;
        # 208 "41module2.nc"
        n=list$1tuple2$2char$phsType$ph$ph_length(type->mClass->mFields);
        # 217 "41module2.nc"
        for(i=0        ;i<n;i++){
            # 210 "41module2.nc"
            multiple_assign_var3=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(type->mClass->mFields,i)));
            name=(char* )come_increment_ref_count(multiple_assign_var3->v1, "41module2.nc", 210, 415);
            field_type=(struct sType* )come_increment_ref_count(multiple_assign_var3->v2, "41module2.nc", 210, 416);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 210, 417);
            # 212 "41module2.nc"
            a=alignof_type(field_type,info);
            # 216 "41module2.nc"
            if(a>max_align) {
                # 214 "41module2.nc"
                max_align=a;
            }
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 217, 418));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 217, 419);
        }
        # 217 "41module2.nc"
                neo_current_frame = fr.prev;
        return max_align;
    }
    # 221 "41module2.nc"
    if(string_operator_equals(type->mClass->mName,"char")) {
        # 220 "41module2.nc"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 222 "41module2.nc"
    if(string_operator_equals(type->mClass->mName,"short")) {
        # 221 "41module2.nc"
                neo_current_frame = fr.prev;
        return 2;
    }
    # 223 "41module2.nc"
    if(string_operator_equals(type->mClass->mName,"int")) {
        # 222 "41module2.nc"
                neo_current_frame = fr.prev;
        return 4;
    }
    # 225 "41module2.nc"
    if(string_operator_equals(type->mClass->mName,"long")) {
        # 223 "41module2.nc"
                neo_current_frame = fr.prev;
        return 8;
    }
    # 225 "41module2.nc"
    err_msg(info,"sizeof: unsupported type");
    # 226 "41module2.nc"
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
    unsigned long  int  size  ;
    char*  __dec_obj43  ;
    char*  __result_obj__0  ;
    char*  exp_19  ;
    char*  result_20  ;
    struct sType*  Value_21  ;
    _Bool _conditional_value_X1;
    unsigned long  int  size_22  ;
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
    # 1192 "41module2.nc"
    if(parsecmp_forward("sizeof",info)) {
        # 233 "41module2.nc"
        skip_spaces_and_lf(info);
        # 240 "41module2.nc"
        if(*info->p==40) {
            # 236 "41module2.nc"
            info->p++;
            # 237 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 240 "41module2.nc"
        exp=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 240, 420);
        # 247 "41module2.nc"
        if(*info->p==41) {
            # 243 "41module2.nc"
            info->p++;
            # 244 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 247 "41module2.nc"
        skip_spaces_and_lf(info);
        # 249 "41module2.nc"
        result=((void*)0);
        # 256 "41module2.nc"
        __right_value0 = (void*)0;
        Value=(struct sType* )come_increment_ref_count(map$2char$phsType$ph_operator_load_element(info->types,exp), "41module2.nc", 251, 451);
        if(({(_conditional_value_X0=(Value));_conditional_value_X0;})) {
            # 252 "41module2.nc"
            size=(sizeof_type)(Value,info);
            # 253 "41module2.nc"
            __right_value0 = (void*)0;
            __dec_obj43=result,
            result=(char* )come_increment_ref_count(size_t_to_string(size), "41module2.nc", 253, 453);
            __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 253, 452);
        }
        # 262 "41module2.nc"
        if(result) {
            # 257 "41module2.nc"
                        __result_obj__0 = (char* )come_increment_ref_count(result, "41module2.nc", 257, 454);
            (exp = come_decrement_ref_count(exp, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 257, 455));
            (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 257, 456));
            come_call_finalizer(sType_finalize, Value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 257, 457);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 257, 458));
            return __result_obj__0;
        }
        else {
            # 260 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 260, 459);
            (exp = come_decrement_ref_count(exp, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 260, 460));
            (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 260, 461));
            come_call_finalizer(sType_finalize, Value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 260, 462);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 260, 463));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 260, 464));
            return __result_obj__0;
        }
        (exp = come_decrement_ref_count(exp, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 465));
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 466));
        come_call_finalizer(sType_finalize, Value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1192, 467);
    }
    else if(parsecmp_forward("alignof",info)) {
        # 265 "41module2.nc"
        skip_spaces_and_lf(info);
        # 272 "41module2.nc"
        if(*info->p==40) {
            # 268 "41module2.nc"
            info->p++;
            # 269 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 272 "41module2.nc"
        __right_value0 = (void*)0;
        exp_19=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 272, 468);
        # 279 "41module2.nc"
        if(*info->p==41) {
            # 275 "41module2.nc"
            info->p++;
            # 276 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 279 "41module2.nc"
        skip_spaces_and_lf(info);
        # 281 "41module2.nc"
        result_20=((void*)0);
        # 288 "41module2.nc"
        __right_value0 = (void*)0;
        Value_21=(struct sType* )come_increment_ref_count(map$2char$phsType$ph_operator_load_element(info->types,exp_19), "41module2.nc", 283, 469);
        if(({(_conditional_value_X1=(Value_21));_conditional_value_X1;})) {
            # 284 "41module2.nc"
            size_22=alignof_type(Value_21,info);
            # 285 "41module2.nc"
            __right_value0 = (void*)0;
            __dec_obj44=result_20,
            result_20=(char* )come_increment_ref_count(size_t_to_string(size_22), "41module2.nc", 285, 471);
            __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 285, 470);
        }
        # 294 "41module2.nc"
        if(result_20) {
            # 289 "41module2.nc"
                        __result_obj__0 = (char* )come_increment_ref_count(result_20, "41module2.nc", 289, 472);
            (exp_19 = come_decrement_ref_count(exp_19, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 289, 473));
            (result_20 = come_decrement_ref_count(result_20, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 289, 474));
            come_call_finalizer(sType_finalize, Value_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 289, 475);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 289, 476));
            return __result_obj__0;
        }
        else {
            # 292 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 292, 477);
            (exp_19 = come_decrement_ref_count(exp_19, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 292, 478));
            (result_20 = come_decrement_ref_count(result_20, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 292, 479));
            come_call_finalizer(sType_finalize, Value_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 292, 480);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 292, 481));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 292, 482));
            return __result_obj__0;
        }
        (exp_19 = come_decrement_ref_count(exp_19, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 483));
        (result_20 = come_decrement_ref_count(result_20, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 484));
        come_call_finalizer(sType_finalize, Value_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1192, 485);
    }
    else if(parsecmp_forward("defined",info)) {
        # 297 "41module2.nc"
        skip_spaces_and_lf(info);
        # 304 "41module2.nc"
        if(*info->p==40) {
            # 300 "41module2.nc"
            info->p++;
            # 301 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 304 "41module2.nc"
        __right_value0 = (void*)0;
        exp_23=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 304, 486);
        # 311 "41module2.nc"
        if(*info->p==41) {
            # 307 "41module2.nc"
            info->p++;
            # 308 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 311 "41module2.nc"
        skip_spaces_and_lf(info);
        # 313 "41module2.nc"
        defined=(_Bool)0;
        # 317 "41module2.nc"
        __right_value0 = (void*)0;
        Value_24=(struct buffer* )come_increment_ref_count(map$2char$phbuffer$ph_operator_load_element(info->struct_definition,exp_23), "41module2.nc", 314, 517);
        if(({(_conditional_value_X2=(Value_24));_conditional_value_X2;})) {
            # 315 "41module2.nc"
            defined=(_Bool)1;
        }
        # 320 "41module2.nc"
        come_call_finalizer(buffer_finalize, Value_24, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 317, 518);
        __right_value0 = (void*)0;
        Value_25=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_23), "41module2.nc", 317, 549);
        if(({(_conditional_value_X3=(Value_25));_conditional_value_X3;})) {
            # 318 "41module2.nc"
            defined=(_Bool)1;
        }
        # 323 "41module2.nc"
        come_call_finalizer(sFun_finalize, Value_25, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 320, 550);
        __right_value0 = (void*)0;
        Value_26=(struct sGenericsFun* )come_increment_ref_count(map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,exp_23), "41module2.nc", 320, 581);
        if(({(_conditional_value_X4=(Value_26));_conditional_value_X4;})) {
            # 321 "41module2.nc"
            defined=(_Bool)1;
        }
        # 326 "41module2.nc"
        come_call_finalizer(sGenericsFun_finalize, Value_26, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 323, 582);
        __right_value0 = (void*)0;
        Value_27=(struct sType* )come_increment_ref_count(map$2char$phsType$ph_operator_load_element(info->types,exp_23), "41module2.nc", 323, 583);
        if(({(_conditional_value_X5=(Value_27));_conditional_value_X5;})) {
            # 324 "41module2.nc"
            defined=(_Bool)1;
        }
        # 330 "41module2.nc"
        come_call_finalizer(sType_finalize, Value_27, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 326, 584);
        Value_28=get_variable_from_table(info->gv_table,exp_23);
        if(Value_28) {
            # 327 "41module2.nc"
            defined=(_Bool)1;
        }
        # 336 "41module2.nc"
        if(defined) {
            # 331 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 331, 585);
            (exp_23 = come_decrement_ref_count(exp_23, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 331, 586));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 331, 587));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 331, 588));
            return __result_obj__0;
        }
        else {
            # 334 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 334, 589);
            (exp_23 = come_decrement_ref_count(exp_23, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 334, 590));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 334, 591));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 334, 592));
            return __result_obj__0;
        }
        (exp_23 = come_decrement_ref_count(exp_23, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 593));
    }
    else if(parsecmp_forward("macro_defined",info)) {
        # 339 "41module2.nc"
        skip_spaces_and_lf(info);
        # 346 "41module2.nc"
        if(*info->p==40) {
            # 342 "41module2.nc"
            info->p++;
            # 343 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 346 "41module2.nc"
        __right_value0 = (void*)0;
        exp_29=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 346, 594);
        # 353 "41module2.nc"
        if(*info->p==41) {
            # 349 "41module2.nc"
            info->p++;
            # 350 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 353 "41module2.nc"
        skip_spaces_and_lf(info);
        # 355 "41module2.nc"
        defined_30=get_macro(exp_29)!=((void*)0);
        # 363 "41module2.nc"
        if(defined_30) {
            # 358 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 358, 595);
            (exp_29 = come_decrement_ref_count(exp_29, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 358, 596));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 358, 597));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 358, 598));
            return __result_obj__0;
        }
        else {
            # 361 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 361, 599);
            (exp_29 = come_decrement_ref_count(exp_29, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 361, 600));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 361, 601));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 361, 602));
            return __result_obj__0;
        }
        (exp_29 = come_decrement_ref_count(exp_29, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 603));
    }
    else if(parsecmp_forward("macro_value",info)) {
        # 366 "41module2.nc"
        skip_spaces_and_lf(info);
        # 373 "41module2.nc"
        if(*info->p==40) {
            # 369 "41module2.nc"
            info->p++;
            # 370 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 373 "41module2.nc"
        __right_value0 = (void*)0;
        exp_31=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 373, 604);
        # 380 "41module2.nc"
        if(*info->p==41) {
            # 376 "41module2.nc"
            info->p++;
            # 377 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 380 "41module2.nc"
        skip_spaces_and_lf(info);
        # 384 "41module2.nc"
        result_32=((void*)0);
        # 384 "41module2.nc"
        const char* value=get_macro(exp_31);
        # 390 "41module2.nc"
        if(value) {
            # 387 "41module2.nc"
            __right_value0 = (void*)0;
            __dec_obj45=result_32,
            result_32=(char* )come_increment_ref_count(charp_to_string(value), "41module2.nc", 387, 606);
            __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 387, 605);
        }
        # 396 "41module2.nc"
        if(result_32) {
            # 391 "41module2.nc"
                        __result_obj__0 = (char* )come_increment_ref_count(result_32, "41module2.nc", 391, 607);
            (exp_31 = come_decrement_ref_count(exp_31, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 391, 608));
            (result_32 = come_decrement_ref_count(result_32, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 391, 609));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 391, 610));
            return __result_obj__0;
        }
        else {
            # 394 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 394, 611);
            (exp_31 = come_decrement_ref_count(exp_31, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 394, 612));
            (result_32 = come_decrement_ref_count(result_32, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 394, 613));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 394, 614));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 394, 615));
            return __result_obj__0;
        }
        (exp_31 = come_decrement_ref_count(exp_31, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 616));
        (result_32 = come_decrement_ref_count(result_32, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 617));
    }
    else if(parsecmp_forward("macro_call",info)) {
        # 399 "41module2.nc"
        skip_spaces_and_lf(info);
        # 406 "41module2.nc"
        if(*info->p==40) {
            # 402 "41module2.nc"
            info->p++;
            # 403 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 406 "41module2.nc"
        __right_value0 = (void*)0;
        exp_33=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 406, 618);
        # 407 "41module2.nc"
        __right_value0 = (void*)0;
        args=(char*)come_increment_ref_count(xsprintf(""), "41module2.nc", 407, 619);
        # 415 "41module2.nc"
        if(*info->p==44) {
            # 410 "41module2.nc"
            info->p++;
            # 411 "41module2.nc"
            skip_spaces_and_lf(info);
            # 412 "41module2.nc"
            __right_value0 = (void*)0;
            __dec_obj46=args,
            args=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 412, 621);
            __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 412, 620);
        }
        # 420 "41module2.nc"
        if(*info->p==41) {
            # 416 "41module2.nc"
            info->p++;
            # 417 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 420 "41module2.nc"
        skip_spaces_and_lf(info);
        # 424 "41module2.nc"
        result_34=((void*)0);
        # 424 "41module2.nc"
        const char* value_35=call_func_macro(exp_33,args,info->sname,info->sline);
        # 430 "41module2.nc"
        if(value_35) {
            # 427 "41module2.nc"
            __right_value0 = (void*)0;
            __dec_obj47=result_34,
            result_34=(char* )come_increment_ref_count(charp_to_string(value_35), "41module2.nc", 427, 623);
            __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 427, 622);
        }
        # 436 "41module2.nc"
        if(result_34) {
            # 431 "41module2.nc"
                        __result_obj__0 = (char* )come_increment_ref_count(result_34, "41module2.nc", 431, 624);
            (exp_33 = come_decrement_ref_count(exp_33, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 431, 625));
            (args = come_decrement_ref_count(args, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 431, 626));
            (result_34 = come_decrement_ref_count(result_34, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 431, 627));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 431, 628));
            return __result_obj__0;
        }
        else {
            # 434 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 434, 629);
            (exp_33 = come_decrement_ref_count(exp_33, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 434, 630));
            (args = come_decrement_ref_count(args, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 434, 631));
            (result_34 = come_decrement_ref_count(result_34, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 434, 632));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 434, 633));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 434, 634));
            return __result_obj__0;
        }
        (exp_33 = come_decrement_ref_count(exp_33, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 635));
        (args = come_decrement_ref_count(args, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 636));
        (result_34 = come_decrement_ref_count(result_34, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 637));
    }
    else if(parsecmp_forward("is_static",info)) {
        # 439 "41module2.nc"
        skip_spaces_and_lf(info);
        # 446 "41module2.nc"
        if(*info->p==40) {
            # 442 "41module2.nc"
            info->p++;
            # 443 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 451 "41module2.nc"
        if(*info->p==34) {
            # 447 "41module2.nc"
            info->p++;
            # 448 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 451 "41module2.nc"
        __right_value0 = (void*)0;
        exp_36=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 451, 638);
        # 458 "41module2.nc"
        if(*info->p==34) {
            # 454 "41module2.nc"
            info->p++;
            # 455 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 463 "41module2.nc"
        if(*info->p==41) {
            # 459 "41module2.nc"
            info->p++;
            # 460 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 463 "41module2.nc"
        skip_spaces_and_lf(info);
        # 471 "41module2.nc"
        if(strstr(exp_36,"static ")) {
            # 466 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 466, 639);
            (exp_36 = come_decrement_ref_count(exp_36, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 466, 640));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 466, 641));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 466, 642));
            return __result_obj__0;
        }
        else {
            # 469 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 469, 643);
            (exp_36 = come_decrement_ref_count(exp_36, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 469, 644));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 469, 645));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 469, 646));
            return __result_obj__0;
        }
        (exp_36 = come_decrement_ref_count(exp_36, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 647));
    }
    else if(parsecmp_forward("is_heap",info)) {
        # 474 "41module2.nc"
        skip_spaces_and_lf(info);
        # 481 "41module2.nc"
        if(*info->p==40) {
            # 477 "41module2.nc"
            info->p++;
            # 478 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 481 "41module2.nc"
        __right_value0 = (void*)0;
        exp_37=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 481, 648);
        # 488 "41module2.nc"
        if(*info->p==41) {
            # 484 "41module2.nc"
            info->p++;
            # 485 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 488 "41module2.nc"
        skip_spaces_and_lf(info);
        # 496 "41module2.nc"
        if(strstr(exp_37,"%")) {
            # 491 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 491, 649);
            (exp_37 = come_decrement_ref_count(exp_37, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 491, 650));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 491, 651));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 491, 652));
            return __result_obj__0;
        }
        else {
            # 494 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 494, 653);
            (exp_37 = come_decrement_ref_count(exp_37, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 494, 654));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 494, 655));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 494, 656));
            return __result_obj__0;
        }
        (exp_37 = come_decrement_ref_count(exp_37, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 657));
    }
    else if(parsecmp_forward("is_const",info)) {
        # 499 "41module2.nc"
        skip_spaces_and_lf(info);
        # 506 "41module2.nc"
        if(*info->p==40) {
            # 502 "41module2.nc"
            info->p++;
            # 503 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 506 "41module2.nc"
        __right_value0 = (void*)0;
        exp_38=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 506, 658);
        # 513 "41module2.nc"
        if(*info->p==41) {
            # 509 "41module2.nc"
            info->p++;
            # 510 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 513 "41module2.nc"
        skip_spaces_and_lf(info);
        # 521 "41module2.nc"
        if(strstr(exp_38,"const ")) {
            # 516 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 516, 659);
            (exp_38 = come_decrement_ref_count(exp_38, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 516, 660));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 516, 661));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 516, 662));
            return __result_obj__0;
        }
        else {
            # 519 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 519, 663);
            (exp_38 = come_decrement_ref_count(exp_38, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 519, 664));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 519, 665));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 519, 666));
            return __result_obj__0;
        }
        (exp_38 = come_decrement_ref_count(exp_38, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 667));
    }
    else if(parsecmp_forward("is_uniq",info)) {
        # 524 "41module2.nc"
        skip_spaces_and_lf(info);
        # 531 "41module2.nc"
        if(*info->p==40) {
            # 527 "41module2.nc"
            info->p++;
            # 528 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 531 "41module2.nc"
        __right_value0 = (void*)0;
        exp_39=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 531, 668);
        # 538 "41module2.nc"
        if(*info->p==41) {
            # 534 "41module2.nc"
            info->p++;
            # 535 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 538 "41module2.nc"
        skip_spaces_and_lf(info);
        # 546 "41module2.nc"
        if(strstr(exp_39,"uniq ")) {
            # 541 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 541, 669);
            (exp_39 = come_decrement_ref_count(exp_39, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 541, 670));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 541, 671));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 541, 672));
            return __result_obj__0;
        }
        else {
            # 544 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 544, 673);
            (exp_39 = come_decrement_ref_count(exp_39, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 544, 674));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 544, 675));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 544, 676));
            return __result_obj__0;
        }
        (exp_39 = come_decrement_ref_count(exp_39, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 677));
    }
    else if(parsecmp_forward("is_type",info)) {
        # 549 "41module2.nc"
        skip_spaces_and_lf(info);
        # 556 "41module2.nc"
        if(*info->p==40) {
            # 552 "41module2.nc"
            info->p++;
            # 553 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 556 "41module2.nc"
        __right_value0 = (void*)0;
        exp_40=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 556, 678);
        # 563 "41module2.nc"
        if(*info->p==41) {
            # 559 "41module2.nc"
            info->p++;
            # 560 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 563 "41module2.nc"
        skip_spaces_and_lf(info);
        # 565 "41module2.nc"
        defined_41=(_Bool)0;
        # 571 "41module2.nc"
        __right_value0 = (void*)0;
        Value_42=(struct sType* )come_increment_ref_count(map$2char$phsType$ph_operator_load_element(info->types,exp_40), "41module2.nc", 567, 679);
        if(({(_conditional_value_X6=(Value_42));_conditional_value_X6;})) {
            # 568 "41module2.nc"
            defined_41=(_Bool)1;
        }
        # 577 "41module2.nc"
        if(defined_41) {
            # 572 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 572, 680);
            (exp_40 = come_decrement_ref_count(exp_40, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 572, 681));
            come_call_finalizer(sType_finalize, Value_42, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 572, 682);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 572, 683));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 572, 684));
            return __result_obj__0;
        }
        else {
            # 575 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 575, 685);
            (exp_40 = come_decrement_ref_count(exp_40, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 575, 686));
            come_call_finalizer(sType_finalize, Value_42, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 575, 687);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 575, 688));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 575, 689));
            return __result_obj__0;
        }
        (exp_40 = come_decrement_ref_count(exp_40, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 690));
        come_call_finalizer(sType_finalize, Value_42, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1192, 691);
    }
    else if(parsecmp_forward("type",info)) {
        # 580 "41module2.nc"
        skip_spaces_and_lf(info);
        # 587 "41module2.nc"
        if(*info->p==40) {
            # 583 "41module2.nc"
            info->p++;
            # 584 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 587 "41module2.nc"
        __right_value0 = (void*)0;
        exp_43=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 587, 692);
        # 594 "41module2.nc"
        if(*info->p==41) {
            # 590 "41module2.nc"
            info->p++;
            # 591 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 594 "41module2.nc"
        skip_spaces_and_lf(info);
        # 596 "41module2.nc"
        result_44=((void*)0);
        # 602 "41module2.nc"
        __right_value0 = (void*)0;
        Value_45=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_43), "41module2.nc", 598, 693);
        if(({(_conditional_value_X7=(Value_45));_conditional_value_X7;})) {
            # 599 "41module2.nc"
            __right_value0 = (void*)0;
            __dec_obj48=result_44,
            result_44=(char* )come_increment_ref_count(make_come_type_name_string(Value_45->mResultType,info), "41module2.nc", 599, 695);
            __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 599, 694);
        }
        # 606 "41module2.nc"
        come_call_finalizer(sFun_finalize, Value_45, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 602, 696);
        Value_46=get_variable_from_table(info->gv_table,exp_43);
        if(Value_46) {
            # 603 "41module2.nc"
            __right_value0 = (void*)0;
            __dec_obj49=result_44,
            result_44=(char* )come_increment_ref_count(make_come_type_name_string(Value_46->mType,info), "41module2.nc", 603, 698);
            __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 603, 697);
        }
        # 612 "41module2.nc"
        if(result_44) {
            # 607 "41module2.nc"
                        __result_obj__0 = (char* )come_increment_ref_count(result_44, "41module2.nc", 607, 699);
            (exp_43 = come_decrement_ref_count(exp_43, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 607, 700));
            (result_44 = come_decrement_ref_count(result_44, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 607, 701));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 607, 702));
            return __result_obj__0;
        }
        else {
            # 610 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 610, 703);
            (exp_43 = come_decrement_ref_count(exp_43, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 610, 704));
            (result_44 = come_decrement_ref_count(result_44, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 610, 705));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 610, 706));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 610, 707));
            return __result_obj__0;
        }
        (exp_43 = come_decrement_ref_count(exp_43, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 708));
        (result_44 = come_decrement_ref_count(result_44, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 709));
    }
    else if(parsecmp_forward("result_type",info)) {
        # 615 "41module2.nc"
        skip_spaces_and_lf(info);
        # 622 "41module2.nc"
        if(*info->p==40) {
            # 618 "41module2.nc"
            info->p++;
            # 619 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 622 "41module2.nc"
        __right_value0 = (void*)0;
        exp_47=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 622, 710);
        # 629 "41module2.nc"
        if(*info->p==41) {
            # 625 "41module2.nc"
            info->p++;
            # 626 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 629 "41module2.nc"
        skip_spaces_and_lf(info);
        # 631 "41module2.nc"
        result_48=((void*)0);
        # 637 "41module2.nc"
        __right_value0 = (void*)0;
        Value_49=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_47), "41module2.nc", 633, 711);
        if(({(_conditional_value_X8=(Value_49));_conditional_value_X8;})) {
            # 634 "41module2.nc"
            __right_value0 = (void*)0;
            __dec_obj50=result_48,
            result_48=(char* )come_increment_ref_count(make_come_type_name_string(Value_49->mResultType,info), "41module2.nc", 634, 713);
            __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 634, 712);
        }
        # 643 "41module2.nc"
        if(result_48) {
            # 638 "41module2.nc"
                        __result_obj__0 = (char* )come_increment_ref_count(result_48, "41module2.nc", 638, 714);
            (exp_47 = come_decrement_ref_count(exp_47, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 638, 715));
            (result_48 = come_decrement_ref_count(result_48, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 638, 716));
            come_call_finalizer(sFun_finalize, Value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 638, 717);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 638, 718));
            return __result_obj__0;
        }
        else {
            # 641 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 641, 719);
            (exp_47 = come_decrement_ref_count(exp_47, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 641, 720));
            (result_48 = come_decrement_ref_count(result_48, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 641, 721));
            come_call_finalizer(sFun_finalize, Value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 641, 722);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 641, 723));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 641, 724));
            return __result_obj__0;
        }
        (exp_47 = come_decrement_ref_count(exp_47, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 725));
        (result_48 = come_decrement_ref_count(result_48, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 726));
        come_call_finalizer(sFun_finalize, Value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1192, 727);
    }
    else if(parsecmp_forward("param_types",info)) {
        # 646 "41module2.nc"
        skip_spaces_and_lf(info);
        # 653 "41module2.nc"
        if(*info->p==40) {
            # 649 "41module2.nc"
            info->p++;
            # 650 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 653 "41module2.nc"
        __right_value0 = (void*)0;
        exp_50=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 653, 728);
        # 660 "41module2.nc"
        if(*info->p==44) {
            # 656 "41module2.nc"
            info->p++;
            # 657 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 660 "41module2.nc"
        __right_value0 = (void*)0;
        exp2=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 660, 729);
        # 667 "41module2.nc"
        if(*info->p==41) {
            # 663 "41module2.nc"
            info->p++;
            # 664 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 667 "41module2.nc"
        skip_spaces_and_lf(info);
        # 669 "41module2.nc"
        result_51=((void*)0);
        # 678 "41module2.nc"
        __right_value0 = (void*)0;
        Value_52=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_50), "41module2.nc", 671, 730);
        if(({(_conditional_value_X9=(Value_52));_conditional_value_X9;})) {
            # 672 "41module2.nc"
            __right_value0 = (void*)0;
            type=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(Value_52->mParamTypes,atoi(exp2))));
            # 676 "41module2.nc"
            if(type) {
                # 674 "41module2.nc"
                __right_value0 = (void*)0;
                __dec_obj51=result_51,
                result_51=(char* )come_increment_ref_count(make_come_type_name_string(type,info), "41module2.nc", 674, 750);
                __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 674, 749);
            }
        }
        # 684 "41module2.nc"
        if(result_51) {
            # 679 "41module2.nc"
                        __result_obj__0 = (char* )come_increment_ref_count(result_51, "41module2.nc", 679, 751);
            (exp_50 = come_decrement_ref_count(exp_50, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 679, 752));
            (exp2 = come_decrement_ref_count(exp2, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 679, 753));
            (result_51 = come_decrement_ref_count(result_51, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 679, 754));
            come_call_finalizer(sFun_finalize, Value_52, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 679, 755);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 679, 756));
            return __result_obj__0;
        }
        else {
            # 682 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 682, 757);
            (exp_50 = come_decrement_ref_count(exp_50, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 682, 758));
            (exp2 = come_decrement_ref_count(exp2, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 682, 759));
            (result_51 = come_decrement_ref_count(result_51, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 682, 760));
            come_call_finalizer(sFun_finalize, Value_52, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 682, 761);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 682, 762));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 682, 763));
            return __result_obj__0;
        }
        (exp_50 = come_decrement_ref_count(exp_50, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 764));
        (exp2 = come_decrement_ref_count(exp2, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 765));
        (result_51 = come_decrement_ref_count(result_51, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 766));
        come_call_finalizer(sFun_finalize, Value_52, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1192, 767);
    }
    else if(parsecmp_forward("param_names",info)) {
        # 687 "41module2.nc"
        skip_spaces_and_lf(info);
        # 694 "41module2.nc"
        if(*info->p==40) {
            # 690 "41module2.nc"
            info->p++;
            # 691 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 694 "41module2.nc"
        __right_value0 = (void*)0;
        exp_55=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 694, 768);
        # 701 "41module2.nc"
        if(*info->p==44) {
            # 697 "41module2.nc"
            info->p++;
            # 698 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 701 "41module2.nc"
        __right_value0 = (void*)0;
        exp2_56=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 701, 769);
        # 708 "41module2.nc"
        if(*info->p==41) {
            # 704 "41module2.nc"
            info->p++;
            # 705 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 708 "41module2.nc"
        skip_spaces_and_lf(info);
        # 710 "41module2.nc"
        result_57=((void*)0);
        # 716 "41module2.nc"
        __right_value0 = (void*)0;
        Value_58=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_55), "41module2.nc", 712, 770);
        if(({(_conditional_value_X10=(Value_58));_conditional_value_X10;})) {
            # 713 "41module2.nc"
            __right_value0 = (void*)0;
            __dec_obj52=result_57,
            result_57=(char* )come_increment_ref_count(list$1char$ph_operator_load_element(Value_58->mParamNames,atoi(exp2_56)), "41module2.nc", 713, 790);
            __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 713, 789);
        }
        # 722 "41module2.nc"
        if(result_57) {
            # 717 "41module2.nc"
                        __result_obj__0 = (char* )come_increment_ref_count(result_57, "41module2.nc", 717, 791);
            (exp_55 = come_decrement_ref_count(exp_55, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 717, 792));
            (exp2_56 = come_decrement_ref_count(exp2_56, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 717, 793));
            (result_57 = come_decrement_ref_count(result_57, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 717, 794));
            come_call_finalizer(sFun_finalize, Value_58, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 717, 795);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 717, 796));
            return __result_obj__0;
        }
        else {
            # 720 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 720, 797);
            (exp_55 = come_decrement_ref_count(exp_55, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 720, 798));
            (exp2_56 = come_decrement_ref_count(exp2_56, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 720, 799));
            (result_57 = come_decrement_ref_count(result_57, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 720, 800));
            come_call_finalizer(sFun_finalize, Value_58, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 720, 801);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 720, 802));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 720, 803));
            return __result_obj__0;
        }
        (exp_55 = come_decrement_ref_count(exp_55, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 804));
        (exp2_56 = come_decrement_ref_count(exp2_56, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 805));
        (result_57 = come_decrement_ref_count(result_57, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 806));
        come_call_finalizer(sFun_finalize, Value_58, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1192, 807);
    }
    else if(parsecmp_forward("num_param_types",info)) {
        # 725 "41module2.nc"
        skip_spaces_and_lf(info);
        # 732 "41module2.nc"
        if(*info->p==40) {
            # 728 "41module2.nc"
            info->p++;
            # 729 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 732 "41module2.nc"
        __right_value0 = (void*)0;
        exp_61=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 732, 808);
        # 739 "41module2.nc"
        if(*info->p==41) {
            # 735 "41module2.nc"
            info->p++;
            # 736 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 739 "41module2.nc"
        skip_spaces_and_lf(info);
        # 741 "41module2.nc"
        result_62=((void*)0);
        # 747 "41module2.nc"
        __right_value0 = (void*)0;
        Value_63=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_61), "41module2.nc", 743, 809);
        if(({(_conditional_value_X11=(Value_63));_conditional_value_X11;})) {
            # 744 "41module2.nc"
            __right_value0 = (void*)0;
            __dec_obj53=result_62,
            result_62=(char* )come_increment_ref_count(xsprintf("%d",list$1sType$ph_length(Value_63->mParamTypes)), "41module2.nc", 744, 811);
            __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 744, 810);
        }
        # 753 "41module2.nc"
        if(result_62) {
            # 748 "41module2.nc"
                        __result_obj__0 = (char* )come_increment_ref_count(result_62, "41module2.nc", 748, 812);
            (exp_61 = come_decrement_ref_count(exp_61, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 748, 813));
            (result_62 = come_decrement_ref_count(result_62, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 748, 814));
            come_call_finalizer(sFun_finalize, Value_63, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 748, 815);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 748, 816));
            return __result_obj__0;
        }
        else {
            # 751 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 751, 817);
            (exp_61 = come_decrement_ref_count(exp_61, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 751, 818));
            (result_62 = come_decrement_ref_count(result_62, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 751, 819));
            come_call_finalizer(sFun_finalize, Value_63, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 751, 820);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 751, 821));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 751, 822));
            return __result_obj__0;
        }
        (exp_61 = come_decrement_ref_count(exp_61, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 823));
        (result_62 = come_decrement_ref_count(result_62, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 824));
        come_call_finalizer(sFun_finalize, Value_63, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1192, 825);
    }
    else if(parsecmp_forward("num_fields",info)) {
        # 756 "41module2.nc"
        skip_spaces_and_lf(info);
        # 763 "41module2.nc"
        if(*info->p==40) {
            # 759 "41module2.nc"
            info->p++;
            # 760 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 763 "41module2.nc"
        __right_value0 = (void*)0;
        exp_64=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 763, 826);
        # 770 "41module2.nc"
        if(*info->p==41) {
            # 766 "41module2.nc"
            info->p++;
            # 767 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 770 "41module2.nc"
        skip_spaces_and_lf(info);
        # 772 "41module2.nc"
        result_65=((void*)0);
        # 780 "41module2.nc"
        __right_value0 = (void*)0;
        Value_66=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_64), "41module2.nc", 774, 863);
        if(({(_conditional_value_X12=(Value_66));_conditional_value_X12;})) {
            # 778 "41module2.nc"
            if(Value_66->mStruct) {
                # 776 "41module2.nc"
                __right_value0 = (void*)0;
                __dec_obj54=result_65,
                result_65=(char* )come_increment_ref_count(xsprintf("%d",list$1tuple2$2char$phsType$ph$ph_length(Value_66->mFields)), "41module2.nc", 776, 865);
                __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 776, 864);
            }
        }
        # 786 "41module2.nc"
        if(result_65) {
            # 781 "41module2.nc"
                        __result_obj__0 = (char* )come_increment_ref_count(result_65, "41module2.nc", 781, 866);
            (exp_64 = come_decrement_ref_count(exp_64, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 781, 867));
            (result_65 = come_decrement_ref_count(result_65, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 781, 868));
            come_call_finalizer(sClass_finalize, Value_66, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 781, 869);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 781, 870));
            return __result_obj__0;
        }
        else {
            # 784 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 784, 871);
            (exp_64 = come_decrement_ref_count(exp_64, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 784, 872));
            (result_65 = come_decrement_ref_count(result_65, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 784, 873));
            come_call_finalizer(sClass_finalize, Value_66, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 784, 874);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 784, 875));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 784, 876));
            return __result_obj__0;
        }
        (exp_64 = come_decrement_ref_count(exp_64, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 877));
        (result_65 = come_decrement_ref_count(result_65, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 878));
        come_call_finalizer(sClass_finalize, Value_66, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1192, 879);
    }
    else if(parsecmp_forward("field_types",info)) {
        # 789 "41module2.nc"
        skip_spaces_and_lf(info);
        # 796 "41module2.nc"
        if(*info->p==40) {
            # 792 "41module2.nc"
            info->p++;
            # 793 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 796 "41module2.nc"
        __right_value0 = (void*)0;
        exp_67=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 796, 880);
        # 803 "41module2.nc"
        if(*info->p==44) {
            # 799 "41module2.nc"
            info->p++;
            # 800 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 803 "41module2.nc"
        __right_value0 = (void*)0;
        exp2_68=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 803, 881);
        # 810 "41module2.nc"
        if(*info->p==41) {
            # 806 "41module2.nc"
            info->p++;
            # 807 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 810 "41module2.nc"
        skip_spaces_and_lf(info);
        # 812 "41module2.nc"
        result_69=((void*)0);
        # 826 "41module2.nc"
        __right_value0 = (void*)0;
        Value_70=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_67), "41module2.nc", 814, 882);
        if(({(_conditional_value_X13=(Value_70));_conditional_value_X13;})) {
            # 824 "41module2.nc"
            if(Value_70->mStruct) {
                # 816 "41module2.nc"
                n=atoi(exp2_68);
                # 823 "41module2.nc"
                if(n<list$1tuple2$2char$phsType$ph$ph_length(Value_70->mFields)) {
                    # 818 "41module2.nc"
                    __right_value0 = (void*)0;
                    multiple_assign_var4=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(Value_70->mFields,n)));
                    name=(char* )come_increment_ref_count(multiple_assign_var4->v1, "41module2.nc", 818, 883);
                    type_71=(struct sType* )come_increment_ref_count(multiple_assign_var4->v2, "41module2.nc", 818, 884);
                    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 818, 885);
                    # 822 "41module2.nc"
                    if(type_71) {
                        # 820 "41module2.nc"
                        __right_value0 = (void*)0;
                        __dec_obj55=result_69,
                        result_69=(char* )come_increment_ref_count(make_come_type_name_string(type_71,info), "41module2.nc", 820, 887);
                        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 820, 886);
                    }
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 823, 888));
                    come_call_finalizer(sType_finalize, type_71, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 823, 889);
                }
            }
        }
        # 832 "41module2.nc"
        if(result_69) {
            # 827 "41module2.nc"
                        __result_obj__0 = (char* )come_increment_ref_count(result_69, "41module2.nc", 827, 890);
            (exp_67 = come_decrement_ref_count(exp_67, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 827, 891));
            (exp2_68 = come_decrement_ref_count(exp2_68, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 827, 892));
            (result_69 = come_decrement_ref_count(result_69, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 827, 893));
            come_call_finalizer(sClass_finalize, Value_70, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 827, 894);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 827, 895));
            return __result_obj__0;
        }
        else {
            # 830 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 830, 896);
            (exp_67 = come_decrement_ref_count(exp_67, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 830, 897));
            (exp2_68 = come_decrement_ref_count(exp2_68, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 830, 898));
            (result_69 = come_decrement_ref_count(result_69, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 830, 899));
            come_call_finalizer(sClass_finalize, Value_70, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 830, 900);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 830, 901));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 830, 902));
            return __result_obj__0;
        }
        (exp_67 = come_decrement_ref_count(exp_67, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 903));
        (exp2_68 = come_decrement_ref_count(exp2_68, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 904));
        (result_69 = come_decrement_ref_count(result_69, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 905));
        come_call_finalizer(sClass_finalize, Value_70, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1192, 906);
    }
    else if(parsecmp_forward("is_inline",info)) {
        # 835 "41module2.nc"
        skip_spaces_and_lf(info);
        # 842 "41module2.nc"
        if(*info->p==40) {
            # 838 "41module2.nc"
            info->p++;
            # 839 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 842 "41module2.nc"
        __right_value0 = (void*)0;
        exp_72=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 842, 907);
        # 849 "41module2.nc"
        if(*info->p==41) {
            # 845 "41module2.nc"
            info->p++;
            # 846 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 849 "41module2.nc"
        skip_spaces_and_lf(info);
        # 851 "41module2.nc"
        defined_73=(_Bool)0;
        # 859 "41module2.nc"
        __right_value0 = (void*)0;
        Value_74=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_72), "41module2.nc", 853, 908);
        if(({(_conditional_value_X14=(Value_74));_conditional_value_X14;})) {
            # 857 "41module2.nc"
            if(Value_74->mResultType->mInline) {
                # 855 "41module2.nc"
                defined_73=(_Bool)1;
            }
        }
        # 865 "41module2.nc"
        if(defined_73) {
            # 860 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 860, 909);
            (exp_72 = come_decrement_ref_count(exp_72, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 860, 910));
            come_call_finalizer(sFun_finalize, Value_74, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 860, 911);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 860, 912));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 860, 913));
            return __result_obj__0;
        }
        else {
            # 863 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 863, 914);
            (exp_72 = come_decrement_ref_count(exp_72, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 863, 915));
            come_call_finalizer(sFun_finalize, Value_74, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 863, 916);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 863, 917));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 863, 918));
            return __result_obj__0;
        }
        (exp_72 = come_decrement_ref_count(exp_72, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 919));
        come_call_finalizer(sFun_finalize, Value_74, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1192, 920);
    }
    else if(parsecmp_forward("is_struct",info)) {
        # 868 "41module2.nc"
        skip_spaces_and_lf(info);
        # 875 "41module2.nc"
        if(*info->p==40) {
            # 871 "41module2.nc"
            info->p++;
            # 872 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 875 "41module2.nc"
        __right_value0 = (void*)0;
        exp_75=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 875, 921);
        # 882 "41module2.nc"
        if(*info->p==41) {
            # 878 "41module2.nc"
            info->p++;
            # 879 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 882 "41module2.nc"
        skip_spaces_and_lf(info);
        # 884 "41module2.nc"
        defined_76=(_Bool)0;
        # 892 "41module2.nc"
        __right_value0 = (void*)0;
        Value_77=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_75), "41module2.nc", 886, 922);
        if(({(_conditional_value_X15=(Value_77));_conditional_value_X15;})) {
            # 890 "41module2.nc"
            if(Value_77->mStruct) {
                # 888 "41module2.nc"
                defined_76=(_Bool)1;
            }
        }
        # 898 "41module2.nc"
        if(defined_76) {
            # 893 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 893, 923);
            (exp_75 = come_decrement_ref_count(exp_75, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 893, 924));
            come_call_finalizer(sClass_finalize, Value_77, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 893, 925);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 893, 926));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 893, 927));
            return __result_obj__0;
        }
        else {
            # 896 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 896, 928);
            (exp_75 = come_decrement_ref_count(exp_75, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 896, 929));
            come_call_finalizer(sClass_finalize, Value_77, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 896, 930);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 896, 931));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 896, 932));
            return __result_obj__0;
        }
        (exp_75 = come_decrement_ref_count(exp_75, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 933));
        come_call_finalizer(sClass_finalize, Value_77, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1192, 934);
    }
    else if(parsecmp_forward("is_union",info)) {
        # 901 "41module2.nc"
        skip_spaces_and_lf(info);
        # 908 "41module2.nc"
        if(*info->p==40) {
            # 904 "41module2.nc"
            info->p++;
            # 905 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 908 "41module2.nc"
        __right_value0 = (void*)0;
        exp_78=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 908, 935);
        # 915 "41module2.nc"
        if(*info->p==41) {
            # 911 "41module2.nc"
            info->p++;
            # 912 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 915 "41module2.nc"
        skip_spaces_and_lf(info);
        # 917 "41module2.nc"
        defined_79=(_Bool)0;
        # 925 "41module2.nc"
        __right_value0 = (void*)0;
        Value_80=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_78), "41module2.nc", 919, 936);
        if(({(_conditional_value_X16=(Value_80));_conditional_value_X16;})) {
            # 923 "41module2.nc"
            if(Value_80->mUnion) {
                # 921 "41module2.nc"
                defined_79=(_Bool)1;
            }
        }
        # 931 "41module2.nc"
        if(defined_79) {
            # 926 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 926, 937);
            (exp_78 = come_decrement_ref_count(exp_78, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 926, 938));
            come_call_finalizer(sClass_finalize, Value_80, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 926, 939);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 926, 940));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 926, 941));
            return __result_obj__0;
        }
        else {
            # 929 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 929, 942);
            (exp_78 = come_decrement_ref_count(exp_78, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 929, 943));
            come_call_finalizer(sClass_finalize, Value_80, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 929, 944);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 929, 945));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 929, 946));
            return __result_obj__0;
        }
        (exp_78 = come_decrement_ref_count(exp_78, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 947));
        come_call_finalizer(sClass_finalize, Value_80, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1192, 948);
    }
    else if(parsecmp_forward("is_enum",info)) {
        # 934 "41module2.nc"
        skip_spaces_and_lf(info);
        # 941 "41module2.nc"
        if(*info->p==40) {
            # 937 "41module2.nc"
            info->p++;
            # 938 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 941 "41module2.nc"
        __right_value0 = (void*)0;
        exp_81=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 941, 949);
        # 948 "41module2.nc"
        if(*info->p==41) {
            # 944 "41module2.nc"
            info->p++;
            # 945 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 948 "41module2.nc"
        skip_spaces_and_lf(info);
        # 950 "41module2.nc"
        defined_82=(_Bool)0;
        # 958 "41module2.nc"
        __right_value0 = (void*)0;
        Value_83=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_81), "41module2.nc", 952, 950);
        if(({(_conditional_value_X17=(Value_83));_conditional_value_X17;})) {
            # 956 "41module2.nc"
            if(Value_83->mEnum) {
                # 954 "41module2.nc"
                defined_82=(_Bool)1;
            }
        }
        # 964 "41module2.nc"
        if(defined_82) {
            # 959 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 959, 951);
            (exp_81 = come_decrement_ref_count(exp_81, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 959, 952));
            come_call_finalizer(sClass_finalize, Value_83, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 959, 953);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 959, 954));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 959, 955));
            return __result_obj__0;
        }
        else {
            # 962 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 962, 956);
            (exp_81 = come_decrement_ref_count(exp_81, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 962, 957));
            come_call_finalizer(sClass_finalize, Value_83, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 962, 958);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 962, 959));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 962, 960));
            return __result_obj__0;
        }
        (exp_81 = come_decrement_ref_count(exp_81, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 961));
        come_call_finalizer(sClass_finalize, Value_83, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1192, 962);
    }
    else if(parsecmp_forward("is_interface",info)) {
        # 967 "41module2.nc"
        skip_spaces_and_lf(info);
        # 974 "41module2.nc"
        if(*info->p==40) {
            # 970 "41module2.nc"
            info->p++;
            # 971 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 974 "41module2.nc"
        __right_value0 = (void*)0;
        exp_84=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 974, 963);
        # 981 "41module2.nc"
        if(*info->p==41) {
            # 977 "41module2.nc"
            info->p++;
            # 978 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 981 "41module2.nc"
        skip_spaces_and_lf(info);
        # 983 "41module2.nc"
        defined_85=(_Bool)0;
        # 991 "41module2.nc"
        __right_value0 = (void*)0;
        Value_86=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_84), "41module2.nc", 985, 964);
        if(({(_conditional_value_X18=(Value_86));_conditional_value_X18;})) {
            # 989 "41module2.nc"
            if(Value_86->mProtocol) {
                # 987 "41module2.nc"
                defined_85=(_Bool)1;
            }
        }
        # 997 "41module2.nc"
        if(defined_85) {
            # 992 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 992, 965);
            (exp_84 = come_decrement_ref_count(exp_84, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 992, 966));
            come_call_finalizer(sClass_finalize, Value_86, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 992, 967);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 992, 968));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 992, 969));
            return __result_obj__0;
        }
        else {
            # 995 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 995, 970);
            (exp_84 = come_decrement_ref_count(exp_84, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 995, 971));
            come_call_finalizer(sClass_finalize, Value_86, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 995, 972);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 995, 973));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 995, 974));
            return __result_obj__0;
        }
        (exp_84 = come_decrement_ref_count(exp_84, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 975));
        come_call_finalizer(sClass_finalize, Value_86, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1192, 976);
    }
    else if(parsecmp_forward("is_generics",info)) {
        # 1000 "41module2.nc"
        skip_spaces_and_lf(info);
        # 1007 "41module2.nc"
        if(*info->p==40) {
            # 1003 "41module2.nc"
            info->p++;
            # 1004 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 1007 "41module2.nc"
        __right_value0 = (void*)0;
        exp_87=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1007, 977);
        # 1014 "41module2.nc"
        if(*info->p==41) {
            # 1010 "41module2.nc"
            info->p++;
            # 1011 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 1014 "41module2.nc"
        skip_spaces_and_lf(info);
        # 1016 "41module2.nc"
        defined_88=(_Bool)0;
        # 1024 "41module2.nc"
        __right_value0 = (void*)0;
        Value_89=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_87), "41module2.nc", 1018, 978);
        if(({(_conditional_value_X19=(Value_89));_conditional_value_X19;})) {
            # 1022 "41module2.nc"
            if(Value_89->mGenerics) {
                # 1020 "41module2.nc"
                defined_88=(_Bool)1;
            }
        }
        # 1030 "41module2.nc"
        if(defined_88) {
            # 1025 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1025, 979);
            (exp_87 = come_decrement_ref_count(exp_87, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1025, 980));
            come_call_finalizer(sClass_finalize, Value_89, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1025, 981);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1025, 982));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1025, 983));
            return __result_obj__0;
        }
        else {
            # 1028 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1028, 984);
            (exp_87 = come_decrement_ref_count(exp_87, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1028, 985));
            come_call_finalizer(sClass_finalize, Value_89, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1028, 986);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1028, 987));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1028, 988));
            return __result_obj__0;
        }
        (exp_87 = come_decrement_ref_count(exp_87, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 989));
        come_call_finalizer(sClass_finalize, Value_89, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1192, 990);
    }
    else if(*info->p==34) {
        # 1063 "41module2.nc"
        sline_real=info->sline_real;
        # 1064 "41module2.nc"
        info->sline_real=info->sline;
        # 1065 "41module2.nc"
        info->p++;
        # 1067 "41module2.nc"
        sline=info->sline;
        # 1069 "41module2.nc"
        __right_value0 = (void*)0;
        value_90=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "41module2.nc", 1069, 991, "struct buffer* "), "41module2.nc", 1069, 992)), "41module2.nc", 1069, 993);
        # 1129 "41module2.nc"
        while(1) {
            # 1127 "41module2.nc"
            if(*info->p==34) {
                # 1073 "41module2.nc"
                info->p++;
                # 1075 "41module2.nc"
                p=info->p;
                # 1076 "41module2.nc"
                sline_91=info->sline;
                # 1078 "41module2.nc"
                skip_spaces_and_lf(info);
                # 1082 "41module2.nc"
                parse_sharp_v5(info);
                # 1090 "41module2.nc"
                if(*info->p==34) {
                    # 1083 "41module2.nc"
                    info->p++;
                }
                else {
                    # 1086 "41module2.nc"
                    info->p=p;
                    # 1087 "41module2.nc"
                    info->sline=sline_91;
                    # 1088 "41module2.nc"
                    break;
                }
            }
            else if(*info->p==92) {
                # 1092 "41module2.nc"
                info->p++;
                # 1113 "41module2.nc"
                if(*info->p==123) {
                    # 1095 "41module2.nc"
                    info->p++;
                    # 1097 "41module2.nc"
                    __right_value0 = (void*)0;
                    exp_92=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1097, 994);
                    # 1099 "41module2.nc"
                    expected_next_character(125,info);
                    # 1101 "41module2.nc"
                    buffer_append_str(value_90,exp_92);
                    (exp_92 = come_decrement_ref_count(exp_92, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1113, 995));
                }
                else if(*info->p==34) {
                    # 1104 "41module2.nc"
                    buffer_append_char(value_90,92);
                    # 1105 "41module2.nc"
                    buffer_append_char(value_90,34);
                    # 1106 "41module2.nc"
                    info->p++;
                }
                else {
                    # 1109 "41module2.nc"
                    buffer_append_char(value_90,92);
                    # 1110 "41module2.nc"
                    buffer_append_char(value_90,*info->p);
                    # 1111 "41module2.nc"
                    info->p++;
                }
            }
            else if(*info->p==0) {
                # 1115 "41module2.nc"
                sline2=info->sline;
                # 1116 "41module2.nc"
                info->sline=sline;
                # 1117 "41module2.nc"
                err_msg(info,"close \" to make c string value");
                # 1118 "41module2.nc"
                info->sline=sline2;
                # 1119 "41module2.nc"
                exit(2);
            }
            else {
                # 1124 "41module2.nc"
                if(*info->p==10) {
                    # 1122 "41module2.nc"
                    info->sline++;
                }
                # 1124 "41module2.nc"
                buffer_append_char(value_90,*info->p);
                # 1125 "41module2.nc"
                info->p++;
            }
        }
        # 1129 "41module2.nc"
        skip_spaces_and_lf(info);
        # 1131 "41module2.nc"
        info->sline_real=sline_real;
        # 1132 "41module2.nc"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(value_90))), "41module2.nc", 1132, 996);
        come_call_finalizer(buffer_finalize, value_90, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1132, 997);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1132, 998));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1132, 999));
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_90, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1192, 1000);
    }
    else if(*info->p==36) {
        # 1135 "41module2.nc"
        info->p++;
        # 1136 "41module2.nc"
        __right_value0 = (void*)0;
        var_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "41module2.nc", 1136, 1001);
        # 1138 "41module2.nc"
        __right_value0 = (void*)0;
        value_93=(char* )come_increment_ref_count(map$2char$phchar$ph_operator_load_element(info->reflection_vars,var_name), "41module2.nc", 1138, 1032);
        # 1145 "41module2.nc"
        if(value_93==((void*)0)) {
            # 1142 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf(""))), "41module2.nc", 1142, 1033);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1142, 1034));
            (value_93 = come_decrement_ref_count(value_93, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1142, 1035));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1142, 1036));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1142, 1037));
            return __result_obj__0;
        }
        # 1145 "41module2.nc"
                __result_obj__0 = (char* )come_increment_ref_count(value_93, "41module2.nc", 1145, 1038);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1145, 1039));
        (value_93 = come_decrement_ref_count(value_93, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1145, 1040));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1145, 1041));
        return __result_obj__0;
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 1042));
        (value_93 = come_decrement_ref_count(value_93, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 1043));
    }
    else if(xisalpha(*info->p)||*info->p==95) {
        # 1148 "41module2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "41module2.nc", 1148, 1044, "struct buffer* "), "41module2.nc", 1148, 1045)), "41module2.nc", 1148, 1046);
        # 1154 "41module2.nc"
        while(xisalnum(*info->p)||*info->p==95||*info->p==42||*info->p==37||*info->p==60||*info->p==62) {
            # 1151 "41module2.nc"
            buffer_append_char(buf,*info->p);
            # 1152 "41module2.nc"
            info->p++;
        }
        # 1154 "41module2.nc"
        skip_spaces_and_lf(info);
        # 1155 "41module2.nc"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "41module2.nc", 1155, 1047);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1155, 1048);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1155, 1049));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1155, 1050));
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1192, 1051);
    }
    else if(*info->p==45&&xisdigit(*(info->p+1))) {
        # 1158 "41module2.nc"
        n_94=0;
        # 1163 "41module2.nc"
        while(xisdigit(*info->p)) {
            # 1160 "41module2.nc"
            n_94=n_94*10+(*info->p-48);
            # 1161 "41module2.nc"
            info->p++;
        }
        # 1163 "41module2.nc"
        skip_spaces_and_lf(info);
        # 1164 "41module2.nc"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("-%d",n_94))), "41module2.nc", 1164, 1052);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1164, 1053));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1164, 1054));
        return __result_obj__0;
    }
    else if(xisdigit(*info->p)) {
        # 1167 "41module2.nc"
        n_95=0;
        # 1172 "41module2.nc"
        while(xisdigit(*info->p)) {
            # 1169 "41module2.nc"
            n_95=n_95*10+(*info->p-48);
            # 1170 "41module2.nc"
            info->p++;
        }
        # 1172 "41module2.nc"
        skip_spaces_and_lf(info);
        # 1173 "41module2.nc"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",n_95))), "41module2.nc", 1173, 1055);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1173, 1056));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1173, 1057));
        return __result_obj__0;
    }
    else if(*info->p==33) {
        # 1176 "41module2.nc"
        info->p++;
        # 1177 "41module2.nc"
        skip_spaces_and_lf(info);
        # 1179 "41module2.nc"
        __right_value0 = (void*)0;
        exp_96=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1179, 1058);
        # 1187 "41module2.nc"
        if(string_operator_equals(exp_96,"true")) {
            # 1182 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1182, 1059);
            (exp_96 = come_decrement_ref_count(exp_96, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1182, 1060));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1182, 1061));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1182, 1062));
            return __result_obj__0;
        }
        else {
            # 1185 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1185, 1063);
            (exp_96 = come_decrement_ref_count(exp_96, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1185, 1064));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1185, 1065));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1185, 1066));
            return __result_obj__0;
        }
        (exp_96 = come_decrement_ref_count(exp_96, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1192, 1067));
    }
    else {
        # 1189 "41module2.nc"
        err_msg(info,"invalid character(%c)",*info->p);
    }
    # 1192 "41module2.nc"
    err_msg(info,"invalid character(%c)",*info->p);
    # 1194 "41module2.nc"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf(""))), "41module2.nc", 1194, 1068);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1194, 1069));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1194, 1070));
    return __result_obj__0;
}

static struct sType*  map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 4047 "./neo-c.h"
    # 4049 "./neo-c.h"
    # 4050 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sType* ));
    # 4056 "./neo-c.h"
    if(self==((void*)0)) {
        # 4053 "./neo-c.h"
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 421);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 422);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 423);
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
                                __result_obj__0 = (struct sType* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 424);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4065, 425);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4065, 426);
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
                                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 427);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 428);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 429);
                return __result_obj__0;
            }
        }
        else {
            # 4076 "./neo-c.h"
                        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 430);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 431);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 432);
            return __result_obj__0;
        }
    }
    # 4080 "./neo-c.h"
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 433);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 434);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 435);
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
    # 4047 "./neo-c.h"
    # 4049 "./neo-c.h"
    # 4050 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sType* ));
    # 4056 "./neo-c.h"
    if(self==((void*)0)) {
        # 4053 "./neo-c.h"
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 436);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 437);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 438);
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
                                __result_obj__0 = (struct sType* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 439);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4065, 440);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4065, 441);
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
                                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 442);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 443);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 444);
                return __result_obj__0;
            }
        }
        else {
            # 4076 "./neo-c.h"
                        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 445);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 446);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 447);
            return __result_obj__0;
        }
    }
    # 4080 "./neo-c.h"
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 448);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 449);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 450);
    return __result_obj__0;
}

static struct buffer*  map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct buffer*  default_value  ;
    struct buffer*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 4047 "./neo-c.h"
    # 4049 "./neo-c.h"
    # 4050 "./neo-c.h"
    memset(&default_value,0,sizeof(struct buffer* ));
    # 4056 "./neo-c.h"
    if(self==((void*)0)) {
        # 4053 "./neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 487);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 488);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 489);
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
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 490);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4065, 491);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4065, 492);
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
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 493);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 494);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 495);
                return __result_obj__0;
            }
        }
        else {
            # 4076 "./neo-c.h"
                        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 496);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 497);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 498);
            return __result_obj__0;
        }
    }
    # 4080 "./neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 499);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 500);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 501);
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
    # 4047 "./neo-c.h"
    # 4049 "./neo-c.h"
    # 4050 "./neo-c.h"
    memset(&default_value,0,sizeof(struct buffer* ));
    # 4056 "./neo-c.h"
    if(self==((void*)0)) {
        # 4053 "./neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 502);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 503);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 504);
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
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 505);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4065, 506);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4065, 507);
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
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 508);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 509);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 510);
                return __result_obj__0;
            }
        }
        else {
            # 4076 "./neo-c.h"
                        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 511);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 512);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 513);
            return __result_obj__0;
        }
    }
    # 4080 "./neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 514);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 515);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 516);
    return __result_obj__0;
}

static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 4047 "./neo-c.h"
    # 4049 "./neo-c.h"
    # 4050 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sFun* ));
    # 4056 "./neo-c.h"
    if(self==((void*)0)) {
        # 4053 "./neo-c.h"
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 519);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 520);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 521);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 522);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4065, 523);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4065, 524);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 525);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 526);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 527);
                return __result_obj__0;
            }
        }
        else {
            # 4076 "./neo-c.h"
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 528);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 529);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 530);
            return __result_obj__0;
        }
    }
    # 4080 "./neo-c.h"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 531);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 532);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 533);
    return __result_obj__0;
}

static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_operator_load_element"; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 4047 "./neo-c.h"
    # 4049 "./neo-c.h"
    # 4050 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sFun* ));
    # 4056 "./neo-c.h"
    if(self==((void*)0)) {
        # 4053 "./neo-c.h"
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 534);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 535);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 536);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 537);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4065, 538);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4065, 539);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 540);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 541);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 542);
                return __result_obj__0;
            }
        }
        else {
            # 4076 "./neo-c.h"
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 543);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 544);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 545);
            return __result_obj__0;
        }
    }
    # 4080 "./neo-c.h"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 546);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 547);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 548);
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
    # 4047 "./neo-c.h"
    # 4049 "./neo-c.h"
    # 4050 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sGenericsFun* ));
    # 4056 "./neo-c.h"
    if(self==((void*)0)) {
        # 4053 "./neo-c.h"
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 551);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 552);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 553);
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
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 554);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4065, 555);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4065, 556);
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
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 557);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 558);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 559);
                return __result_obj__0;
            }
        }
        else {
            # 4076 "./neo-c.h"
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 560);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 561);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 562);
            return __result_obj__0;
        }
    }
    # 4080 "./neo-c.h"
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 563);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 564);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 565);
    return __result_obj__0;
}

static struct sGenericsFun*  map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_operator_load_element"; neo_current_frame = &fr;
    struct sGenericsFun*  default_value  ;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 4047 "./neo-c.h"
    # 4049 "./neo-c.h"
    # 4050 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sGenericsFun* ));
    # 4056 "./neo-c.h"
    if(self==((void*)0)) {
        # 4053 "./neo-c.h"
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 566);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 567);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 568);
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
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 569);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4065, 570);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4065, 571);
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
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 572);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 573);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 574);
                return __result_obj__0;
            }
        }
        else {
            # 4076 "./neo-c.h"
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 575);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 576);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 577);
            return __result_obj__0;
        }
    }
    # 4080 "./neo-c.h"
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 578);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 579);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 580);
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
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sType* ));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 731);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 732);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 733);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2161, 734);
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
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 735);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 736);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_53,0,sizeof(struct sType* ));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_53, "./neo-c.h", 2177, 737);
    come_call_finalizer(sType_finalize, default_value_53, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 738);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 739);
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
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sType* ));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 740);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 741);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 742);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2161, 743);
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
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 744);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 745);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_54,0,sizeof(struct sType* ));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_54, "./neo-c.h", 2177, 746);
    come_call_finalizer(sType_finalize, default_value_54, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 747);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 748);
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
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(char* ));
        # 2158 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 771);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2158, 772));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2158, 773));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 2161, 774));
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
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 775);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2169, 776));
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_59,0,sizeof(char* ));
    # 2177 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(default_value_59, "./neo-c.h", 2177, 777);
    (default_value_59 = come_decrement_ref_count(default_value_59, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2177, 778));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2177, 779));
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
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(char* ));
        # 2158 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 780);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2158, 781));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2158, 782));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 2161, 783));
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
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 784);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2169, 785));
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_60,0,sizeof(char* ));
    # 2177 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(default_value_60, "./neo-c.h", 2177, 786);
    (default_value_60 = come_decrement_ref_count(default_value_60, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2177, 787));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2177, 788));
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

static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sClass*  default_value  ;
    struct sClass*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 4047 "./neo-c.h"
    # 4049 "./neo-c.h"
    # 4050 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sClass* ));
    # 4056 "./neo-c.h"
    if(self==((void*)0)) {
        # 4053 "./neo-c.h"
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 827);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 834);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 835);
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
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 836);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4065, 837);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4065, 838);
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
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 839);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 840);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 841);
                return __result_obj__0;
            }
        }
        else {
            # 4076 "./neo-c.h"
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 842);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 843);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 844);
            return __result_obj__0;
        }
    }
    # 4080 "./neo-c.h"
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 845);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 846);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 847);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    # 1 "sClass_finalize"
    # 3 "sClass_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 2 "sClass_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 828));
    }
    # 4 "sClass_finalize"
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        # 3 "sClass_finalize"
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 5, 831);
    }
    # 5 "sClass_finalize"
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        # 4 "sClass_finalize"
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 832));
    }
    # 6 "sClass_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 5 "sClass_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 833));
    }
            neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 830);
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
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 829);
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
    # 4047 "./neo-c.h"
    # 4049 "./neo-c.h"
    # 4050 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sClass* ));
    # 4056 "./neo-c.h"
    if(self==((void*)0)) {
        # 4053 "./neo-c.h"
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 848);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 849);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 850);
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
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 851);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4065, 852);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4065, 853);
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
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 854);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 855);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 856);
                return __result_obj__0;
            }
        }
        else {
            # 4076 "./neo-c.h"
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 857);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 858);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 859);
            return __result_obj__0;
        }
    }
    # 4080 "./neo-c.h"
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 860);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 861);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 862);
    return __result_obj__0;
}

static char*  map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph$p_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 4047 "./neo-c.h"
    # 4049 "./neo-c.h"
    # 4050 "./neo-c.h"
    memset(&default_value,0,sizeof(char* ));
    # 4056 "./neo-c.h"
    if(self==((void*)0)) {
        # 4053 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 1002);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4053, 1003));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4053, 1004));
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
                                __result_obj__0 = (char* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 1005);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4065, 1006));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4065, 1007));
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
                                __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 1008);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4072, 1009));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4072, 1010));
                return __result_obj__0;
            }
        }
        else {
            # 4076 "./neo-c.h"
                        __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 1011);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4076, 1012));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4076, 1013));
            return __result_obj__0;
        }
    }
    # 4080 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 1014);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4080, 1015));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4080, 1016));
    return __result_obj__0;
}

static char*  map$2char$phchar$ph_operator_load_element(struct map$2char$phchar$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 4047 "./neo-c.h"
    # 4049 "./neo-c.h"
    # 4050 "./neo-c.h"
    memset(&default_value,0,sizeof(char* ));
    # 4056 "./neo-c.h"
    if(self==((void*)0)) {
        # 4053 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 1017);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4053, 1018));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4053, 1019));
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
                                __result_obj__0 = (char* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 1020);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4065, 1021));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4065, 1022));
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
                                __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 1023);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4072, 1024));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4072, 1025));
                return __result_obj__0;
            }
        }
        else {
            # 4076 "./neo-c.h"
                        __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 1026);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4076, 1027));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4076, 1028));
            return __result_obj__0;
        }
    }
    # 4080 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 1029);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4080, 1030));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 4080, 1031));
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
    # 1199 "41module2.nc"
    node=(char* )come_increment_ref_count(reflection_node(info), "41module2.nc", 1199, 1071);
    # 1201 "41module2.nc"
    skip_spaces_and_lf(info);
    # 1233 "41module2.nc"
    while(*info->p) {
        # 1231 "41module2.nc"
        if(*info->p==42) {
            # 1205 "41module2.nc"
            info->p++;
            # 1206 "41module2.nc"
            skip_spaces_and_lf(info);
            # 1208 "41module2.nc"
            __right_value0 = (void*)0;
            right=(char* )come_increment_ref_count(reflection_node(info), "41module2.nc", 1208, 1072);
            # 1210 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=int_to_string((atoi(node)*atoi(right))))), "41module2.nc", 1210, 1073);
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1210, 1074));
            (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1210, 1075));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1210, 1076));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1210, 1077));
            return __result_obj__0;
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1231, 1078));
        }
        else if(*info->p==47) {
            # 1213 "41module2.nc"
            info->p++;
            # 1214 "41module2.nc"
            skip_spaces_and_lf(info);
            # 1216 "41module2.nc"
            __right_value0 = (void*)0;
            right_97=(char* )come_increment_ref_count(reflection_node(info), "41module2.nc", 1216, 1079);
            # 1218 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=int_to_string((atoi(node)/atoi(right_97))))), "41module2.nc", 1218, 1080);
            (right_97 = come_decrement_ref_count(right_97, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1218, 1081));
            (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1218, 1082));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1218, 1083));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1218, 1084));
            return __result_obj__0;
            (right_97 = come_decrement_ref_count(right_97, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1231, 1085));
        }
        else if(*info->p==37) {
            # 1221 "41module2.nc"
            info->p++;
            # 1222 "41module2.nc"
            skip_spaces_and_lf(info);
            # 1224 "41module2.nc"
            __right_value0 = (void*)0;
            right_98=(char* )come_increment_ref_count(reflection_node(info), "41module2.nc", 1224, 1086);
            # 1226 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=int_to_string((atoi(node)%atoi(right_98))))), "41module2.nc", 1226, 1087);
            (right_98 = come_decrement_ref_count(right_98, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1226, 1088));
            (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1226, 1089));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1226, 1090));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1226, 1091));
            return __result_obj__0;
            (right_98 = come_decrement_ref_count(right_98, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1231, 1092));
        }
        else {
            # 1229 "41module2.nc"
            break;
        }
    }
    # 1233 "41module2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(node, "41module2.nc", 1233, 1093);
    (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1233, 1094));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1233, 1095));
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
    # 1238 "41module2.nc"
    node=(char* )come_increment_ref_count(reflection_expression_mult(info), "41module2.nc", 1238, 1096);
    # 1240 "41module2.nc"
    skip_spaces_and_lf(info);
    # 1272 "41module2.nc"
    while(*info->p) {
        # 1270 "41module2.nc"
        if(*info->p==46) {
            # 1244 "41module2.nc"
            info->p++;
            # 1245 "41module2.nc"
            skip_spaces_and_lf(info);
            # 1247 "41module2.nc"
            __right_value0 = (void*)0;
            right=(char* )come_increment_ref_count(reflection_expression_mult(info), "41module2.nc", 1247, 1097);
            # 1249 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=string_operator_add(node,right))), "41module2.nc", 1249, 1098);
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1249, 1099));
            (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1249, 1100));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1249, 1101));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1249, 1102));
            return __result_obj__0;
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1270, 1103));
        }
        else if(*info->p==43) {
            # 1252 "41module2.nc"
            info->p++;
            # 1253 "41module2.nc"
            skip_spaces_and_lf(info);
            # 1255 "41module2.nc"
            __right_value0 = (void*)0;
            right_99=(char* )come_increment_ref_count(reflection_expression_mult(info), "41module2.nc", 1255, 1104);
            # 1257 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=int_to_string((atoi(node)+atoi(right_99))))), "41module2.nc", 1257, 1105);
            (right_99 = come_decrement_ref_count(right_99, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1257, 1106));
            (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1257, 1107));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1257, 1108));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1257, 1109));
            return __result_obj__0;
            (right_99 = come_decrement_ref_count(right_99, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1270, 1110));
        }
        else if(*info->p==45) {
            # 1260 "41module2.nc"
            info->p++;
            # 1261 "41module2.nc"
            skip_spaces_and_lf(info);
            # 1263 "41module2.nc"
            __right_value0 = (void*)0;
            right_100=(char* )come_increment_ref_count(reflection_expression_mult(info), "41module2.nc", 1263, 1111);
            # 1265 "41module2.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=int_to_string((atoi(node)-atoi(right_100))))), "41module2.nc", 1265, 1112);
            (right_100 = come_decrement_ref_count(right_100, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1265, 1113));
            (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1265, 1114));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1265, 1115));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1265, 1116));
            return __result_obj__0;
            (right_100 = come_decrement_ref_count(right_100, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1270, 1117));
        }
        else {
            # 1268 "41module2.nc"
            break;
        }
    }
    # 1272 "41module2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(node, "41module2.nc", 1272, 1118);
    (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1272, 1119));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1272, 1120));
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
    # 1277 "41module2.nc"
    node=(char* )come_increment_ref_count(reflection_expression_add(info), "41module2.nc", 1277, 1121);
    # 1279 "41module2.nc"
    skip_spaces_and_lf(info);
    # 1339 "41module2.nc"
    while(*info->p) {
        # 1337 "41module2.nc"
        if(*info->p==62&&*(info->p+1)==61) {
            # 1283 "41module2.nc"
            info->p+=2;
            # 1284 "41module2.nc"
            skip_spaces_and_lf(info);
            # 1286 "41module2.nc"
            __right_value0 = (void*)0;
            right=(char* )come_increment_ref_count(reflection_expression_add(info), "41module2.nc", 1286, 1122);
            # 1294 "41module2.nc"
            if(atoi(node)>=atoi(right)) {
                # 1289 "41module2.nc"
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1289, 1123);
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1289, 1124));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1289, 1125));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1289, 1126));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1289, 1127));
                return __result_obj__0;
            }
            else {
                # 1292 "41module2.nc"
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1292, 1128);
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1292, 1129));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1292, 1130));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1292, 1131));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1292, 1132));
                return __result_obj__0;
            }
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1337, 1133));
        }
        else if(*info->p==60&&*(info->p+1)==61) {
            # 1296 "41module2.nc"
            info->p+=2;
            # 1297 "41module2.nc"
            skip_spaces_and_lf(info);
            # 1299 "41module2.nc"
            __right_value0 = (void*)0;
            right_101=(char* )come_increment_ref_count(reflection_expression_add(info), "41module2.nc", 1299, 1134);
            # 1307 "41module2.nc"
            if(atoi(node)<=atoi(right_101)) {
                # 1302 "41module2.nc"
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1302, 1135);
                (right_101 = come_decrement_ref_count(right_101, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1302, 1136));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1302, 1137));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1302, 1138));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1302, 1139));
                return __result_obj__0;
            }
            else {
                # 1305 "41module2.nc"
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1305, 1140);
                (right_101 = come_decrement_ref_count(right_101, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1305, 1141));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1305, 1142));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1305, 1143));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1305, 1144));
                return __result_obj__0;
            }
            (right_101 = come_decrement_ref_count(right_101, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1337, 1145));
        }
        else if(*info->p==62) {
            # 1309 "41module2.nc"
            info->p+=1;
            # 1310 "41module2.nc"
            skip_spaces_and_lf(info);
            # 1312 "41module2.nc"
            __right_value0 = (void*)0;
            right_102=(char* )come_increment_ref_count(reflection_expression_add(info), "41module2.nc", 1312, 1146);
            # 1320 "41module2.nc"
            if(atoi(node)>atoi(right_102)) {
                # 1315 "41module2.nc"
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1315, 1147);
                (right_102 = come_decrement_ref_count(right_102, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1315, 1148));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1315, 1149));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1315, 1150));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1315, 1151));
                return __result_obj__0;
            }
            else {
                # 1318 "41module2.nc"
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1318, 1152);
                (right_102 = come_decrement_ref_count(right_102, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1318, 1153));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1318, 1154));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1318, 1155));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1318, 1156));
                return __result_obj__0;
            }
            (right_102 = come_decrement_ref_count(right_102, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1337, 1157));
        }
        else if(*info->p==60) {
            # 1322 "41module2.nc"
            info->p+=1;
            # 1323 "41module2.nc"
            skip_spaces_and_lf(info);
            # 1325 "41module2.nc"
            __right_value0 = (void*)0;
            right_103=(char* )come_increment_ref_count(reflection_expression_add(info), "41module2.nc", 1325, 1158);
            # 1333 "41module2.nc"
            if(atoi(node)<atoi(right_103)) {
                # 1328 "41module2.nc"
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1328, 1159);
                (right_103 = come_decrement_ref_count(right_103, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1328, 1160));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1328, 1161));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1328, 1162));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1328, 1163));
                return __result_obj__0;
            }
            else {
                # 1331 "41module2.nc"
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1331, 1164);
                (right_103 = come_decrement_ref_count(right_103, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1331, 1165));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1331, 1166));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1331, 1167));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1331, 1168));
                return __result_obj__0;
            }
            (right_103 = come_decrement_ref_count(right_103, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1337, 1169));
        }
        else {
            # 1335 "41module2.nc"
            break;
        }
    }
    # 1339 "41module2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(node, "41module2.nc", 1339, 1170);
    (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1339, 1171));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1339, 1172));
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
    # 1344 "41module2.nc"
    node=(char* )come_increment_ref_count(reflection_expression_comp(info), "41module2.nc", 1344, 1173);
    # 1346 "41module2.nc"
    skip_spaces_and_lf(info);
    # 1380 "41module2.nc"
    while(*info->p) {
        # 1378 "41module2.nc"
        if(*info->p==61&&*(info->p+1)==61&&*(info->p+2)!=61) {
            # 1350 "41module2.nc"
            info->p+=2;
            # 1351 "41module2.nc"
            skip_spaces_and_lf(info);
            # 1353 "41module2.nc"
            __right_value0 = (void*)0;
            right=(char* )come_increment_ref_count(reflection_expression_comp(info), "41module2.nc", 1353, 1174);
            # 1361 "41module2.nc"
            if(string_operator_equals(node,right)) {
                # 1356 "41module2.nc"
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1356, 1175);
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1356, 1176));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1356, 1177));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1356, 1178));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1356, 1179));
                return __result_obj__0;
            }
            else {
                # 1359 "41module2.nc"
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1359, 1180);
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1359, 1181));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1359, 1182));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1359, 1183));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1359, 1184));
                return __result_obj__0;
            }
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1378, 1185));
        }
        else if(*info->p==33&&*(info->p+1)==61&&*(info->p+2)!=61) {
            # 1363 "41module2.nc"
            info->p+=2;
            # 1364 "41module2.nc"
            skip_spaces_and_lf(info);
            # 1366 "41module2.nc"
            __right_value0 = (void*)0;
            right_104=(char* )come_increment_ref_count(reflection_expression_comp(info), "41module2.nc", 1366, 1186);
            # 1374 "41module2.nc"
            if(string_operator_equals(node,right_104)) {
                # 1369 "41module2.nc"
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1369, 1187);
                (right_104 = come_decrement_ref_count(right_104, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1369, 1188));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1369, 1189));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1369, 1190));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1369, 1191));
                return __result_obj__0;
            }
            else {
                # 1372 "41module2.nc"
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1372, 1192);
                (right_104 = come_decrement_ref_count(right_104, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1372, 1193));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1372, 1194));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1372, 1195));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1372, 1196));
                return __result_obj__0;
            }
            (right_104 = come_decrement_ref_count(right_104, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1378, 1197));
        }
        else {
            # 1376 "41module2.nc"
            break;
        }
    }
    # 1380 "41module2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(node, "41module2.nc", 1380, 1198);
    (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1380, 1199));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1380, 1200));
    return __result_obj__0;
}

char*  reflection_expression_oror(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "reflection_expression_oror"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  node  ;
    char*  right  ;
    char*  __result_obj__0  ;
    # 1385 "41module2.nc"
    node=(char* )come_increment_ref_count(reflection_expression_eq(info), "41module2.nc", 1385, 1201);
    # 1387 "41module2.nc"
    skip_spaces_and_lf(info);
    # 1408 "41module2.nc"
    while(*info->p) {
        # 1406 "41module2.nc"
        if(*info->p==124&&*(info->p+1)==124) {
            # 1391 "41module2.nc"
            info->p+=2;
            # 1392 "41module2.nc"
            skip_spaces_and_lf(info);
            # 1394 "41module2.nc"
            __right_value0 = (void*)0;
            right=(char* )come_increment_ref_count(reflection_expression_eq(info), "41module2.nc", 1394, 1202);
            # 1402 "41module2.nc"
            if(string_operator_equals(node,"true")||string_operator_equals(right,"true")) {
                # 1397 "41module2.nc"
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1397, 1203);
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1397, 1204));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1397, 1205));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1397, 1206));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1397, 1207));
                return __result_obj__0;
            }
            else {
                # 1400 "41module2.nc"
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1400, 1208);
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1400, 1209));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1400, 1210));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1400, 1211));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1400, 1212));
                return __result_obj__0;
            }
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1406, 1213));
        }
        else {
            # 1404 "41module2.nc"
            break;
        }
    }
    # 1408 "41module2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(node, "41module2.nc", 1408, 1214);
    (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1408, 1215));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1408, 1216));
    return __result_obj__0;
}

char*  reflection_expression_andand(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "reflection_expression_andand"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  node  ;
    char*  right  ;
    char*  __result_obj__0  ;
    # 1413 "41module2.nc"
    node=(char* )come_increment_ref_count(reflection_expression_oror(info), "41module2.nc", 1413, 1217);
    # 1415 "41module2.nc"
    skip_spaces_and_lf(info);
    # 1436 "41module2.nc"
    while(*info->p) {
        # 1434 "41module2.nc"
        if(*info->p==38&&*(info->p+1)==38) {
            # 1419 "41module2.nc"
            info->p+=2;
            # 1420 "41module2.nc"
            skip_spaces_and_lf(info);
            # 1422 "41module2.nc"
            __right_value0 = (void*)0;
            right=(char* )come_increment_ref_count(reflection_expression_oror(info), "41module2.nc", 1422, 1218);
            # 1430 "41module2.nc"
            if(string_operator_equals(node,"true")&&string_operator_equals(right,"true")) {
                # 1425 "41module2.nc"
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1425, 1219);
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1425, 1220));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1425, 1221));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1425, 1222));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1425, 1223));
                return __result_obj__0;
            }
            else {
                # 1428 "41module2.nc"
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1428, 1224);
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1428, 1225));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1428, 1226));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1428, 1227));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1428, 1228));
                return __result_obj__0;
            }
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1434, 1229));
        }
        else {
            # 1432 "41module2.nc"
            break;
        }
    }
    # 1436 "41module2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(node, "41module2.nc", 1436, 1230);
    (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1436, 1231));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1436, 1232));
    return __result_obj__0;
}

char*  reflection_expression(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "reflection_expression"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 1441 "41module2.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=reflection_expression_andand(info))), "41module2.nc", 1441, 1233);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1441, 1234));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1441, 1235));
    return __result_obj__0;
}

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "top_level_v91"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  block_text  ;
    int block_text_len;
    char* block_text_end;
    char* p;
    char*  contents  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value2;
    struct sNothingNode* _inf_obj_value2;
    struct sNode* __result_obj__0;
    char*  block_text_108  ;
    int block_text_len_109;
    char* block_text_end_110;
    char* p_111;
    char*  contents_112  ;
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
    struct buffer*  buf_114  ;
    char*  path  ;
    struct MacroSnapshot*  snap  ;
    struct _IO_FILE*  out  ;
    char* macro_defines;
    struct buffer*  source  ;
    char* p_115;
    char* head_116;
    char* end;
    char*  sname  ;
    int sline;
    struct buffer*  __dec_obj62  ;
    char*  __dec_obj63  ;
    struct buffer*  __dec_obj64  ;
    char*  __dec_obj65  ;
    struct sNode* _inf_value6;
    struct sNothingNode* _inf_obj_value6;
    char*  reflection_condtional  ;
    _Bool match_;
    char*  reflection_condtional_117  ;
    struct sNode* _inf_value7;
    struct sNothingNode* _inf_obj_value7;
    char*  value  ;
    struct buffer*  source2  ;
    char* p_118;
    struct buffer*  source_119  ;
    char* head_120;
    char* end_121;
    char*  sname_122  ;
    int sline_123;
    struct buffer*  __dec_obj66  ;
    char*  __dec_obj67  ;
    struct buffer*  __dec_obj68  ;
    char*  __dec_obj69  ;
    struct sNode* _inf_value8;
    struct sNothingNode* _inf_obj_value8;
    char*  var_name  ;
    char*  value_124  ;
    struct sNode* _inf_value9;
    struct sNothingNode* _inf_obj_value9;
    char*  exp_126  ;
    struct sNode* _inf_value10;
    struct sNothingNode* _inf_obj_value10;
    char*  exp_127  ;
    char*  exp2_128  ;
    char*  __dec_obj70  ;
    char*  def  ;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    char*  __dec_obj71  ;
    struct sNode* _inf_value11;
    struct sNothingNode* _inf_obj_value11;
    char*  exp_129  ;
    struct sNode* _inf_value12;
    struct sNothingNode* _inf_obj_value12;
    # 1792 "41module2.nc"
    if(charp_operator_equals(buf,"__c__")&&*info->p==123) {
        # 1447 "41module2.nc"
        block_text=(char* )come_increment_ref_count(skip_block(info,(_Bool)0), "41module2.nc", 1447, 1236);
        # 1448 "41module2.nc"
        block_text_len=strlen(block_text);
        # 1449 "41module2.nc"
        block_text_end=block_text+block_text_len;
        # 1451 "41module2.nc"
        p=block_text_end;
        # 1456 "41module2.nc"
        while(*p&&p>=block_text&&*p!=125) {
            # 1454 "41module2.nc"
            p--;
        }
        # 1456 "41module2.nc"
        p--;
        # 1458 "41module2.nc"
        __right_value0 = (void*)0;
        contents=(char* )come_increment_ref_count(charp_substring(block_text,1,p-block_text_end-1), "41module2.nc", 1458, 1237);
        # 1461 "41module2.nc"
        static int n=0;
        # 1462 "41module2.nc"
        n++;
        # 1463 "41module2.nc"
        __right_value0 = (void*)0;
        map$2char$phbuffer$ph_insert(info->previous_struct_definition,(char*)come_increment_ref_count(xsprintf("__c__\%s",((char* )(__right_value0=int_to_string(n)))), "41module2.nc", 1463, 1273),(struct buffer* )come_increment_ref_count(charp_to_buffer(contents), "41module2.nc", 1463, 1274),(_Bool)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1463, 1275));
        # 1465 "41module2.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1465, 1278, "struct sNode");
        _inf_obj_value2=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "41module2.nc", 1465, 1276, "struct sNothingNode* "), "41module2.nc", 1465, 1277),info))), "41module2.nc", 1465, 1279);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)), "41module2.nc", 1465, 1287);
        (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1465, 1288));
        (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1465, 1289));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1465, 1290);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1465, 1291):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1465, 1292):(void*)0);
        return __result_obj__0;
        (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1792, 1293));
        (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1792, 1294));
    }
    else if(charp_operator_equals(buf,"c_include")&&*info->p==123) {
        # 1468 "41module2.nc"
        __right_value0 = (void*)0;
        block_text_108=(char* )come_increment_ref_count(skip_block(info,(_Bool)0), "41module2.nc", 1468, 1295);
        # 1469 "41module2.nc"
        block_text_len_109=strlen(block_text_108);
        # 1470 "41module2.nc"
        block_text_end_110=block_text_108+block_text_len_109;
        # 1472 "41module2.nc"
        p_111=block_text_end_110;
        # 1477 "41module2.nc"
        while(*p_111&&p_111>=block_text_108&&*p_111!=125) {
            # 1475 "41module2.nc"
            p_111--;
        }
        # 1477 "41module2.nc"
        p_111--;
        # 1479 "41module2.nc"
        __right_value0 = (void*)0;
        contents_112=(char* )come_increment_ref_count(charp_substring(block_text_108,1,p_111-block_text_end_110-1), "41module2.nc", 1479, 1296);
        # 1482 "41module2.nc"
        static int n_113=0;
        # 1483 "41module2.nc"
        n_113++;
        # 1484 "41module2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        map$2char$phbuffer$ph_insert(info->c_include_definition,(char*)come_increment_ref_count(xsprintf("c_include\%s",((char* )(__right_value0=int_to_string(n_113)))), "41module2.nc", 1484, 1297),(struct buffer* )come_increment_ref_count(charp_to_buffer(contents_112), "41module2.nc", 1484, 1298),(_Bool)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1484, 1299));
        # 1486 "41module2.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1486, 1302, "struct sNode");
        _inf_obj_value3=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "41module2.nc", 1486, 1300, "struct sNothingNode* "), "41module2.nc", 1486, 1301),info))), "41module2.nc", 1486, 1303);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)), "41module2.nc", 1486, 1304);
        (block_text_108 = come_decrement_ref_count(block_text_108, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1486, 1305));
        (contents_112 = come_decrement_ref_count(contents_112, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1486, 1306));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1486, 1307);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1486, 1308):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1486, 1309):(void*)0);
        return __result_obj__0;
        (block_text_108 = come_decrement_ref_count(block_text_108, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1792, 1310));
        (contents_112 = come_decrement_ref_count(contents_112, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1792, 1311));
    }
    else if(charp_operator_equals(buf,"_Static_assert")||charp_operator_equals(buf,"static_assert")||charp_operator_equals(buf,"__STATIC_ASSERT")) {
        # 1489 "41module2.nc"
        expected_next_character(40,info);
        # 1491 "41module2.nc"
        no_comma=info->no_comma;
        # 1492 "41module2.nc"
        info->no_comma=(_Bool)1;
        # 1493 "41module2.nc"
        __right_value0 = (void*)0;
        exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "41module2.nc", 1493, 1312);
        # 1494 "41module2.nc"
        info->no_comma=no_comma;
        # 1496 "41module2.nc"
        expected_next_character(44,info);
        # 1498 "41module2.nc"
        __right_value0 = (void*)0;
        exp2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "41module2.nc", 1498, 1313);
        # 1500 "41module2.nc"
        expected_next_character(41,info);
        # 1502 "41module2.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1502, 1318, "struct sNode");
        _inf_obj_value4=(struct sStaticAssert*)come_increment_ref_count(((struct sStaticAssert*)(__right_value1=sStaticAssert_initialize((struct sStaticAssert* )come_increment_ref_count((struct sStaticAssert *)come_calloc(1, sizeof(struct sStaticAssert )*(1), "41module2.nc", 1502, 1314, "struct sStaticAssert* "), "41module2.nc", 1502, 1315),(struct sNode*)come_increment_ref_count(exp, "41module2.nc", 1502, 1316),(struct sNode*)come_increment_ref_count(exp2, "41module2.nc", 1502, 1317),info))), "41module2.nc", 1502, 1319);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value4)), "41module2.nc", 1502, 1320);
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 1502, 1321):(void*)0);
        ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 1502, 1322):(void*)0);
        come_call_finalizer(sStaticAssert_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1502, 1323);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1502, 1324):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1502, 1325):(void*)0);
        return __result_obj__0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 1792, 1326):(void*)0);
        ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 1792, 1327):(void*)0);
    }
    else if(charp_operator_equals(buf,"undef")) {
        # 1505 "41module2.nc"
        __right_value0 = (void*)0;
        word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "41module2.nc", 1505, 1328);
        # 1512 "41module2.nc"
        if(*info->p==59) {
            # 1508 "41module2.nc"
            info->p++;
            # 1509 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 1512 "41module2.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1512, 1332, "struct sNode");
        _inf_obj_value5=(struct sUndefNode*)come_increment_ref_count(((struct sUndefNode*)(__right_value1=sUndefNode_initialize((struct sUndefNode* )come_increment_ref_count((struct sUndefNode *)come_calloc(1, sizeof(struct sUndefNode )*(1), "41module2.nc", 1512, 1329, "struct sUndefNode* "), "41module2.nc", 1512, 1330),(char* )come_increment_ref_count(word, "41module2.nc", 1512, 1331),info))), "41module2.nc", 1512, 1333);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value5)), "41module2.nc", 1512, 1343);
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1512, 1344));
        come_call_finalizer(sUndefNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1512, 1345);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1512, 1346):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1512, 1347):(void*)0);
        return __result_obj__0;
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1792, 1348));
    }
    else if(charp_operator_equals(buf,"macro_include")) {
        # 1515 "41module2.nc"
        quoted=0;
        # 1524 "41module2.nc"
        if(*info->p==34) {
            # 1517 "41module2.nc"
            quoted=1;
            # 1518 "41module2.nc"
            info->p++;
        }
        else if(*info->p==60) {
            # 1521 "41module2.nc"
            info->p++;
        }
        # 1524 "41module2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_114=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "41module2.nc", 1524, 1349, "struct buffer* "), "41module2.nc", 1524, 1350)), "41module2.nc", 1524, 1351);
        # 1545 "41module2.nc"
        while(*info->p) {
            # 1543 "41module2.nc"
            if(*info->p==92) {
                # 1527 "41module2.nc"
                info->p++;
                # 1528 "41module2.nc"
                buffer_append_char(buf_114,*info->p);
                # 1529 "41module2.nc"
                info->p++;
            }
            else if(*info->p==34) {
                # 1532 "41module2.nc"
                info->p++;
                # 1533 "41module2.nc"
                break;
            }
            else if(*info->p==62) {
                # 1536 "41module2.nc"
                info->p++;
                # 1537 "41module2.nc"
                break;
            }
            else {
                # 1540 "41module2.nc"
                buffer_append_char(buf_114,*info->p);
                # 1541 "41module2.nc"
                info->p++;
            }
        }
        # 1545 "41module2.nc"
        __right_value0 = (void*)0;
        path=(char* )come_increment_ref_count(buffer_to_string(buf_114), "41module2.nc", 1545, 1352);
        # 1547 "41module2.nc"
        static int macro_include_id=0;
        # 1548 "41module2.nc"
        snap=macro_snapshot_create();
        # 1549 "41module2.nc"
        out=fopen("__ccpp_tmp","w");
        # 1551 "41module2.nc"
        incldue_file_neo_c(path,quoted,out);
        # 1553 "41module2.nc"
        fclose(out);
        # 1555 "41module2.nc"
        macro_defines=macro_snapshot_diff_defines(snap);
        # 1556 "41module2.nc"
        macro_snapshot_free(snap);
        # 1561 "41module2.nc"
        if(macro_defines&&*macro_defines) {
            # 1558 "41module2.nc"
            macro_include_id++;
            # 1559 "41module2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            map$2char$phbuffer$ph_insert(info->previous_struct_definition,(char*)come_increment_ref_count(xsprintf("__macro_include__\%s",((char* )(__right_value0=int_to_string(macro_include_id)))), "41module2.nc", 1559, 1353),(struct buffer* )come_increment_ref_count(charp_to_buffer(macro_defines), "41module2.nc", 1559, 1354),(_Bool)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1559, 1355));
        }
        # 1565 "41module2.nc"
        if(macro_defines) {
            # 1562 "41module2.nc"
            free(macro_defines);
        }
        # 1565 "41module2.nc"
        source=(struct buffer* )come_increment_ref_count(info->source, "41module2.nc", 1565, 1356);
        # 1566 "41module2.nc"
        p_115=info->p;
        # 1567 "41module2.nc"
        head_116=info->head;
        # 1568 "41module2.nc"
        end=info->end;
        # 1569 "41module2.nc"
        sname=(char* )come_increment_ref_count(info->sname, "41module2.nc", 1569, 1357);
        # 1570 "41module2.nc"
        sline=info->sline;
        # 1572 "41module2.nc"
        __right_value0 = (void*)0;
        __dec_obj62=info->source,
        info->source=(struct buffer* )come_increment_ref_count(charp_read("__ccpp_tmp"), "41module2.nc", 1572, 1359);
        come_call_finalizer(buffer_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc", 1572, 1358);
        # 1576 "41module2.nc"
        if(info->p==((void*)0)) {
            # 1574 "41module2.nc"
            info->p=info->source->buf;
        }
        # 1576 "41module2.nc"
        info->p=info->source->buf;
        # 1577 "41module2.nc"
        info->head=info->source->buf;
        # 1578 "41module2.nc"
        info->end=info->source->buf+info->source->len;
        # 1579 "41module2.nc"
        __right_value0 = (void*)0;
        __dec_obj63=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(path,"41module2.nc",1579), "41module2.nc", 1579, 1361);
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 1579, 1360);
        # 1580 "41module2.nc"
        info->sline=1;
        # 1582 "41module2.nc"
        transpile_toplevel((_Bool)0,info);
        # 1584 "41module2.nc"
        __dec_obj64=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source, "41module2.nc", 1584, 1363);
        come_call_finalizer(buffer_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc", 1584, 1362);
        # 1588 "41module2.nc"
        if(info->p==((void*)0)) {
            # 1586 "41module2.nc"
            info->p=info->source->buf;
        }
        # 1588 "41module2.nc"
        info->p=info->source->buf;
        # 1589 "41module2.nc"
        info->p=p_115;
        # 1590 "41module2.nc"
        info->head=head_116;
        # 1591 "41module2.nc"
        info->end=end;
        # 1592 "41module2.nc"
        __dec_obj65=info->sname,
        info->sname=(char* )come_increment_ref_count(sname, "41module2.nc", 1592, 1365);
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 1592, 1364);
        # 1593 "41module2.nc"
        info->sline=sline;
        # 1595 "41module2.nc"
        remove("__ccpp_tmp");
        # 1597 "41module2.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1597, 1368, "struct sNode");
        _inf_obj_value6=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "41module2.nc", 1597, 1366, "struct sNothingNode* "), "41module2.nc", 1597, 1367),info))), "41module2.nc", 1597, 1369);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)), "41module2.nc", 1597, 1370);
        come_call_finalizer(buffer_finalize, buf_114, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1597, 1371);
        (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1597, 1372));
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1597, 1373);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1597, 1374));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1597, 1375);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1597, 1376):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1597, 1377):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, buf_114, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1792, 1378);
        (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1792, 1379));
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1792, 1380);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1792, 1381));
    }
    else if(charp_operator_equals(buf,"if")) {
        # 1604 "41module2.nc"
        if(*info->p==40) {
            # 1601 "41module2.nc"
            info->p++;
            # 1602 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 1604 "41module2.nc"
        __right_value0 = (void*)0;
        reflection_condtional=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1604, 1382);
        # 1609 "41module2.nc"
        if(*info->p==41) {
            # 1606 "41module2.nc"
            info->p++;
            # 1607 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 1609 "41module2.nc"
        skip_spaces_and_lf(info);
        # 1611 "41module2.nc"
        match_=(_Bool)0;
        # 1621 "41module2.nc"
        if(string_operator_not_equals(reflection_condtional,"false")) {
            # 1613 "41module2.nc"
            expected_next_character(123,info);
            # 1614 "41module2.nc"
            transpile_toplevel((_Bool)1,info);
            # 1615 "41module2.nc"
            match_=(_Bool)1;
        }
        else {
            # 1618 "41module2.nc"
            __right_value0 = (void*)0;
            ((char* )(__right_value0=skip_block(info,(_Bool)0)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1618, 1383));
        }
        # 1621 "41module2.nc"
        skip_spaces_and_lf(info);
        # 1622 "41module2.nc"
        parse_sharp_v5(info);
        # 1655 "41module2.nc"
        while(1) {
            # 1653 "41module2.nc"
            if(parsecmp_forward("elif",info)) {
                # 1632 "41module2.nc"
                if(*info->p==40) {
                    # 1628 "41module2.nc"
                    info->p++;
                    # 1629 "41module2.nc"
                    skip_spaces_and_lf(info);
                }
                # 1632 "41module2.nc"
                __right_value0 = (void*)0;
                reflection_condtional_117=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1632, 1384);
                # 1638 "41module2.nc"
                if(*info->p==41) {
                    # 1635 "41module2.nc"
                    info->p++;
                    # 1636 "41module2.nc"
                    skip_spaces_and_lf(info);
                }
                # 1638 "41module2.nc"
                skip_spaces_and_lf(info);
                # 1649 "41module2.nc"
                if(!match_&&string_operator_not_equals(reflection_condtional_117,"false")) {
                    # 1641 "41module2.nc"
                    expected_next_character(123,info);
                    # 1642 "41module2.nc"
                    transpile_toplevel((_Bool)1,info);
                    # 1643 "41module2.nc"
                    match_=(_Bool)1;
                }
                else {
                    # 1646 "41module2.nc"
                    __right_value0 = (void*)0;
                    ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1646, 1385));
                    # 1647 "41module2.nc"
                    parse_sharp_v5(info);
                }
                (reflection_condtional_117 = come_decrement_ref_count(reflection_condtional_117, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1653, 1386));
            }
            else {
                # 1651 "41module2.nc"
                break;
            }
        }
        # 1668 "41module2.nc"
        if(parsecmp_forward("else",info)) {
            # 1656 "41module2.nc"
            skip_spaces_and_lf(info);
            # 1666 "41module2.nc"
            if(!match_) {
                # 1659 "41module2.nc"
                expected_next_character(123,info);
                # 1660 "41module2.nc"
                transpile_toplevel((_Bool)1,info);
            }
            else {
                # 1663 "41module2.nc"
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1663, 1387));
                # 1664 "41module2.nc"
                parse_sharp_v5(info);
            }
        }
        # 1668 "41module2.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1668, 1390, "struct sNode");
        _inf_obj_value7=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "41module2.nc", 1668, 1388, "struct sNothingNode* "), "41module2.nc", 1668, 1389),info))), "41module2.nc", 1668, 1391);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value7)), "41module2.nc", 1668, 1392);
        (reflection_condtional = come_decrement_ref_count(reflection_condtional, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1668, 1393));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1668, 1394);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1668, 1395):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1668, 1396):(void*)0);
        return __result_obj__0;
        (reflection_condtional = come_decrement_ref_count(reflection_condtional, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1792, 1397));
    }
    else if(charp_operator_equals(buf,"eval")) {
        # 1671 "41module2.nc"
        __right_value0 = (void*)0;
        value=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1671, 1398);
        # 1673 "41module2.nc"
        __right_value0 = (void*)0;
        source2=(struct buffer* )come_increment_ref_count(charp_to_buffer(value), "41module2.nc", 1673, 1399);
        # 1675 "41module2.nc"
        p_118=info->p;
        # 1676 "41module2.nc"
        source_119=(struct buffer* )come_increment_ref_count(info->source, "41module2.nc", 1676, 1400);
        # 1677 "41module2.nc"
        head_120=info->head;
        # 1678 "41module2.nc"
        end_121=info->end;
        # 1679 "41module2.nc"
        sname_122=(char* )come_increment_ref_count(info->sname, "41module2.nc", 1679, 1401);
        # 1680 "41module2.nc"
        sline_123=info->sline;
        # 1682 "41module2.nc"
        __dec_obj66=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source2, "41module2.nc", 1682, 1403);
        come_call_finalizer(buffer_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc", 1682, 1402);
        # 1686 "41module2.nc"
        if(info->p==((void*)0)) {
            # 1684 "41module2.nc"
            info->p=info->source->buf;
        }
        # 1686 "41module2.nc"
        info->p=info->source->buf;
        # 1687 "41module2.nc"
        info->head=source2->buf;
        # 1688 "41module2.nc"
        info->end=source2->buf+source2->len;
        # 1690 "41module2.nc"
        __right_value0 = (void*)0;
        __dec_obj67=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string("eval","41module2.nc",1690), "41module2.nc", 1690, 1405);
        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 1690, 1404);
        # 1691 "41module2.nc"
        info->sline=1;
        # 1693 "41module2.nc"
        transpile_toplevel((_Bool)0,info);
        # 1695 "41module2.nc"
        __dec_obj68=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source_119, "41module2.nc", 1695, 1407);
        come_call_finalizer(buffer_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc", 1695, 1406);
        # 1699 "41module2.nc"
        if(info->p==((void*)0)) {
            # 1697 "41module2.nc"
            info->p=info->source->buf;
        }
        # 1699 "41module2.nc"
        info->p=info->source->buf;
        # 1700 "41module2.nc"
        info->p=p_118;
        # 1701 "41module2.nc"
        info->head=head_120;
        # 1702 "41module2.nc"
        info->end=end_121;
        # 1704 "41module2.nc"
        __dec_obj69=info->sname,
        info->sname=(char* )come_increment_ref_count(sname_122, "41module2.nc", 1704, 1409);
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 1704, 1408);
        # 1705 "41module2.nc"
        info->sline=sline_123;
        # 1707 "41module2.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1707, 1412, "struct sNode");
        _inf_obj_value8=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "41module2.nc", 1707, 1410, "struct sNothingNode* "), "41module2.nc", 1707, 1411),info))), "41module2.nc", 1707, 1413);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)), "41module2.nc", 1707, 1414);
        (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1707, 1415));
        come_call_finalizer(buffer_finalize, source2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1707, 1416);
        come_call_finalizer(buffer_finalize, source_119, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1707, 1417);
        (sname_122 = come_decrement_ref_count(sname_122, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1707, 1418));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1707, 1419);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1707, 1420):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1707, 1421):(void*)0);
        return __result_obj__0;
        (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1792, 1422));
        come_call_finalizer(buffer_finalize, source2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1792, 1423);
        come_call_finalizer(buffer_finalize, source_119, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1792, 1424);
        (sname_122 = come_decrement_ref_count(sname_122, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1792, 1425));
    }
    else if(charp_operator_equals(buf,"var")) {
        # 1710 "41module2.nc"
        __right_value0 = (void*)0;
        var_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "41module2.nc", 1710, 1426);
        # 1712 "41module2.nc"
        expected_next_character(61,info);
        # 1714 "41module2.nc"
        __right_value0 = (void*)0;
        value_124=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1714, 1427);
        # 1716 "41module2.nc"
        map$2char$phchar$ph_insert(info->reflection_vars,(char* )come_increment_ref_count(var_name, "41module2.nc", 1716, 1449),(char* )come_increment_ref_count(value_124, "41module2.nc", 1716, 1450),(_Bool)0);
        # 1718 "41module2.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1718, 1453, "struct sNode");
        _inf_obj_value9=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "41module2.nc", 1718, 1451, "struct sNothingNode* "), "41module2.nc", 1718, 1452),info))), "41module2.nc", 1718, 1454);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)), "41module2.nc", 1718, 1455);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1718, 1456));
        (value_124 = come_decrement_ref_count(value_124, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1718, 1457));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1718, 1458);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1718, 1459):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1718, 1460):(void*)0);
        return __result_obj__0;
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1792, 1461));
        (value_124 = come_decrement_ref_count(value_124, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1792, 1462));
    }
    else if(charp_operator_equals(buf,"puts")) {
        # 1726 "41module2.nc"
        if(*info->p==40) {
            # 1722 "41module2.nc"
            info->p++;
            # 1723 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 1726 "41module2.nc"
        __right_value0 = (void*)0;
        exp_126=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1726, 1463);
        # 1728 "41module2.nc"
        puts(exp_126);
        # 1735 "41module2.nc"
        if(*info->p==41) {
            # 1731 "41module2.nc"
            info->p++;
            # 1732 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 1735 "41module2.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1735, 1466, "struct sNode");
        _inf_obj_value10=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "41module2.nc", 1735, 1464, "struct sNothingNode* "), "41module2.nc", 1735, 1465),info))), "41module2.nc", 1735, 1467);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)), "41module2.nc", 1735, 1468);
        (exp_126 = come_decrement_ref_count(exp_126, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1735, 1469));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1735, 1470);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1735, 1471):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1735, 1472):(void*)0);
        return __result_obj__0;
        (exp_126 = come_decrement_ref_count(exp_126, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1792, 1473));
    }
    else if(charp_operator_equals(buf,"macro_define")) {
        # 1743 "41module2.nc"
        if(*info->p==40) {
            # 1739 "41module2.nc"
            info->p++;
            # 1740 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 1743 "41module2.nc"
        __right_value0 = (void*)0;
        exp_127=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1743, 1474);
        # 1744 "41module2.nc"
        exp2_128=((void*)0);
        # 1752 "41module2.nc"
        if(*info->p==44) {
            # 1747 "41module2.nc"
            info->p++;
            # 1748 "41module2.nc"
            skip_spaces_and_lf(info);
            # 1749 "41module2.nc"
            __right_value0 = (void*)0;
            __dec_obj70=exp2_128,
            exp2_128=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1749, 1476);
            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 1749, 1475);
        }
        # 1757 "41module2.nc"
        if(*info->p==41) {
            # 1753 "41module2.nc"
            info->p++;
            # 1754 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 1757 "41module2.nc"
        skip_spaces_and_lf(info);
        # 1759 "41module2.nc"
        def=(char* )come_increment_ref_count(exp_127, "41module2.nc", 1759, 1477);
        # 1764 "41module2.nc"
        if(exp2_128) {
            # 1761 "41module2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj71=def,
            def=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value5=string_operator_add(exp_127,((char*)(__right_value4=xsprintf(" ")))))),exp2_128), "41module2.nc", 1761, 1479);
            __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 1761, 1478);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1761, 1480));
            (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1761, 1481));
            (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1761, 1482));
        }
        # 1768 "41module2.nc"
        if(def) {
            # 1765 "41module2.nc"
            macro_define(def);
        }
        # 1768 "41module2.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1768, 1485, "struct sNode");
        _inf_obj_value11=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "41module2.nc", 1768, 1483, "struct sNothingNode* "), "41module2.nc", 1768, 1484),info))), "41module2.nc", 1768, 1486);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)), "41module2.nc", 1768, 1487);
        (exp_127 = come_decrement_ref_count(exp_127, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1768, 1488));
        (exp2_128 = come_decrement_ref_count(exp2_128, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1768, 1489));
        (def = come_decrement_ref_count(def, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1768, 1490));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1768, 1491);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1768, 1492):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1768, 1493):(void*)0);
        return __result_obj__0;
        (exp_127 = come_decrement_ref_count(exp_127, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1792, 1494));
        (exp2_128 = come_decrement_ref_count(exp2_128, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1792, 1495));
        (def = come_decrement_ref_count(def, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1792, 1496));
    }
    else if(charp_operator_equals(buf,"macro_undef")) {
        # 1776 "41module2.nc"
        if(*info->p==40) {
            # 1772 "41module2.nc"
            info->p++;
            # 1773 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 1776 "41module2.nc"
        __right_value0 = (void*)0;
        exp_129=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1776, 1497);
        # 1783 "41module2.nc"
        if(*info->p==41) {
            # 1779 "41module2.nc"
            info->p++;
            # 1780 "41module2.nc"
            skip_spaces_and_lf(info);
        }
        # 1783 "41module2.nc"
        skip_spaces_and_lf(info);
        # 1789 "41module2.nc"
        if(exp_129) {
            # 1786 "41module2.nc"
            macro_undef(exp_129);
        }
        # 1789 "41module2.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1789, 1500, "struct sNode");
        _inf_obj_value12=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "41module2.nc", 1789, 1498, "struct sNothingNode* "), "41module2.nc", 1789, 1499),info))), "41module2.nc", 1789, 1501);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)), "41module2.nc", 1789, 1502);
        (exp_129 = come_decrement_ref_count(exp_129, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1789, 1503));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1789, 1504);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1789, 1505):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1789, 1506):(void*)0);
        return __result_obj__0;
        (exp_129 = come_decrement_ref_count(exp_129, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1792, 1507));
    }
    # 1792 "41module2.nc"
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=top_level_v1(buf,head,head_sline,info))), "41module2.nc", 1792, 1508);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1792, 1509):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1792, 1510):(void*)0);
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
    # 3889 "./neo-c.h"
    # 3895 "./neo-c.h"
    if(self==((void*)0)) {
        # 3892 "./neo-c.h"
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3892, 1238));
        come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3892, 1239);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3898 "./neo-c.h"
    if(self->len*10>=self->size) {
        # 3896 "./neo-c.h"
        map$2char$phbuffer$ph_rehash(self);
    }
    # 3898 "./neo-c.h"
    add_to_key_list=(_Bool)0;
    # 3899 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 3900 "./neo-c.h"
    hash=key_hash%self->size;
    # 3901 "./neo-c.h"
    it=hash;
    # 3961 "./neo-c.h"
    while((_Bool)1) {
        # 3959 "./neo-c.h"
        if(self->item_existance[it]) {
            # 3929 "./neo-c.h"
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                # 3909 "./neo-c.h"
                map$2char$phbuffer$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                # 3917 "./neo-c.h"
                if(1) {
                    # 3911 "./neo-c.h"
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3911, 1250));
                    # 3912 "./neo-c.h"
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3912, 1251);
                }
                else {
                    # 3915 "./neo-c.h"
                    self->keys[it]=key;
                }
                # 3924 "./neo-c.h"
                if(1) {
                    # 3918 "./neo-c.h"
                    come_call_finalizer(buffer_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3918, 1252);
                    # 3919 "./neo-c.h"
                    self->items[it]=(struct buffer* )come_increment_ref_count(item, "./neo-c.h", 3919, 1253);
                }
                else {
                    # 3922 "./neo-c.h"
                    self->items[it]=item;
                }
                # 3924 "./neo-c.h"
                self->hashes[it]=key_hash;
                # 3925 "./neo-c.h"
                add_to_key_list=(_Bool)1;
                # 3926 "./neo-c.h"
                break;
            }
            # 3932 "./neo-c.h"
            if(++it>=self->size) {
                # 3930 "./neo-c.h"
                it=0;
            }
            # 3937 "./neo-c.h"
            if(it==hash) {
                # 3933 "./neo-c.h"
                printf("unexpected error in map.insert\n");
                # 3934 "./neo-c.h"
                stackframe2(self);
                # 3935 "./neo-c.h"
                exit(2);
            }
        }
        else {
            # 3939 "./neo-c.h"
            self->item_existance[it]=(_Bool)1;
            # 3940 "./neo-c.h"
            self->hashes[it]=key_hash;
            # 3947 "./neo-c.h"
            if(1) {
                # 3942 "./neo-c.h"
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3942, 1254);
            }
            else {
                # 3945 "./neo-c.h"
                self->keys[it]=key;
            }
            # 3954 "./neo-c.h"
            if(1) {
                # 3948 "./neo-c.h"
                self->items[it]=(struct buffer* )come_increment_ref_count(item, "./neo-c.h", 3948, 1255);
            }
            else {
                # 3951 "./neo-c.h"
                self->items[it]=item;
            }
            # 3954 "./neo-c.h"
            self->len++;
            # 3955 "./neo-c.h"
            add_to_key_list=(_Bool)1;
            # 3957 "./neo-c.h"
            break;
        }
    }
    # 3965 "./neo-c.h"
    if(add_to_key_list) {
        # 3962 "./neo-c.h"
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 3962, 1270));
    }
    # 3965 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3965, 1271));
    come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3965, 1272);
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
    int i_105;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    # 3806 "./neo-c.h"
    # 3808 "./neo-c.h"
    old_size=self->size;
    # 3809 "./neo-c.h"
    size=self->size*10;
    # 3810 "./neo-c.h"
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3810, 1240, "char** "))), "./neo-c.h", 3810, 1241);
    # 3811 "./neo-c.h"
    __right_value0 = (void*)0;
    items=(struct buffer** )come_increment_ref_count(((struct buffer** )(__right_value0=(struct buffer* *)come_calloc(1, sizeof(struct buffer* )*(1*(size)), "./neo-c.h", 3811, 1242, "struct buffer** "))), "./neo-c.h", 3811, 1243);
    # 3812 "./neo-c.h"
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3812, 1244, "unsigned int*"))), "./neo-c.h", 3812, 1245);
    # 3813 "./neo-c.h"
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3813, 1246, "_Bool*"))), "./neo-c.h", 3813, 1247);
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
    for(i_105=0    ;i_105<old_size;i_105++){
        # 3826 "./neo-c.h"
        if(!self->item_existance[i_105]) {
            # 3823 "./neo-c.h"
            continue;
        }
        # 3826 "./neo-c.h"
        key_hash=self->hashes[i_105];
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
                keys[n]=self->keys[i_105];
                # 3846 "./neo-c.h"
                items[n]=self->items[i_105];
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
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3855, 1248));
    # 3856 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3856, 1249));
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

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj56  ;
    struct list_item$1char$ph* litem_106;
    char*  __dec_obj57  ;
    struct list_item$1char$ph* litem_107;
    char*  __dec_obj58  ;
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1615, 1256));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1619, 1257, "struct list_item$1char$ph*"))), "./neo-c.h", 1619, 1258);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj56=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1623, 1260);
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1623, 1259);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_106=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1629, 1261, "struct list_item$1char$ph*"))), "./neo-c.h", 1629, 1262);
        # 1631 "./neo-c.h"
        litem_106->prev=self->head;
        # 1632 "./neo-c.h"
        litem_106->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj57=litem_106->item,
        litem_106->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1633, 1264);
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1633, 1263);
        # 1635 "./neo-c.h"
        self->tail=litem_106;
        # 1636 "./neo-c.h"
        self->head->next=litem_106;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_107=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1639, 1265, "struct list_item$1char$ph*"))), "./neo-c.h", 1639, 1266);
        # 1641 "./neo-c.h"
        litem_107->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_107->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj58=litem_107->item,
        litem_107->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1643, 1268);
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1643, 1267);
        # 1645 "./neo-c.h"
        self->tail->next=litem_107;
        # 1646 "./neo-c.h"
        self->tail=litem_107;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1651, 1269));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNothingNode_finalize(struct sNothingNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_finalize"; neo_current_frame = &fr;
    # 1 "sNothingNode_finalize"
    # 3 "sNothingNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sNothingNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNothingNode_finalize", 2, 1280));
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
    # 3 "sNothingNode_clone"
    # 5 "sNothingNode_clone"
    if(self==(void*)0) {
        # 4 "sNothingNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sNothingNode_clone"
    result=(struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "sNothingNode_clone", 5, 1281, "struct sNothingNode* "), "sNothingNode_clone", 5, 1282);
    # 7 "sNothingNode_clone"
    if(self!=((void*)0)) {
        # 6 "sNothingNode_clone"
        result->sline=self->sline;
    }
    # 8 "sNothingNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sNothingNode_clone"
        __right_value0 = (void*)0;
        __dec_obj59=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNothingNode_clone", 7, 1283, "char* "), "sNothingNode_clone", 7, 1285);
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "sNothingNode_clone", 7, 1284);
    }
    # 9 "sNothingNode_clone"
    if(self!=((void*)0)) {
        # 8 "sNothingNode_clone"
        result->sline_real=self->sline_real;
    }
    # 9 "sNothingNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sNothingNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sNothingNode_clone}", 9, 1286);
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
    # 3 "sUndefNode_clone"
    # 5 "sUndefNode_clone"
    if(self==(void*)0) {
        # 4 "sUndefNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sUndefNode_clone"
    result=(struct sUndefNode* )come_increment_ref_count((struct sUndefNode *)come_calloc(1, sizeof(struct sUndefNode )*(1), "sUndefNode_clone", 5, 1334, "struct sUndefNode* "), "sUndefNode_clone", 5, 1335);
    # 7 "sUndefNode_clone"
    if(self!=((void*)0)) {
        # 6 "sUndefNode_clone"
        result->sline=self->sline;
    }
    # 8 "sUndefNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sUndefNode_clone"
        __right_value0 = (void*)0;
        __dec_obj60=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sUndefNode_clone", 7, 1336, "char* "), "sUndefNode_clone", 7, 1338);
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0, "sUndefNode_clone", 7, 1337);
    }
    # 9 "sUndefNode_clone"
    if(self!=((void*)0)) {
        # 8 "sUndefNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sUndefNode_clone"
    if(self!=((void*)0)&&self->str!=((void*)0)) {
        # 9 "sUndefNode_clone"
        __right_value0 = (void*)0;
        __dec_obj61=result->str,
        result->str=(char* )come_increment_ref_count((char* )come_memdup(self->str, "sUndefNode_clone", 9, 1339, "char* "), "sUndefNode_clone", 9, 1341);
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "sUndefNode_clone", 9, 1340);
    }
    # 10 "sUndefNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sUndefNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sUndefNode_clone}", 10, 1342);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char*  key  , char*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phchar$ph* __result_obj__0;
    _Bool add_to_key_list;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 3889 "./neo-c.h"
    # 3895 "./neo-c.h"
    if(self==((void*)0)) {
        # 3892 "./neo-c.h"
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3892, 1428));
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3892, 1429));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3898 "./neo-c.h"
    if(self->len*10>=self->size) {
        # 3896 "./neo-c.h"
        map$2char$phchar$ph_rehash(self);
    }
    # 3898 "./neo-c.h"
    add_to_key_list=(_Bool)0;
    # 3899 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 3900 "./neo-c.h"
    hash=key_hash%self->size;
    # 3901 "./neo-c.h"
    it=hash;
    # 3961 "./neo-c.h"
    while((_Bool)1) {
        # 3959 "./neo-c.h"
        if(self->item_existance[it]) {
            # 3929 "./neo-c.h"
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                # 3909 "./neo-c.h"
                map$2char$phchar$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                # 3917 "./neo-c.h"
                if(1) {
                    # 3911 "./neo-c.h"
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3911, 1440));
                    # 3912 "./neo-c.h"
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3912, 1441);
                }
                else {
                    # 3915 "./neo-c.h"
                    self->keys[it]=key;
                }
                # 3924 "./neo-c.h"
                if(1) {
                    # 3918 "./neo-c.h"
                    (self->items[it] = come_decrement_ref_count(self->items[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3918, 1442));
                    # 3919 "./neo-c.h"
                    self->items[it]=(char* )come_increment_ref_count(item, "./neo-c.h", 3919, 1443);
                }
                else {
                    # 3922 "./neo-c.h"
                    self->items[it]=item;
                }
                # 3924 "./neo-c.h"
                self->hashes[it]=key_hash;
                # 3925 "./neo-c.h"
                add_to_key_list=(_Bool)1;
                # 3926 "./neo-c.h"
                break;
            }
            # 3932 "./neo-c.h"
            if(++it>=self->size) {
                # 3930 "./neo-c.h"
                it=0;
            }
            # 3937 "./neo-c.h"
            if(it==hash) {
                # 3933 "./neo-c.h"
                printf("unexpected error in map.insert\n");
                # 3934 "./neo-c.h"
                stackframe2(self);
                # 3935 "./neo-c.h"
                exit(2);
            }
        }
        else {
            # 3939 "./neo-c.h"
            self->item_existance[it]=(_Bool)1;
            # 3940 "./neo-c.h"
            self->hashes[it]=key_hash;
            # 3947 "./neo-c.h"
            if(1) {
                # 3942 "./neo-c.h"
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3942, 1444);
            }
            else {
                # 3945 "./neo-c.h"
                self->keys[it]=key;
            }
            # 3954 "./neo-c.h"
            if(1) {
                # 3948 "./neo-c.h"
                self->items[it]=(char* )come_increment_ref_count(item, "./neo-c.h", 3948, 1445);
            }
            else {
                # 3951 "./neo-c.h"
                self->items[it]=item;
            }
            # 3954 "./neo-c.h"
            self->len++;
            # 3955 "./neo-c.h"
            add_to_key_list=(_Bool)1;
            # 3957 "./neo-c.h"
            break;
        }
    }
    # 3965 "./neo-c.h"
    if(add_to_key_list) {
        # 3962 "./neo-c.h"
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 3962, 1446));
    }
    # 3965 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3965, 1447));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3965, 1448));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_rehash"; neo_current_frame = &fr;
    int old_size;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    char**  items  ;
    unsigned int* hashes;
    _Bool* item_existance;
    int i;
    int len;
    int i_125;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    # 3806 "./neo-c.h"
    # 3808 "./neo-c.h"
    old_size=self->size;
    # 3809 "./neo-c.h"
    size=self->size*10;
    # 3810 "./neo-c.h"
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3810, 1430, "char** "))), "./neo-c.h", 3810, 1431);
    # 3811 "./neo-c.h"
    __right_value0 = (void*)0;
    items=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3811, 1432, "char** "))), "./neo-c.h", 3811, 1433);
    # 3812 "./neo-c.h"
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3812, 1434, "unsigned int*"))), "./neo-c.h", 3812, 1435);
    # 3813 "./neo-c.h"
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3813, 1436, "_Bool*"))), "./neo-c.h", 3813, 1437);
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
    for(i_125=0    ;i_125<old_size;i_125++){
        # 3826 "./neo-c.h"
        if(!self->item_existance[i_125]) {
            # 3823 "./neo-c.h"
            continue;
        }
        # 3826 "./neo-c.h"
        key_hash=self->hashes[i_125];
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
                keys[n]=self->keys[i_125];
                # 3846 "./neo-c.h"
                items[n]=self->items[i_125];
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
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3855, 1438));
    # 3856 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3856, 1439));
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

static void map$2char$phchar$ph_remove_ordered_entry(struct map$2char$phchar$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    # 3434 "./neo-c.h"
    pos=map$2char$phchar$ph_key_position(self,key,by_pointer);
    # 3438 "./neo-c.h"
    if(pos>=0) {
        # 3436 "./neo-c.h"
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phchar$ph_key_position(struct map$2char$phchar$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_key_position"; neo_current_frame = &fr;
    int pos;
    struct list_item$1char$ph* it;
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

