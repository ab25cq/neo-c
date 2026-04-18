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
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
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
static struct sType*  normalize_type_for_auto_clone(struct sType*  type  , struct sInfo*  info  );
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static int pointer_level_for_auto_clone(struct sType*  type  );
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun*  v1  , char*  v2  );
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer);
static void sGenericsFun_finalize(struct sGenericsFun*  self  );
static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject*  self  );
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void CVALUE_finalize(struct CVALUE*  self  );
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
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
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static void sClass_finalize(struct sClass*  self  );
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
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
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
static struct sGenericsFun*  map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  );
static struct sGenericsFun*  map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  );
struct tuple2$2sFun$pchar$ph* create_compare_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
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
static struct sType*  normalize_type_for_auto_clone(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "normalize_type_for_auto_clone"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    # 5 "43function3.nc"
    result=(struct sType* )come_increment_ref_count(normalize_loadvar_type_for_compare(type,info), "43function3.nc", 5, 1);
    # 11 "43function3.nc"
    if(result==((void*)0)) {
        # 8 "43function3.nc"
                __result_obj__0 = (struct sType* )come_increment_ref_count(((void*)0), "43function3.nc", 8, 2);
        come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 8, 35);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "43function3.nc}", 8, 36);
        return __result_obj__0;
    }
    # 11 "43function3.nc"
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sType* )come_increment_ref_count(((struct sType* )(__right_value0=expand_typedef_for_assign((struct sType* )come_increment_ref_count(result, "43function3.nc", 11, 37),info))), "43function3.nc", 11, 38);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 11, 39);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 11, 40);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "43function3.nc}", 11, 41);
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

static int pointer_level_for_auto_clone(struct sType*  type  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "pointer_level_for_auto_clone"; neo_current_frame = &fr;
    # 20 "43function3.nc"
    if(type==((void*)0)) {
        # 17 "43function3.nc"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 22 "43function3.nc"
        neo_current_frame = fr.prev;
    return type->mPointerNum+(((type->mPointerNum==0)?(type->mArrayPointerNum):(0)))+(((type->mArrayPointerType)?(1):(0)));
    neo_current_frame = fr.prev;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_cloner_automatically"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    struct sClass*  current_stack_frame_struct  ;
    struct sFun*  caller_fun  ;
    struct buffer*  if_expression_buffer  ;
    struct buffer*  __dec_obj2  ;
    struct buffer*  loop_expression_buffer  ;
    struct buffer*  __dec_obj3  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj4  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char*  last_code  ;
    char*  __dec_obj5  ;
    char*  last_code2  ;
    char*  __dec_obj6  ;
    char*  sname_top  ;
    int sline_top;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    _Bool no_output_come_code;
    struct sFun*  cloner  ;
    char*  real_fun_name  ;
    struct sType*  type2  ;
    struct sType*  normalized_type  ;
    struct sType*  clone_type  ;
    struct sClass*  klass  ;
    int pointer_level;
    char*  fun_name2  ;
    char*  none_generics_name  ;
    struct sType*  obj_type  ;
    char*  __dec_obj7  ;
    char*  fun_name3  ;
    struct sGenericsFun*  generics_fun  ;
    struct tuple2$2char$ph_Bool$* multiple_assign_var1
;    char*  name  =0;
    _Bool err=0;
    char*  __dec_obj8  ;
    char*  __dec_obj9  ;
    char*  __dec_obj10  ;
    struct buffer*  __dec_obj11  ;
    struct buffer*  __dec_obj12  ;
    struct buffer*  __dec_obj13  ;
    struct list$1sRightValueObject$ph* __dec_obj14;
    struct list$1CVALUE$ph* __dec_obj15;
    char*  __dec_obj16  ;
    char*  __dec_obj17  ;
    int i;
    char*  new_fun_name  ;
    char*  __dec_obj18  ;
    char*  __dec_obj19  ;
    struct buffer*  source  ;
    struct sType*  target_type  ;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_3;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var2
;    char*  name_11  =0;
    struct sType*  field_type  =0;
    struct sType*  field_type2  ;
    struct sType*  __dec_obj54  ;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_4;
    struct tuple2$2char$phsType$ph* it_14;
    struct tuple2$2char$phsType$ph* multiple_assign_var3
;    char*  name_15  =0;
    struct sType*  field_type_16  =0;
    struct sType*  field_type2_17  ;
    struct sType*  __dec_obj55  ;
    char*  user_real_fun_name  ;
    struct sFun*  user_cloner  ;
    char* p;
    int sline;
    char*  sname  ;
    struct buffer*  source3  ;
    char* head;
    struct buffer*  __dec_obj56  ;
    char*  __dec_obj57  ;
    struct sBlock*  block  ;
    struct sType*  result_type  ;
    char*  name_21  ;
    struct sType*  self_type  ;
    struct sType*  __list_values1__[1]  ;
    struct list$1sType$ph* param_types;
    char*  __list_values2__[1]  ;
    void* __right_value2 = (void*)0;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun*  fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value1;
    struct sFunNode* _inf_obj_value1;
    struct sNode* node;
    _Bool Value;
    char*  __dec_obj96  ;
    struct buffer*  __dec_obj97  ;
    char*  __dec_obj98  ;
    char*  __dec_obj99  ;
    char*  __dec_obj100  ;
    struct buffer*  __dec_obj101  ;
    struct buffer*  __dec_obj102  ;
    struct buffer*  __dec_obj103  ;
    struct list$1sRightValueObject$ph* __dec_obj104;
    struct list$1CVALUE$ph* __dec_obj105;
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
    memset(&cloner, 0, sizeof(cloner));
    memset(&real_fun_name, 0, sizeof(real_fun_name));
    memset(&type2, 0, sizeof(type2));
    memset(&normalized_type, 0, sizeof(normalized_type));
    memset(&clone_type, 0, sizeof(clone_type));
    memset(&klass, 0, sizeof(klass));
    memset(&pointer_level, 0, sizeof(pointer_level));
    memset(&fun_name2, 0, sizeof(fun_name2));
    memset(&none_generics_name, 0, sizeof(none_generics_name));
    memset(&obj_type, 0, sizeof(obj_type));
    memset(&fun_name3, 0, sizeof(fun_name3));
    memset(&generics_fun, 0, sizeof(generics_fun));
    memset(&i, 0, sizeof(i));
    memset(&new_fun_name, 0, sizeof(new_fun_name));
    memset(&source, 0, sizeof(source));
    memset(&target_type, 0, sizeof(target_type));
    memset(&_o2_saved_3, 0, sizeof(_o2_saved_3));
    memset(&it, 0, sizeof(it));
    memset(&field_type2, 0, sizeof(field_type2));
    memset(&_o2_saved_4, 0, sizeof(_o2_saved_4));
    memset(&it_14, 0, sizeof(it_14));
    memset(&field_type2_17, 0, sizeof(field_type2_17));
    memset(&user_real_fun_name, 0, sizeof(user_real_fun_name));
    memset(&user_cloner, 0, sizeof(user_cloner));
    memset(&p, 0, sizeof(p));
    memset(&sline, 0, sizeof(sline));
    memset(&sname, 0, sizeof(sname));
    memset(&source3, 0, sizeof(source3));
    memset(&head, 0, sizeof(head));
    memset(&block, 0, sizeof(block));
    memset(&result_type, 0, sizeof(result_type));
    memset(&name_21, 0, sizeof(name_21));
    memset(&self_type, 0, sizeof(self_type));
    memset(&param_types, 0, sizeof(param_types));
    memset(&param_names, 0, sizeof(param_names));
    memset(&param_default_parametors, 0, sizeof(param_default_parametors));
    memset(&fun2, 0, sizeof(fun2));
    memset(&fun, 0, sizeof(fun));
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    # 32 "43function3.nc"
    if(string_operator_equals(type->mClass->mName,"void")) {
        # 28 "43function3.nc"
                __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "43function3.nc", 28, 42, "struct tuple2$2sFun$pchar$ph"), "43function3.nc", 259, 50),(struct sFun* )((void*)0),(char* )come_increment_ref_count((char* )((void*)0), "43function3.nc", 259, 51)))), "43function3.nc", 28, 52);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 259, 53);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "43function3.nc}", 28, 54);
        return __result_obj__0;
    }
    # 32 "43function3.nc"
    current_stack_frame_struct=info->current_stack_frame_struct;
    # 33 "43function3.nc"
    info->current_stack_frame_struct=((void*)0);
    # 34 "43function3.nc"
    caller_fun=info->caller_fun;
    # 35 "43function3.nc"
    info->caller_fun=info->come_fun;
    # 40 "43function3.nc"
    __right_value0 = (void*)0;
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "43function3.nc", 40, 55);
    # 41 "43function3.nc"
    __dec_obj2=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 41, 56);
    # 42 "43function3.nc"
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "43function3.nc", 42, 57);
    # 43 "43function3.nc"
    __dec_obj3=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 43, 58);
    # 44 "43function3.nc"
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "43function3.nc", 44, 59);
    # 45 "43function3.nc"
    __dec_obj4=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 45, 60);
    # 47 "43function3.nc"
    right_value_max=info->right_value_max;
    # 48 "43function3.nc"
    right_value_num=info->right_value_num;
    # 49 "43function3.nc"
    max_conditional=info->max_conditional;
    # 50 "43function3.nc"
    num_conditional=info->num_conditional;
    # 51 "43function3.nc"
    in_conditional=info->in_conditional;
    # 52 "43function3.nc"
    info->in_conditional=(_Bool)0;
    # 54 "43function3.nc"
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "43function3.nc", 54, 61);
    # 55 "43function3.nc"
    __dec_obj5=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 55, 62);
    # 56 "43function3.nc"
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "43function3.nc", 56, 63);
    # 57 "43function3.nc"
    __dec_obj6=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 57, 64);
    # 59 "43function3.nc"
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"43function3.nc",59), "43function3.nc", 59, 65);
    # 60 "43function3.nc"
    sline_top=info->sline;
    # 62 "43function3.nc"
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "43function3.nc", 62, 66);
    # 63 "43function3.nc"
    right_value_objects=info->right_value_objects;
    # 65 "43function3.nc"
    no_output_come_code=info->no_output_come_code;
    # 66 "43function3.nc"
    info->no_output_come_code=(_Bool)0;
    # 33 "43function3.nc"
    cloner=((void*)0);
    # 35 "43function3.nc"
    __right_value0 = (void*)0;
    real_fun_name=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1), "43function3.nc", 35, 67);
    # 37 "43function3.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,type,info), "43function3.nc", 37, 68);
    # 39 "43function3.nc"
    type=type2;
    # 43 "43function3.nc"
    __right_value0 = (void*)0;
    normalized_type=(struct sType* )come_increment_ref_count(normalize_type_for_auto_clone(type,info), "43function3.nc", 43, 69);
    # 44 "43function3.nc"
    clone_type=type;
    # 48 "43function3.nc"
    if(normalized_type) {
        # 46 "43function3.nc"
        clone_type=normalized_type;
    }
    # 48 "43function3.nc"
    klass=clone_type->mClass;
    # 49 "43function3.nc"
    pointer_level=pointer_level_for_auto_clone(clone_type);
    # 51 "43function3.nc"
    # 102 "43function3.nc"
    if(list$1sType$ph_length(type->mGenericsTypes)>0) {
        # 54 "43function3.nc"
        __right_value0 = (void*)0;
        none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type->mClass->mName), "43function3.nc", 54, 70);
        # 56 "43function3.nc"
        __right_value0 = (void*)0;
        obj_type=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "43function3.nc", 56, 71);
        # 58 "43function3.nc"
        __right_value0 = (void*)0;
        __dec_obj7=fun_name2,
        fun_name2=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1), "43function3.nc", 58, 73);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 58, 72);
        # 59 "43function3.nc"
        __right_value0 = (void*)0;
        fun_name3=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "43function3.nc", 59, 74);
        # 61 "43function3.nc"
        __right_value0 = (void*)0;
        generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0),(_Bool)0)));
        # 79 "43function3.nc"
        if(generics_fun) {
            # 64 "43function3.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            multiple_assign_var1=((struct tuple2$2char$ph_Bool$*)(__right_value1=create_generics_fun((char* )come_increment_ref_count(__builtin_string(fun_name2,"43function3.nc",64), "43function3.nc", 64, 100),generics_fun,obj_type,info)));
            name=(char* )come_increment_ref_count(multiple_assign_var1->v1, "43function3.nc", 64, 101);
            err=multiple_assign_var1->v2;
            come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 64, 103);
            # 73 "43function3.nc"
            if(!err) {
                # 71 "43function3.nc"
                if(string_operator_equals(type->mClass->mName,"void")) {
                    # 69 "43function3.nc"
                    info->no_output_come_code=no_output_come_code;
                    # 70 "43function3.nc"
                    __right_value0 = (void*)0;
                    __dec_obj8=info->sname,
                    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"43function3.nc",70), "43function3.nc", 70, 105);
                    __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 70, 104);
                    # 71 "43function3.nc"
                    info->sline=sline_top;
                    # 73 "43function3.nc"
                    __dec_obj9=info->module->mLastCode,
                    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "43function3.nc", 73, 107);
                    __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 73, 106);
                    # 74 "43function3.nc"
                    __dec_obj10=info->module->mLastCode2,
                    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "43function3.nc", 74, 109);
                    __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 74, 108);
                    # 76 "43function3.nc"
                    info->caller_fun=caller_fun;
                    # 80 "43function3.nc"
                    info->right_value_max=right_value_max;
                    # 81 "43function3.nc"
                    info->right_value_num=right_value_num;
                    # 82 "43function3.nc"
                    info->num_conditional=num_conditional;
                    # 83 "43function3.nc"
                    info->max_conditional=max_conditional;
                    # 84 "43function3.nc"
                    info->in_conditional=in_conditional;
                    # 85 "43function3.nc"
                    __dec_obj11=info->if_expression_buffer,
                    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "43function3.nc", 85, 111);
                    come_call_finalizer(buffer_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 85, 110);
                    # 86 "43function3.nc"
                    __dec_obj12=info->loop_expression_buffer,
                    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "43function3.nc", 86, 113);
                    come_call_finalizer(buffer_finalize, __dec_obj12,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 86, 112);
                    # 87 "43function3.nc"
                    __dec_obj13=info->paren_block_buffer,
                    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "43function3.nc", 87, 115);
                    come_call_finalizer(buffer_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 87, 114);
                    # 88 "43function3.nc"
                    info->current_stack_frame_struct=current_stack_frame_struct;
                    # 89 "43function3.nc"
                    __dec_obj14=info->right_value_objects,
                    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "43function3.nc", 2, 124);
                    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 2, 123);
                    # 90 "43function3.nc"
                    __dec_obj15=info->stack,
                    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "43function3.nc", 6, 133);
                    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 6, 132);
                    # 69 "43function3.nc"
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "43function3.nc", 69, 134, "struct tuple2$2sFun$pchar$ph"), "43function3.nc", 69, 135),(struct sFun* )((void*)0),(char* )come_increment_ref_count((char* )((void*)0), "43function3.nc", 69, 136)))), "43function3.nc", 69, 137);
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 69, 138));
                    (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 69, 139));
                    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 69, 140);
                    (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 69, 141));
                    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 69, 142);
                    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 69, 143);
                    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 69, 144);
                    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 69, 145));
                    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 69, 146));
                    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 69, 147));
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 6, 149);
                    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 6, 150));
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 6, 151);
                    come_call_finalizer(sType_finalize, normalized_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 6, 152);
                    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 6, 153));
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 69, 154);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "43function3.nc}", 6, 155);
                    return __result_obj__0;
                }
            }
            # 73 "43function3.nc"
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 79, 212));
        }
        else {
            # 76 "43function3.nc"
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
        # 79 "43function3.nc"
        __dec_obj16=real_fun_name,
        real_fun_name=(char* )come_increment_ref_count(fun_name2, "43function3.nc", 79, 214);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 79, 213);
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 102, 215));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 102, 216);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 102, 217));
    }
    else {
        # 82 "43function3.nc"
        __right_value0 = (void*)0;
        __dec_obj17=fun_name2,
        fun_name2=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1), "43function3.nc", 82, 219);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 82, 218);
        # 84 "43function3.nc"
        # 95 "43function3.nc"
        for(i=128-1        ;i>=1;i--){
            # 86 "43function3.nc"
            __right_value0 = (void*)0;
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i), "43function3.nc", 86, 220);
            # 87 "43function3.nc"
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            # 93 "43function3.nc"
            if(cloner) {
                # 90 "43function3.nc"
                __right_value0 = (void*)0;
                __dec_obj18=fun_name2,
                fun_name2=(char* )come_increment_ref_count(__builtin_string(new_fun_name,"43function3.nc",90), "43function3.nc", 90, 222);
                __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 90, 221);
                # 91 "43function3.nc"
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 91, 223));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 95, 224));
        }
        # 99 "43function3.nc"
        if(cloner==((void*)0)) {
            # 96 "43function3.nc"
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
        # 99 "43function3.nc"
        __dec_obj19=real_fun_name,
        real_fun_name=(char* )come_increment_ref_count(fun_name2, "43function3.nc", 99, 226);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 99, 225);
    }
    # 269 "43function3.nc"
    if(cloner==((void*)0)&&!klass->mNumber&&pointer_level>0) {
        # 104 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "43function3.nc", 104, 227, "struct buffer* "), "43function3.nc", 104, 228)), "43function3.nc", 104, 229);
        # 105 "43function3.nc"
        buffer_append_str(source,"{\n");
        # 197 "43function3.nc"
        if(pointer_level>1||clone_type->mFunctionPointerNum>0) {
            # 108 "43function3.nc"
            buffer_append_str(source,"if(self == (void*)0) { return (void*)0; }\n");
            # 109 "43function3.nc"
            buffer_append_str(source,"return dummy_heap self;");
        }
        else {
            # 112 "43function3.nc"
            __right_value0 = (void*)0;
            target_type=(struct sType* )come_increment_ref_count(sType_clone(clone_type), "43function3.nc", 112, 403);
            # 113 "43function3.nc"
            target_type->mPointerNum=0;
            # 114 "43function3.nc"
            target_type->mArrayPointerNum=0;
            # 115 "43function3.nc"
            target_type->mArrayPointerType=(_Bool)0;
            # 116 "43function3.nc"
            target_type->mFunctionPointerNum=0;
            # 118 "43function3.nc"
            buffer_append_str(source,"\nusing unsafe;\n");
            # 119 "43function3.nc"
            buffer_append_str(source,"if(self == (void*)0) { return (void*)0; }\n");
            # 120 "43function3.nc"
            __right_value0 = (void*)0;
            buffer_append_format(source,"var result = new %s;\n",((char* )(__right_value0=make_type_name_string(target_type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "43function3.nc", 120, 404));
            # 183 "43function3.nc"
            if(klass->mProtocol) {
                # 123 "43function3.nc"
                const char* name_8="_protocol_obj";
                # 124 "43function3.nc"
                char source2[1024];
                memset(&source2, 0, sizeof(source2));
                # 125 "43function3.nc"
                snprintf(source2,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
                # 127 "43function3.nc"
                buffer_append_str(source,source2);
                # 129 "43function3.nc"
                __right_value0 = (void*)0;
                klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
                # 152 "43function3.nc"
                for(_o2_saved_3=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields, "43function3.nc", 130, 443),it=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_3)                ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_3);it=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_3)){
                    # 131 "43function3.nc"
                    multiple_assign_var2=it;
                    name_11=(char* )come_increment_ref_count(multiple_assign_var2->v1, "43function3.nc", 131, 444);
                    field_type=(struct sType* )come_increment_ref_count(multiple_assign_var2->v2, "43function3.nc", 131, 445);
                    # 132 "43function3.nc"
                    __right_value0 = (void*)0;
                    field_type2=(struct sType* )come_increment_ref_count(normalize_type_for_auto_clone(field_type,info), "43function3.nc", 132, 446);
                    # 137 "43function3.nc"
                    if(field_type2==((void*)0)) {
                        # 134 "43function3.nc"
                        __right_value0 = (void*)0;
                        __dec_obj54=field_type2,
                        field_type2=(struct sType* )come_increment_ref_count(sType_clone(field_type), "43function3.nc", 134, 448);
                        come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 134, 447);
                    }
                    # 151 "43function3.nc"
                    if(string_operator_equals(name_11,"_protocol_obj")) {
                    }
                    else if(list$1sNode$ph_length(field_type2->mArrayNum)>0) {
                        # 140 "43function3.nc"
                        char source2_12[1024];
                        memset(&source2_12, 0, sizeof(source2_12));
                        # 141 "43function3.nc"
                        snprintf(source2_12,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_11,name_11,name_11);
                        # 143 "43function3.nc"
                        buffer_append_str(source,source2_12);
                    }
                    else {
                        # 146 "43function3.nc"
                        char source2_13[1024];
                        memset(&source2_13, 0, sizeof(source2_13));
                        # 147 "43function3.nc"
                        snprintf(source2_13,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_11,name_11);
                        # 149 "43function3.nc"
                        buffer_append_str(source,source2_13);
                    }
                    (name_11 = come_decrement_ref_count(name_11, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 152, 449));
                    come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 152, 450);
                    come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 152, 451);
                }
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 183, 452);
            }
            else {
                # 154 "43function3.nc"
                __right_value0 = (void*)0;
                klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
                # 181 "43function3.nc"
                for(_o2_saved_4=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields, "43function3.nc", 155, 453),it_14=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_4)                ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_4);it_14=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_4)){
                    # 156 "43function3.nc"
                    multiple_assign_var3=it_14;
                    name_15=(char* )come_increment_ref_count(multiple_assign_var3->v1, "43function3.nc", 156, 454);
                    field_type_16=(struct sType* )come_increment_ref_count(multiple_assign_var3->v2, "43function3.nc", 156, 455);
                    # 157 "43function3.nc"
                    __right_value0 = (void*)0;
                    field_type2_17=(struct sType* )come_increment_ref_count(normalize_type_for_auto_clone(field_type_16,info), "43function3.nc", 157, 456);
                    # 162 "43function3.nc"
                    if(field_type2_17==((void*)0)) {
                        # 159 "43function3.nc"
                        __right_value0 = (void*)0;
                        __dec_obj55=field_type2_17,
                        field_type2_17=(struct sType* )come_increment_ref_count(sType_clone(field_type_16), "43function3.nc", 159, 458);
                        come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 159, 457);
                    }
                    # 180 "43function3.nc"
                    if(field_type2_17->mHeap) {
                        # 163 "43function3.nc"
                        char source2_18[1024];
                        memset(&source2_18, 0, sizeof(source2_18));
                        # 164 "43function3.nc"
                        snprintf(source2_18,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_15,name_15,name_15);
                        # 166 "43function3.nc"
                        buffer_append_str(source,source2_18);
                    }
                    else if(list$1sNode$ph_length(field_type2_17->mArrayNum)>0) {
                        # 169 "43function3.nc"
                        char source2_19[1024];
                        memset(&source2_19, 0, sizeof(source2_19));
                        # 170 "43function3.nc"
                        snprintf(source2_19,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_15,name_15,name_15);
                        # 172 "43function3.nc"
                        buffer_append_str(source,source2_19);
                    }
                    else {
                        # 175 "43function3.nc"
                        char source2_20[1024];
                        memset(&source2_20, 0, sizeof(source2_20));
                        # 176 "43function3.nc"
                        snprintf(source2_20,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_15,name_15);
                        # 178 "43function3.nc"
                        buffer_append_str(source,source2_20);
                    }
                    (name_15 = come_decrement_ref_count(name_15, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 181, 459));
                    come_call_finalizer(sType_finalize, field_type_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 181, 460);
                    come_call_finalizer(sType_finalize, field_type2_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 181, 461);
                }
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 183, 462);
            }
            # 183 "43function3.nc"
            __right_value0 = (void*)0;
            user_real_fun_name=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,"user_clone",info,(_Bool)1), "43function3.nc", 183, 463);
            # 184 "43function3.nc"
            __right_value0 = (void*)0;
            user_cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name)));
            # 195 "43function3.nc"
            buffer_append_format(source,"return result;");
            come_call_finalizer(sType_finalize, target_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 197, 464);
            (user_real_fun_name = come_decrement_ref_count(user_real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 197, 465));
        }
        # 197 "43function3.nc"
        buffer_append_char(source,125);
        # 199 "43function3.nc"
        p=info->p;
        # 200 "43function3.nc"
        sline=info->sline;
        # 201 "43function3.nc"
        sname=(char* )come_increment_ref_count(info->sname, "43function3.nc", 201, 466);
        # 202 "43function3.nc"
        source3=(struct buffer* )come_increment_ref_count(info->source, "43function3.nc", 202, 467);
        # 203 "43function3.nc"
        head=info->head;
        # 205 "43function3.nc"
        __dec_obj56=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source, "43function3.nc", 205, 469);
        come_call_finalizer(buffer_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 205, 468);
        # 209 "43function3.nc"
        if(info->p==((void*)0)) {
            # 207 "43function3.nc"
            info->p=info->source->buf;
        }
        # 209 "43function3.nc"
        info->p=info->source->buf;
        # 210 "43function3.nc"
        info->head=info->source->buf;
        # 212 "43function3.nc"
        __right_value0 = (void*)0;
        __dec_obj57=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(real_fun_name,"43function3.nc",212), "43function3.nc", 212, 471);
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 212, 470);
        # 213 "43function3.nc"
        info->sline=1;
        # 215 "43function3.nc"
        __right_value0 = (void*)0;
        block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "43function3.nc", 215, 472);
        # 217 "43function3.nc"
        __right_value0 = (void*)0;
        result_type=(struct sType* )come_increment_ref_count(sType_clone(type), "43function3.nc", 217, 473);
        # 218 "43function3.nc"
        __right_value0 = (void*)0;
        name_21=(char* )come_increment_ref_count((char* )come_memdup(real_fun_name, "43function3.nc", 218, 474, "char* "), "43function3.nc", 218, 475);
        # 219 "43function3.nc"
        __right_value0 = (void*)0;
        self_type=(struct sType* )come_increment_ref_count(sType_clone(type), "43function3.nc", 219, 476);
        # 220 "43function3.nc"
        self_type->mHeap=(_Bool)0;
        # 221 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values1__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "43function3.nc", 3, 495, "struct list$1sType$ph"), "43function3.nc", 3, 496),1,__list_values1__)), "43function3.nc", 221, 497);
        # 222 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values2__[0]=((char* )(__right_value0=__builtin_string("self","43function3.nc",222))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "43function3.nc", 3, 516, "struct list$1char$ph"), "43function3.nc", 3, 517),1,__list_values2__)), "43function3.nc", 222, 518);
        # 223 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "43function3.nc", 223, 519, "struct list$1char$ph*"), "43function3.nc", 223, 520)), "43function3.nc", 223, 521);
        # 224 "43function3.nc"
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        # 226 "43function3.nc"
        result_type->mStatic=(_Bool)0;
        # 227 "43function3.nc"
        result_type->mUniq=(_Bool)0;
        # 228 "43function3.nc"
        result_type->mInline=(_Bool)0;
        # 230 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(name_21,"43function3.nc",230)))), "43function3.nc", 230, 522);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "43function3.nc", 230, 523));
        # 255 "43function3.nc"
        if(fun2==((void*)0)||fun2->mExternal) {
            # 237 "43function3.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "43function3.nc", 233, 524, "struct sFun* "), "43function3.nc", 237, 525),(char* )come_increment_ref_count(name_21, "43function3.nc", 237, 526),(struct sType* )come_increment_ref_count(result_type, "43function3.nc", 237, 527),(struct list$1sType$ph*)come_increment_ref_count(param_types, "43function3.nc", 237, 528),(struct list$1char$ph*)come_increment_ref_count(param_names, "43function3.nc", 237, 529),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "43function3.nc", 237, 530),(_Bool)0,(_Bool)0,(struct sBlock* )come_increment_ref_count(block, "43function3.nc", 237, 531),(_Bool)1,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 237, 532),(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 237, 533),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 237, 534)), "43function3.nc", 237, 535);
            # 238 "43function3.nc"
            fun->mGenericsFun=(_Bool)1;
            # 240 "43function3.nc"
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(name_21,"43function3.nc",240), "43function3.nc", 240, 561),(struct sFun*)come_increment_ref_count(fun, "43function3.nc", 240, 562),(_Bool)0);
            # 242 "43function3.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "43function3.nc", 242, 566, "struct sNode");
            _inf_obj_value1=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "43function3.nc", 242, 563, "struct sFunNode* "), "43function3.nc", 242, 564),(struct sFun*)come_increment_ref_count(fun, "43function3.nc", 242, 565),info))), "43function3.nc", 242, 567);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value1, "43function3.nc", 242, 781);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 242, 782);
            # 249 "43function3.nc"
            Value=node_compile(node,info);
            if(!Value) {
                # 245 "43function3.nc"
                err_msg(info,"compiling error(Y)");
                # 246 "43function3.nc"
                exit(2);
            }
            # 249 "43function3.nc"
            cloner=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 255, 783);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "43function3.nc", 255, 784):(void*)0);
        }
        else {
            # 252 "43function3.nc"
            cloner=fun2;
        }
        # 255 "43function3.nc"
        __dec_obj96=info->sname,
        info->sname=(char* )come_increment_ref_count(sname, "43function3.nc", 255, 786);
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 255, 785);
        # 256 "43function3.nc"
        info->sline=sline;
        # 258 "43function3.nc"
        __dec_obj97=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source3, "43function3.nc", 258, 788);
        come_call_finalizer(buffer_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 258, 787);
        # 262 "43function3.nc"
        if(info->p==((void*)0)) {
            # 260 "43function3.nc"
            info->p=info->source->buf;
        }
        # 262 "43function3.nc"
        info->p=info->source->buf;
        # 263 "43function3.nc"
        info->p=p;
        # 264 "43function3.nc"
        info->head=head;
        # 265 "43function3.nc"
        info->sline=sline;
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 269, 789);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 269, 790));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 269, 791);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 269, 792);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 269, 793);
        (name_21 = come_decrement_ref_count(name_21, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 269, 794));
        come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 269, 795);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 269, 796);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 269, 797);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 269, 798);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 269, 799);
    }
    # 269 "43function3.nc"
    info->no_output_come_code=no_output_come_code;
    # 270 "43function3.nc"
    __right_value0 = (void*)0;
    __dec_obj98=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"43function3.nc",270), "43function3.nc", 270, 801);
    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 270, 800);
    # 271 "43function3.nc"
    info->sline=sline_top;
    # 273 "43function3.nc"
    __dec_obj99=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "43function3.nc", 273, 803);
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 273, 802);
    # 274 "43function3.nc"
    __dec_obj100=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "43function3.nc", 274, 805);
    __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 274, 804);
    # 276 "43function3.nc"
    info->caller_fun=caller_fun;
    # 280 "43function3.nc"
    info->right_value_max=right_value_max;
    # 281 "43function3.nc"
    info->right_value_num=right_value_num;
    # 282 "43function3.nc"
    info->num_conditional=num_conditional;
    # 283 "43function3.nc"
    info->max_conditional=max_conditional;
    # 284 "43function3.nc"
    info->in_conditional=in_conditional;
    # 285 "43function3.nc"
    __dec_obj101=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "43function3.nc", 285, 807);
    come_call_finalizer(buffer_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 285, 806);
    # 286 "43function3.nc"
    __dec_obj102=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "43function3.nc", 286, 809);
    come_call_finalizer(buffer_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 286, 808);
    # 287 "43function3.nc"
    __dec_obj103=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "43function3.nc", 287, 811);
    come_call_finalizer(buffer_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 287, 810);
    # 288 "43function3.nc"
    info->current_stack_frame_struct=current_stack_frame_struct;
    # 289 "43function3.nc"
    __dec_obj104=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "43function3.nc", 289, 813);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 289, 812);
    # 290 "43function3.nc"
    __dec_obj105=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "43function3.nc", 290, 815);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 290, 814);
    # 270 "43function3.nc"
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "43function3.nc", 270, 816, "struct tuple2$2sFun$pchar$ph"), "43function3.nc", 270, 817),cloner,(char* )come_increment_ref_count(real_fun_name, "43function3.nc", 270, 818)))), "43function3.nc", 270, 819);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 270, 820);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 270, 821);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 270, 822);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 270, 823));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 270, 824));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 270, 825));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 270, 826);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 270, 827));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 270, 828);
    come_call_finalizer(sType_finalize, normalized_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 270, 829);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 270, 830));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 270, 831);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "43function3.nc}", 270, 832);
    return __result_obj__0;
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun*  v1  , char*  v2  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sFun$pchar$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj1  ;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    # 4465 "./neo-c.h"
    self->v1=v1;
    # 4466 "./neo-c.h"
    __dec_obj1=self->v2,
    self->v2=(char* )come_increment_ref_count(v2, "./neo-c.h", 4466, 44);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4466, 43);
    # 4468 "./neo-c.h"
        __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(self, "./neo-c.h", 4468, 45);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4468, 47);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4468, 48));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4468, 49);
    return __result_obj__0;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sFun$pchar$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple2$2sFun$pchar$ph$p_finalize"
    # 3 "tuple2$2sFun$pchar$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 2 "tuple2$2sFun$pchar$ph$p_finalize"
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2sFun$pchar$ph$p_finalize", 2, 46));
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

static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_at"; neo_current_frame = &fr;
    struct sGenericsFun*  __result_obj__0  ;
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
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3522, 75);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3522, 86);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3522, 87);
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
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 3535, 88);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3535, 89);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3535, 90);
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
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3542, 91);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3542, 92);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3542, 93);
                return __result_obj__0;
            }
        }
        else {
            # 3546 "./neo-c.h"
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3546, 94);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3546, 95);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3546, 96);
            return __result_obj__0;
        }
    }
    # 3550 "./neo-c.h"
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3550, 97);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3550, 98);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3550, 99);
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
    # 1 "sGenericsFun_finalize"
    # 3 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        # 2 "sGenericsFun_finalize"
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 2, 76);
    }
    # 4 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        # 3 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 3, 77);
    }
    # 5 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        # 4 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 4, 78);
    }
    # 6 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 5 "sGenericsFun_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 5, 79));
    }
    # 7 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 6 "sGenericsFun_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 6, 80);
    }
    # 8 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 7 "sGenericsFun_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 7, 81);
    }
    # 9 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 8 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 8, 82);
    }
    # 10 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        # 9 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 9, 83);
    }
    # 11 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        # 10 "sGenericsFun_finalize"
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 10, 84));
    }
    # 12 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        # 11 "sGenericsFun_finalize"
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 11, 85));
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple2$2char$ph_Bool$$p_finalize"
    # 3 "tuple2$2char$ph_Bool$$p_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple2$2char$ph_Bool$$p_finalize"
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$ph_Bool$$p_finalize", 2, 102));
    }
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
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 122);
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
        come_call_finalizer(sRightValueObject_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sRightValueObject$ph$p_finalize}", 2, 121);
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
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sRightValueObject_finalize}", 2, 116);
    }
    # 4 "sRightValueObject_finalize"
    if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
        # 3 "sRightValueObject_finalize"
        (self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0, 0, (void*)0, "sRightValueObject_finalize", 3, 117));
    }
    # 5 "sRightValueObject_finalize"
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        # 4 "sRightValueObject_finalize"
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sRightValueObject_finalize", 4, 118));
    }
    # 6 "sRightValueObject_finalize"
    if(self!=((void*)0)&&self->mObjType!=((void*)0)) {
        # 5 "sRightValueObject_finalize"
        come_call_finalizer(sType_finalize, self->mObjType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sRightValueObject_finalize}", 5, 119);
    }
    # 7 "sRightValueObject_finalize"
    if(self!=((void*)0)&&self->mObjValue!=((void*)0)) {
        # 6 "sRightValueObject_finalize"
        (self->mObjValue = come_decrement_ref_count(self->mObjValue, (void*)0, (void*)0, 0, 0, (void*)0, "sRightValueObject_finalize", 6, 120));
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
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 131);
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
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1CVALUE$ph$p_finalize}", 2, 130);
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
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 125));
    }
    # 4 "CVALUE_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 3 "CVALUE_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 126);
    }
    # 5 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        # 4 "CVALUE_finalize"
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 127));
    }
    # 6 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        # 5 "CVALUE_finalize"
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 128));
    }
    # 7 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        # 6 "CVALUE_finalize"
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 129));
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
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 148);
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
    # 4057 "./neo-c.h"
    # 4059 "./neo-c.h"
    # 4060 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sFun* ));
    # 4066 "./neo-c.h"
    if(self==((void*)0)) {
        # 4063 "./neo-c.h"
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4063, 156);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 183);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 184);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4075, 185);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4075, 186);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4075, 187);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4082, 188);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 189);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 190);
                return __result_obj__0;
            }
        }
        else {
            # 4086 "./neo-c.h"
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4086, 191);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 192);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 193);
            return __result_obj__0;
        }
    }
    # 4090 "./neo-c.h"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4090, 194);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 195);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 196);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    # 1 "sFun_finalize"
    # 3 "sFun_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 2 "sFun_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 157));
    }
    # 4 "sFun_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 3 "sFun_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 158);
    }
    # 5 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 4 "sFun_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 159);
    }
    # 6 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 5 "sFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 160);
    }
    # 7 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        # 6 "sFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 161);
    }
    # 8 "sFun_finalize"
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        # 7 "sFun_finalize"
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 162);
    }
    # 9 "sFun_finalize"
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        # 8 "sFun_finalize"
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 19, 169);
    }
    # 10 "sFun_finalize"
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        # 9 "sFun_finalize"
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 172);
    }
    # 11 "sFun_finalize"
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        # 10 "sFun_finalize"
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 173));
    }
    # 12 "sFun_finalize"
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        # 11 "sFun_finalize"
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 174));
    }
    # 13 "sFun_finalize"
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        # 12 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 175);
    }
    # 14 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        # 13 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 176);
    }
    # 15 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        # 14 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 177);
    }
    # 16 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        # 15 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 178);
    }
    # 17 "sFun_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 16 "sFun_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 179));
    }
    # 18 "sFun_finalize"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 17 "sFun_finalize"
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 180));
    }
    # 19 "sFun_finalize"
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        # 18 "sFun_finalize"
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 181));
    }
    # 20 "sFun_finalize"
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        # 19 "sFun_finalize"
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 182));
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 168);
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
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 167);
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
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 163));
    }
    # 4 "sVar_finalize"
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        # 3 "sVar_finalize"
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 164));
    }
    # 5 "sVar_finalize"
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        # 4 "sVar_finalize"
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 165);
    }
    # 6 "sVar_finalize"
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        # 5 "sVar_finalize"
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 166));
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
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 170);
    }
    # 4 "sBlock_finalize"
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        # 3 "sBlock_finalize"
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 171);
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4063, 197);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 198);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 199);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4075, 200);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4075, 201);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4075, 202);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4082, 203);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 204);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 205);
                return __result_obj__0;
            }
        }
        else {
            # 4086 "./neo-c.h"
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4086, 206);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 207);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 208);
            return __result_obj__0;
        }
    }
    # 4090 "./neo-c.h"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4090, 209);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 210);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 211);
    return __result_obj__0;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj20  ;
    struct sType*  __dec_obj21  ;
    struct list$1sType$ph* __dec_obj25;
    struct sType*  __dec_obj26  ;
    struct sNode* __dec_obj27;
    struct sNode* __dec_obj28;
    char*  __dec_obj29  ;
    char*  __dec_obj30  ;
    char*  __dec_obj31  ;
    char*  __dec_obj32  ;
    char*  __dec_obj33  ;
    char*  __dec_obj34  ;
    char*  __dec_obj35  ;
    char*  __dec_obj36  ;
    struct list$1sNode$ph* __dec_obj40;
    struct list$1sNode$ph* __dec_obj41;
    struct list$1int$* __dec_obj42;
    struct list$1int$* __dec_obj43;
    struct sType*  __dec_obj44  ;
    char*  __dec_obj45  ;
    struct list$1sType$ph* __dec_obj46;
    struct list$1char$ph* __dec_obj50;
    struct sType*  __dec_obj51  ;
    struct sNode* __dec_obj52;
    struct list$1sNode$ph* __dec_obj53;
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
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 230, "struct sType* "), "sType_clone", 5, 231);
    # 7 "sType_clone"
    if(self!=((void*)0)) {
        # 6 "sType_clone"
        result->mClass=self->mClass;
    }
    # 8 "sType_clone"
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        # 7 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj20=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 233);
        come_call_finalizer(sType_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 232);
    }
    # 9 "sType_clone"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 8 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj21=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 235);
        come_call_finalizer(sType_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 234);
    }
    # 10 "sType_clone"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 9 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj25=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 76, 265);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 264);
    }
    # 11 "sType_clone"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 10 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj26=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 267);
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 266);
    }
    # 12 "sType_clone"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 11 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj27=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 276);
        (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 275) :0);
    }
    # 13 "sType_clone"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 12 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj28=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 278);
        (__dec_obj28 ? __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 277) :0);
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
        __dec_obj29=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 279, "char* "), "sType_clone", 14, 281);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 280);
    }
    # 16 "sType_clone"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 15 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj30=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 282, "char* "), "sType_clone", 15, 284);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 283);
    }
    # 17 "sType_clone"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 16 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj31=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 285, "char* "), "sType_clone", 16, 287);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 286);
    }
    # 18 "sType_clone"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 17 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj32=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 288, "char* "), "sType_clone", 17, 290);
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 289);
    }
    # 19 "sType_clone"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 18 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj33=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 291, "char* "), "sType_clone", 18, 293);
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 292);
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
        __dec_obj34=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 294, "char* "), "sType_clone", 49, 296);
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 295);
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
        __dec_obj35=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 297, "char* "), "sType_clone", 51, 299);
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 298);
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
        __dec_obj36=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 300, "char* "), "sType_clone", 54, 302);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 301);
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
        __dec_obj40=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 15, 332);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 331);
    }
    # 59 "sType_clone"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 58 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj41=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 334);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 333);
    }
    # 60 "sType_clone"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 59 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj42=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 15, 354);
        come_call_finalizer(list$1int$_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 353);
    }
    # 61 "sType_clone"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 60 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj43=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 356);
        come_call_finalizer(list$1int$_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 355);
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
        __dec_obj44=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 358);
        come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 357);
    }
    # 68 "sType_clone"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 67 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj45=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 359, "char* "), "sType_clone", 67, 361);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 360);
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
        __dec_obj46=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 363);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 362);
    }
    # 73 "sType_clone"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 72 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj50=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 15, 395);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 394);
    }
    # 74 "sType_clone"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 73 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj51=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 397);
        come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 396);
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
        __dec_obj52=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 399);
        (__dec_obj52 ? __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 398) :0);
    }
    # 77 "sType_clone"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 76 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj53=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 401);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 400);
    }
    # 77 "sType_clone"
        __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 402);
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 236);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 237);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1513, 238, "struct list$1sType$ph*"), "./neo-c.h", 1513, 242)), "./neo-c.h", 1513, 243);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1518, 258));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1521, 259));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 260);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 261);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 262);
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
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 239);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 240);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 241);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj22  ;
    struct list_item$1sType$ph* litem_0;
    struct sType*  __dec_obj23  ;
    struct list_item$1sType$ph* litem_1;
    struct sType*  __dec_obj24  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_0, 0, sizeof(litem_0));
    memset(&litem_1, 0, sizeof(litem_1));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 244);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1534, 245, "struct list_item$1sType$ph*"))), "./neo-c.h", 1534, 246);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj22=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1538, 248);
        come_call_finalizer(sType_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 247);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1544, 249, "struct list_item$1sType$ph*"))), "./neo-c.h", 1544, 250);
        # 1546 "./neo-c.h"
        litem_0->prev=self->head;
        # 1547 "./neo-c.h"
        litem_0->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj23=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1548, 252);
        come_call_finalizer(sType_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 251);
        # 1550 "./neo-c.h"
        self->tail=litem_0;
        # 1551 "./neo-c.h"
        self->head->next=litem_0;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1554, 253, "struct list_item$1sType$ph*"))), "./neo-c.h", 1554, 254);
        # 1556 "./neo-c.h"
        litem_1->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_1->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj24=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1558, 256);
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 255);
        # 1560 "./neo-c.h"
        self->tail->next=litem_1;
        # 1561 "./neo-c.h"
        self->tail=litem_1;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 257);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 263);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 268);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 269):(void*)0);
        return __result_obj__0;
    }
    # 5 "sNode_clone"
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 270, "struct sNode*"), "sNode_clone", 5, 271);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 272);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 273):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 274):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 303);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 304);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1513, 305, "struct list$1sNode$ph*"), "./neo-c.h", 1513, 309)), "./neo-c.h", 1513, 310);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1518, 325));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1521, 326));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 327);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 328);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 329);
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
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 306);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 307);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 308);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj37;
    struct list_item$1sNode$ph* litem_2;
    struct sNode* __dec_obj38;
    struct list_item$1sNode$ph* litem_3;
    struct sNode* __dec_obj39;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_2, 0, sizeof(litem_2));
    memset(&litem_3, 0, sizeof(litem_3));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1531, 311):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1534, 312, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1534, 313);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj37=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1538, 315);
        (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1538, 314) :0);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1544, 316, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1544, 317);
        # 1546 "./neo-c.h"
        litem_2->prev=self->head;
        # 1547 "./neo-c.h"
        litem_2->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj38=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1548, 319);
        (__dec_obj38 ? __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1548, 318) :0);
        # 1550 "./neo-c.h"
        self->tail=litem_2;
        # 1551 "./neo-c.h"
        self->head->next=litem_2;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1554, 320, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1554, 321);
        # 1556 "./neo-c.h"
        litem_3->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_3->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj39=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1558, 323);
        (__dec_obj39 ? __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1558, 322) :0);
        # 1560 "./neo-c.h"
        self->tail->next=litem_3;
        # 1561 "./neo-c.h"
        self->tail=litem_3;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1566, 324):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 330);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 335);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 336);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1513, 337, "struct list$1int$*"), "./neo-c.h", 1513, 341)), "./neo-c.h", 1513, 342);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1527, 349);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 350);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 351);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1485, 338);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 339);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 340);
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1534, 343, "struct list_item$1int$*"))), "./neo-c.h", 1534, 344);
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
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1544, 345, "struct list_item$1int$*"))), "./neo-c.h", 1544, 346);
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
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1554, 347, "struct list_item$1int$*"))), "./neo-c.h", 1554, 348);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 352);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 364);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 365);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1513, 366, "struct list$1char$ph*"), "./neo-c.h", 1513, 370)), "./neo-c.h", 1513, 371);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1518, 386, "char* "), "./neo-c.h", 1518, 387));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1521, 388, "char* "), "./neo-c.h", 1521, 389));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 390);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 391);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 392);
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 367);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 368);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 369);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj47  ;
    struct list_item$1char$ph* litem_6;
    char*  __dec_obj48  ;
    struct list_item$1char$ph* litem_7;
    char*  __dec_obj49  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_6, 0, sizeof(litem_6));
    memset(&litem_7, 0, sizeof(litem_7));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1531, 372));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1534, 373, "struct list_item$1char$ph*"))), "./neo-c.h", 1534, 374);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj47=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1538, 376);
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1538, 375);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1544, 377, "struct list_item$1char$ph*"))), "./neo-c.h", 1544, 378);
        # 1546 "./neo-c.h"
        litem_6->prev=self->head;
        # 1547 "./neo-c.h"
        litem_6->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj48=litem_6->item,
        litem_6->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1548, 380);
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1548, 379);
        # 1550 "./neo-c.h"
        self->tail=litem_6;
        # 1551 "./neo-c.h"
        self->head->next=litem_6;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1554, 381, "struct list_item$1char$ph*"))), "./neo-c.h", 1554, 382);
        # 1556 "./neo-c.h"
        litem_7->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_7->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj49=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1558, 384);
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1558, 383);
        # 1560 "./neo-c.h"
        self->tail->next=litem_7;
        # 1561 "./neo-c.h"
        self->tail=litem_7;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1566, 385));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 393);
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4063, 405);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 414);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 415);
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
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 4075, 416);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4075, 417);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4075, 418);
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
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4082, 419);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 420);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 421);
                return __result_obj__0;
            }
        }
        else {
            # 4086 "./neo-c.h"
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4086, 422);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 423);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 424);
            return __result_obj__0;
        }
    }
    # 4090 "./neo-c.h"
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4090, 425);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 426);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 427);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    # 1 "sClass_finalize"
    # 3 "sClass_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 2 "sClass_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 406));
    }
    # 4 "sClass_finalize"
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        # 3 "sClass_finalize"
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 5, 411);
    }
    # 5 "sClass_finalize"
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        # 4 "sClass_finalize"
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 412));
    }
    # 6 "sClass_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 5 "sClass_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 413));
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 410);
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
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 409);
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
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 407));
    }
    # 4 "tuple2$2char$phsType$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple2$2char$phsType$ph$p_finalize"
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 408);
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4063, 428);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 429);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 430);
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
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 4075, 431);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4075, 432);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4075, 433);
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
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4082, 434);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 435);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 436);
                return __result_obj__0;
            }
        }
        else {
            # 4086 "./neo-c.h"
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4086, 437);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 438);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 439);
            return __result_obj__0;
        }
    }
    # 4090 "./neo-c.h"
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4090, 440);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 441);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 442);
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
        list$1sType$ph_push_back(self,(struct sType* )come_increment_ref_count(values[i], "./neo-c.h", 1494, 491));
    }
    # 1497 "./neo-c.h"
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1497, 492);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1497, 493);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1497, 494);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj58  ;
    struct list_item$1sType$ph* litem_22;
    struct sType*  __dec_obj59  ;
    struct list_item$1sType$ph* litem_23;
    struct sType*  __dec_obj60  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_22, 0, sizeof(litem_22));
    memset(&litem_23, 0, sizeof(litem_23));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 477);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1619, 478, "struct list_item$1sType$ph*"))), "./neo-c.h", 1619, 479);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj58=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1623, 481);
        come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 480);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_22=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1629, 482, "struct list_item$1sType$ph*"))), "./neo-c.h", 1629, 483);
        # 1631 "./neo-c.h"
        litem_22->prev=self->head;
        # 1632 "./neo-c.h"
        litem_22->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj59=litem_22->item,
        litem_22->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1633, 485);
        come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 484);
        # 1635 "./neo-c.h"
        self->tail=litem_22;
        # 1636 "./neo-c.h"
        self->head->next=litem_22;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_23=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1639, 486, "struct list_item$1sType$ph*"))), "./neo-c.h", 1639, 487);
        # 1641 "./neo-c.h"
        litem_23->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_23->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj60=litem_23->item,
        litem_23->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1643, 489);
        come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 488);
        # 1645 "./neo-c.h"
        self->tail->next=litem_23;
        # 1646 "./neo-c.h"
        self->tail=litem_23;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 490);
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
        list$1char$ph_push_back(self,(char* )come_increment_ref_count(values[i], "./neo-c.h", 1494, 512));
    }
    # 1497 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1497, 513);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1497, 514);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1497, 515);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj61  ;
    struct list_item$1char$ph* litem_24;
    char*  __dec_obj62  ;
    struct list_item$1char$ph* litem_25;
    char*  __dec_obj63  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_24, 0, sizeof(litem_24));
    memset(&litem_25, 0, sizeof(litem_25));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1615, 498));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1619, 499, "struct list_item$1char$ph*"))), "./neo-c.h", 1619, 500);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj61=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1623, 502);
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1623, 501);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_24=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1629, 503, "struct list_item$1char$ph*"))), "./neo-c.h", 1629, 504);
        # 1631 "./neo-c.h"
        litem_24->prev=self->head;
        # 1632 "./neo-c.h"
        litem_24->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj62=litem_24->item,
        litem_24->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1633, 506);
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1633, 505);
        # 1635 "./neo-c.h"
        self->tail=litem_24;
        # 1636 "./neo-c.h"
        self->head->next=litem_24;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_25=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1639, 507, "struct list_item$1char$ph*"))), "./neo-c.h", 1639, 508);
        # 1641 "./neo-c.h"
        litem_25->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_25->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj63=litem_25->item,
        litem_25->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1643, 510);
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1643, 509);
        # 1645 "./neo-c.h"
        self->tail->next=litem_25;
        # 1646 "./neo-c.h"
        self->tail=litem_25;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1651, 511));
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
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3902, 536));
        come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3902, 537);
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
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3921, 552));
                    # 3922 "./neo-c.h"
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3922, 553);
                }
                else {
                    # 3925 "./neo-c.h"
                    self->keys[it]=key;
                }
                # 3934 "./neo-c.h"
                if(1) {
                    # 3928 "./neo-c.h"
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3928, 554);
                    # 3929 "./neo-c.h"
                    self->items[it]=(struct sFun* )come_increment_ref_count(item, "./neo-c.h", 3929, 555);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3952, 556);
            }
            else {
                # 3955 "./neo-c.h"
                self->keys[it]=key;
            }
            # 3964 "./neo-c.h"
            if(1) {
                # 3958 "./neo-c.h"
                self->items[it]=(struct sFun* )come_increment_ref_count(item, "./neo-c.h", 3958, 557);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 3972, 558));
    }
    # 3975 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3975, 559));
    come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3975, 560);
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
    int i_26;
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
    memset(&i_26, 0, sizeof(i_26));
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&n, 0, sizeof(n));
    # 3816 "./neo-c.h"
    # 3818 "./neo-c.h"
    old_size=self->size;
    # 3819 "./neo-c.h"
    size=self->size*10;
    # 3820 "./neo-c.h"
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3820, 538, "char** "))), "./neo-c.h", 3820, 539);
    # 3821 "./neo-c.h"
    __right_value0 = (void*)0;
    items=(struct sFun** )come_increment_ref_count(((struct sFun** )(__right_value0=(struct sFun* *)come_calloc(1, sizeof(struct sFun* )*(1*(size)), "./neo-c.h", 3821, 540, "struct sFun** "))), "./neo-c.h", 3821, 541);
    # 3822 "./neo-c.h"
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3822, 542, "unsigned int*"))), "./neo-c.h", 3822, 543);
    # 3823 "./neo-c.h"
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3823, 544, "_Bool*"))), "./neo-c.h", 3823, 545);
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
    for(i_26=0    ;i_26<old_size;i_26++){
        # 3836 "./neo-c.h"
        if(!self->item_existance[i_26]) {
            # 3833 "./neo-c.h"
            continue;
        }
        # 3836 "./neo-c.h"
        key_hash=self->hashes[i_26];
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
                keys[n]=self->keys[i_26];
                # 3856 "./neo-c.h"
                items[n]=self->items[i_26];
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
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3865, 546));
    # 3866 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3866, 547));
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
    struct list_item$1char$ph* it_27;
    int i_28;
    struct list_item$1char$ph* prev_it_29;
    struct list_item$1char$ph* it_30;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_31;
    struct list_item$1char$ph* prev_it_32;
    memset(&tmp, 0, sizeof(tmp));
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&it_27, 0, sizeof(it_27));
    memset(&i_28, 0, sizeof(i_28));
    memset(&prev_it_29, 0, sizeof(prev_it_29));
    memset(&it_30, 0, sizeof(it_30));
    memset(&head_prev_it, 0, sizeof(head_prev_it));
    memset(&tail_it, 0, sizeof(tail_it));
    memset(&i_31, 0, sizeof(i_31));
    memset(&prev_it_32, 0, sizeof(prev_it_32));
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1942, 549);
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
        it_27=self->head;
        # 1959 "./neo-c.h"
        i_28=0;
        # 1981 "./neo-c.h"
        while(it_27!=((void*)0)) {
            # 1966 "./neo-c.h"
            if(i_28==head) {
                # 1962 "./neo-c.h"
                self->tail=it_27->prev;
                # 1963 "./neo-c.h"
                self->tail->next=((void*)0);
            }
            # 1980 "./neo-c.h"
            if(i_28>=head) {
                # 1967 "./neo-c.h"
                prev_it_29=it_27;
                # 1969 "./neo-c.h"
                it_27=it_27->next;
                # 1970 "./neo-c.h"
                i_28++;
                # 1972 "./neo-c.h"
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_29, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1972, 550);
                # 1974 "./neo-c.h"
                self->len--;
            }
            else {
                # 1977 "./neo-c.h"
                it_27=it_27->next;
                # 1978 "./neo-c.h"
                i_28++;
            }
        }
    }
    else {
        # 1983 "./neo-c.h"
        it_30=self->head;
        # 1985 "./neo-c.h"
        head_prev_it=((void*)0);
        # 1986 "./neo-c.h"
        tail_it=((void*)0);
        # 1989 "./neo-c.h"
        i_31=0;
        # 2015 "./neo-c.h"
        while(it_30!=((void*)0)) {
            # 1994 "./neo-c.h"
            if(i_31==head) {
                # 1992 "./neo-c.h"
                head_prev_it=it_30->prev;
            }
            # 1998 "./neo-c.h"
            if(i_31==tail) {
                # 1995 "./neo-c.h"
                tail_it=it_30;
            }
            # 2013 "./neo-c.h"
            if(i_31>=head&&i_31<tail) {
                # 2000 "./neo-c.h"
                prev_it_32=it_30;
                # 2002 "./neo-c.h"
                it_30=it_30->next;
                # 2003 "./neo-c.h"
                i_31++;
                # 2005 "./neo-c.h"
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_32, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2005, 551);
                # 2007 "./neo-c.h"
                self->len--;
            }
            else {
                # 2010 "./neo-c.h"
                it_30=it_30->next;
                # 2011 "./neo-c.h"
                i_31++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1864, 548);
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
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFunNode_finalize", 2, 568));
    }
    # 4 "sFunNode_finalize"
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        # 3 "sFunNode_finalize"
        come_call_finalizer(sFun_finalize, self->mFun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunNode_finalize}", 3, 569);
    }
                neo_current_frame = fr.prev;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_clone"; neo_current_frame = &fr;
    struct sFunNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFunNode*  result  ;
    char*  __dec_obj64  ;
    struct sFun*  __dec_obj95  ;
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
    result=(struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "sFunNode_clone", 5, 570, "struct sFunNode* "), "sFunNode_clone", 5, 571);
    # 7 "sFunNode_clone"
    if(self!=((void*)0)) {
        # 6 "sFunNode_clone"
        result->sline=self->sline;
    }
    # 8 "sFunNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sFunNode_clone"
        __right_value0 = (void*)0;
        __dec_obj64=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sFunNode_clone", 7, 572, "char* "), "sFunNode_clone", 7, 574);
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0, "sFunNode_clone", 7, 573);
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
        __dec_obj95=result->mFun,
        result->mFun=(struct sFun* )come_increment_ref_count(sFun_clone(self->mFun), "sFunNode_clone", 9, 779);
        come_call_finalizer(sFun_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunNode_clone", 9, 778);
    }
    # 10 "sFunNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sFunNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFunNode_clone}", 10, 780);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sFun*  sFun_clone(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_clone"; neo_current_frame = &fr;
    struct sFun*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sFun*  result  ;
    char*  __dec_obj65  ;
    struct sType*  __dec_obj66  ;
    struct list$1sType$ph* __dec_obj67;
    struct list$1char$ph* __dec_obj68;
    struct list$1char$ph* __dec_obj69;
    struct sType*  __dec_obj70  ;
    struct list$1sVar$ph* __dec_obj78;
    struct sBlock*  __dec_obj84  ;
    char*  __dec_obj85  ;
    char*  __dec_obj86  ;
    struct buffer*  __dec_obj87  ;
    struct buffer*  __dec_obj88  ;
    struct buffer*  __dec_obj89  ;
    struct buffer*  __dec_obj90  ;
    char*  __dec_obj91  ;
    char*  __dec_obj92  ;
    char*  __dec_obj93  ;
    char*  __dec_obj94  ;
    memset(&result, 0, sizeof(result));
    # 3 "sFun_clone"
    # 5 "sFun_clone"
    if(self==(void*)0) {
        # 4 "sFun_clone"
                __result_obj__0 = (struct sFun* )come_increment_ref_count((void*)0, "sFun_clone", 4, 575);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 4, 576);
        return __result_obj__0;
    }
    # 5 "sFun_clone"
    result=(struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "sFun_clone", 5, 577, "struct sFun* "), "sFun_clone", 5, 578);
    # 7 "sFun_clone"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 6 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj65=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sFun_clone", 6, 579, "char* "), "sFun_clone", 6, 581);
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 6, 580);
    }
    # 8 "sFun_clone"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 7 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj66=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sFun_clone", 7, 583);
        come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 7, 582);
    }
    # 9 "sFun_clone"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 8 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj67=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sFun_clone", 8, 585);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 8, 584);
    }
    # 10 "sFun_clone"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 9 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj68=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sFun_clone", 9, 587);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 9, 586);
    }
    # 11 "sFun_clone"
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        # 10 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj69=result->mParamDefaultParametors,
        result->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamDefaultParametors), "sFun_clone", 10, 589);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 10, 588);
    }
    # 12 "sFun_clone"
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        # 11 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj70=result->mLambdaType,
        result->mLambdaType=(struct sType* )come_increment_ref_count(sType_clone(self->mLambdaType), "sFun_clone", 11, 591);
        come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 11, 590);
    }
    # 13 "sFun_clone"
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        # 12 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj78=result->mAllVar,
        result->mAllVar=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph$p_clone(self->mAllVar), "sFun_clone", 13, 639);
        come_call_finalizer(list$1sVar$ph_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 13, 638);
    }
    # 14 "sFun_clone"
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        # 13 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj84=result->mBlock,
        result->mBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(self->mBlock), "sFun_clone", 13, 748);
        come_call_finalizer(sBlock_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 13, 747);
    }
    # 15 "sFun_clone"
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        # 14 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj85=result->mTextBlock,
        result->mTextBlock=(char* )come_increment_ref_count((char* )come_memdup(self->mTextBlock, "sFun_clone", 14, 749, "char* "), "sFun_clone", 14, 751);
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 14, 750);
    }
    # 16 "sFun_clone"
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        # 15 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj86=result->mTextBlockSName,
        result->mTextBlockSName=(char* )come_increment_ref_count((char* )come_memdup(self->mTextBlockSName, "sFun_clone", 15, 752, "char* "), "sFun_clone", 15, 754);
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 15, 753);
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
        __dec_obj87=result->mSource,
        result->mSource=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSource), "sFun_clone", 17, 756);
        come_call_finalizer(buffer_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 17, 755);
    }
    # 19 "sFun_clone"
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        # 18 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj88=result->mSourceHead,
        result->mSourceHead=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceHead), "sFun_clone", 18, 758);
        come_call_finalizer(buffer_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 18, 757);
    }
    # 20 "sFun_clone"
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        # 19 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj89=result->mSourceHead2,
        result->mSourceHead2=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceHead2), "sFun_clone", 19, 760);
        come_call_finalizer(buffer_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 19, 759);
    }
    # 21 "sFun_clone"
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        # 20 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj90=result->mSourceEnd,
        result->mSourceEnd=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceEnd), "sFun_clone", 20, 762);
        come_call_finalizer(buffer_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 20, 761);
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
        __dec_obj91=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sFun_clone", 28, 763, "char* "), "sFun_clone", 28, 765);
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 28, 764);
    }
    # 30 "sFun_clone"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 29 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj92=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sFun_clone", 29, 766, "char* "), "sFun_clone", 29, 768);
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 29, 767);
    }
    # 31 "sFun_clone"
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        # 30 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj93=result->mFunAttribute,
        result->mFunAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mFunAttribute, "sFun_clone", 30, 769, "char* "), "sFun_clone", 30, 771);
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 30, 770);
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
        __dec_obj94=result->mAsmFun,
        result->mAsmFun=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmFun, "sFun_clone", 33, 772, "char* "), "sFun_clone", 33, 774);
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 33, 773);
    }
    # 34 "sFun_clone"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(result, "sFun_clone", 34, 775);
    come_call_finalizer(sFun_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 34, 776);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 34, 777);
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
                __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 592);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 593);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc(1, sizeof(struct list$1sVar$ph)*(1), "./neo-c.h", 1513, 594, "struct list$1sVar$ph*"), "./neo-c.h", 1513, 598)), "./neo-c.h", 1513, 599);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sVar$ph_add(result,(struct sVar* )come_increment_ref_count(sVar_clone(it->item), "./neo-c.h", 1518, 632));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sVar$ph_add(result,(struct sVar* )come_increment_ref_count(sVar_clone(it->item), "./neo-c.h", 1521, 633));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 634);
    come_call_finalizer(list$1sVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 635);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 636);
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
        __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 595);
    come_call_finalizer(list$1sVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 596);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 597);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_add"; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sVar$ph* litem;
    struct sVar*  __dec_obj71  ;
    struct list_item$1sVar$ph* litem_33;
    struct sVar*  __dec_obj72  ;
    struct list_item$1sVar$ph* litem_34;
    struct sVar*  __dec_obj73  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_33, 0, sizeof(litem_33));
    memset(&litem_34, 0, sizeof(litem_34));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 600);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./neo-c.h", 1534, 601, "struct list_item$1sVar$ph*"))), "./neo-c.h", 1534, 602);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj71=litem->item,
        litem->item=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 1538, 604);
        come_call_finalizer(sVar_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 603);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_33=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./neo-c.h", 1544, 605, "struct list_item$1sVar$ph*"))), "./neo-c.h", 1544, 606);
        # 1546 "./neo-c.h"
        litem_33->prev=self->head;
        # 1547 "./neo-c.h"
        litem_33->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj72=litem_33->item,
        litem_33->item=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 1548, 608);
        come_call_finalizer(sVar_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 607);
        # 1550 "./neo-c.h"
        self->tail=litem_33;
        # 1551 "./neo-c.h"
        self->head->next=litem_33;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_34=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./neo-c.h", 1554, 609, "struct list_item$1sVar$ph*"))), "./neo-c.h", 1554, 610);
        # 1556 "./neo-c.h"
        litem_34->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_34->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj73=litem_34->item,
        litem_34->item=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 1558, 612);
        come_call_finalizer(sVar_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 611);
        # 1560 "./neo-c.h"
        self->tail->next=litem_34;
        # 1561 "./neo-c.h"
        self->tail=litem_34;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 613);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  sVar_clone(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_clone"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVar*  result  ;
    char*  __dec_obj74  ;
    char*  __dec_obj75  ;
    struct sType*  __dec_obj76  ;
    char*  __dec_obj77  ;
    memset(&result, 0, sizeof(result));
    # 3 "sVar_clone"
    # 5 "sVar_clone"
    if(self==(void*)0) {
        # 4 "sVar_clone"
                __result_obj__0 = (struct sVar* )come_increment_ref_count((void*)0, "sVar_clone", 4, 614);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 4, 615);
        return __result_obj__0;
    }
    # 5 "sVar_clone"
    result=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "sVar_clone", 5, 616, "struct sVar* "), "sVar_clone", 5, 617);
    # 7 "sVar_clone"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 6 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj74=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sVar_clone", 6, 618, "char* "), "sVar_clone", 6, 620);
        __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 6, 619);
    }
    # 8 "sVar_clone"
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        # 7 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj75=result->mCValueName,
        result->mCValueName=(char* )come_increment_ref_count((char* )come_memdup(self->mCValueName, "sVar_clone", 7, 621, "char* "), "sVar_clone", 7, 623);
        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 7, 622);
    }
    # 9 "sVar_clone"
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        # 8 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj76=result->mType,
        result->mType=(struct sType* )come_increment_ref_count(sType_clone(self->mType), "sVar_clone", 8, 625);
        come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_clone", 8, 624);
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
        __dec_obj77=result->mFunName,
        result->mFunName=(char* )come_increment_ref_count((char* )come_memdup(self->mFunName, "sVar_clone", 12, 626, "char* "), "sVar_clone", 12, 628);
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 12, 627);
    }
    # 14 "sVar_clone"
    if(self!=((void*)0)) {
        # 13 "sVar_clone"
        result->no_output_come_code=self->no_output_come_code;
    }
    # 14 "sVar_clone"
        __result_obj__0 = (struct sVar* )come_increment_ref_count(result, "sVar_clone", 14, 629);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 630);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 631);
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 637);
    }
            neo_current_frame = fr.prev;
}

static struct sBlock*  sBlock_clone(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_clone"; neo_current_frame = &fr;
    struct sBlock*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sBlock*  result  ;
    struct list$1sNode$ph* __dec_obj79;
    struct sVarTable*  __dec_obj83  ;
    memset(&result, 0, sizeof(result));
    # 3 "sBlock_clone"
    # 5 "sBlock_clone"
    if(self==(void*)0) {
        # 4 "sBlock_clone"
                __result_obj__0 = (struct sBlock* )come_increment_ref_count((void*)0, "sBlock_clone", 4, 640);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 4, 641);
        return __result_obj__0;
    }
    # 5 "sBlock_clone"
    result=(struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "sBlock_clone", 5, 642, "struct sBlock* "), "sBlock_clone", 5, 643);
    # 7 "sBlock_clone"
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        # 6 "sBlock_clone"
        __right_value0 = (void*)0;
        __dec_obj79=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes), "sBlock_clone", 6, 645);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 6, 644);
    }
    # 8 "sBlock_clone"
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        # 7 "sBlock_clone"
        __right_value0 = (void*)0;
        __dec_obj83=result->mVarTable,
        result->mVarTable=(struct sVarTable* )come_increment_ref_count(sVarTable_clone(self->mVarTable), "sBlock_clone", 7, 743);
        come_call_finalizer(sVarTable_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 7, 742);
    }
    # 9 "sBlock_clone"
    if(self!=((void*)0)) {
        # 8 "sBlock_clone"
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
    # 9 "sBlock_clone"
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(result, "sBlock_clone", 9, 744);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 745);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 746);
    return __result_obj__0;
}

static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_clone"; neo_current_frame = &fr;
    struct sVarTable*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVarTable*  result  ;
    struct map$2char$phsVar$ph* __dec_obj82;
    memset(&result, 0, sizeof(result));
    # 3 "sVarTable_clone"
    # 5 "sVarTable_clone"
    if(self==(void*)0) {
        # 4 "sVarTable_clone"
                __result_obj__0 = (struct sVarTable* )come_increment_ref_count((void*)0, "sVarTable_clone", 4, 646);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 4, 647);
        return __result_obj__0;
    }
    # 5 "sVarTable_clone"
    result=(struct sVarTable* )come_increment_ref_count((struct sVarTable *)come_calloc(1, sizeof(struct sVarTable )*(1), "sVarTable_clone", 5, 648, "struct sVarTable* "), "sVarTable_clone", 5, 649);
    # 7 "sVarTable_clone"
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        # 6 "sVarTable_clone"
        __right_value0 = (void*)0;
        __dec_obj82=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars), "sVarTable_clone", 8, 738);
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarTable_clone", 8, 737);
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
        __result_obj__0 = (struct sVarTable* )come_increment_ref_count(result, "sVarTable_clone", 9, 739);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 740);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 741);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_clone"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* result;
    struct list$1char$ph* __dec_obj81;
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
                __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 3454, 650);
        neo_current_frame = fr.prev;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 8, 656);
        return __result_obj__0;
    }
    # 3457 "./neo-c.h"
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./neo-c.h", 3457, 657, "struct map$2char$phsVar$ph*"), "./neo-c.h", 3457, 673)), "./neo-c.h", 3457, 674);
    # 3459 "./neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj81=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3459, 675, "struct list$1char$ph*"), "./neo-c.h", 3459, 676)), "./neo-c.h", 3459, 678);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3459, 677);
    # 3481 "./neo-c.h"
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        # 3462 "./neo-c.h"
        # 3463 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sVar* ));
        # 3465 "./neo-c.h"
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3465, 694),(_Bool)1), "./neo-c.h", 3465, 695);
        # 3479 "./neo-c.h"
        if(1&&1) {
            # 3468 "./neo-c.h"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "./neo-c.h", 3468, 717, "char* "), "./neo-c.h", 3468, 718),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3468, 719),(_Bool)0);
        }
        else if(1) {
            # 3471 "./neo-c.h"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "./neo-c.h", 3471, 720, "char* "), "./neo-c.h", 3471, 721),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3471, 722),(_Bool)0);
        }
        else if(1) {
            # 3474 "./neo-c.h"
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "./neo-c.h", 3474, 723),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3474, 724),(_Bool)0);
        }
        else {
            # 3477 "./neo-c.h"
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "./neo-c.h", 3477, 725),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3477, 726),(_Bool)0);
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3481, 727);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3481, 728);
    }
    # 3481 "./neo-c.h"
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result, "./neo-c.h", 3481, 729);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3481, 730);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3481, 731);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_35;
    memset(&i, 0, sizeof(i));
    memset(&i_35, 0, sizeof(i_35));
    # 3399 "./neo-c.h"
    # 3408 "./neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3407 "./neo-c.h"
        if(self->item_existance[i]) {
            # 3406 "./neo-c.h"
            if(1) {
                # 3404 "./neo-c.h"
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3404, 651);
            }
        }
    }
    # 3408 "./neo-c.h"
    come_free((char*)self->items);
    # 3417 "./neo-c.h"
    for(i_35=0    ;i_35<self->size;i_35++){
        # 3416 "./neo-c.h"
        if(self->item_existance[i_35]) {
            # 3415 "./neo-c.h"
            if(1) {
                # 3413 "./neo-c.h"
                (self->keys[i_35] = come_decrement_ref_count(self->keys[i_35], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3413, 652));
            }
        }
    }
    # 3417 "./neo-c.h"
    come_free((char*)self->keys);
    # 3419 "./neo-c.h"
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3419, 653);
    # 3421 "./neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3421, 654));
    # 3422 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3422, 655));
            neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj80;
    struct map$2char$phsVar$ph* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 3348 "./neo-c.h"
    # 3350 "./neo-c.h"
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "./neo-c.h", 3350, 658, "char** "))), "./neo-c.h", 3350, 659);
    # 3351 "./neo-c.h"
    __right_value0 = (void*)0;
    self->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), "./neo-c.h", 3351, 660, "struct sVar** "))), "./neo-c.h", 3351, 661);
    # 3352 "./neo-c.h"
    __right_value0 = (void*)0;
    self->hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(128)), "./neo-c.h", 3352, 662, "unsigned int*"))), "./neo-c.h", 3352, 663);
    # 3353 "./neo-c.h"
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 3353, 664, "_Bool*"))), "./neo-c.h", 3353, 665);
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
    __dec_obj80=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3364, 666, "struct list$1char$ph*"), "./neo-c.h", 3364, 667)), "./neo-c.h", 3364, 669);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3364, 668);
    # 3366 "./neo-c.h"
    self->it=0;
    # 3368 "./neo-c.h"
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self, "./neo-c.h", 3368, 670);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3368, 671);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3368, 672);
    return __result_obj__0;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_36  ;
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
    memset(&result_36,0,sizeof(char* ));
    # 3789 "./neo-c.h"
        __result_obj__0 = result_36;
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
    char*  result_37  ;
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
    memset(&result_37,0,sizeof(char* ));
    # 3808 "./neo-c.h"
        __result_obj__0 = result_37;
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
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3522, 679);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3522, 680);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3522, 681);
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
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "./neo-c.h", 3535, 682);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3535, 683);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3535, 684);
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
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3542, 685);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3542, 686);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3542, 687);
                return __result_obj__0;
            }
        }
        else {
            # 3546 "./neo-c.h"
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3546, 688);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3546, 689);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3546, 690);
            return __result_obj__0;
        }
    }
    # 3550 "./neo-c.h"
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3550, 691);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3550, 692);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3550, 693);
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
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3981, 696));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3981, 697);
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
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4000, 708));
                    # 4001 "./neo-c.h"
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4001, 709);
                }
                else {
                    # 4004 "./neo-c.h"
                    self->keys[it]=key;
                }
                # 4013 "./neo-c.h"
                if(1) {
                    # 4007 "./neo-c.h"
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4007, 710);
                    # 4008 "./neo-c.h"
                    self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 4008, 711);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4031, 712);
            }
            else {
                # 4034 "./neo-c.h"
                self->keys[it]=key;
            }
            # 4043 "./neo-c.h"
            if(1) {
                # 4037 "./neo-c.h"
                self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 4037, 713);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 4051, 714));
    }
    # 4054 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4054, 715));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4054, 716);
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
    int i_38;
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
    memset(&i_38, 0, sizeof(i_38));
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&n, 0, sizeof(n));
    # 3816 "./neo-c.h"
    # 3818 "./neo-c.h"
    old_size=self->size;
    # 3819 "./neo-c.h"
    size=self->size*10;
    # 3820 "./neo-c.h"
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3820, 698, "char** "))), "./neo-c.h", 3820, 699);
    # 3821 "./neo-c.h"
    __right_value0 = (void*)0;
    items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(size)), "./neo-c.h", 3821, 700, "struct sVar** "))), "./neo-c.h", 3821, 701);
    # 3822 "./neo-c.h"
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3822, 702, "unsigned int*"))), "./neo-c.h", 3822, 703);
    # 3823 "./neo-c.h"
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3823, 704, "_Bool*"))), "./neo-c.h", 3823, 705);
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
    for(i_38=0    ;i_38<old_size;i_38++){
        # 3836 "./neo-c.h"
        if(!self->item_existance[i_38]) {
            # 3833 "./neo-c.h"
            continue;
        }
        # 3836 "./neo-c.h"
        key_hash=self->hashes[i_38];
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
                keys[n]=self->keys[i_38];
                # 3856 "./neo-c.h"
                items[n]=self->items[i_38];
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
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3865, 706));
    # 3866 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3866, 707));
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
    int i_39;
    memset(&i, 0, sizeof(i));
    memset(&i_39, 0, sizeof(i_39));
    # 3399 "./neo-c.h"
    # 3408 "./neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3407 "./neo-c.h"
        if(self->item_existance[i]) {
            # 3406 "./neo-c.h"
            if(1) {
                # 3404 "./neo-c.h"
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3404, 732);
            }
        }
    }
    # 3408 "./neo-c.h"
    come_free((char*)self->items);
    # 3417 "./neo-c.h"
    for(i_39=0    ;i_39<self->size;i_39++){
        # 3416 "./neo-c.h"
        if(self->item_existance[i_39]) {
            # 3415 "./neo-c.h"
            if(1) {
                # 3413 "./neo-c.h"
                (self->keys[i_39] = come_decrement_ref_count(self->keys[i_39], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3413, 733));
            }
        }
    }
    # 3417 "./neo-c.h"
    come_free((char*)self->keys);
    # 3419 "./neo-c.h"
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3419, 734);
    # 3421 "./neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3421, 735));
    # 3422 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3422, 736));
            neo_current_frame = fr.prev;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_to_string_automatically"; neo_current_frame = &fr;
    struct sClass*  current_stack_frame_struct  ;
    struct sFun*  caller_fun  ;
    void* __right_value0 = (void*)0;
    struct buffer*  if_expression_buffer  ;
    struct buffer*  __dec_obj106  ;
    struct buffer*  loop_expression_buffer  ;
    struct buffer*  __dec_obj107  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj108  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char*  last_code  ;
    char*  __dec_obj109  ;
    char*  last_code2  ;
    char*  __dec_obj110  ;
    char*  sname_top  ;
    int sline_top;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    _Bool no_output_come_code;
    struct sFun*  cloner  ;
    char*  real_fun_name  ;
    struct sType*  type2  ;
    struct sClass*  klass  ;
    void* __right_value1 = (void*)0;
    struct buffer*  source  ;
    int i;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_5;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var4
;    char*  name  =0;
    struct sType*  field_type  =0;
    char* p;
    int sline;
    char*  sname  ;
    struct buffer*  source3  ;
    char* head;
    struct buffer*  __dec_obj111  ;
    char*  __dec_obj112  ;
    struct sBlock*  block  ;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    char*  name_41  ;
    struct sType*  self_type  ;
    struct sType*  __list_values3__[1]  ;
    struct list$1sType$ph* param_types;
    char*  __list_values4__[1]  ;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun*  fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value2;
    struct sFunNode* _inf_obj_value2;
    struct sNode* node;
    _Bool Value;
    char*  __dec_obj113  ;
    struct buffer*  __dec_obj114  ;
    char*  __dec_obj115  ;
    char*  __dec_obj116  ;
    char*  __dec_obj117  ;
    struct buffer*  __dec_obj118  ;
    struct buffer*  __dec_obj119  ;
    struct buffer*  __dec_obj120  ;
    struct list$1sRightValueObject$ph* __dec_obj121;
    struct list$1CVALUE$ph* __dec_obj122;
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
    memset(&cloner, 0, sizeof(cloner));
    memset(&real_fun_name, 0, sizeof(real_fun_name));
    memset(&type2, 0, sizeof(type2));
    memset(&klass, 0, sizeof(klass));
    memset(&source, 0, sizeof(source));
    memset(&i, 0, sizeof(i));
    memset(&_o2_saved_5, 0, sizeof(_o2_saved_5));
    memset(&it, 0, sizeof(it));
    memset(&p, 0, sizeof(p));
    memset(&sline, 0, sizeof(sline));
    memset(&sname, 0, sizeof(sname));
    memset(&source3, 0, sizeof(source3));
    memset(&head, 0, sizeof(head));
    memset(&block, 0, sizeof(block));
    memset(&result_type, 0, sizeof(result_type));
    memset(&name_41, 0, sizeof(name_41));
    memset(&self_type, 0, sizeof(self_type));
    memset(&param_types, 0, sizeof(param_types));
    memset(&param_names, 0, sizeof(param_names));
    memset(&param_default_parametors, 0, sizeof(param_default_parametors));
    memset(&fun2, 0, sizeof(fun2));
    memset(&fun, 0, sizeof(fun));
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    # 276 "43function3.nc"
    current_stack_frame_struct=info->current_stack_frame_struct;
    # 277 "43function3.nc"
    info->current_stack_frame_struct=((void*)0);
    # 278 "43function3.nc"
    caller_fun=info->caller_fun;
    # 279 "43function3.nc"
    info->caller_fun=info->come_fun;
    # 284 "43function3.nc"
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "43function3.nc", 284, 833);
    # 285 "43function3.nc"
    __dec_obj106=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 285, 834);
    # 286 "43function3.nc"
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "43function3.nc", 286, 835);
    # 287 "43function3.nc"
    __dec_obj107=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 287, 836);
    # 288 "43function3.nc"
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "43function3.nc", 288, 837);
    # 289 "43function3.nc"
    __dec_obj108=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 289, 838);
    # 291 "43function3.nc"
    right_value_max=info->right_value_max;
    # 292 "43function3.nc"
    right_value_num=info->right_value_num;
    # 293 "43function3.nc"
    max_conditional=info->max_conditional;
    # 294 "43function3.nc"
    num_conditional=info->num_conditional;
    # 295 "43function3.nc"
    in_conditional=info->in_conditional;
    # 296 "43function3.nc"
    info->in_conditional=(_Bool)0;
    # 298 "43function3.nc"
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "43function3.nc", 298, 839);
    # 299 "43function3.nc"
    __dec_obj109=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 299, 840);
    # 300 "43function3.nc"
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "43function3.nc", 300, 841);
    # 301 "43function3.nc"
    __dec_obj110=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 301, 842);
    # 303 "43function3.nc"
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"43function3.nc",303), "43function3.nc", 303, 843);
    # 304 "43function3.nc"
    sline_top=info->sline;
    # 306 "43function3.nc"
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "43function3.nc", 306, 844);
    # 307 "43function3.nc"
    right_value_objects=info->right_value_objects;
    # 309 "43function3.nc"
    no_output_come_code=info->no_output_come_code;
    # 310 "43function3.nc"
    info->no_output_come_code=(_Bool)0;
    # 277 "43function3.nc"
    cloner=((void*)0);
    # 279 "43function3.nc"
    __right_value0 = (void*)0;
    real_fun_name=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1), "43function3.nc", 279, 845);
    # 281 "43function3.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,type,info), "43function3.nc", 281, 846);
    # 283 "43function3.nc"
    type=type2;
    # 285 "43function3.nc"
    klass=type->mClass;
    # 404 "43function3.nc"
    if(type->mPointerNum>0&&!klass->mNumber) {
        # 288 "43function3.nc"
        __right_value0 = (void*)0;
        source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "43function3.nc", 288, 847, "struct buffer* "), "43function3.nc", 288, 848)), "43function3.nc", 288, 849);
        # 290 "43function3.nc"
        buffer_append_str(source,"{\n");
        # 291 "43function3.nc"
        buffer_append_str(source,"var result = new buffer();\n");
        # 293 "43function3.nc"
        buffer_append_format(source,"result.append_str(\"%s {\");\n",klass->mName);
        # 295 "43function3.nc"
        i=0;
        # 296 "43function3.nc"
        __right_value0 = (void*)0;
        klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
        # 329 "43function3.nc"
        for(_o2_saved_5=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields, "43function3.nc", 297, 850),it=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_5)        ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_5);it=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_5)){
            # 298 "43function3.nc"
            multiple_assign_var4=it;
            name=(char* )come_increment_ref_count(multiple_assign_var4->v1, "43function3.nc", 298, 851);
            field_type=(struct sType* )come_increment_ref_count(multiple_assign_var4->v2, "43function3.nc", 298, 852);
            # 327 "43function3.nc"
            if(i==list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)-1) {
                # 301 "43function3.nc"
                char source2[1024];
                memset(&source2, 0, sizeof(source2));
                # 303 "43function3.nc"
                snprintf(source2,1024,"result.append_str(\"%s:\");\n",name);
                # 305 "43function3.nc"
                buffer_append_str(source,source2);
                # 307 "43function3.nc"
                snprintf(source2,1024,"result.append_str(self.%s.to_string());\n",name);
                # 309 "43function3.nc"
                buffer_append_str(source,source2);
            }
            else {
                # 312 "43function3.nc"
                char source2_40[1024];
                memset(&source2_40, 0, sizeof(source2_40));
                # 314 "43function3.nc"
                snprintf(source2_40,1024,"result.append_str(\"%s:\");\n",name);
                # 316 "43function3.nc"
                buffer_append_str(source,source2_40);
                # 318 "43function3.nc"
                snprintf(source2_40,1024,"result.append_str(self.%s.to_string());\n",name);
                # 320 "43function3.nc"
                buffer_append_str(source,source2_40);
                # 322 "43function3.nc"
                snprintf(source2_40,1024,"result.append_str(\",\");\n");
                # 324 "43function3.nc"
                buffer_append_str(source,source2_40);
            }
            # 327 "43function3.nc"
            i++;
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 329, 853));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 329, 854);
        }
        # 329 "43function3.nc"
        buffer_append_str(source,"result.append_str(\"}\");\n");
        # 331 "43function3.nc"
        buffer_append_format(source,"return result.to_string();\n");
        # 332 "43function3.nc"
        buffer_append_char(source,125);
        # 334 "43function3.nc"
        p=info->p;
        # 335 "43function3.nc"
        sline=info->sline;
        # 336 "43function3.nc"
        sname=(char* )come_increment_ref_count(info->sname, "43function3.nc", 336, 855);
        # 337 "43function3.nc"
        source3=(struct buffer* )come_increment_ref_count(info->source, "43function3.nc", 337, 856);
        # 338 "43function3.nc"
        head=info->head;
        # 340 "43function3.nc"
        __dec_obj111=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source, "43function3.nc", 340, 858);
        come_call_finalizer(buffer_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 340, 857);
        # 344 "43function3.nc"
        if(info->p==((void*)0)) {
            # 342 "43function3.nc"
            info->p=info->source->buf;
        }
        # 344 "43function3.nc"
        info->p=info->source->buf;
        # 345 "43function3.nc"
        info->head=info->source->buf;
        # 347 "43function3.nc"
        __right_value0 = (void*)0;
        __dec_obj112=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(real_fun_name,"43function3.nc",347), "43function3.nc", 347, 860);
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 347, 859);
        # 348 "43function3.nc"
        info->sline=1;
        # 350 "43function3.nc"
        __right_value0 = (void*)0;
        block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "43function3.nc", 350, 861);
        # 352 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "43function3.nc", 352, 862, "struct sType* "), "43function3.nc", 352, 863),(char*)come_increment_ref_count(xsprintf("char*"), "43function3.nc", 352, 864),(_Bool)0,info,(_Bool)0,0), "43function3.nc", 352, 865);
        # 353 "43function3.nc"
        result_type->mHeap=(_Bool)1;
        # 354 "43function3.nc"
        __right_value0 = (void*)0;
        name_41=(char* )come_increment_ref_count((char* )come_memdup(real_fun_name, "43function3.nc", 354, 866, "char* "), "43function3.nc", 354, 867);
        # 355 "43function3.nc"
        __right_value0 = (void*)0;
        self_type=(struct sType* )come_increment_ref_count(sType_clone(type), "43function3.nc", 355, 868);
        # 356 "43function3.nc"
        self_type->mHeap=(_Bool)0;
        # 357 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values3__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "43function3.nc", 357, 869, "struct list$1sType$ph"), "43function3.nc", 357, 870),1,__list_values3__)), "43function3.nc", 357, 871);
        # 358 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values4__[0]=((char* )(__right_value0=__builtin_string("self","43function3.nc",358))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "43function3.nc", 358, 872, "struct list$1char$ph"), "43function3.nc", 358, 873),1,__list_values4__)), "43function3.nc", 358, 874);
        # 359 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "43function3.nc", 359, 875, "struct list$1char$ph*"), "43function3.nc", 359, 876)), "43function3.nc", 359, 877);
        # 360 "43function3.nc"
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        # 362 "43function3.nc"
        result_type->mStatic=(_Bool)0;
        # 363 "43function3.nc"
        result_type->mUniq=(_Bool)0;
        # 364 "43function3.nc"
        result_type->mInline=(_Bool)0;
        # 366 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(name_41,"43function3.nc",366)))), "43function3.nc", 366, 878);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "43function3.nc", 366, 879));
        # 390 "43function3.nc"
        if(fun2==((void*)0)||fun2->mExternal) {
            # 372 "43function3.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "43function3.nc", 368, 880, "struct sFun* "), "43function3.nc", 372, 881),(char* )come_increment_ref_count(name_41, "43function3.nc", 372, 882),(struct sType*)come_increment_ref_count(result_type, "43function3.nc", 372, 883),(struct list$1sType$ph*)come_increment_ref_count(param_types, "43function3.nc", 372, 884),(struct list$1char$ph*)come_increment_ref_count(param_names, "43function3.nc", 372, 885),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "43function3.nc", 372, 886),(_Bool)0,(_Bool)0,(struct sBlock* )come_increment_ref_count(block, "43function3.nc", 372, 887),(_Bool)1,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 372, 888),(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 372, 889),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 372, 890)), "43function3.nc", 372, 891);
            # 373 "43function3.nc"
            fun->mGenericsFun=(_Bool)1;
            # 375 "43function3.nc"
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(name_41,"43function3.nc",375), "43function3.nc", 375, 892),(struct sFun*)come_increment_ref_count(fun, "43function3.nc", 375, 893),(_Bool)0);
            # 377 "43function3.nc"
            cloner=fun;
            # 379 "43function3.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "43function3.nc", 379, 897, "struct sNode");
            _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "43function3.nc", 379, 894, "struct sFunNode* "), "43function3.nc", 379, 895),(struct sFun*)come_increment_ref_count(fun, "43function3.nc", 379, 896),info))), "43function3.nc", 379, 898);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value2, "43function3.nc", 379, 899);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 379, 900);
            # 385 "43function3.nc"
            Value=node_compile(node,info);
            if(!Value) {
                # 382 "43function3.nc"
                err_msg(info,"compiling error(Y)");
                # 383 "43function3.nc"
                exit(2);
            }
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 390, 901);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "43function3.nc", 390, 902):(void*)0);
        }
        else {
            # 387 "43function3.nc"
            cloner=fun2;
        }
        # 390 "43function3.nc"
        __dec_obj113=info->sname,
        info->sname=(char* )come_increment_ref_count(sname, "43function3.nc", 390, 904);
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 390, 903);
        # 391 "43function3.nc"
        info->sline=sline;
        # 393 "43function3.nc"
        __dec_obj114=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source3, "43function3.nc", 393, 906);
        come_call_finalizer(buffer_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 393, 905);
        # 397 "43function3.nc"
        if(info->p==((void*)0)) {
            # 395 "43function3.nc"
            info->p=info->source->buf;
        }
        # 397 "43function3.nc"
        info->p=info->source->buf;
        # 398 "43function3.nc"
        info->p=p;
        # 399 "43function3.nc"
        info->head=head;
        # 400 "43function3.nc"
        info->sline=sline;
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 404, 907);
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 404, 908);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 404, 909));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 404, 910);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 404, 911);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 404, 912);
        (name_41 = come_decrement_ref_count(name_41, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 404, 913));
        come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 404, 914);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 404, 915);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 404, 916);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 404, 917);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 404, 918);
    }
    # 404 "43function3.nc"
    info->no_output_come_code=no_output_come_code;
    # 405 "43function3.nc"
    __right_value0 = (void*)0;
    __dec_obj115=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"43function3.nc",405), "43function3.nc", 405, 920);
    __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 405, 919);
    # 406 "43function3.nc"
    info->sline=sline_top;
    # 408 "43function3.nc"
    __dec_obj116=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "43function3.nc", 408, 922);
    __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 408, 921);
    # 409 "43function3.nc"
    __dec_obj117=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "43function3.nc", 409, 924);
    __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 409, 923);
    # 411 "43function3.nc"
    info->caller_fun=caller_fun;
    # 415 "43function3.nc"
    info->right_value_max=right_value_max;
    # 416 "43function3.nc"
    info->right_value_num=right_value_num;
    # 417 "43function3.nc"
    info->num_conditional=num_conditional;
    # 418 "43function3.nc"
    info->max_conditional=max_conditional;
    # 419 "43function3.nc"
    info->in_conditional=in_conditional;
    # 420 "43function3.nc"
    __dec_obj118=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "43function3.nc", 420, 926);
    come_call_finalizer(buffer_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 420, 925);
    # 421 "43function3.nc"
    __dec_obj119=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "43function3.nc", 421, 928);
    come_call_finalizer(buffer_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 421, 927);
    # 422 "43function3.nc"
    __dec_obj120=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "43function3.nc", 422, 930);
    come_call_finalizer(buffer_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 422, 929);
    # 423 "43function3.nc"
    info->current_stack_frame_struct=current_stack_frame_struct;
    # 424 "43function3.nc"
    __dec_obj121=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "43function3.nc", 424, 932);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 424, 931);
    # 425 "43function3.nc"
    __dec_obj122=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "43function3.nc", 425, 934);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 425, 933);
    # 405 "43function3.nc"
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "43function3.nc", 405, 935, "struct tuple2$2sFun$pchar$ph"), "43function3.nc", 405, 936),cloner,(char* )come_increment_ref_count(real_fun_name, "43function3.nc", 405, 937)))), "43function3.nc", 405, 938);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 405, 939);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 405, 940);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 405, 941);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 405, 942));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 405, 943));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 405, 944));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 405, 945);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 405, 946));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 405, 947);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 405, 948);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "43function3.nc}", 405, 949);
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

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_get_hash_key_automatically"; neo_current_frame = &fr;
    struct sClass*  current_stack_frame_struct  ;
    struct sFun*  caller_fun  ;
    void* __right_value0 = (void*)0;
    struct buffer*  if_expression_buffer  ;
    struct buffer*  __dec_obj123  ;
    struct buffer*  loop_expression_buffer  ;
    struct buffer*  __dec_obj124  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj125  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char*  last_code  ;
    char*  __dec_obj126  ;
    char*  last_code2  ;
    char*  __dec_obj127  ;
    char*  sname_top  ;
    int sline_top;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    _Bool no_output_come_code;
    struct sFun*  get_hash_key_fun  ;
    char*  real_fun_name  ;
    struct sType*  type2  ;
    struct sClass*  klass  ;
    char*  none_generics_name  ;
    char*  generics_fun_name  ;
    struct sGenericsFun*  generics_fun  ;
    struct tuple2$2char$ph_Bool$* multiple_assign_var5
;    char*  name  =0;
    _Bool err=0;
    int i;
    char*  new_fun_name  ;
    char*  __dec_obj128  ;
    void* __right_value1 = (void*)0;
    struct buffer*  source  ;
    int i_42;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_6;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var6
;    char*  name_43  =0;
    struct sType*  field_type  =0;
    char* p;
    int sline;
    char*  sname  ;
    struct buffer*  source3  ;
    char* head;
    struct buffer*  __dec_obj129  ;
    char*  __dec_obj130  ;
    struct sBlock*  block  ;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    char*  name_44  ;
    struct sType*  self_type  ;
    struct sType*  __list_values5__[1]  ;
    struct list$1sType$ph* param_types;
    char*  __list_values6__[1]  ;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun*  fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value3;
    struct sFunNode* _inf_obj_value3;
    struct sNode* node;
    _Bool Value;
    char*  __dec_obj131  ;
    struct buffer*  __dec_obj132  ;
    char*  __dec_obj133  ;
    char*  __dec_obj134  ;
    char*  __dec_obj135  ;
    struct buffer*  __dec_obj136  ;
    struct buffer*  __dec_obj137  ;
    struct buffer*  __dec_obj138  ;
    struct list$1sRightValueObject$ph* __dec_obj139;
    struct list$1CVALUE$ph* __dec_obj140;
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
    memset(&get_hash_key_fun, 0, sizeof(get_hash_key_fun));
    memset(&real_fun_name, 0, sizeof(real_fun_name));
    memset(&type2, 0, sizeof(type2));
    memset(&klass, 0, sizeof(klass));
    memset(&none_generics_name, 0, sizeof(none_generics_name));
    memset(&generics_fun_name, 0, sizeof(generics_fun_name));
    memset(&generics_fun, 0, sizeof(generics_fun));
    memset(&i, 0, sizeof(i));
    memset(&new_fun_name, 0, sizeof(new_fun_name));
    memset(&source, 0, sizeof(source));
    memset(&i_42, 0, sizeof(i_42));
    memset(&_o2_saved_6, 0, sizeof(_o2_saved_6));
    memset(&it, 0, sizeof(it));
    memset(&p, 0, sizeof(p));
    memset(&sline, 0, sizeof(sline));
    memset(&sname, 0, sizeof(sname));
    memset(&source3, 0, sizeof(source3));
    memset(&head, 0, sizeof(head));
    memset(&block, 0, sizeof(block));
    memset(&result_type, 0, sizeof(result_type));
    memset(&name_44, 0, sizeof(name_44));
    memset(&self_type, 0, sizeof(self_type));
    memset(&param_types, 0, sizeof(param_types));
    memset(&param_names, 0, sizeof(param_names));
    memset(&param_default_parametors, 0, sizeof(param_default_parametors));
    memset(&fun2, 0, sizeof(fun2));
    memset(&fun, 0, sizeof(fun));
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    # 411 "43function3.nc"
    current_stack_frame_struct=info->current_stack_frame_struct;
    # 412 "43function3.nc"
    info->current_stack_frame_struct=((void*)0);
    # 413 "43function3.nc"
    caller_fun=info->caller_fun;
    # 414 "43function3.nc"
    info->caller_fun=info->come_fun;
    # 419 "43function3.nc"
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "43function3.nc", 419, 950);
    # 420 "43function3.nc"
    __dec_obj123=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 420, 951);
    # 421 "43function3.nc"
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "43function3.nc", 421, 952);
    # 422 "43function3.nc"
    __dec_obj124=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 422, 953);
    # 423 "43function3.nc"
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "43function3.nc", 423, 954);
    # 424 "43function3.nc"
    __dec_obj125=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 424, 955);
    # 426 "43function3.nc"
    right_value_max=info->right_value_max;
    # 427 "43function3.nc"
    right_value_num=info->right_value_num;
    # 428 "43function3.nc"
    max_conditional=info->max_conditional;
    # 429 "43function3.nc"
    num_conditional=info->num_conditional;
    # 430 "43function3.nc"
    in_conditional=info->in_conditional;
    # 431 "43function3.nc"
    info->in_conditional=(_Bool)0;
    # 433 "43function3.nc"
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "43function3.nc", 433, 956);
    # 434 "43function3.nc"
    __dec_obj126=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 434, 957);
    # 435 "43function3.nc"
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "43function3.nc", 435, 958);
    # 436 "43function3.nc"
    __dec_obj127=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 436, 959);
    # 438 "43function3.nc"
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"43function3.nc",438), "43function3.nc", 438, 960);
    # 439 "43function3.nc"
    sline_top=info->sline;
    # 441 "43function3.nc"
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "43function3.nc", 441, 961);
    # 442 "43function3.nc"
    right_value_objects=info->right_value_objects;
    # 444 "43function3.nc"
    no_output_come_code=info->no_output_come_code;
    # 445 "43function3.nc"
    info->no_output_come_code=(_Bool)0;
    # 412 "43function3.nc"
    get_hash_key_fun=((void*)0);
    # 414 "43function3.nc"
    __right_value0 = (void*)0;
    real_fun_name=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1), "43function3.nc", 414, 962);
    # 416 "43function3.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,type,info), "43function3.nc", 416, 963);
    # 418 "43function3.nc"
    type=type2;
    # 420 "43function3.nc"
    klass=type->mClass;
    # 461 "43function3.nc"
    if(list$1sType$ph_length(type->mGenericsTypes)>0) {
        # 423 "43function3.nc"
        __right_value0 = (void*)0;
        get_hash_key_fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
        # 443 "43function3.nc"
        if(get_hash_key_fun==((void*)0)) {
            # 426 "43function3.nc"
            __right_value0 = (void*)0;
            none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type2->mClass->mName), "43function3.nc", 426, 964);
            # 428 "43function3.nc"
            __right_value0 = (void*)0;
            generics_fun_name=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "43function3.nc", 428, 965);
            # 429 "43function3.nc"
            __right_value0 = (void*)0;
            generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
            # 442 "43function3.nc"
            if(generics_fun) {
                # 432 "43function3.nc"
                __right_value0 = (void*)0;
                multiple_assign_var5=((struct tuple2$2char$ph_Bool$*)(__right_value0=create_generics_fun((char* )come_increment_ref_count(real_fun_name, "43function3.nc", 432, 996),generics_fun,type,info)));
                name=(char* )come_increment_ref_count(multiple_assign_var5->v1, "43function3.nc", 432, 997);
                err=multiple_assign_var5->v2;
                come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 432, 998);
                # 439 "43function3.nc"
                if(!err) {
                    # 436 "43function3.nc"
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    # 437 "43function3.nc"
                    exit(2);
                }
                # 439 "43function3.nc"
                __right_value0 = (void*)0;
                get_hash_key_fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 442, 999));
            }
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 443, 1000));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 443, 1001));
        }
    }
    else {
        # 445 "43function3.nc"
        # 456 "43function3.nc"
        for(i=128-1        ;i>=1;i--){
            # 447 "43function3.nc"
            __right_value0 = (void*)0;
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",real_fun_name,i), "43function3.nc", 447, 1002);
            # 448 "43function3.nc"
            __right_value0 = (void*)0;
            get_hash_key_fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            # 454 "43function3.nc"
            if(get_hash_key_fun) {
                # 451 "43function3.nc"
                __right_value0 = (void*)0;
                __dec_obj128=real_fun_name,
                real_fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name,"43function3.nc",451), "43function3.nc", 451, 1004);
                __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 451, 1003);
                # 452 "43function3.nc"
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 452, 1005));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 456, 1006));
        }
        # 459 "43function3.nc"
        if(get_hash_key_fun==((void*)0)) {
            # 457 "43function3.nc"
            __right_value0 = (void*)0;
            get_hash_key_fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
        }
    }
    # 554 "43function3.nc"
    if(get_hash_key_fun==((void*)0)&&type->mPointerNum>0&&!klass->mNumber&&!klass->mProtocol) {
        # 462 "43function3.nc"
        __right_value0 = (void*)0;
        source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "43function3.nc", 462, 1007, "struct buffer* "), "43function3.nc", 462, 1008)), "43function3.nc", 462, 1009);
        # 464 "43function3.nc"
        buffer_append_str(source,"{\n");
        # 465 "43function3.nc"
        buffer_append_str(source,"unsigned int result = 0;\n");
        # 467 "43function3.nc"
        i_42=0;
        # 468 "43function3.nc"
        __right_value0 = (void*)0;
        klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
        # 481 "43function3.nc"
        for(_o2_saved_6=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields, "43function3.nc", 469, 1010),it=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_6)        ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_6);it=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_6)){
            # 470 "43function3.nc"
            multiple_assign_var6=it;
            name_43=(char* )come_increment_ref_count(multiple_assign_var6->v1, "43function3.nc", 470, 1011);
            field_type=(struct sType* )come_increment_ref_count(multiple_assign_var6->v2, "43function3.nc", 470, 1012);
            # 472 "43function3.nc"
            char source2[1024];
            memset(&source2, 0, sizeof(source2));
            # 474 "43function3.nc"
            snprintf(source2,1024,"result += ((int)self.%s).get_hash_key();\n",name_43);
            # 476 "43function3.nc"
            buffer_append_str(source,source2);
            # 478 "43function3.nc"
            i_42++;
            (name_43 = come_decrement_ref_count(name_43, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 481, 1013));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 481, 1014);
        }
        # 481 "43function3.nc"
        buffer_append_format(source,"return result;\n");
        # 482 "43function3.nc"
        buffer_append_char(source,125);
        # 484 "43function3.nc"
        p=info->p;
        # 485 "43function3.nc"
        sline=info->sline;
        # 486 "43function3.nc"
        sname=(char* )come_increment_ref_count(info->sname, "43function3.nc", 486, 1015);
        # 487 "43function3.nc"
        source3=(struct buffer* )come_increment_ref_count(info->source, "43function3.nc", 487, 1016);
        # 488 "43function3.nc"
        head=info->head;
        # 490 "43function3.nc"
        __dec_obj129=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source, "43function3.nc", 490, 1018);
        come_call_finalizer(buffer_finalize, __dec_obj129,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 490, 1017);
        # 494 "43function3.nc"
        if(info->p==((void*)0)) {
            # 492 "43function3.nc"
            info->p=info->source->buf;
        }
        # 494 "43function3.nc"
        info->p=info->source->buf;
        # 495 "43function3.nc"
        info->head=info->source->buf;
        # 497 "43function3.nc"
        __right_value0 = (void*)0;
        __dec_obj130=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(real_fun_name,"43function3.nc",497), "43function3.nc", 497, 1020);
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 497, 1019);
        # 498 "43function3.nc"
        info->sline=1;
        # 500 "43function3.nc"
        __right_value0 = (void*)0;
        block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "43function3.nc", 500, 1021);
        # 502 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "43function3.nc", 502, 1022, "struct sType* "), "43function3.nc", 502, 1023),(char*)come_increment_ref_count(xsprintf("int"), "43function3.nc", 502, 1024),(_Bool)0,info,(_Bool)0,0), "43function3.nc", 502, 1025);
        # 503 "43function3.nc"
        result_type->mUnsigned=(_Bool)1;
        # 504 "43function3.nc"
        __right_value0 = (void*)0;
        name_44=(char* )come_increment_ref_count((char* )come_memdup(real_fun_name, "43function3.nc", 504, 1026, "char* "), "43function3.nc", 504, 1027);
        # 505 "43function3.nc"
        __right_value0 = (void*)0;
        self_type=(struct sType* )come_increment_ref_count(sType_clone(type), "43function3.nc", 505, 1028);
        # 506 "43function3.nc"
        self_type->mHeap=(_Bool)0;
        # 507 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values5__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "43function3.nc", 507, 1029, "struct list$1sType$ph"), "43function3.nc", 507, 1030),1,__list_values5__)), "43function3.nc", 507, 1031);
        # 508 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values6__[0]=((char* )(__right_value0=__builtin_string("self","43function3.nc",508))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "43function3.nc", 508, 1032, "struct list$1char$ph"), "43function3.nc", 508, 1033),1,__list_values6__)), "43function3.nc", 508, 1034);
        # 509 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "43function3.nc", 509, 1035, "struct list$1char$ph*"), "43function3.nc", 509, 1036)), "43function3.nc", 509, 1037);
        # 510 "43function3.nc"
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        # 512 "43function3.nc"
        result_type->mStatic=(_Bool)0;
        # 513 "43function3.nc"
        result_type->mUniq=(_Bool)0;
        # 514 "43function3.nc"
        result_type->mInline=(_Bool)0;
        # 516 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(name_44,"43function3.nc",516)))), "43function3.nc", 516, 1038);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "43function3.nc", 516, 1039));
        # 540 "43function3.nc"
        if(fun2==((void*)0)||fun2->mExternal) {
            # 522 "43function3.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "43function3.nc", 518, 1040, "struct sFun* "), "43function3.nc", 522, 1041),(char* )come_increment_ref_count(name_44, "43function3.nc", 522, 1042),(struct sType*)come_increment_ref_count(result_type, "43function3.nc", 522, 1043),(struct list$1sType$ph*)come_increment_ref_count(param_types, "43function3.nc", 522, 1044),(struct list$1char$ph*)come_increment_ref_count(param_names, "43function3.nc", 522, 1045),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "43function3.nc", 522, 1046),(_Bool)0,(_Bool)0,(struct sBlock* )come_increment_ref_count(block, "43function3.nc", 522, 1047),(_Bool)1,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 522, 1048),(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 522, 1049),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 522, 1050)), "43function3.nc", 522, 1051);
            # 523 "43function3.nc"
            fun->mGenericsFun=(_Bool)1;
            # 525 "43function3.nc"
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(name_44,"43function3.nc",525), "43function3.nc", 525, 1052),(struct sFun*)come_increment_ref_count(fun, "43function3.nc", 525, 1053),(_Bool)0);
            # 527 "43function3.nc"
            get_hash_key_fun=fun;
            # 529 "43function3.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "43function3.nc", 529, 1057, "struct sNode");
            _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "43function3.nc", 529, 1054, "struct sFunNode* "), "43function3.nc", 529, 1055),(struct sFun*)come_increment_ref_count(fun, "43function3.nc", 529, 1056),info))), "43function3.nc", 529, 1058);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value3, "43function3.nc", 529, 1059);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 529, 1060);
            # 535 "43function3.nc"
            Value=node_compile(node,info);
            if(!Value) {
                # 532 "43function3.nc"
                err_msg(info,"compiling error(Y)");
                # 533 "43function3.nc"
                exit(2);
            }
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 540, 1061);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "43function3.nc", 540, 1062):(void*)0);
        }
        else {
            # 537 "43function3.nc"
            get_hash_key_fun=fun2;
        }
        # 540 "43function3.nc"
        __dec_obj131=info->sname,
        info->sname=(char* )come_increment_ref_count(sname, "43function3.nc", 540, 1064);
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 540, 1063);
        # 541 "43function3.nc"
        info->sline=sline;
        # 543 "43function3.nc"
        __dec_obj132=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source3, "43function3.nc", 543, 1066);
        come_call_finalizer(buffer_finalize, __dec_obj132,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 543, 1065);
        # 547 "43function3.nc"
        if(info->p==((void*)0)) {
            # 545 "43function3.nc"
            info->p=info->source->buf;
        }
        # 547 "43function3.nc"
        info->p=info->source->buf;
        # 548 "43function3.nc"
        info->p=p;
        # 549 "43function3.nc"
        info->head=head;
        # 550 "43function3.nc"
        info->sline=sline;
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 554, 1067);
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 554, 1068);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 554, 1069));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 554, 1070);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 554, 1071);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 554, 1072);
        (name_44 = come_decrement_ref_count(name_44, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 554, 1073));
        come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 554, 1074);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 554, 1075);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 554, 1076);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 554, 1077);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 554, 1078);
    }
    # 554 "43function3.nc"
    info->no_output_come_code=no_output_come_code;
    # 555 "43function3.nc"
    __right_value0 = (void*)0;
    __dec_obj133=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"43function3.nc",555), "43function3.nc", 555, 1080);
    __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 555, 1079);
    # 556 "43function3.nc"
    info->sline=sline_top;
    # 558 "43function3.nc"
    __dec_obj134=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "43function3.nc", 558, 1082);
    __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 558, 1081);
    # 559 "43function3.nc"
    __dec_obj135=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "43function3.nc", 559, 1084);
    __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 559, 1083);
    # 561 "43function3.nc"
    info->caller_fun=caller_fun;
    # 565 "43function3.nc"
    info->right_value_max=right_value_max;
    # 566 "43function3.nc"
    info->right_value_num=right_value_num;
    # 567 "43function3.nc"
    info->num_conditional=num_conditional;
    # 568 "43function3.nc"
    info->max_conditional=max_conditional;
    # 569 "43function3.nc"
    info->in_conditional=in_conditional;
    # 570 "43function3.nc"
    __dec_obj136=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "43function3.nc", 570, 1086);
    come_call_finalizer(buffer_finalize, __dec_obj136,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 570, 1085);
    # 571 "43function3.nc"
    __dec_obj137=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "43function3.nc", 571, 1088);
    come_call_finalizer(buffer_finalize, __dec_obj137,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 571, 1087);
    # 572 "43function3.nc"
    __dec_obj138=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "43function3.nc", 572, 1090);
    come_call_finalizer(buffer_finalize, __dec_obj138,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 572, 1089);
    # 573 "43function3.nc"
    info->current_stack_frame_struct=current_stack_frame_struct;
    # 574 "43function3.nc"
    __dec_obj139=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "43function3.nc", 574, 1092);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 574, 1091);
    # 575 "43function3.nc"
    __dec_obj140=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "43function3.nc", 575, 1094);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj140,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 575, 1093);
    # 555 "43function3.nc"
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "43function3.nc", 555, 1095, "struct tuple2$2sFun$pchar$ph"), "43function3.nc", 555, 1096),get_hash_key_fun,(char* )come_increment_ref_count(real_fun_name, "43function3.nc", 555, 1097)))), "43function3.nc", 555, 1098);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 555, 1099);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 555, 1100);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 555, 1101);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 555, 1102));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 555, 1103));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 555, 1104));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 555, 1105);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 555, 1106));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 555, 1107);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 555, 1108);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "43function3.nc}", 555, 1109);
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
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4063, 966);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 967);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 968);
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
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4075, 969);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4075, 970);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4075, 971);
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
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4082, 972);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 973);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 974);
                return __result_obj__0;
            }
        }
        else {
            # 4086 "./neo-c.h"
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4086, 975);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 976);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 977);
            return __result_obj__0;
        }
    }
    # 4090 "./neo-c.h"
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4090, 978);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 979);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 980);
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
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4063, 981);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 982);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 983);
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
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4075, 984);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4075, 985);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4075, 986);
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
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4082, 987);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 988);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 989);
                return __result_obj__0;
            }
        }
        else {
            # 4086 "./neo-c.h"
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4086, 990);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 991);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 992);
            return __result_obj__0;
        }
    }
    # 4090 "./neo-c.h"
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4090, 993);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 994);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 995);
    return __result_obj__0;
}

struct tuple2$2sFun$pchar$ph* create_compare_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_compare_automatically"; neo_current_frame = &fr;
    struct sClass*  current_stack_frame_struct  ;
    struct sFun*  caller_fun  ;
    void* __right_value0 = (void*)0;
    struct buffer*  if_expression_buffer  ;
    struct buffer*  __dec_obj141  ;
    struct buffer*  loop_expression_buffer  ;
    struct buffer*  __dec_obj142  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj143  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char*  last_code  ;
    char*  __dec_obj144  ;
    char*  last_code2  ;
    char*  __dec_obj145  ;
    char*  sname_top  ;
    int sline_top;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    _Bool no_output_come_code;
    struct sFun*  get_hash_key_fun  ;
    char*  real_fun_name  ;
    struct sType*  type2  ;
    struct sClass*  klass  ;
    char*  none_generics_name  ;
    char*  generics_fun_name  ;
    struct sGenericsFun*  generics_fun  ;
    struct tuple2$2char$ph_Bool$* multiple_assign_var7
;    char*  name  =0;
    _Bool err=0;
    int i;
    char*  new_fun_name  ;
    char*  __dec_obj146  ;
    void* __right_value1 = (void*)0;
    struct buffer*  source  ;
    int i_45;
    struct tuple2$2char$phsType$ph* multiple_assign_var8
;    char*  name_48  =0;
    struct sType*  field_type  =0;
    char* p;
    int sline;
    char*  sname  ;
    struct buffer*  source3  ;
    char* head;
    struct buffer*  __dec_obj147  ;
    char*  __dec_obj148  ;
    struct sBlock*  block  ;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    char*  name_49  ;
    struct sType*  self_type  ;
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
    char*  __dec_obj149  ;
    struct buffer*  __dec_obj150  ;
    char*  __dec_obj151  ;
    char*  __dec_obj152  ;
    char*  __dec_obj153  ;
    struct buffer*  __dec_obj154  ;
    struct buffer*  __dec_obj155  ;
    struct buffer*  __dec_obj156  ;
    struct list$1sRightValueObject$ph* __dec_obj157;
    struct list$1CVALUE$ph* __dec_obj158;
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
    memset(&get_hash_key_fun, 0, sizeof(get_hash_key_fun));
    memset(&real_fun_name, 0, sizeof(real_fun_name));
    memset(&type2, 0, sizeof(type2));
    memset(&klass, 0, sizeof(klass));
    memset(&none_generics_name, 0, sizeof(none_generics_name));
    memset(&generics_fun_name, 0, sizeof(generics_fun_name));
    memset(&generics_fun, 0, sizeof(generics_fun));
    memset(&i, 0, sizeof(i));
    memset(&new_fun_name, 0, sizeof(new_fun_name));
    memset(&source, 0, sizeof(source));
    memset(&i_45, 0, sizeof(i_45));
    memset(&p, 0, sizeof(p));
    memset(&sline, 0, sizeof(sline));
    memset(&sname, 0, sizeof(sname));
    memset(&source3, 0, sizeof(source3));
    memset(&head, 0, sizeof(head));
    memset(&block, 0, sizeof(block));
    memset(&result_type, 0, sizeof(result_type));
    memset(&name_49, 0, sizeof(name_49));
    memset(&self_type, 0, sizeof(self_type));
    memset(&right_type, 0, sizeof(right_type));
    memset(&param_types, 0, sizeof(param_types));
    memset(&param_names, 0, sizeof(param_names));
    memset(&param_default_parametors, 0, sizeof(param_default_parametors));
    memset(&fun2, 0, sizeof(fun2));
    memset(&fun, 0, sizeof(fun));
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    # 561 "43function3.nc"
    current_stack_frame_struct=info->current_stack_frame_struct;
    # 562 "43function3.nc"
    info->current_stack_frame_struct=((void*)0);
    # 563 "43function3.nc"
    caller_fun=info->caller_fun;
    # 564 "43function3.nc"
    info->caller_fun=info->come_fun;
    # 569 "43function3.nc"
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "43function3.nc", 569, 1110);
    # 570 "43function3.nc"
    __dec_obj141=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj141,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 570, 1111);
    # 571 "43function3.nc"
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "43function3.nc", 571, 1112);
    # 572 "43function3.nc"
    __dec_obj142=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj142,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 572, 1113);
    # 573 "43function3.nc"
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "43function3.nc", 573, 1114);
    # 574 "43function3.nc"
    __dec_obj143=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 574, 1115);
    # 576 "43function3.nc"
    right_value_max=info->right_value_max;
    # 577 "43function3.nc"
    right_value_num=info->right_value_num;
    # 578 "43function3.nc"
    max_conditional=info->max_conditional;
    # 579 "43function3.nc"
    num_conditional=info->num_conditional;
    # 580 "43function3.nc"
    in_conditional=info->in_conditional;
    # 581 "43function3.nc"
    info->in_conditional=(_Bool)0;
    # 583 "43function3.nc"
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "43function3.nc", 583, 1116);
    # 584 "43function3.nc"
    __dec_obj144=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 584, 1117);
    # 585 "43function3.nc"
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "43function3.nc", 585, 1118);
    # 586 "43function3.nc"
    __dec_obj145=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 586, 1119);
    # 588 "43function3.nc"
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"43function3.nc",588), "43function3.nc", 588, 1120);
    # 589 "43function3.nc"
    sline_top=info->sline;
    # 591 "43function3.nc"
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "43function3.nc", 591, 1121);
    # 592 "43function3.nc"
    right_value_objects=info->right_value_objects;
    # 594 "43function3.nc"
    no_output_come_code=info->no_output_come_code;
    # 595 "43function3.nc"
    info->no_output_come_code=(_Bool)0;
    # 562 "43function3.nc"
    get_hash_key_fun=((void*)0);
    # 564 "43function3.nc"
    __right_value0 = (void*)0;
    real_fun_name=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1), "43function3.nc", 564, 1122);
    # 566 "43function3.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,type,info), "43function3.nc", 566, 1123);
    # 568 "43function3.nc"
    type=type2;
    # 570 "43function3.nc"
    klass=type->mClass;
    # 611 "43function3.nc"
    if(list$1sType$ph_length(type->mGenericsTypes)>0) {
        # 573 "43function3.nc"
        __right_value0 = (void*)0;
        get_hash_key_fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
        # 593 "43function3.nc"
        if(get_hash_key_fun==((void*)0)) {
            # 576 "43function3.nc"
            __right_value0 = (void*)0;
            none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type2->mClass->mName), "43function3.nc", 576, 1124);
            # 578 "43function3.nc"
            __right_value0 = (void*)0;
            generics_fun_name=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "43function3.nc", 578, 1125);
            # 579 "43function3.nc"
            __right_value0 = (void*)0;
            generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
            # 592 "43function3.nc"
            if(generics_fun) {
                # 582 "43function3.nc"
                __right_value0 = (void*)0;
                multiple_assign_var7=((struct tuple2$2char$ph_Bool$*)(__right_value0=create_generics_fun((char* )come_increment_ref_count(real_fun_name, "43function3.nc", 582, 1126),generics_fun,type,info)));
                name=(char* )come_increment_ref_count(multiple_assign_var7->v1, "43function3.nc", 582, 1127);
                err=multiple_assign_var7->v2;
                come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 582, 1128);
                # 589 "43function3.nc"
                if(!err) {
                    # 586 "43function3.nc"
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    # 587 "43function3.nc"
                    exit(2);
                }
                # 589 "43function3.nc"
                __right_value0 = (void*)0;
                get_hash_key_fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 592, 1129));
            }
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 593, 1130));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 593, 1131));
        }
    }
    else {
        # 595 "43function3.nc"
        # 606 "43function3.nc"
        for(i=128-1        ;i>=1;i--){
            # 597 "43function3.nc"
            __right_value0 = (void*)0;
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",real_fun_name,i), "43function3.nc", 597, 1132);
            # 598 "43function3.nc"
            __right_value0 = (void*)0;
            get_hash_key_fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            # 604 "43function3.nc"
            if(get_hash_key_fun) {
                # 601 "43function3.nc"
                __right_value0 = (void*)0;
                __dec_obj146=real_fun_name,
                real_fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name,"43function3.nc",601), "43function3.nc", 601, 1134);
                __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 601, 1133);
                # 602 "43function3.nc"
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 602, 1135));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 606, 1136));
        }
        # 609 "43function3.nc"
        if(get_hash_key_fun==((void*)0)) {
            # 607 "43function3.nc"
            __right_value0 = (void*)0;
            get_hash_key_fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
        }
    }
    # 706 "43function3.nc"
    if(get_hash_key_fun==((void*)0)&&type->mPointerNum>0&&!klass->mNumber&&!klass->mProtocol) {
        # 612 "43function3.nc"
        __right_value0 = (void*)0;
        source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "43function3.nc", 612, 1137, "struct buffer* "), "43function3.nc", 612, 1138)), "43function3.nc", 612, 1139);
        # 614 "43function3.nc"
        buffer_append_str(source,"{\n");
        # 616 "43function3.nc"
        i_45=0;
        # 617 "43function3.nc"
        __right_value0 = (void*)0;
        klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
        # 623 "43function3.nc"
        if(list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)==0) {
            # 619 "43function3.nc"
            err_msg(info,"require field");
            # 620 "43function3.nc"
            exit(1);
        }
        # 623 "43function3.nc"
        __right_value0 = (void*)0;
        multiple_assign_var8=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(klass->mFields,0)));
        name_48=(char* )come_increment_ref_count(multiple_assign_var8->v1, "43function3.nc", 623, 1158);
        field_type=(struct sType* )come_increment_ref_count(multiple_assign_var8->v2, "43function3.nc", 623, 1159);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 696, 1160);
        # 625 "43function3.nc"
        char source2[1024];
        memset(&source2, 0, sizeof(source2));
        # 627 "43function3.nc"
        snprintf(source2,1024,"var result = self.%s.compare(right.%s);\n",name_48,name_48);
        # 629 "43function3.nc"
        buffer_append_str(source,source2);
        # 631 "43function3.nc"
        buffer_append_format(source,"return result;\n");
        # 632 "43function3.nc"
        buffer_append_char(source,125);
        # 634 "43function3.nc"
        p=info->p;
        # 635 "43function3.nc"
        sline=info->sline;
        # 636 "43function3.nc"
        sname=(char* )come_increment_ref_count(info->sname, "43function3.nc", 636, 1161);
        # 637 "43function3.nc"
        source3=(struct buffer* )come_increment_ref_count(info->source, "43function3.nc", 637, 1162);
        # 638 "43function3.nc"
        head=info->head;
        # 640 "43function3.nc"
        __dec_obj147=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source, "43function3.nc", 640, 1164);
        come_call_finalizer(buffer_finalize, __dec_obj147,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 640, 1163);
        # 644 "43function3.nc"
        if(info->p==((void*)0)) {
            # 642 "43function3.nc"
            info->p=info->source->buf;
        }
        # 644 "43function3.nc"
        info->p=info->source->buf;
        # 645 "43function3.nc"
        info->head=info->source->buf;
        # 647 "43function3.nc"
        __right_value0 = (void*)0;
        __dec_obj148=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(real_fun_name,"43function3.nc",647), "43function3.nc", 647, 1166);
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 647, 1165);
        # 648 "43function3.nc"
        info->sline=1;
        # 650 "43function3.nc"
        __right_value0 = (void*)0;
        block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "43function3.nc", 650, 1167);
        # 652 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "43function3.nc", 652, 1168, "struct sType* "), "43function3.nc", 652, 1169),(char*)come_increment_ref_count(xsprintf("int"), "43function3.nc", 652, 1170),(_Bool)0,info,(_Bool)0,0), "43function3.nc", 652, 1171);
        # 653 "43function3.nc"
        (name_48 = come_decrement_ref_count(name_48, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 653, 1172));
        __right_value0 = (void*)0;
        name_49=(char* )come_increment_ref_count((char* )come_memdup(real_fun_name, "43function3.nc", 653, 1173, "char* "), "43function3.nc", 653, 1174);
        # 654 "43function3.nc"
        __right_value0 = (void*)0;
        self_type=(struct sType* )come_increment_ref_count(sType_clone(type), "43function3.nc", 654, 1175);
        # 655 "43function3.nc"
        self_type->mHeap=(_Bool)0;
        # 656 "43function3.nc"
        __right_value0 = (void*)0;
        right_type=(struct sType* )come_increment_ref_count(sType_clone(type), "43function3.nc", 656, 1176);
        # 657 "43function3.nc"
        right_type->mHeap=(_Bool)0;
        # 658 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values7__[0]=self_type,
__list_values7__[1]=right_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "43function3.nc", 658, 1177, "struct list$1sType$ph"), "43function3.nc", 658, 1178),2,__list_values7__)), "43function3.nc", 658, 1179);
        # 659 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values8__[0]=((char* )(__right_value0=__builtin_string("self","43function3.nc",659))),
__list_values8__[1]=((char* )(__right_value1=__builtin_string("right","43function3.nc",659))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "43function3.nc", 659, 1180, "struct list$1char$ph"), "43function3.nc", 659, 1181),2,__list_values8__)), "43function3.nc", 659, 1182);
        # 660 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "43function3.nc", 660, 1183, "struct list$1char$ph*"), "43function3.nc", 660, 1184)), "43function3.nc", 660, 1185);
        # 661 "43function3.nc"
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        # 662 "43function3.nc"
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        # 664 "43function3.nc"
        result_type->mStatic=(_Bool)0;
        # 665 "43function3.nc"
        result_type->mUniq=(_Bool)0;
        # 666 "43function3.nc"
        result_type->mInline=(_Bool)0;
        # 668 "43function3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(name_49,"43function3.nc",668)))), "43function3.nc", 668, 1186);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "43function3.nc", 668, 1187));
        # 692 "43function3.nc"
        if(fun2==((void*)0)||fun2->mExternal) {
            # 674 "43function3.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "43function3.nc", 670, 1188, "struct sFun* "), "43function3.nc", 674, 1189),(char* )come_increment_ref_count(name_49, "43function3.nc", 674, 1190),(struct sType*)come_increment_ref_count(result_type, "43function3.nc", 674, 1191),(struct list$1sType$ph*)come_increment_ref_count(param_types, "43function3.nc", 674, 1192),(struct list$1char$ph*)come_increment_ref_count(param_names, "43function3.nc", 674, 1193),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "43function3.nc", 674, 1194),(_Bool)0,(_Bool)0,(struct sBlock* )come_increment_ref_count(block, "43function3.nc", 674, 1195),(_Bool)1,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 674, 1196),(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 674, 1197),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 674, 1198)), "43function3.nc", 674, 1199);
            # 675 "43function3.nc"
            fun->mGenericsFun=(_Bool)1;
            # 677 "43function3.nc"
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(name_49,"43function3.nc",677), "43function3.nc", 677, 1200),(struct sFun*)come_increment_ref_count(fun, "43function3.nc", 677, 1201),(_Bool)0);
            # 679 "43function3.nc"
            get_hash_key_fun=fun;
            # 681 "43function3.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "43function3.nc", 681, 1205, "struct sNode");
            _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "43function3.nc", 681, 1202, "struct sFunNode* "), "43function3.nc", 681, 1203),(struct sFun*)come_increment_ref_count(fun, "43function3.nc", 681, 1204),info))), "43function3.nc", 681, 1206);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value4, "43function3.nc", 681, 1207);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 681, 1208);
            # 687 "43function3.nc"
            Value=node_compile(node,info);
            if(!Value) {
                # 684 "43function3.nc"
                err_msg(info,"compiling error(Y)");
                # 685 "43function3.nc"
                exit(2);
            }
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 692, 1209);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "43function3.nc", 692, 1210):(void*)0);
        }
        else {
            # 689 "43function3.nc"
            get_hash_key_fun=fun2;
        }
        # 692 "43function3.nc"
        __dec_obj149=info->sname,
        info->sname=(char* )come_increment_ref_count(sname, "43function3.nc", 692, 1212);
        __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 692, 1211);
        # 693 "43function3.nc"
        info->sline=sline;
        # 695 "43function3.nc"
        __dec_obj150=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source3, "43function3.nc", 695, 1214);
        come_call_finalizer(buffer_finalize, __dec_obj150,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 695, 1213);
        # 699 "43function3.nc"
        if(info->p==((void*)0)) {
            # 697 "43function3.nc"
            info->p=info->source->buf;
        }
        # 699 "43function3.nc"
        info->p=info->source->buf;
        # 700 "43function3.nc"
        info->p=p;
        # 701 "43function3.nc"
        info->head=head;
        # 702 "43function3.nc"
        info->sline=sline;
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 706, 1215);
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 706, 1216);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 706, 1217));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 706, 1218);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 706, 1219);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 706, 1220);
        (name_49 = come_decrement_ref_count(name_49, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 706, 1221));
        come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 706, 1222);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 706, 1223);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 706, 1224);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 706, 1225);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 706, 1226);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 706, 1227);
    }
    # 706 "43function3.nc"
    info->no_output_come_code=no_output_come_code;
    # 707 "43function3.nc"
    __right_value0 = (void*)0;
    __dec_obj151=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"43function3.nc",707), "43function3.nc", 707, 1229);
    __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 707, 1228);
    # 708 "43function3.nc"
    info->sline=sline_top;
    # 710 "43function3.nc"
    __dec_obj152=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "43function3.nc", 710, 1231);
    __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 710, 1230);
    # 711 "43function3.nc"
    __dec_obj153=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "43function3.nc", 711, 1233);
    __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 711, 1232);
    # 713 "43function3.nc"
    info->caller_fun=caller_fun;
    # 717 "43function3.nc"
    info->right_value_max=right_value_max;
    # 718 "43function3.nc"
    info->right_value_num=right_value_num;
    # 719 "43function3.nc"
    info->num_conditional=num_conditional;
    # 720 "43function3.nc"
    info->max_conditional=max_conditional;
    # 721 "43function3.nc"
    info->in_conditional=in_conditional;
    # 722 "43function3.nc"
    __dec_obj154=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "43function3.nc", 722, 1235);
    come_call_finalizer(buffer_finalize, __dec_obj154,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 722, 1234);
    # 723 "43function3.nc"
    __dec_obj155=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "43function3.nc", 723, 1237);
    come_call_finalizer(buffer_finalize, __dec_obj155,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 723, 1236);
    # 724 "43function3.nc"
    __dec_obj156=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "43function3.nc", 724, 1239);
    come_call_finalizer(buffer_finalize, __dec_obj156,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 724, 1238);
    # 725 "43function3.nc"
    info->current_stack_frame_struct=current_stack_frame_struct;
    # 726 "43function3.nc"
    __dec_obj157=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "43function3.nc", 726, 1241);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj157,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 726, 1240);
    # 727 "43function3.nc"
    __dec_obj158=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "43function3.nc", 727, 1243);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj158,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 727, 1242);
    # 707 "43function3.nc"
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "43function3.nc", 707, 1244, "struct tuple2$2sFun$pchar$ph"), "43function3.nc", 707, 1245),get_hash_key_fun,(char* )come_increment_ref_count(real_fun_name, "43function3.nc", 707, 1246)))), "43function3.nc", 707, 1247);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 707, 1248);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 707, 1249);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 707, 1250);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 707, 1251));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 707, 1252));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 707, 1253));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 707, 1254);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 707, 1255));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 707, 1256);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 707, 1257);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "43function3.nc}", 707, 1258);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* default_value;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    int i;
    struct tuple2$2char$phsType$ph* default_value_46;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value, "./neo-c.h", 2158, 1140);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 1141);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 1142);
        return __result_obj__0;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2161, 1143);
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
                        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it->item, "./neo-c.h", 2169, 1144);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 1145);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_46,0,sizeof(struct tuple2$2char$phsType$ph*));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_46, "./neo-c.h", 2177, 1146);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_46, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 1147);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 1148);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_operator_load_element"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* default_value;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    int i;
    struct tuple2$2char$phsType$ph* default_value_47;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value, "./neo-c.h", 2158, 1149);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 1150);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 1151);
        return __result_obj__0;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2161, 1152);
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
                        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it->item, "./neo-c.h", 2169, 1153);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 1154);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_47,0,sizeof(struct tuple2$2char$phsType$ph*));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_47, "./neo-c.h", 2177, 1155);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_47, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 1156);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 1157);
    return __result_obj__0;
}

