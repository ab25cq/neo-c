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
struct sNode* cast_node(struct sType*  type  , struct sNode* node, struct sInfo*  info  );
struct sNode* create_defference_node(struct sNode* value, _Bool quote, struct sInfo*  info  );
struct sNode* reffence_node(struct sNode* value, struct sInfo*  info  );
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char*  fun_name  , struct list$1sType$ph* method_generics_types, struct sInfo*  info  );
struct sNode* create_return_node(struct sNode* value, struct sInfo*  info  );
struct sNode* post_position_operator(struct sNode* node, struct sInfo*  info  );
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
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun*  fun  , struct sInfo*  info  );
char*  sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo*  info  );
struct tuple2$2char$ph_Bool$* create_generics_fun(char*  fun_name  , struct sGenericsFun*  generics_fun  , struct sType*  generics_type  , struct sInfo*  info  );
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static void sFun_finalize(struct sFun*  self  );
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject*  self  );
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void CVALUE_finalize(struct CVALUE*  self  );
static struct tuple2$2char$ph_Bool$* tuple2$2char$ph_Bool$_initialize(struct tuple2$2char$ph_Bool$* self, char*  v1  , _Bool v2);
static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self);
static struct sType*  sType_clone(struct sType*  self  );
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
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
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  item  , _Bool by_pointer);
static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self);
static void map$2char$phsFun$ph_remove_ordered_entry(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phsFun$ph_key_position(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
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
_Bool create_method_generics_fun(char*  fun_name  , struct sGenericsFun*  generics_fun  , struct sInfo*  info  );
_Bool has_owned_path_to_owner(struct sClass*  current_klass  , struct sClass*  owner_klass  , struct list$1char$ph* visited, struct sInfo*  info  );
static _Bool list$1char$ph_contained(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
_Bool is_owned_main(struct sType*  type_  , struct sClass*  klass  , struct sType*  field_type  , struct sType*  owner  , struct sInfo*  info  );
struct sFun*  compile_uniq_function(struct sFun*  fun  , struct sInfo*  info  );
static int list$1sType$ph_length(struct list$1sType$ph* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
_Bool create_equals_method(struct sType*  type  , struct sInfo*  info  );
static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer);
static void sGenericsFun_finalize(struct sGenericsFun*  self  );
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
_Bool create_operator_equals_method(struct sType*  type  , struct sInfo*  info  );
_Bool create_operator_not_equals_method(struct sType*  type  , struct sInfo*  info  );
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
struct tuple2$2char$ph_Bool$* create_generics_fun(char*  fun_name  , struct sGenericsFun*  generics_fun  , struct sType*  generics_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_generics_fun"; neo_current_frame = &fr;
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
    struct sType*  generics_type_  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sFun*  funX  ;
    char*  __dec_obj6  ;
    char*  __dec_obj7  ;
    char*  __dec_obj8  ;
    struct buffer*  __dec_obj9  ;
    struct buffer*  __dec_obj10  ;
    struct buffer*  __dec_obj11  ;
    struct list$1sRightValueObject$ph* __dec_obj12;
    struct list$1CVALUE$ph* __dec_obj13;
    struct tuple2$2char$ph_Bool$* __result_obj__0;
    struct sType*  result_type_  ;
    struct sType*  result_type  ;
    struct list$1sType$ph* param_types;
    struct list$1sType$ph* _o2_saved_3;
    struct sType*  it  ;
    struct sType*  param_type_  ;
    struct sType*  param_type  ;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    char* p;
    int sline;
    int sline_real;
    int sline_top_10;
    char*  sname  ;
    char* head;
    struct buffer*  source  ;
    struct buffer*  __dec_obj49  ;
    struct sType*  generics_type_saved  ;
    struct sType*  generics_type__11  ;
    struct sType*  __dec_obj50  ;
    struct list$1char$ph* method_generics_type_names;
    struct list$1char$ph* __dec_obj51;
    struct list$1char$ph* _o2_saved_4;
    char*  it_13  ;
    struct list$1char$ph* __dec_obj55;
    char*  __dec_obj56  ;
    struct sBlock*  block  ;
    struct buffer*  __dec_obj57  ;
    char*  __dec_obj58  ;
    _Bool const_fun;
    _Bool var_args;
    struct sFun* fun;
    struct sNode* _inf_value1;
    struct sFunNode* _inf_obj_value1;
    struct sNode* node;
    _Bool in_generics_fun;
    _Bool Value;
    char*  __dec_obj91  ;
    char*  __dec_obj92  ;
    char*  __dec_obj93  ;
    struct buffer*  __dec_obj94  ;
    struct buffer*  __dec_obj95  ;
    struct buffer*  __dec_obj96  ;
    struct list$1sRightValueObject$ph* __dec_obj97;
    struct list$1CVALUE$ph* __dec_obj98;
    struct sType*  __dec_obj99  ;
    struct list$1char$ph* __dec_obj100;
    char*  __dec_obj101  ;
    char*  __dec_obj102  ;
    char*  __dec_obj103  ;
    struct buffer*  __dec_obj104  ;
    struct buffer*  __dec_obj105  ;
    struct buffer*  __dec_obj106  ;
    struct list$1sRightValueObject$ph* __dec_obj107;
    struct list$1CVALUE$ph* __dec_obj108;
    # 6 "44function4.nc"
    current_stack_frame_struct=info->current_stack_frame_struct;
    # 7 "44function4.nc"
    info->current_stack_frame_struct=((void*)0);
    # 8 "44function4.nc"
    caller_fun=info->caller_fun;
    # 9 "44function4.nc"
    info->caller_fun=info->come_fun;
    # 14 "44function4.nc"
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "44function4.nc", 14, 1);
    # 15 "44function4.nc"
    __dec_obj1=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 15, 2);
    # 16 "44function4.nc"
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "44function4.nc", 16, 3);
    # 17 "44function4.nc"
    __dec_obj2=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 17, 4);
    # 18 "44function4.nc"
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "44function4.nc", 18, 5);
    # 19 "44function4.nc"
    __dec_obj3=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 19, 6);
    # 21 "44function4.nc"
    right_value_max=info->right_value_max;
    # 22 "44function4.nc"
    right_value_num=info->right_value_num;
    # 23 "44function4.nc"
    max_conditional=info->max_conditional;
    # 24 "44function4.nc"
    num_conditional=info->num_conditional;
    # 25 "44function4.nc"
    in_conditional=info->in_conditional;
    # 26 "44function4.nc"
    info->in_conditional=(_Bool)0;
    # 28 "44function4.nc"
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "44function4.nc", 28, 7);
    # 29 "44function4.nc"
    __dec_obj4=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 29, 8);
    # 30 "44function4.nc"
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "44function4.nc", 30, 9);
    # 31 "44function4.nc"
    __dec_obj5=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 31, 10);
    # 33 "44function4.nc"
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"44function4.nc",33), "44function4.nc", 33, 11);
    # 34 "44function4.nc"
    sline_top=info->sline;
    # 36 "44function4.nc"
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "44function4.nc", 36, 12);
    # 37 "44function4.nc"
    right_value_objects=info->right_value_objects;
    # 39 "44function4.nc"
    no_output_come_code=info->no_output_come_code;
    # 40 "44function4.nc"
    info->no_output_come_code=(_Bool)0;
    # 9 "44function4.nc"
    __right_value0 = (void*)0;
    generics_type_=(struct sType* )come_increment_ref_count(get_no_solved_type2(generics_type), "44function4.nc", 9, 13);
    # 11 "44function4.nc"
    __right_value0 = (void*)0;
    funX=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(fun_name,"44function4.nc",11)))), "44function4.nc", 11, 102);
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "44function4.nc", 11, 103));
    # 17 "44function4.nc"
    if(funX) {
        # 14 "44function4.nc"
        info->no_output_come_code=no_output_come_code;
        # 15 "44function4.nc"
        __right_value0 = (void*)0;
        __dec_obj6=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"44function4.nc",15), "44function4.nc", 15, 105);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 15, 104);
        # 16 "44function4.nc"
        info->sline=sline_top;
        # 18 "44function4.nc"
        __dec_obj7=info->module->mLastCode,
        info->module->mLastCode=(char* )come_increment_ref_count(last_code, "44function4.nc", 18, 107);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 18, 106);
        # 19 "44function4.nc"
        __dec_obj8=info->module->mLastCode2,
        info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "44function4.nc", 19, 109);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 19, 108);
        # 21 "44function4.nc"
        info->caller_fun=caller_fun;
        # 25 "44function4.nc"
        info->right_value_max=right_value_max;
        # 26 "44function4.nc"
        info->right_value_num=right_value_num;
        # 27 "44function4.nc"
        info->num_conditional=num_conditional;
        # 28 "44function4.nc"
        info->max_conditional=max_conditional;
        # 29 "44function4.nc"
        info->in_conditional=in_conditional;
        # 30 "44function4.nc"
        __dec_obj9=info->if_expression_buffer,
        info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "44function4.nc", 30, 111);
        come_call_finalizer(buffer_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 30, 110);
        # 31 "44function4.nc"
        __dec_obj10=info->loop_expression_buffer,
        info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "44function4.nc", 31, 113);
        come_call_finalizer(buffer_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 31, 112);
        # 32 "44function4.nc"
        __dec_obj11=info->paren_block_buffer,
        info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "44function4.nc", 32, 115);
        come_call_finalizer(buffer_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 32, 114);
        # 33 "44function4.nc"
        info->current_stack_frame_struct=current_stack_frame_struct;
        # 34 "44function4.nc"
        __dec_obj12=info->right_value_objects,
        info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "44function4.nc", 3, 124);
        come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj12,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 3, 123);
        # 35 "44function4.nc"
        __dec_obj13=info->stack,
        info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "44function4.nc", 6, 133);
        come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 6, 132);
        # 14 "44function4.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct tuple2$2char$ph_Bool$*)come_increment_ref_count(((struct tuple2$2char$ph_Bool$*)(__right_value1=tuple2$2char$ph_Bool$_initialize((struct tuple2$2char$ph_Bool$*)come_increment_ref_count((struct tuple2$2char$ph_Bool$*)come_calloc(1, sizeof(struct tuple2$2char$ph_Bool$)*(1), "44function4.nc", 14, 134, "struct tuple2$2char$ph_Bool$"), "44function4.nc", 6, 142),(char* )come_increment_ref_count(fun_name, "44function4.nc", 6, 143),(_Bool)1))), "44function4.nc", 14, 144);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 14, 145));
        come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 14, 146);
        come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 14, 147);
        come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 14, 148);
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 14, 149));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 14, 150));
        (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 14, 151));
        come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 2, 153);
        come_call_finalizer(sType_finalize, generics_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 2, 154);
        come_call_finalizer(sFun_finalize, funX, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 2, 155);
        come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "44function4.nc}", 6, 156);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "44function4.nc}", 2, 157);
        return __result_obj__0;
    }
    # 17 "44function4.nc"
    __right_value0 = (void*)0;
    result_type_=(struct sType* )come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type_,info), "44function4.nc", 17, 158);
    # 19 "44function4.nc"
    __right_value0 = (void*)0;
    result_type=(struct sType* )come_increment_ref_count(solve_method_generics(result_type_,info), "44function4.nc", 19, 159);
    # 21 "44function4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "44function4.nc", 21, 160, "struct list$1sType$ph*"), "44function4.nc", 21, 164)), "44function4.nc", 21, 165);
    # 29 "44function4.nc"
    for(_o2_saved_3=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes, "44function4.nc", 22, 166),it=list$1sType$ph_begin(_o2_saved_3)    ;!list$1sType$ph_end(_o2_saved_3);it=list$1sType$ph_next(_o2_saved_3)){
        # 23 "44function4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_type_=(struct sType* )come_increment_ref_count(solve_generics(((struct sType* )(__right_value0=sType_clone(it))),generics_type_,info), "44function4.nc", 23, 337);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "44function4.nc}", 23, 338);
        # 25 "44function4.nc"
        __right_value0 = (void*)0;
        param_type=(struct sType* )come_increment_ref_count(solve_method_generics(param_type_,info), "44function4.nc", 25, 339);
        # 27 "44function4.nc"
        __right_value0 = (void*)0;
        list$1sType$ph_add(param_types,(struct sType* )come_increment_ref_count(sType_clone(param_type), "44function4.nc", 27, 340));
        come_call_finalizer(sType_finalize, param_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 29, 341);
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 29, 342);
    }
    # 29 "44function4.nc"
    __right_value0 = (void*)0;
    param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames), "44function4.nc", 29, 343);
    # 31 "44function4.nc"
    __right_value0 = (void*)0;
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors), "44function4.nc", 31, 344);
    # 33 "44function4.nc"
    p=info->p;
    # 34 "44function4.nc"
    sline=info->sline;
    # 35 "44function4.nc"
    sline_real=info->sline_real;
    # 36 "44function4.nc"
    sline_top_10=info->sline_top;
    # 37 "44function4.nc"
    sname=(char* )come_increment_ref_count(info->sname, "44function4.nc", 37, 345);
    # 38 "44function4.nc"
    head=info->head;
    # 39 "44function4.nc"
    source=(struct buffer* )come_increment_ref_count(info->source, "44function4.nc", 39, 346);
    # 41 "44function4.nc"
    __right_value0 = (void*)0;
    __dec_obj49=info->source,
    info->source=(struct buffer* )come_increment_ref_count(charp_to_buffer(generics_fun->mBlock), "44function4.nc", 41, 348);
    come_call_finalizer(buffer_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 41, 347);
    # 45 "44function4.nc"
    if(info->p==((void*)0)) {
        # 43 "44function4.nc"
        info->p=info->source->buf;
    }
    # 45 "44function4.nc"
    info->p=info->source->buf;
    # 46 "44function4.nc"
    info->head=info->source->buf;
    # 48 "44function4.nc"
    generics_type_saved=(struct sType* )come_increment_ref_count(info->generics_type, "44function4.nc", 48, 349);
    # 49 "44function4.nc"
    come_call_finalizer(sType_finalize, generics_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 49, 350);
    __right_value0 = (void*)0;
    generics_type__11=(struct sType* )come_increment_ref_count(get_no_solved_type2(generics_type), "44function4.nc", 49, 351);
    # 50 "44function4.nc"
    __right_value0 = (void*)0;
    __dec_obj50=info->generics_type,
    info->generics_type=(struct sType* )come_increment_ref_count(sType_clone(generics_type__11), "44function4.nc", 50, 353);
    come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 50, 352);
    # 52 "44function4.nc"
    method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names, "44function4.nc", 52, 354);
    # 54 "44function4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj51=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "44function4.nc", 54, 355, "struct list$1char$ph*"), "44function4.nc", 54, 356)), "44function4.nc", 54, 358);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 54, 357);
    # 59 "44function4.nc"
    for(_o2_saved_4=(struct list$1char$ph*)come_increment_ref_count(generics_fun->mMethodGenericsTypeNames, "44function4.nc", 55, 359),it_13=list$1char$ph_begin(_o2_saved_4)    ;!list$1char$ph_end(_o2_saved_4);it_13=list$1char$ph_next(_o2_saved_4)){
        # 56 "44function4.nc"
        __right_value0 = (void*)0;
        list$1char$ph_push_back(info->method_generics_type_names,(char* )come_increment_ref_count((char* )come_memdup(it_13, "44function4.nc", 56, 374, "char* "), "44function4.nc", 56, 375));
    }
    # 59 "44function4.nc"
    list$1char$ph_reset(info->generics_type_names);
    # 60 "44function4.nc"
    __right_value0 = (void*)0;
    __dec_obj55=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames), "44function4.nc", 60, 378);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 60, 377);
    # 62 "44function4.nc"
    info->sline=generics_fun->mGenericsSLine;
    # 63 "44function4.nc"
    info->sline_real=generics_fun->mGenericsSLine;
    # 64 "44function4.nc"
    info->sline_top=generics_fun->mGenericsSLine;
    # 65 "44function4.nc"
    __dec_obj56=info->sname,
    info->sname=(char* )come_increment_ref_count(generics_fun->mGenericsSName, "44function4.nc", 65, 380);
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 65, 379);
    # 67 "44function4.nc"
    __right_value0 = (void*)0;
    block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)1), "44function4.nc", 67, 381);
    # 69 "44function4.nc"
    info->head=head;
    # 70 "44function4.nc"
    __dec_obj57=info->source,
    info->source=(struct buffer* )come_increment_ref_count(source, "44function4.nc", 70, 383);
    come_call_finalizer(buffer_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 70, 382);
    # 74 "44function4.nc"
    if(info->p==((void*)0)) {
        # 72 "44function4.nc"
        info->p=info->source->buf;
    }
    # 74 "44function4.nc"
    info->p=info->source->buf;
    # 75 "44function4.nc"
    info->p=p;
    # 76 "44function4.nc"
    info->sline=sline;
    # 77 "44function4.nc"
    info->sline_real=sline_real;
    # 78 "44function4.nc"
    info->sline_top=sline_top_10;
    # 79 "44function4.nc"
    __dec_obj58=info->sname,
    info->sname=(char* )come_increment_ref_count(sname, "44function4.nc", 79, 385);
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 79, 384);
    # 81 "44function4.nc"
    result_type->mInline=(_Bool)0;
    # 82 "44function4.nc"
    result_type->mStatic=(_Bool)0;
    # 83 "44function4.nc"
    result_type->mUniq=(_Bool)0;
    # 85 "44function4.nc"
    const_fun=generics_fun->mConstFun;
    # 87 "44function4.nc"
    var_args=generics_fun->mVarArgs;
    # 91 "44function4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "44function4.nc", 88, 386, "struct sFun* "), "44function4.nc", 91, 387),(char* )come_increment_ref_count(fun_name, "44function4.nc", 91, 388),(struct sType* )come_increment_ref_count(result_type, "44function4.nc", 91, 389),(struct list$1sType$ph*)come_increment_ref_count(param_types, "44function4.nc", 91, 390),(struct list$1char$ph*)come_increment_ref_count(param_names, "44function4.nc", 91, 391),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "44function4.nc", 91, 392),(_Bool)0,var_args,(struct sBlock* )come_increment_ref_count(block, "44function4.nc", 91, 393),(_Bool)1,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "44function4.nc", 91, 394),(char*)come_increment_ref_count(xsprintf(""), "44function4.nc", 91, 395),const_fun,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "44function4.nc", 91, 396)), "44function4.nc", 91, 397);
    # 93 "44function4.nc"
    fun->mGenericsFun=(_Bool)1;
    # 95 "44function4.nc"
    __right_value0 = (void*)0;
    map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"44function4.nc",95), "44function4.nc", 95, 422),(struct sFun*)come_increment_ref_count(fun, "44function4.nc", 95, 423),(_Bool)0);
    # 97 "44function4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "44function4.nc", 97, 427, "struct sNode");
    _inf_obj_value1=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "44function4.nc", 97, 424, "struct sFunNode* "), "44function4.nc", 97, 425),(struct sFun*)come_increment_ref_count(fun, "44function4.nc", 97, 426),info))), "44function4.nc", 97, 428);
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
    node=(struct sNode*)come_increment_ref_count(_inf_value1, "44function4.nc", 97, 642);
    come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "44function4.nc}", 97, 643);
    # 99 "44function4.nc"
    in_generics_fun=info->in_generics_fun;
    # 100 "44function4.nc"
    info->in_generics_fun=(_Bool)1;
    # 105 "44function4.nc"
    Value=node_compile(node,info);
    if(!Value) {
        # 103 "44function4.nc"
        info->no_output_come_code=no_output_come_code;
        # 104 "44function4.nc"
        __right_value0 = (void*)0;
        __dec_obj91=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"44function4.nc",104), "44function4.nc", 104, 645);
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 104, 644);
        # 105 "44function4.nc"
        info->sline=sline_top_10;
        # 107 "44function4.nc"
        __dec_obj92=info->module->mLastCode,
        info->module->mLastCode=(char* )come_increment_ref_count(last_code, "44function4.nc", 107, 647);
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 107, 646);
        # 108 "44function4.nc"
        __dec_obj93=info->module->mLastCode2,
        info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "44function4.nc", 108, 649);
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 108, 648);
        # 110 "44function4.nc"
        info->caller_fun=caller_fun;
        # 114 "44function4.nc"
        info->right_value_max=right_value_max;
        # 115 "44function4.nc"
        info->right_value_num=right_value_num;
        # 116 "44function4.nc"
        info->num_conditional=num_conditional;
        # 117 "44function4.nc"
        info->max_conditional=max_conditional;
        # 118 "44function4.nc"
        info->in_conditional=in_conditional;
        # 119 "44function4.nc"
        __dec_obj94=info->if_expression_buffer,
        info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "44function4.nc", 119, 651);
        come_call_finalizer(buffer_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 119, 650);
        # 120 "44function4.nc"
        __dec_obj95=info->loop_expression_buffer,
        info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "44function4.nc", 120, 653);
        come_call_finalizer(buffer_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 120, 652);
        # 121 "44function4.nc"
        __dec_obj96=info->paren_block_buffer,
        info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "44function4.nc", 121, 655);
        come_call_finalizer(buffer_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 121, 654);
        # 122 "44function4.nc"
        info->current_stack_frame_struct=current_stack_frame_struct;
        # 123 "44function4.nc"
        __dec_obj97=info->right_value_objects,
        info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "44function4.nc", 123, 657);
        come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 123, 656);
        # 124 "44function4.nc"
        __dec_obj98=info->stack,
        info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "44function4.nc", 124, 659);
        come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 124, 658);
        # 103 "44function4.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct tuple2$2char$ph_Bool$*)come_increment_ref_count(((struct tuple2$2char$ph_Bool$*)(__right_value2=tuple2$2char$ph_Bool$_initialize((struct tuple2$2char$ph_Bool$*)come_increment_ref_count((struct tuple2$2char$ph_Bool$*)come_calloc(1, sizeof(struct tuple2$2char$ph_Bool$)*(1), "44function4.nc", 103, 660, "struct tuple2$2char$ph_Bool$"), "44function4.nc", 103, 661),(char*)come_increment_ref_count(xsprintf(""), "44function4.nc", 103, 662),(_Bool)0))), "44function4.nc", 103, 663);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 103, 664));
        come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 103, 665);
        come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 103, 666);
        come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 103, 667);
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 103, 668));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 103, 669));
        (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 103, 670));
        come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 103, 671);
        come_call_finalizer(sFun_finalize, funX, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 103, 672);
        come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 103, 673);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 103, 674);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 103, 675);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 103, 676);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 103, 677);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 103, 678);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 103, 679));
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 103, 680);
        come_call_finalizer(sType_finalize, generics_type_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 103, 681);
        come_call_finalizer(sType_finalize, generics_type__11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 103, 682);
        come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 103, 683);
        come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 103, 684);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 103, 685);
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 103, 686);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "44function4.nc", 103, 687):(void*)0);
        come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "44function4.nc}", 103, 688);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "44function4.nc}", 103, 689);
        return __result_obj__0;
    }
    # 105 "44function4.nc"
    info->in_generics_fun=in_generics_fun;
    # 107 "44function4.nc"
    __dec_obj99=info->generics_type,
    info->generics_type=(struct sType* )come_increment_ref_count(generics_type_saved, "44function4.nc", 107, 691);
    come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 107, 690);
    # 108 "44function4.nc"
    __dec_obj100=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names, "44function4.nc", 108, 693);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 108, 692);
    # 110 "44function4.nc"
    list$1char$ph_reset(info->generics_type_names);
    # 114 "44function4.nc"
    info->no_output_come_code=no_output_come_code;
    # 115 "44function4.nc"
    __right_value0 = (void*)0;
    __dec_obj101=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"44function4.nc",115), "44function4.nc", 115, 695);
    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 115, 694);
    # 116 "44function4.nc"
    info->sline=sline_top_10;
    # 118 "44function4.nc"
    __dec_obj102=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "44function4.nc", 118, 697);
    __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 118, 696);
    # 119 "44function4.nc"
    __dec_obj103=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "44function4.nc", 119, 699);
    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 119, 698);
    # 121 "44function4.nc"
    info->caller_fun=caller_fun;
    # 125 "44function4.nc"
    info->right_value_max=right_value_max;
    # 126 "44function4.nc"
    info->right_value_num=right_value_num;
    # 127 "44function4.nc"
    info->num_conditional=num_conditional;
    # 128 "44function4.nc"
    info->max_conditional=max_conditional;
    # 129 "44function4.nc"
    info->in_conditional=in_conditional;
    # 130 "44function4.nc"
    __dec_obj104=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "44function4.nc", 130, 701);
    come_call_finalizer(buffer_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 130, 700);
    # 131 "44function4.nc"
    __dec_obj105=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "44function4.nc", 131, 703);
    come_call_finalizer(buffer_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 131, 702);
    # 132 "44function4.nc"
    __dec_obj106=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "44function4.nc", 132, 705);
    come_call_finalizer(buffer_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 132, 704);
    # 133 "44function4.nc"
    info->current_stack_frame_struct=current_stack_frame_struct;
    # 134 "44function4.nc"
    __dec_obj107=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "44function4.nc", 134, 707);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 134, 706);
    # 135 "44function4.nc"
    __dec_obj108=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "44function4.nc", 135, 709);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 135, 708);
    # 115 "44function4.nc"
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __result_obj__0 = (struct tuple2$2char$ph_Bool$*)come_increment_ref_count(((struct tuple2$2char$ph_Bool$*)(__right_value2=tuple2$2char$ph_Bool$_initialize((struct tuple2$2char$ph_Bool$*)come_increment_ref_count((struct tuple2$2char$ph_Bool$*)come_calloc(1, sizeof(struct tuple2$2char$ph_Bool$)*(1), "44function4.nc", 115, 710, "struct tuple2$2char$ph_Bool$"), "44function4.nc", 115, 711),(char* )come_increment_ref_count(__builtin_string(fun_name,"44function4.nc",115), "44function4.nc", 115, 712),(_Bool)1))), "44function4.nc", 115, 713);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 115, 714));
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 115, 715);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 115, 716);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 115, 717);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 115, 718));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 115, 719));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 115, 720));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 115, 721);
    come_call_finalizer(sFun_finalize, funX, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 115, 722);
    come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 115, 723);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 115, 724);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 115, 725);
    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 115, 726);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 115, 727);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 115, 728);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 115, 729));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 115, 730);
    come_call_finalizer(sType_finalize, generics_type_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 115, 731);
    come_call_finalizer(sType_finalize, generics_type__11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 115, 732);
    come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 115, 733);
    come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 115, 734);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 115, 735);
    come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 115, 736);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "44function4.nc", 115, 737):(void*)0);
    come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "44function4.nc}", 115, 738);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "44function4.nc}", 115, 739);
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 14);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 73);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 74);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 75);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4065, 76);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4065, 77);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 78);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 79);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 80);
                return __result_obj__0;
            }
        }
        else {
            # 4076 "./neo-c.h"
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 81);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 82);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 83);
            return __result_obj__0;
        }
    }
    # 4080 "./neo-c.h"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 84);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 85);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 86);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    # 1 "sFun_finalize"
    # 3 "sFun_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 2 "sFun_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 15));
    }
    # 4 "sFun_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 3 "sFun_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 48);
    }
    # 5 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 4 "sFun_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 49);
    }
    # 6 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 5 "sFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 50);
    }
    # 7 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        # 6 "sFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 51);
    }
    # 8 "sFun_finalize"
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        # 7 "sFun_finalize"
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 52);
    }
    # 9 "sFun_finalize"
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        # 8 "sFun_finalize"
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 2, 59);
    }
    # 10 "sFun_finalize"
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        # 9 "sFun_finalize"
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 62);
    }
    # 11 "sFun_finalize"
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        # 10 "sFun_finalize"
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 63));
    }
    # 12 "sFun_finalize"
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        # 11 "sFun_finalize"
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 64));
    }
    # 13 "sFun_finalize"
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        # 12 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 65);
    }
    # 14 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        # 13 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 66);
    }
    # 15 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        # 14 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 67);
    }
    # 16 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        # 15 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 68);
    }
    # 17 "sFun_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 16 "sFun_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 69));
    }
    # 18 "sFun_finalize"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 17 "sFun_finalize"
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 70));
    }
    # 19 "sFun_finalize"
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        # 18 "sFun_finalize"
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 71));
    }
    # 20 "sFun_finalize"
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        # 19 "sFun_finalize"
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 72));
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
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 16);
    }
    # 4 "sType_finalize"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 3 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 17);
    }
    # 5 "sType_finalize"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 4 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 20);
    }
    # 6 "sType_finalize"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 5 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 21);
    }
    # 7 "sType_finalize"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 6 "sType_finalize"
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 22):(void*)0);
    }
    # 8 "sType_finalize"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 7 "sType_finalize"
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 23):(void*)0);
    }
    # 9 "sType_finalize"
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        # 8 "sType_finalize"
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 24));
    }
    # 10 "sType_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 9 "sType_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 25));
    }
    # 11 "sType_finalize"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 10 "sType_finalize"
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 26));
    }
    # 12 "sType_finalize"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 11 "sType_finalize"
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 27));
    }
    # 13 "sType_finalize"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 12 "sType_finalize"
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 28));
    }
    # 14 "sType_finalize"
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        # 13 "sType_finalize"
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 29));
    }
    # 15 "sType_finalize"
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        # 14 "sType_finalize"
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 30));
    }
    # 16 "sType_finalize"
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        # 15 "sType_finalize"
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 31));
    }
    # 17 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        # 16 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 34);
    }
    # 18 "sType_finalize"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 17 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 35);
    }
    # 19 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 18 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 37);
    }
    # 20 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 19 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 38);
    }
    # 21 "sType_finalize"
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        # 20 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 39);
    }
    # 22 "sType_finalize"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 21 "sType_finalize"
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 40));
    }
    # 23 "sType_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 22 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 41);
    }
    # 24 "sType_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 23 "sType_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 0, 44);
    }
    # 25 "sType_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 24 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 45);
    }
    # 26 "sType_finalize"
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        # 25 "sType_finalize"
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 46):(void*)0);
    }
    # 27 "sType_finalize"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 26 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 47);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 19);
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
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 18);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 33);
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
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 32):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 36);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 43);
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
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 42));
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 58);
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
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 57);
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
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 53));
    }
    # 4 "sVar_finalize"
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        # 3 "sVar_finalize"
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 54));
    }
    # 5 "sVar_finalize"
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        # 4 "sVar_finalize"
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 55);
    }
    # 6 "sVar_finalize"
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        # 5 "sVar_finalize"
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 56));
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
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 60);
    }
    # 4 "sBlock_finalize"
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        # 3 "sBlock_finalize"
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 61);
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
    # 4047 "./neo-c.h"
    # 4049 "./neo-c.h"
    # 4050 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sFun* ));
    # 4056 "./neo-c.h"
    if(self==((void*)0)) {
        # 4053 "./neo-c.h"
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 87);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 88);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 89);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 90);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4065, 91);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4065, 92);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 93);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 94);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 95);
                return __result_obj__0;
            }
        }
        else {
            # 4076 "./neo-c.h"
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 96);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 97);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 98);
            return __result_obj__0;
        }
    }
    # 4080 "./neo-c.h"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 99);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 100);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 101);
    return __result_obj__0;
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sRightValueObject$ph* it;
    struct list_item$1sRightValueObject$ph* prev_it;
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

static struct tuple2$2char$ph_Bool$* tuple2$2char$ph_Bool$_initialize(struct tuple2$2char$ph_Bool$* self, char*  v1  , _Bool v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$ph_Bool$_initialize"; neo_current_frame = &fr;
    char*  __dec_obj14  ;
    struct tuple2$2char$ph_Bool$* __result_obj__0;
    # 4455 "./neo-c.h"
    __dec_obj14=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "./neo-c.h", 4455, 136);
    __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4455, 135);
    # 4456 "./neo-c.h"
    self->v2=v2;
    # 4458 "./neo-c.h"
        __result_obj__0 = (struct tuple2$2char$ph_Bool$*)come_increment_ref_count(self, "./neo-c.h", 4458, 137);
    come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4458, 139);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4458, 140));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4458, 141);
    return __result_obj__0;
}

static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple2$2char$ph_Bool$$p_finalize"
    # 3 "tuple2$2char$ph_Bool$$p_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple2$2char$ph_Bool$$p_finalize"
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$ph_Bool$$p_finalize", 2, 138));
    }
        neo_current_frame = fr.prev;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1CVALUE$ph* it;
    struct list_item$1CVALUE$ph* prev_it;
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
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 152);
    }
            neo_current_frame = fr.prev;
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
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 161);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 162);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 163);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_begin"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_0  ;
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
    memset(&result_0,0,sizeof(struct sType* ));
    # 1697 "./neo-c.h"
        __result_obj__0 = result_0;
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
    struct sType*  result_1  ;
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
    memset(&result_1,0,sizeof(struct sType* ));
    # 1717 "./neo-c.h"
        __result_obj__0 = result_1;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj15  ;
    struct sType*  __dec_obj16  ;
    struct list$1sType$ph* __dec_obj20;
    struct sType*  __dec_obj21  ;
    struct sNode* __dec_obj22;
    struct sNode* __dec_obj23;
    char*  __dec_obj24  ;
    char*  __dec_obj25  ;
    char*  __dec_obj26  ;
    char*  __dec_obj27  ;
    char*  __dec_obj28  ;
    char*  __dec_obj29  ;
    char*  __dec_obj30  ;
    char*  __dec_obj31  ;
    struct list$1sNode$ph* __dec_obj35;
    struct list$1sNode$ph* __dec_obj36;
    struct list$1int$* __dec_obj37;
    struct list$1int$* __dec_obj38;
    struct sType*  __dec_obj39  ;
    char*  __dec_obj40  ;
    struct list$1sType$ph* __dec_obj41;
    struct list$1char$ph* __dec_obj45;
    struct sType*  __dec_obj46  ;
    struct sNode* __dec_obj47;
    struct list$1sNode$ph* __dec_obj48;
    # 3 "sType_clone"
    # 5 "sType_clone"
    if(self==(void*)0) {
        # 4 "sType_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sType_clone"
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 167, "struct sType* "), "sType_clone", 5, 168);
    # 7 "sType_clone"
    if(self!=((void*)0)) {
        # 6 "sType_clone"
        result->mClass=self->mClass;
    }
    # 8 "sType_clone"
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        # 7 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj15=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 170);
        come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 169);
    }
    # 9 "sType_clone"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 8 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj16=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 172);
        come_call_finalizer(sType_finalize, __dec_obj16,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 171);
    }
    # 10 "sType_clone"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 9 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj20=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 76, 199);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 198);
    }
    # 11 "sType_clone"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 10 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj21=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 201);
        come_call_finalizer(sType_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 200);
    }
    # 12 "sType_clone"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 11 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj22=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 210);
        (__dec_obj22 ? __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 209) :0);
    }
    # 13 "sType_clone"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 12 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj23=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 212);
        (__dec_obj23 ? __dec_obj23 = come_decrement_ref_count(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 211) :0);
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
        __dec_obj24=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 213, "char* "), "sType_clone", 14, 215);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 214);
    }
    # 16 "sType_clone"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 15 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj25=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 216, "char* "), "sType_clone", 15, 218);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 217);
    }
    # 17 "sType_clone"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 16 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj26=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 219, "char* "), "sType_clone", 16, 221);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 220);
    }
    # 18 "sType_clone"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 17 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj27=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 222, "char* "), "sType_clone", 17, 224);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 223);
    }
    # 19 "sType_clone"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 18 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj28=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 225, "char* "), "sType_clone", 18, 227);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 226);
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
        __dec_obj29=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 228, "char* "), "sType_clone", 49, 230);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 229);
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
        __dec_obj30=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 231, "char* "), "sType_clone", 51, 233);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 232);
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
        __dec_obj31=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 234, "char* "), "sType_clone", 54, 236);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 235);
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
        __dec_obj35=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 15, 266);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 265);
    }
    # 59 "sType_clone"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 58 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj36=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 268);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 267);
    }
    # 60 "sType_clone"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 59 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj37=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 15, 288);
        come_call_finalizer(list$1int$_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 287);
    }
    # 61 "sType_clone"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 60 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj38=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 290);
        come_call_finalizer(list$1int$_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 289);
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
        __dec_obj39=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 292);
        come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 291);
    }
    # 68 "sType_clone"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 67 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj40=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 293, "char* "), "sType_clone", 67, 295);
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 294);
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
        __dec_obj41=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 297);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 296);
    }
    # 73 "sType_clone"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 72 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj45=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 15, 329);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 328);
    }
    # 74 "sType_clone"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 73 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj46=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 331);
        come_call_finalizer(sType_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 330);
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
        __dec_obj47=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 333);
        (__dec_obj47 ? __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 332) :0);
    }
    # 77 "sType_clone"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 76 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj48=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 335);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 334);
    }
    # 77 "sType_clone"
        __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 336);
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 173);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 174);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1513, 175, "struct list$1sType$ph*"), "./neo-c.h", 1513, 176)), "./neo-c.h", 1513, 177);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1518, 192));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1521, 193));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 194);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 195);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 196);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj17  ;
    struct list_item$1sType$ph* litem_2;
    struct sType*  __dec_obj18  ;
    struct list_item$1sType$ph* litem_3;
    struct sType*  __dec_obj19  ;
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 178);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1534, 179, "struct list_item$1sType$ph*"))), "./neo-c.h", 1534, 180);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj17=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1538, 182);
        come_call_finalizer(sType_finalize, __dec_obj17,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 181);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1544, 183, "struct list_item$1sType$ph*"))), "./neo-c.h", 1544, 184);
        # 1546 "./neo-c.h"
        litem_2->prev=self->head;
        # 1547 "./neo-c.h"
        litem_2->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj18=litem_2->item,
        litem_2->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1548, 186);
        come_call_finalizer(sType_finalize, __dec_obj18,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 185);
        # 1550 "./neo-c.h"
        self->tail=litem_2;
        # 1551 "./neo-c.h"
        self->head->next=litem_2;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1554, 187, "struct list_item$1sType$ph*"))), "./neo-c.h", 1554, 188);
        # 1556 "./neo-c.h"
        litem_3->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_3->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj19=litem_3->item,
        litem_3->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1558, 190);
        come_call_finalizer(sType_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 189);
        # 1560 "./neo-c.h"
        self->tail->next=litem_3;
        # 1561 "./neo-c.h"
        self->tail=litem_3;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 191);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 197);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 202);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 203):(void*)0);
        return __result_obj__0;
    }
    # 5 "sNode_clone"
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 204, "struct sNode*"), "sNode_clone", 5, 205);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 206);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 207):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 208):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 237);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 238);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1513, 239, "struct list$1sNode$ph*"), "./neo-c.h", 1513, 243)), "./neo-c.h", 1513, 244);
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
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 240);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 241);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 242);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj32;
    struct list_item$1sNode$ph* litem_4;
    struct sNode* __dec_obj33;
    struct list_item$1sNode$ph* litem_5;
    struct sNode* __dec_obj34;
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1531, 245):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1534, 246, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1534, 247);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj32=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1538, 249);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1538, 248) :0);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1544, 250, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1544, 251);
        # 1546 "./neo-c.h"
        litem_4->prev=self->head;
        # 1547 "./neo-c.h"
        litem_4->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj33=litem_4->item,
        litem_4->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1548, 253);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1548, 252) :0);
        # 1550 "./neo-c.h"
        self->tail=litem_4;
        # 1551 "./neo-c.h"
        self->head->next=litem_4;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1554, 254, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1554, 255);
        # 1556 "./neo-c.h"
        litem_5->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_5->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj34=litem_5->item,
        litem_5->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1558, 257);
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1558, 256) :0);
        # 1560 "./neo-c.h"
        self->tail->next=litem_5;
        # 1561 "./neo-c.h"
        self->tail=litem_5;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1566, 258):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 264);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 269);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 270);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1513, 271, "struct list$1int$*"), "./neo-c.h", 1513, 275)), "./neo-c.h", 1513, 276);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1527, 283);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 284);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 285);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1485, 272);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 273);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 274);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_6;
    struct list_item$1int$* litem_7;
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1534, 277, "struct list_item$1int$*"))), "./neo-c.h", 1534, 278);
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
        litem_6=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1544, 279, "struct list_item$1int$*"))), "./neo-c.h", 1544, 280);
        # 1546 "./neo-c.h"
        litem_6->prev=self->head;
        # 1547 "./neo-c.h"
        litem_6->next=((void*)0);
        # 1548 "./neo-c.h"
        litem_6->item=item;
        # 1550 "./neo-c.h"
        self->tail=litem_6;
        # 1551 "./neo-c.h"
        self->head->next=litem_6;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1554, 281, "struct list_item$1int$*"))), "./neo-c.h", 1554, 282);
        # 1556 "./neo-c.h"
        litem_7->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_7->next=((void*)0);
        # 1558 "./neo-c.h"
        litem_7->item=item;
        # 1560 "./neo-c.h"
        self->tail->next=litem_7;
        # 1561 "./neo-c.h"
        self->tail=litem_7;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 286);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 298);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 299);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1513, 300, "struct list$1char$ph*"), "./neo-c.h", 1513, 304)), "./neo-c.h", 1513, 305);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1518, 320, "char* "), "./neo-c.h", 1518, 321));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1521, 322, "char* "), "./neo-c.h", 1521, 323));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 324);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 325);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 326);
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 301);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 302);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 303);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj42  ;
    struct list_item$1char$ph* litem_8;
    char*  __dec_obj43  ;
    struct list_item$1char$ph* litem_9;
    char*  __dec_obj44  ;
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1531, 306));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1534, 307, "struct list_item$1char$ph*"))), "./neo-c.h", 1534, 308);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj42=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1538, 310);
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1538, 309);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1544, 311, "struct list_item$1char$ph*"))), "./neo-c.h", 1544, 312);
        # 1546 "./neo-c.h"
        litem_8->prev=self->head;
        # 1547 "./neo-c.h"
        litem_8->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj43=litem_8->item,
        litem_8->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1548, 314);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1548, 313);
        # 1550 "./neo-c.h"
        self->tail=litem_8;
        # 1551 "./neo-c.h"
        self->head->next=litem_8;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1554, 315, "struct list_item$1char$ph*"))), "./neo-c.h", 1554, 316);
        # 1556 "./neo-c.h"
        litem_9->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_9->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj44=litem_9->item,
        litem_9->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1558, 318);
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1558, 317);
        # 1560 "./neo-c.h"
        self->tail->next=litem_9;
        # 1561 "./neo-c.h"
        self->tail=litem_9;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1566, 319));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 327);
    }
            neo_current_frame = fr.prev;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_12  ;
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
    memset(&result_12,0,sizeof(char* ));
    # 1697 "./neo-c.h"
        __result_obj__0 = result_12;
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
    char*  result_14  ;
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
    memset(&result_14,0,sizeof(char* ));
    # 1717 "./neo-c.h"
        __result_obj__0 = result_14;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj52  ;
    struct list_item$1char$ph* litem_15;
    char*  __dec_obj53  ;
    struct list_item$1char$ph* litem_16;
    char*  __dec_obj54  ;
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1615, 360));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1619, 361, "struct list_item$1char$ph*"))), "./neo-c.h", 1619, 362);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj52=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1623, 364);
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1623, 363);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_15=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1629, 365, "struct list_item$1char$ph*"))), "./neo-c.h", 1629, 366);
        # 1631 "./neo-c.h"
        litem_15->prev=self->head;
        # 1632 "./neo-c.h"
        litem_15->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj53=litem_15->item,
        litem_15->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1633, 368);
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1633, 367);
        # 1635 "./neo-c.h"
        self->tail=litem_15;
        # 1636 "./neo-c.h"
        self->head->next=litem_15;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_16=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1639, 369, "struct list_item$1char$ph*"))), "./neo-c.h", 1639, 370);
        # 1641 "./neo-c.h"
        litem_16->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_16->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj54=litem_16->item,
        litem_16->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1643, 372);
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1643, 371);
        # 1645 "./neo-c.h"
        self->tail->next=litem_16;
        # 1646 "./neo-c.h"
        self->tail=litem_16;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1651, 373));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1864, 376);
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

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phsFun$ph* __result_obj__0;
    _Bool add_to_key_list;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 3889 "./neo-c.h"
    # 3895 "./neo-c.h"
    if(self==((void*)0)) {
        # 3892 "./neo-c.h"
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3892, 398));
        come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3892, 399);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3898 "./neo-c.h"
    if(self->len*10>=self->size) {
        # 3896 "./neo-c.h"
        map$2char$phsFun$ph_rehash(self);
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
                map$2char$phsFun$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                # 3917 "./neo-c.h"
                if(1) {
                    # 3911 "./neo-c.h"
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3911, 413));
                    # 3912 "./neo-c.h"
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3912, 414);
                }
                else {
                    # 3915 "./neo-c.h"
                    self->keys[it]=key;
                }
                # 3924 "./neo-c.h"
                if(1) {
                    # 3918 "./neo-c.h"
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3918, 415);
                    # 3919 "./neo-c.h"
                    self->items[it]=(struct sFun* )come_increment_ref_count(item, "./neo-c.h", 3919, 416);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3942, 417);
            }
            else {
                # 3945 "./neo-c.h"
                self->keys[it]=key;
            }
            # 3954 "./neo-c.h"
            if(1) {
                # 3948 "./neo-c.h"
                self->items[it]=(struct sFun* )come_increment_ref_count(item, "./neo-c.h", 3948, 418);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 3962, 419));
    }
    # 3965 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3965, 420));
    come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3965, 421);
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
    int i_17;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    # 3806 "./neo-c.h"
    # 3808 "./neo-c.h"
    old_size=self->size;
    # 3809 "./neo-c.h"
    size=self->size*10;
    # 3810 "./neo-c.h"
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3810, 400, "char** "))), "./neo-c.h", 3810, 401);
    # 3811 "./neo-c.h"
    __right_value0 = (void*)0;
    items=(struct sFun** )come_increment_ref_count(((struct sFun** )(__right_value0=(struct sFun* *)come_calloc(1, sizeof(struct sFun* )*(1*(size)), "./neo-c.h", 3811, 402, "struct sFun** "))), "./neo-c.h", 3811, 403);
    # 3812 "./neo-c.h"
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3812, 404, "unsigned int*"))), "./neo-c.h", 3812, 405);
    # 3813 "./neo-c.h"
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3813, 406, "_Bool*"))), "./neo-c.h", 3813, 407);
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
    for(i_17=0    ;i_17<old_size;i_17++){
        # 3826 "./neo-c.h"
        if(!self->item_existance[i_17]) {
            # 3823 "./neo-c.h"
            continue;
        }
        # 3826 "./neo-c.h"
        key_hash=self->hashes[i_17];
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
                keys[n]=self->keys[i_17];
                # 3846 "./neo-c.h"
                items[n]=self->items[i_17];
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
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3855, 408));
    # 3856 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3856, 409));
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

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_delete"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    int tmp;
    struct list_item$1char$ph* it;
    int i;
    struct list_item$1char$ph* prev_it;
    struct list_item$1char$ph* it_18;
    int i_19;
    struct list_item$1char$ph* prev_it_20;
    struct list_item$1char$ph* it_21;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_22;
    struct list_item$1char$ph* prev_it_23;
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1942, 410);
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
        it_18=self->head;
        # 1959 "./neo-c.h"
        i_19=0;
        # 1981 "./neo-c.h"
        while(it_18!=((void*)0)) {
            # 1966 "./neo-c.h"
            if(i_19==head) {
                # 1962 "./neo-c.h"
                self->tail=it_18->prev;
                # 1963 "./neo-c.h"
                self->tail->next=((void*)0);
            }
            # 1980 "./neo-c.h"
            if(i_19>=head) {
                # 1967 "./neo-c.h"
                prev_it_20=it_18;
                # 1969 "./neo-c.h"
                it_18=it_18->next;
                # 1970 "./neo-c.h"
                i_19++;
                # 1972 "./neo-c.h"
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_20, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1972, 411);
                # 1974 "./neo-c.h"
                self->len--;
            }
            else {
                # 1977 "./neo-c.h"
                it_18=it_18->next;
                # 1978 "./neo-c.h"
                i_19++;
            }
        }
    }
    else {
        # 1983 "./neo-c.h"
        it_21=self->head;
        # 1985 "./neo-c.h"
        head_prev_it=((void*)0);
        # 1986 "./neo-c.h"
        tail_it=((void*)0);
        # 1989 "./neo-c.h"
        i_22=0;
        # 2015 "./neo-c.h"
        while(it_21!=((void*)0)) {
            # 1994 "./neo-c.h"
            if(i_22==head) {
                # 1992 "./neo-c.h"
                head_prev_it=it_21->prev;
            }
            # 1998 "./neo-c.h"
            if(i_22==tail) {
                # 1995 "./neo-c.h"
                tail_it=it_21;
            }
            # 2013 "./neo-c.h"
            if(i_22>=head&&i_22<tail) {
                # 2000 "./neo-c.h"
                prev_it_23=it_21;
                # 2002 "./neo-c.h"
                it_21=it_21->next;
                # 2003 "./neo-c.h"
                i_22++;
                # 2005 "./neo-c.h"
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_23, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2005, 412);
                # 2007 "./neo-c.h"
                self->len--;
            }
            else {
                # 2010 "./neo-c.h"
                it_21=it_21->next;
                # 2011 "./neo-c.h"
                i_22++;
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

static void sFunNode_finalize(struct sFunNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_finalize"; neo_current_frame = &fr;
    # 1 "sFunNode_finalize"
    # 3 "sFunNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sFunNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFunNode_finalize", 2, 429));
    }
    # 4 "sFunNode_finalize"
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        # 3 "sFunNode_finalize"
        come_call_finalizer(sFun_finalize, self->mFun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunNode_finalize}", 3, 430);
    }
        neo_current_frame = fr.prev;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_clone"; neo_current_frame = &fr;
    struct sFunNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFunNode*  result  ;
    char*  __dec_obj59  ;
    struct sFun*  __dec_obj90  ;
    # 3 "sFunNode_clone"
    # 5 "sFunNode_clone"
    if(self==(void*)0) {
        # 4 "sFunNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sFunNode_clone"
    result=(struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "sFunNode_clone", 5, 431, "struct sFunNode* "), "sFunNode_clone", 5, 432);
    # 7 "sFunNode_clone"
    if(self!=((void*)0)) {
        # 6 "sFunNode_clone"
        result->sline=self->sline;
    }
    # 8 "sFunNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sFunNode_clone"
        __right_value0 = (void*)0;
        __dec_obj59=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sFunNode_clone", 7, 433, "char* "), "sFunNode_clone", 7, 435);
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "sFunNode_clone", 7, 434);
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
        __dec_obj90=result->mFun,
        result->mFun=(struct sFun* )come_increment_ref_count(sFun_clone(self->mFun), "sFunNode_clone", 9, 640);
        come_call_finalizer(sFun_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunNode_clone", 9, 639);
    }
    # 10 "sFunNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sFunNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFunNode_clone}", 10, 641);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sFun*  sFun_clone(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_clone"; neo_current_frame = &fr;
    struct sFun*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sFun*  result  ;
    char*  __dec_obj60  ;
    struct sType*  __dec_obj61  ;
    struct list$1sType$ph* __dec_obj62;
    struct list$1char$ph* __dec_obj63;
    struct list$1char$ph* __dec_obj64;
    struct sType*  __dec_obj65  ;
    struct list$1sVar$ph* __dec_obj73;
    struct sBlock*  __dec_obj79  ;
    char*  __dec_obj80  ;
    char*  __dec_obj81  ;
    struct buffer*  __dec_obj82  ;
    struct buffer*  __dec_obj83  ;
    struct buffer*  __dec_obj84  ;
    struct buffer*  __dec_obj85  ;
    char*  __dec_obj86  ;
    char*  __dec_obj87  ;
    char*  __dec_obj88  ;
    char*  __dec_obj89  ;
    # 3 "sFun_clone"
    # 5 "sFun_clone"
    if(self==(void*)0) {
        # 4 "sFun_clone"
                __result_obj__0 = (struct sFun* )come_increment_ref_count((void*)0, "sFun_clone", 4, 436);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 4, 437);
        return __result_obj__0;
    }
    # 5 "sFun_clone"
    result=(struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "sFun_clone", 5, 438, "struct sFun* "), "sFun_clone", 5, 439);
    # 7 "sFun_clone"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 6 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj60=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sFun_clone", 6, 440, "char* "), "sFun_clone", 6, 442);
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 6, 441);
    }
    # 8 "sFun_clone"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 7 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj61=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sFun_clone", 7, 444);
        come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 7, 443);
    }
    # 9 "sFun_clone"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 8 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj62=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sFun_clone", 8, 446);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 8, 445);
    }
    # 10 "sFun_clone"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 9 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj63=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sFun_clone", 9, 448);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 9, 447);
    }
    # 11 "sFun_clone"
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        # 10 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj64=result->mParamDefaultParametors,
        result->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamDefaultParametors), "sFun_clone", 10, 450);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 10, 449);
    }
    # 12 "sFun_clone"
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        # 11 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj65=result->mLambdaType,
        result->mLambdaType=(struct sType* )come_increment_ref_count(sType_clone(self->mLambdaType), "sFun_clone", 11, 452);
        come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 11, 451);
    }
    # 13 "sFun_clone"
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        # 12 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj73=result->mAllVar,
        result->mAllVar=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph$p_clone(self->mAllVar), "sFun_clone", 13, 500);
        come_call_finalizer(list$1sVar$ph_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 13, 499);
    }
    # 14 "sFun_clone"
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        # 13 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj79=result->mBlock,
        result->mBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(self->mBlock), "sFun_clone", 13, 609);
        come_call_finalizer(sBlock_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 13, 608);
    }
    # 15 "sFun_clone"
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        # 14 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj80=result->mTextBlock,
        result->mTextBlock=(char* )come_increment_ref_count((char* )come_memdup(self->mTextBlock, "sFun_clone", 14, 610, "char* "), "sFun_clone", 14, 612);
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 14, 611);
    }
    # 16 "sFun_clone"
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        # 15 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj81=result->mTextBlockSName,
        result->mTextBlockSName=(char* )come_increment_ref_count((char* )come_memdup(self->mTextBlockSName, "sFun_clone", 15, 613, "char* "), "sFun_clone", 15, 615);
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 15, 614);
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
        __dec_obj82=result->mSource,
        result->mSource=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSource), "sFun_clone", 17, 617);
        come_call_finalizer(buffer_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 17, 616);
    }
    # 19 "sFun_clone"
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        # 18 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj83=result->mSourceHead,
        result->mSourceHead=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceHead), "sFun_clone", 18, 619);
        come_call_finalizer(buffer_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 18, 618);
    }
    # 20 "sFun_clone"
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        # 19 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj84=result->mSourceHead2,
        result->mSourceHead2=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceHead2), "sFun_clone", 19, 621);
        come_call_finalizer(buffer_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 19, 620);
    }
    # 21 "sFun_clone"
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        # 20 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj85=result->mSourceEnd,
        result->mSourceEnd=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceEnd), "sFun_clone", 20, 623);
        come_call_finalizer(buffer_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 20, 622);
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
        __dec_obj86=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sFun_clone", 28, 624, "char* "), "sFun_clone", 28, 626);
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 28, 625);
    }
    # 30 "sFun_clone"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 29 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj87=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sFun_clone", 29, 627, "char* "), "sFun_clone", 29, 629);
        __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 29, 628);
    }
    # 31 "sFun_clone"
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        # 30 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj88=result->mFunAttribute,
        result->mFunAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mFunAttribute, "sFun_clone", 30, 630, "char* "), "sFun_clone", 30, 632);
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 30, 631);
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
        __dec_obj89=result->mAsmFun,
        result->mAsmFun=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmFun, "sFun_clone", 33, 633, "char* "), "sFun_clone", 33, 635);
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 33, 634);
    }
    # 34 "sFun_clone"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(result, "sFun_clone", 34, 636);
    come_call_finalizer(sFun_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 34, 637);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 34, 638);
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
    # 1513 "./neo-c.h"
    if(self==((void*)0)) {
        # 1511 "./neo-c.h"
                __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 453);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 454);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc(1, sizeof(struct list$1sVar$ph)*(1), "./neo-c.h", 1513, 455, "struct list$1sVar$ph*"), "./neo-c.h", 1513, 459)), "./neo-c.h", 1513, 460);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sVar$ph_add(result,(struct sVar* )come_increment_ref_count(sVar_clone(it->item), "./neo-c.h", 1518, 493));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sVar$ph_add(result,(struct sVar* )come_increment_ref_count(sVar_clone(it->item), "./neo-c.h", 1521, 494));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 495);
    come_call_finalizer(list$1sVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 496);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 497);
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
        __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 456);
    come_call_finalizer(list$1sVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 457);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 458);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_add"; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sVar$ph* litem;
    struct sVar*  __dec_obj66  ;
    struct list_item$1sVar$ph* litem_24;
    struct sVar*  __dec_obj67  ;
    struct list_item$1sVar$ph* litem_25;
    struct sVar*  __dec_obj68  ;
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 461);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./neo-c.h", 1534, 462, "struct list_item$1sVar$ph*"))), "./neo-c.h", 1534, 463);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj66=litem->item,
        litem->item=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 1538, 465);
        come_call_finalizer(sVar_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 464);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_24=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./neo-c.h", 1544, 466, "struct list_item$1sVar$ph*"))), "./neo-c.h", 1544, 467);
        # 1546 "./neo-c.h"
        litem_24->prev=self->head;
        # 1547 "./neo-c.h"
        litem_24->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj67=litem_24->item,
        litem_24->item=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 1548, 469);
        come_call_finalizer(sVar_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 468);
        # 1550 "./neo-c.h"
        self->tail=litem_24;
        # 1551 "./neo-c.h"
        self->head->next=litem_24;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_25=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./neo-c.h", 1554, 470, "struct list_item$1sVar$ph*"))), "./neo-c.h", 1554, 471);
        # 1556 "./neo-c.h"
        litem_25->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_25->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj68=litem_25->item,
        litem_25->item=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 1558, 473);
        come_call_finalizer(sVar_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 472);
        # 1560 "./neo-c.h"
        self->tail->next=litem_25;
        # 1561 "./neo-c.h"
        self->tail=litem_25;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 474);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  sVar_clone(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_clone"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVar*  result  ;
    char*  __dec_obj69  ;
    char*  __dec_obj70  ;
    struct sType*  __dec_obj71  ;
    char*  __dec_obj72  ;
    # 3 "sVar_clone"
    # 5 "sVar_clone"
    if(self==(void*)0) {
        # 4 "sVar_clone"
                __result_obj__0 = (struct sVar* )come_increment_ref_count((void*)0, "sVar_clone", 4, 475);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 4, 476);
        return __result_obj__0;
    }
    # 5 "sVar_clone"
    result=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "sVar_clone", 5, 477, "struct sVar* "), "sVar_clone", 5, 478);
    # 7 "sVar_clone"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 6 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj69=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sVar_clone", 6, 479, "char* "), "sVar_clone", 6, 481);
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 6, 480);
    }
    # 8 "sVar_clone"
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        # 7 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj70=result->mCValueName,
        result->mCValueName=(char* )come_increment_ref_count((char* )come_memdup(self->mCValueName, "sVar_clone", 7, 482, "char* "), "sVar_clone", 7, 484);
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 7, 483);
    }
    # 9 "sVar_clone"
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        # 8 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj71=result->mType,
        result->mType=(struct sType* )come_increment_ref_count(sType_clone(self->mType), "sVar_clone", 8, 486);
        come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_clone", 8, 485);
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
        __dec_obj72=result->mFunName,
        result->mFunName=(char* )come_increment_ref_count((char* )come_memdup(self->mFunName, "sVar_clone", 12, 487, "char* "), "sVar_clone", 12, 489);
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 12, 488);
    }
    # 14 "sVar_clone"
    if(self!=((void*)0)) {
        # 13 "sVar_clone"
        result->no_output_come_code=self->no_output_come_code;
    }
    # 14 "sVar_clone"
        __result_obj__0 = (struct sVar* )come_increment_ref_count(result, "sVar_clone", 14, 490);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 491);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 492);
    return __result_obj__0;
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 498);
    }
            neo_current_frame = fr.prev;
}

static struct sBlock*  sBlock_clone(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_clone"; neo_current_frame = &fr;
    struct sBlock*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sBlock*  result  ;
    struct list$1sNode$ph* __dec_obj74;
    struct sVarTable*  __dec_obj78  ;
    # 3 "sBlock_clone"
    # 5 "sBlock_clone"
    if(self==(void*)0) {
        # 4 "sBlock_clone"
                __result_obj__0 = (struct sBlock* )come_increment_ref_count((void*)0, "sBlock_clone", 4, 501);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 4, 502);
        return __result_obj__0;
    }
    # 5 "sBlock_clone"
    result=(struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "sBlock_clone", 5, 503, "struct sBlock* "), "sBlock_clone", 5, 504);
    # 7 "sBlock_clone"
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        # 6 "sBlock_clone"
        __right_value0 = (void*)0;
        __dec_obj74=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes), "sBlock_clone", 6, 506);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 6, 505);
    }
    # 8 "sBlock_clone"
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        # 7 "sBlock_clone"
        __right_value0 = (void*)0;
        __dec_obj78=result->mVarTable,
        result->mVarTable=(struct sVarTable* )come_increment_ref_count(sVarTable_clone(self->mVarTable), "sBlock_clone", 7, 604);
        come_call_finalizer(sVarTable_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 7, 603);
    }
    # 9 "sBlock_clone"
    if(self!=((void*)0)) {
        # 8 "sBlock_clone"
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
    # 9 "sBlock_clone"
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(result, "sBlock_clone", 9, 605);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 606);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 607);
    return __result_obj__0;
}

static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_clone"; neo_current_frame = &fr;
    struct sVarTable*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVarTable*  result  ;
    struct map$2char$phsVar$ph* __dec_obj77;
    # 3 "sVarTable_clone"
    # 5 "sVarTable_clone"
    if(self==(void*)0) {
        # 4 "sVarTable_clone"
                __result_obj__0 = (struct sVarTable* )come_increment_ref_count((void*)0, "sVarTable_clone", 4, 507);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 4, 508);
        return __result_obj__0;
    }
    # 5 "sVarTable_clone"
    result=(struct sVarTable* )come_increment_ref_count((struct sVarTable *)come_calloc(1, sizeof(struct sVarTable )*(1), "sVarTable_clone", 5, 509, "struct sVarTable* "), "sVarTable_clone", 5, 510);
    # 7 "sVarTable_clone"
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        # 6 "sVarTable_clone"
        __right_value0 = (void*)0;
        __dec_obj77=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars), "sVarTable_clone", 8, 599);
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarTable_clone", 8, 598);
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
        __result_obj__0 = (struct sVarTable* )come_increment_ref_count(result, "sVarTable_clone", 9, 600);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 601);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 602);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_clone"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* result;
    struct list$1char$ph* __dec_obj76;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    # 3441 "./neo-c.h"
    # 3447 "./neo-c.h"
    if(self==((void*)0)) {
        # 3444 "./neo-c.h"
                __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 3444, 511);
        neo_current_frame = fr.prev;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 8, 517);
        return __result_obj__0;
    }
    # 3447 "./neo-c.h"
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./neo-c.h", 3447, 518, "struct map$2char$phsVar$ph*"), "./neo-c.h", 3447, 534)), "./neo-c.h", 3447, 535);
    # 3449 "./neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj76=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3449, 536, "struct list$1char$ph*"), "./neo-c.h", 3449, 537)), "./neo-c.h", 3449, 539);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3449, 538);
    # 3471 "./neo-c.h"
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        # 3452 "./neo-c.h"
        # 3453 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sVar* ));
        # 3455 "./neo-c.h"
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3455, 555),(_Bool)1), "./neo-c.h", 3455, 556);
        # 3469 "./neo-c.h"
        if(1&&1) {
            # 3458 "./neo-c.h"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "./neo-c.h", 3458, 578, "char* "), "./neo-c.h", 3458, 579),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3458, 580),(_Bool)0);
        }
        else if(1) {
            # 3461 "./neo-c.h"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "./neo-c.h", 3461, 581, "char* "), "./neo-c.h", 3461, 582),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3461, 583),(_Bool)0);
        }
        else if(1) {
            # 3464 "./neo-c.h"
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "./neo-c.h", 3464, 584),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3464, 585),(_Bool)0);
        }
        else {
            # 3467 "./neo-c.h"
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "./neo-c.h", 3467, 586),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3467, 587),(_Bool)0);
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3471, 588);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3471, 589);
    }
    # 3471 "./neo-c.h"
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result, "./neo-c.h", 3471, 590);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3471, 591);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3471, 592);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_26;
    # 3389 "./neo-c.h"
    # 3398 "./neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3397 "./neo-c.h"
        if(self->item_existance[i]) {
            # 3396 "./neo-c.h"
            if(1) {
                # 3394 "./neo-c.h"
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3394, 512);
            }
        }
    }
    # 3398 "./neo-c.h"
    come_free((char*)self->items);
    # 3407 "./neo-c.h"
    for(i_26=0    ;i_26<self->size;i_26++){
        # 3406 "./neo-c.h"
        if(self->item_existance[i_26]) {
            # 3405 "./neo-c.h"
            if(1) {
                # 3403 "./neo-c.h"
                (self->keys[i_26] = come_decrement_ref_count(self->keys[i_26], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3403, 513));
            }
        }
    }
    # 3407 "./neo-c.h"
    come_free((char*)self->keys);
    # 3409 "./neo-c.h"
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3409, 514);
    # 3411 "./neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3411, 515));
    # 3412 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3412, 516));
            neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj75;
    struct map$2char$phsVar$ph* __result_obj__0;
    # 3338 "./neo-c.h"
    # 3340 "./neo-c.h"
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "./neo-c.h", 3340, 519, "char** "))), "./neo-c.h", 3340, 520);
    # 3341 "./neo-c.h"
    __right_value0 = (void*)0;
    self->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), "./neo-c.h", 3341, 521, "struct sVar** "))), "./neo-c.h", 3341, 522);
    # 3342 "./neo-c.h"
    __right_value0 = (void*)0;
    self->hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(128)), "./neo-c.h", 3342, 523, "unsigned int*"))), "./neo-c.h", 3342, 524);
    # 3343 "./neo-c.h"
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 3343, 525, "_Bool*"))), "./neo-c.h", 3343, 526);
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
    __dec_obj75=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3354, 527, "struct list$1char$ph*"), "./neo-c.h", 3354, 528)), "./neo-c.h", 3354, 530);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3354, 529);
    # 3356 "./neo-c.h"
    self->it=0;
    # 3358 "./neo-c.h"
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self, "./neo-c.h", 3358, 531);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3358, 532);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3358, 533);
    return __result_obj__0;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_27  ;
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
    memset(&result_27,0,sizeof(char* ));
    # 3779 "./neo-c.h"
        __result_obj__0 = result_27;
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
    char*  result_28  ;
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
    memset(&result_28,0,sizeof(char* ));
    # 3798 "./neo-c.h"
        __result_obj__0 = result_28;
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
    # 3509 "./neo-c.h"
    # 3515 "./neo-c.h"
    if(self==((void*)0)) {
        # 3512 "./neo-c.h"
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3512, 540);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 541);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 542);
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
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "./neo-c.h", 3525, 543);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3525, 544);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3525, 545);
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
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3532, 546);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 547);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 548);
                return __result_obj__0;
            }
        }
        else {
            # 3536 "./neo-c.h"
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3536, 549);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 550);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 551);
            return __result_obj__0;
        }
    }
    # 3540 "./neo-c.h"
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3540, 552);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 553);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 554);
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
    # 3968 "./neo-c.h"
    # 3974 "./neo-c.h"
    if(self==((void*)0)) {
        # 3971 "./neo-c.h"
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3971, 557));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3971, 558);
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
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3990, 569));
                    # 3991 "./neo-c.h"
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3991, 570);
                }
                else {
                    # 3994 "./neo-c.h"
                    self->keys[it]=key;
                }
                # 4003 "./neo-c.h"
                if(1) {
                    # 3997 "./neo-c.h"
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3997, 571);
                    # 3998 "./neo-c.h"
                    self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 3998, 572);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4021, 573);
            }
            else {
                # 4024 "./neo-c.h"
                self->keys[it]=key;
            }
            # 4033 "./neo-c.h"
            if(1) {
                # 4027 "./neo-c.h"
                self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 4027, 574);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 4041, 575));
    }
    # 4044 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4044, 576));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4044, 577);
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
    int i_29;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    # 3806 "./neo-c.h"
    # 3808 "./neo-c.h"
    old_size=self->size;
    # 3809 "./neo-c.h"
    size=self->size*10;
    # 3810 "./neo-c.h"
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3810, 559, "char** "))), "./neo-c.h", 3810, 560);
    # 3811 "./neo-c.h"
    __right_value0 = (void*)0;
    items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(size)), "./neo-c.h", 3811, 561, "struct sVar** "))), "./neo-c.h", 3811, 562);
    # 3812 "./neo-c.h"
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3812, 563, "unsigned int*"))), "./neo-c.h", 3812, 564);
    # 3813 "./neo-c.h"
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3813, 565, "_Bool*"))), "./neo-c.h", 3813, 566);
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
    for(i_29=0    ;i_29<old_size;i_29++){
        # 3826 "./neo-c.h"
        if(!self->item_existance[i_29]) {
            # 3823 "./neo-c.h"
            continue;
        }
        # 3826 "./neo-c.h"
        key_hash=self->hashes[i_29];
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
                keys[n]=self->keys[i_29];
                # 3846 "./neo-c.h"
                items[n]=self->items[i_29];
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
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3855, 567));
    # 3856 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3856, 568));
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

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_30;
    # 3389 "./neo-c.h"
    # 3398 "./neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3397 "./neo-c.h"
        if(self->item_existance[i]) {
            # 3396 "./neo-c.h"
            if(1) {
                # 3394 "./neo-c.h"
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3394, 593);
            }
        }
    }
    # 3398 "./neo-c.h"
    come_free((char*)self->items);
    # 3407 "./neo-c.h"
    for(i_30=0    ;i_30<self->size;i_30++){
        # 3406 "./neo-c.h"
        if(self->item_existance[i_30]) {
            # 3405 "./neo-c.h"
            if(1) {
                # 3403 "./neo-c.h"
                (self->keys[i_30] = come_decrement_ref_count(self->keys[i_30], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3403, 594));
            }
        }
    }
    # 3407 "./neo-c.h"
    come_free((char*)self->keys);
    # 3409 "./neo-c.h"
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3409, 595);
    # 3411 "./neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3411, 596));
    # 3412 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3412, 597));
            neo_current_frame = fr.prev;
}

_Bool create_method_generics_fun(char*  fun_name  , struct sGenericsFun*  generics_fun  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_method_generics_fun"; neo_current_frame = &fr;
    struct sClass*  current_stack_frame_struct  ;
    struct sFun*  caller_fun  ;
    void* __right_value0 = (void*)0;
    struct buffer*  if_expression_buffer  ;
    struct buffer*  __dec_obj109  ;
    struct buffer*  loop_expression_buffer  ;
    struct buffer*  __dec_obj110  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj111  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char*  last_code  ;
    char*  __dec_obj112  ;
    char*  last_code2  ;
    char*  __dec_obj113  ;
    char*  sname_top  ;
    int sline_top;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    _Bool no_output_come_code;
    char*  sname_top_31  ;
    int sline_top_32;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sFun*  funX  ;
    char*  __dec_obj114  ;
    char*  __dec_obj115  ;
    char*  __dec_obj116  ;
    struct buffer*  __dec_obj117  ;
    struct buffer*  __dec_obj118  ;
    struct buffer*  __dec_obj119  ;
    struct list$1sRightValueObject$ph* __dec_obj120;
    struct list$1CVALUE$ph* __dec_obj121;
    _Bool __result_obj__0;
    struct sType*  result_type  ;
    struct list$1sType$ph* param_types;
    struct list$1sType$ph* _o2_saved_5;
    struct sType*  it  ;
    struct sType*  param_type  ;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    char* p;
    int sline;
    int sline_real;
    int sline_top_33;
    char*  sname  ;
    char* head;
    struct buffer*  source  ;
    struct buffer*  __dec_obj122  ;
    struct list$1char$ph* method_generics_type_names;
    struct list$1char$ph* __dec_obj123;
    struct list$1char$ph* _o2_saved_6;
    char*  it_34  ;
    struct list$1char$ph* __dec_obj124;
    char*  __dec_obj125  ;
    struct sBlock*  block  ;
    struct buffer*  __dec_obj126  ;
    char*  __dec_obj127  ;
    _Bool var_args;
    struct sFun* fun;
    struct sNode* _inf_value2;
    struct sFunNode* _inf_obj_value2;
    struct sNode* node;
    _Bool Value;
    char*  __dec_obj128  ;
    char*  __dec_obj129  ;
    char*  __dec_obj130  ;
    struct buffer*  __dec_obj131  ;
    struct buffer*  __dec_obj132  ;
    struct buffer*  __dec_obj133  ;
    struct list$1sRightValueObject$ph* __dec_obj134;
    struct list$1CVALUE$ph* __dec_obj135;
    struct list$1char$ph* __dec_obj136;
    char*  __dec_obj137  ;
    char*  __dec_obj138  ;
    char*  __dec_obj139  ;
    struct buffer*  __dec_obj140  ;
    struct buffer*  __dec_obj141  ;
    struct buffer*  __dec_obj142  ;
    struct list$1sRightValueObject$ph* __dec_obj143;
    struct list$1CVALUE$ph* __dec_obj144;
    # 121 "44function4.nc"
    current_stack_frame_struct=info->current_stack_frame_struct;
    # 122 "44function4.nc"
    info->current_stack_frame_struct=((void*)0);
    # 123 "44function4.nc"
    caller_fun=info->caller_fun;
    # 124 "44function4.nc"
    info->caller_fun=info->come_fun;
    # 129 "44function4.nc"
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "44function4.nc", 129, 740);
    # 130 "44function4.nc"
    __dec_obj109=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 130, 741);
    # 131 "44function4.nc"
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "44function4.nc", 131, 742);
    # 132 "44function4.nc"
    __dec_obj110=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 132, 743);
    # 133 "44function4.nc"
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "44function4.nc", 133, 744);
    # 134 "44function4.nc"
    __dec_obj111=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 134, 745);
    # 136 "44function4.nc"
    right_value_max=info->right_value_max;
    # 137 "44function4.nc"
    right_value_num=info->right_value_num;
    # 138 "44function4.nc"
    max_conditional=info->max_conditional;
    # 139 "44function4.nc"
    num_conditional=info->num_conditional;
    # 140 "44function4.nc"
    in_conditional=info->in_conditional;
    # 141 "44function4.nc"
    info->in_conditional=(_Bool)0;
    # 143 "44function4.nc"
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "44function4.nc", 143, 746);
    # 144 "44function4.nc"
    __dec_obj112=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 144, 747);
    # 145 "44function4.nc"
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "44function4.nc", 145, 748);
    # 146 "44function4.nc"
    __dec_obj113=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 146, 749);
    # 148 "44function4.nc"
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"44function4.nc",148), "44function4.nc", 148, 750);
    # 149 "44function4.nc"
    sline_top=info->sline;
    # 151 "44function4.nc"
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "44function4.nc", 151, 751);
    # 152 "44function4.nc"
    right_value_objects=info->right_value_objects;
    # 154 "44function4.nc"
    no_output_come_code=info->no_output_come_code;
    # 155 "44function4.nc"
    info->no_output_come_code=(_Bool)0;
    # 122 "44function4.nc"
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 122, 752));
    __right_value0 = (void*)0;
    sname_top_31=(char* )come_increment_ref_count(__builtin_string(info->sname,"44function4.nc",122), "44function4.nc", 122, 753);
    # 123 "44function4.nc"
    sline_top_32=info->sline;
    # 125 "44function4.nc"
    __right_value0 = (void*)0;
    funX=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(fun_name,"44function4.nc",125))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "44function4.nc", 125, 754));
    # 131 "44function4.nc"
    if(funX) {
        # 128 "44function4.nc"
        info->no_output_come_code=no_output_come_code;
        # 129 "44function4.nc"
        __right_value0 = (void*)0;
        __dec_obj114=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top_31,"44function4.nc",129), "44function4.nc", 129, 756);
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 129, 755);
        # 130 "44function4.nc"
        info->sline=sline_top_32;
        # 132 "44function4.nc"
        __dec_obj115=info->module->mLastCode,
        info->module->mLastCode=(char* )come_increment_ref_count(last_code, "44function4.nc", 132, 758);
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 132, 757);
        # 133 "44function4.nc"
        __dec_obj116=info->module->mLastCode2,
        info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "44function4.nc", 133, 760);
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 133, 759);
        # 135 "44function4.nc"
        info->caller_fun=caller_fun;
        # 139 "44function4.nc"
        info->right_value_max=right_value_max;
        # 140 "44function4.nc"
        info->right_value_num=right_value_num;
        # 141 "44function4.nc"
        info->num_conditional=num_conditional;
        # 142 "44function4.nc"
        info->max_conditional=max_conditional;
        # 143 "44function4.nc"
        info->in_conditional=in_conditional;
        # 144 "44function4.nc"
        __dec_obj117=info->if_expression_buffer,
        info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "44function4.nc", 144, 762);
        come_call_finalizer(buffer_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 144, 761);
        # 145 "44function4.nc"
        __dec_obj118=info->loop_expression_buffer,
        info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "44function4.nc", 145, 764);
        come_call_finalizer(buffer_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 145, 763);
        # 146 "44function4.nc"
        __dec_obj119=info->paren_block_buffer,
        info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "44function4.nc", 146, 766);
        come_call_finalizer(buffer_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 146, 765);
        # 147 "44function4.nc"
        info->current_stack_frame_struct=current_stack_frame_struct;
        # 148 "44function4.nc"
        __dec_obj120=info->right_value_objects,
        info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "44function4.nc", 148, 768);
        come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 148, 767);
        # 149 "44function4.nc"
        __dec_obj121=info->stack,
        info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "44function4.nc", 149, 770);
        come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 149, 769);
        # 128 "44function4.nc"
                __result_obj__0 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 128, 771));
        come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 128, 772);
        come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 128, 773);
        come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 128, 774);
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 128, 775));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 128, 776));
        come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 128, 777);
        (sname_top_31 = come_decrement_ref_count(sname_top_31, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 128, 778));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 131 "44function4.nc"
    __right_value0 = (void*)0;
    result_type=(struct sType* )come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info), "44function4.nc", 131, 779);
    # 133 "44function4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "44function4.nc", 133, 780, "struct list$1sType$ph*"), "44function4.nc", 133, 781)), "44function4.nc", 133, 782);
    # 139 "44function4.nc"
    for(_o2_saved_5=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes, "44function4.nc", 134, 783),it=list$1sType$ph_begin(_o2_saved_5)    ;!list$1sType$ph_end(_o2_saved_5);it=list$1sType$ph_next(_o2_saved_5)){
        # 135 "44function4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_type=(struct sType* )come_increment_ref_count(solve_method_generics(((struct sType* )(__right_value0=sType_clone(it))),info), "44function4.nc", 135, 784);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "44function4.nc}", 135, 785);
        # 137 "44function4.nc"
        __right_value0 = (void*)0;
        list$1sType$ph_add(param_types,(struct sType* )come_increment_ref_count(sType_clone(param_type), "44function4.nc", 137, 786));
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 139, 787);
    }
    # 139 "44function4.nc"
    __right_value0 = (void*)0;
    param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames), "44function4.nc", 139, 788);
    # 141 "44function4.nc"
    __right_value0 = (void*)0;
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors), "44function4.nc", 141, 789);
    # 143 "44function4.nc"
    p=info->p;
    # 144 "44function4.nc"
    sline=info->sline;
    # 145 "44function4.nc"
    sline_real=info->sline_real;
    # 146 "44function4.nc"
    sline_top_33=info->sline_top;
    # 147 "44function4.nc"
    sname=(char* )come_increment_ref_count(info->sname, "44function4.nc", 147, 790);
    # 148 "44function4.nc"
    head=info->head;
    # 149 "44function4.nc"
    source=(struct buffer* )come_increment_ref_count(info->source, "44function4.nc", 149, 791);
    # 151 "44function4.nc"
    __right_value0 = (void*)0;
    __dec_obj122=info->source,
    info->source=(struct buffer* )come_increment_ref_count(charp_to_buffer(generics_fun->mBlock), "44function4.nc", 151, 793);
    come_call_finalizer(buffer_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 151, 792);
    # 155 "44function4.nc"
    if(info->p==((void*)0)) {
        # 153 "44function4.nc"
        info->p=info->source->buf;
    }
    # 155 "44function4.nc"
    info->p=info->source->buf;
    # 156 "44function4.nc"
    info->head=info->source->buf;
    # 158 "44function4.nc"
    method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names, "44function4.nc", 158, 794);
    # 160 "44function4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj123=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "44function4.nc", 160, 795, "struct list$1char$ph*"), "44function4.nc", 160, 796)), "44function4.nc", 160, 798);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 160, 797);
    # 165 "44function4.nc"
    for(_o2_saved_6=(struct list$1char$ph*)come_increment_ref_count(generics_fun->mMethodGenericsTypeNames, "44function4.nc", 161, 799),it_34=list$1char$ph_begin(_o2_saved_6)    ;!list$1char$ph_end(_o2_saved_6);it_34=list$1char$ph_next(_o2_saved_6)){
        # 162 "44function4.nc"
        __right_value0 = (void*)0;
        list$1char$ph_push_back(info->method_generics_type_names,(char* )come_increment_ref_count((char* )come_memdup(it_34, "44function4.nc", 162, 800, "char* "), "44function4.nc", 162, 801));
    }
    # 165 "44function4.nc"
    list$1char$ph_reset(info->generics_type_names);
    # 166 "44function4.nc"
    __right_value0 = (void*)0;
    __dec_obj124=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames), "44function4.nc", 166, 803);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 166, 802);
    # 168 "44function4.nc"
    info->sline=generics_fun->mGenericsSLine;
    # 169 "44function4.nc"
    info->sline_real=generics_fun->mGenericsSLine;
    # 170 "44function4.nc"
    info->sline_top=generics_fun->mGenericsSLine;
    # 171 "44function4.nc"
    __dec_obj125=info->sname,
    info->sname=(char* )come_increment_ref_count(generics_fun->mGenericsSName, "44function4.nc", 171, 805);
    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 171, 804);
    # 173 "44function4.nc"
    __right_value0 = (void*)0;
    block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)1), "44function4.nc", 173, 806);
    # 175 "44function4.nc"
    info->head=head;
    # 176 "44function4.nc"
    __dec_obj126=info->source,
    info->source=(struct buffer* )come_increment_ref_count(source, "44function4.nc", 176, 808);
    come_call_finalizer(buffer_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 176, 807);
    # 180 "44function4.nc"
    if(info->p==((void*)0)) {
        # 178 "44function4.nc"
        info->p=info->source->buf;
    }
    # 180 "44function4.nc"
    info->p=info->source->buf;
    # 181 "44function4.nc"
    info->p=p;
    # 182 "44function4.nc"
    info->sline=sline;
    # 183 "44function4.nc"
    info->sline_real=sline_real;
    # 184 "44function4.nc"
    info->sline_top=sline_top_33;
    # 185 "44function4.nc"
    __dec_obj127=info->sname,
    info->sname=(char* )come_increment_ref_count(sname, "44function4.nc", 185, 810);
    __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 185, 809);
    # 187 "44function4.nc"
    result_type->mInline=(_Bool)0;
    # 188 "44function4.nc"
    result_type->mStatic=(_Bool)0;
    # 189 "44function4.nc"
    result_type->mUniq=(_Bool)0;
    # 191 "44function4.nc"
    var_args=generics_fun->mVarArgs;
    # 195 "44function4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "44function4.nc", 192, 811, "struct sFun* "), "44function4.nc", 195, 812),(char* )come_increment_ref_count(fun_name, "44function4.nc", 195, 813),(struct sType* )come_increment_ref_count(result_type, "44function4.nc", 195, 814),(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types), "44function4.nc", 195, 815),(struct list$1char$ph*)come_increment_ref_count(param_names, "44function4.nc", 195, 816),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "44function4.nc", 195, 817),(_Bool)0,var_args,(struct sBlock* )come_increment_ref_count(block, "44function4.nc", 195, 818),(_Bool)1,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "44function4.nc", 195, 819),(char*)come_increment_ref_count(xsprintf(""), "44function4.nc", 195, 820),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "44function4.nc", 195, 821)), "44function4.nc", 195, 822);
    # 196 "44function4.nc"
    fun->mGenericsFun=(_Bool)1;
    # 198 "44function4.nc"
    __right_value0 = (void*)0;
    map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"44function4.nc",198), "44function4.nc", 198, 823),(struct sFun*)come_increment_ref_count(fun, "44function4.nc", 198, 824),(_Bool)0);
    # 200 "44function4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "44function4.nc", 200, 828, "struct sNode");
    _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "44function4.nc", 200, 825, "struct sFunNode* "), "44function4.nc", 200, 826),(struct sFun*)come_increment_ref_count(fun, "44function4.nc", 200, 827),info))), "44function4.nc", 200, 829);
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
    node=(struct sNode*)come_increment_ref_count(_inf_value2, "44function4.nc", 200, 830);
    come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "44function4.nc}", 200, 831);
    # 207 "44function4.nc"
    Value=node_compile(node,info);
    if(!Value) {
        # 204 "44function4.nc"
        info->no_output_come_code=no_output_come_code;
        # 205 "44function4.nc"
        __right_value0 = (void*)0;
        __dec_obj128=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top_31,"44function4.nc",205), "44function4.nc", 205, 833);
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 205, 832);
        # 206 "44function4.nc"
        info->sline=sline_top_33;
        # 208 "44function4.nc"
        __dec_obj129=info->module->mLastCode,
        info->module->mLastCode=(char* )come_increment_ref_count(last_code, "44function4.nc", 208, 835);
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 208, 834);
        # 209 "44function4.nc"
        __dec_obj130=info->module->mLastCode2,
        info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "44function4.nc", 209, 837);
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 209, 836);
        # 211 "44function4.nc"
        info->caller_fun=caller_fun;
        # 215 "44function4.nc"
        info->right_value_max=right_value_max;
        # 216 "44function4.nc"
        info->right_value_num=right_value_num;
        # 217 "44function4.nc"
        info->num_conditional=num_conditional;
        # 218 "44function4.nc"
        info->max_conditional=max_conditional;
        # 219 "44function4.nc"
        info->in_conditional=in_conditional;
        # 220 "44function4.nc"
        __dec_obj131=info->if_expression_buffer,
        info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "44function4.nc", 220, 839);
        come_call_finalizer(buffer_finalize, __dec_obj131,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 220, 838);
        # 221 "44function4.nc"
        __dec_obj132=info->loop_expression_buffer,
        info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "44function4.nc", 221, 841);
        come_call_finalizer(buffer_finalize, __dec_obj132,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 221, 840);
        # 222 "44function4.nc"
        __dec_obj133=info->paren_block_buffer,
        info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "44function4.nc", 222, 843);
        come_call_finalizer(buffer_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 222, 842);
        # 223 "44function4.nc"
        info->current_stack_frame_struct=current_stack_frame_struct;
        # 224 "44function4.nc"
        __dec_obj134=info->right_value_objects,
        info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "44function4.nc", 224, 845);
        come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 224, 844);
        # 225 "44function4.nc"
        __dec_obj135=info->stack,
        info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "44function4.nc", 225, 847);
        come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj135,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 225, 846);
        # 204 "44function4.nc"
                __result_obj__0 = (_Bool)0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 204, 848));
        come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 204, 849);
        come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 204, 850);
        come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 204, 851);
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 204, 852));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 204, 853));
        come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 204, 854);
        (sname_top_31 = come_decrement_ref_count(sname_top_31, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 204, 855));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 204, 856);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 204, 857);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 204, 858);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 204, 859);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 204, 860);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 204, 861));
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 204, 862);
        come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 204, 863);
        come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 204, 864);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 204, 865);
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 204, 866);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "44function4.nc", 204, 867):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 207 "44function4.nc"
    __dec_obj136=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names, "44function4.nc", 207, 869);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj136,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 207, 868);
    # 209 "44function4.nc"
    list$1char$ph_reset(info->generics_type_names);
    # 212 "44function4.nc"
    info->no_output_come_code=no_output_come_code;
    # 213 "44function4.nc"
    __right_value0 = (void*)0;
    __dec_obj137=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top_31,"44function4.nc",213), "44function4.nc", 213, 871);
    __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 213, 870);
    # 214 "44function4.nc"
    info->sline=sline_top_33;
    # 216 "44function4.nc"
    __dec_obj138=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "44function4.nc", 216, 873);
    __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 216, 872);
    # 217 "44function4.nc"
    __dec_obj139=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "44function4.nc", 217, 875);
    __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 217, 874);
    # 219 "44function4.nc"
    info->caller_fun=caller_fun;
    # 223 "44function4.nc"
    info->right_value_max=right_value_max;
    # 224 "44function4.nc"
    info->right_value_num=right_value_num;
    # 225 "44function4.nc"
    info->num_conditional=num_conditional;
    # 226 "44function4.nc"
    info->max_conditional=max_conditional;
    # 227 "44function4.nc"
    info->in_conditional=in_conditional;
    # 228 "44function4.nc"
    __dec_obj140=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "44function4.nc", 228, 877);
    come_call_finalizer(buffer_finalize, __dec_obj140,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 228, 876);
    # 229 "44function4.nc"
    __dec_obj141=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "44function4.nc", 229, 879);
    come_call_finalizer(buffer_finalize, __dec_obj141,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 229, 878);
    # 230 "44function4.nc"
    __dec_obj142=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "44function4.nc", 230, 881);
    come_call_finalizer(buffer_finalize, __dec_obj142,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 230, 880);
    # 231 "44function4.nc"
    info->current_stack_frame_struct=current_stack_frame_struct;
    # 232 "44function4.nc"
    __dec_obj143=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "44function4.nc", 232, 883);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 232, 882);
    # 233 "44function4.nc"
    __dec_obj144=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "44function4.nc", 233, 885);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj144,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 233, 884);
    # 213 "44function4.nc"
        __result_obj__0 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 213, 886));
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 213, 887);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 213, 888);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 213, 889);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 213, 890));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 213, 891));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 213, 892);
    (sname_top_31 = come_decrement_ref_count(sname_top_31, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 213, 893));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 213, 894);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 213, 895);
    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 213, 896);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 213, 897);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 213, 898);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 213, 899));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 213, 900);
    come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 213, 901);
    come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 213, 902);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 213, 903);
    come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 213, 904);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "44function4.nc", 213, 905):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool has_owned_path_to_owner(struct sClass*  current_klass  , struct sClass*  owner_klass  , struct list$1char$ph* visited, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "has_owned_path_to_owner"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_7;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var1
;    char*  field_name  =0;
    struct sType*  field_type  =0;
    void* __right_value0 = (void*)0;
    struct sType*  field_type2  ;
    _Bool weak_field;
    struct sType*  Value  ;
    _Bool __result_obj__0;
    # 222 "44function4.nc"
    if(current_klass==((void*)0)||owner_klass==((void*)0)) {
        # 219 "44function4.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 226 "44function4.nc"
    if(string_operator_equals(current_klass->mName,owner_klass->mName)) {
        # 223 "44function4.nc"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 229 "44function4.nc"
    if(list$1char$ph_contained(visited,current_klass->mName,(_Bool)0)) {
        # 227 "44function4.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 229 "44function4.nc"
    list$1char$ph_push_back(visited,(char* )come_increment_ref_count(current_klass->mName, "44function4.nc", 229, 906));
    # 255 "44function4.nc"
    for(_o2_saved_7=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(current_klass->mFields, "44function4.nc", 231, 907),it=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_7)    ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_7);it=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_7)){
        # 232 "44function4.nc"
        multiple_assign_var1=it;
        field_name=(char* )come_increment_ref_count(multiple_assign_var1->v1, "44function4.nc", 232, 908);
        field_type=(struct sType* )come_increment_ref_count(multiple_assign_var1->v2, "44function4.nc", 232, 909);
        # 234 "44function4.nc"
        field_type2=(struct sType* )come_increment_ref_count(get_no_solved_type2(field_type), "44function4.nc", 234, 910);
        # 235 "44function4.nc"
        weak_field=field_type2->mWeak;
        # 242 "44function4.nc"
        Value=(struct sType* )come_increment_ref_count(field_type2->mNoSolvedGenericsType, "44function4.nc", 236, 911);
        if(Value) {
            # 240 "44function4.nc"
            if(Value->mWeak) {
                # 238 "44function4.nc"
                weak_field=(_Bool)1;
            }
        }
        # 246 "44function4.nc"
        if(!field_type2->mHeap||weak_field||field_type2->mClass==((void*)0)) {
            # 243 "44function4.nc"
            (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 243, 912));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 243, 913);
            come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 243, 914);
            come_call_finalizer(sType_finalize, Value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 243, 915);
            continue;
        }
        # 250 "44function4.nc"
        if(string_operator_equals(field_type2->mClass->mName,owner_klass->mName)) {
            # 247 "44function4.nc"
                        __result_obj__0 = (_Bool)1;
            (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 247, 916));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 247, 917);
            come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 247, 918);
            come_call_finalizer(sType_finalize, Value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 247, 919);
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 250, 924);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 253 "44function4.nc"
        if(has_owned_path_to_owner(field_type2->mClass,owner_klass,visited,info)) {
            # 251 "44function4.nc"
                        __result_obj__0 = (_Bool)1;
            (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 251, 925));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 251, 926);
            come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 251, 927);
            come_call_finalizer(sType_finalize, Value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 251, 928);
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 251, 929);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 255, 930));
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 255, 931);
        come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 255, 932);
        come_call_finalizer(sType_finalize, Value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 255, 933);
    }
    # 255 "44function4.nc"
        __result_obj__0 = (_Bool)0;
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 255, 934);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1char$ph_contained(struct list$1char$ph* self, char*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_contained"; neo_current_frame = &fr;
    char*  it  ;
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

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_35;
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
    memset(&result_35,0,sizeof(struct tuple2$2char$phsType$ph*));
    # 1697 "./neo-c.h"
        __result_obj__0 = result_35;
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
    struct tuple2$2char$phsType$ph* result_36;
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
    memset(&result_36,0,sizeof(struct tuple2$2char$phsType$ph*));
    # 1717 "./neo-c.h"
        __result_obj__0 = result_36;
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 923);
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
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 922);
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
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 920));
    }
    # 4 "tuple2$2char$phsType$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple2$2char$phsType$ph$p_finalize"
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 921);
    }
            neo_current_frame = fr.prev;
}

_Bool is_owned_main(struct sType*  type_  , struct sClass*  klass  , struct sType*  field_type  , struct sType*  owner  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_owned_main"; neo_current_frame = &fr;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sType*  field_type2  ;
    _Bool weak_field;
    struct sType*  Value  ;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* visited;
    # 264 "44function4.nc"
    if(owner==((void*)0)||owner->mClass==((void*)0)||field_type==((void*)0)||field_type->mClass==((void*)0)) {
        # 261 "44function4.nc"
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 261, 935);
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 261, 936);
        come_call_finalizer(sType_finalize, owner, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 261, 937);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 264 "44function4.nc"
    field_type2=(struct sType* )come_increment_ref_count(get_no_solved_type2(field_type), "44function4.nc", 264, 938);
    # 265 "44function4.nc"
    weak_field=field_type2->mWeak;
    # 272 "44function4.nc"
    Value=(struct sType* )come_increment_ref_count(field_type2->mNoSolvedGenericsType, "44function4.nc", 266, 939);
    if(Value) {
        # 270 "44function4.nc"
        if(Value->mWeak) {
            # 268 "44function4.nc"
            weak_field=(_Bool)1;
        }
    }
    # 276 "44function4.nc"
    if(!field_type2->mHeap||weak_field) {
        # 273 "44function4.nc"
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 273, 940);
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 273, 941);
        come_call_finalizer(sType_finalize, owner, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 273, 942);
        come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 273, 943);
        come_call_finalizer(sType_finalize, Value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 273, 944);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 280 "44function4.nc"
    if(string_operator_equals(field_type2->mClass->mName,owner->mClass->mName)) {
        # 277 "44function4.nc"
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 277, 945);
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 277, 946);
        come_call_finalizer(sType_finalize, owner, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 277, 947);
        come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 277, 948);
        come_call_finalizer(sType_finalize, Value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 277, 949);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 280 "44function4.nc"
    __right_value0 = (void*)0;
    visited=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "44function4.nc", 280, 950, "struct list$1char$ph*"), "44function4.nc", 280, 951)), "44function4.nc", 280, 952);
    # 281 "44function4.nc"
        __result_obj__0 = has_owned_path_to_owner(field_type2->mClass,owner->mClass,visited,info);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 281, 953);
    come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 281, 954);
    come_call_finalizer(sType_finalize, owner, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 281, 955);
    come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 281, 956);
    come_call_finalizer(sType_finalize, Value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 281, 957);
    come_call_finalizer(list$1char$ph$p_finalize, visited, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 281, 958);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sFun*  compile_uniq_function(struct sFun*  fun  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "compile_uniq_function"; neo_current_frame = &fr;
    struct sClass*  current_stack_frame_struct  ;
    struct sFun*  caller_fun  ;
    void* __right_value0 = (void*)0;
    struct buffer*  if_expression_buffer  ;
    struct buffer*  __dec_obj145  ;
    struct buffer*  loop_expression_buffer  ;
    struct buffer*  __dec_obj146  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj147  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char*  last_code  ;
    char*  __dec_obj148  ;
    char*  last_code2  ;
    char*  __dec_obj149  ;
    char*  sname_top  ;
    int sline_top;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    _Bool no_output_come_code;
    struct sType*  result_type  ;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* param_types;
    struct list$1sType$ph* _o2_saved_8;
    struct sType*  it  ;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    char* p;
    int sline;
    int sline_real;
    int sline_top_37;
    char*  sname  ;
    char* head;
    struct buffer*  source  ;
    struct buffer*  __dec_obj150  ;
    char*  __dec_obj151  ;
    struct sClass*  defining_class  ;
    _Bool _conditional_value_X0;
    struct sBlock*  block  ;
    struct buffer*  __dec_obj152  ;
    char*  __dec_obj153  ;
    _Bool const_fun;
    _Bool var_args;
    struct sFun* fun2;
    struct sNode* _inf_value3;
    struct sFunNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* node;
    _Bool Value;
    char*  __dec_obj154  ;
    char*  __dec_obj155  ;
    char*  __dec_obj156  ;
    struct buffer*  __dec_obj157  ;
    struct buffer*  __dec_obj158  ;
    struct buffer*  __dec_obj159  ;
    struct list$1sRightValueObject$ph* __dec_obj160;
    struct list$1CVALUE$ph* __dec_obj161;
    struct sFun*  __result_obj__0  ;
    char*  __dec_obj162  ;
    char*  __dec_obj163  ;
    char*  __dec_obj164  ;
    struct buffer*  __dec_obj165  ;
    struct buffer*  __dec_obj166  ;
    struct buffer*  __dec_obj167  ;
    struct list$1sRightValueObject$ph* __dec_obj168;
    struct list$1CVALUE$ph* __dec_obj169;
    # 287 "44function4.nc"
    current_stack_frame_struct=info->current_stack_frame_struct;
    # 288 "44function4.nc"
    info->current_stack_frame_struct=((void*)0);
    # 289 "44function4.nc"
    caller_fun=info->caller_fun;
    # 290 "44function4.nc"
    info->caller_fun=info->come_fun;
    # 295 "44function4.nc"
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "44function4.nc", 295, 959);
    # 296 "44function4.nc"
    __dec_obj145=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj145,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 296, 960);
    # 297 "44function4.nc"
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "44function4.nc", 297, 961);
    # 298 "44function4.nc"
    __dec_obj146=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj146,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 298, 962);
    # 299 "44function4.nc"
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "44function4.nc", 299, 963);
    # 300 "44function4.nc"
    __dec_obj147=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj147,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 300, 964);
    # 302 "44function4.nc"
    right_value_max=info->right_value_max;
    # 303 "44function4.nc"
    right_value_num=info->right_value_num;
    # 304 "44function4.nc"
    max_conditional=info->max_conditional;
    # 305 "44function4.nc"
    num_conditional=info->num_conditional;
    # 306 "44function4.nc"
    in_conditional=info->in_conditional;
    # 307 "44function4.nc"
    info->in_conditional=(_Bool)0;
    # 309 "44function4.nc"
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "44function4.nc", 309, 965);
    # 310 "44function4.nc"
    __dec_obj148=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 310, 966);
    # 311 "44function4.nc"
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "44function4.nc", 311, 967);
    # 312 "44function4.nc"
    __dec_obj149=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 312, 968);
    # 314 "44function4.nc"
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"44function4.nc",314), "44function4.nc", 314, 969);
    # 315 "44function4.nc"
    sline_top=info->sline;
    # 317 "44function4.nc"
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "44function4.nc", 317, 970);
    # 318 "44function4.nc"
    right_value_objects=info->right_value_objects;
    # 320 "44function4.nc"
    no_output_come_code=info->no_output_come_code;
    # 321 "44function4.nc"
    info->no_output_come_code=(_Bool)0;
    # 288 "44function4.nc"
    __right_value0 = (void*)0;
    result_type=(struct sType* )come_increment_ref_count(sType_clone(fun->mResultType), "44function4.nc", 288, 971);
    # 290 "44function4.nc"
    __right_value0 = (void*)0;
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "44function4.nc", 290, 972, "struct list$1sType$ph*"), "44function4.nc", 290, 973)), "44function4.nc", 290, 974);
    # 294 "44function4.nc"
    for(_o2_saved_8=(struct list$1sType$ph*)come_increment_ref_count(fun->mParamTypes, "44function4.nc", 291, 975),it=list$1sType$ph_begin(_o2_saved_8)    ;!list$1sType$ph_end(_o2_saved_8);it=list$1sType$ph_next(_o2_saved_8)){
        # 292 "44function4.nc"
        __right_value0 = (void*)0;
        list$1sType$ph_add(param_types,(struct sType* )come_increment_ref_count(sType_clone(it), "44function4.nc", 292, 976));
    }
    # 294 "44function4.nc"
    __right_value0 = (void*)0;
    param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(fun->mParamNames), "44function4.nc", 294, 977);
    # 296 "44function4.nc"
    __right_value0 = (void*)0;
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(fun->mParamDefaultParametors), "44function4.nc", 296, 978);
    # 298 "44function4.nc"
    p=info->p;
    # 299 "44function4.nc"
    sline=info->sline;
    # 300 "44function4.nc"
    sline_real=info->sline_real;
    # 301 "44function4.nc"
    sline_top_37=info->sline_top;
    # 302 "44function4.nc"
    sname=(char* )come_increment_ref_count(info->sname, "44function4.nc", 302, 979);
    # 303 "44function4.nc"
    head=info->head;
    # 304 "44function4.nc"
    source=(struct buffer* )come_increment_ref_count(info->source, "44function4.nc", 304, 980);
    # 306 "44function4.nc"
    __right_value0 = (void*)0;
    __dec_obj150=info->source,
    info->source=(struct buffer* )come_increment_ref_count(charp_to_buffer(fun->mTextBlock), "44function4.nc", 306, 982);
    come_call_finalizer(buffer_finalize, __dec_obj150,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 306, 981);
    # 310 "44function4.nc"
    if(info->p==((void*)0)) {
        # 308 "44function4.nc"
        info->p=info->source->buf;
    }
    # 310 "44function4.nc"
    info->p=info->source->buf;
    # 311 "44function4.nc"
    info->head=info->source->buf;
    # 313 "44function4.nc"
    info->sline=fun->mTextBlockSline;
    # 314 "44function4.nc"
    info->sline_real=fun->mTextBlockSline;
    # 315 "44function4.nc"
    info->sline_top=fun->mTextBlockSline;
    # 316 "44function4.nc"
    __dec_obj151=info->sname,
    info->sname=(char* )come_increment_ref_count(fun->mTextBlockSName, "44function4.nc", 316, 984);
    __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 316, 983);
    # 318 "44function4.nc"
    defining_class=info->defining_class;
    # 323 "44function4.nc"
    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X0=(list$1sType$ph_length(fun->mParamTypes)>0&&list$1char$ph_length(fun->mParamNames)>0&&string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(fun->mParamNames,0))),"self")));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "44function4.nc", 319, 1003));
_conditional_value_X0;})) {
        # 320 "44function4.nc"
        __right_value0 = (void*)0;
        info->defining_class=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,0)))->mClass;
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "44function4.nc}", 353, 1022);
    }
    # 323 "44function4.nc"
    __right_value0 = (void*)0;
    block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)1), "44function4.nc", 323, 1023);
    # 325 "44function4.nc"
    info->defining_class=defining_class;
    # 327 "44function4.nc"
    info->head=head;
    # 328 "44function4.nc"
    __dec_obj152=info->source,
    info->source=(struct buffer* )come_increment_ref_count(source, "44function4.nc", 328, 1025);
    come_call_finalizer(buffer_finalize, __dec_obj152,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 328, 1024);
    # 332 "44function4.nc"
    if(info->p==((void*)0)) {
        # 330 "44function4.nc"
        info->p=info->source->buf;
    }
    # 332 "44function4.nc"
    info->p=info->source->buf;
    # 333 "44function4.nc"
    info->p=p;
    # 334 "44function4.nc"
    info->sline=sline;
    # 335 "44function4.nc"
    info->sline_real=sline_real;
    # 336 "44function4.nc"
    info->sline_top=sline_top_37;
    # 337 "44function4.nc"
    __dec_obj153=info->sname,
    info->sname=(char* )come_increment_ref_count(sname, "44function4.nc", 337, 1027);
    __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 337, 1026);
    # 339 "44function4.nc"
    result_type->mInline=(_Bool)0;
    # 340 "44function4.nc"
    result_type->mStatic=(_Bool)0;
    # 341 "44function4.nc"
    result_type->mUniq=(_Bool)0;
    # 343 "44function4.nc"
    const_fun=fun->mConstFun;
    # 345 "44function4.nc"
    var_args=fun->mVarArgs;
    # 349 "44function4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    fun2=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "44function4.nc", 346, 1028, "struct sFun* "), "44function4.nc", 349, 1029),(char* )come_increment_ref_count(fun->mName, "44function4.nc", 349, 1030),(struct sType* )come_increment_ref_count(result_type, "44function4.nc", 349, 1031),(struct list$1sType$ph*)come_increment_ref_count(param_types, "44function4.nc", 349, 1032),(struct list$1char$ph*)come_increment_ref_count(param_names, "44function4.nc", 349, 1033),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "44function4.nc", 349, 1034),(_Bool)0,var_args,(struct sBlock* )come_increment_ref_count(block, "44function4.nc", 349, 1035),(_Bool)0,info,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf(""), "44function4.nc", 349, 1036),(char*)come_increment_ref_count(xsprintf(""), "44function4.nc", 349, 1037),const_fun,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "44function4.nc", 349, 1038)), "44function4.nc", 349, 1039);
    # 351 "44function4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "44function4.nc", 351, 1043, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "44function4.nc", 351, 1040, "struct sFunNode* "), "44function4.nc", 351, 1041),(struct sFun*)come_increment_ref_count(fun2, "44function4.nc", 351, 1042),info))), "44function4.nc", 351, 1044);
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
    node=(struct sNode*)come_increment_ref_count(_inf_value3, "44function4.nc", 351, 1045);
    come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "44function4.nc}", 351, 1046);
    # 359 "44function4.nc"
    Value=node_compile(node,info);
    if(!Value) {
        # 355 "44function4.nc"
        info->no_output_come_code=no_output_come_code;
        # 356 "44function4.nc"
        __right_value0 = (void*)0;
        __dec_obj154=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"44function4.nc",356), "44function4.nc", 356, 1048);
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 356, 1047);
        # 357 "44function4.nc"
        info->sline=sline_top_37;
        # 359 "44function4.nc"
        __dec_obj155=info->module->mLastCode,
        info->module->mLastCode=(char* )come_increment_ref_count(last_code, "44function4.nc", 359, 1050);
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 359, 1049);
        # 360 "44function4.nc"
        __dec_obj156=info->module->mLastCode2,
        info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "44function4.nc", 360, 1052);
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 360, 1051);
        # 362 "44function4.nc"
        info->caller_fun=caller_fun;
        # 366 "44function4.nc"
        info->right_value_max=right_value_max;
        # 367 "44function4.nc"
        info->right_value_num=right_value_num;
        # 368 "44function4.nc"
        info->num_conditional=num_conditional;
        # 369 "44function4.nc"
        info->max_conditional=max_conditional;
        # 370 "44function4.nc"
        info->in_conditional=in_conditional;
        # 371 "44function4.nc"
        __dec_obj157=info->if_expression_buffer,
        info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "44function4.nc", 371, 1054);
        come_call_finalizer(buffer_finalize, __dec_obj157,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 371, 1053);
        # 372 "44function4.nc"
        __dec_obj158=info->loop_expression_buffer,
        info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "44function4.nc", 372, 1056);
        come_call_finalizer(buffer_finalize, __dec_obj158,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 372, 1055);
        # 373 "44function4.nc"
        __dec_obj159=info->paren_block_buffer,
        info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "44function4.nc", 373, 1058);
        come_call_finalizer(buffer_finalize, __dec_obj159,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 373, 1057);
        # 374 "44function4.nc"
        info->current_stack_frame_struct=current_stack_frame_struct;
        # 375 "44function4.nc"
        __dec_obj160=info->right_value_objects,
        info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "44function4.nc", 375, 1060);
        come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj160,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 375, 1059);
        # 376 "44function4.nc"
        __dec_obj161=info->stack,
        info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "44function4.nc", 376, 1062);
        come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj161,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 376, 1061);
        # 355 "44function4.nc"
                __result_obj__0 = (struct sFun* )come_increment_ref_count(((void*)0), "44function4.nc", 355, 1063);
        come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 355, 1064);
        come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 355, 1065);
        come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 355, 1066);
        (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 355, 1067));
        (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 355, 1068));
        (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 355, 1069));
        come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 355, 1070);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 355, 1071);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 355, 1072);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 355, 1073);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 355, 1074);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 355, 1075);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 355, 1076));
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 355, 1077);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 355, 1078);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 355, 1079);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "44function4.nc", 355, 1080):(void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "44function4.nc}", 355, 1081);
        return __result_obj__0;
    }
    # 359 "44function4.nc"
    info->no_output_come_code=no_output_come_code;
    # 360 "44function4.nc"
    __right_value0 = (void*)0;
    __dec_obj162=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"44function4.nc",360), "44function4.nc", 360, 1083);
    __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 360, 1082);
    # 361 "44function4.nc"
    info->sline=sline_top_37;
    # 363 "44function4.nc"
    __dec_obj163=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "44function4.nc", 363, 1085);
    __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 363, 1084);
    # 364 "44function4.nc"
    __dec_obj164=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "44function4.nc", 364, 1087);
    __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 364, 1086);
    # 366 "44function4.nc"
    info->caller_fun=caller_fun;
    # 370 "44function4.nc"
    info->right_value_max=right_value_max;
    # 371 "44function4.nc"
    info->right_value_num=right_value_num;
    # 372 "44function4.nc"
    info->num_conditional=num_conditional;
    # 373 "44function4.nc"
    info->max_conditional=max_conditional;
    # 374 "44function4.nc"
    info->in_conditional=in_conditional;
    # 375 "44function4.nc"
    __dec_obj165=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "44function4.nc", 375, 1089);
    come_call_finalizer(buffer_finalize, __dec_obj165,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 375, 1088);
    # 376 "44function4.nc"
    __dec_obj166=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "44function4.nc", 376, 1091);
    come_call_finalizer(buffer_finalize, __dec_obj166,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 376, 1090);
    # 377 "44function4.nc"
    __dec_obj167=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "44function4.nc", 377, 1093);
    come_call_finalizer(buffer_finalize, __dec_obj167,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 377, 1092);
    # 378 "44function4.nc"
    info->current_stack_frame_struct=current_stack_frame_struct;
    # 379 "44function4.nc"
    __dec_obj168=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "44function4.nc", 379, 1095);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj168,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 379, 1094);
    # 380 "44function4.nc"
    __dec_obj169=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "44function4.nc", 380, 1097);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj169,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 380, 1096);
    # 360 "44function4.nc"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(fun2, "44function4.nc", 360, 1098);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 360, 1099);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 360, 1100);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 360, 1101);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 360, 1102));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 360, 1103));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 360, 1104));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 360, 1105);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 360, 1106);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 360, 1107);
    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 360, 1108);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 360, 1109);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 360, 1110);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 360, 1111));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 360, 1112);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 360, 1113);
    come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 1, (void*)0, "44function4.nc}", 360, 1114);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "44function4.nc", 360, 1115):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "44function4.nc}", 360, 1116);
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
    char*  default_value_38  ;
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(char* ));
        # 2158 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 985);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2158, 986));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2158, 987));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 2161, 988));
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
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 989);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2169, 990));
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_38,0,sizeof(char* ));
    # 2177 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(default_value_38, "./neo-c.h", 2177, 991);
    (default_value_38 = come_decrement_ref_count(default_value_38, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2177, 992));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2177, 993));
    return __result_obj__0;
}

static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_39  ;
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(char* ));
        # 2158 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 994);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2158, 995));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2158, 996));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 2161, 997));
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
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 998);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2169, 999));
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_39,0,sizeof(char* ));
    # 2177 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(default_value_39, "./neo-c.h", 2177, 1000);
    (default_value_39 = come_decrement_ref_count(default_value_39, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2177, 1001));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2177, 1002));
    return __result_obj__0;
}

static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_40  ;
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sType* ));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 1004);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 1005);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 1006);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2161, 1007);
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
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 1008);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 1009);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_40,0,sizeof(struct sType* ));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_40, "./neo-c.h", 2177, 1010);
    come_call_finalizer(sType_finalize, default_value_40, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 1011);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 1012);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_41  ;
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sType* ));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 1013);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 1014);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 1015);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2161, 1016);
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
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 1017);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 1018);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_41,0,sizeof(struct sType* ));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_41, "./neo-c.h", 2177, 1019);
    come_call_finalizer(sType_finalize, default_value_41, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 1020);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 1021);
    return __result_obj__0;
}

_Bool create_equals_method(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_equals_method"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  type_  ;
    char*  result  ;
    struct sClass*  current_stack_frame_struct  ;
    struct sFun*  caller_fun  ;
    struct buffer*  if_expression_buffer  ;
    struct buffer*  __dec_obj170  ;
    struct buffer*  loop_expression_buffer  ;
    struct buffer*  __dec_obj171  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj172  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char*  last_code  ;
    char*  __dec_obj173  ;
    char*  last_code2  ;
    char*  __dec_obj174  ;
    char*  sname_top  ;
    int sline_top;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    _Bool no_output_come_code;
    struct sClass*  klass  ;
    char*  class_name  ;
    struct sType*  type2  ;
    struct sFun*  cloner  ;
    char*  fun_name2  ;
    char*  none_generics_name  ;
    struct sType*  obj_type  ;
    char*  __dec_obj175  ;
    char*  fun_name3  ;
    struct sGenericsFun*  generics_fun  ;
    void* __right_value1 = (void*)0;
    struct tuple2$2char$ph_Bool$* multiple_assign_var2
;    char*  name  =0;
    _Bool err=0;
    char*  __dec_obj176  ;
    char*  __dec_obj177  ;
    char*  __dec_obj178  ;
    struct buffer*  __dec_obj179  ;
    struct buffer*  __dec_obj180  ;
    struct buffer*  __dec_obj181  ;
    struct list$1sRightValueObject$ph* __dec_obj182;
    struct list$1CVALUE$ph* __dec_obj183;
    _Bool __result_obj__0;
    char*  __dec_obj184  ;
    int i;
    char*  new_fun_name  ;
    char*  __dec_obj185  ;
    char*  __dec_obj186  ;
    char*  __dec_obj187  ;
    char*  __dec_obj188  ;
    struct buffer*  __dec_obj189  ;
    struct buffer*  __dec_obj190  ;
    struct buffer*  __dec_obj191  ;
    struct list$1sRightValueObject$ph* __dec_obj192;
    struct list$1CVALUE$ph* __dec_obj193;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var3
;    struct sFun*  fun  =0;
    char*  new_fun_name_42  =0;
    char*  __dec_obj194  ;
    char*  __dec_obj195  ;
    char*  __dec_obj196  ;
    char*  __dec_obj197  ;
    struct buffer*  __dec_obj198  ;
    struct buffer*  __dec_obj199  ;
    struct buffer*  __dec_obj200  ;
    struct list$1sRightValueObject$ph* __dec_obj201;
    struct list$1CVALUE$ph* __dec_obj202;
    memset(&fun_name2, 0, sizeof(fun_name2));
    memset(&i, 0, sizeof(i));
    # 365 "44function4.nc"
    type_=(struct sType* )come_increment_ref_count(get_no_solved_type(type), "44function4.nc", 365, 1117);
    # 369 "44function4.nc"
    result=((void*)0);
    # 369 "44function4.nc"
    current_stack_frame_struct=info->current_stack_frame_struct;
    # 370 "44function4.nc"
    info->current_stack_frame_struct=((void*)0);
    # 371 "44function4.nc"
    caller_fun=info->caller_fun;
    # 372 "44function4.nc"
    info->caller_fun=info->come_fun;
    # 377 "44function4.nc"
    __right_value0 = (void*)0;
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "44function4.nc", 377, 1118);
    # 378 "44function4.nc"
    __dec_obj170=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj170,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 378, 1119);
    # 379 "44function4.nc"
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "44function4.nc", 379, 1120);
    # 380 "44function4.nc"
    __dec_obj171=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj171,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 380, 1121);
    # 381 "44function4.nc"
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "44function4.nc", 381, 1122);
    # 382 "44function4.nc"
    __dec_obj172=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj172,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 382, 1123);
    # 384 "44function4.nc"
    right_value_max=info->right_value_max;
    # 385 "44function4.nc"
    right_value_num=info->right_value_num;
    # 386 "44function4.nc"
    max_conditional=info->max_conditional;
    # 387 "44function4.nc"
    num_conditional=info->num_conditional;
    # 388 "44function4.nc"
    in_conditional=info->in_conditional;
    # 389 "44function4.nc"
    info->in_conditional=(_Bool)0;
    # 391 "44function4.nc"
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "44function4.nc", 391, 1124);
    # 392 "44function4.nc"
    __dec_obj173=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 392, 1125);
    # 393 "44function4.nc"
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "44function4.nc", 393, 1126);
    # 394 "44function4.nc"
    __dec_obj174=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 394, 1127);
    # 396 "44function4.nc"
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"44function4.nc",396), "44function4.nc", 396, 1128);
    # 397 "44function4.nc"
    sline_top=info->sline;
    # 399 "44function4.nc"
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "44function4.nc", 399, 1129);
    # 400 "44function4.nc"
    right_value_objects=info->right_value_objects;
    # 402 "44function4.nc"
    no_output_come_code=info->no_output_come_code;
    # 403 "44function4.nc"
    info->no_output_come_code=(_Bool)0;
    # 370 "44function4.nc"
    klass=type_->mClass;
    # 372 "44function4.nc"
    class_name=(char* )come_increment_ref_count(klass->mName, "44function4.nc", 372, 1130);
    # 374 "44function4.nc"
    const char* fun_name="equals";
    # 376 "44function4.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(sType_clone(type_), "44function4.nc", 376, 1131);
    # 377 "44function4.nc"
    type2->mHeap=(_Bool)0;
    # 379 "44function4.nc"
    cloner=((void*)0);
    # 380 "44function4.nc"
    # 425 "44function4.nc"
    if(list$1sType$ph_length(type_->mGenericsTypes)>0) {
        # 382 "44function4.nc"
        __right_value0 = (void*)0;
        none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type_->mClass->mName), "44function4.nc", 382, 1132);
        # 384 "44function4.nc"
        __right_value0 = (void*)0;
        obj_type=(struct sType* )come_increment_ref_count(solve_generics(type_,info->generics_type,info), "44function4.nc", 384, 1133);
        # 386 "44function4.nc"
        __right_value0 = (void*)0;
        __dec_obj175=fun_name2,
        fun_name2=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1), "44function4.nc", 386, 1135);
        __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 386, 1134);
        # 387 "44function4.nc"
        __right_value0 = (void*)0;
        fun_name3=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "44function4.nc", 387, 1136);
        # 389 "44function4.nc"
        __right_value0 = (void*)0;
        generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0),(_Bool)0)));
        # 405 "44function4.nc"
        if(generics_fun) {
            # 392 "44function4.nc"
            __right_value0 = (void*)0;
            multiple_assign_var2=((struct tuple2$2char$ph_Bool$*)(__right_value1=create_generics_fun((char* )come_increment_ref_count(__builtin_string(fun_name2,"44function4.nc",392), "44function4.nc", 392, 1162),generics_fun,obj_type,info)));
            name=(char* )come_increment_ref_count(multiple_assign_var2->v1, "44function4.nc", 392, 1163);
            err=multiple_assign_var2->v2;
            come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "44function4.nc}", 392, 1164);
            # 401 "44function4.nc"
            if(!err) {
                # 396 "44function4.nc"
                info->no_output_come_code=no_output_come_code;
                # 397 "44function4.nc"
                __right_value0 = (void*)0;
                __dec_obj176=info->sname,
                info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"44function4.nc",397), "44function4.nc", 397, 1166);
                __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 397, 1165);
                # 398 "44function4.nc"
                info->sline=sline_top;
                # 400 "44function4.nc"
                __dec_obj177=info->module->mLastCode,
                info->module->mLastCode=(char* )come_increment_ref_count(last_code, "44function4.nc", 400, 1168);
                __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 400, 1167);
                # 401 "44function4.nc"
                __dec_obj178=info->module->mLastCode2,
                info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "44function4.nc", 401, 1170);
                __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 401, 1169);
                # 403 "44function4.nc"
                info->caller_fun=caller_fun;
                # 407 "44function4.nc"
                info->right_value_max=right_value_max;
                # 408 "44function4.nc"
                info->right_value_num=right_value_num;
                # 409 "44function4.nc"
                info->num_conditional=num_conditional;
                # 410 "44function4.nc"
                info->max_conditional=max_conditional;
                # 411 "44function4.nc"
                info->in_conditional=in_conditional;
                # 412 "44function4.nc"
                __dec_obj179=info->if_expression_buffer,
                info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "44function4.nc", 412, 1172);
                come_call_finalizer(buffer_finalize, __dec_obj179,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 412, 1171);
                # 413 "44function4.nc"
                __dec_obj180=info->loop_expression_buffer,
                info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "44function4.nc", 413, 1174);
                come_call_finalizer(buffer_finalize, __dec_obj180,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 413, 1173);
                # 414 "44function4.nc"
                __dec_obj181=info->paren_block_buffer,
                info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "44function4.nc", 414, 1176);
                come_call_finalizer(buffer_finalize, __dec_obj181,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 414, 1175);
                # 415 "44function4.nc"
                info->current_stack_frame_struct=current_stack_frame_struct;
                # 416 "44function4.nc"
                __dec_obj182=info->right_value_objects,
                info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "44function4.nc", 416, 1178);
                come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj182,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 416, 1177);
                # 417 "44function4.nc"
                __dec_obj183=info->stack,
                info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "44function4.nc", 417, 1180);
                come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj183,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 417, 1179);
                # 396 "44function4.nc"
                                __result_obj__0 = (_Bool)0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 396, 1181));
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 396, 1182));
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 396, 1183);
                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 396, 1184));
                come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 396, 1185);
                (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 396, 1186));
                come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 396, 1187);
                come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 396, 1188);
                come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 396, 1189);
                (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 396, 1190));
                (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 396, 1191));
                (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 396, 1192));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 396, 1193);
                (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 396, 1194));
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 396, 1195);
                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 396, 1196));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            else {
                # 399 "44function4.nc"
                __right_value0 = (void*)0;
                cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
            }
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 405, 1197));
        }
        else {
            # 403 "44function4.nc"
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 425, 1198));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 425, 1199);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 425, 1200));
    }
    else {
        # 407 "44function4.nc"
        __right_value0 = (void*)0;
        __dec_obj184=fun_name2,
        fun_name2=(char* )come_increment_ref_count(create_method_name(type_,(_Bool)0,fun_name,info,(_Bool)1), "44function4.nc", 407, 1202);
        __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 407, 1201);
        # 409 "44function4.nc"
        # 420 "44function4.nc"
        for(i=128-1        ;i>=1;i--){
            # 411 "44function4.nc"
            __right_value0 = (void*)0;
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i), "44function4.nc", 411, 1203);
            # 412 "44function4.nc"
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            # 418 "44function4.nc"
            if(cloner) {
                # 415 "44function4.nc"
                __right_value0 = (void*)0;
                __dec_obj185=fun_name2,
                fun_name2=(char* )come_increment_ref_count(__builtin_string(new_fun_name,"44function4.nc",415), "44function4.nc", 415, 1205);
                __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 415, 1204);
                # 416 "44function4.nc"
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 416, 1206));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 420, 1207));
        }
        # 423 "44function4.nc"
        if(cloner==((void*)0)) {
            # 421 "44function4.nc"
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
    }
    # 439 "44function4.nc"
    if(cloner==((void*)0)&&!type_->mClass->mProtocol&&!type_->mClass->mNumber) {
        # 432 "44function4.nc"
        if(require_explicit_method_in_low_memory_mode(type_,fun_name,info)) {
            # 429 "44function4.nc"
            info->no_output_come_code=no_output_come_code;
            # 430 "44function4.nc"
            __right_value0 = (void*)0;
            __dec_obj186=info->sname,
            info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"44function4.nc",430), "44function4.nc", 430, 1209);
            __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 430, 1208);
            # 431 "44function4.nc"
            info->sline=sline_top;
            # 433 "44function4.nc"
            __dec_obj187=info->module->mLastCode,
            info->module->mLastCode=(char* )come_increment_ref_count(last_code, "44function4.nc", 433, 1211);
            __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 433, 1210);
            # 434 "44function4.nc"
            __dec_obj188=info->module->mLastCode2,
            info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "44function4.nc", 434, 1213);
            __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 434, 1212);
            # 436 "44function4.nc"
            info->caller_fun=caller_fun;
            # 440 "44function4.nc"
            info->right_value_max=right_value_max;
            # 441 "44function4.nc"
            info->right_value_num=right_value_num;
            # 442 "44function4.nc"
            info->num_conditional=num_conditional;
            # 443 "44function4.nc"
            info->max_conditional=max_conditional;
            # 444 "44function4.nc"
            info->in_conditional=in_conditional;
            # 445 "44function4.nc"
            __dec_obj189=info->if_expression_buffer,
            info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "44function4.nc", 445, 1215);
            come_call_finalizer(buffer_finalize, __dec_obj189,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 445, 1214);
            # 446 "44function4.nc"
            __dec_obj190=info->loop_expression_buffer,
            info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "44function4.nc", 446, 1217);
            come_call_finalizer(buffer_finalize, __dec_obj190,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 446, 1216);
            # 447 "44function4.nc"
            __dec_obj191=info->paren_block_buffer,
            info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "44function4.nc", 447, 1219);
            come_call_finalizer(buffer_finalize, __dec_obj191,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 447, 1218);
            # 448 "44function4.nc"
            info->current_stack_frame_struct=current_stack_frame_struct;
            # 449 "44function4.nc"
            __dec_obj192=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "44function4.nc", 449, 1221);
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj192,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 449, 1220);
            # 450 "44function4.nc"
            __dec_obj193=info->stack,
            info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "44function4.nc", 450, 1223);
            come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj193,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 450, 1222);
            # 429 "44function4.nc"
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 429, 1224);
            (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 429, 1225));
            come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 429, 1226);
            come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 429, 1227);
            come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 429, 1228);
            (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 429, 1229));
            (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 429, 1230));
            (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 429, 1231));
            come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 429, 1232);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 429, 1233));
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 429, 1234);
            (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 429, 1235));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 432 "44function4.nc"
        __right_value0 = (void*)0;
        multiple_assign_var3=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_equals_automatically(type_,fun_name,info)));
        fun=multiple_assign_var3->v1;
        new_fun_name_42=(char* )come_increment_ref_count(multiple_assign_var3->v2, "44function4.nc", 432, 1236);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "44function4.nc}", 432, 1238);
        # 434 "44function4.nc"
        __dec_obj194=fun_name2,
        fun_name2=(char* )come_increment_ref_count(new_fun_name_42, "44function4.nc", 434, 1240);
        __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 434, 1239);
        # 435 "44function4.nc"
        cloner=fun;
        (new_fun_name_42 = come_decrement_ref_count(new_fun_name_42, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 439, 1241));
    }
    # 439 "44function4.nc"
    info->no_output_come_code=no_output_come_code;
    # 440 "44function4.nc"
    __right_value0 = (void*)0;
    __dec_obj195=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"44function4.nc",440), "44function4.nc", 440, 1243);
    __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 440, 1242);
    # 441 "44function4.nc"
    info->sline=sline_top;
    # 443 "44function4.nc"
    __dec_obj196=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "44function4.nc", 443, 1245);
    __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 443, 1244);
    # 444 "44function4.nc"
    __dec_obj197=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "44function4.nc", 444, 1247);
    __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 444, 1246);
    # 446 "44function4.nc"
    info->caller_fun=caller_fun;
    # 450 "44function4.nc"
    info->right_value_max=right_value_max;
    # 451 "44function4.nc"
    info->right_value_num=right_value_num;
    # 452 "44function4.nc"
    info->num_conditional=num_conditional;
    # 453 "44function4.nc"
    info->max_conditional=max_conditional;
    # 454 "44function4.nc"
    info->in_conditional=in_conditional;
    # 455 "44function4.nc"
    __dec_obj198=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "44function4.nc", 455, 1249);
    come_call_finalizer(buffer_finalize, __dec_obj198,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 455, 1248);
    # 456 "44function4.nc"
    __dec_obj199=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "44function4.nc", 456, 1251);
    come_call_finalizer(buffer_finalize, __dec_obj199,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 456, 1250);
    # 457 "44function4.nc"
    __dec_obj200=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "44function4.nc", 457, 1253);
    come_call_finalizer(buffer_finalize, __dec_obj200,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 457, 1252);
    # 458 "44function4.nc"
    info->current_stack_frame_struct=current_stack_frame_struct;
    # 459 "44function4.nc"
    __dec_obj201=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "44function4.nc", 459, 1255);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj201,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 459, 1254);
    # 460 "44function4.nc"
    __dec_obj202=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "44function4.nc", 460, 1257);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj202,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 460, 1256);
    # 440 "44function4.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 440, 1258);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 440, 1259));
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 440, 1260);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 440, 1261);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 440, 1262);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 440, 1263));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 440, 1264));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 440, 1265));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 440, 1266);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 440, 1267));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 440, 1268);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 440, 1269));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_at"; neo_current_frame = &fr;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 3509 "./neo-c.h"
    # 3515 "./neo-c.h"
    if(self==((void*)0)) {
        # 3512 "./neo-c.h"
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3512, 1137);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 1148);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 1149);
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
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 3525, 1150);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3525, 1151);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3525, 1152);
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
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3532, 1153);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 1154);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 1155);
                return __result_obj__0;
            }
        }
        else {
            # 3536 "./neo-c.h"
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3536, 1156);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 1157);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 1158);
            return __result_obj__0;
        }
    }
    # 3540 "./neo-c.h"
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3540, 1159);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 1160);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 1161);
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
    # 1 "sGenericsFun_finalize"
    # 3 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        # 2 "sGenericsFun_finalize"
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 2, 1138);
    }
    # 4 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        # 3 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 3, 1139);
    }
    # 5 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        # 4 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 4, 1140);
    }
    # 6 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 5 "sGenericsFun_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 5, 1141));
    }
    # 7 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 6 "sGenericsFun_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 6, 1142);
    }
    # 8 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 7 "sGenericsFun_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 7, 1143);
    }
    # 9 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 8 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 8, 1144);
    }
    # 10 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        # 9 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 9, 1145);
    }
    # 11 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        # 10 "sGenericsFun_finalize"
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 10, 1146));
    }
    # 12 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        # 11 "sGenericsFun_finalize"
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 11, 1147));
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sFun$pchar$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple2$2sFun$pchar$ph$p_finalize"
    # 3 "tuple2$2sFun$pchar$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 2 "tuple2$2sFun$pchar$ph$p_finalize"
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2sFun$pchar$ph$p_finalize", 2, 1237));
    }
            neo_current_frame = fr.prev;
}

_Bool create_operator_equals_method(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_operator_equals_method"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  type_  ;
    char*  result  ;
    struct sClass*  current_stack_frame_struct  ;
    struct sFun*  caller_fun  ;
    struct buffer*  if_expression_buffer  ;
    struct buffer*  __dec_obj203  ;
    struct buffer*  loop_expression_buffer  ;
    struct buffer*  __dec_obj204  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj205  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char*  last_code  ;
    char*  __dec_obj206  ;
    char*  last_code2  ;
    char*  __dec_obj207  ;
    char*  sname_top  ;
    int sline_top;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    _Bool no_output_come_code;
    struct sClass*  klass  ;
    char*  class_name  ;
    struct sType*  type2  ;
    struct sFun*  cloner  ;
    char*  fun_name2  ;
    char*  none_generics_name  ;
    struct sType*  obj_type  ;
    char*  __dec_obj208  ;
    char*  fun_name3  ;
    struct sGenericsFun*  generics_fun  ;
    void* __right_value1 = (void*)0;
    struct tuple2$2char$ph_Bool$* multiple_assign_var4
;    char*  name  =0;
    _Bool err=0;
    char*  __dec_obj209  ;
    char*  __dec_obj210  ;
    char*  __dec_obj211  ;
    struct buffer*  __dec_obj212  ;
    struct buffer*  __dec_obj213  ;
    struct buffer*  __dec_obj214  ;
    struct list$1sRightValueObject$ph* __dec_obj215;
    struct list$1CVALUE$ph* __dec_obj216;
    _Bool __result_obj__0;
    char*  __dec_obj217  ;
    int i;
    char*  new_fun_name  ;
    char*  __dec_obj218  ;
    char*  __dec_obj219  ;
    char*  __dec_obj220  ;
    char*  __dec_obj221  ;
    struct buffer*  __dec_obj222  ;
    struct buffer*  __dec_obj223  ;
    struct buffer*  __dec_obj224  ;
    struct list$1sRightValueObject$ph* __dec_obj225;
    struct list$1CVALUE$ph* __dec_obj226;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var5
;    struct sFun*  fun  =0;
    char*  new_fun_name_43  =0;
    char*  __dec_obj227  ;
    char*  __dec_obj228  ;
    char*  __dec_obj229  ;
    char*  __dec_obj230  ;
    struct buffer*  __dec_obj231  ;
    struct buffer*  __dec_obj232  ;
    struct buffer*  __dec_obj233  ;
    struct list$1sRightValueObject$ph* __dec_obj234;
    struct list$1CVALUE$ph* __dec_obj235;
    memset(&fun_name2, 0, sizeof(fun_name2));
    memset(&i, 0, sizeof(i));
    # 445 "44function4.nc"
    type_=(struct sType* )come_increment_ref_count(get_no_solved_type2(type), "44function4.nc", 445, 1270);
    # 449 "44function4.nc"
    result=((void*)0);
    # 449 "44function4.nc"
    current_stack_frame_struct=info->current_stack_frame_struct;
    # 450 "44function4.nc"
    info->current_stack_frame_struct=((void*)0);
    # 451 "44function4.nc"
    caller_fun=info->caller_fun;
    # 452 "44function4.nc"
    info->caller_fun=info->come_fun;
    # 457 "44function4.nc"
    __right_value0 = (void*)0;
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "44function4.nc", 457, 1271);
    # 458 "44function4.nc"
    __dec_obj203=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj203,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 458, 1272);
    # 459 "44function4.nc"
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "44function4.nc", 459, 1273);
    # 460 "44function4.nc"
    __dec_obj204=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj204,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 460, 1274);
    # 461 "44function4.nc"
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "44function4.nc", 461, 1275);
    # 462 "44function4.nc"
    __dec_obj205=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj205,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 462, 1276);
    # 464 "44function4.nc"
    right_value_max=info->right_value_max;
    # 465 "44function4.nc"
    right_value_num=info->right_value_num;
    # 466 "44function4.nc"
    max_conditional=info->max_conditional;
    # 467 "44function4.nc"
    num_conditional=info->num_conditional;
    # 468 "44function4.nc"
    in_conditional=info->in_conditional;
    # 469 "44function4.nc"
    info->in_conditional=(_Bool)0;
    # 471 "44function4.nc"
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "44function4.nc", 471, 1277);
    # 472 "44function4.nc"
    __dec_obj206=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 472, 1278);
    # 473 "44function4.nc"
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "44function4.nc", 473, 1279);
    # 474 "44function4.nc"
    __dec_obj207=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 474, 1280);
    # 476 "44function4.nc"
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"44function4.nc",476), "44function4.nc", 476, 1281);
    # 477 "44function4.nc"
    sline_top=info->sline;
    # 479 "44function4.nc"
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "44function4.nc", 479, 1282);
    # 480 "44function4.nc"
    right_value_objects=info->right_value_objects;
    # 482 "44function4.nc"
    no_output_come_code=info->no_output_come_code;
    # 483 "44function4.nc"
    info->no_output_come_code=(_Bool)0;
    # 450 "44function4.nc"
    klass=type_->mClass;
    # 452 "44function4.nc"
    class_name=(char* )come_increment_ref_count(klass->mName, "44function4.nc", 452, 1283);
    # 454 "44function4.nc"
    const char* fun_name="operator_equals";
    # 456 "44function4.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(sType_clone(type_), "44function4.nc", 456, 1284);
    # 457 "44function4.nc"
    type2->mHeap=(_Bool)0;
    # 459 "44function4.nc"
    cloner=((void*)0);
    # 460 "44function4.nc"
    # 503 "44function4.nc"
    if(list$1sType$ph_length(type_->mGenericsTypes)>0) {
        # 462 "44function4.nc"
        __right_value0 = (void*)0;
        none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type_->mClass->mName), "44function4.nc", 462, 1285);
        # 464 "44function4.nc"
        __right_value0 = (void*)0;
        obj_type=(struct sType* )come_increment_ref_count(solve_generics(type_,info->generics_type,info), "44function4.nc", 464, 1286);
        # 466 "44function4.nc"
        __right_value0 = (void*)0;
        __dec_obj208=fun_name2,
        fun_name2=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1), "44function4.nc", 466, 1288);
        __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 466, 1287);
        # 467 "44function4.nc"
        __right_value0 = (void*)0;
        fun_name3=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "44function4.nc", 467, 1289);
        # 469 "44function4.nc"
        __right_value0 = (void*)0;
        generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0),(_Bool)0)));
        # 483 "44function4.nc"
        if(generics_fun) {
            # 472 "44function4.nc"
            __right_value0 = (void*)0;
            multiple_assign_var4=((struct tuple2$2char$ph_Bool$*)(__right_value1=create_generics_fun((char* )come_increment_ref_count(__builtin_string(fun_name2,"44function4.nc",472), "44function4.nc", 472, 1290),generics_fun,obj_type,info)));
            name=(char* )come_increment_ref_count(multiple_assign_var4->v1, "44function4.nc", 472, 1291);
            err=multiple_assign_var4->v2;
            come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "44function4.nc}", 472, 1292);
            # 478 "44function4.nc"
            if(!err) {
                # 476 "44function4.nc"
                info->no_output_come_code=no_output_come_code;
                # 477 "44function4.nc"
                __right_value0 = (void*)0;
                __dec_obj209=info->sname,
                info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"44function4.nc",477), "44function4.nc", 477, 1294);
                __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 477, 1293);
                # 478 "44function4.nc"
                info->sline=sline_top;
                # 480 "44function4.nc"
                __dec_obj210=info->module->mLastCode,
                info->module->mLastCode=(char* )come_increment_ref_count(last_code, "44function4.nc", 480, 1296);
                __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 480, 1295);
                # 481 "44function4.nc"
                __dec_obj211=info->module->mLastCode2,
                info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "44function4.nc", 481, 1298);
                __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 481, 1297);
                # 483 "44function4.nc"
                info->caller_fun=caller_fun;
                # 487 "44function4.nc"
                info->right_value_max=right_value_max;
                # 488 "44function4.nc"
                info->right_value_num=right_value_num;
                # 489 "44function4.nc"
                info->num_conditional=num_conditional;
                # 490 "44function4.nc"
                info->max_conditional=max_conditional;
                # 491 "44function4.nc"
                info->in_conditional=in_conditional;
                # 492 "44function4.nc"
                __dec_obj212=info->if_expression_buffer,
                info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "44function4.nc", 492, 1300);
                come_call_finalizer(buffer_finalize, __dec_obj212,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 492, 1299);
                # 493 "44function4.nc"
                __dec_obj213=info->loop_expression_buffer,
                info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "44function4.nc", 493, 1302);
                come_call_finalizer(buffer_finalize, __dec_obj213,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 493, 1301);
                # 494 "44function4.nc"
                __dec_obj214=info->paren_block_buffer,
                info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "44function4.nc", 494, 1304);
                come_call_finalizer(buffer_finalize, __dec_obj214,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 494, 1303);
                # 495 "44function4.nc"
                info->current_stack_frame_struct=current_stack_frame_struct;
                # 496 "44function4.nc"
                __dec_obj215=info->right_value_objects,
                info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "44function4.nc", 496, 1306);
                come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj215,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 496, 1305);
                # 497 "44function4.nc"
                __dec_obj216=info->stack,
                info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "44function4.nc", 497, 1308);
                come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj216,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 497, 1307);
                # 476 "44function4.nc"
                                __result_obj__0 = (_Bool)0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 476, 1309));
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 476, 1310));
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 476, 1311);
                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 476, 1312));
                come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 476, 1313);
                (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 476, 1314));
                come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 476, 1315);
                come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 476, 1316);
                come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 476, 1317);
                (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 476, 1318));
                (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 476, 1319));
                (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 476, 1320));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 476, 1321);
                (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 476, 1322));
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 476, 1323);
                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 476, 1324));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            # 478 "44function4.nc"
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 483, 1325));
        }
        else {
            # 481 "44function4.nc"
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 503, 1326));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 503, 1327);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 503, 1328));
    }
    else {
        # 485 "44function4.nc"
        __right_value0 = (void*)0;
        __dec_obj217=fun_name2,
        fun_name2=(char* )come_increment_ref_count(create_method_name(type_,(_Bool)0,fun_name,info,(_Bool)1), "44function4.nc", 485, 1330);
        __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 485, 1329);
        # 487 "44function4.nc"
        # 498 "44function4.nc"
        for(i=128-1        ;i>=1;i--){
            # 489 "44function4.nc"
            __right_value0 = (void*)0;
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i), "44function4.nc", 489, 1331);
            # 490 "44function4.nc"
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            # 496 "44function4.nc"
            if(cloner) {
                # 493 "44function4.nc"
                __right_value0 = (void*)0;
                __dec_obj218=fun_name2,
                fun_name2=(char* )come_increment_ref_count(__builtin_string(new_fun_name,"44function4.nc",493), "44function4.nc", 493, 1333);
                __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 493, 1332);
                # 494 "44function4.nc"
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 494, 1334));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 498, 1335));
        }
        # 501 "44function4.nc"
        if(cloner==((void*)0)) {
            # 499 "44function4.nc"
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
    }
    # 517 "44function4.nc"
    if(cloner==((void*)0)&&!type_->mClass->mProtocol&&!type_->mClass->mNumber) {
        # 510 "44function4.nc"
        if(require_explicit_method_in_low_memory_mode(type_,fun_name,info)) {
            # 507 "44function4.nc"
            info->no_output_come_code=no_output_come_code;
            # 508 "44function4.nc"
            __right_value0 = (void*)0;
            __dec_obj219=info->sname,
            info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"44function4.nc",508), "44function4.nc", 508, 1337);
            __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 508, 1336);
            # 509 "44function4.nc"
            info->sline=sline_top;
            # 511 "44function4.nc"
            __dec_obj220=info->module->mLastCode,
            info->module->mLastCode=(char* )come_increment_ref_count(last_code, "44function4.nc", 511, 1339);
            __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 511, 1338);
            # 512 "44function4.nc"
            __dec_obj221=info->module->mLastCode2,
            info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "44function4.nc", 512, 1341);
            __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 512, 1340);
            # 514 "44function4.nc"
            info->caller_fun=caller_fun;
            # 518 "44function4.nc"
            info->right_value_max=right_value_max;
            # 519 "44function4.nc"
            info->right_value_num=right_value_num;
            # 520 "44function4.nc"
            info->num_conditional=num_conditional;
            # 521 "44function4.nc"
            info->max_conditional=max_conditional;
            # 522 "44function4.nc"
            info->in_conditional=in_conditional;
            # 523 "44function4.nc"
            __dec_obj222=info->if_expression_buffer,
            info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "44function4.nc", 523, 1343);
            come_call_finalizer(buffer_finalize, __dec_obj222,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 523, 1342);
            # 524 "44function4.nc"
            __dec_obj223=info->loop_expression_buffer,
            info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "44function4.nc", 524, 1345);
            come_call_finalizer(buffer_finalize, __dec_obj223,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 524, 1344);
            # 525 "44function4.nc"
            __dec_obj224=info->paren_block_buffer,
            info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "44function4.nc", 525, 1347);
            come_call_finalizer(buffer_finalize, __dec_obj224,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 525, 1346);
            # 526 "44function4.nc"
            info->current_stack_frame_struct=current_stack_frame_struct;
            # 527 "44function4.nc"
            __dec_obj225=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "44function4.nc", 527, 1349);
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj225,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 527, 1348);
            # 528 "44function4.nc"
            __dec_obj226=info->stack,
            info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "44function4.nc", 528, 1351);
            come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj226,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 528, 1350);
            # 507 "44function4.nc"
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 507, 1352);
            (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 507, 1353));
            come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 507, 1354);
            come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 507, 1355);
            come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 507, 1356);
            (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 507, 1357));
            (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 507, 1358));
            (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 507, 1359));
            come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 507, 1360);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 507, 1361));
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 507, 1362);
            (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 507, 1363));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 510 "44function4.nc"
        __right_value0 = (void*)0;
        multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_operator_equals_automatically(type_,fun_name,info)));
        fun=multiple_assign_var5->v1;
        new_fun_name_43=(char* )come_increment_ref_count(multiple_assign_var5->v2, "44function4.nc", 510, 1364);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "44function4.nc}", 510, 1365);
        # 512 "44function4.nc"
        __dec_obj227=fun_name2,
        fun_name2=(char* )come_increment_ref_count(new_fun_name_43, "44function4.nc", 512, 1367);
        __dec_obj227 = come_decrement_ref_count(__dec_obj227, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 512, 1366);
        # 513 "44function4.nc"
        cloner=fun;
        (new_fun_name_43 = come_decrement_ref_count(new_fun_name_43, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 517, 1368));
    }
    # 517 "44function4.nc"
    info->no_output_come_code=no_output_come_code;
    # 518 "44function4.nc"
    __right_value0 = (void*)0;
    __dec_obj228=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"44function4.nc",518), "44function4.nc", 518, 1370);
    __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 518, 1369);
    # 519 "44function4.nc"
    info->sline=sline_top;
    # 521 "44function4.nc"
    __dec_obj229=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "44function4.nc", 521, 1372);
    __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 521, 1371);
    # 522 "44function4.nc"
    __dec_obj230=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "44function4.nc", 522, 1374);
    __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 522, 1373);
    # 524 "44function4.nc"
    info->caller_fun=caller_fun;
    # 528 "44function4.nc"
    info->right_value_max=right_value_max;
    # 529 "44function4.nc"
    info->right_value_num=right_value_num;
    # 530 "44function4.nc"
    info->num_conditional=num_conditional;
    # 531 "44function4.nc"
    info->max_conditional=max_conditional;
    # 532 "44function4.nc"
    info->in_conditional=in_conditional;
    # 533 "44function4.nc"
    __dec_obj231=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "44function4.nc", 533, 1376);
    come_call_finalizer(buffer_finalize, __dec_obj231,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 533, 1375);
    # 534 "44function4.nc"
    __dec_obj232=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "44function4.nc", 534, 1378);
    come_call_finalizer(buffer_finalize, __dec_obj232,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 534, 1377);
    # 535 "44function4.nc"
    __dec_obj233=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "44function4.nc", 535, 1380);
    come_call_finalizer(buffer_finalize, __dec_obj233,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 535, 1379);
    # 536 "44function4.nc"
    info->current_stack_frame_struct=current_stack_frame_struct;
    # 537 "44function4.nc"
    __dec_obj234=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "44function4.nc", 537, 1382);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj234,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 537, 1381);
    # 538 "44function4.nc"
    __dec_obj235=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "44function4.nc", 538, 1384);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj235,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 538, 1383);
    # 518 "44function4.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 518, 1385);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 518, 1386));
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 518, 1387);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 518, 1388);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 518, 1389);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 518, 1390));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 518, 1391));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 518, 1392));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 518, 1393);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 518, 1394));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 518, 1395);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 518, 1396));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool create_operator_not_equals_method(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_operator_not_equals_method"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  type_  ;
    char*  result  ;
    struct sClass*  current_stack_frame_struct  ;
    struct sFun*  caller_fun  ;
    struct buffer*  if_expression_buffer  ;
    struct buffer*  __dec_obj236  ;
    struct buffer*  loop_expression_buffer  ;
    struct buffer*  __dec_obj237  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj238  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char*  last_code  ;
    char*  __dec_obj239  ;
    char*  last_code2  ;
    char*  __dec_obj240  ;
    char*  sname_top  ;
    int sline_top;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    _Bool no_output_come_code;
    struct sClass*  klass  ;
    char*  class_name  ;
    struct sType*  type2  ;
    struct sFun*  cloner  ;
    char*  fun_name2  ;
    char*  none_generics_name  ;
    struct sType*  obj_type  ;
    char*  __dec_obj241  ;
    char*  fun_name3  ;
    struct sGenericsFun*  generics_fun  ;
    void* __right_value1 = (void*)0;
    struct tuple2$2char$ph_Bool$* multiple_assign_var6
;    char*  name  =0;
    _Bool err=0;
    char*  __dec_obj242  ;
    char*  __dec_obj243  ;
    char*  __dec_obj244  ;
    struct buffer*  __dec_obj245  ;
    struct buffer*  __dec_obj246  ;
    struct buffer*  __dec_obj247  ;
    struct list$1sRightValueObject$ph* __dec_obj248;
    struct list$1CVALUE$ph* __dec_obj249;
    _Bool __result_obj__0;
    char*  __dec_obj250  ;
    int i;
    char*  new_fun_name  ;
    char*  __dec_obj251  ;
    char*  __dec_obj252  ;
    char*  __dec_obj253  ;
    char*  __dec_obj254  ;
    struct buffer*  __dec_obj255  ;
    struct buffer*  __dec_obj256  ;
    struct buffer*  __dec_obj257  ;
    struct list$1sRightValueObject$ph* __dec_obj258;
    struct list$1CVALUE$ph* __dec_obj259;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var7
;    struct sFun*  fun  =0;
    char*  new_fun_name_44  =0;
    char*  __dec_obj260  ;
    char*  __dec_obj261  ;
    char*  __dec_obj262  ;
    char*  __dec_obj263  ;
    struct buffer*  __dec_obj264  ;
    struct buffer*  __dec_obj265  ;
    struct buffer*  __dec_obj266  ;
    struct list$1sRightValueObject$ph* __dec_obj267;
    struct list$1CVALUE$ph* __dec_obj268;
    memset(&fun_name2, 0, sizeof(fun_name2));
    memset(&i, 0, sizeof(i));
    # 523 "44function4.nc"
    type_=(struct sType* )come_increment_ref_count(get_no_solved_type2(type), "44function4.nc", 523, 1397);
    # 527 "44function4.nc"
    result=((void*)0);
    # 527 "44function4.nc"
    current_stack_frame_struct=info->current_stack_frame_struct;
    # 528 "44function4.nc"
    info->current_stack_frame_struct=((void*)0);
    # 529 "44function4.nc"
    caller_fun=info->caller_fun;
    # 530 "44function4.nc"
    info->caller_fun=info->come_fun;
    # 535 "44function4.nc"
    __right_value0 = (void*)0;
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "44function4.nc", 535, 1398);
    # 536 "44function4.nc"
    __dec_obj236=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj236,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 536, 1399);
    # 537 "44function4.nc"
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "44function4.nc", 537, 1400);
    # 538 "44function4.nc"
    __dec_obj237=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj237,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 538, 1401);
    # 539 "44function4.nc"
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "44function4.nc", 539, 1402);
    # 540 "44function4.nc"
    __dec_obj238=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj238,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 540, 1403);
    # 542 "44function4.nc"
    right_value_max=info->right_value_max;
    # 543 "44function4.nc"
    right_value_num=info->right_value_num;
    # 544 "44function4.nc"
    max_conditional=info->max_conditional;
    # 545 "44function4.nc"
    num_conditional=info->num_conditional;
    # 546 "44function4.nc"
    in_conditional=info->in_conditional;
    # 547 "44function4.nc"
    info->in_conditional=(_Bool)0;
    # 549 "44function4.nc"
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "44function4.nc", 549, 1404);
    # 550 "44function4.nc"
    __dec_obj239=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 550, 1405);
    # 551 "44function4.nc"
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "44function4.nc", 551, 1406);
    # 552 "44function4.nc"
    __dec_obj240=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 552, 1407);
    # 554 "44function4.nc"
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"44function4.nc",554), "44function4.nc", 554, 1408);
    # 555 "44function4.nc"
    sline_top=info->sline;
    # 557 "44function4.nc"
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "44function4.nc", 557, 1409);
    # 558 "44function4.nc"
    right_value_objects=info->right_value_objects;
    # 560 "44function4.nc"
    no_output_come_code=info->no_output_come_code;
    # 561 "44function4.nc"
    info->no_output_come_code=(_Bool)0;
    # 528 "44function4.nc"
    klass=type_->mClass;
    # 530 "44function4.nc"
    class_name=(char* )come_increment_ref_count(klass->mName, "44function4.nc", 530, 1410);
    # 532 "44function4.nc"
    const char* fun_name="operator_not_equals";
    # 534 "44function4.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(sType_clone(type_), "44function4.nc", 534, 1411);
    # 535 "44function4.nc"
    type2->mHeap=(_Bool)0;
    # 537 "44function4.nc"
    cloner=((void*)0);
    # 538 "44function4.nc"
    # 581 "44function4.nc"
    if(list$1sType$ph_length(type_->mGenericsTypes)>0) {
        # 540 "44function4.nc"
        __right_value0 = (void*)0;
        none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type_->mClass->mName), "44function4.nc", 540, 1412);
        # 542 "44function4.nc"
        __right_value0 = (void*)0;
        obj_type=(struct sType* )come_increment_ref_count(solve_generics(type_,info->generics_type,info), "44function4.nc", 542, 1413);
        # 544 "44function4.nc"
        __right_value0 = (void*)0;
        __dec_obj241=fun_name2,
        fun_name2=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1), "44function4.nc", 544, 1415);
        __dec_obj241 = come_decrement_ref_count(__dec_obj241, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 544, 1414);
        # 545 "44function4.nc"
        __right_value0 = (void*)0;
        fun_name3=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "44function4.nc", 545, 1416);
        # 547 "44function4.nc"
        __right_value0 = (void*)0;
        generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0),(_Bool)0)));
        # 561 "44function4.nc"
        if(generics_fun) {
            # 550 "44function4.nc"
            __right_value0 = (void*)0;
            multiple_assign_var6=((struct tuple2$2char$ph_Bool$*)(__right_value1=create_generics_fun((char* )come_increment_ref_count(__builtin_string(fun_name2,"44function4.nc",550), "44function4.nc", 550, 1417),generics_fun,obj_type,info)));
            name=(char* )come_increment_ref_count(multiple_assign_var6->v1, "44function4.nc", 550, 1418);
            err=multiple_assign_var6->v2;
            come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "44function4.nc}", 550, 1419);
            # 556 "44function4.nc"
            if(!err) {
                # 554 "44function4.nc"
                info->no_output_come_code=no_output_come_code;
                # 555 "44function4.nc"
                __right_value0 = (void*)0;
                __dec_obj242=info->sname,
                info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"44function4.nc",555), "44function4.nc", 555, 1421);
                __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 555, 1420);
                # 556 "44function4.nc"
                info->sline=sline_top;
                # 558 "44function4.nc"
                __dec_obj243=info->module->mLastCode,
                info->module->mLastCode=(char* )come_increment_ref_count(last_code, "44function4.nc", 558, 1423);
                __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 558, 1422);
                # 559 "44function4.nc"
                __dec_obj244=info->module->mLastCode2,
                info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "44function4.nc", 559, 1425);
                __dec_obj244 = come_decrement_ref_count(__dec_obj244, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 559, 1424);
                # 561 "44function4.nc"
                info->caller_fun=caller_fun;
                # 565 "44function4.nc"
                info->right_value_max=right_value_max;
                # 566 "44function4.nc"
                info->right_value_num=right_value_num;
                # 567 "44function4.nc"
                info->num_conditional=num_conditional;
                # 568 "44function4.nc"
                info->max_conditional=max_conditional;
                # 569 "44function4.nc"
                info->in_conditional=in_conditional;
                # 570 "44function4.nc"
                __dec_obj245=info->if_expression_buffer,
                info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "44function4.nc", 570, 1427);
                come_call_finalizer(buffer_finalize, __dec_obj245,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 570, 1426);
                # 571 "44function4.nc"
                __dec_obj246=info->loop_expression_buffer,
                info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "44function4.nc", 571, 1429);
                come_call_finalizer(buffer_finalize, __dec_obj246,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 571, 1428);
                # 572 "44function4.nc"
                __dec_obj247=info->paren_block_buffer,
                info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "44function4.nc", 572, 1431);
                come_call_finalizer(buffer_finalize, __dec_obj247,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 572, 1430);
                # 573 "44function4.nc"
                info->current_stack_frame_struct=current_stack_frame_struct;
                # 574 "44function4.nc"
                __dec_obj248=info->right_value_objects,
                info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "44function4.nc", 574, 1433);
                come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj248,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 574, 1432);
                # 575 "44function4.nc"
                __dec_obj249=info->stack,
                info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "44function4.nc", 575, 1435);
                come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj249,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 575, 1434);
                # 554 "44function4.nc"
                                __result_obj__0 = (_Bool)0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 554, 1436));
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 554, 1437));
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 554, 1438);
                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 554, 1439));
                come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 554, 1440);
                (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 554, 1441));
                come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 554, 1442);
                come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 554, 1443);
                come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 554, 1444);
                (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 554, 1445));
                (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 554, 1446));
                (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 554, 1447));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 554, 1448);
                (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 554, 1449));
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 554, 1450);
                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 554, 1451));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            # 556 "44function4.nc"
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 561, 1452));
        }
        else {
            # 559 "44function4.nc"
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 581, 1453));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 581, 1454);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 581, 1455));
    }
    else {
        # 563 "44function4.nc"
        __right_value0 = (void*)0;
        __dec_obj250=fun_name2,
        fun_name2=(char* )come_increment_ref_count(create_method_name(type_,(_Bool)0,fun_name,info,(_Bool)1), "44function4.nc", 563, 1457);
        __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 563, 1456);
        # 565 "44function4.nc"
        # 576 "44function4.nc"
        for(i=128-1        ;i>=1;i--){
            # 567 "44function4.nc"
            __right_value0 = (void*)0;
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i), "44function4.nc", 567, 1458);
            # 568 "44function4.nc"
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            # 574 "44function4.nc"
            if(cloner) {
                # 571 "44function4.nc"
                __right_value0 = (void*)0;
                __dec_obj251=fun_name2,
                fun_name2=(char* )come_increment_ref_count(__builtin_string(new_fun_name,"44function4.nc",571), "44function4.nc", 571, 1460);
                __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 571, 1459);
                # 572 "44function4.nc"
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 572, 1461));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 576, 1462));
        }
        # 579 "44function4.nc"
        if(cloner==((void*)0)) {
            # 577 "44function4.nc"
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
    }
    # 595 "44function4.nc"
    if(cloner==((void*)0)&&!type_->mClass->mProtocol&&!type_->mClass->mNumber) {
        # 588 "44function4.nc"
        if(require_explicit_method_in_low_memory_mode(type_,fun_name,info)) {
            # 585 "44function4.nc"
            info->no_output_come_code=no_output_come_code;
            # 586 "44function4.nc"
            __right_value0 = (void*)0;
            __dec_obj252=info->sname,
            info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"44function4.nc",586), "44function4.nc", 586, 1464);
            __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 586, 1463);
            # 587 "44function4.nc"
            info->sline=sline_top;
            # 589 "44function4.nc"
            __dec_obj253=info->module->mLastCode,
            info->module->mLastCode=(char* )come_increment_ref_count(last_code, "44function4.nc", 589, 1466);
            __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 589, 1465);
            # 590 "44function4.nc"
            __dec_obj254=info->module->mLastCode2,
            info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "44function4.nc", 590, 1468);
            __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 590, 1467);
            # 592 "44function4.nc"
            info->caller_fun=caller_fun;
            # 596 "44function4.nc"
            info->right_value_max=right_value_max;
            # 597 "44function4.nc"
            info->right_value_num=right_value_num;
            # 598 "44function4.nc"
            info->num_conditional=num_conditional;
            # 599 "44function4.nc"
            info->max_conditional=max_conditional;
            # 600 "44function4.nc"
            info->in_conditional=in_conditional;
            # 601 "44function4.nc"
            __dec_obj255=info->if_expression_buffer,
            info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "44function4.nc", 601, 1470);
            come_call_finalizer(buffer_finalize, __dec_obj255,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 601, 1469);
            # 602 "44function4.nc"
            __dec_obj256=info->loop_expression_buffer,
            info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "44function4.nc", 602, 1472);
            come_call_finalizer(buffer_finalize, __dec_obj256,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 602, 1471);
            # 603 "44function4.nc"
            __dec_obj257=info->paren_block_buffer,
            info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "44function4.nc", 603, 1474);
            come_call_finalizer(buffer_finalize, __dec_obj257,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 603, 1473);
            # 604 "44function4.nc"
            info->current_stack_frame_struct=current_stack_frame_struct;
            # 605 "44function4.nc"
            __dec_obj258=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "44function4.nc", 605, 1476);
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj258,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 605, 1475);
            # 606 "44function4.nc"
            __dec_obj259=info->stack,
            info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "44function4.nc", 606, 1478);
            come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj259,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 606, 1477);
            # 585 "44function4.nc"
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 585, 1479);
            (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 585, 1480));
            come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 585, 1481);
            come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 585, 1482);
            come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 585, 1483);
            (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 585, 1484));
            (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 585, 1485));
            (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 585, 1486));
            come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 585, 1487);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 585, 1488));
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 585, 1489);
            (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 585, 1490));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 588 "44function4.nc"
        __right_value0 = (void*)0;
        multiple_assign_var7=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_operator_not_equals_automatically(type_,fun_name,info)));
        fun=multiple_assign_var7->v1;
        new_fun_name_44=(char* )come_increment_ref_count(multiple_assign_var7->v2, "44function4.nc", 588, 1491);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "44function4.nc}", 588, 1492);
        # 590 "44function4.nc"
        __dec_obj260=fun_name2,
        fun_name2=(char* )come_increment_ref_count(new_fun_name_44, "44function4.nc", 590, 1494);
        __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 590, 1493);
        # 591 "44function4.nc"
        cloner=fun;
        (new_fun_name_44 = come_decrement_ref_count(new_fun_name_44, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 595, 1495));
    }
    # 595 "44function4.nc"
    info->no_output_come_code=no_output_come_code;
    # 596 "44function4.nc"
    __right_value0 = (void*)0;
    __dec_obj261=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"44function4.nc",596), "44function4.nc", 596, 1497);
    __dec_obj261 = come_decrement_ref_count(__dec_obj261, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 596, 1496);
    # 597 "44function4.nc"
    info->sline=sline_top;
    # 599 "44function4.nc"
    __dec_obj262=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "44function4.nc", 599, 1499);
    __dec_obj262 = come_decrement_ref_count(__dec_obj262, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 599, 1498);
    # 600 "44function4.nc"
    __dec_obj263=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "44function4.nc", 600, 1501);
    __dec_obj263 = come_decrement_ref_count(__dec_obj263, (void*)0, (void*)0, 0,0, (void*)0, "44function4.nc", 600, 1500);
    # 602 "44function4.nc"
    info->caller_fun=caller_fun;
    # 606 "44function4.nc"
    info->right_value_max=right_value_max;
    # 607 "44function4.nc"
    info->right_value_num=right_value_num;
    # 608 "44function4.nc"
    info->num_conditional=num_conditional;
    # 609 "44function4.nc"
    info->max_conditional=max_conditional;
    # 610 "44function4.nc"
    info->in_conditional=in_conditional;
    # 611 "44function4.nc"
    __dec_obj264=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "44function4.nc", 611, 1503);
    come_call_finalizer(buffer_finalize, __dec_obj264,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 611, 1502);
    # 612 "44function4.nc"
    __dec_obj265=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "44function4.nc", 612, 1505);
    come_call_finalizer(buffer_finalize, __dec_obj265,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 612, 1504);
    # 613 "44function4.nc"
    __dec_obj266=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "44function4.nc", 613, 1507);
    come_call_finalizer(buffer_finalize, __dec_obj266,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 613, 1506);
    # 614 "44function4.nc"
    info->current_stack_frame_struct=current_stack_frame_struct;
    # 615 "44function4.nc"
    __dec_obj267=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "44function4.nc", 615, 1509);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj267,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 615, 1508);
    # 616 "44function4.nc"
    __dec_obj268=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "44function4.nc", 616, 1511);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj268,(void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc", 616, 1510);
    # 596 "44function4.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 596, 1512);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 596, 1513));
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 596, 1514);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 596, 1515);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 596, 1516);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 596, 1517));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 596, 1518));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 596, 1519));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 596, 1520);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 596, 1521));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "44function4.nc}", 596, 1522);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "44function4.nc", 596, 1523));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

