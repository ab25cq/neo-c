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
struct sNode* expression_node_v96(struct sInfo*  info  );
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void sType_finalize(struct sType*  self  );
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
struct sNode* parse_tuple(struct sInfo*  info  , _Bool named_tuple);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
struct sNode* parse_vector(struct sInfo*  info  );
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
struct sNode* expression_node_v96(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expression_node_v96"; neo_current_frame = &fr;
    int sline_real;
    int sline;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* exps;
    struct buffer*  value  ;
    char* head_of_last_line;
    int len;
    struct sNode* exp;
    int sline2;
    struct sNode* __result_obj__0;
    int sline_real_2;
    int sline_3;
    struct buffer*  value_4  ;
    char* p;
    int sline_5;
    int sline2_6;
    void* __right_value2 = (void*)0;
    int sline_real_7;
    char prefix;
    int sline_8;
    struct buffer*  value_9  ;
    char* p_10;
    int sline_11;
    int sline2_12;
    int sline_real_13;
    int sline_14;
    struct buffer*  value_15  ;
    char* p_16;
    int sline_17;
    int sline2_18;
    int sline_real_19;
    int sline_20;
    struct buffer*  value_21  ;
    unsigned long  int  size  ;
    char* p_22;
    int sline_23;
    int len_24;
    int sline2_25;
    int sline_real_26;
    int sline_27;
    struct buffer*  buf  ;
    _Bool global;
    _Bool ignore_case;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    struct buffer*  method_block  ;
    int method_block_sline;
    struct list$1sType$ph* method_generics_types;
    struct sNode* node;
    int sline_real_30;
    int sline_31;
    struct buffer*  value_32  ;
    char* p_33;
    int sline_34;
    int len_35;
    int sline2_36;
    _Bool global_37;
    _Bool ignore_case_38;
    struct sNode* obj_39;
    struct list$1tuple2$2char$phsNode$ph$ph* params_40;
    struct buffer*  method_block_41  ;
    int method_block_sline_42;
    struct list$1sType$ph* method_generics_types_43;
    struct sNode* node_44;
    int sline_real_45;
    char prefix_46;
    int c;
    int n;
    int n_47;
    unsigned long long int n_49;
    int sline_real_50;
    int c_51;
    int n_52;
    int n_53;
    unsigned long long int n_56;
    int sline_real_57;
    int  c_58  ;
    _Bool quote;
    int n_59;
    int n_60;
    unsigned long long int n_63;
    unsigned char p2;
    int size_64;
    int sline_real_65;
    int sline_66;
    struct buffer*  value_67  ;
    char* p_68;
    int sline_69;
    int sline2_70;
    int len_71;
    int*  wstr  ;
    char* str_72;
    int sline_real_73;
    int sline_74;
    struct list$1sNode$ph* exps_75;
    struct buffer*  value_76  ;
    char* p_77;
    int sline_78;
    int len_79;
    struct sNode* exp_80;
    int sline2_81;
    int sline_real_82;
    char* p_83;
    _Bool no_comma;
    struct sNode* node_84;
    char* p2_85;
    struct buffer*  first_element_source  ;
    struct list$1sNode$ph* list_elements;
    struct list$1sNode$ph* map_keys;
    struct list$1sNode$ph* map_elements;
    _Bool no_comma_88;
    struct sNode* node2;
    _Bool no_comma_89;
    struct sNode* node2_90;
    struct sNode* node3;
    _Bool no_comma_91;
    struct sNode* node2_92;
    int sline_real_93;
    struct sNode* node_94;
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&sline, 0, sizeof(sline));
    memset(&exps, 0, sizeof(exps));
    memset(&value, 0, sizeof(value));
    memset(&head_of_last_line, 0, sizeof(head_of_last_line));
    memset(&len, 0, sizeof(len));
    memset(&exp, 0, sizeof(exp));
    memset(&sline2, 0, sizeof(sline2));
    memset(&sline_real_2, 0, sizeof(sline_real_2));
    memset(&sline_3, 0, sizeof(sline_3));
    memset(&value_4, 0, sizeof(value_4));
    memset(&p, 0, sizeof(p));
    memset(&sline_5, 0, sizeof(sline_5));
    memset(&sline2_6, 0, sizeof(sline2_6));
    memset(&sline_real_7, 0, sizeof(sline_real_7));
    memset(&prefix, 0, sizeof(prefix));
    memset(&sline_8, 0, sizeof(sline_8));
    memset(&value_9, 0, sizeof(value_9));
    memset(&p_10, 0, sizeof(p_10));
    memset(&sline_11, 0, sizeof(sline_11));
    memset(&sline2_12, 0, sizeof(sline2_12));
    memset(&sline_real_13, 0, sizeof(sline_real_13));
    memset(&sline_14, 0, sizeof(sline_14));
    memset(&value_15, 0, sizeof(value_15));
    memset(&p_16, 0, sizeof(p_16));
    memset(&sline_17, 0, sizeof(sline_17));
    memset(&sline2_18, 0, sizeof(sline2_18));
    memset(&sline_real_19, 0, sizeof(sline_real_19));
    memset(&sline_20, 0, sizeof(sline_20));
    memset(&value_21, 0, sizeof(value_21));
    memset(&size, 0, sizeof(size));
    memset(&p_22, 0, sizeof(p_22));
    memset(&sline_23, 0, sizeof(sline_23));
    memset(&len_24, 0, sizeof(len_24));
    memset(&sline2_25, 0, sizeof(sline2_25));
    memset(&sline_real_26, 0, sizeof(sline_real_26));
    memset(&sline_27, 0, sizeof(sline_27));
    memset(&buf, 0, sizeof(buf));
    memset(&global, 0, sizeof(global));
    memset(&ignore_case, 0, sizeof(ignore_case));
    memset(&obj, 0, sizeof(obj));
    memset(&params, 0, sizeof(params));
    memset(&method_block, 0, sizeof(method_block));
    memset(&method_block_sline, 0, sizeof(method_block_sline));
    memset(&method_generics_types, 0, sizeof(method_generics_types));
    memset(&node, 0, sizeof(node));
    memset(&sline_real_30, 0, sizeof(sline_real_30));
    memset(&sline_31, 0, sizeof(sline_31));
    memset(&value_32, 0, sizeof(value_32));
    memset(&p_33, 0, sizeof(p_33));
    memset(&sline_34, 0, sizeof(sline_34));
    memset(&len_35, 0, sizeof(len_35));
    memset(&sline2_36, 0, sizeof(sline2_36));
    memset(&global_37, 0, sizeof(global_37));
    memset(&ignore_case_38, 0, sizeof(ignore_case_38));
    memset(&obj_39, 0, sizeof(obj_39));
    memset(&params_40, 0, sizeof(params_40));
    memset(&method_block_41, 0, sizeof(method_block_41));
    memset(&method_block_sline_42, 0, sizeof(method_block_sline_42));
    memset(&method_generics_types_43, 0, sizeof(method_generics_types_43));
    memset(&node_44, 0, sizeof(node_44));
    memset(&sline_real_45, 0, sizeof(sline_real_45));
    memset(&prefix_46, 0, sizeof(prefix_46));
    memset(&c, 0, sizeof(c));
    memset(&n, 0, sizeof(n));
    memset(&n_47, 0, sizeof(n_47));
    memset(&n_49, 0, sizeof(n_49));
    memset(&sline_real_50, 0, sizeof(sline_real_50));
    memset(&c_51, 0, sizeof(c_51));
    memset(&n_52, 0, sizeof(n_52));
    memset(&n_53, 0, sizeof(n_53));
    memset(&n_56, 0, sizeof(n_56));
    memset(&sline_real_57, 0, sizeof(sline_real_57));
    memset(&c_58, 0, sizeof(c_58));
    memset(&quote, 0, sizeof(quote));
    memset(&n_59, 0, sizeof(n_59));
    memset(&n_60, 0, sizeof(n_60));
    memset(&n_63, 0, sizeof(n_63));
    memset(&p2, 0, sizeof(p2));
    memset(&size_64, 0, sizeof(size_64));
    memset(&sline_real_65, 0, sizeof(sline_real_65));
    memset(&sline_66, 0, sizeof(sline_66));
    memset(&value_67, 0, sizeof(value_67));
    memset(&p_68, 0, sizeof(p_68));
    memset(&sline_69, 0, sizeof(sline_69));
    memset(&sline2_70, 0, sizeof(sline2_70));
    memset(&len_71, 0, sizeof(len_71));
    memset(&wstr, 0, sizeof(wstr));
    memset(&str_72, 0, sizeof(str_72));
    memset(&sline_real_73, 0, sizeof(sline_real_73));
    memset(&sline_74, 0, sizeof(sline_74));
    memset(&exps_75, 0, sizeof(exps_75));
    memset(&value_76, 0, sizeof(value_76));
    memset(&p_77, 0, sizeof(p_77));
    memset(&sline_78, 0, sizeof(sline_78));
    memset(&len_79, 0, sizeof(len_79));
    memset(&exp_80, 0, sizeof(exp_80));
    memset(&sline2_81, 0, sizeof(sline2_81));
    memset(&sline_real_82, 0, sizeof(sline_real_82));
    memset(&p_83, 0, sizeof(p_83));
    memset(&no_comma, 0, sizeof(no_comma));
    memset(&node_84, 0, sizeof(node_84));
    memset(&p2_85, 0, sizeof(p2_85));
    memset(&first_element_source, 0, sizeof(first_element_source));
    memset(&list_elements, 0, sizeof(list_elements));
    memset(&map_keys, 0, sizeof(map_keys));
    memset(&map_elements, 0, sizeof(map_elements));
    memset(&no_comma_88, 0, sizeof(no_comma_88));
    memset(&node2, 0, sizeof(node2));
    memset(&no_comma_89, 0, sizeof(no_comma_89));
    memset(&node2_90, 0, sizeof(node2_90));
    memset(&node3, 0, sizeof(node3));
    memset(&no_comma_91, 0, sizeof(no_comma_91));
    memset(&node2_92, 0, sizeof(node2_92));
    memset(&sline_real_93, 0, sizeof(sline_real_93));
    memset(&node_94, 0, sizeof(node_94));
    # 1499 "51str3.nc"
    if(*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        # 7 "51str3.nc"
        sline_real=info->sline_real;
        # 8 "51str3.nc"
        info->sline_real=info->sline;
        # 9 "51str3.nc"
        info->p+=4;
        # 10 "51str3.nc"
        info->sline++;
        # 12 "51str3.nc"
        sline=info->sline;
        # 14 "51str3.nc"
        exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 14, 1, "struct list$1sNode$ph*"), "51str3.nc", 14, 7)), "51str3.nc", 14, 8);
        # 15 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 15, 9, "struct buffer* "), "51str3.nc", 15, 10)), "51str3.nc", 15, 11);
        # 17 "51str3.nc"
        head_of_last_line=((void*)0);
        # 147 "51str3.nc"
        while(1) {
            # 145 "51str3.nc"
            if(*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                # 22 "51str3.nc"
                info->p+=3;
                # 24 "51str3.nc"
                skip_spaces_and_lf(info);
                # 25 "51str3.nc"
                break;
            }
            else if(*info->p==37) {
                # 28 "51str3.nc"
                buffer_append_char(value,37);
                # 29 "51str3.nc"
                buffer_append_char(value,37);
                # 30 "51str3.nc"
                info->p++;
            }
            else if(*info->p==34) {
                # 33 "51str3.nc"
                buffer_append_char(value,92);
                # 34 "51str3.nc"
                buffer_append_char(value,34);
                # 35 "51str3.nc"
                info->p++;
            }
            else if(*info->p==92) {
                # 38 "51str3.nc"
                buffer_append_char(value,92);
                # 39 "51str3.nc"
                info->p++;
                # 124 "51str3.nc"
                if(xisdigit(*info->p)) {
                    # 42 "51str3.nc"
                    len=0;
                    # 48 "51str3.nc"
                    while(xisdigit(*info->p)&&len<3) {
                        # 44 "51str3.nc"
                        buffer_append_char(value,*info->p);
                        # 45 "51str3.nc"
                        info->p++;
                        # 46 "51str3.nc"
                        len++;
                    }
                }
                else if(*info->p==120||*info->p==88) {
                    # 50 "51str3.nc"
                    buffer_append_char(value,*info->p);
                    # 51 "51str3.nc"
                    info->p++;
                    # 57 "51str3.nc"
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        # 54 "51str3.nc"
                        buffer_append_char(value,*info->p);
                        # 55 "51str3.nc"
                        info->p++;
                    }
                }
                else if(*info->p==123) {
                    # 59 "51str3.nc"
                    info->p++;
                    # 61 "51str3.nc"
                    __right_value0 = (void*)0;
                    exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 61, 12);
                    # 63 "51str3.nc"
                    list$1sNode$ph_add(exps,(struct sNode*)come_increment_ref_count(exp, "51str3.nc", 63, 27));
                    # 69 "51str3.nc"
                    if(*info->p==125) {
                        # 66 "51str3.nc"
                        info->p++;
                    }
                    # 69 "51str3.nc"
                    buffer_append_str(value,"%s");
                    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 124, 28):(void*)0);
                }
                else {
                    # 123 "51str3.nc"
                    switch (                    *info->p) {
                        # 74 "51str3.nc"
                        case 48:
                        # 74 "51str3.nc"
                        buffer_append_char(value,*info->p);
                        # 75 "51str3.nc"
                        info->p++;
                        # 76 "51str3.nc"
                        break;
                        # 79 "51str3.nc"
                        case 110:
                        # 79 "51str3.nc"
                        buffer_append_char(value,*info->p);
                        # 80 "51str3.nc"
                        info->p++;
                        # 81 "51str3.nc"
                        break;
                        # 84 "51str3.nc"
                        case 116:
                        # 84 "51str3.nc"
                        buffer_append_char(value,*info->p);
                        # 85 "51str3.nc"
                        info->p++;
                        # 86 "51str3.nc"
                        break;
                        # 89 "51str3.nc"
                        case 114:
                        # 89 "51str3.nc"
                        buffer_append_char(value,*info->p);
                        # 90 "51str3.nc"
                        info->p++;
                        # 91 "51str3.nc"
                        break;
                        # 94 "51str3.nc"
                        case 118:
                        # 94 "51str3.nc"
                        buffer_append_char(value,*info->p);
                        # 95 "51str3.nc"
                        info->p++;
                        # 96 "51str3.nc"
                        break;
                        # 99 "51str3.nc"
                        case 102:
                        # 99 "51str3.nc"
                        buffer_append_char(value,*info->p);
                        # 100 "51str3.nc"
                        info->p++;
                        # 101 "51str3.nc"
                        break;
                        # 104 "51str3.nc"
                        case 97:
                        # 104 "51str3.nc"
                        buffer_append_char(value,*info->p);
                        # 105 "51str3.nc"
                        info->p++;
                        # 106 "51str3.nc"
                        break;
                        # 109 "51str3.nc"
                        case 98:
                        # 109 "51str3.nc"
                        buffer_append_char(value,*info->p);
                        # 110 "51str3.nc"
                        info->p++;
                        # 111 "51str3.nc"
                        break;
                        # 114 "51str3.nc"
                        case 92:
                        # 114 "51str3.nc"
                        buffer_append_char(value,*info->p);
                        # 115 "51str3.nc"
                        info->p++;
                        # 116 "51str3.nc"
                        break;
                        # 119 "51str3.nc"
                        default:
                        # 119 "51str3.nc"
                        buffer_append_char(value,*info->p);
                        # 120 "51str3.nc"
                        info->p++;
                        # 121 "51str3.nc"
                        break;
                    }
                }
            }
            else if(*info->p==0) {
                # 126 "51str3.nc"
                sline2=info->sline;
                # 127 "51str3.nc"
                info->sline=sline;
                # 128 "51str3.nc"
                err_msg(info,"close \" to make embbeded string value");
                # 129 "51str3.nc"
                exit(2);
            }
            else {
                # 144 "51str3.nc"
                if(*info->p==10) {
                    # 133 "51str3.nc"
                    buffer_append_char(value,92);
                    # 134 "51str3.nc"
                    buffer_append_char(value,110);
                    # 135 "51str3.nc"
                    info->p++;
                    # 136 "51str3.nc"
                    info->sline++;
                    # 138 "51str3.nc"
                    head_of_last_line=info->p;
                }
                else {
                    # 141 "51str3.nc"
                    buffer_append_char(value,*info->p);
                    # 142 "51str3.nc"
                    info->p++;
                }
            }
        }
        # 147 "51str3.nc"
        skip_spaces_and_lf(info);
        # 149 "51str3.nc"
        info->sline_real=sline_real;
        # 150 "51str3.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1=create_sstring_node((char* )come_increment_ref_count(buffer_to_string(value), "51str3.nc", 150, 29),(struct list$1sNode$ph*)come_increment_ref_count(exps, "51str3.nc", 150, 30),sline,info))), "51str3.nc", 150, 31);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 150, 32);
        come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 150, 33);
        ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 150, 34):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 150, 35):(void*)0);
        return __result_obj__0;
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 36);
        come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 37);
    }
    else if(*info->p==117&&*(info->p+1)==56&&*(info->p+2)==34) {
        # 154 "51str3.nc"
        sline_real_2=info->sline_real;
        # 155 "51str3.nc"
        info->sline_real=info->sline;
        # 157 "51str3.nc"
        info->p+=3;
        # 159 "51str3.nc"
        sline_3=info->sline;
        # 161 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_4=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 161, 38, "struct buffer* "), "51str3.nc", 161, 39)), "51str3.nc", 161, 40);
        # 211 "51str3.nc"
        while(1) {
            # 209 "51str3.nc"
            if(*info->p==34) {
                # 165 "51str3.nc"
                info->p++;
                # 167 "51str3.nc"
                p=info->p;
                # 168 "51str3.nc"
                sline_5=info->sline;
                # 170 "51str3.nc"
                skip_spaces_and_lf(info);
                # 174 "51str3.nc"
                parse_sharp_v5(info);
                # 182 "51str3.nc"
                if(*info->p==117&&*(info->p+1)==56&&*(info->p+2)==34) {
                    # 175 "51str3.nc"
                    info->p+=3;
                }
                else {
                    # 178 "51str3.nc"
                    info->p=p;
                    # 179 "51str3.nc"
                    info->sline=sline_5;
                    # 180 "51str3.nc"
                    break;
                }
            }
            else if(*info->p==92) {
                # 184 "51str3.nc"
                buffer_append_char(value_4,92);
                # 185 "51str3.nc"
                info->p++;
                # 195 "51str3.nc"
                if(*info->p==34) {
                    # 188 "51str3.nc"
                    buffer_append_char(value_4,34);
                    # 189 "51str3.nc"
                    info->p++;
                }
                else {
                    # 192 "51str3.nc"
                    buffer_append_char(value_4,*info->p);
                    # 193 "51str3.nc"
                    info->p++;
                }
            }
            else if(*info->p==0) {
                # 197 "51str3.nc"
                sline2_6=info->sline;
                # 198 "51str3.nc"
                info->sline=sline_3;
                # 199 "51str3.nc"
                err_msg(info,"close \" to make c string value");
                # 200 "51str3.nc"
                info->sline=sline2_6;
                # 201 "51str3.nc"
                exit(2);
            }
            else {
                # 206 "51str3.nc"
                if(*info->p==10) {
                    # 204 "51str3.nc"
                    info->sline++;
                }
                # 206 "51str3.nc"
                buffer_append_char(value_4,*info->p);
                # 207 "51str3.nc"
                info->p++;
            }
        }
        # 211 "51str3.nc"
        skip_spaces_and_lf(info);
        # 213 "51str3.nc"
        info->sline_real=sline_real_2;
        # 214 "51str3.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=create_prefixed_string_node((char* )come_increment_ref_count(buffer_to_string(value_4), "51str3.nc", 214, 41),(char* )come_increment_ref_count(xsprintf("u8"), "51str3.nc", 214, 42),sline_3,info))), "51str3.nc", 214, 43);
        come_call_finalizer(buffer_finalize, value_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 214, 44);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 214, 45):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 214, 46):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 47);
    }
    else if((*info->p==117||*info->p==85)&&*(info->p+1)==34) {
        # 218 "51str3.nc"
        sline_real_7=info->sline_real;
        # 219 "51str3.nc"
        info->sline_real=info->sline;
        # 221 "51str3.nc"
        prefix=*info->p;
        # 222 "51str3.nc"
        info->p+=2;
        # 224 "51str3.nc"
        sline_8=info->sline;
        # 226 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_9=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 226, 48, "struct buffer* "), "51str3.nc", 226, 49)), "51str3.nc", 226, 50);
        # 276 "51str3.nc"
        while(1) {
            # 274 "51str3.nc"
            if(*info->p==34) {
                # 230 "51str3.nc"
                info->p++;
                # 232 "51str3.nc"
                p_10=info->p;
                # 233 "51str3.nc"
                sline_11=info->sline;
                # 235 "51str3.nc"
                skip_spaces_and_lf(info);
                # 239 "51str3.nc"
                parse_sharp_v5(info);
                # 247 "51str3.nc"
                if(*info->p==prefix&&*(info->p+1)==34) {
                    # 240 "51str3.nc"
                    info->p+=2;
                }
                else {
                    # 243 "51str3.nc"
                    info->p=p_10;
                    # 244 "51str3.nc"
                    info->sline=sline_11;
                    # 245 "51str3.nc"
                    break;
                }
            }
            else if(*info->p==92) {
                # 249 "51str3.nc"
                buffer_append_char(value_9,92);
                # 250 "51str3.nc"
                info->p++;
                # 260 "51str3.nc"
                if(*info->p==34) {
                    # 253 "51str3.nc"
                    buffer_append_char(value_9,34);
                    # 254 "51str3.nc"
                    info->p++;
                }
                else {
                    # 257 "51str3.nc"
                    buffer_append_char(value_9,*info->p);
                    # 258 "51str3.nc"
                    info->p++;
                }
            }
            else if(*info->p==0) {
                # 262 "51str3.nc"
                sline2_12=info->sline;
                # 263 "51str3.nc"
                info->sline=sline_8;
                # 264 "51str3.nc"
                err_msg(info,"close \" to make c string value");
                # 265 "51str3.nc"
                info->sline=sline2_12;
                # 266 "51str3.nc"
                exit(2);
            }
            else {
                # 271 "51str3.nc"
                if(*info->p==10) {
                    # 269 "51str3.nc"
                    info->sline++;
                }
                # 271 "51str3.nc"
                buffer_append_char(value_9,*info->p);
                # 272 "51str3.nc"
                info->p++;
            }
        }
        # 276 "51str3.nc"
        skip_spaces_and_lf(info);
        # 278 "51str3.nc"
        info->sline_real=sline_real_7;
        # 279 "51str3.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=create_prefixed_string_node((char* )come_increment_ref_count(buffer_to_string(value_9), "51str3.nc", 279, 51),(char* )come_increment_ref_count(xsprintf("%c",prefix), "51str3.nc", 279, 52),sline_8,info))), "51str3.nc", 279, 53);
        come_call_finalizer(buffer_finalize, value_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 279, 54);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 279, 55):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 279, 56):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 57);
    }
    else if(*info->p==34) {
        # 283 "51str3.nc"
        sline_real_13=info->sline_real;
        # 284 "51str3.nc"
        info->sline_real=info->sline;
        # 285 "51str3.nc"
        info->p++;
        # 287 "51str3.nc"
        sline_14=info->sline;
        # 289 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_15=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 289, 58, "struct buffer* "), "51str3.nc", 289, 59)), "51str3.nc", 289, 60);
        # 339 "51str3.nc"
        while(1) {
            # 337 "51str3.nc"
            if(*info->p==34) {
                # 293 "51str3.nc"
                info->p++;
                # 295 "51str3.nc"
                p_16=info->p;
                # 296 "51str3.nc"
                sline_17=info->sline;
                # 298 "51str3.nc"
                skip_spaces_and_lf(info);
                # 302 "51str3.nc"
                parse_sharp_v5(info);
                # 310 "51str3.nc"
                if(*info->p==34) {
                    # 303 "51str3.nc"
                    info->p++;
                }
                else {
                    # 306 "51str3.nc"
                    info->p=p_16;
                    # 307 "51str3.nc"
                    info->sline=sline_17;
                    # 308 "51str3.nc"
                    break;
                }
            }
            else if(*info->p==92) {
                # 312 "51str3.nc"
                buffer_append_char(value_15,92);
                # 313 "51str3.nc"
                info->p++;
                # 323 "51str3.nc"
                if(*info->p==34) {
                    # 316 "51str3.nc"
                    buffer_append_char(value_15,34);
                    # 317 "51str3.nc"
                    info->p++;
                }
                else {
                    # 320 "51str3.nc"
                    buffer_append_char(value_15,*info->p);
                    # 321 "51str3.nc"
                    info->p++;
                }
            }
            else if(*info->p==0) {
                # 325 "51str3.nc"
                sline2_18=info->sline;
                # 326 "51str3.nc"
                info->sline=sline_14;
                # 327 "51str3.nc"
                err_msg(info,"close \" to make c string value");
                # 328 "51str3.nc"
                info->sline=sline2_18;
                # 329 "51str3.nc"
                exit(2);
            }
            else {
                # 334 "51str3.nc"
                if(*info->p==10) {
                    # 332 "51str3.nc"
                    info->sline++;
                }
                # 334 "51str3.nc"
                buffer_append_char(value_15,*info->p);
                # 335 "51str3.nc"
                info->p++;
            }
        }
        # 339 "51str3.nc"
        skip_spaces_and_lf(info);
        # 341 "51str3.nc"
        info->sline_real=sline_real_13;
        # 342 "51str3.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1=create_str_node((char* )come_increment_ref_count(buffer_to_string(value_15), "51str3.nc", 342, 61),sline_14,info))), "51str3.nc", 342, 62);
        come_call_finalizer(buffer_finalize, value_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 342, 63);
        ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 342, 64):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 342, 65):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 66);
    }
    else if((*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        # 346 "51str3.nc"
        sline_real_19=info->sline_real;
        # 347 "51str3.nc"
        info->sline_real=info->sline;
        # 348 "51str3.nc"
        info->p+=2;
        # 350 "51str3.nc"
        sline_20=info->sline;
        # 352 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_21=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 352, 67, "struct buffer* "), "51str3.nc", 352, 68)), "51str3.nc", 352, 69);
        # 354 "51str3.nc"
        size=0;
        # 476 "51str3.nc"
        while(1) {
            # 474 "51str3.nc"
            if(*info->p==34) {
                # 358 "51str3.nc"
                info->p++;
                # 360 "51str3.nc"
                p_22=info->p;
                # 361 "51str3.nc"
                sline_23=info->sline;
                # 363 "51str3.nc"
                skip_spaces_and_lf(info);
                # 373 "51str3.nc"
                if(*info->p==34) {
                    # 366 "51str3.nc"
                    info->p++;
                }
                else {
                    # 369 "51str3.nc"
                    info->p=p_22;
                    # 370 "51str3.nc"
                    info->sline=sline_23;
                    # 371 "51str3.nc"
                    break;
                }
            }
            else if(*info->p==92) {
                # 375 "51str3.nc"
                buffer_append_char(value_21,92);
                # 376 "51str3.nc"
                info->p++;
                # 460 "51str3.nc"
                if(xisdigit(*info->p)) {
                    # 379 "51str3.nc"
                    len_24=0;
                    # 385 "51str3.nc"
                    while(xisdigit(*info->p)&&len_24<3) {
                        # 381 "51str3.nc"
                        buffer_append_char(value_21,*info->p);
                        # 382 "51str3.nc"
                        info->p++;
                        # 383 "51str3.nc"
                        len_24++;
                    }
                    # 385 "51str3.nc"
                    size++;
                }
                else if(*info->p==120||*info->p==88) {
                    # 388 "51str3.nc"
                    buffer_append_char(value_21,*info->p);
                    # 389 "51str3.nc"
                    info->p++;
                    # 395 "51str3.nc"
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        # 392 "51str3.nc"
                        buffer_append_char(value_21,*info->p);
                        # 393 "51str3.nc"
                        info->p++;
                    }
                    # 395 "51str3.nc"
                    size++;
                }
                else {
                    # 459 "51str3.nc"
                    switch (                    *info->p) {
                        # 400 "51str3.nc"
                        case 48:
                        # 400 "51str3.nc"
                        buffer_append_char(value_21,*info->p);
                        # 401 "51str3.nc"
                        info->p++;
                        # 402 "51str3.nc"
                        size++;
                        # 403 "51str3.nc"
                        break;
                        # 406 "51str3.nc"
                        case 110:
                        # 406 "51str3.nc"
                        buffer_append_char(value_21,*info->p);
                        # 407 "51str3.nc"
                        info->p++;
                        # 408 "51str3.nc"
                        size++;
                        # 409 "51str3.nc"
                        break;
                        # 412 "51str3.nc"
                        case 116:
                        # 412 "51str3.nc"
                        buffer_append_char(value_21,*info->p);
                        # 413 "51str3.nc"
                        info->p++;
                        # 414 "51str3.nc"
                        size++;
                        # 415 "51str3.nc"
                        break;
                        # 418 "51str3.nc"
                        case 114:
                        # 418 "51str3.nc"
                        buffer_append_char(value_21,*info->p);
                        # 419 "51str3.nc"
                        info->p++;
                        # 420 "51str3.nc"
                        size++;
                        # 421 "51str3.nc"
                        break;
                        # 424 "51str3.nc"
                        case 118:
                        # 424 "51str3.nc"
                        buffer_append_char(value_21,*info->p);
                        # 425 "51str3.nc"
                        info->p++;
                        # 426 "51str3.nc"
                        size++;
                        # 427 "51str3.nc"
                        break;
                        # 430 "51str3.nc"
                        case 102:
                        # 430 "51str3.nc"
                        buffer_append_char(value_21,*info->p);
                        # 431 "51str3.nc"
                        info->p++;
                        # 432 "51str3.nc"
                        size++;
                        # 433 "51str3.nc"
                        break;
                        # 436 "51str3.nc"
                        case 97:
                        # 436 "51str3.nc"
                        buffer_append_char(value_21,*info->p);
                        # 437 "51str3.nc"
                        info->p++;
                        # 438 "51str3.nc"
                        size++;
                        # 439 "51str3.nc"
                        break;
                        # 442 "51str3.nc"
                        case 98:
                        # 442 "51str3.nc"
                        buffer_append_char(value_21,*info->p);
                        # 443 "51str3.nc"
                        info->p++;
                        # 444 "51str3.nc"
                        size++;
                        # 445 "51str3.nc"
                        break;
                        # 448 "51str3.nc"
                        case 92:
                        # 448 "51str3.nc"
                        buffer_append_char(value_21,*info->p);
                        # 449 "51str3.nc"
                        info->p++;
                        # 450 "51str3.nc"
                        size++;
                        # 451 "51str3.nc"
                        break;
                        # 454 "51str3.nc"
                        default:
                        # 454 "51str3.nc"
                        buffer_append_char(value_21,*info->p);
                        # 455 "51str3.nc"
                        info->p++;
                        # 456 "51str3.nc"
                        size++;
                        # 457 "51str3.nc"
                        break;
                    }
                }
            }
            else if(*info->p==0) {
                # 462 "51str3.nc"
                sline2_25=info->sline;
                # 463 "51str3.nc"
                info->sline=sline_20;
                # 464 "51str3.nc"
                err_msg(info,"close \" to make embbeded string value");
                # 465 "51str3.nc"
                exit(2);
            }
            else {
                # 470 "51str3.nc"
                if(*info->p==10) {
                    # 468 "51str3.nc"
                    info->sline++;
                }
                # 470 "51str3.nc"
                buffer_append_char(value_21,*info->p);
                # 471 "51str3.nc"
                info->p++;
                # 472 "51str3.nc"
                size++;
            }
        }
        # 476 "51str3.nc"
        skip_spaces_and_lf(info);
        # 478 "51str3.nc"
        info->sline_real=sline_real_19;
        # 479 "51str3.nc"
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_buffer_node((struct buffer* )come_increment_ref_count(value_21, "51str3.nc", 479, 70),size,info))), "51str3.nc", 479, 71);
        come_call_finalizer(buffer_finalize, value_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 479, 72);
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 479, 73):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 479, 74):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 75);
    }
    else if(*info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42) {
        # 482 "51str3.nc"
        sline_real_26=info->sline_real;
        # 483 "51str3.nc"
        info->sline_real=info->sline;
        # 484 "51str3.nc"
        info->p++;
        # 486 "51str3.nc"
        sline_27=info->sline;
        # 488 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 488, 76, "struct buffer* "), "51str3.nc", 488, 77)), "51str3.nc", 488, 78);
        # 509 "51str3.nc"
        while((_Bool)1) {
            # 507 "51str3.nc"
            if(*info->p==92&&*(info->p+1)==47) {
                # 491 "51str3.nc"
                info->p++;
                # 492 "51str3.nc"
                buffer_append_char(buf,*info->p);
                # 493 "51str3.nc"
                info->p++;
            }
            else if(*info->p==47) {
                # 496 "51str3.nc"
                info->p++;
                # 497 "51str3.nc"
                break;
            }
            else if(*info->p==0) {
                # 500 "51str3.nc"
                err_msg(info,"require closing / for regex");
                # 501 "51str3.nc"
                exit(5);
            }
            else {
                # 504 "51str3.nc"
                buffer_append_char(buf,*info->p);
                # 505 "51str3.nc"
                info->p++;
            }
        }
        # 509 "51str3.nc"
        global=(_Bool)0;
        # 510 "51str3.nc"
        ignore_case=(_Bool)0;
        # 525 "51str3.nc"
        while(*info->p==103||*info->p==105) {
            # 523 "51str3.nc"
            if(*info->p==103) {
                # 513 "51str3.nc"
                info->p++;
                # 514 "51str3.nc"
                global=(_Bool)1;
            }
            else if(*info->p==105) {
                # 517 "51str3.nc"
                info->p++;
                # 518 "51str3.nc"
                ignore_case=(_Bool)1;
            }
            else {
                # 521 "51str3.nc"
                break;
            }
        }
        # 525 "51str3.nc"
        skip_spaces_and_lf(info);
        # 527 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        obj=(struct sNode*)come_increment_ref_count(create_str_node((char* )come_increment_ref_count(buffer_to_string(buf), "51str3.nc", 527, 79),sline_27,info), "51str3.nc", 527, 80);
        # 529 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "51str3.nc", 529, 81, "struct list$1tuple2$2char$phsNode$ph$ph*"), "51str3.nc", 529, 89)), "51str3.nc", 529, 90);
        # 531 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 531, 105, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 3, 115),(char*)come_increment_ref_count(xsprintf("self"), "51str3.nc", 3, 116),(struct sNode*)come_increment_ref_count(obj, "51str3.nc", 3, 117)), "51str3.nc", 531, 118));
        # 532 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 532, 121, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 532, 122),(char*)come_increment_ref_count(xsprintf("ignore_case"), "51str3.nc", 532, 123),(struct sNode*)come_increment_ref_count(((ignore_case)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1), "51str3.nc", 532, 119),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 532, 120),info))))), "51str3.nc", 532, 124)), "51str3.nc", 532, 125));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 532, 126):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 532, 127):(void*)0);
        # 533 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 533, 129, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 533, 130),(char*)come_increment_ref_count(xsprintf("multiline"), "51str3.nc", 533, 131),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 533, 128),info), "51str3.nc", 533, 132)), "51str3.nc", 533, 133));
        # 534 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        __right_value5 = (void*)0;
        __right_value6 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 534, 136, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 534, 137),(char*)come_increment_ref_count(xsprintf("global"), "51str3.nc", 534, 138),(struct sNode*)come_increment_ref_count(((global)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1), "51str3.nc", 534, 134),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 534, 135),info))))), "51str3.nc", 534, 139)), "51str3.nc", 534, 140));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 534, 141):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 534, 142):(void*)0);
        # 535 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 535, 144, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 535, 145),(char*)come_increment_ref_count(xsprintf("extended"), "51str3.nc", 535, 146),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 535, 143),info), "51str3.nc", 535, 147)), "51str3.nc", 535, 148));
        # 536 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 536, 150, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 536, 151),(char*)come_increment_ref_count(xsprintf("dotall"), "51str3.nc", 536, 152),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 536, 149),info), "51str3.nc", 536, 153)), "51str3.nc", 536, 154));
        # 537 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 537, 156, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 537, 157),(char*)come_increment_ref_count(xsprintf("anchored"), "51str3.nc", 537, 158),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 537, 155),info), "51str3.nc", 537, 159)), "51str3.nc", 537, 160));
        # 538 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 538, 162, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 538, 163),(char*)come_increment_ref_count(xsprintf("dollar_endonly"), "51str3.nc", 538, 164),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 538, 161),info), "51str3.nc", 538, 165)), "51str3.nc", 538, 166));
        # 539 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 539, 168, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 539, 169),(char*)come_increment_ref_count(xsprintf("ungreedy"), "51str3.nc", 539, 170),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 539, 167),info), "51str3.nc", 539, 171)), "51str3.nc", 539, 172));
        # 541 "51str3.nc"
        method_block=((void*)0);
        # 543 "51str3.nc"
        method_block_sline=info->sline;
        # 545 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "51str3.nc", 545, 173, "struct list$1sType$ph*"), "51str3.nc", 545, 207)), "51str3.nc", 545, 208);
        # 547 "51str3.nc"
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj, "51str3.nc", 547, 209),params,method_block,method_block_sline,method_generics_types,info,(_Bool)0), "51str3.nc", 547, 210);
        # 549 "51str3.nc"
        info->sline_real=sline_real_26;
        # 550 "51str3.nc"
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "51str3.nc", 550, 211);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 550, 212);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 550, 213):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 550, 214);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 550, 215);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 550, 216):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 550, 217):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 218);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1499, 219):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 220);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 221);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1499, 222):(void*)0);
    }
    else if((*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        # 553 "51str3.nc"
        sline_real_30=info->sline_real;
        # 554 "51str3.nc"
        info->sline_real=info->sline;
        # 555 "51str3.nc"
        info->p+=2;
        # 557 "51str3.nc"
        sline_31=info->sline;
        # 559 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_32=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 559, 223, "struct buffer* "), "51str3.nc", 559, 224)), "51str3.nc", 559, 225);
        # 667 "51str3.nc"
        while(1) {
            # 665 "51str3.nc"
            if(*info->p==34) {
                # 562 "51str3.nc"
                info->p++;
                # 564 "51str3.nc"
                p_33=info->p;
                # 565 "51str3.nc"
                sline_34=info->sline;
                # 567 "51str3.nc"
                skip_spaces_and_lf(info);
                # 577 "51str3.nc"
                if(*info->p==34) {
                    # 570 "51str3.nc"
                    info->p++;
                }
                else {
                    # 573 "51str3.nc"
                    info->p=p_33;
                    # 574 "51str3.nc"
                    info->sline=sline_34;
                    # 575 "51str3.nc"
                    break;
                }
            }
            else if(*info->p==92) {
                # 579 "51str3.nc"
                buffer_append_char(value_32,92);
                # 580 "51str3.nc"
                info->p++;
                # 652 "51str3.nc"
                if(xisdigit(*info->p)) {
                    # 583 "51str3.nc"
                    len_35=0;
                    # 589 "51str3.nc"
                    while(xisdigit(*info->p)&&len_35<3) {
                        # 585 "51str3.nc"
                        buffer_append_char(value_32,*info->p);
                        # 586 "51str3.nc"
                        info->p++;
                        # 587 "51str3.nc"
                        len_35++;
                    }
                }
                else if(*info->p==120||*info->p==88) {
                    # 591 "51str3.nc"
                    buffer_append_char(value_32,*info->p);
                    # 592 "51str3.nc"
                    info->p++;
                    # 598 "51str3.nc"
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        # 595 "51str3.nc"
                        buffer_append_char(value_32,*info->p);
                        # 596 "51str3.nc"
                        info->p++;
                    }
                }
                else {
                    # 651 "51str3.nc"
                    switch (                    *info->p) {
                        # 602 "51str3.nc"
                        case 48:
                        # 602 "51str3.nc"
                        buffer_append_char(value_32,*info->p);
                        # 603 "51str3.nc"
                        info->p++;
                        # 604 "51str3.nc"
                        break;
                        # 607 "51str3.nc"
                        case 110:
                        # 607 "51str3.nc"
                        buffer_append_char(value_32,*info->p);
                        # 608 "51str3.nc"
                        info->p++;
                        # 609 "51str3.nc"
                        break;
                        # 612 "51str3.nc"
                        case 116:
                        # 612 "51str3.nc"
                        buffer_append_char(value_32,*info->p);
                        # 613 "51str3.nc"
                        info->p++;
                        # 614 "51str3.nc"
                        break;
                        # 617 "51str3.nc"
                        case 114:
                        # 617 "51str3.nc"
                        buffer_append_char(value_32,*info->p);
                        # 618 "51str3.nc"
                        info->p++;
                        # 619 "51str3.nc"
                        break;
                        # 622 "51str3.nc"
                        case 118:
                        # 622 "51str3.nc"
                        buffer_append_char(value_32,*info->p);
                        # 623 "51str3.nc"
                        info->p++;
                        # 624 "51str3.nc"
                        break;
                        # 627 "51str3.nc"
                        case 102:
                        # 627 "51str3.nc"
                        buffer_append_char(value_32,*info->p);
                        # 628 "51str3.nc"
                        info->p++;
                        # 629 "51str3.nc"
                        break;
                        # 632 "51str3.nc"
                        case 97:
                        # 632 "51str3.nc"
                        buffer_append_char(value_32,*info->p);
                        # 633 "51str3.nc"
                        info->p++;
                        # 634 "51str3.nc"
                        break;
                        # 637 "51str3.nc"
                        case 98:
                        # 637 "51str3.nc"
                        buffer_append_char(value_32,*info->p);
                        # 638 "51str3.nc"
                        info->p++;
                        # 639 "51str3.nc"
                        break;
                        # 642 "51str3.nc"
                        case 92:
                        # 642 "51str3.nc"
                        buffer_append_char(value_32,*info->p);
                        # 643 "51str3.nc"
                        info->p++;
                        # 644 "51str3.nc"
                        break;
                        # 647 "51str3.nc"
                        default:
                        # 647 "51str3.nc"
                        buffer_append_char(value_32,*info->p);
                        # 648 "51str3.nc"
                        info->p++;
                        # 649 "51str3.nc"
                        break;
                    }
                }
            }
            else if(*info->p==0) {
                # 654 "51str3.nc"
                sline2_36=info->sline;
                # 655 "51str3.nc"
                info->sline=sline_31;
                # 656 "51str3.nc"
                err_msg(info,"close \" to make embbeded string value");
                # 657 "51str3.nc"
                exit(2);
            }
            else {
                # 662 "51str3.nc"
                if(*info->p==10) {
                    # 660 "51str3.nc"
                    info->sline++;
                }
                # 662 "51str3.nc"
                buffer_append_char(value_32,*info->p);
                # 663 "51str3.nc"
                info->p++;
            }
        }
        # 667 "51str3.nc"
        global_37=(_Bool)0;
        # 668 "51str3.nc"
        ignore_case_38=(_Bool)0;
        # 683 "51str3.nc"
        while(*info->p==103||*info->p==105) {
            # 681 "51str3.nc"
            if(*info->p==103) {
                # 671 "51str3.nc"
                info->p++;
                # 672 "51str3.nc"
                global_37=(_Bool)1;
            }
            else if(*info->p==105) {
                # 675 "51str3.nc"
                info->p++;
                # 676 "51str3.nc"
                ignore_case_38=(_Bool)1;
            }
            else {
                # 679 "51str3.nc"
                break;
            }
        }
        # 683 "51str3.nc"
        skip_spaces_and_lf(info);
        # 685 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        obj_39=(struct sNode*)come_increment_ref_count(create_str_node((char* )come_increment_ref_count(buffer_to_string(value_32), "51str3.nc", 685, 226),sline_31,info), "51str3.nc", 685, 227);
        # 687 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        params_40=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "51str3.nc", 687, 228, "struct list$1tuple2$2char$phsNode$ph$ph*"), "51str3.nc", 687, 229)), "51str3.nc", 687, 230);
        # 689 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 689, 231, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 689, 232),(char*)come_increment_ref_count(xsprintf("self"), "51str3.nc", 689, 233),(struct sNode*)come_increment_ref_count(obj_39, "51str3.nc", 689, 234)), "51str3.nc", 689, 235));
        # 690 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        __right_value5 = (void*)0;
        __right_value6 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 690, 238, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 690, 239),(char*)come_increment_ref_count(xsprintf("ignore_case"), "51str3.nc", 690, 240),(struct sNode*)come_increment_ref_count(((ignore_case_38)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1), "51str3.nc", 690, 236),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 690, 237),info))))), "51str3.nc", 690, 241)), "51str3.nc", 690, 242));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 690, 243):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 690, 244):(void*)0);
        # 691 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 691, 246, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 691, 247),(char*)come_increment_ref_count(xsprintf("multiline"), "51str3.nc", 691, 248),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 691, 245),info), "51str3.nc", 691, 249)), "51str3.nc", 691, 250));
        # 692 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        __right_value5 = (void*)0;
        __right_value6 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 692, 253, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 692, 254),(char*)come_increment_ref_count(xsprintf("global"), "51str3.nc", 692, 255),(struct sNode*)come_increment_ref_count(((global_37)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1), "51str3.nc", 692, 251),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 692, 252),info))))), "51str3.nc", 692, 256)), "51str3.nc", 692, 257));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 692, 258):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 692, 259):(void*)0);
        # 693 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 693, 261, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 693, 262),(char*)come_increment_ref_count(xsprintf("extended"), "51str3.nc", 693, 263),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 693, 260),info), "51str3.nc", 693, 264)), "51str3.nc", 693, 265));
        # 694 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 694, 267, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 694, 268),(char*)come_increment_ref_count(xsprintf("dotall"), "51str3.nc", 694, 269),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 694, 266),info), "51str3.nc", 694, 270)), "51str3.nc", 694, 271));
        # 695 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 695, 273, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 695, 274),(char*)come_increment_ref_count(xsprintf("anchored"), "51str3.nc", 695, 275),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 695, 272),info), "51str3.nc", 695, 276)), "51str3.nc", 695, 277));
        # 696 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 696, 279, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 696, 280),(char*)come_increment_ref_count(xsprintf("dollar_endonly"), "51str3.nc", 696, 281),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 696, 278),info), "51str3.nc", 696, 282)), "51str3.nc", 696, 283));
        # 697 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_40,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 697, 285, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 697, 286),(char*)come_increment_ref_count(xsprintf("ungreedy"), "51str3.nc", 697, 287),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "51str3.nc", 697, 284),info), "51str3.nc", 697, 288)), "51str3.nc", 697, 289));
        # 699 "51str3.nc"
        method_block_41=((void*)0);
        # 701 "51str3.nc"
        method_block_sline_42=info->sline;
        # 703 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_generics_types_43=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "51str3.nc", 703, 290, "struct list$1sType$ph*"), "51str3.nc", 703, 291)), "51str3.nc", 703, 292);
        # 705 "51str3.nc"
        __right_value0 = (void*)0;
        node_44=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_39, "51str3.nc", 705, 293),params_40,method_block_41,method_block_sline_42,method_generics_types_43,info,(_Bool)0), "51str3.nc", 705, 294);
        # 707 "51str3.nc"
        info->sline_real=sline_real_30;
        # 708 "51str3.nc"
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_44, "51str3.nc", 708, 295);
        come_call_finalizer(buffer_finalize, value_32, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 708, 296);
        ((obj_39) ? obj_39 = come_decrement_ref_count(obj_39, ((struct sNode*)obj_39)->finalize, ((struct sNode*)obj_39)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 708, 297):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_40, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 708, 298);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 708, 299);
        ((node_44) ? node_44 = come_decrement_ref_count(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 708, 300):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 708, 301):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_32, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 302);
        ((obj_39) ? obj_39 = come_decrement_ref_count(obj_39, ((struct sNode*)obj_39)->finalize, ((struct sNode*)obj_39)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1499, 303):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_40, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 304);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 305);
        ((node_44) ? node_44 = come_decrement_ref_count(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1499, 306):(void*)0);
    }
    else if((*info->p==117||*info->p==85)&&*(info->p+1)==39) {
        # 711 "51str3.nc"
        sline_real_45=info->sline_real;
        # 712 "51str3.nc"
        info->sline_real=info->sline;
        # 714 "51str3.nc"
        prefix_46=*info->p;
        # 715 "51str3.nc"
        info->p+=2;
        # 717 "51str3.nc"
        # 821 "51str3.nc"
        if(*info->p==92) {
            # 720 "51str3.nc"
            info->p++;
            # 815 "51str3.nc"
            if(xisdigit(*info->p)) {
                # 723 "51str3.nc"
                n=0;
                # 729 "51str3.nc"
                while(xisdigit(*info->p)) {
                    # 725 "51str3.nc"
                    n=n*8+*info->p-48;
                    # 726 "51str3.nc"
                    info->p++;
                }
                # 729 "51str3.nc"
                c=n;
            }
            else {
                # 814 "51str3.nc"
                switch (                *info->p) {
                    # 734 "51str3.nc"
                    case 110:
                    # 734 "51str3.nc"
                    c=10;
                    # 735 "51str3.nc"
                    info->p++;
                    # 736 "51str3.nc"
                    break;
                    # 739 "51str3.nc"
                    case 116:
                    # 739 "51str3.nc"
                    c=9;
                    # 740 "51str3.nc"
                    info->p++;
                    # 741 "51str3.nc"
                    break;
                    # 744 "51str3.nc"
                    case 114:
                    # 744 "51str3.nc"
                    c=13;
                    # 745 "51str3.nc"
                    info->p++;
                    # 746 "51str3.nc"
                    break;
                    # 749 "51str3.nc"
                    case 97:
                    # 749 "51str3.nc"
                    c=7;
                    # 750 "51str3.nc"
                    info->p++;
                    # 751 "51str3.nc"
                    break;
                    # 754 "51str3.nc"
                    case 102:
                    # 754 "51str3.nc"
                    c=12;
                    # 755 "51str3.nc"
                    info->p++;
                    # 756 "51str3.nc"
                    break;
                    # 759 "51str3.nc"
                    case 118:
                    # 759 "51str3.nc"
                    c=11;
                    # 760 "51str3.nc"
                    info->p++;
                    # 761 "51str3.nc"
                    break;
                    # 764 "51str3.nc"
                    case 98:
                    # 764 "51str3.nc"
                    c=8;
                    # 765 "51str3.nc"
                    info->p++;
                    # 766 "51str3.nc"
                    break;
                    # 769 "51str3.nc"
                    case 92:
                    # 769 "51str3.nc"
                    c=92;
                    # 770 "51str3.nc"
                    info->p++;
                    # 771 "51str3.nc"
                    break;
                    # 774 "51str3.nc"
                    case 48:
                    # 774 "51str3.nc"
                    c=0;
                    # 775 "51str3.nc"
                    info->p++;
                    # 787 "51str3.nc"
                    if(xisdigit(*info->p)) {
                        # 778 "51str3.nc"
                        n_47=0;
                        # 785 "51str3.nc"
                        while(xisdigit(*info->p)) {
                            # 780 "51str3.nc"
                            n_47=n_47*8+*info->p-48;
                            # 781 "51str3.nc"
                            info->p++;
                            # 782 "51str3.nc"
                            skip_spaces_and_lf(info);
                        }
                        # 785 "51str3.nc"
                        c=n_47;
                    }
                    # 787 "51str3.nc"
                    break;
                    # 790 "51str3.nc"
                    case 120:
                    # 790 "51str3.nc"
                    case 88:
                    # 807 "51str3.nc"
                    {
                        # 791 "51str3.nc"
                        info->p++;
                        # 793 "51str3.nc"
                        char buf_48[128];
                        memset(&buf_48, 0, sizeof(buf_48));
                        # 794 "51str3.nc"
                        strncpy(buf_48,"0x",128);
                        # 803 "51str3.nc"
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            # 796 "51str3.nc"
                            char buf2[2];
                            memset(&buf2, 0, sizeof(buf2));
                            # 797 "51str3.nc"
                            buf2[0]=*info->p;
                            # 798 "51str3.nc"
                            buf2[1]=0;
                            # 799 "51str3.nc"
                            info->p++;
                            # 800 "51str3.nc"
                            strncat(buf_48,buf2,128);
                        }
                        # 803 "51str3.nc"
                        n_49=strtoll(buf_48,((void*)0),0);
                        # 805 "51str3.nc"
                        c=n_49;
                    }
                    # 807 "51str3.nc"
                    break;
                    # 810 "51str3.nc"
                    default:
                    # 810 "51str3.nc"
                    c=*info->p;
                    # 811 "51str3.nc"
                    info->p++;
                    # 812 "51str3.nc"
                    break;
                }
            }
        }
        else {
            # 817 "51str3.nc"
            c=*info->p;
            # 818 "51str3.nc"
            info->p++;
        }
        # 833 "51str3.nc"
        if(*info->p!=39) {
            # 822 "51str3.nc"
            err_msg(info,"close \' to make character value");
            # 823 "51str3.nc"
            exit(1);
        }
        else {
            # 826 "51str3.nc"
            info->p++;
            # 828 "51str3.nc"
            skip_spaces_and_lf(info);
            # 830 "51str3.nc"
            info->sline_real=sline_real_45;
            # 831 "51str3.nc"
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1=create_prefixed_char_node(c,(char* )come_increment_ref_count(xsprintf("%c",prefix_46), "51str3.nc", 831, 307),info))), "51str3.nc", 831, 308);
            ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 831, 309):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 831, 310):(void*)0);
            return __result_obj__0;
        }
    }
    else if(*info->p==39) {
        # 835 "51str3.nc"
        sline_real_50=info->sline_real;
        # 836 "51str3.nc"
        info->sline_real=info->sline;
        # 837 "51str3.nc"
        info->p++;
        # 839 "51str3.nc"
        # 943 "51str3.nc"
        if(*info->p==92) {
            # 842 "51str3.nc"
            info->p++;
            # 937 "51str3.nc"
            if(xisdigit(*info->p)) {
                # 845 "51str3.nc"
                n_52=0;
                # 851 "51str3.nc"
                while(xisdigit(*info->p)) {
                    # 847 "51str3.nc"
                    n_52=n_52*8+*info->p-48;
                    # 848 "51str3.nc"
                    info->p++;
                }
                # 851 "51str3.nc"
                c_51=n_52;
            }
            else {
                # 936 "51str3.nc"
                switch (                *info->p) {
                    # 856 "51str3.nc"
                    case 110:
                    # 856 "51str3.nc"
                    c_51=10;
                    # 857 "51str3.nc"
                    info->p++;
                    # 858 "51str3.nc"
                    break;
                    # 861 "51str3.nc"
                    case 116:
                    # 861 "51str3.nc"
                    c_51=9;
                    # 862 "51str3.nc"
                    info->p++;
                    # 863 "51str3.nc"
                    break;
                    # 866 "51str3.nc"
                    case 114:
                    # 866 "51str3.nc"
                    c_51=13;
                    # 867 "51str3.nc"
                    info->p++;
                    # 868 "51str3.nc"
                    break;
                    # 871 "51str3.nc"
                    case 97:
                    # 871 "51str3.nc"
                    c_51=7;
                    # 872 "51str3.nc"
                    info->p++;
                    # 873 "51str3.nc"
                    break;
                    # 876 "51str3.nc"
                    case 102:
                    # 876 "51str3.nc"
                    c_51=12;
                    # 877 "51str3.nc"
                    info->p++;
                    # 878 "51str3.nc"
                    break;
                    # 881 "51str3.nc"
                    case 118:
                    # 881 "51str3.nc"
                    c_51=11;
                    # 882 "51str3.nc"
                    info->p++;
                    # 883 "51str3.nc"
                    break;
                    # 886 "51str3.nc"
                    case 98:
                    # 886 "51str3.nc"
                    c_51=8;
                    # 887 "51str3.nc"
                    info->p++;
                    # 888 "51str3.nc"
                    break;
                    # 891 "51str3.nc"
                    case 92:
                    # 891 "51str3.nc"
                    c_51=92;
                    # 892 "51str3.nc"
                    info->p++;
                    # 893 "51str3.nc"
                    break;
                    # 896 "51str3.nc"
                    case 48:
                    # 896 "51str3.nc"
                    c_51=0;
                    # 897 "51str3.nc"
                    info->p++;
                    # 909 "51str3.nc"
                    if(xisdigit(*info->p)) {
                        # 900 "51str3.nc"
                        n_53=0;
                        # 907 "51str3.nc"
                        while(xisdigit(*info->p)) {
                            # 902 "51str3.nc"
                            n_53=n_53*8+*info->p-48;
                            # 903 "51str3.nc"
                            info->p++;
                            # 904 "51str3.nc"
                            skip_spaces_and_lf(info);
                        }
                        # 907 "51str3.nc"
                        c_51=n_53;
                    }
                    # 909 "51str3.nc"
                    break;
                    # 912 "51str3.nc"
                    case 120:
                    # 912 "51str3.nc"
                    case 88:
                    # 929 "51str3.nc"
                    {
                        # 913 "51str3.nc"
                        info->p++;
                        # 915 "51str3.nc"
                        char buf_54[128];
                        memset(&buf_54, 0, sizeof(buf_54));
                        # 916 "51str3.nc"
                        strncpy(buf_54,"0x",128);
                        # 925 "51str3.nc"
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            # 918 "51str3.nc"
                            char buf2_55[2];
                            memset(&buf2_55, 0, sizeof(buf2_55));
                            # 919 "51str3.nc"
                            buf2_55[0]=*info->p;
                            # 920 "51str3.nc"
                            buf2_55[1]=0;
                            # 921 "51str3.nc"
                            info->p++;
                            # 922 "51str3.nc"
                            strncat(buf_54,buf2_55,128);
                        }
                        # 925 "51str3.nc"
                        n_56=strtoll(buf_54,((void*)0),0);
                        # 927 "51str3.nc"
                        c_51=n_56;
                    }
                    # 929 "51str3.nc"
                    break;
                    # 932 "51str3.nc"
                    default:
                    # 932 "51str3.nc"
                    c_51=*info->p;
                    # 933 "51str3.nc"
                    info->p++;
                    # 934 "51str3.nc"
                    break;
                }
            }
        }
        else {
            # 939 "51str3.nc"
            c_51=*info->p;
            # 940 "51str3.nc"
            info->p++;
        }
        # 955 "51str3.nc"
        if(*info->p!=39) {
            # 944 "51str3.nc"
            err_msg(info,"close \' to make character value");
            # 945 "51str3.nc"
            exit(1);
        }
        else {
            # 948 "51str3.nc"
            info->p++;
            # 950 "51str3.nc"
            skip_spaces_and_lf(info);
            # 952 "51str3.nc"
            info->sline_real=sline_real_50;
            # 953 "51str3.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_char_node(c_51,info))), "51str3.nc", 953, 311);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 953, 312):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 953, 313):(void*)0);
            return __result_obj__0;
        }
    }
    else if(*info->p==76&&*(info->p+1)==39) {
        # 959 "51str3.nc"
        sline_real_57=info->sline_real;
        # 960 "51str3.nc"
        info->sline_real=info->sline;
        # 961 "51str3.nc"
        info->p+=2;
        # 963 "51str3.nc"
        # 964 "51str3.nc"
        # 1088 "51str3.nc"
        if(*info->p==92) {
            # 967 "51str3.nc"
            quote=(_Bool)1;
            # 968 "51str3.nc"
            info->p++;
            # 1049 "51str3.nc"
            if(xisdigit(*info->p)) {
                # 971 "51str3.nc"
                n_59=0;
                # 977 "51str3.nc"
                while(xisdigit(*info->p)) {
                    # 973 "51str3.nc"
                    n_59=n_59*8+*info->p-48;
                    # 974 "51str3.nc"
                    info->p++;
                }
                # 977 "51str3.nc"
                c_58=n_59;
            }
            else {
                # 1048 "51str3.nc"
                switch (                *info->p) {
                    # 982 "51str3.nc"
                    case 110:
                    # 982 "51str3.nc"
                    c_58=10;
                    # 983 "51str3.nc"
                    info->p++;
                    # 984 "51str3.nc"
                    break;
                    # 987 "51str3.nc"
                    case 116:
                    # 987 "51str3.nc"
                    c_58=9;
                    # 988 "51str3.nc"
                    info->p++;
                    # 989 "51str3.nc"
                    break;
                    # 992 "51str3.nc"
                    case 114:
                    # 992 "51str3.nc"
                    c_58=13;
                    # 993 "51str3.nc"
                    info->p++;
                    # 994 "51str3.nc"
                    break;
                    # 997 "51str3.nc"
                    case 97:
                    # 997 "51str3.nc"
                    c_58=7;
                    # 998 "51str3.nc"
                    info->p++;
                    # 999 "51str3.nc"
                    break;
                    # 1002 "51str3.nc"
                    case 92:
                    # 1002 "51str3.nc"
                    c_58=92;
                    # 1003 "51str3.nc"
                    info->p++;
                    # 1004 "51str3.nc"
                    break;
                    # 1007 "51str3.nc"
                    case 48:
                    # 1007 "51str3.nc"
                    c_58=0;
                    # 1009 "51str3.nc"
                    info->p++;
                    # 1021 "51str3.nc"
                    if(xisdigit(*info->p)) {
                        # 1012 "51str3.nc"
                        n_60=0;
                        # 1019 "51str3.nc"
                        while(xisdigit(*info->p)) {
                            # 1014 "51str3.nc"
                            n_60=n_60*8+*info->p-48;
                            # 1015 "51str3.nc"
                            info->p++;
                            # 1016 "51str3.nc"
                            skip_spaces_and_lf(info);
                        }
                        # 1019 "51str3.nc"
                        c_58=n_60;
                    }
                    # 1021 "51str3.nc"
                    break;
                    # 1024 "51str3.nc"
                    case 120:
                    # 1024 "51str3.nc"
                    case 88:
                    # 1041 "51str3.nc"
                    {
                        # 1025 "51str3.nc"
                        info->p++;
                        # 1027 "51str3.nc"
                        char buf_61[128];
                        memset(&buf_61, 0, sizeof(buf_61));
                        # 1028 "51str3.nc"
                        strncpy(buf_61,"0x",128);
                        # 1037 "51str3.nc"
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            # 1030 "51str3.nc"
                            char buf2_62[2];
                            memset(&buf2_62, 0, sizeof(buf2_62));
                            # 1031 "51str3.nc"
                            buf2_62[0]=*info->p;
                            # 1032 "51str3.nc"
                            buf2_62[1]=0;
                            # 1033 "51str3.nc"
                            info->p++;
                            # 1034 "51str3.nc"
                            strncat(buf_61,buf2_62,128);
                        }
                        # 1037 "51str3.nc"
                        n_63=strtoll(buf_61,((void*)0),0);
                        # 1039 "51str3.nc"
                        c_58=n_63;
                    }
                    # 1041 "51str3.nc"
                    break;
                    # 1044 "51str3.nc"
                    default:
                    # 1044 "51str3.nc"
                    c_58=*info->p;
                    # 1045 "51str3.nc"
                    info->p++;
                    # 1046 "51str3.nc"
                    break;
                }
            }
        }
        else {
            # 1051 "51str3.nc"
            quote=(_Bool)0;
            # 1052 "51str3.nc"
            p2=*(unsigned char*)info->p;
            # 1086 "51str3.nc"
            if(p2>127) {
                # 1056 "51str3.nc"
                # 1057 "51str3.nc"
                char str[16+1];
                memset(&str, 0, sizeof(str));
                # 1059 "51str3.nc"
                size_64=((p2&0x80)>>7)+((p2&0x40)>>6)+((p2&0x20)>>5)+((p2&0x10)>>4);
                # 1080 "51str3.nc"
                if(size_64>16) {
                    # 1062 "51str3.nc"
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    # 1063 "51str3.nc"
                    info->err_num++;
                    # 1064 "51str3.nc"
                    exit(2);
                }
                else {
                    # 1067 "51str3.nc"
                    memcpy(str,info->p,size_64);
                    # 1068 "51str3.nc"
                    str[size_64]=0;
                    # 1079 "51str3.nc"
                    if(mbtowc(&c_58,str,size_64)<0) {
                        # 1071 "51str3.nc"
                        perror("mbtowc");
                        # 1072 "51str3.nc"
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        # 1073 "51str3.nc"
                        info->err_num++;
                        # 1074 "51str3.nc"
                        exit(2);
                    }
                    else {
                        # 1077 "51str3.nc"
                        info->p+=size_64;
                    }
                }
            }
            else {
                # 1083 "51str3.nc"
                c_58=*info->p;
                # 1084 "51str3.nc"
                info->p++;
            }
        }
        # 1101 "51str3.nc"
        if(*info->p!=39) {
            # 1089 "51str3.nc"
            err_msg(info,"close \' to make character value");
            # 1090 "51str3.nc"
            info->err_num++;
            # 1091 "51str3.nc"
            exit(2);
        }
        else {
            # 1094 "51str3.nc"
            info->p++;
            # 1096 "51str3.nc"
            skip_spaces_and_lf(info);
            # 1098 "51str3.nc"
            info->sline_real=sline_real_57;
            # 1099 "51str3.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_wchar_node(c_58,quote,info))), "51str3.nc", 1099, 314);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1099, 315):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1099, 316):(void*)0);
            return __result_obj__0;
        }
    }
    else if(*info->p==76&&*(info->p+1)==34) {
        # 1104 "51str3.nc"
        sline_real_65=info->sline_real;
        # 1105 "51str3.nc"
        info->sline_real=info->sline;
        # 1106 "51str3.nc"
        info->p+=2;
        # 1108 "51str3.nc"
        sline_66=info->sline;
        # 1110 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_67=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 1110, 317, "struct buffer* "), "51str3.nc", 1110, 318)), "51str3.nc", 1110, 319);
        # 1157 "51str3.nc"
        while(1) {
            # 1155 "51str3.nc"
            if(*info->p==34) {
                # 1114 "51str3.nc"
                info->p++;
                # 1116 "51str3.nc"
                p_68=info->p;
                # 1117 "51str3.nc"
                sline_69=info->sline;
                # 1119 "51str3.nc"
                skip_spaces_and_lf(info);
                # 1129 "51str3.nc"
                if(*info->p==34) {
                    # 1122 "51str3.nc"
                    info->p++;
                }
                else {
                    # 1125 "51str3.nc"
                    info->p=p_68;
                    # 1126 "51str3.nc"
                    info->sline=sline_69;
                    # 1127 "51str3.nc"
                    break;
                }
            }
            else if(*info->p==92) {
                # 1131 "51str3.nc"
                buffer_append_char(value_67,92);
                # 1132 "51str3.nc"
                info->p++;
                # 1142 "51str3.nc"
                if(*info->p==34) {
                    # 1135 "51str3.nc"
                    buffer_append_char(value_67,34);
                    # 1136 "51str3.nc"
                    info->p++;
                }
                else {
                    # 1139 "51str3.nc"
                    buffer_append_char(value_67,*info->p);
                    # 1140 "51str3.nc"
                    info->p++;
                }
            }
            else if(*info->p==0) {
                # 1144 "51str3.nc"
                sline2_70=info->sline;
                # 1145 "51str3.nc"
                info->sline=sline_66;
                # 1146 "51str3.nc"
                err_msg(info,"close \" to make c string value");
                # 1147 "51str3.nc"
                exit(2);
            }
            else {
                # 1152 "51str3.nc"
                if(*info->p==10) {
                    # 1150 "51str3.nc"
                    info->sline++;
                }
                # 1152 "51str3.nc"
                buffer_append_char(value_67,*info->p);
                # 1153 "51str3.nc"
                info->p++;
            }
        }
        # 1157 "51str3.nc"
        skip_spaces_and_lf(info);
        # 1159 "51str3.nc"
        len_71=value_67->len;
        # 1161 "51str3.nc"
        __right_value0 = (void*)0;
        wstr=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len_71+1)), "51str3.nc", 1161, 320, "int* "), "51str3.nc", 1161, 321);
        # 1163 "51str3.nc"
        str_72=value_67->buf;
        # 1170 "51str3.nc"
        if(mbstowcs(wstr,str_72,len_71+1)<0) {
            # 1166 "51str3.nc"
            perror("mbstowcs");
            # 1167 "51str3.nc"
            exit(1);
        }
        # 1170 "51str3.nc"
        wstr[len_71]=0;
        # 1172 "51str3.nc"
        info->sline_real=sline_real_65;
        # 1173 "51str3.nc"
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_wstring_node((int* )come_increment_ref_count(wstr, "51str3.nc", 1173, 322),sline_66,info))), "51str3.nc", 1173, 323);
        come_call_finalizer(buffer_finalize, value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1173, 324);
        (wstr = come_decrement_ref_count(wstr, (void*)0, (void*)0, 0, 0, (void*)0, "51str3.nc", 1173, 325));
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1173, 326):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1173, 327):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_67, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 328);
        (wstr = come_decrement_ref_count(wstr, (void*)0, (void*)0, 0, 0, (void*)0, "51str3.nc", 1499, 329));
    }
    else if((*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        # 1178 "51str3.nc"
        sline_real_73=info->sline_real;
        # 1179 "51str3.nc"
        info->sline_real=info->sline;
        # 1180 "51str3.nc"
        info->p+=2;
        # 1182 "51str3.nc"
        sline_74=info->sline;
        # 1184 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        exps_75=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1184, 330, "struct list$1sNode$ph*"), "51str3.nc", 1184, 331)), "51str3.nc", 1184, 332);
        # 1185 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        value_76=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 1185, 333, "struct buffer* "), "51str3.nc", 1185, 334)), "51str3.nc", 1185, 335);
        # 1330 "51str3.nc"
        while(1) {
            # 1328 "51str3.nc"
            if(*info->p==34) {
                # 1189 "51str3.nc"
                info->p++;
                # 1191 "51str3.nc"
                p_77=info->p;
                # 1192 "51str3.nc"
                sline_78=info->sline;
                # 1194 "51str3.nc"
                skip_spaces_and_lf(info);
                # 1204 "51str3.nc"
                if(*info->p==34) {
                    # 1197 "51str3.nc"
                    info->p++;
                }
                else {
                    # 1200 "51str3.nc"
                    info->p=p_77;
                    # 1201 "51str3.nc"
                    info->sline=sline_78;
                    # 1202 "51str3.nc"
                    break;
                }
            }
            else if(*info->p==37) {
                # 1206 "51str3.nc"
                buffer_append_char(value_76,37);
                # 1207 "51str3.nc"
                buffer_append_char(value_76,37);
                # 1208 "51str3.nc"
                info->p++;
            }
            else if(*info->p==92) {
                # 1229 "51str3.nc"
                buffer_append_char(value_76,92);
                # 1230 "51str3.nc"
                info->p++;
                # 1315 "51str3.nc"
                if(xisdigit(*info->p)) {
                    # 1233 "51str3.nc"
                    len_79=0;
                    # 1239 "51str3.nc"
                    while(xisdigit(*info->p)&&len_79<3) {
                        # 1235 "51str3.nc"
                        buffer_append_char(value_76,*info->p);
                        # 1236 "51str3.nc"
                        info->p++;
                        # 1237 "51str3.nc"
                        len_79++;
                    }
                }
                else if(*info->p==120||*info->p==88) {
                    # 1241 "51str3.nc"
                    buffer_append_char(value_76,*info->p);
                    # 1242 "51str3.nc"
                    info->p++;
                    # 1248 "51str3.nc"
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        # 1245 "51str3.nc"
                        buffer_append_char(value_76,*info->p);
                        # 1246 "51str3.nc"
                        info->p++;
                    }
                }
                else if(*info->p==123) {
                    # 1250 "51str3.nc"
                    info->p++;
                    # 1252 "51str3.nc"
                    __right_value0 = (void*)0;
                    exp_80=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1252, 336);
                    # 1254 "51str3.nc"
                    list$1sNode$ph_add(exps_75,(struct sNode*)come_increment_ref_count(exp_80, "51str3.nc", 1254, 337));
                    # 1260 "51str3.nc"
                    if(*info->p==125) {
                        # 1257 "51str3.nc"
                        info->p++;
                    }
                    # 1260 "51str3.nc"
                    buffer_append_str(value_76,"%s");
                    ((exp_80) ? exp_80 = come_decrement_ref_count(exp_80, ((struct sNode*)exp_80)->finalize, ((struct sNode*)exp_80)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1315, 338):(void*)0);
                }
                else {
                    # 1314 "51str3.nc"
                    switch (                    *info->p) {
                        # 1265 "51str3.nc"
                        case 48:
                        # 1265 "51str3.nc"
                        buffer_append_char(value_76,*info->p);
                        # 1266 "51str3.nc"
                        info->p++;
                        # 1267 "51str3.nc"
                        break;
                        # 1270 "51str3.nc"
                        case 110:
                        # 1270 "51str3.nc"
                        buffer_append_char(value_76,*info->p);
                        # 1271 "51str3.nc"
                        info->p++;
                        # 1272 "51str3.nc"
                        break;
                        # 1275 "51str3.nc"
                        case 116:
                        # 1275 "51str3.nc"
                        buffer_append_char(value_76,*info->p);
                        # 1276 "51str3.nc"
                        info->p++;
                        # 1277 "51str3.nc"
                        break;
                        # 1280 "51str3.nc"
                        case 114:
                        # 1280 "51str3.nc"
                        buffer_append_char(value_76,*info->p);
                        # 1281 "51str3.nc"
                        info->p++;
                        # 1282 "51str3.nc"
                        break;
                        # 1285 "51str3.nc"
                        case 118:
                        # 1285 "51str3.nc"
                        buffer_append_char(value_76,*info->p);
                        # 1286 "51str3.nc"
                        info->p++;
                        # 1287 "51str3.nc"
                        break;
                        # 1290 "51str3.nc"
                        case 102:
                        # 1290 "51str3.nc"
                        buffer_append_char(value_76,*info->p);
                        # 1291 "51str3.nc"
                        info->p++;
                        # 1292 "51str3.nc"
                        break;
                        # 1295 "51str3.nc"
                        case 97:
                        # 1295 "51str3.nc"
                        buffer_append_char(value_76,*info->p);
                        # 1296 "51str3.nc"
                        info->p++;
                        # 1297 "51str3.nc"
                        break;
                        # 1300 "51str3.nc"
                        case 98:
                        # 1300 "51str3.nc"
                        buffer_append_char(value_76,*info->p);
                        # 1301 "51str3.nc"
                        info->p++;
                        # 1302 "51str3.nc"
                        break;
                        # 1305 "51str3.nc"
                        case 92:
                        # 1305 "51str3.nc"
                        buffer_append_char(value_76,*info->p);
                        # 1306 "51str3.nc"
                        info->p++;
                        # 1307 "51str3.nc"
                        break;
                        # 1310 "51str3.nc"
                        default:
                        # 1310 "51str3.nc"
                        buffer_append_char(value_76,*info->p);
                        # 1311 "51str3.nc"
                        info->p++;
                        # 1312 "51str3.nc"
                        break;
                    }
                }
            }
            else if(*info->p==0) {
                # 1317 "51str3.nc"
                sline2_81=info->sline;
                # 1318 "51str3.nc"
                info->sline=sline_74;
                # 1319 "51str3.nc"
                err_msg(info,"close \" to make embbeded string value");
                # 1320 "51str3.nc"
                exit(2);
            }
            else {
                # 1325 "51str3.nc"
                if(*info->p==10) {
                    # 1323 "51str3.nc"
                    info->sline++;
                }
                # 1325 "51str3.nc"
                buffer_append_char(value_76,*info->p);
                # 1326 "51str3.nc"
                info->p++;
            }
        }
        # 1330 "51str3.nc"
        skip_spaces_and_lf(info);
        # 1332 "51str3.nc"
        info->sline_real=sline_real_73;
        # 1333 "51str3.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value1=create_sstring_node((char* )come_increment_ref_count(buffer_to_string(value_76), "51str3.nc", 1333, 339),(struct list$1sNode$ph*)come_increment_ref_count(exps_75, "51str3.nc", 1333, 340),sline_74,info))), "51str3.nc", 1333, 341);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps_75, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1333, 342);
        come_call_finalizer(buffer_finalize, value_76, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1333, 343);
        ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1333, 344):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1333, 345):(void*)0);
        return __result_obj__0;
        come_call_finalizer(list$1sNode$ph$p_finalize, exps_75, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 346);
        come_call_finalizer(buffer_finalize, value_76, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 347);
    }
    else if(*info->p==91) {
        # 1336 "51str3.nc"
        sline_real_82=info->sline_real;
        # 1337 "51str3.nc"
        info->sline_real=info->sline;
        # 1338 "51str3.nc"
        info->p++;
        # 1339 "51str3.nc"
        skip_spaces_and_lf(info);
        # 1341 "51str3.nc"
        p_83=info->p;
        # 1343 "51str3.nc"
        no_comma=info->no_comma;
        # 1344 "51str3.nc"
        info->no_comma=(_Bool)1;
        # 1346 "51str3.nc"
        __right_value0 = (void*)0;
        node_84=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1346, 348);
        # 1348 "51str3.nc"
        info->no_comma=no_comma;
        # 1350 "51str3.nc"
        p2_85=info->p;
        # 1352 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        first_element_source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 1352, 349, "struct buffer* "), "51str3.nc", 1352, 350)), "51str3.nc", 1352, 351);
        # 1354 "51str3.nc"
        buffer_append(first_element_source,p_83,p2_85-p_83);
        # 1355 "51str3.nc"
        buffer_append_char(first_element_source,0);
        # 1357 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1357, 352, "struct list$1sNode$ph*"), "51str3.nc", 1357, 353)), "51str3.nc", 1357, 354);
        # 1359 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        map_keys=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1359, 355, "struct list$1sNode$ph*"), "51str3.nc", 1359, 356)), "51str3.nc", 1359, 357);
        # 1360 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1360, 358, "struct list$1sNode$ph*"), "51str3.nc", 1360, 359)), "51str3.nc", 1360, 360);
        # 1478 "51str3.nc"
        if(*info->p==58) {
            # 1364 "51str3.nc"
            info->p++;
            # 1365 "51str3.nc"
            skip_spaces_and_lf(info);
            # 1367 "51str3.nc"
            list$1sNode$ph_push_back(map_keys,(struct sNode*)come_increment_ref_count(node_84, "51str3.nc", 1367, 375));
            # 1369 "51str3.nc"
            no_comma_88=info->no_comma;
            # 1370 "51str3.nc"
            info->no_comma=(_Bool)1;
            # 1373 "51str3.nc"
            __right_value0 = (void*)0;
            node2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1373, 376);
            # 1375 "51str3.nc"
            info->no_comma=no_comma_88;
            # 1377 "51str3.nc"
            list$1sNode$ph_push_back(map_elements,(struct sNode*)come_increment_ref_count(node2, "51str3.nc", 1377, 377));
            # 1430 "51str3.nc"
            if(*info->p==93) {
                # 1380 "51str3.nc"
                info->p++;
                # 1381 "51str3.nc"
                skip_spaces_and_lf(info);
                # 1383 "51str3.nc"
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_map_node((struct list$1sNode$ph*)come_increment_ref_count(map_keys, "51str3.nc", 1383, 378),(struct list$1sNode$ph*)come_increment_ref_count(map_elements, "51str3.nc", 1383, 379),info))), "51str3.nc", 1383, 380);
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1383, 381):(void*)0);
                ((node_84) ? node_84 = come_decrement_ref_count(node_84, ((struct sNode*)node_84)->finalize, ((struct sNode*)node_84)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1383, 382):(void*)0);
                come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1383, 383);
                come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1383, 384);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1383, 385);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1383, 386);
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1383, 387):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1383, 388):(void*)0);
                return __result_obj__0;
            }
            else {
                # 1386 "51str3.nc"
                expected_next_character(44,info);
                # 1428 "51str3.nc"
                while((_Bool)1) {
                    # 1389 "51str3.nc"
                    no_comma_89=info->no_comma;
                    # 1390 "51str3.nc"
                    info->no_comma=(_Bool)1;
                    # 1392 "51str3.nc"
                    __right_value0 = (void*)0;
                    node2_90=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1392, 389);
                    # 1394 "51str3.nc"
                    info->no_comma=no_comma_89;
                    # 1396 "51str3.nc"
                    list$1sNode$ph_push_back(map_keys,(struct sNode*)come_increment_ref_count(node2_90, "51str3.nc", 1396, 390));
                    # 1398 "51str3.nc"
                    expected_next_character(58,info);
                    # 1400 "51str3.nc"
                    no_comma_89=info->no_comma;
                    # 1401 "51str3.nc"
                    info->no_comma=(_Bool)1;
                    # 1403 "51str3.nc"
                    __right_value0 = (void*)0;
                    node3=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1403, 391);
                    # 1405 "51str3.nc"
                    info->no_comma=no_comma_89;
                    # 1407 "51str3.nc"
                    list$1sNode$ph_push_back(map_elements,(struct sNode*)come_increment_ref_count(node3, "51str3.nc", 1407, 392));
                    # 1426 "51str3.nc"
                    if(*info->p==0) {
                        # 1410 "51str3.nc"
                        err_msg(info,"invalid source end");
                        # 1411 "51str3.nc"
                        exit(2);
                    }
                    else if(*info->p==44) {
                        # 1414 "51str3.nc"
                        info->p++;
                        # 1415 "51str3.nc"
                        skip_spaces_and_lf(info);
                    }
                    else if(*info->p==93) {
                        # 1418 "51str3.nc"
                        info->p++;
                        # 1419 "51str3.nc"
                        skip_spaces_and_lf(info);
                        # 1420 "51str3.nc"
                        ((node2_90) ? node2_90 = come_decrement_ref_count(node2_90, ((struct sNode*)node2_90)->finalize, ((struct sNode*)node2_90)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1420, 393):(void*)0);
                        ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1420, 394):(void*)0);
                        break;
                    }
                    else {
                        # 1423 "51str3.nc"
                        err_msg(info,"invalid character(3)(%c)",*info->p);
                        # 1424 "51str3.nc"
                        exit(2);
                    }
                    ((node2_90) ? node2_90 = come_decrement_ref_count(node2_90, ((struct sNode*)node2_90)->finalize, ((struct sNode*)node2_90)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1428, 395):(void*)0);
                    ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1428, 396):(void*)0);
                }
                # 1428 "51str3.nc"
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_map_node((struct list$1sNode$ph*)come_increment_ref_count(map_keys, "51str3.nc", 1428, 397),(struct list$1sNode$ph*)come_increment_ref_count(map_elements, "51str3.nc", 1428, 398),info))), "51str3.nc", 1428, 399);
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1428, 400):(void*)0);
                ((node_84) ? node_84 = come_decrement_ref_count(node_84, ((struct sNode*)node_84)->finalize, ((struct sNode*)node_84)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1428, 401):(void*)0);
                come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1428, 402);
                come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1428, 403);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1428, 404);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1428, 405);
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1428, 406):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1428, 407):(void*)0);
                return __result_obj__0;
            }
            ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1478, 408):(void*)0);
        }
        else if(*info->p==93) {
            # 1433 "51str3.nc"
            info->p++;
            # 1434 "51str3.nc"
            skip_spaces_and_lf(info);
            # 1436 "51str3.nc"
            list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node_84, "51str3.nc", 1436, 409));
        }
        else if(*info->p==44) {
            # 1439 "51str3.nc"
            info->p++;
            # 1440 "51str3.nc"
            skip_spaces_and_lf(info);
            # 1442 "51str3.nc"
            list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node_84, "51str3.nc", 1442, 410));
            # 1472 "51str3.nc"
            while((_Bool)1) {
                # 1445 "51str3.nc"
                no_comma_91=info->no_comma;
                # 1446 "51str3.nc"
                info->no_comma=(_Bool)1;
                # 1448 "51str3.nc"
                __right_value0 = (void*)0;
                node2_92=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1448, 411);
                # 1450 "51str3.nc"
                info->no_comma=no_comma_91;
                # 1452 "51str3.nc"
                list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node2_92, "51str3.nc", 1452, 412));
                # 1471 "51str3.nc"
                if(*info->p==0) {
                    # 1455 "51str3.nc"
                    err_msg(info,"invalid source end");
                    # 1456 "51str3.nc"
                    exit(2);
                }
                else if(*info->p==44) {
                    # 1459 "51str3.nc"
                    info->p++;
                    # 1460 "51str3.nc"
                    skip_spaces_and_lf(info);
                }
                else if(*info->p==93) {
                    # 1463 "51str3.nc"
                    info->p++;
                    # 1464 "51str3.nc"
                    skip_spaces_and_lf(info);
                    # 1465 "51str3.nc"
                    ((node2_92) ? node2_92 = come_decrement_ref_count(node2_92, ((struct sNode*)node2_92)->finalize, ((struct sNode*)node2_92)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1465, 413):(void*)0);
                    break;
                }
                else {
                    # 1468 "51str3.nc"
                    err_msg(info,"invalid character(4)(%c)",*info->p);
                    # 1469 "51str3.nc"
                    exit(2);
                }
                ((node2_92) ? node2_92 = come_decrement_ref_count(node2_92, ((struct sNode*)node2_92)->finalize, ((struct sNode*)node2_92)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1472, 414):(void*)0);
            }
        }
        else {
            # 1474 "51str3.nc"
            err_msg(info,"invalid character(5)(%c)",*info->p);
            # 1475 "51str3.nc"
            exit(2);
        }
        # 1486 "51str3.nc"
        if(list$1sNode$ph_length(list_elements)>0) {
            # 1479 "51str3.nc"
            info->sline_real=sline_real_82;
            # 1480 "51str3.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_list_node((struct list$1sNode$ph*)come_increment_ref_count(list_elements, "51str3.nc", 1480, 415),info))), "51str3.nc", 1480, 416);
            ((node_84) ? node_84 = come_decrement_ref_count(node_84, ((struct sNode*)node_84)->finalize, ((struct sNode*)node_84)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1480, 417):(void*)0);
            come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1480, 418);
            come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1480, 419);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1480, 420);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1480, 421);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1480, 422):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1480, 423):(void*)0);
            return __result_obj__0;
        }
        else {
            # 1483 "51str3.nc"
            err_msg(info,"invalid vector");
            # 1484 "51str3.nc"
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "51str3.nc", 1484, 424);
            ((node_84) ? node_84 = come_decrement_ref_count(node_84, ((struct sNode*)node_84)->finalize, ((struct sNode*)node_84)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1484, 425):(void*)0);
            come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1484, 426);
            come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1484, 427);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1484, 428);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1484, 429);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1484, 430):(void*)0);
            return __result_obj__0;
        }
        ((node_84) ? node_84 = come_decrement_ref_count(node_84, ((struct sNode*)node_84)->finalize, ((struct sNode*)node_84)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1499, 431):(void*)0);
        come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 432);
        come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 433);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 434);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1499, 435);
    }
    else if(*info->p==118&&*(info->p+1)==40) {
        # 1488 "51str3.nc"
        sline_real_93=info->sline_real;
        # 1489 "51str3.nc"
        info->sline_real=info->sline;
        # 1490 "51str3.nc"
        info->p+=2;
        # 1491 "51str3.nc"
        skip_spaces_and_lf(info);
    }
    else {
        # 1495 "51str3.nc"
        __right_value0 = (void*)0;
        node_94=(struct sNode*)come_increment_ref_count(expression_node_v95(info), "51str3.nc", 1495, 436);
        # 1496 "51str3.nc"
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_94, "51str3.nc", 1496, 437);
        ((node_94) ? node_94 = come_decrement_ref_count(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1496, 438):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1496, 439):(void*)0);
        return __result_obj__0;
        ((node_94) ? node_94 = come_decrement_ref_count(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1499, 440):(void*)0);
    }
    # 1499 "51str3.nc"
        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "51str3.nc", 1499, 441);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1499, 442):(void*)0);
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
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 2);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1494, 5);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1494, 6);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 4);
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
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 3):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj1;
    struct list_item$1sNode$ph* litem_0;
    struct sNode* __dec_obj2;
    struct list_item$1sNode$ph* litem_1;
    struct sNode* __dec_obj3;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_0, 0, sizeof(litem_0));
    memset(&litem_1, 0, sizeof(litem_1));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1531, 13):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1534, 14, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1534, 15);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj1=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1538, 17);
        (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1538, 16) :0);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1544, 18, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1544, 19);
        # 1546 "./neo-c.h"
        litem_0->prev=self->head;
        # 1547 "./neo-c.h"
        litem_0->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj2=litem_0->item,
        litem_0->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1548, 21);
        (__dec_obj2 ? __dec_obj2 = come_decrement_ref_count(__dec_obj2, ((struct sNode*)__dec_obj2)->finalize, ((struct sNode*)__dec_obj2)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1548, 20) :0);
        # 1550 "./neo-c.h"
        self->tail=litem_0;
        # 1551 "./neo-c.h"
        self->head->next=litem_0;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1554, 22, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1554, 23);
        # 1556 "./neo-c.h"
        litem_1->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_1->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj3=litem_1->item,
        litem_1->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1558, 25);
        (__dec_obj3 ? __dec_obj3 = come_decrement_ref_count(__dec_obj3, ((struct sNode*)__dec_obj3)->finalize, ((struct sNode*)__dec_obj3)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1558, 24) :0);
        # 1560 "./neo-c.h"
        self->tail->next=litem_1;
        # 1561 "./neo-c.h"
        self->tail=litem_1;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1566, 26):(void*)0);
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
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 82);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2, 87);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2, 88);
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 86);
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
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 85);
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
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph$p_finalize", 2, 83));
    }
    # 4 "tuple2$2char$phsNode$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple2$2char$phsNode$ph$p_finalize"
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph$p_finalize", 3, 84):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj4;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_28;
    struct tuple2$2char$phsNode$ph* __dec_obj5;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_29;
    struct tuple2$2char$phsNode$ph* __dec_obj6;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_28, 0, sizeof(litem_28));
    memset(&litem_29, 0, sizeof(litem_29));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 91);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1534, 92, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1534, 93);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj4=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1538, 95);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 94);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_28=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1544, 96, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1544, 97);
        # 1546 "./neo-c.h"
        litem_28->prev=self->head;
        # 1547 "./neo-c.h"
        litem_28->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj5=litem_28->item,
        litem_28->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1548, 99);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 98);
        # 1550 "./neo-c.h"
        self->tail=litem_28;
        # 1551 "./neo-c.h"
        self->head->next=litem_28;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_29=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1554, 100, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1554, 101);
        # 1556 "./neo-c.h"
        litem_29->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_29->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj6=litem_29->item,
        litem_29->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1558, 103);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 102);
        # 1560 "./neo-c.h"
        self->tail->next=litem_29;
        # 1561 "./neo-c.h"
        self->tail=litem_29;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 104);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj7  ;
    struct sNode* __dec_obj8;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    # 4465 "./neo-c.h"
    __dec_obj7=self->v1,
    self->v1=(char*)come_increment_ref_count(v1, "./neo-c.h", 4465, 107);
    __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4465, 106);
    # 4466 "./neo-c.h"
    __dec_obj8=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "./neo-c.h", 4466, 109);
    (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 4466, 108) :0);
    # 4468 "./neo-c.h"
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "./neo-c.h", 4468, 110);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4468, 111);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4468, 112));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 4468, 113):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4468, 114);
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
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 174);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3, 205);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3, 206);
    return __result_obj__0;
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 204);
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
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 203);
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
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 175);
    }
    # 4 "sType_finalize"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 3 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 176);
    }
    # 5 "sType_finalize"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 4 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 177);
    }
    # 6 "sType_finalize"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 5 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 178);
    }
    # 7 "sType_finalize"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 6 "sType_finalize"
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 179):(void*)0);
    }
    # 8 "sType_finalize"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 7 "sType_finalize"
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 180):(void*)0);
    }
    # 9 "sType_finalize"
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        # 8 "sType_finalize"
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 181));
    }
    # 10 "sType_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 9 "sType_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 182));
    }
    # 11 "sType_finalize"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 10 "sType_finalize"
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 183));
    }
    # 12 "sType_finalize"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 11 "sType_finalize"
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 184));
    }
    # 13 "sType_finalize"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 12 "sType_finalize"
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 185));
    }
    # 14 "sType_finalize"
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        # 13 "sType_finalize"
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 186));
    }
    # 15 "sType_finalize"
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        # 14 "sType_finalize"
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 187));
    }
    # 16 "sType_finalize"
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        # 15 "sType_finalize"
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 188));
    }
    # 17 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        # 16 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 189);
    }
    # 18 "sType_finalize"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 17 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 190);
    }
    # 19 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 18 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 192);
    }
    # 20 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 19 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 193);
    }
    # 21 "sType_finalize"
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        # 20 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 194);
    }
    # 22 "sType_finalize"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 21 "sType_finalize"
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 195));
    }
    # 23 "sType_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 22 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 196);
    }
    # 24 "sType_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 23 "sType_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 0, 199);
    }
    # 25 "sType_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 24 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 200);
    }
    # 26 "sType_finalize"
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        # 25 "sType_finalize"
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 201):(void*)0);
    }
    # 27 "sType_finalize"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 26 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 202);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 191);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 198);
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
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 197));
    }
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_push_back"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj9;
    struct list_item$1sNode$ph* litem_86;
    struct sNode* __dec_obj10;
    struct list_item$1sNode$ph* litem_87;
    struct sNode* __dec_obj11;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_86, 0, sizeof(litem_86));
    memset(&litem_87, 0, sizeof(litem_87));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1615, 361):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1619, 362, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1619, 363);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj9=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1623, 365);
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1623, 364) :0);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_86=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1629, 366, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1629, 367);
        # 1631 "./neo-c.h"
        litem_86->prev=self->head;
        # 1632 "./neo-c.h"
        litem_86->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj10=litem_86->item,
        litem_86->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1633, 369);
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1633, 368) :0);
        # 1635 "./neo-c.h"
        self->tail=litem_86;
        # 1636 "./neo-c.h"
        self->head->next=litem_86;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_87=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1639, 370, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1639, 371);
        # 1641 "./neo-c.h"
        litem_87->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_87->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj11=litem_87->item,
        litem_87->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1643, 373);
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1643, 372) :0);
        # 1645 "./neo-c.h"
        self->tail->next=litem_87;
        # 1646 "./neo-c.h"
        self->tail=litem_87;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1651, 374):(void*)0);
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

struct sNode* parse_tuple(struct sInfo*  info  , _Bool named_tuple)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_tuple"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
    char* p;
    char*  name  ;
    char*  __dec_obj12  ;
    _Bool no_comma;
    struct sNode* node;
    struct sNode* __dec_obj13;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    memset(&tuple_elements, 0, sizeof(tuple_elements));
    memset(&p, 0, sizeof(p));
    memset(&name, 0, sizeof(name));
    memset(&no_comma, 0, sizeof(no_comma));
    memset(&node, 0, sizeof(node));
    # 1504 "51str3.nc"
    tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "51str3.nc", 1504, 443, "struct list$1tuple2$2char$phsNode$ph$ph*"), "51str3.nc", 1504, 444)), "51str3.nc", 1504, 445);
    # 1540 "51str3.nc"
    while((_Bool)1) {
        # 1506 "51str3.nc"
        p=info->p;
        # 1508 "51str3.nc"
        # 1515 "51str3.nc"
        if(named_tuple) {
            # 1510 "51str3.nc"
            __right_value0 = (void*)0;
            __dec_obj12=name,
            name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "51str3.nc", 1510, 447);
            __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "51str3.nc", 1510, 446);
            # 1512 "51str3.nc"
            expected_next_character(58,info);
        }
        # 1515 "51str3.nc"
        no_comma=info->no_comma;
        # 1516 "51str3.nc"
        info->no_comma=(_Bool)1;
        # 1518 "51str3.nc"
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1518, 448);
        # 1519 "51str3.nc"
        __right_value0 = (void*)0;
        __dec_obj13=node,
        node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node, "51str3.nc", 1519, 449),info), "51str3.nc", 1519, 451);
        (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0, (void*)0, "51str3.nc", 1519, 450) :0);
        # 1521 "51str3.nc"
        info->no_comma=no_comma;
        # 1523 "51str3.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_push_back(tuple_elements,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "51str3.nc", 1523, 467, "struct tuple2$2char$phsNode$ph"), "51str3.nc", 1523, 468),(char* )come_increment_ref_count((char* )come_memdup(name, "51str3.nc", 1523, 466, "char* "), "51str3.nc", 1523, 469),(struct sNode*)come_increment_ref_count(node, "51str3.nc", 1523, 470)), "51str3.nc", 1523, 471));
        # 1538 "51str3.nc"
        if(*info->p==44) {
            # 1526 "51str3.nc"
            info->p++;
            # 1527 "51str3.nc"
            skip_spaces_and_lf(info);
        }
        else if(*info->p==41) {
            # 1530 "51str3.nc"
            info->p++;
            # 1531 "51str3.nc"
            skip_spaces_and_lf(info);
            # 1532 "51str3.nc"
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "51str3.nc", 1532, 472));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1532, 473):(void*)0);
            break;
        }
        else {
            # 1535 "51str3.nc"
            err_msg(info,"invalid character in tuple expression (%c)",*info->p);
            # 1536 "51str3.nc"
            exit(2);
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "51str3.nc", 1540, 474));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1540, 475):(void*)0);
    }
    # 1540 "51str3.nc"
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_tuple_node((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements, "51str3.nc", 1540, 476),info))), "51str3.nc", 1540, 477);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1540, 478);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1540, 479):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1540, 480):(void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_push_back"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj14;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_95;
    struct tuple2$2char$phsNode$ph* __dec_obj15;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_96;
    struct tuple2$2char$phsNode$ph* __dec_obj16;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_95, 0, sizeof(litem_95));
    memset(&litem_96, 0, sizeof(litem_96));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 452);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1619, 453, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1619, 454);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj14=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1623, 456);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 455);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_95=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1629, 457, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1629, 458);
        # 1631 "./neo-c.h"
        litem_95->prev=self->head;
        # 1632 "./neo-c.h"
        litem_95->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj15=litem_95->item,
        litem_95->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1633, 460);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 459);
        # 1635 "./neo-c.h"
        self->tail=litem_95;
        # 1636 "./neo-c.h"
        self->head->next=litem_95;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_96=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1639, 461, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1639, 462);
        # 1641 "./neo-c.h"
        litem_96->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_96->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj16=litem_96->item,
        litem_96->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1643, 464);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj16,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 463);
        # 1645 "./neo-c.h"
        self->tail->next=litem_96;
        # 1646 "./neo-c.h"
        self->tail=litem_96;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 465);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* parse_vector(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_vector"; neo_current_frame = &fr;
    char* p;
    int sline_real;
    _Bool no_comma;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    char* p2;
    void* __right_value1 = (void*)0;
    struct buffer*  first_element_source  ;
    struct list$1sNode$ph* list_elements;
    struct list$1sNode$ph* map_keys;
    struct list$1sNode$ph* map_elements;
    _Bool no_comma_97;
    struct sNode* node2;
    struct sNode* __result_obj__0;
    memset(&p, 0, sizeof(p));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&no_comma, 0, sizeof(no_comma));
    memset(&node, 0, sizeof(node));
    memset(&p2, 0, sizeof(p2));
    memset(&first_element_source, 0, sizeof(first_element_source));
    memset(&list_elements, 0, sizeof(list_elements));
    memset(&map_keys, 0, sizeof(map_keys));
    memset(&map_elements, 0, sizeof(map_elements));
    memset(&no_comma_97, 0, sizeof(no_comma_97));
    memset(&node2, 0, sizeof(node2));
    # 1545 "51str3.nc"
    p=info->p;
    # 1547 "51str3.nc"
    sline_real=info->sline;
    # 1549 "51str3.nc"
    no_comma=info->no_comma;
    # 1550 "51str3.nc"
    info->no_comma=(_Bool)1;
    # 1552 "51str3.nc"
    node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1552, 481);
    # 1554 "51str3.nc"
    info->no_comma=no_comma;
    # 1556 "51str3.nc"
    p2=info->p;
    # 1558 "51str3.nc"
    __right_value0 = (void*)0;
    first_element_source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "51str3.nc", 1558, 482, "struct buffer* "), "51str3.nc", 1558, 483)), "51str3.nc", 1558, 484);
    # 1560 "51str3.nc"
    buffer_append(first_element_source,p,p2-p);
    # 1561 "51str3.nc"
    buffer_append_char(first_element_source,0);
    # 1563 "51str3.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1563, 485, "struct list$1sNode$ph*"), "51str3.nc", 1563, 486)), "51str3.nc", 1563, 487);
    # 1565 "51str3.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    map_keys=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1565, 488, "struct list$1sNode$ph*"), "51str3.nc", 1565, 489)), "51str3.nc", 1565, 490);
    # 1566 "51str3.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "51str3.nc", 1566, 491, "struct list$1sNode$ph*"), "51str3.nc", 1566, 492)), "51str3.nc", 1566, 493);
    # 1615 "51str3.nc"
    if(*info->p==93) {
        # 1570 "51str3.nc"
        info->p++;
        # 1571 "51str3.nc"
        skip_spaces_and_lf(info);
        # 1573 "51str3.nc"
        list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node, "51str3.nc", 1573, 494));
    }
    else if(*info->p==44) {
        # 1576 "51str3.nc"
        info->p++;
        # 1577 "51str3.nc"
        skip_spaces_and_lf(info);
        # 1579 "51str3.nc"
        list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node, "51str3.nc", 1579, 495));
        # 1609 "51str3.nc"
        while((_Bool)1) {
            # 1582 "51str3.nc"
            no_comma_97=info->no_comma;
            # 1583 "51str3.nc"
            info->no_comma=(_Bool)1;
            # 1585 "51str3.nc"
            __right_value0 = (void*)0;
            node2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "51str3.nc", 1585, 496);
            # 1587 "51str3.nc"
            info->no_comma=no_comma_97;
            # 1589 "51str3.nc"
            list$1sNode$ph_push_back(list_elements,(struct sNode*)come_increment_ref_count(node2, "51str3.nc", 1589, 497));
            # 1608 "51str3.nc"
            if(*info->p==0) {
                # 1592 "51str3.nc"
                err_msg(info,"invalid source end");
                # 1593 "51str3.nc"
                exit(2);
            }
            else if(*info->p==44) {
                # 1596 "51str3.nc"
                info->p++;
                # 1597 "51str3.nc"
                skip_spaces_and_lf(info);
            }
            else if(*info->p==93) {
                # 1600 "51str3.nc"
                info->p++;
                # 1601 "51str3.nc"
                skip_spaces_and_lf(info);
                # 1602 "51str3.nc"
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1602, 498):(void*)0);
                break;
            }
            else {
                # 1605 "51str3.nc"
                err_msg(info,"invalid character(4)(%c)",*info->p);
                # 1606 "51str3.nc"
                exit(2);
            }
            ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1609, 499):(void*)0);
        }
    }
    else {
        # 1611 "51str3.nc"
        err_msg(info,"invalid character(5)(%c)",*info->p);
        # 1612 "51str3.nc"
        exit(2);
    }
    # 1620 "51str3.nc"
    if(list$1sNode$ph_length(list_elements)>0) {
        # 1616 "51str3.nc"
        info->sline_real=sline_real;
        # 1617 "51str3.nc"
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_vector_node((struct list$1sNode$ph*)come_increment_ref_count(list_elements, "51str3.nc", 1617, 500),info))), "51str3.nc", 1617, 501);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1617, 502):(void*)0);
        come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1617, 503);
        come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1617, 504);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1617, 505);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1617, 506);
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "51str3.nc", 1617, 507):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1617, 508):(void*)0);
        return __result_obj__0;
    }
    # 1620 "51str3.nc"
    err_msg(info,"invalid vector");
    # 1622 "51str3.nc"
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "51str3.nc", 1622, 509);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "51str3.nc", 1622, 510):(void*)0);
    come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1622, 511);
    come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1622, 512);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1622, 513);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "51str3.nc}", 1622, 514);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "51str3.nc", 1622, 515):(void*)0);
    return __result_obj__0;
}

