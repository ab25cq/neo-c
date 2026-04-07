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

struct sLambdaNode
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
_Bool is_owned_main(struct sType*  type_  , struct sClass*  klass  , struct sType*  field_type  , struct sType*  owner  , struct sInfo*  info  );
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun*  fun  , struct sInfo*  info  );
char*  sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo*  info  );
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun*  fun  , struct sInfo*  info  );
char*  sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sLambdaNode_finalize(struct sLambdaNode* self);
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
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static void CVALUE_finalize(struct CVALUE*  self  );
struct sNode* parse_function(struct sInfo*  info  );
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self);
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static void sFun_finalize(struct sFun*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  item  , _Bool by_pointer);
static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self);
static void map$2char$phsFun$ph_remove_ordered_entry(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phsFun$ph_key_position(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  item  , _Bool by_pointer);
static void sGenericsFun_finalize(struct sGenericsFun*  self  );
static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self);
static void map$2char$phsGenericsFun$ph_remove_ordered_entry(struct map$2char$phsGenericsFun$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phsGenericsFun$ph_key_position(struct map$2char$phsGenericsFun$ph* self, char*  key  , _Bool by_pointer);
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
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun*  fun  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sLambdaNode* __result_obj__0;
    # 7 "48function8.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLambdaNode*)come_increment_ref_count(self, "48function8.nc", 7, 1),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 7, 3);
    # 9 "48function8.nc"
    self->mFun=fun;
    # 12 "48function8.nc"
        __result_obj__0 = (struct sLambdaNode*)come_increment_ref_count(self, "48function8.nc", 12, 4);
    come_call_finalizer(sLambdaNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "48function8.nc}", 12, 6);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLambdaNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "48function8.nc}", 12, 7);
    return __result_obj__0;
}

char*  sLambdaNode_kind(struct sLambdaNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 14 "48function8.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLambdaNode","48function8.nc",14))), "48function8.nc", 14, 8);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "48function8.nc", 14, 9));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "48function8.nc", 14, 10));
    return __result_obj__0;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaNode_compile"; neo_current_frame = &fr;
    struct sFun*  come_fun  ;
    int right_value_max;
    int right_value_num;
    int block_level;
    int max_conditional;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj1  ;
    struct sType*  __dec_obj36  ;
    _Bool __result_obj__0;
    # 19 "48function8.nc"
    come_fun=info->come_fun;
    # 20 "48function8.nc"
    info->come_fun=self->mFun;
    # 22 "48function8.nc"
    right_value_max=info->right_value_max;
    # 23 "48function8.nc"
    info->right_value_max=0;
    # 25 "48function8.nc"
    right_value_num=info->right_value_num;
    # 26 "48function8.nc"
    info->right_value_num=0;
    # 28 "48function8.nc"
    block_level=info->block_level;
    # 29 "48function8.nc"
    info->block_level=0;
    # 31 "48function8.nc"
    max_conditional=info->max_conditional;
    # 32 "48function8.nc"
    info->max_conditional=0;
    # 38 "48function8.nc"
    if(!gComeC&&!info->come_fun->mResultType->mNorecord) {
        # 35 "48function8.nc"
        add_come_code_at_function_head(info,((char*)(__right_value1=xsprintf("struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = \"\%s\"; neo_current_frame = &fr;\n",((char* )(__right_value0=string_to_string(info->come_fun->mName)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "48function8.nc", 35, 11));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "48function8.nc", 35, 12));
    }
    # 41 "48function8.nc"
    if(self->mFun->mBlock) {
        # 39 "48function8.nc"
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    # 45 "48function8.nc"
    if(!gComeC&&!info->inhibits_output_code2&&!info->come_fun->mResultType->mNorecord) {
        # 42 "48function8.nc"
        add_come_code_no_indent(info,"neo_current_frame = fr.prev;\n");
    }
    # 45 "48function8.nc"
    info->block_level=block_level;
    # 47 "48function8.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "48function8.nc", 47, 13, "struct CVALUE* "), "48function8.nc", 47, 14)), "48function8.nc", 47, 15);
    # 49 "48function8.nc"
    __right_value0 = (void*)0;
    __dec_obj1=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s",self->mFun->mName), "48function8.nc", 49, 17);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 49, 16);
    # 50 "48function8.nc"
    __right_value0 = (void*)0;
    __dec_obj36=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(self->mFun->mLambdaType), "48function8.nc", 50, 228);
    come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc", 50, 227);
    # 51 "48function8.nc"
    come_value->var=((void*)0);
    # 53 "48function8.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 55 "48function8.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "48function8.nc", 55, 248));
    # 57 "48function8.nc"
    info->come_fun=come_fun;
    # 59 "48function8.nc"
    info->right_value_max=right_value_max;
    # 60 "48function8.nc"
    info->right_value_num=right_value_num;
    # 61 "48function8.nc"
    info->max_conditional=max_conditional;
    # 63 "48function8.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 63, 249);
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

static void sLambdaNode_finalize(struct sLambdaNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaNode_finalize"; neo_current_frame = &fr;
    # 1 "sLambdaNode_finalize"
    # 3 "sLambdaNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sLambdaNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLambdaNode_finalize", 2, 5));
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
                __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0, "sType_clone", 4, 18);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 4, 51);
        return __result_obj__0;
    }
    # 5 "sType_clone"
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 52, "struct sType* "), "sType_clone", 5, 53);
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
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 55);
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 54);
    }
    # 9 "sType_clone"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 8 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj3=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 57);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 56);
    }
    # 10 "sType_clone"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 9 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj7=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 2, 87);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 2, 86);
    }
    # 11 "sType_clone"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 10 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj8=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 89);
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 88);
    }
    # 12 "sType_clone"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 11 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj9=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 98);
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 97) :0);
    }
    # 13 "sType_clone"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 12 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj10=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 100);
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 99) :0);
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
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 101, "char* "), "sType_clone", 14, 103);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 102);
    }
    # 16 "sType_clone"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 15 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj12=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 104, "char* "), "sType_clone", 15, 106);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 105);
    }
    # 17 "sType_clone"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 16 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj13=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 107, "char* "), "sType_clone", 16, 109);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 108);
    }
    # 18 "sType_clone"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 17 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj14=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 110, "char* "), "sType_clone", 17, 112);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 111);
    }
    # 19 "sType_clone"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 18 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj15=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 113, "char* "), "sType_clone", 18, 115);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 114);
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
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 116, "char* "), "sType_clone", 49, 118);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 117);
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
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 119, "char* "), "sType_clone", 51, 121);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 120);
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
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 122, "char* "), "sType_clone", 54, 124);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 123);
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
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 15, 154);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 153);
    }
    # 59 "sType_clone"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 58 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj23=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 156);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 155);
    }
    # 60 "sType_clone"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 59 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj24=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 15, 176);
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 175);
    }
    # 61 "sType_clone"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 60 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj25=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 178);
        come_call_finalizer(list$1int$_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 177);
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
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 180);
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 179);
    }
    # 68 "sType_clone"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 67 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj27=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 181, "char* "), "sType_clone", 67, 183);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 182);
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
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 185);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 184);
    }
    # 73 "sType_clone"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 72 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj32=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 15, 217);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 216);
    }
    # 74 "sType_clone"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 73 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj33=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 219);
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 218);
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
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 221);
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 220) :0);
    }
    # 77 "sType_clone"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 76 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj35=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 223);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 222);
    }
    # 77 "sType_clone"
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "sType_clone", 77, 224);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 225);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 226);
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    # 1 "sType_finalize"
    # 3 "sType_finalize"
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        # 2 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 19);
    }
    # 4 "sType_finalize"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 3 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 20);
    }
    # 5 "sType_finalize"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 4 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 23);
    }
    # 6 "sType_finalize"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 5 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 24);
    }
    # 7 "sType_finalize"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 6 "sType_finalize"
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 25):(void*)0);
    }
    # 8 "sType_finalize"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 7 "sType_finalize"
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 26):(void*)0);
    }
    # 9 "sType_finalize"
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        # 8 "sType_finalize"
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 27));
    }
    # 10 "sType_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 9 "sType_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 28));
    }
    # 11 "sType_finalize"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 10 "sType_finalize"
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 29));
    }
    # 12 "sType_finalize"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 11 "sType_finalize"
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 30));
    }
    # 13 "sType_finalize"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 12 "sType_finalize"
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 31));
    }
    # 14 "sType_finalize"
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        # 13 "sType_finalize"
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 32));
    }
    # 15 "sType_finalize"
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        # 14 "sType_finalize"
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 33));
    }
    # 16 "sType_finalize"
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        # 15 "sType_finalize"
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 34));
    }
    # 17 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        # 16 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 37);
    }
    # 18 "sType_finalize"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 17 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 38);
    }
    # 19 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 18 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 40);
    }
    # 20 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 19 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 41);
    }
    # 21 "sType_finalize"
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        # 20 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 42);
    }
    # 22 "sType_finalize"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 21 "sType_finalize"
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 43));
    }
    # 23 "sType_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 22 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 44);
    }
    # 24 "sType_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 23 "sType_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 0, 47);
    }
    # 25 "sType_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 24 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 48);
    }
    # 26 "sType_finalize"
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        # 25 "sType_finalize"
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 49):(void*)0);
    }
    # 27 "sType_finalize"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 26 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 50);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 22);
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
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 21);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 36);
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
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 35):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 39);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 46);
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
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 45));
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 58);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 59);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1513, 60, "struct list$1sType$ph*"), "./neo-c.h", 1513, 64)), "./neo-c.h", 1513, 65);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1518, 80));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1521, 81));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 82);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 83);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 84);
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
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 61);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 62);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 63);
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
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 66);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1534, 67, "struct list_item$1sType$ph*"))), "./neo-c.h", 1534, 68);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj4=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1538, 70);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 69);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1544, 71, "struct list_item$1sType$ph*"))), "./neo-c.h", 1544, 72);
        # 1546 "./neo-c.h"
        litem_0->prev=self->head;
        # 1547 "./neo-c.h"
        litem_0->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj5=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1548, 74);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 73);
        # 1550 "./neo-c.h"
        self->tail=litem_0;
        # 1551 "./neo-c.h"
        self->head->next=litem_0;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1554, 75, "struct list_item$1sType$ph*"))), "./neo-c.h", 1554, 76);
        # 1556 "./neo-c.h"
        litem_1->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_1->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj6=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1558, 78);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 77);
        # 1560 "./neo-c.h"
        self->tail->next=litem_1;
        # 1561 "./neo-c.h"
        self->tail=litem_1;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 79);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 85);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 90);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 91):(void*)0);
        return __result_obj__0;
    }
    # 5 "sNode_clone"
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 92, "struct sNode*"), "sNode_clone", 5, 93);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 94);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 95):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 96):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 125);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 126);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1513, 127, "struct list$1sNode$ph*"), "./neo-c.h", 1513, 131)), "./neo-c.h", 1513, 132);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1518, 147));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1521, 148));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 149);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 150);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 151);
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
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 128);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 129);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 130);
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
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1531, 133):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1534, 134, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1534, 135);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj19=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1538, 137);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1538, 136) :0);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1544, 138, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1544, 139);
        # 1546 "./neo-c.h"
        litem_2->prev=self->head;
        # 1547 "./neo-c.h"
        litem_2->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj20=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1548, 141);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1548, 140) :0);
        # 1550 "./neo-c.h"
        self->tail=litem_2;
        # 1551 "./neo-c.h"
        self->head->next=litem_2;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1554, 142, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1554, 143);
        # 1556 "./neo-c.h"
        litem_3->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_3->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj21=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1558, 145);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1558, 144) :0);
        # 1560 "./neo-c.h"
        self->tail->next=litem_3;
        # 1561 "./neo-c.h"
        self->tail=litem_3;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1566, 146):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 152);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 157);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 158);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1513, 159, "struct list$1int$*"), "./neo-c.h", 1513, 163)), "./neo-c.h", 1513, 164);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1527, 171);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 172);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 173);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1485, 160);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 161);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 162);
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1534, 165, "struct list_item$1int$*"))), "./neo-c.h", 1534, 166);
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
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1544, 167, "struct list_item$1int$*"))), "./neo-c.h", 1544, 168);
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
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1554, 169, "struct list_item$1int$*"))), "./neo-c.h", 1554, 170);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 174);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 186);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 187);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1513, 188, "struct list$1char$ph*"), "./neo-c.h", 1513, 192)), "./neo-c.h", 1513, 193);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1518, 208, "char* "), "./neo-c.h", 1518, 209));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1521, 210, "char* "), "./neo-c.h", 1521, 211));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 212);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 213);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 214);
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 189);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 190);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 191);
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
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1531, 194));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1534, 195, "struct list_item$1char$ph*"))), "./neo-c.h", 1534, 196);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj29=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1538, 198);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1538, 197);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1544, 199, "struct list_item$1char$ph*"))), "./neo-c.h", 1544, 200);
        # 1546 "./neo-c.h"
        litem_6->prev=self->head;
        # 1547 "./neo-c.h"
        litem_6->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj30=litem_6->item,
        litem_6->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1548, 202);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1548, 201);
        # 1550 "./neo-c.h"
        self->tail=litem_6;
        # 1551 "./neo-c.h"
        self->head->next=litem_6;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1554, 203, "struct list_item$1char$ph*"))), "./neo-c.h", 1554, 204);
        # 1556 "./neo-c.h"
        litem_7->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_7->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj31=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1558, 206);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1558, 205);
        # 1560 "./neo-c.h"
        self->tail->next=litem_7;
        # 1561 "./neo-c.h"
        self->tail=litem_7;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1566, 207));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 215);
    }
            neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj37  ;
    struct list_item$1CVALUE$ph* litem_8;
    struct CVALUE*  __dec_obj38  ;
    struct list_item$1CVALUE$ph* litem_9;
    struct CVALUE*  __dec_obj39  ;
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 234);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1619, 235, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1619, 236);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj37=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1623, 238);
        come_call_finalizer(CVALUE_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 237);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1629, 239, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1629, 240);
        # 1631 "./neo-c.h"
        litem_8->prev=self->head;
        # 1632 "./neo-c.h"
        litem_8->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj38=litem_8->item,
        litem_8->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1633, 242);
        come_call_finalizer(CVALUE_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 241);
        # 1635 "./neo-c.h"
        self->tail=litem_8;
        # 1636 "./neo-c.h"
        self->head->next=litem_8;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1639, 243, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1639, 244);
        # 1641 "./neo-c.h"
        litem_9->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_9->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj39=litem_9->item,
        litem_9->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1643, 246);
        come_call_finalizer(CVALUE_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 245);
        # 1645 "./neo-c.h"
        self->tail->next=litem_9;
        # 1646 "./neo-c.h"
        self->tail=litem_9;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 247);
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
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 229));
    }
    # 4 "CVALUE_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 3 "CVALUE_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 230);
    }
    # 5 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        # 4 "CVALUE_finalize"
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 231));
    }
    # 6 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        # 5 "CVALUE_finalize"
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 232));
    }
    # 7 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        # 6 "CVALUE_finalize"
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 233));
    }
            neo_current_frame = fr.prev;
}

struct sNode* parse_function(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_function"; neo_current_frame = &fr;
    char* header_head;
    char* source_head;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phchar$ph* multiple_assign_var1
;    char*  asm_fun  =0;
    char*  fun_attribute_prefix  =0;
    char*  fun_attribute  ;
    char*  fun_attribute_middle  ;
    struct sType*  result_type  ;
    char*  var_name  ;
    _Bool constructor_;
    struct sType*  __dec_obj40  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var2
;    struct sType*  result_type2  =0;
    char*  var_name2  =0;
    _Bool err=0;
    struct sType*  __dec_obj41  ;
    char*  __dec_obj42  ;
    char*  __dec_obj43  ;
    char*  __dec_obj44  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    char*  __dec_obj45  ;
    char*  __dec_obj46  ;
    char*  __dec_obj47  ;
    _Bool method_definition;
    char* p;
    int sline;
    _Bool flag;
    char*  fun_name  ;
    char* base_fun_name;
    char* __dec_obj48;
    char*  __dec_obj49  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var3
;    struct sType*  obj_type  =0;
    char*  name  =0;
    _Bool err_10=0;
    char* __dec_obj50;
    char*  __dec_obj51  ;
    char* __dec_obj52;
    char*  __dec_obj53  ;
    char* __dec_obj54;
    char*  __dec_obj55  ;
    char* __dec_obj56;
    char*  __dec_obj57  ;
    char*  __dec_obj58  ;
    char* __dec_obj59;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var4
;    struct list$1sType$ph* param_types=0;
    struct list$1char$ph* param_names=0;
    struct list$1char$ph* param_default_parametors=0;
    _Bool var_args=0;
    char* header_tail;
    _Bool const_fun;
    int version;
    int n;
    struct tuple2$2char$phchar$ph* multiple_assign_var5
;    char*  asm_fun2  =0;
    char*  fun_attribute2  =0;
    char*  __dec_obj60  ;
    char*  __dec_obj61  ;
    _Bool in_top_level;
    struct sBlock*  block  ;
    char*  fun_name_11  ;
    struct sFun* fun;
    char*  __dec_obj62  ;
    struct sFun*  fun2  ;
    struct sNode* _inf_value1;
    struct sLambdaNode* _inf_obj_value1;
    struct sNode* __result_obj__0;
    char*  none_generics_name  ;
    char*  generics_sname  ;
    int generics_sline;
    char*  block_21  ;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    struct sGenericsFun* fun_22;
    char*  fun_name3  ;
    char*  none_generics_name_24  ;
    char*  generics_sname_25  ;
    int generics_sline_26;
    char*  block_27  ;
    struct sGenericsFun* fun_28;
    char*  fun_name3_29  ;
    char*  generics_sname_30  ;
    int generics_sline_31;
    char*  block_32  ;
    struct sGenericsFun* fun_33;
    char* source_tail;
    char*  new_fun_name  ;
    char*  __dec_obj67  ;
    _Bool static_fun;
    _Bool inline_fun;
    _Bool uniq_fun;
    char*  generics_sname_34  ;
    int generics_sline_35;
    char*  block_36  ;
    char* p_37;
    int sline_38;
    int sline_real;
    int sline_top;
    char*  sname  ;
    char* head;
    struct buffer*  source  ;
    struct buffer*  __dec_obj68  ;
    char*  __dec_obj69  ;
    struct buffer*  __dec_obj70  ;
    char*  __dec_obj71  ;
    struct sFun* fun_39;
    char*  __dec_obj72  ;
    struct sNode* _inf_value2;
    struct sFunNode* _inf_obj_value2;
    struct sBlock*  block_47  ;
    struct sFun* fun_48;
    char*  __dec_obj105  ;
    struct sNode* _inf_value3;
    struct sFunNode* _inf_obj_value3;
    char*  new_fun_name_49  ;
    char*  __dec_obj106  ;
    struct sFun* fun_50;
    char*  __dec_obj107  ;
    struct sNode* _inf_value4;
    struct sFunNode* _inf_obj_value4;
    struct tuple2$2char$phchar$ph* multiple_assign_var6
;    char*  asm_fun_51  =0;
    char*  fun_attribute2_52  =0;
    char*  __dec_obj108  ;
    char*  __dec_obj109  ;
    struct sFun* fun_53;
    char*  __dec_obj110  ;
    struct sNode* _inf_value5;
    struct sFunNode* _inf_obj_value5;
    memset(&fun_name, 0, sizeof(fun_name));
    # 69 "48function8.nc"
    header_head=info->p;
    # 70 "48function8.nc"
    source_head=info->p;
    # 72 "48function8.nc"
    multiple_assign_var1=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_function_attribute(info)));
    asm_fun=(char* )come_increment_ref_count(multiple_assign_var1->v1, "48function8.nc", 72, 250);
    fun_attribute_prefix=(char* )come_increment_ref_count(multiple_assign_var1->v2, "48function8.nc", 72, 251);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 72, 254);
    # 73 "48function8.nc"
    __right_value0 = (void*)0;
    fun_attribute=(char*)come_increment_ref_count(xsprintf(""), "48function8.nc", 73, 255);
    # 74 "48function8.nc"
    __right_value0 = (void*)0;
    fun_attribute_middle=(char*)come_increment_ref_count(xsprintf(""), "48function8.nc", 74, 256);
    # 77 "48function8.nc"
    result_type=((void*)0);
    # 78 "48function8.nc"
    var_name=((void*)0);
    # 79 "48function8.nc"
    constructor_=(_Bool)0;
    # 116 "48function8.nc"
    if(info->in_class&&(info->end-info->p)>=strlen("new(")&&memcmp(info->p,"new(",4)==0) {
        # 82 "48function8.nc"
        __right_value0 = (void*)0;
        ((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "48function8.nc", 82, 257));
        # 83 "48function8.nc"
        __right_value0 = (void*)0;
        __dec_obj40=result_type,
        result_type=(struct sType* )come_increment_ref_count(sType_clone(info->class_type), "48function8.nc", 83, 259);
        come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc", 83, 258);
        # 84 "48function8.nc"
        result_type->mHeap=(_Bool)1;
        # 85 "48function8.nc"
        constructor_=(_Bool)1;
        # 87 "48function8.nc"
        info->constructor_=(_Bool)1;
    }
    else {
        # 90 "48function8.nc"
        __right_value0 = (void*)0;
        multiple_assign_var2=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2=(struct sType* )come_increment_ref_count(multiple_assign_var2->v1, "48function8.nc", 90, 260);
        var_name2=(char* )come_increment_ref_count(multiple_assign_var2->v2, "48function8.nc", 90, 261);
        err=multiple_assign_var2->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 90, 264);
        # 92 "48function8.nc"
        __dec_obj41=result_type,
        result_type=(struct sType* )come_increment_ref_count(result_type2, "48function8.nc", 92, 266);
        come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc", 92, 265);
        # 93 "48function8.nc"
        __dec_obj42=var_name,
        var_name=(char* )come_increment_ref_count(var_name2, "48function8.nc", 93, 268);
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 93, 267);
        # 99 "48function8.nc"
        if(result_type->mAttribute!=((void*)0)&&string_operator_not_equals(result_type->mAttribute,"")) {
            # 96 "48function8.nc"
            __dec_obj43=fun_attribute_middle,
            fun_attribute_middle=(char* )come_increment_ref_count(result_type->mAttribute, "48function8.nc", 96, 270);
            __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 96, 269);
            # 97 "48function8.nc"
            __right_value0 = (void*)0;
            __dec_obj44=result_type->mAttribute,
            result_type->mAttribute=(char*)come_increment_ref_count(xsprintf(""), "48function8.nc", 97, 272);
            __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 97, 271);
        }
        # 109 "48function8.nc"
        if(result_type->mVarAttribute!=((void*)0)&&string_operator_not_equals(result_type->mVarAttribute,"")) {
            # 106 "48function8.nc"
            if(string_operator_not_equals(fun_attribute_middle,"")) {
                # 101 "48function8.nc"
                __right_value0 = (void*)0;
                __dec_obj45=fun_attribute_middle,
                fun_attribute_middle=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(fun_attribute_middle," "))),result_type->mVarAttribute), "48function8.nc", 101, 274);
                __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 101, 273);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "48function8.nc", 101, 275));
            }
            else {
                # 104 "48function8.nc"
                __dec_obj46=fun_attribute_middle,
                fun_attribute_middle=(char* )come_increment_ref_count(result_type->mVarAttribute, "48function8.nc", 104, 277);
                __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 104, 276);
            }
            # 106 "48function8.nc"
            __right_value0 = (void*)0;
            __dec_obj47=result_type->mVarAttribute,
            result_type->mVarAttribute=(char*)come_increment_ref_count(xsprintf(""), "48function8.nc", 106, 279);
            __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 106, 278);
        }
        # 113 "48function8.nc"
        if(!err) {
            # 110 "48function8.nc"
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            # 111 "48function8.nc"
            exit(2);
        }
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 116, 280);
        (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 116, 281));
    }
    # 116 "48function8.nc"
    method_definition=(_Bool)0;
    # 147 "48function8.nc"
    {
        # 118 "48function8.nc"
        p=info->p;
        # 119 "48function8.nc"
        sline=info->sline;
        # 121 "48function8.nc"
        flag=(_Bool)0;
        # 127 "48function8.nc"
        while((((((unsigned char)(*info->p))>=97&&((unsigned char)(*info->p))<=122)||(((unsigned char)(*info->p))>=65&&((unsigned char)(*info->p))<=90))||(((unsigned char)(*info->p))>=48&&((unsigned char)(*info->p))<=57))||*info->p==95) {
            # 123 "48function8.nc"
            flag=(_Bool)1;
            # 124 "48function8.nc"
            __right_value0 = (void*)0;
            ((char* )(__right_value0=parse_word((_Bool)0,info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "48function8.nc", 124, 282));
        }
        # 131 "48function8.nc"
        while(*info->p==42) {
            # 128 "48function8.nc"
            info->p++;
            # 129 "48function8.nc"
            skip_spaces_and_lf(info);
        }
        # 135 "48function8.nc"
        while(*info->p==91&&*(info->p+1)==93) {
            # 132 "48function8.nc"
            info->p+=2;
            # 133 "48function8.nc"
            skip_spaces_and_lf(info);
        }
        # 139 "48function8.nc"
        while(*info->p==37) {
            # 136 "48function8.nc"
            info->p++;
            # 137 "48function8.nc"
            skip_spaces_and_lf(info);
        }
        # 143 "48function8.nc"
        if(flag&&*info->p==58&&*(info->p+1)==58) {
            # 140 "48function8.nc"
            method_definition=(_Bool)1;
        }
        # 143 "48function8.nc"
        info->p=p;
        # 144 "48function8.nc"
        info->sline=sline;
    }
    # 147 "48function8.nc"
    # 148 "48function8.nc"
    base_fun_name=((void*)0);
    # 189 "48function8.nc"
    if(constructor_) {
        # 150 "48function8.nc"
        __right_value0 = (void*)0;
        __dec_obj48=base_fun_name,
        base_fun_name=(char* )come_increment_ref_count(__builtin_string("initialize","48function8.nc",150), "48function8.nc", 150, 284);
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 150, 283);
        # 151 "48function8.nc"
        __right_value0 = (void*)0;
        __dec_obj49=fun_name,
        fun_name=(char* )come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name,info,(_Bool)1), "48function8.nc", 151, 286);
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 151, 285);
    }
    else if(method_definition) {
        # 154 "48function8.nc"
        __right_value0 = (void*)0;
        multiple_assign_var3=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type=(struct sType* )come_increment_ref_count(multiple_assign_var3->v1, "48function8.nc", 154, 287);
        name=(char* )come_increment_ref_count(multiple_assign_var3->v2, "48function8.nc", 154, 288);
        err_10=multiple_assign_var3->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 154, 289);
        # 161 "48function8.nc"
        if(!err_10) {
            # 157 "48function8.nc"
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            # 158 "48function8.nc"
            exit(2);
        }
        # 161 "48function8.nc"
        expected_next_character(58,info);
        # 162 "48function8.nc"
        expected_next_character(58,info);
        # 164 "48function8.nc"
        __right_value0 = (void*)0;
        __dec_obj50=base_fun_name,
        base_fun_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "48function8.nc", 164, 291);
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 164, 290);
        # 165 "48function8.nc"
        __right_value0 = (void*)0;
        __dec_obj51=fun_name,
        fun_name=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,base_fun_name,info,(_Bool)1), "48function8.nc", 165, 293);
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 165, 292);
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 189, 294);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 189, 295));
    }
    else if(info->impl_type) {
        # 178 "48function8.nc"
        if(result_type->mClass->mIter) {
            # 169 "48function8.nc"
            __right_value0 = (void*)0;
            __dec_obj52=base_fun_name,
            base_fun_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "48function8.nc", 169, 297);
            __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 169, 296);
            # 171 "48function8.nc"
            __right_value0 = (void*)0;
            __dec_obj53=fun_name,
            fun_name=(char* )come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name,info,(_Bool)1), "48function8.nc", 171, 299);
            __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 171, 298);
        }
        else {
            # 174 "48function8.nc"
            __right_value0 = (void*)0;
            __dec_obj54=base_fun_name,
            base_fun_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "48function8.nc", 174, 301);
            __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 174, 300);
            # 176 "48function8.nc"
            __right_value0 = (void*)0;
            __dec_obj55=fun_name,
            fun_name=(char* )come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name,info,(_Bool)1), "48function8.nc", 176, 303);
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 176, 302);
        }
    }
    else if(info->class_type) {
        # 180 "48function8.nc"
        __right_value0 = (void*)0;
        __dec_obj56=base_fun_name,
        base_fun_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "48function8.nc", 180, 305);
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 180, 304);
        # 182 "48function8.nc"
        __right_value0 = (void*)0;
        __dec_obj57=fun_name,
        fun_name=(char* )come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name,info,(_Bool)1), "48function8.nc", 182, 307);
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 182, 306);
    }
    else {
        # 185 "48function8.nc"
        __right_value0 = (void*)0;
        __dec_obj58=fun_name,
        fun_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "48function8.nc", 185, 309);
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 185, 308);
        # 186 "48function8.nc"
        __right_value0 = (void*)0;
        __dec_obj59=base_fun_name,
        base_fun_name=(char* )come_increment_ref_count(__builtin_string(fun_name,"48function8.nc",186), "48function8.nc", 186, 311);
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 186, 310);
    }
    # 193 "48function8.nc"
    if(info->in_class&&charp_operator_equals(base_fun_name,"initialize")) {
        # 190 "48function8.nc"
        info->in_class=(_Bool)0;
    }
    # 193 "48function8.nc"
    __right_value0 = (void*)0;
    multiple_assign_var4=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,constructor_)));
    param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var4->v1, "48function8.nc", 193, 312);
    param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var4->v2, "48function8.nc", 193, 313);
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var4->v3, "48function8.nc", 193, 314);
    var_args=multiple_assign_var4->v4;
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 193, 318);
    # 194 "48function8.nc"
    header_tail=info->p;
    # 199 "48function8.nc"
    if(info->in_class&&charp_operator_equals(base_fun_name,"initialize")) {
        # 196 "48function8.nc"
        info->in_class=(_Bool)1;
    }
    # 199 "48function8.nc"
    const_fun=(_Bool)0;
    # 201 "48function8.nc"
    version=0;
    # 215 "48function8.nc"
    if(parsecmp_forward("version",info)) {
        # 203 "48function8.nc"
        skip_spaces_and_lf(info);
        # 205 "48function8.nc"
        n=0;
        # 210 "48function8.nc"
        while((((unsigned char)(*info->p))>=48&&((unsigned char)(*info->p))<=57)) {
            # 207 "48function8.nc"
            n=n*10+(*info->p-48);
            # 208 "48function8.nc"
            info->p++;
        }
        # 210 "48function8.nc"
        skip_spaces_and_lf(info);
        # 212 "48function8.nc"
        version=n;
    }
    # 215 "48function8.nc"
    __right_value0 = (void*)0;
    multiple_assign_var5=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_function_attribute(info)));
    asm_fun2=(char* )come_increment_ref_count(multiple_assign_var5->v1, "48function8.nc", 215, 319);
    fun_attribute2=(char* )come_increment_ref_count(multiple_assign_var5->v2, "48function8.nc", 215, 320);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 215, 321);
    # 235 "48function8.nc"
    if(string_operator_not_equals(fun_attribute2,"")) {
        # 224 "48function8.nc"
        if(string_operator_not_equals(fun_attribute,"")) {
            # 219 "48function8.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj60=fun_attribute,
            fun_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(fun_attribute," "))),fun_attribute2), "48function8.nc", 219, 323);
            __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 219, 322);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "48function8.nc", 219, 324));
        }
        else {
            # 222 "48function8.nc"
            __dec_obj61=fun_attribute,
            fun_attribute=(char* )come_increment_ref_count(fun_attribute2, "48function8.nc", 222, 326);
            __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 222, 325);
        }
    }
    # 235 "48function8.nc"
    in_top_level=info->in_top_level;
    # 236 "48function8.nc"
    info->in_top_level=(_Bool)0;
    # 501 "48function8.nc"
    if(charp_operator_equals(base_fun_name,"lambda")) {
        # 239 "48function8.nc"
        __right_value0 = (void*)0;
        block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)1), "48function8.nc", 239, 327);
        # 241 "48function8.nc"
        static int lambda_num=0;
        # 242 "48function8.nc"
        lambda_num++;
        # 244 "48function8.nc"
        __right_value0 = (void*)0;
        fun_name_11=(char* )come_increment_ref_count(xsprintf("lambda%d",lambda_num), "48function8.nc", 244, 328);
        # 246 "48function8.nc"
        result_type->mInline=(_Bool)0;
        # 247 "48function8.nc"
        result_type->mStatic=(_Bool)0;
        # 248 "48function8.nc"
        result_type->mUniq=(_Bool)0;
        # 253 "48function8.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "48function8.nc", 250, 329, "struct sFun* "), "48function8.nc", 253, 330),(char* )come_increment_ref_count(__builtin_string(fun_name_11,"48function8.nc",250), "48function8.nc", 253, 331),(struct sType* )come_increment_ref_count(result_type, "48function8.nc", 253, 332),(struct list$1sType$ph*)come_increment_ref_count(param_types, "48function8.nc", 253, 333),(struct list$1char$ph*)come_increment_ref_count(param_names, "48function8.nc", 253, 334),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "48function8.nc", 253, 335),(_Bool)0,var_args,(struct sBlock* )come_increment_ref_count(block, "48function8.nc", 253, 336),(_Bool)1,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "48function8.nc", 253, 337),(char*)come_increment_ref_count(xsprintf(""), "48function8.nc", 253, 338),const_fun,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "48function8.nc", 253, 339)), "48function8.nc", 253, 340);
        # 254 "48function8.nc"
        __dec_obj62=fun->mMiddleAttribute,
        fun->mMiddleAttribute=(char* )come_increment_ref_count(fun_attribute_middle, "48function8.nc", 254, 342);
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 254, 341);
        # 256 "48function8.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(fun_name_11,"48function8.nc",256)))), "48function8.nc", 256, 399);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "48function8.nc", 256, 400));
        # 257 "48function8.nc"
        __right_value0 = (void*)0;
        map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(fun_name_11,"48function8.nc",257), "48function8.nc", 257, 440),(struct sFun*)come_increment_ref_count(fun, "48function8.nc", 257, 441),(_Bool)0);
        # 259 "48function8.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "48function8.nc", 259, 444, "struct sNode");
        _inf_obj_value1=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value1=sLambdaNode_initialize((struct sLambdaNode* )come_increment_ref_count((struct sLambdaNode *)come_calloc(1, sizeof(struct sLambdaNode )*(1), "48function8.nc", 259, 442, "struct sLambdaNode* "), "48function8.nc", 259, 443),fun,info))), "48function8.nc", 259, 445);
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sLambdaNode_finalize;
        _inf_value1->clone=(void*)sLambdaNode_clone;
        _inf_value1->compile=(void*)sLambdaNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sLambdaNode_kind;
        _inf_value1->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "48function8.nc", 259, 452);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 259, 453);
        (fun_name_11 = come_decrement_ref_count(fun_name_11, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 259, 454));
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 259, 455);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 259, 456);
        (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 259, 457));
        (fun_attribute_prefix = come_decrement_ref_count(fun_attribute_prefix, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 259, 458));
        (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 259, 459));
        (fun_attribute_middle = come_decrement_ref_count(fun_attribute_middle, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 259, 460));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 259, 461);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 259, 462));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 259, 463));
        (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 259, 464));
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 259, 465);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 259, 466);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 259, 467);
        (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 259, 468));
        (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 259, 469));
        come_call_finalizer(sLambdaNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 259, 470);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "48function8.nc", 259, 471):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "48function8.nc", 259, 472):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 501, 473);
        (fun_name_11 = come_decrement_ref_count(fun_name_11, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 501, 474));
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 501, 475);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 501, 476);
    }
    else if(info->impl_type&&(list$1char$ph_length(info->generics_type_names)>0||result_type->mClass->mIter)) {
        # 294 "48function8.nc"
        if(result_type->mClass->mIter) {
            # 263 "48function8.nc"
            __right_value0 = (void*)0;
            none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName), "48function8.nc", 263, 477);
            # 265 "48function8.nc"
            __right_value0 = (void*)0;
            generics_sname=(char* )come_increment_ref_count(__builtin_string(info->sname,"48function8.nc",265), "48function8.nc", 265, 478);
            # 266 "48function8.nc"
            generics_sline=info->sline;
            # 268 "48function8.nc"
            __right_value0 = (void*)0;
            block_21=(char* )come_increment_ref_count(skip_block(info,(_Bool)0), "48function8.nc", 268, 479);
            # 270 "48function8.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            fun_22=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun* )come_increment_ref_count((struct sGenericsFun *)come_calloc(1, sizeof(struct sGenericsFun )*(1), "48function8.nc", 270, 480, "struct sGenericsFun* "), "48function8.nc", 270, 481),(struct sType* )come_increment_ref_count(info->impl_type, "48function8.nc", 270, 482),((struct list$1char$ph*)(__right_value1=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value2=list$1char$ph$p_clone(info->method_generics_type_names))),(char* )come_increment_ref_count(__builtin_string(fun_name,"48function8.nc",270), "48function8.nc", 270, 483),(struct sType* )come_increment_ref_count(result_type, "48function8.nc", 270, 484),(struct list$1sType$ph*)come_increment_ref_count(param_types, "48function8.nc", 270, 485),(struct list$1char$ph*)come_increment_ref_count(param_names, "48function8.nc", 270, 486),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "48function8.nc", 270, 487),var_args,(char* )come_increment_ref_count(block_21, "48function8.nc", 270, 488),info,(char* )come_increment_ref_count(__builtin_string(generics_sname,"48function8.nc",270), "48function8.nc", 270, 489),generics_sline,const_fun), "48function8.nc", 270, 490);
            come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 270, 491);
            come_call_finalizer(list$1char$ph$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 270, 492);
            # 272 "48function8.nc"
            __right_value0 = (void*)0;
            fun_name3=(char* )come_increment_ref_count(xsprintf("%s_iter_%s",none_generics_name,base_fun_name), "48function8.nc", 272, 493);
            # 274 "48function8.nc"
            __right_value0 = (void*)0;
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char* )come_increment_ref_count(__builtin_string(fun_name3,"48function8.nc",274), "48function8.nc", 274, 525),(struct sGenericsFun*)come_increment_ref_count(fun_22, "48function8.nc", 274, 526),(_Bool)0);
            # 276 "48function8.nc"
                        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "48function8.nc", 276, 527);
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 276, 528));
            (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 276, 529));
            (block_21 = come_decrement_ref_count(block_21, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 276, 530));
            come_call_finalizer(sGenericsFun_finalize, fun_22, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 276, 531);
            (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 276, 532));
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 276, 533));
            (fun_attribute_prefix = come_decrement_ref_count(fun_attribute_prefix, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 276, 534));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 276, 535));
            (fun_attribute_middle = come_decrement_ref_count(fun_attribute_middle, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 276, 536));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 276, 537);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 276, 538));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 276, 539));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 276, 540));
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 276, 541);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 276, 542);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 276, 543);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 276, 544));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 276, 545));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "48function8.nc", 276, 546):(void*)0);
            return __result_obj__0;
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 294, 547));
            (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 294, 548));
            (block_21 = come_decrement_ref_count(block_21, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 294, 549));
            come_call_finalizer(sGenericsFun_finalize, fun_22, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 294, 550);
            (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 294, 551));
        }
        else {
            # 279 "48function8.nc"
            __right_value0 = (void*)0;
            none_generics_name_24=(char* )come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName), "48function8.nc", 279, 552);
            # 281 "48function8.nc"
            __right_value0 = (void*)0;
            generics_sname_25=(char* )come_increment_ref_count(__builtin_string(info->sname,"48function8.nc",281), "48function8.nc", 281, 553);
            # 282 "48function8.nc"
            generics_sline_26=info->sline;
            # 284 "48function8.nc"
            __right_value0 = (void*)0;
            block_27=(char* )come_increment_ref_count(skip_block(info,(_Bool)0), "48function8.nc", 284, 554);
            # 286 "48function8.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __right_value3 = (void*)0;
            __right_value4 = (void*)0;
            __right_value5 = (void*)0;
            fun_28=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun* )come_increment_ref_count((struct sGenericsFun *)come_calloc(1, sizeof(struct sGenericsFun )*(1), "48function8.nc", 286, 555, "struct sGenericsFun* "), "48function8.nc", 286, 556),(struct sType* )come_increment_ref_count(info->impl_type, "48function8.nc", 286, 557),((struct list$1char$ph*)(__right_value1=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value2=list$1char$ph$p_clone(info->method_generics_type_names))),(char* )come_increment_ref_count(__builtin_string(fun_name,"48function8.nc",286), "48function8.nc", 286, 558),(struct sType* )come_increment_ref_count(result_type, "48function8.nc", 286, 559),(struct list$1sType$ph*)come_increment_ref_count(param_types, "48function8.nc", 286, 560),(struct list$1char$ph*)come_increment_ref_count(param_names, "48function8.nc", 286, 561),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "48function8.nc", 286, 562),var_args,(char* )come_increment_ref_count(block_27, "48function8.nc", 286, 563),info,(char* )come_increment_ref_count(__builtin_string(generics_sname_25,"48function8.nc",286), "48function8.nc", 286, 564),generics_sline_26,const_fun), "48function8.nc", 286, 565);
            come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 286, 566);
            come_call_finalizer(list$1char$ph$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 286, 567);
            # 288 "48function8.nc"
            __right_value0 = (void*)0;
            fun_name3_29=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name_24,base_fun_name), "48function8.nc", 288, 568);
            # 290 "48function8.nc"
            __right_value0 = (void*)0;
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char* )come_increment_ref_count(__builtin_string(fun_name3_29,"48function8.nc",290), "48function8.nc", 290, 569),(struct sGenericsFun*)come_increment_ref_count(fun_28, "48function8.nc", 290, 570),(_Bool)0);
            # 292 "48function8.nc"
                        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "48function8.nc", 292, 571);
            (none_generics_name_24 = come_decrement_ref_count(none_generics_name_24, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 292, 572));
            (generics_sname_25 = come_decrement_ref_count(generics_sname_25, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 292, 573));
            (block_27 = come_decrement_ref_count(block_27, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 292, 574));
            come_call_finalizer(sGenericsFun_finalize, fun_28, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 292, 575);
            (fun_name3_29 = come_decrement_ref_count(fun_name3_29, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 292, 576));
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 292, 577));
            (fun_attribute_prefix = come_decrement_ref_count(fun_attribute_prefix, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 292, 578));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 292, 579));
            (fun_attribute_middle = come_decrement_ref_count(fun_attribute_middle, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 292, 580));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 292, 581);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 292, 582));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 292, 583));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 292, 584));
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 292, 585);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 292, 586);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 292, 587);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 292, 588));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 292, 589));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "48function8.nc", 292, 590):(void*)0);
            return __result_obj__0;
            (none_generics_name_24 = come_decrement_ref_count(none_generics_name_24, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 294, 591));
            (generics_sname_25 = come_decrement_ref_count(generics_sname_25, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 294, 592));
            (block_27 = come_decrement_ref_count(block_27, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 294, 593));
            come_call_finalizer(sGenericsFun_finalize, fun_28, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 294, 594);
            (fun_name3_29 = come_decrement_ref_count(fun_name3_29, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 294, 595));
        }
    }
    else if(list$1char$ph_length(info->method_generics_type_names)>0) {
        # 296 "48function8.nc"
        __right_value0 = (void*)0;
        generics_sname_30=(char* )come_increment_ref_count(__builtin_string(info->sname,"48function8.nc",296), "48function8.nc", 296, 596);
        # 297 "48function8.nc"
        generics_sline_31=info->sline;
        # 299 "48function8.nc"
        __right_value0 = (void*)0;
        block_32=(char* )come_increment_ref_count(skip_block(info,(_Bool)0), "48function8.nc", 299, 597);
        # 301 "48function8.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        __right_value5 = (void*)0;
        fun_33=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun* )come_increment_ref_count((struct sGenericsFun *)come_calloc(1, sizeof(struct sGenericsFun )*(1), "48function8.nc", 301, 598, "struct sGenericsFun* "), "48function8.nc", 301, 599),(struct sType* )come_increment_ref_count(info->impl_type, "48function8.nc", 301, 600),((struct list$1char$ph*)(__right_value1=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value2=list$1char$ph$p_clone(info->method_generics_type_names))),(char* )come_increment_ref_count(__builtin_string(fun_name,"48function8.nc",301), "48function8.nc", 301, 601),(struct sType* )come_increment_ref_count(result_type, "48function8.nc", 301, 602),(struct list$1sType$ph*)come_increment_ref_count(param_types, "48function8.nc", 301, 603),(struct list$1char$ph*)come_increment_ref_count(param_names, "48function8.nc", 301, 604),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "48function8.nc", 301, 605),var_args,(char* )come_increment_ref_count(block_32, "48function8.nc", 301, 606),info,(char* )come_increment_ref_count(__builtin_string(generics_sname_30,"48function8.nc",301), "48function8.nc", 301, 607),generics_sline_31,const_fun), "48function8.nc", 301, 608);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 301, 609);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 301, 610);
        # 310 "48function8.nc"
        if(method_definition) {
            # 304 "48function8.nc"
            __right_value0 = (void*)0;
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"48function8.nc",304), "48function8.nc", 304, 611),(struct sGenericsFun*)come_increment_ref_count(fun_33, "48function8.nc", 304, 612),(_Bool)0);
        }
        else {
            # 307 "48function8.nc"
            __right_value0 = (void*)0;
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char* )come_increment_ref_count(__builtin_string(base_fun_name,"48function8.nc",307), "48function8.nc", 307, 613),(struct sGenericsFun*)come_increment_ref_count(fun_33, "48function8.nc", 307, 614),(_Bool)0);
        }
        # 310 "48function8.nc"
                __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "48function8.nc", 310, 615);
        (generics_sname_30 = come_decrement_ref_count(generics_sname_30, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 310, 616));
        (block_32 = come_decrement_ref_count(block_32, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 310, 617));
        come_call_finalizer(sGenericsFun_finalize, fun_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 310, 618);
        (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 310, 619));
        (fun_attribute_prefix = come_decrement_ref_count(fun_attribute_prefix, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 310, 620));
        (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 310, 621));
        (fun_attribute_middle = come_decrement_ref_count(fun_attribute_middle, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 310, 622));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 310, 623);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 310, 624));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 310, 625));
        (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 310, 626));
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 310, 627);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 310, 628);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 310, 629);
        (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 310, 630));
        (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 310, 631));
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "48function8.nc", 310, 632):(void*)0);
        return __result_obj__0;
        (generics_sname_30 = come_decrement_ref_count(generics_sname_30, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 501, 633));
        (block_32 = come_decrement_ref_count(block_32, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 501, 634));
        come_call_finalizer(sGenericsFun_finalize, fun_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 501, 635);
    }
    else if(*info->p==123) {
        # 313 "48function8.nc"
        source_tail=info->p-1;
        # 320 "48function8.nc"
        if(version>0) {
            # 316 "48function8.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",((char* )(__right_value0=__builtin_string(fun_name,"48function8.nc",316))),version), "48function8.nc", 316, 636);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "48function8.nc", 316, 637));
            # 317 "48function8.nc"
            __right_value0 = (void*)0;
            __dec_obj67=fun_name,
            fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name,"48function8.nc",317), "48function8.nc", 317, 639);
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 317, 638);
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 320, 640));
        }
        # 320 "48function8.nc"
        static_fun=(_Bool)0;
        # 327 "48function8.nc"
        if(result_type->mStatic) {
            # 322 "48function8.nc"
            result_type->mStatic=(_Bool)0;
            # 323 "48function8.nc"
            result_type->mUniq=(_Bool)0;
            # 324 "48function8.nc"
            static_fun=(_Bool)1;
        }
        # 327 "48function8.nc"
        inline_fun=(_Bool)0;
        # 334 "48function8.nc"
        if(result_type->mInline) {
            # 329 "48function8.nc"
            result_type->mInline=(_Bool)0;
            # 330 "48function8.nc"
            result_type->mUniq=(_Bool)0;
            # 331 "48function8.nc"
            inline_fun=(_Bool)1;
        }
        # 334 "48function8.nc"
        uniq_fun=(_Bool)0;
        # 341 "48function8.nc"
        if(result_type->mUniq) {
            # 336 "48function8.nc"
            result_type->mUniq=(_Bool)0;
            # 337 "48function8.nc"
            result_type->mInline=(_Bool)0;
            # 338 "48function8.nc"
            result_type->mStatic=(_Bool)0;
            # 339 "48function8.nc"
            uniq_fun=(_Bool)1;
        }
        # 346 "48function8.nc"
        if(result_type->mUniq) {
            # 342 "48function8.nc"
            result_type->mUniq=(_Bool)0;
            # 343 "48function8.nc"
            result_type->mInline=(_Bool)0;
            # 344 "48function8.nc"
            result_type->mStatic=(_Bool)0;
        }
        # 350 "48function8.nc"
        if(info->defining_class&&info->defining_class->mUniq) {
            # 347 "48function8.nc"
            uniq_fun=(_Bool)1;
        }
        # 433 "48function8.nc"
        if(uniq_fun) {
            # 351 "48function8.nc"
            __right_value0 = (void*)0;
            generics_sname_34=(char* )come_increment_ref_count(__builtin_string(info->sname,"48function8.nc",351), "48function8.nc", 351, 641);
            # 352 "48function8.nc"
            generics_sline_35=info->sline;
            # 354 "48function8.nc"
            __right_value0 = (void*)0;
            block_36=(char* )come_increment_ref_count(skip_block(info,constructor_), "48function8.nc", 354, 642);
            # 392 "48function8.nc"
            if(constructor_&&info->defining_class&&info->defining_class->mUniq) {
                # 357 "48function8.nc"
                p_37=info->p;
                # 358 "48function8.nc"
                sline_38=info->sline;
                # 359 "48function8.nc"
                sline_real=info->sline_real;
                # 360 "48function8.nc"
                sline_top=info->sline_top;
                # 361 "48function8.nc"
                __right_value0 = (void*)0;
                sname=(char* )come_increment_ref_count(__builtin_string(info->sname,"48function8.nc",361), "48function8.nc", 361, 643);
                # 362 "48function8.nc"
                head=info->head;
                # 363 "48function8.nc"
                source=(struct buffer* )come_increment_ref_count(info->source, "48function8.nc", 363, 644);
                # 365 "48function8.nc"
                __right_value0 = (void*)0;
                __dec_obj68=info->source,
                info->source=(struct buffer* )come_increment_ref_count(charp_to_buffer(block_36), "48function8.nc", 365, 646);
                come_call_finalizer(buffer_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc", 365, 645);
                # 369 "48function8.nc"
                if(info->p==((void*)0)) {
                    # 367 "48function8.nc"
                    info->p=info->source->buf;
                }
                # 369 "48function8.nc"
                info->p=info->source->buf;
                # 370 "48function8.nc"
                info->head=info->source->buf;
                # 372 "48function8.nc"
                info->sline=generics_sline_35;
                # 373 "48function8.nc"
                info->sline_real=generics_sline_35;
                # 374 "48function8.nc"
                info->sline_top=generics_sline_35;
                # 375 "48function8.nc"
                __right_value0 = (void*)0;
                __dec_obj69=info->sname,
                info->sname=(char* )come_increment_ref_count(__builtin_string(generics_sname_34,"48function8.nc",375), "48function8.nc", 375, 648);
                __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 375, 647);
                # 377 "48function8.nc"
                __right_value0 = (void*)0;
                ((struct sBlock* )(__right_value0=parse_block(info,(_Bool)0,(_Bool)1)));
                come_call_finalizer(sBlock_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 377, 649);
                # 379 "48function8.nc"
                info->head=head;
                # 380 "48function8.nc"
                __dec_obj70=info->source,
                info->source=(struct buffer* )come_increment_ref_count(source, "48function8.nc", 380, 651);
                come_call_finalizer(buffer_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc", 380, 650);
                # 384 "48function8.nc"
                if(info->p==((void*)0)) {
                    # 382 "48function8.nc"
                    info->p=info->source->buf;
                }
                # 384 "48function8.nc"
                info->p=info->source->buf;
                # 385 "48function8.nc"
                info->p=p_37;
                # 386 "48function8.nc"
                info->sline=sline_38;
                # 387 "48function8.nc"
                info->sline_real=sline_real;
                # 388 "48function8.nc"
                info->sline_top=sline_top;
                # 389 "48function8.nc"
                __right_value0 = (void*)0;
                __dec_obj71=info->sname,
                info->sname=(char* )come_increment_ref_count(__builtin_string(sname,"48function8.nc",389), "48function8.nc", 389, 653);
                __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 389, 652);
                (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 392, 654));
                come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 392, 655);
            }
            # 398 "48function8.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            fun_39=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "48function8.nc", 392, 656, "struct sFun* "), "48function8.nc", 398, 659),(char* )come_increment_ref_count(__builtin_string(fun_name,"48function8.nc",392), "48function8.nc", 398, 660),(struct sType* )come_increment_ref_count(result_type, "48function8.nc", 398, 661),(struct list$1sType$ph*)come_increment_ref_count(param_types, "48function8.nc", 398, 662),(struct list$1char$ph*)come_increment_ref_count(param_names, "48function8.nc", 398, 663),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "48function8.nc", 398, 664),(_Bool)0,var_args,((void*)0),static_fun,info,inline_fun,uniq_fun,(char* )come_increment_ref_count(fun_attribute_prefix, "48function8.nc", 398, 665),(char* )come_increment_ref_count(fun_attribute, "48function8.nc", 398, 666),const_fun,(char* )come_increment_ref_count(block_36, "48function8.nc", 398, 657),(char* )come_increment_ref_count(generics_sname_34, "48function8.nc", 398, 658),generics_sline_35,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "48function8.nc", 398, 667)), "48function8.nc", 398, 668);
            # 399 "48function8.nc"
            __dec_obj72=fun_39->mMiddleAttribute,
            fun_39->mMiddleAttribute=(char* )come_increment_ref_count(fun_attribute_middle, "48function8.nc", 399, 670);
            __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 399, 669);
            # 410 "48function8.nc"
            if(info->in_class) {
                # 402 "48function8.nc"
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"48function8.nc",402), "48function8.nc", 402, 671),(struct sFun*)come_increment_ref_count(fun_39, "48function8.nc", 402, 672),(_Bool)0);
                # 403 "48function8.nc"
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->uniq_funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"48function8.nc",403), "48function8.nc", 403, 673),(struct sFun*)come_increment_ref_count(fun_39, "48function8.nc", 403, 674),(_Bool)0);
            }
            else {
                # 406 "48function8.nc"
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"48function8.nc",406), "48function8.nc", 406, 675),(struct sFun*)come_increment_ref_count(fun_39, "48function8.nc", 406, 676),(_Bool)0);
                # 407 "48function8.nc"
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->uniq_funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"48function8.nc",407), "48function8.nc", 407, 677),(struct sFun*)come_increment_ref_count(fun_39, "48function8.nc", 407, 678),(_Bool)0);
            }
            # 410 "48function8.nc"
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "48function8.nc", 410, 682, "struct sNode");
            _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "48function8.nc", 410, 679, "struct sFunNode* "), "48function8.nc", 410, 680),(struct sFun*)come_increment_ref_count(fun_39, "48function8.nc", 410, 681),info))), "48function8.nc", 410, 683);
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
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)), "48function8.nc", 410, 897);
            (generics_sname_34 = come_decrement_ref_count(generics_sname_34, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 410, 898));
            (block_36 = come_decrement_ref_count(block_36, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 410, 899));
            come_call_finalizer(sFun_finalize, fun_39, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 410, 900);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 410, 901));
            (fun_attribute_prefix = come_decrement_ref_count(fun_attribute_prefix, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 410, 902));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 410, 903));
            (fun_attribute_middle = come_decrement_ref_count(fun_attribute_middle, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 410, 904));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 410, 905);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 410, 906));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 410, 907));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 410, 908));
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 410, 909);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 410, 910);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 410, 911);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 410, 912));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 410, 913));
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 410, 914);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "48function8.nc", 410, 915):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "48function8.nc", 410, 916):(void*)0);
            return __result_obj__0;
            (generics_sname_34 = come_decrement_ref_count(generics_sname_34, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 433, 917));
            (block_36 = come_decrement_ref_count(block_36, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 433, 918));
            come_call_finalizer(sFun_finalize, fun_39, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 433, 919);
        }
        else {
            # 413 "48function8.nc"
            __right_value0 = (void*)0;
            block_47=(struct sBlock* )come_increment_ref_count(parse_block(info,constructor_,(_Bool)1), "48function8.nc", 413, 920);
            # 420 "48function8.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __right_value3 = (void*)0;
            fun_48=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "48function8.nc", 415, 921, "struct sFun* "), "48function8.nc", 420, 922),(char* )come_increment_ref_count(__builtin_string(fun_name,"48function8.nc",415), "48function8.nc", 420, 923),(struct sType* )come_increment_ref_count(result_type, "48function8.nc", 420, 924),(struct list$1sType$ph*)come_increment_ref_count(param_types, "48function8.nc", 420, 925),(struct list$1char$ph*)come_increment_ref_count(param_names, "48function8.nc", 420, 926),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "48function8.nc", 420, 927),(_Bool)0,var_args,(struct sBlock* )come_increment_ref_count(sBlock_clone(block_47), "48function8.nc", 420, 928),static_fun,info,inline_fun,uniq_fun,(char* )come_increment_ref_count(fun_attribute_prefix, "48function8.nc", 420, 929),(char* )come_increment_ref_count(fun_attribute, "48function8.nc", 420, 930),const_fun,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "48function8.nc", 420, 931)), "48function8.nc", 420, 932);
            # 421 "48function8.nc"
            __dec_obj105=fun_48->mMiddleAttribute,
            fun_48->mMiddleAttribute=(char* )come_increment_ref_count(fun_attribute_middle, "48function8.nc", 421, 934);
            __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 421, 933);
            # 431 "48function8.nc"
            if(info->in_class) {
                # 425 "48function8.nc"
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"48function8.nc",425), "48function8.nc", 425, 935),(struct sFun*)come_increment_ref_count(fun_48, "48function8.nc", 425, 936),(_Bool)0);
            }
            else {
                # 428 "48function8.nc"
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"48function8.nc",428), "48function8.nc", 428, 937),(struct sFun*)come_increment_ref_count(fun_48, "48function8.nc", 428, 938),(_Bool)0);
            }
            # 431 "48function8.nc"
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "48function8.nc", 431, 942, "struct sNode");
            _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "48function8.nc", 431, 939, "struct sFunNode* "), "48function8.nc", 431, 940),(struct sFun*)come_increment_ref_count(fun_48, "48function8.nc", 431, 941),info))), "48function8.nc", 431, 943);
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
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)), "48function8.nc", 431, 944);
            come_call_finalizer(sBlock_finalize, block_47, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 431, 945);
            come_call_finalizer(sFun_finalize, fun_48, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 431, 946);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 431, 947));
            (fun_attribute_prefix = come_decrement_ref_count(fun_attribute_prefix, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 431, 948));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 431, 949));
            (fun_attribute_middle = come_decrement_ref_count(fun_attribute_middle, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 431, 950));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 431, 951);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 431, 952));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 431, 953));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 431, 954));
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 431, 955);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 431, 956);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 431, 957);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 431, 958));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 431, 959));
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 431, 960);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "48function8.nc", 431, 961):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "48function8.nc", 431, 962):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sBlock_finalize, block_47, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 433, 963);
            come_call_finalizer(sFun_finalize, fun_48, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 433, 964);
        }
    }
    else if(((((unsigned char)(*info->p))>=97&&((unsigned char)(*info->p))<=122)||(((unsigned char)(*info->p))>=65&&((unsigned char)(*info->p))<=90))||*info->p==95||*info->p==59) {
        # 440 "48function8.nc"
        if(version>0) {
            # 436 "48function8.nc"
            __right_value0 = (void*)0;
            new_fun_name_49=(char* )come_increment_ref_count(xsprintf("%s_v%d",fun_name,version), "48function8.nc", 436, 965);
            # 437 "48function8.nc"
            __right_value0 = (void*)0;
            __dec_obj106=fun_name,
            fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name_49,"48function8.nc",437), "48function8.nc", 437, 967);
            __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 437, 966);
            (new_fun_name_49 = come_decrement_ref_count(new_fun_name_49, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 440, 968));
        }
        # 495 "48function8.nc"
        if(*info->p==59) {
            # 441 "48function8.nc"
            info->p++;
            # 442 "48function8.nc"
            skip_spaces_and_lf(info);
            # 444 "48function8.nc"
            result_type->mStatic=(_Bool)0;
            # 445 "48function8.nc"
            result_type->mUniq=(_Bool)0;
            # 446 "48function8.nc"
            result_type->mInline=(_Bool)0;
            # 454 "48function8.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            fun_50=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "48function8.nc", 448, 969, "struct sFun* "), "48function8.nc", 454, 971),(char* )come_increment_ref_count(__builtin_string(fun_name,"48function8.nc",448), "48function8.nc", 454, 972),(struct sType* )come_increment_ref_count(result_type, "48function8.nc", 454, 973),(struct list$1sType$ph*)come_increment_ref_count(param_types, "48function8.nc", 454, 974),(struct list$1char$ph*)come_increment_ref_count(param_names, "48function8.nc", 454, 975),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "48function8.nc", 454, 976),(_Bool)1,var_args,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(char* )come_increment_ref_count(fun_attribute_prefix, "48function8.nc", 454, 977),(char* )come_increment_ref_count(fun_attribute, "48function8.nc", 454, 978),const_fun,((void*)0),((void*)0),0,(_Bool)0,(char* )come_increment_ref_count(asm_fun2, "48function8.nc", 454, 970)), "48function8.nc", 454, 979);
            # 455 "48function8.nc"
            __dec_obj107=fun_50->mMiddleAttribute,
            fun_50->mMiddleAttribute=(char* )come_increment_ref_count(fun_attribute_middle, "48function8.nc", 455, 981);
            __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 455, 980);
            # 457 "48function8.nc"
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"48function8.nc",457), "48function8.nc", 457, 982),(struct sFun*)come_increment_ref_count(fun_50, "48function8.nc", 457, 983),(_Bool)0);
            # 459 "48function8.nc"
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "48function8.nc", 459, 987, "struct sNode");
            _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "48function8.nc", 459, 984, "struct sFunNode* "), "48function8.nc", 459, 985),(struct sFun*)come_increment_ref_count(fun_50, "48function8.nc", 459, 986),info))), "48function8.nc", 459, 988);
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
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value4)), "48function8.nc", 459, 989);
            come_call_finalizer(sFun_finalize, fun_50, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 459, 990);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 459, 991));
            (fun_attribute_prefix = come_decrement_ref_count(fun_attribute_prefix, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 459, 992));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 459, 993));
            (fun_attribute_middle = come_decrement_ref_count(fun_attribute_middle, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 459, 994));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 459, 995);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 459, 996));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 459, 997));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 459, 998));
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 459, 999);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 459, 1000);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 459, 1001);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 459, 1002));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 459, 1003));
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 459, 1004);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "48function8.nc", 459, 1005):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "48function8.nc", 459, 1006):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sFun_finalize, fun_50, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 495, 1007);
        }
        else {
            # 462 "48function8.nc"
            __right_value0 = (void*)0;
            multiple_assign_var6=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_function_attribute(info)));
            asm_fun_51=(char* )come_increment_ref_count(multiple_assign_var6->v1, "48function8.nc", 462, 1008);
            fun_attribute2_52=(char* )come_increment_ref_count(multiple_assign_var6->v2, "48function8.nc", 462, 1009);
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 462, 1010);
            # 479 "48function8.nc"
            if(string_operator_not_equals(fun_attribute2_52,"")) {
                # 477 "48function8.nc"
                if(string_operator_not_equals(fun_attribute,"")) {
                    # 472 "48function8.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj108=fun_attribute,
                    fun_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(fun_attribute," "))),fun_attribute2_52), "48function8.nc", 472, 1012);
                    __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 472, 1011);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "48function8.nc", 472, 1013));
                }
                else {
                    # 475 "48function8.nc"
                    __dec_obj109=fun_attribute,
                    fun_attribute=(char* )come_increment_ref_count(fun_attribute2_52, "48function8.nc", 475, 1015);
                    __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 475, 1014);
                }
            }
            # 479 "48function8.nc"
            result_type->mStatic=(_Bool)0;
            # 480 "48function8.nc"
            result_type->mUniq=(_Bool)0;
            # 481 "48function8.nc"
            result_type->mInline=(_Bool)0;
            # 488 "48function8.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            fun_53=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "48function8.nc", 483, 1016, "struct sFun* "), "48function8.nc", 488, 1018),(char* )come_increment_ref_count(__builtin_string(fun_name,"48function8.nc",483), "48function8.nc", 488, 1019),(struct sType* )come_increment_ref_count(result_type, "48function8.nc", 488, 1020),(struct list$1sType$ph*)come_increment_ref_count(param_types, "48function8.nc", 488, 1021),(struct list$1char$ph*)come_increment_ref_count(param_names, "48function8.nc", 488, 1022),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "48function8.nc", 488, 1023),(_Bool)1,var_args,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(char* )come_increment_ref_count(fun_attribute_prefix, "48function8.nc", 488, 1024),(char* )come_increment_ref_count(fun_attribute, "48function8.nc", 488, 1025),const_fun,((void*)0),((void*)0),0,(_Bool)0,(char* )come_increment_ref_count(asm_fun_51, "48function8.nc", 488, 1017)), "48function8.nc", 488, 1026);
            # 489 "48function8.nc"
            __dec_obj110=fun_53->mMiddleAttribute,
            fun_53->mMiddleAttribute=(char* )come_increment_ref_count(fun_attribute_middle, "48function8.nc", 489, 1028);
            __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0, "48function8.nc", 489, 1027);
            # 491 "48function8.nc"
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"48function8.nc",491), "48function8.nc", 491, 1029),(struct sFun*)come_increment_ref_count(fun_53, "48function8.nc", 491, 1030),(_Bool)0);
            # 493 "48function8.nc"
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "48function8.nc", 493, 1034, "struct sNode");
            _inf_obj_value5=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "48function8.nc", 493, 1031, "struct sFunNode* "), "48function8.nc", 493, 1032),(struct sFun*)come_increment_ref_count(fun_53, "48function8.nc", 493, 1033),info))), "48function8.nc", 493, 1035);
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
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value5)), "48function8.nc", 493, 1036);
            (asm_fun_51 = come_decrement_ref_count(asm_fun_51, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 493, 1037));
            (fun_attribute2_52 = come_decrement_ref_count(fun_attribute2_52, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 493, 1038));
            come_call_finalizer(sFun_finalize, fun_53, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 493, 1039);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 493, 1040));
            (fun_attribute_prefix = come_decrement_ref_count(fun_attribute_prefix, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 493, 1041));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 493, 1042));
            (fun_attribute_middle = come_decrement_ref_count(fun_attribute_middle, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 493, 1043));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 493, 1044);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 493, 1045));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 493, 1046));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 493, 1047));
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 493, 1048);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 493, 1049);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 493, 1050);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 493, 1051));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 493, 1052));
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "48function8.nc}", 493, 1053);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "48function8.nc", 493, 1054):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "48function8.nc", 493, 1055):(void*)0);
            return __result_obj__0;
            (asm_fun_51 = come_decrement_ref_count(asm_fun_51, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 495, 1056));
            (fun_attribute2_52 = come_decrement_ref_count(fun_attribute2_52, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 495, 1057));
            come_call_finalizer(sFun_finalize, fun_53, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 495, 1058);
        }
    }
    else {
        # 497 "48function8.nc"
        err_msg(info,"invalid character(2)(%c)",*info->p);
        # 498 "48function8.nc"
        exit(2);
    }
    # 501 "48function8.nc"
    info->constructor_=(_Bool)0;
    # 503 "48function8.nc"
    info->in_top_level=in_top_level;
    # 505 "48function8.nc"
        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "48function8.nc", 505, 1059);
    (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 505, 1060));
    (fun_attribute_prefix = come_decrement_ref_count(fun_attribute_prefix, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 505, 1061));
    (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 505, 1062));
    (fun_attribute_middle = come_decrement_ref_count(fun_attribute_middle, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 505, 1063));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 505, 1064);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 505, 1065));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 505, 1066));
    (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 505, 1067));
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 505, 1068);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 505, 1069);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "48function8.nc}", 505, 1070);
    (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 505, 1071));
    (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "48function8.nc", 505, 1072));
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "48function8.nc", 505, 1073):(void*)0);
    return __result_obj__0;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phchar$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple2$2char$phchar$ph$p_finalize"
    # 3 "tuple2$2char$phchar$ph$p_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple2$2char$phchar$ph$p_finalize"
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phchar$ph$p_finalize", 2, 252));
    }
    # 4 "tuple2$2char$phchar$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple2$2char$phchar$ph$p_finalize"
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phchar$ph$p_finalize", 3, 253));
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
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 262);
    }
    # 4 "tuple3$3sType$phchar$ph_Bool$$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple3$3sType$phchar$ph_Bool$$p_finalize"
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 263));
    }
            neo_current_frame = fr.prev;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"
    # 3 "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize}", 2, 315);
    }
    # 4 "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize}", 3, 316);
    }
    # 5 "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        # 4 "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize}", 4, 317);
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
    # 4047 "./neo-c.h"
    # 4049 "./neo-c.h"
    # 4050 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sFun* ));
    # 4056 "./neo-c.h"
    if(self==((void*)0)) {
        # 4053 "./neo-c.h"
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 343);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 370);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 371);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 372);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4065, 373);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4065, 374);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 375);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 376);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 377);
                return __result_obj__0;
            }
        }
        else {
            # 4076 "./neo-c.h"
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 378);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 379);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 380);
            return __result_obj__0;
        }
    }
    # 4080 "./neo-c.h"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 381);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 382);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 383);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    # 1 "sFun_finalize"
    # 3 "sFun_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 2 "sFun_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 344));
    }
    # 4 "sFun_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 3 "sFun_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 345);
    }
    # 5 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 4 "sFun_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 346);
    }
    # 6 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 5 "sFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 347);
    }
    # 7 "sFun_finalize"
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        # 6 "sFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 348);
    }
    # 8 "sFun_finalize"
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        # 7 "sFun_finalize"
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 349);
    }
    # 9 "sFun_finalize"
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        # 8 "sFun_finalize"
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 19, 356);
    }
    # 10 "sFun_finalize"
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        # 9 "sFun_finalize"
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 359);
    }
    # 11 "sFun_finalize"
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        # 10 "sFun_finalize"
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 360));
    }
    # 12 "sFun_finalize"
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        # 11 "sFun_finalize"
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 361));
    }
    # 13 "sFun_finalize"
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        # 12 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 362);
    }
    # 14 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        # 13 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 363);
    }
    # 15 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        # 14 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 364);
    }
    # 16 "sFun_finalize"
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        # 15 "sFun_finalize"
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 365);
    }
    # 17 "sFun_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 16 "sFun_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 366));
    }
    # 18 "sFun_finalize"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 17 "sFun_finalize"
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 367));
    }
    # 19 "sFun_finalize"
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        # 18 "sFun_finalize"
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 368));
    }
    # 20 "sFun_finalize"
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        # 19 "sFun_finalize"
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 369));
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 355);
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
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 354);
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
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 350));
    }
    # 4 "sVar_finalize"
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        # 3 "sVar_finalize"
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 351));
    }
    # 5 "sVar_finalize"
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        # 4 "sVar_finalize"
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 352);
    }
    # 6 "sVar_finalize"
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        # 5 "sVar_finalize"
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 353));
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
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 357);
    }
    # 4 "sBlock_finalize"
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        # 3 "sBlock_finalize"
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 358);
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 384);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 385);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 386);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 387);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4065, 388);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4065, 389);
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
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 390);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 391);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 392);
                return __result_obj__0;
            }
        }
        else {
            # 4076 "./neo-c.h"
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 393);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 394);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 395);
            return __result_obj__0;
        }
    }
    # 4080 "./neo-c.h"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 396);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 397);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 398);
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
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3892, 401));
        come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3892, 402);
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
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3911, 417));
                    # 3912 "./neo-c.h"
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3912, 418);
                }
                else {
                    # 3915 "./neo-c.h"
                    self->keys[it]=key;
                }
                # 3924 "./neo-c.h"
                if(1) {
                    # 3918 "./neo-c.h"
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3918, 419);
                    # 3919 "./neo-c.h"
                    self->items[it]=(struct sFun* )come_increment_ref_count(item, "./neo-c.h", 3919, 420);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3942, 421);
            }
            else {
                # 3945 "./neo-c.h"
                self->keys[it]=key;
            }
            # 3954 "./neo-c.h"
            if(1) {
                # 3948 "./neo-c.h"
                self->items[it]=(struct sFun* )come_increment_ref_count(item, "./neo-c.h", 3948, 422);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 3962, 437));
    }
    # 3965 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3965, 438));
    come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3965, 439);
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
    int i_12;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    # 3806 "./neo-c.h"
    # 3808 "./neo-c.h"
    old_size=self->size;
    # 3809 "./neo-c.h"
    size=self->size*10;
    # 3810 "./neo-c.h"
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3810, 403, "char** "))), "./neo-c.h", 3810, 404);
    # 3811 "./neo-c.h"
    __right_value0 = (void*)0;
    items=(struct sFun** )come_increment_ref_count(((struct sFun** )(__right_value0=(struct sFun* *)come_calloc(1, sizeof(struct sFun* )*(1*(size)), "./neo-c.h", 3811, 405, "struct sFun** "))), "./neo-c.h", 3811, 406);
    # 3812 "./neo-c.h"
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3812, 407, "unsigned int*"))), "./neo-c.h", 3812, 408);
    # 3813 "./neo-c.h"
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3813, 409, "_Bool*"))), "./neo-c.h", 3813, 410);
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
    for(i_12=0    ;i_12<old_size;i_12++){
        # 3826 "./neo-c.h"
        if(!self->item_existance[i_12]) {
            # 3823 "./neo-c.h"
            continue;
        }
        # 3826 "./neo-c.h"
        key_hash=self->hashes[i_12];
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
                keys[n]=self->keys[i_12];
                # 3846 "./neo-c.h"
                items[n]=self->items[i_12];
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
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3855, 411));
    # 3856 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3856, 412));
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
    struct list_item$1char$ph* it_13;
    int i_14;
    struct list_item$1char$ph* prev_it_15;
    struct list_item$1char$ph* it_16;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_17;
    struct list_item$1char$ph* prev_it_18;
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1942, 414);
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
        it_13=self->head;
        # 1959 "./neo-c.h"
        i_14=0;
        # 1981 "./neo-c.h"
        while(it_13!=((void*)0)) {
            # 1966 "./neo-c.h"
            if(i_14==head) {
                # 1962 "./neo-c.h"
                self->tail=it_13->prev;
                # 1963 "./neo-c.h"
                self->tail->next=((void*)0);
            }
            # 1980 "./neo-c.h"
            if(i_14>=head) {
                # 1967 "./neo-c.h"
                prev_it_15=it_13;
                # 1969 "./neo-c.h"
                it_13=it_13->next;
                # 1970 "./neo-c.h"
                i_14++;
                # 1972 "./neo-c.h"
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1972, 415);
                # 1974 "./neo-c.h"
                self->len--;
            }
            else {
                # 1977 "./neo-c.h"
                it_13=it_13->next;
                # 1978 "./neo-c.h"
                i_14++;
            }
        }
    }
    else {
        # 1983 "./neo-c.h"
        it_16=self->head;
        # 1985 "./neo-c.h"
        head_prev_it=((void*)0);
        # 1986 "./neo-c.h"
        tail_it=((void*)0);
        # 1989 "./neo-c.h"
        i_17=0;
        # 2015 "./neo-c.h"
        while(it_16!=((void*)0)) {
            # 1994 "./neo-c.h"
            if(i_17==head) {
                # 1992 "./neo-c.h"
                head_prev_it=it_16->prev;
            }
            # 1998 "./neo-c.h"
            if(i_17==tail) {
                # 1995 "./neo-c.h"
                tail_it=it_16;
            }
            # 2013 "./neo-c.h"
            if(i_17>=head&&i_17<tail) {
                # 2000 "./neo-c.h"
                prev_it_18=it_16;
                # 2002 "./neo-c.h"
                it_16=it_16->next;
                # 2003 "./neo-c.h"
                i_17++;
                # 2005 "./neo-c.h"
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2005, 416);
                # 2007 "./neo-c.h"
                self->len--;
            }
            else {
                # 2010 "./neo-c.h"
                it_16=it_16->next;
                # 2011 "./neo-c.h"
                i_17++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1864, 413);
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
    char*  __dec_obj63  ;
    struct list_item$1char$ph* litem_19;
    char*  __dec_obj64  ;
    struct list_item$1char$ph* litem_20;
    char*  __dec_obj65  ;
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1615, 423));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1619, 424, "struct list_item$1char$ph*"))), "./neo-c.h", 1619, 425);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj63=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1623, 427);
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1623, 426);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_19=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1629, 428, "struct list_item$1char$ph*"))), "./neo-c.h", 1629, 429);
        # 1631 "./neo-c.h"
        litem_19->prev=self->head;
        # 1632 "./neo-c.h"
        litem_19->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj64=litem_19->item,
        litem_19->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1633, 431);
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1633, 430);
        # 1635 "./neo-c.h"
        self->tail=litem_19;
        # 1636 "./neo-c.h"
        self->head->next=litem_19;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_20=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1639, 432, "struct list_item$1char$ph*"))), "./neo-c.h", 1639, 433);
        # 1641 "./neo-c.h"
        litem_20->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_20->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj65=litem_20->item,
        litem_20->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1643, 435);
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1643, 434);
        # 1645 "./neo-c.h"
        self->tail->next=litem_20;
        # 1646 "./neo-c.h"
        self->tail=litem_20;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1651, 436));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaNode_clone"; neo_current_frame = &fr;
    struct sLambdaNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLambdaNode*  result  ;
    char*  __dec_obj66  ;
    # 3 "sLambdaNode_clone"
    # 5 "sLambdaNode_clone"
    if(self==(void*)0) {
        # 4 "sLambdaNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sLambdaNode_clone"
    result=(struct sLambdaNode* )come_increment_ref_count((struct sLambdaNode *)come_calloc(1, sizeof(struct sLambdaNode )*(1), "sLambdaNode_clone", 5, 446, "struct sLambdaNode* "), "sLambdaNode_clone", 5, 447);
    # 7 "sLambdaNode_clone"
    if(self!=((void*)0)) {
        # 6 "sLambdaNode_clone"
        result->sline=self->sline;
    }
    # 8 "sLambdaNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sLambdaNode_clone"
        __right_value0 = (void*)0;
        __dec_obj66=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLambdaNode_clone", 7, 448, "char* "), "sLambdaNode_clone", 7, 450);
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0, "sLambdaNode_clone", 7, 449);
    }
    # 9 "sLambdaNode_clone"
    if(self!=((void*)0)) {
        # 8 "sLambdaNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sLambdaNode_clone"
    if(self!=((void*)0)) {
        # 9 "sLambdaNode_clone"
        result->mFun=self->mFun;
    }
    # 10 "sLambdaNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sLambdaNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLambdaNode_clone}", 10, 451);
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

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phsGenericsFun$ph* __result_obj__0;
    _Bool add_to_key_list;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 3889 "./neo-c.h"
    # 3895 "./neo-c.h"
    if(self==((void*)0)) {
        # 3892 "./neo-c.h"
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3892, 494));
        come_call_finalizer(sGenericsFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3892, 505);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3898 "./neo-c.h"
    if(self->len*10>=self->size) {
        # 3896 "./neo-c.h"
        map$2char$phsGenericsFun$ph_rehash(self);
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
                map$2char$phsGenericsFun$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                # 3917 "./neo-c.h"
                if(1) {
                    # 3911 "./neo-c.h"
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3911, 516));
                    # 3912 "./neo-c.h"
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3912, 517);
                }
                else {
                    # 3915 "./neo-c.h"
                    self->keys[it]=key;
                }
                # 3924 "./neo-c.h"
                if(1) {
                    # 3918 "./neo-c.h"
                    come_call_finalizer(sGenericsFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3918, 518);
                    # 3919 "./neo-c.h"
                    self->items[it]=(struct sGenericsFun* )come_increment_ref_count(item, "./neo-c.h", 3919, 519);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3942, 520);
            }
            else {
                # 3945 "./neo-c.h"
                self->keys[it]=key;
            }
            # 3954 "./neo-c.h"
            if(1) {
                # 3948 "./neo-c.h"
                self->items[it]=(struct sGenericsFun* )come_increment_ref_count(item, "./neo-c.h", 3948, 521);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 3962, 522));
    }
    # 3965 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3965, 523));
    come_call_finalizer(sGenericsFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3965, 524);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
    # 1 "sGenericsFun_finalize"
    # 3 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        # 2 "sGenericsFun_finalize"
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 2, 495);
    }
    # 4 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        # 3 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 3, 496);
    }
    # 5 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        # 4 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 4, 497);
    }
    # 6 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 5 "sGenericsFun_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 5, 498));
    }
    # 7 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 6 "sGenericsFun_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 6, 499);
    }
    # 8 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 7 "sGenericsFun_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 7, 500);
    }
    # 9 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 8 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 8, 501);
    }
    # 10 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        # 9 "sGenericsFun_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 9, 502);
    }
    # 11 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        # 10 "sGenericsFun_finalize"
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 10, 503));
    }
    # 12 "sGenericsFun_finalize"
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        # 11 "sGenericsFun_finalize"
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 11, 504));
    }
            neo_current_frame = fr.prev;
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
    int i_23;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    # 3806 "./neo-c.h"
    # 3808 "./neo-c.h"
    old_size=self->size;
    # 3809 "./neo-c.h"
    size=self->size*10;
    # 3810 "./neo-c.h"
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3810, 506, "char** "))), "./neo-c.h", 3810, 507);
    # 3811 "./neo-c.h"
    __right_value0 = (void*)0;
    items=(struct sGenericsFun** )come_increment_ref_count(((struct sGenericsFun** )(__right_value0=(struct sGenericsFun* *)come_calloc(1, sizeof(struct sGenericsFun* )*(1*(size)), "./neo-c.h", 3811, 508, "struct sGenericsFun** "))), "./neo-c.h", 3811, 509);
    # 3812 "./neo-c.h"
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3812, 510, "unsigned int*"))), "./neo-c.h", 3812, 511);
    # 3813 "./neo-c.h"
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3813, 512, "_Bool*"))), "./neo-c.h", 3813, 513);
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
    for(i_23=0    ;i_23<old_size;i_23++){
        # 3826 "./neo-c.h"
        if(!self->item_existance[i_23]) {
            # 3823 "./neo-c.h"
            continue;
        }
        # 3826 "./neo-c.h"
        key_hash=self->hashes[i_23];
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
                keys[n]=self->keys[i_23];
                # 3846 "./neo-c.h"
                items[n]=self->items[i_23];
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
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3855, 514));
    # 3856 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3856, 515));
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

static void sFunNode_finalize(struct sFunNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_finalize"; neo_current_frame = &fr;
    # 1 "sFunNode_finalize"
    # 3 "sFunNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sFunNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFunNode_finalize", 2, 684));
    }
    # 4 "sFunNode_finalize"
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        # 3 "sFunNode_finalize"
        come_call_finalizer(sFun_finalize, self->mFun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunNode_finalize}", 3, 685);
    }
                neo_current_frame = fr.prev;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_clone"; neo_current_frame = &fr;
    struct sFunNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFunNode*  result  ;
    char*  __dec_obj73  ;
    struct sFun*  __dec_obj104  ;
    # 3 "sFunNode_clone"
    # 5 "sFunNode_clone"
    if(self==(void*)0) {
        # 4 "sFunNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sFunNode_clone"
    result=(struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "sFunNode_clone", 5, 686, "struct sFunNode* "), "sFunNode_clone", 5, 687);
    # 7 "sFunNode_clone"
    if(self!=((void*)0)) {
        # 6 "sFunNode_clone"
        result->sline=self->sline;
    }
    # 8 "sFunNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sFunNode_clone"
        __right_value0 = (void*)0;
        __dec_obj73=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sFunNode_clone", 7, 688, "char* "), "sFunNode_clone", 7, 690);
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0, "sFunNode_clone", 7, 689);
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
        __dec_obj104=result->mFun,
        result->mFun=(struct sFun* )come_increment_ref_count(sFun_clone(self->mFun), "sFunNode_clone", 9, 895);
        come_call_finalizer(sFun_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunNode_clone", 9, 894);
    }
    # 10 "sFunNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sFunNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFunNode_clone}", 10, 896);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sFun*  sFun_clone(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_clone"; neo_current_frame = &fr;
    struct sFun*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sFun*  result  ;
    char*  __dec_obj74  ;
    struct sType*  __dec_obj75  ;
    struct list$1sType$ph* __dec_obj76;
    struct list$1char$ph* __dec_obj77;
    struct list$1char$ph* __dec_obj78;
    struct sType*  __dec_obj79  ;
    struct list$1sVar$ph* __dec_obj87;
    struct sBlock*  __dec_obj93  ;
    char*  __dec_obj94  ;
    char*  __dec_obj95  ;
    struct buffer*  __dec_obj96  ;
    struct buffer*  __dec_obj97  ;
    struct buffer*  __dec_obj98  ;
    struct buffer*  __dec_obj99  ;
    char*  __dec_obj100  ;
    char*  __dec_obj101  ;
    char*  __dec_obj102  ;
    char*  __dec_obj103  ;
    # 3 "sFun_clone"
    # 5 "sFun_clone"
    if(self==(void*)0) {
        # 4 "sFun_clone"
                __result_obj__0 = (struct sFun* )come_increment_ref_count((void*)0, "sFun_clone", 4, 691);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 4, 692);
        return __result_obj__0;
    }
    # 5 "sFun_clone"
    result=(struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "sFun_clone", 5, 693, "struct sFun* "), "sFun_clone", 5, 694);
    # 7 "sFun_clone"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 6 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj74=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sFun_clone", 6, 695, "char* "), "sFun_clone", 6, 697);
        __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 6, 696);
    }
    # 8 "sFun_clone"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 7 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj75=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sFun_clone", 7, 699);
        come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 7, 698);
    }
    # 9 "sFun_clone"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 8 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj76=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sFun_clone", 8, 701);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 8, 700);
    }
    # 10 "sFun_clone"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 9 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj77=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sFun_clone", 9, 703);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 9, 702);
    }
    # 11 "sFun_clone"
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        # 10 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj78=result->mParamDefaultParametors,
        result->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamDefaultParametors), "sFun_clone", 10, 705);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 10, 704);
    }
    # 12 "sFun_clone"
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        # 11 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj79=result->mLambdaType,
        result->mLambdaType=(struct sType* )come_increment_ref_count(sType_clone(self->mLambdaType), "sFun_clone", 11, 707);
        come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 11, 706);
    }
    # 13 "sFun_clone"
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        # 12 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj87=result->mAllVar,
        result->mAllVar=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph$p_clone(self->mAllVar), "sFun_clone", 13, 755);
        come_call_finalizer(list$1sVar$ph_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 13, 754);
    }
    # 14 "sFun_clone"
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        # 13 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj93=result->mBlock,
        result->mBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(self->mBlock), "sFun_clone", 13, 864);
        come_call_finalizer(sBlock_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 13, 863);
    }
    # 15 "sFun_clone"
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        # 14 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj94=result->mTextBlock,
        result->mTextBlock=(char* )come_increment_ref_count((char* )come_memdup(self->mTextBlock, "sFun_clone", 14, 865, "char* "), "sFun_clone", 14, 867);
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 14, 866);
    }
    # 16 "sFun_clone"
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        # 15 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj95=result->mTextBlockSName,
        result->mTextBlockSName=(char* )come_increment_ref_count((char* )come_memdup(self->mTextBlockSName, "sFun_clone", 15, 868, "char* "), "sFun_clone", 15, 870);
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 15, 869);
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
        __dec_obj96=result->mSource,
        result->mSource=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSource), "sFun_clone", 17, 872);
        come_call_finalizer(buffer_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 17, 871);
    }
    # 19 "sFun_clone"
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        # 18 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj97=result->mSourceHead,
        result->mSourceHead=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceHead), "sFun_clone", 18, 874);
        come_call_finalizer(buffer_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 18, 873);
    }
    # 20 "sFun_clone"
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        # 19 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj98=result->mSourceHead2,
        result->mSourceHead2=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceHead2), "sFun_clone", 19, 876);
        come_call_finalizer(buffer_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 19, 875);
    }
    # 21 "sFun_clone"
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        # 20 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj99=result->mSourceEnd,
        result->mSourceEnd=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceEnd), "sFun_clone", 20, 878);
        come_call_finalizer(buffer_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 20, 877);
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
        __dec_obj100=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sFun_clone", 28, 879, "char* "), "sFun_clone", 28, 881);
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 28, 880);
    }
    # 30 "sFun_clone"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 29 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj101=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sFun_clone", 29, 882, "char* "), "sFun_clone", 29, 884);
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 29, 883);
    }
    # 31 "sFun_clone"
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        # 30 "sFun_clone"
        __right_value0 = (void*)0;
        __dec_obj102=result->mFunAttribute,
        result->mFunAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mFunAttribute, "sFun_clone", 30, 885, "char* "), "sFun_clone", 30, 887);
        __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 30, 886);
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
        __dec_obj103=result->mAsmFun,
        result->mAsmFun=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmFun, "sFun_clone", 33, 888, "char* "), "sFun_clone", 33, 890);
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 33, 889);
    }
    # 34 "sFun_clone"
        __result_obj__0 = (struct sFun* )come_increment_ref_count(result, "sFun_clone", 34, 891);
    come_call_finalizer(sFun_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 34, 892);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 34, 893);
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
                __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 708);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 709);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc(1, sizeof(struct list$1sVar$ph)*(1), "./neo-c.h", 1513, 710, "struct list$1sVar$ph*"), "./neo-c.h", 1513, 714)), "./neo-c.h", 1513, 715);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sVar$ph_add(result,(struct sVar* )come_increment_ref_count(sVar_clone(it->item), "./neo-c.h", 1518, 748));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sVar$ph_add(result,(struct sVar* )come_increment_ref_count(sVar_clone(it->item), "./neo-c.h", 1521, 749));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 750);
    come_call_finalizer(list$1sVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 751);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 752);
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
        __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 711);
    come_call_finalizer(list$1sVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 712);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 713);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_add"; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sVar$ph* litem;
    struct sVar*  __dec_obj80  ;
    struct list_item$1sVar$ph* litem_40;
    struct sVar*  __dec_obj81  ;
    struct list_item$1sVar$ph* litem_41;
    struct sVar*  __dec_obj82  ;
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 716);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./neo-c.h", 1534, 717, "struct list_item$1sVar$ph*"))), "./neo-c.h", 1534, 718);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj80=litem->item,
        litem->item=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 1538, 720);
        come_call_finalizer(sVar_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 719);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_40=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./neo-c.h", 1544, 721, "struct list_item$1sVar$ph*"))), "./neo-c.h", 1544, 722);
        # 1546 "./neo-c.h"
        litem_40->prev=self->head;
        # 1547 "./neo-c.h"
        litem_40->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj81=litem_40->item,
        litem_40->item=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 1548, 724);
        come_call_finalizer(sVar_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 723);
        # 1550 "./neo-c.h"
        self->tail=litem_40;
        # 1551 "./neo-c.h"
        self->head->next=litem_40;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_41=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./neo-c.h", 1554, 725, "struct list_item$1sVar$ph*"))), "./neo-c.h", 1554, 726);
        # 1556 "./neo-c.h"
        litem_41->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_41->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj82=litem_41->item,
        litem_41->item=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 1558, 728);
        come_call_finalizer(sVar_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 727);
        # 1560 "./neo-c.h"
        self->tail->next=litem_41;
        # 1561 "./neo-c.h"
        self->tail=litem_41;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 729);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  sVar_clone(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_clone"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVar*  result  ;
    char*  __dec_obj83  ;
    char*  __dec_obj84  ;
    struct sType*  __dec_obj85  ;
    char*  __dec_obj86  ;
    # 3 "sVar_clone"
    # 5 "sVar_clone"
    if(self==(void*)0) {
        # 4 "sVar_clone"
                __result_obj__0 = (struct sVar* )come_increment_ref_count((void*)0, "sVar_clone", 4, 730);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 4, 731);
        return __result_obj__0;
    }
    # 5 "sVar_clone"
    result=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "sVar_clone", 5, 732, "struct sVar* "), "sVar_clone", 5, 733);
    # 7 "sVar_clone"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 6 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj83=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sVar_clone", 6, 734, "char* "), "sVar_clone", 6, 736);
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 6, 735);
    }
    # 8 "sVar_clone"
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        # 7 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj84=result->mCValueName,
        result->mCValueName=(char* )come_increment_ref_count((char* )come_memdup(self->mCValueName, "sVar_clone", 7, 737, "char* "), "sVar_clone", 7, 739);
        __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 7, 738);
    }
    # 9 "sVar_clone"
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        # 8 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj85=result->mType,
        result->mType=(struct sType* )come_increment_ref_count(sType_clone(self->mType), "sVar_clone", 8, 741);
        come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_clone", 8, 740);
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
        __dec_obj86=result->mFunName,
        result->mFunName=(char* )come_increment_ref_count((char* )come_memdup(self->mFunName, "sVar_clone", 12, 742, "char* "), "sVar_clone", 12, 744);
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 12, 743);
    }
    # 14 "sVar_clone"
    if(self!=((void*)0)) {
        # 13 "sVar_clone"
        result->no_output_come_code=self->no_output_come_code;
    }
    # 14 "sVar_clone"
        __result_obj__0 = (struct sVar* )come_increment_ref_count(result, "sVar_clone", 14, 745);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 746);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 747);
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 753);
    }
            neo_current_frame = fr.prev;
}

static struct sBlock*  sBlock_clone(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_clone"; neo_current_frame = &fr;
    struct sBlock*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sBlock*  result  ;
    struct list$1sNode$ph* __dec_obj88;
    struct sVarTable*  __dec_obj92  ;
    # 3 "sBlock_clone"
    # 5 "sBlock_clone"
    if(self==(void*)0) {
        # 4 "sBlock_clone"
                __result_obj__0 = (struct sBlock* )come_increment_ref_count((void*)0, "sBlock_clone", 4, 756);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 4, 757);
        return __result_obj__0;
    }
    # 5 "sBlock_clone"
    result=(struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "sBlock_clone", 5, 758, "struct sBlock* "), "sBlock_clone", 5, 759);
    # 7 "sBlock_clone"
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        # 6 "sBlock_clone"
        __right_value0 = (void*)0;
        __dec_obj88=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes), "sBlock_clone", 6, 761);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 6, 760);
    }
    # 8 "sBlock_clone"
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        # 7 "sBlock_clone"
        __right_value0 = (void*)0;
        __dec_obj92=result->mVarTable,
        result->mVarTable=(struct sVarTable* )come_increment_ref_count(sVarTable_clone(self->mVarTable), "sBlock_clone", 7, 859);
        come_call_finalizer(sVarTable_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 7, 858);
    }
    # 9 "sBlock_clone"
    if(self!=((void*)0)) {
        # 8 "sBlock_clone"
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
    # 9 "sBlock_clone"
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(result, "sBlock_clone", 9, 860);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 861);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 862);
    return __result_obj__0;
}

static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_clone"; neo_current_frame = &fr;
    struct sVarTable*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVarTable*  result  ;
    struct map$2char$phsVar$ph* __dec_obj91;
    # 3 "sVarTable_clone"
    # 5 "sVarTable_clone"
    if(self==(void*)0) {
        # 4 "sVarTable_clone"
                __result_obj__0 = (struct sVarTable* )come_increment_ref_count((void*)0, "sVarTable_clone", 4, 762);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 4, 763);
        return __result_obj__0;
    }
    # 5 "sVarTable_clone"
    result=(struct sVarTable* )come_increment_ref_count((struct sVarTable *)come_calloc(1, sizeof(struct sVarTable )*(1), "sVarTable_clone", 5, 764, "struct sVarTable* "), "sVarTable_clone", 5, 765);
    # 7 "sVarTable_clone"
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        # 6 "sVarTable_clone"
        __right_value0 = (void*)0;
        __dec_obj91=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars), "sVarTable_clone", 8, 854);
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarTable_clone", 8, 853);
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
        __result_obj__0 = (struct sVarTable* )come_increment_ref_count(result, "sVarTable_clone", 9, 855);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 856);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 857);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_clone"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* result;
    struct list$1char$ph* __dec_obj90;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    # 3441 "./neo-c.h"
    # 3447 "./neo-c.h"
    if(self==((void*)0)) {
        # 3444 "./neo-c.h"
                __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 3444, 766);
        neo_current_frame = fr.prev;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 8, 772);
        return __result_obj__0;
    }
    # 3447 "./neo-c.h"
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./neo-c.h", 3447, 773, "struct map$2char$phsVar$ph*"), "./neo-c.h", 3447, 789)), "./neo-c.h", 3447, 790);
    # 3449 "./neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj90=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3449, 791, "struct list$1char$ph*"), "./neo-c.h", 3449, 792)), "./neo-c.h", 3449, 794);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3449, 793);
    # 3471 "./neo-c.h"
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        # 3452 "./neo-c.h"
        # 3453 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sVar* ));
        # 3455 "./neo-c.h"
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3455, 810),(_Bool)1), "./neo-c.h", 3455, 811);
        # 3469 "./neo-c.h"
        if(1&&1) {
            # 3458 "./neo-c.h"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "./neo-c.h", 3458, 833, "char* "), "./neo-c.h", 3458, 834),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3458, 835),(_Bool)0);
        }
        else if(1) {
            # 3461 "./neo-c.h"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "./neo-c.h", 3461, 836, "char* "), "./neo-c.h", 3461, 837),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3461, 838),(_Bool)0);
        }
        else if(1) {
            # 3464 "./neo-c.h"
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "./neo-c.h", 3464, 839),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3464, 840),(_Bool)0);
        }
        else {
            # 3467 "./neo-c.h"
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "./neo-c.h", 3467, 841),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3467, 842),(_Bool)0);
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3471, 843);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3471, 844);
    }
    # 3471 "./neo-c.h"
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result, "./neo-c.h", 3471, 845);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3471, 846);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3471, 847);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_42;
    # 3389 "./neo-c.h"
    # 3398 "./neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3397 "./neo-c.h"
        if(self->item_existance[i]) {
            # 3396 "./neo-c.h"
            if(1) {
                # 3394 "./neo-c.h"
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3394, 767);
            }
        }
    }
    # 3398 "./neo-c.h"
    come_free((char*)self->items);
    # 3407 "./neo-c.h"
    for(i_42=0    ;i_42<self->size;i_42++){
        # 3406 "./neo-c.h"
        if(self->item_existance[i_42]) {
            # 3405 "./neo-c.h"
            if(1) {
                # 3403 "./neo-c.h"
                (self->keys[i_42] = come_decrement_ref_count(self->keys[i_42], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3403, 768));
            }
        }
    }
    # 3407 "./neo-c.h"
    come_free((char*)self->keys);
    # 3409 "./neo-c.h"
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3409, 769);
    # 3411 "./neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3411, 770));
    # 3412 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3412, 771));
            neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj89;
    struct map$2char$phsVar$ph* __result_obj__0;
    # 3338 "./neo-c.h"
    # 3340 "./neo-c.h"
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "./neo-c.h", 3340, 774, "char** "))), "./neo-c.h", 3340, 775);
    # 3341 "./neo-c.h"
    __right_value0 = (void*)0;
    self->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), "./neo-c.h", 3341, 776, "struct sVar** "))), "./neo-c.h", 3341, 777);
    # 3342 "./neo-c.h"
    __right_value0 = (void*)0;
    self->hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(128)), "./neo-c.h", 3342, 778, "unsigned int*"))), "./neo-c.h", 3342, 779);
    # 3343 "./neo-c.h"
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 3343, 780, "_Bool*"))), "./neo-c.h", 3343, 781);
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
    __dec_obj89=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3354, 782, "struct list$1char$ph*"), "./neo-c.h", 3354, 783)), "./neo-c.h", 3354, 785);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3354, 784);
    # 3356 "./neo-c.h"
    self->it=0;
    # 3358 "./neo-c.h"
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self, "./neo-c.h", 3358, 786);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3358, 787);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3358, 788);
    return __result_obj__0;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_43  ;
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
    memset(&result_43,0,sizeof(char* ));
    # 3779 "./neo-c.h"
        __result_obj__0 = result_43;
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
    char*  result_44  ;
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
    memset(&result_44,0,sizeof(char* ));
    # 3798 "./neo-c.h"
        __result_obj__0 = result_44;
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
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3512, 795);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 796);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 797);
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
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "./neo-c.h", 3525, 798);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3525, 799);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3525, 800);
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
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3532, 801);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 802);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 803);
                return __result_obj__0;
            }
        }
        else {
            # 3536 "./neo-c.h"
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3536, 804);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 805);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 806);
            return __result_obj__0;
        }
    }
    # 3540 "./neo-c.h"
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3540, 807);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 808);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 809);
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
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3971, 812));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3971, 813);
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
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3990, 824));
                    # 3991 "./neo-c.h"
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3991, 825);
                }
                else {
                    # 3994 "./neo-c.h"
                    self->keys[it]=key;
                }
                # 4003 "./neo-c.h"
                if(1) {
                    # 3997 "./neo-c.h"
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3997, 826);
                    # 3998 "./neo-c.h"
                    self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 3998, 827);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4021, 828);
            }
            else {
                # 4024 "./neo-c.h"
                self->keys[it]=key;
            }
            # 4033 "./neo-c.h"
            if(1) {
                # 4027 "./neo-c.h"
                self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 4027, 829);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 4041, 830));
    }
    # 4044 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4044, 831));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4044, 832);
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
    int i_45;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    # 3806 "./neo-c.h"
    # 3808 "./neo-c.h"
    old_size=self->size;
    # 3809 "./neo-c.h"
    size=self->size*10;
    # 3810 "./neo-c.h"
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3810, 814, "char** "))), "./neo-c.h", 3810, 815);
    # 3811 "./neo-c.h"
    __right_value0 = (void*)0;
    items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(size)), "./neo-c.h", 3811, 816, "struct sVar** "))), "./neo-c.h", 3811, 817);
    # 3812 "./neo-c.h"
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3812, 818, "unsigned int*"))), "./neo-c.h", 3812, 819);
    # 3813 "./neo-c.h"
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3813, 820, "_Bool*"))), "./neo-c.h", 3813, 821);
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
    for(i_45=0    ;i_45<old_size;i_45++){
        # 3826 "./neo-c.h"
        if(!self->item_existance[i_45]) {
            # 3823 "./neo-c.h"
            continue;
        }
        # 3826 "./neo-c.h"
        key_hash=self->hashes[i_45];
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
                keys[n]=self->keys[i_45];
                # 3846 "./neo-c.h"
                items[n]=self->items[i_45];
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
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3855, 822));
    # 3856 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3856, 823));
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
    int i_46;
    # 3389 "./neo-c.h"
    # 3398 "./neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3397 "./neo-c.h"
        if(self->item_existance[i]) {
            # 3396 "./neo-c.h"
            if(1) {
                # 3394 "./neo-c.h"
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3394, 848);
            }
        }
    }
    # 3398 "./neo-c.h"
    come_free((char*)self->items);
    # 3407 "./neo-c.h"
    for(i_46=0    ;i_46<self->size;i_46++){
        # 3406 "./neo-c.h"
        if(self->item_existance[i_46]) {
            # 3405 "./neo-c.h"
            if(1) {
                # 3403 "./neo-c.h"
                (self->keys[i_46] = come_decrement_ref_count(self->keys[i_46], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3403, 849));
            }
        }
    }
    # 3407 "./neo-c.h"
    come_free((char*)self->keys);
    # 3409 "./neo-c.h"
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3409, 850);
    # 3411 "./neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3411, 851));
    # 3412 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3412, 852));
            neo_current_frame = fr.prev;
}

