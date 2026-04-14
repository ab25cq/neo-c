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

struct sTrueNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sFalseNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sGeneric
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
    struct list$1sType$ph* types;
    struct list$1sNode$ph* exps;
    struct sNode* default_exp;
};

struct sHeapSizeOfNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sSizeOfNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sOffsetOf
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
    char*  name  ;
};

struct sSizeOfExpNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sDynamicSizeOfExpNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sTypeOfNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sTypeOfExpNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sDynamicTypeOf
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sAlignOfExpNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode2
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sAlignOfExpNode2
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sAlignAsNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sAlignAsExpNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sDeleteNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sBorrowNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sCloneNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sDupeNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sDummyHeapNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sGCIncNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sGCDecNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sIsHeap
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sIsPointer
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sGCDecNoFreeNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sRefNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sOptionalNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct tuple2$2sNode$phsNode$ph
{
    struct sNode* v1;
    struct sNode* v2;
};

struct sSpanNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
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
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo*  info  );
char*  sTrueNode_kind(struct sTrueNode* self);
_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sTrueNode_finalize(struct sTrueNode* self);
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
struct sNode* create_true_object(struct sInfo*  info  );
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo*  info  );
char*  sFalseNode_kind(struct sFalseNode* self);
_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo*  info  );
static void sFalseNode_finalize(struct sFalseNode* self);
struct sNode* create_false_object(struct sInfo*  info  );
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
struct sGeneric* sGeneric_initialize(struct sGeneric* self, struct sNode* exp, struct list$1sType$ph* types, struct list$1sNode$ph* exps, struct sNode* default_exp, struct sInfo*  info  );
char*  sGeneric_kind(struct sGeneric* self);
_Bool sGeneric_compile(struct sGeneric* self, struct sInfo*  info  );
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static void sGeneric_finalize(struct sGeneric* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
struct sHeapSizeOfNode* sHeapSizeOfNode_initialize(struct sHeapSizeOfNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sHeapSizeOfNode_kind(struct sHeapSizeOfNode* self);
_Bool sHeapSizeOfNode_compile(struct sHeapSizeOfNode* self, struct sInfo*  info  );
static struct sType*  sType_clone(struct sType*  self  );
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  );
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1int$* list$1int$$p_clone(struct list$1int$* self);
static struct list$1int$* list$1int$_initialize(struct list$1int$* self);
static struct list$1int$* list$1int$_add(struct list$1int$* self, int item);
static void list$1int$_finalize(struct list$1int$* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  );
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void sHeapSizeOfNode_finalize(struct sHeapSizeOfNode* self);
struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sSizeOfNode_kind(struct sSizeOfNode* self);
_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo*  info  );
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
struct sOffsetOf* sOffsetOf_initialize(struct sOffsetOf* self, struct sType*  type  , char*  name  , struct sInfo*  info  );
char*  sOffsetOf_kind(struct sOffsetOf* self);
_Bool sOffsetOf_compile(struct sOffsetOf* self, struct sInfo*  info  );
static void sOffsetOf_finalize(struct sOffsetOf* self);
struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo*  info  );
char*  sSizeOfExpNode_kind(struct sSizeOfExpNode* self);
_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo*  info  );
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
struct sDynamicSizeOfExpNode* sDynamicSizeOfExpNode_initialize(struct sDynamicSizeOfExpNode* self, struct sNode* exp, struct sInfo*  info  );
char*  sDynamicSizeOfExpNode_kind(struct sDynamicSizeOfExpNode* self);
_Bool sDynamicSizeOfExpNode_compile(struct sDynamicSizeOfExpNode* self, struct sInfo*  info  );
static void sDynamicSizeOfExpNode_finalize(struct sDynamicSizeOfExpNode* self);
struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sTypeOfNode_kind(struct sTypeOfNode* self);
_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo*  info  );
static void sTypeOfNode_finalize(struct sTypeOfNode* self);
struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo*  info  );
char*  sTypeOfExpNode_kind(struct sTypeOfExpNode* self);
_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo*  info  );
static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self);
struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo*  info  );
char*  sDynamicTypeOf_kind(struct sDynamicTypeOf* self);
_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo*  info  );
static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self);
struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sAlignOfNode_kind(struct sAlignOfNode* self);
_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo*  info  );
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo*  info  );
char*  sAlignOfExpNode_kind(struct sAlignOfExpNode* self);
_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo*  info  );
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType*  type  , struct sInfo*  info  );
char*  sAlignOfNode2_kind(struct sAlignOfNode2* self);
_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo*  info  );
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo*  info  );
char*  sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self);
_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo*  info  );
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sAlignAsNode_kind(struct sAlignAsNode* self);
_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo*  info  );
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo*  info  );
char*  sAlignAsExpNode_kind(struct sAlignAsExpNode* self);
_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo*  info  );
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo*  info  );
char*  sDeleteNode_kind(struct sDeleteNode* self);
_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo*  info  );
static void sDeleteNode_finalize(struct sDeleteNode* self);
struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo*  info  );
char*  sBorrowNode_kind(struct sBorrowNode* self);
_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo*  info  );
static void sBorrowNode_finalize(struct sBorrowNode* self);
struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo*  info  );
char*  sCloneNode_kind(struct sCloneNode* self);
_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo*  info  );
static void sCloneNode_finalize(struct sCloneNode* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo*  info  );
char*  sDupeNode_kind(struct sDupeNode* self);
_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo*  info  );
static void sDupeNode_finalize(struct sDupeNode* self);
struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo*  info  );
char*  sDummyHeapNode_kind(struct sDummyHeapNode* self);
_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo*  info  );
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo*  info  );
char*  sGCIncNode_kind(struct sGCIncNode* self);
_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo*  info  );
static void sGCIncNode_finalize(struct sGCIncNode* self);
struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo*  info  );
char*  sGCDecNode_kind(struct sGCDecNode* self);
_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo*  info  );
static void sGCDecNode_finalize(struct sGCDecNode* self);
struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType*  type  , struct sInfo*  info  );
char*  sIsHeap_kind(struct sIsHeap* self);
_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo*  info  );
static void sIsHeap_finalize(struct sIsHeap* self);
struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType*  type  , struct sInfo*  info  );
char*  sIsPointer_kind(struct sIsPointer* self);
_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo*  info  );
static void sIsPointer_finalize(struct sIsPointer* self);
struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo*  info  );
char*  sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self);
_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo*  info  );
static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self);
struct sRefNode* sRefNode_initialize(struct sRefNode* self, struct sNode* node, struct sInfo*  info  );
char*  sRefNode_kind(struct sRefNode* self);
_Bool sRefNode_compile(struct sRefNode* self, struct sInfo*  info  );
static void sRefNode_finalize(struct sRefNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2);
struct sOptionalNode* sOptionalNode_initialize(struct sOptionalNode* self, struct sNode* node, struct sInfo*  info  );
char*  sOptionalNode_kind(struct sOptionalNode* self);
_Bool sOptionalNode_compile(struct sOptionalNode* self, struct sInfo*  info  );
static void sOptionalNode_finalize(struct sOptionalNode* self);
static _Bool is_buffer_like_type(struct sType*  type  );
struct tuple2$2sNode$phsNode$ph* get_head_and_len(struct sNode* node, struct CVALUE*  come_value  , struct sInfo*  info  );
static struct sHeapSizeOfNode* sHeapSizeOfNode_clone(struct sHeapSizeOfNode* self);
static struct sDynamicSizeOfExpNode* sDynamicSizeOfExpNode_clone(struct sDynamicSizeOfExpNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_initialize(struct tuple2$2sNode$phsNode$ph* self, struct sNode* v1, struct sNode* v2);
static void tuple2$2sNode$phsNode$ph$p_finalize(struct tuple2$2sNode$phsNode$ph* self);
struct sSpanNode* sSpanNode_initialize(struct sSpanNode* self, struct sNode* node, struct sInfo*  info  );
char*  sSpanNode_kind(struct sSpanNode* self);
_Bool sSpanNode_compile(struct sSpanNode* self, struct sInfo*  info  );
static void sSpanNode_finalize(struct sSpanNode* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
struct sNode* create_delete_node(struct sNode* node, struct sInfo*  info  );
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
struct sNode* create_borrow_node(struct sNode* node, struct sInfo*  info  );
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
struct sNode* create_clone_node(struct sNode* node, struct sInfo*  info  );
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
struct sNode* create_dupe_node(struct sNode* node, struct sInfo*  info  );
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
struct sNode* create_dummy_heap_node(struct sNode* node, struct sInfo*  info  );
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
struct sNode* create_gc_inc_node(struct sNode* node, struct sInfo*  info  );
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
struct sNode* create_gc_dec_node(struct sNode* node, struct sInfo*  info  );
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
struct sNode* create_gc_dec_nofree_node(struct sNode* node, struct sInfo*  info  );
static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self);
struct sNode* create_is_heap_node(struct sType*  type  , struct sInfo*  info  );
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
struct sNode* create_is_pointer_node(struct sType*  type  , struct sInfo*  info  );
static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self);
struct sNode* create_optional_node(struct sNode* node, struct sInfo*  info  );
static struct sOptionalNode* sOptionalNode_clone(struct sOptionalNode* self);
struct sNode* create_ref_node(struct sNode* node, struct sInfo*  info  );
static struct sRefNode* sRefNode_clone(struct sRefNode* self);
struct sNode* create_span_node(struct sNode* node, struct sInfo*  info  );
static struct sSpanNode* sSpanNode_clone(struct sSpanNode* self);
struct sNode* create_generic_node(struct sNode* exp, struct list$1sType$ph* types, struct list$1sNode$ph* exps, struct sNode* default_exp, struct sInfo*  info  );
static struct sGeneric* sGeneric_clone(struct sGeneric* self);
struct sNode* create_offsetof_node(struct sType*  type  , char*  name  , struct sInfo*  info  );
static struct sOffsetOf* sOffsetOf_clone(struct sOffsetOf* self);
struct sNode* create_sizeof_node(struct sType*  type  , struct sInfo*  info  );
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
struct sNode* create_sizeof_exp_node(struct sNode* exp, struct sInfo*  info  );
struct sNode* create_dynamic_typeof_node(struct sNode* exp, struct sInfo*  info  );
static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self);
struct sNode* create_dynamic_sizeof_exp_node(struct sNode* exp, struct sInfo*  info  );
struct sNode* create_alignof_node(struct sType*  type  , struct sInfo*  info  );
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
struct sNode* create_alignof_exp_node(struct sNode* exp, struct sInfo*  info  );
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
struct sNode* create_alignof_node2(struct sType*  type  , struct sInfo*  info  );
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
struct sNode* create_alignof_exp_node2(struct sNode* exp, struct sInfo*  info  );
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
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
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sTrueNode* __result_obj__0;
    # 7 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTrueNode*)come_increment_ref_count(self, "53obj4.nc", 7, 1),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 7, 3);
    # 10 "53obj4.nc"
        __result_obj__0 = (struct sTrueNode*)come_increment_ref_count(self, "53obj4.nc", 10, 4);
    come_call_finalizer(sTrueNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 10, 6);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTrueNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 10, 7);
    return __result_obj__0;
}

char*  sTrueNode_kind(struct sTrueNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 12 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTrueNode","53obj4.nc",12))), "53obj4.nc", 12, 8);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 12, 9));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 12, 10));
    return __result_obj__0;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj1  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj2  ;
    _Bool __result_obj__0;
    memset(&come_value, 0, sizeof(come_value));
    # 17 "53obj4.nc"
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 17, 11, "struct CVALUE* "), "53obj4.nc", 17, 12)), "53obj4.nc", 17, 13);
    # 19 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj1=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("(_Bool)1"), "53obj4.nc", 19, 15);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 19, 14);
    # 20 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj2=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 20, 16, "struct sType* "), "53obj4.nc", 20, 17),(char*)come_increment_ref_count(xsprintf("_Bool"), "53obj4.nc", 20, 18),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 20, 52);
    come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 20, 51);
    # 21 "53obj4.nc"
    come_value->var=((void*)0);
    # 23 "53obj4.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 25 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 25, 72));
    # 27 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 27, 73);
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

static void sTrueNode_finalize(struct sTrueNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_finalize"; neo_current_frame = &fr;
    # 1 "sTrueNode_finalize"
    # 3 "sTrueNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sTrueNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sTrueNode_finalize", 2, 5));
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

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj3  ;
    struct list_item$1CVALUE$ph* litem_0;
    struct CVALUE*  __dec_obj4  ;
    struct list_item$1CVALUE$ph* litem_1;
    struct CVALUE*  __dec_obj5  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_0, 0, sizeof(litem_0));
    memset(&litem_1, 0, sizeof(litem_1));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 58);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1619, 59, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1619, 60);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj3=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1623, 62);
        come_call_finalizer(CVALUE_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 61);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1629, 63, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1629, 64);
        # 1631 "./neo-c.h"
        litem_0->prev=self->head;
        # 1632 "./neo-c.h"
        litem_0->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj4=litem_0->item,
        litem_0->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1633, 66);
        come_call_finalizer(CVALUE_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 65);
        # 1635 "./neo-c.h"
        self->tail=litem_0;
        # 1636 "./neo-c.h"
        self->head->next=litem_0;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1639, 67, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1639, 68);
        # 1641 "./neo-c.h"
        litem_1->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_1->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj5=litem_1->item,
        litem_1->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1643, 70);
        come_call_finalizer(CVALUE_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 69);
        # 1645 "./neo-c.h"
        self->tail->next=litem_1;
        # 1646 "./neo-c.h"
        self->tail=litem_1;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 71);
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
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 53));
    }
    # 4 "CVALUE_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 3 "CVALUE_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 54);
    }
    # 5 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        # 4 "CVALUE_finalize"
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 55));
    }
    # 6 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        # 5 "CVALUE_finalize"
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 56));
    }
    # 7 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        # 6 "CVALUE_finalize"
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 57));
    }
            neo_current_frame = fr.prev;
}

struct sNode* create_true_object(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_true_object"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sTrueNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 33 "53obj4.nc"
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 33, 76, "struct sNode");
    _inf_obj_value1=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value1=sTrueNode_initialize((struct sTrueNode* )come_increment_ref_count((struct sTrueNode *)come_calloc(1, sizeof(struct sTrueNode )*(1), "53obj4.nc", 33, 74, "struct sTrueNode* "), "53obj4.nc", 33, 75),info))), "53obj4.nc", 33, 77);
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sTrueNode_finalize;
    _inf_value1->clone=(void*)sTrueNode_clone;
    _inf_value1->compile=(void*)sTrueNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sTrueNode_kind;
    _inf_value1->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "53obj4.nc", 33, 84);
    come_call_finalizer(sTrueNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 33, 85);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 33, 86):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 33, 87):(void*)0);
    return __result_obj__0;
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_clone"; neo_current_frame = &fr;
    struct sTrueNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sTrueNode*  result  ;
    char*  __dec_obj6  ;
    memset(&result, 0, sizeof(result));
    # 3 "sTrueNode_clone"
    # 5 "sTrueNode_clone"
    if(self==(void*)0) {
        # 4 "sTrueNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sTrueNode_clone"
    result=(struct sTrueNode* )come_increment_ref_count((struct sTrueNode *)come_calloc(1, sizeof(struct sTrueNode )*(1), "sTrueNode_clone", 5, 78, "struct sTrueNode* "), "sTrueNode_clone", 5, 79);
    # 7 "sTrueNode_clone"
    if(self!=((void*)0)) {
        # 6 "sTrueNode_clone"
        result->sline=self->sline;
    }
    # 8 "sTrueNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sTrueNode_clone"
        __right_value0 = (void*)0;
        __dec_obj6=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sTrueNode_clone", 7, 80, "char* "), "sTrueNode_clone", 7, 82);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "sTrueNode_clone", 7, 81);
    }
    # 9 "sTrueNode_clone"
    if(self!=((void*)0)) {
        # 8 "sTrueNode_clone"
        result->sline_real=self->sline_real;
    }
    # 9 "sTrueNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sTrueNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sTrueNode_clone}", 9, 83);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sFalseNode* __result_obj__0;
    # 40 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sFalseNode*)come_increment_ref_count(self, "53obj4.nc", 40, 88),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 40, 89);
    # 43 "53obj4.nc"
        __result_obj__0 = (struct sFalseNode*)come_increment_ref_count(self, "53obj4.nc", 43, 90);
    come_call_finalizer(sFalseNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 43, 92);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFalseNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 43, 93);
    return __result_obj__0;
}

char*  sFalseNode_kind(struct sFalseNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 45 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sFalseNode","53obj4.nc",45))), "53obj4.nc", 45, 94);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 45, 95));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 45, 96));
    return __result_obj__0;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj7  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj8  ;
    _Bool __result_obj__0;
    memset(&come_value, 0, sizeof(come_value));
    # 50 "53obj4.nc"
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 50, 97, "struct CVALUE* "), "53obj4.nc", 50, 98)), "53obj4.nc", 50, 99);
    # 52 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj7=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("(_Bool)0"), "53obj4.nc", 52, 101);
    __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 52, 100);
    # 53 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj8=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 53, 102, "struct sType* "), "53obj4.nc", 53, 103),(char*)come_increment_ref_count(xsprintf("_Bool"), "53obj4.nc", 53, 104),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 53, 106);
    come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 53, 105);
    # 54 "53obj4.nc"
    come_value->var=((void*)0);
    # 56 "53obj4.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 58 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 58, 107));
    # 60 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 60, 108);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sFalseNode_finalize(struct sFalseNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_finalize"; neo_current_frame = &fr;
    # 1 "sFalseNode_finalize"
    # 3 "sFalseNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sFalseNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFalseNode_finalize", 2, 91));
    }
        neo_current_frame = fr.prev;
}

struct sNode* create_false_object(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_false_object"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value2;
    struct sFalseNode* _inf_obj_value2;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 66 "53obj4.nc"
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 66, 111, "struct sNode");
    _inf_obj_value2=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value1=sFalseNode_initialize((struct sFalseNode* )come_increment_ref_count((struct sFalseNode *)come_calloc(1, sizeof(struct sFalseNode )*(1), "53obj4.nc", 66, 109, "struct sFalseNode* "), "53obj4.nc", 66, 110),info))), "53obj4.nc", 66, 112);
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFalseNode_finalize;
    _inf_value2->clone=(void*)sFalseNode_clone;
    _inf_value2->compile=(void*)sFalseNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sFalseNode_kind;
    _inf_value2->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)), "53obj4.nc", 66, 119);
    come_call_finalizer(sFalseNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 66, 120);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 66, 121):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 66, 122):(void*)0);
    return __result_obj__0;
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_clone"; neo_current_frame = &fr;
    struct sFalseNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFalseNode*  result  ;
    char*  __dec_obj9  ;
    memset(&result, 0, sizeof(result));
    # 3 "sFalseNode_clone"
    # 5 "sFalseNode_clone"
    if(self==(void*)0) {
        # 4 "sFalseNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sFalseNode_clone"
    result=(struct sFalseNode* )come_increment_ref_count((struct sFalseNode *)come_calloc(1, sizeof(struct sFalseNode )*(1), "sFalseNode_clone", 5, 113, "struct sFalseNode* "), "sFalseNode_clone", 5, 114);
    # 7 "sFalseNode_clone"
    if(self!=((void*)0)) {
        # 6 "sFalseNode_clone"
        result->sline=self->sline;
    }
    # 8 "sFalseNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sFalseNode_clone"
        __right_value0 = (void*)0;
        __dec_obj9=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sFalseNode_clone", 7, 115, "char* "), "sFalseNode_clone", 7, 117);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "sFalseNode_clone", 7, 116);
    }
    # 9 "sFalseNode_clone"
    if(self!=((void*)0)) {
        # 8 "sFalseNode_clone"
        result->sline_real=self->sline_real;
    }
    # 9 "sFalseNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sFalseNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFalseNode_clone}", 9, 118);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sGeneric* sGeneric_initialize(struct sGeneric* self, struct sNode* exp, struct list$1sType$ph* types, struct list$1sNode$ph* exps, struct sNode* default_exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj10;
    struct list$1sType$ph* __dec_obj11;
    struct list$1sNode$ph* __dec_obj12;
    struct sNode* __dec_obj13;
    struct sGeneric* __result_obj__0;
    # 73 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGeneric*)come_increment_ref_count(self, "53obj4.nc", 73, 123),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 73, 124);
    # 75 "53obj4.nc"
    __dec_obj10=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp, "53obj4.nc", 75, 126);
    (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 75, 125) :0);
    # 76 "53obj4.nc"
    __dec_obj11=self->types,
    self->types=(struct list$1sType$ph*)come_increment_ref_count(types, "53obj4.nc", 151, 129);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 151, 128);
    # 77 "53obj4.nc"
    __dec_obj12=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps, "53obj4.nc", 151, 132);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj12,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 151, 131);
    # 78 "53obj4.nc"
    __dec_obj13=self->default_exp,
    self->default_exp=(struct sNode*)come_increment_ref_count(default_exp, "53obj4.nc", 78, 134);
    (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 78, 133) :0);
    # 81 "53obj4.nc"
        __result_obj__0 = (struct sGeneric*)come_increment_ref_count(self, "53obj4.nc", 81, 135);
    come_call_finalizer(sGeneric_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 81, 141);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 81, 142):(void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 81, 143);
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 81, 144);
    ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 81, 145):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGeneric_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 81, 146);
    return __result_obj__0;
}

char*  sGeneric_kind(struct sGeneric* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 83 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGeneric","53obj4.nc",83))), "53obj4.nc", 83, 147);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 83, 148));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 83, 149));
    return __result_obj__0;
}

_Bool sGeneric_compile(struct sGeneric* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    struct list$1sNode$ph* exps;
    struct list$1sType$ph* types;
    struct sNode* default_exp;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  come_value  ;
    struct sType*  result_type  ;
    int n;
    struct list$1sNode$ph* _o2_saved_3;
    struct sNode* it;
    struct sType*  type  ;
    _Bool Value_6;
    struct CVALUE*  come_value_7  ;
    struct sType*  __dec_obj14  ;
    _Bool Value_8;
    struct CVALUE*  come_value_9  ;
    int n_10;
    struct list$1sNode$ph* _o2_saved_4;
    struct sNode* it_11;
    struct sType*  type_12  ;
    _Bool Value_13;
    struct CVALUE*  come_value_14  ;
    struct sType*  __dec_obj15  ;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj16  ;
    struct sType*  __dec_obj17  ;
    memset(&exp, 0, sizeof(exp));
    memset(&exps, 0, sizeof(exps));
    memset(&types, 0, sizeof(types));
    memset(&default_exp, 0, sizeof(default_exp));
    memset(&buf, 0, sizeof(buf));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&result_type, 0, sizeof(result_type));
    memset(&n, 0, sizeof(n));
    memset(&_o2_saved_3, 0, sizeof(_o2_saved_3));
    memset(&it, 0, sizeof(it));
    memset(&type, 0, sizeof(type));
    memset(&Value_6, 0, sizeof(Value_6));
    memset(&come_value_7, 0, sizeof(come_value_7));
    memset(&Value_8, 0, sizeof(Value_8));
    memset(&come_value_9, 0, sizeof(come_value_9));
    memset(&n_10, 0, sizeof(n_10));
    memset(&_o2_saved_4, 0, sizeof(_o2_saved_4));
    memset(&it_11, 0, sizeof(it_11));
    memset(&type_12, 0, sizeof(type_12));
    memset(&Value_13, 0, sizeof(Value_13));
    memset(&come_value_14, 0, sizeof(come_value_14));
    memset(&come_value2, 0, sizeof(come_value2));
    # 88 "53obj4.nc"
    exp=(struct sNode*)come_increment_ref_count(self->exp, "53obj4.nc", 88, 150);
    # 89 "53obj4.nc"
    exps=(struct list$1sNode$ph*)come_increment_ref_count(self->exps, "53obj4.nc", 89, 151);
    # 90 "53obj4.nc"
    types=(struct list$1sType$ph*)come_increment_ref_count(self->types, "53obj4.nc", 90, 152);
    # 91 "53obj4.nc"
    default_exp=(struct sNode*)come_increment_ref_count(self->default_exp, "53obj4.nc", 91, 153);
    # 93 "53obj4.nc"
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "53obj4.nc", 93, 154, "struct buffer* "), "53obj4.nc", 93, 155)), "53obj4.nc", 93, 156);
    # 98 "53obj4.nc"
    Value=node_compile(exp,info);
    if(!Value) {
        # 96 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 96, 157):(void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 96, 158);
        come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 96, 159);
        ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 96, 160):(void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 96, 161);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 98 "53obj4.nc"
    __right_value0 = (void*)0;
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 98, 162);
    # 100 "53obj4.nc"
    buffer_append_format(buf,"_Generic((%s), ",come_value->c_value);
    # 102 "53obj4.nc"
    result_type=((void*)0);
    # 160 "53obj4.nc"
    if(default_exp) {
        # 104 "53obj4.nc"
        n=0;
        # 123 "53obj4.nc"
        for(_o2_saved_3=(struct list$1sNode$ph*)come_increment_ref_count(exps, "53obj4.nc", 105, 163),it=list$1sNode$ph_begin(_o2_saved_3)        ;!list$1sNode$ph_end(_o2_saved_3);it=list$1sNode$ph_next(_o2_saved_3)){
            # 106 "53obj4.nc"
            __right_value0 = (void*)0;
            type=(struct sType* )come_increment_ref_count(list$1sType$ph_operator_load_element(types,n), "53obj4.nc", 106, 182);
            # 112 "53obj4.nc"
            Value_6=node_compile(it,info);
            if(!Value_6) {
                # 109 "53obj4.nc"
                                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 109, 183);
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 109, 184);
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 109, 185):(void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 109, 186);
                come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 109, 187);
                ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 109, 188):(void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 109, 189);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 109, 190);
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 109, 191);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            # 112 "53obj4.nc"
            __right_value0 = (void*)0;
            come_value_7=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 112, 192);
            # 114 "53obj4.nc"
            __dec_obj14=result_type,
            result_type=(struct sType* )come_increment_ref_count(come_value_7->type, "53obj4.nc", 114, 194);
            come_call_finalizer(sType_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 114, 193);
            # 116 "53obj4.nc"
            __right_value0 = (void*)0;
            buffer_append_format(buf,"%s: %s",((char* )(__right_value0=make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))),come_value_7->c_value);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 116, 195));
            # 118 "53obj4.nc"
            buffer_append_format(buf,",");
            # 120 "53obj4.nc"
            n++;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 123, 196);
            come_call_finalizer(CVALUE_finalize, come_value_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 123, 197);
        }
        # 127 "53obj4.nc"
        Value_8=node_compile(default_exp,info);
        if(!Value_8) {
            # 124 "53obj4.nc"
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 124, 198);
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 124, 199):(void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 124, 200);
            come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 124, 201);
            ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 124, 202):(void*)0);
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 124, 203);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 124, 204);
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 124, 205);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 127 "53obj4.nc"
        __right_value0 = (void*)0;
        come_value_9=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 127, 206);
        # 129 "53obj4.nc"
        buffer_append_format(buf,"default: %s",come_value_9->c_value);
        # 131 "53obj4.nc"
        buffer_append_format(buf,")");
        come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 160, 207);
        come_call_finalizer(CVALUE_finalize, come_value_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 160, 208);
    }
    else {
        # 134 "53obj4.nc"
        n_10=0;
        # 157 "53obj4.nc"
        for(_o2_saved_4=(struct list$1sNode$ph*)come_increment_ref_count(exps, "53obj4.nc", 135, 209),it_11=list$1sNode$ph_begin(_o2_saved_4)        ;!list$1sNode$ph_end(_o2_saved_4);it_11=list$1sNode$ph_next(_o2_saved_4)){
            # 136 "53obj4.nc"
            __right_value0 = (void*)0;
            type_12=(struct sType* )come_increment_ref_count(list$1sType$ph_operator_load_element(types,n_10), "53obj4.nc", 136, 210);
            # 142 "53obj4.nc"
            Value_13=node_compile(it_11,info);
            if(!Value_13) {
                # 139 "53obj4.nc"
                                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, type_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 139, 211);
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 139, 212);
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 139, 213):(void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 139, 214);
                come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 139, 215);
                ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 139, 216):(void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 139, 217);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 139, 218);
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 139, 219);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            # 142 "53obj4.nc"
            __right_value0 = (void*)0;
            come_value_14=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 142, 220);
            # 144 "53obj4.nc"
            __dec_obj15=result_type,
            result_type=(struct sType* )come_increment_ref_count(come_value_14->type, "53obj4.nc", 144, 222);
            come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 144, 221);
            # 146 "53obj4.nc"
            __right_value0 = (void*)0;
            buffer_append_format(buf,"%s: %s",((char* )(__right_value0=make_type_name_string(type_12,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))),come_value_14->c_value);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 146, 223));
            # 155 "53obj4.nc"
            if(n_10==list$1sNode$ph_length(exps)-1) {
                # 149 "53obj4.nc"
                buffer_append_format(buf,")");
            }
            else {
                # 152 "53obj4.nc"
                buffer_append_format(buf,",");
            }
            # 155 "53obj4.nc"
            n_10++;
            come_call_finalizer(sType_finalize, type_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 157, 224);
            come_call_finalizer(CVALUE_finalize, come_value_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 157, 225);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 160, 226);
    }
    # 160 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 160, 227, "struct CVALUE* "), "53obj4.nc", 160, 228)), "53obj4.nc", 160, 229);
    # 162 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj16=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "53obj4.nc", 162, 231);
    __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 162, 230);
    # 163 "53obj4.nc"
    __dec_obj17=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(result_type, "53obj4.nc", 163, 233);
    come_call_finalizer(sType_finalize, __dec_obj17,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 163, 232);
    # 164 "53obj4.nc"
    come_value2->var=((void*)0);
    # 166 "53obj4.nc"
    add_come_last_code(info,"%s",come_value2->c_value);
    # 168 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "53obj4.nc", 168, 234));
    # 170 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 170, 235):(void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 170, 236);
    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 170, 237);
    ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 170, 238):(void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 170, 239);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 170, 240);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 170, 241);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 170, 242);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 127);
    }
        neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 130);
    }
        neo_current_frame = fr.prev;
}

static void sGeneric_finalize(struct sGeneric* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_finalize"; neo_current_frame = &fr;
    # 1 "sGeneric_finalize"
    # 3 "sGeneric_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sGeneric_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sGeneric_finalize", 2, 136));
    }
    # 4 "sGeneric_finalize"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 3 "sGeneric_finalize"
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sGeneric_finalize", 3, 137):(void*)0);
    }
    # 5 "sGeneric_finalize"
    if(self!=((void*)0)&&self->types!=((void*)0)) {
        # 4 "sGeneric_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGeneric_finalize}", 4, 138);
    }
    # 6 "sGeneric_finalize"
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        # 5 "sGeneric_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGeneric_finalize}", 5, 139);
    }
    # 7 "sGeneric_finalize"
    if(self!=((void*)0)&&self->default_exp!=((void*)0)) {
        # 6 "sGeneric_finalize"
        ((self->default_exp) ? self->default_exp = come_decrement_ref_count(self->default_exp, ((struct sNode*)self->default_exp)->finalize, ((struct sNode*)self->default_exp)->_protocol_obj, 0, 0,(void*)0, "sGeneric_finalize", 6, 140):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_2;
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
    memset(&result_2,0,sizeof(struct sNode*));
    # 1697 "./neo-c.h"
        __result_obj__0 = result_2;
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
    struct sNode* result_3;
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
    memset(&result_3,0,sizeof(struct sNode*));
    # 1717 "./neo-c.h"
        __result_obj__0 = result_3;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_4  ;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sType* ));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 164);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 165);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 166);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2161, 167);
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
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 168);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 169);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_4,0,sizeof(struct sType* ));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_4, "./neo-c.h", 2177, 170);
    come_call_finalizer(sType_finalize, default_value_4, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 171);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 172);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_5  ;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sType* ));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 173);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 174);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 175);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2161, 176);
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
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 177);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 178);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_5,0,sizeof(struct sType* ));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_5, "./neo-c.h", 2177, 179);
    come_call_finalizer(sType_finalize, default_value_5, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 180);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 181);
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

struct sHeapSizeOfNode* sHeapSizeOfNode_initialize(struct sHeapSizeOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj52  ;
    struct sHeapSizeOfNode* __result_obj__0;
    # 178 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sHeapSizeOfNode*)come_increment_ref_count(self, "53obj4.nc", 178, 243),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 178, 244);
    # 180 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj52=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "53obj4.nc", 180, 417);
    come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 180, 416);
    # 183 "53obj4.nc"
        __result_obj__0 = (struct sHeapSizeOfNode*)come_increment_ref_count(self, "53obj4.nc", 183, 418);
    come_call_finalizer(sHeapSizeOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 183, 421);
    neo_current_frame = fr.prev;
    come_call_finalizer(sHeapSizeOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 183, 422);
    return __result_obj__0;
}

char*  sHeapSizeOfNode_kind(struct sHeapSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 185 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sHeapSizeOfNode","53obj4.nc",185))), "53obj4.nc", 185, 423);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 185, 424));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 185, 425));
    return __result_obj__0;
}

_Bool sHeapSizeOfNode_compile(struct sHeapSizeOfNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    struct buffer*  buf  ;
    struct list$1sNode$ph* _o2_saved_5;
    struct sNode* it;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  cvalue  ;
    char*  __dec_obj53  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj54  ;
    memset(&type, 0, sizeof(type));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type2_, 0, sizeof(type2_));
    memset(&type2, 0, sizeof(type2));
    memset(&type_name, 0, sizeof(type_name));
    memset(&buf, 0, sizeof(buf));
    memset(&_o2_saved_5, 0, sizeof(_o2_saved_5));
    memset(&it, 0, sizeof(it));
    memset(&Value, 0, sizeof(Value));
    memset(&cvalue, 0, sizeof(cvalue));
    # 190 "53obj4.nc"
    type=(struct sType* )come_increment_ref_count(self->type, "53obj4.nc", 190, 426);
    # 192 "53obj4.nc"
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 192, 427, "struct CVALUE* "), "53obj4.nc", 192, 428)), "53obj4.nc", 192, 429);
    # 194 "53obj4.nc"
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "53obj4.nc", 194, 430);
    # 195 "53obj4.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "53obj4.nc", 195, 431);
    # 197 "53obj4.nc"
    type2->mPointerNum--;
    # 199 "53obj4.nc"
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)1,(_Bool)0,(_Bool)1,(_Bool)0), "53obj4.nc", 199, 432);
    # 201 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "53obj4.nc", 201, 433, "struct buffer* "), "53obj4.nc", 201, 434)), "53obj4.nc", 201, 435);
    # 202 "53obj4.nc"
    buffer_append_format(buf,"sizeof(%s)",type_name);
    # 213 "53obj4.nc"
    for(_o2_saved_5=(struct list$1sNode$ph*)come_increment_ref_count(type->mHeapArrayNum, "53obj4.nc", 203, 436),it=list$1sNode$ph_begin(_o2_saved_5)    ;!list$1sNode$ph_end(_o2_saved_5);it=list$1sNode$ph_next(_o2_saved_5)){
        # 208 "53obj4.nc"
        Value=node_compile(it,info);
        if(!Value) {
            # 205 "53obj4.nc"
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 205, 437);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 205, 438);
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 205, 439);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 205, 440);
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 205, 441));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 205, 442);
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 205, 443);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 208 "53obj4.nc"
        __right_value0 = (void*)0;
        cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 208, 444);
        # 210 "53obj4.nc"
        buffer_append_format(buf,"*(%s)",cvalue->c_value);
        come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 213, 445);
    }
    # 213 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj53=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "53obj4.nc", 213, 447);
    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 213, 446);
    # 214 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj54=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 214, 448, "struct sType* "), "53obj4.nc", 214, 449),(char*)come_increment_ref_count(xsprintf("long"), "53obj4.nc", 214, 450),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 214, 452);
    come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 214, 451);
    # 215 "53obj4.nc"
    come_value->type->mUnsigned=(_Bool)1;
    # 216 "53obj4.nc"
    come_value->var=((void*)0);
    # 218 "53obj4.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 220 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 220, 453));
    # 222 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 222, 454);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 222, 455);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 222, 456);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 222, 457);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 222, 458));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 222, 459);
    come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 222, 460);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj18  ;
    struct sType*  __dec_obj19  ;
    struct list$1sType$ph* __dec_obj23;
    struct sType*  __dec_obj24  ;
    struct sNode* __dec_obj25;
    struct sNode* __dec_obj26;
    char*  __dec_obj27  ;
    char*  __dec_obj28  ;
    char*  __dec_obj29  ;
    char*  __dec_obj30  ;
    char*  __dec_obj31  ;
    char*  __dec_obj32  ;
    char*  __dec_obj33  ;
    char*  __dec_obj34  ;
    struct list$1sNode$ph* __dec_obj38;
    struct list$1sNode$ph* __dec_obj39;
    struct list$1int$* __dec_obj40;
    struct list$1int$* __dec_obj41;
    struct sType*  __dec_obj42  ;
    char*  __dec_obj43  ;
    struct list$1sType$ph* __dec_obj44;
    struct list$1char$ph* __dec_obj48;
    struct sType*  __dec_obj49  ;
    struct sNode* __dec_obj50;
    struct list$1sNode$ph* __dec_obj51;
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
        __dec_obj18=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 248);
        come_call_finalizer(sType_finalize, __dec_obj18,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 247);
    }
    # 9 "sType_clone"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 8 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj19=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 250);
        come_call_finalizer(sType_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 249);
    }
    # 10 "sType_clone"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 9 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj23=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 279);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 278);
    }
    # 11 "sType_clone"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 10 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj24=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 281);
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 280);
    }
    # 12 "sType_clone"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 11 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj25=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 290);
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 289) :0);
    }
    # 13 "sType_clone"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 12 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj26=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 292);
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 291) :0);
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
        __dec_obj27=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 293, "char* "), "sType_clone", 14, 295);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 294);
    }
    # 16 "sType_clone"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 15 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj28=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 296, "char* "), "sType_clone", 15, 298);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 297);
    }
    # 17 "sType_clone"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 16 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj29=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 299, "char* "), "sType_clone", 16, 301);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 300);
    }
    # 18 "sType_clone"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 17 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj30=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 302, "char* "), "sType_clone", 17, 304);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 303);
    }
    # 19 "sType_clone"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 18 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj31=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 305, "char* "), "sType_clone", 18, 307);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 306);
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
        __dec_obj32=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 308, "char* "), "sType_clone", 49, 310);
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 309);
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
        __dec_obj33=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 311, "char* "), "sType_clone", 51, 313);
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 312);
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
        __dec_obj34=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 314, "char* "), "sType_clone", 54, 316);
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 315);
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
        __dec_obj38=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 345);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 344);
    }
    # 59 "sType_clone"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 58 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj39=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 347);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 346);
    }
    # 60 "sType_clone"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 59 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj40=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 15, 367);
        come_call_finalizer(list$1int$_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 366);
    }
    # 61 "sType_clone"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 60 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj41=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 369);
        come_call_finalizer(list$1int$_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 368);
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
        __dec_obj42=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 371);
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 370);
    }
    # 68 "sType_clone"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 67 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj43=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 372, "char* "), "sType_clone", 67, 374);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 373);
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
        __dec_obj44=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 376);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 375);
    }
    # 73 "sType_clone"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 72 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj48=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 15, 408);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 407);
    }
    # 74 "sType_clone"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 73 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj49=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 410);
        come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 409);
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
        __dec_obj50=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 412);
        (__dec_obj50 ? __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 411) :0);
    }
    # 77 "sType_clone"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 76 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj51=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 414);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 413);
    }
    # 77 "sType_clone"
        __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 415);
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
    struct sType*  __dec_obj20  ;
    struct list_item$1sType$ph* litem_15;
    struct sType*  __dec_obj21  ;
    struct list_item$1sType$ph* litem_16;
    struct sType*  __dec_obj22  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_15, 0, sizeof(litem_15));
    memset(&litem_16, 0, sizeof(litem_16));
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
        __dec_obj20=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1538, 263);
        come_call_finalizer(sType_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 262);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_15=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1544, 264, "struct list_item$1sType$ph*"))), "./neo-c.h", 1544, 265);
        # 1546 "./neo-c.h"
        litem_15->prev=self->head;
        # 1547 "./neo-c.h"
        litem_15->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj21=litem_15->item,
        litem_15->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1548, 267);
        come_call_finalizer(sType_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 266);
        # 1550 "./neo-c.h"
        self->tail=litem_15;
        # 1551 "./neo-c.h"
        self->head->next=litem_15;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_16=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1554, 268, "struct list_item$1sType$ph*"))), "./neo-c.h", 1554, 269);
        # 1556 "./neo-c.h"
        litem_16->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_16->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj22=litem_16->item,
        litem_16->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1558, 271);
        come_call_finalizer(sType_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 270);
        # 1560 "./neo-c.h"
        self->tail->next=litem_16;
        # 1561 "./neo-c.h"
        self->tail=litem_16;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 272);
    neo_current_frame = fr.prev;
    return __result_obj__0;
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 282);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 283):(void*)0);
        return __result_obj__0;
    }
    # 5 "sNode_clone"
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 284, "struct sNode*"), "sNode_clone", 5, 285);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 286);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 287):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 288):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 317);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 318);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1513, 319, "struct list$1sNode$ph*"), "./neo-c.h", 1513, 323)), "./neo-c.h", 1513, 324);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1518, 339));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1521, 340));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 341);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 342);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 343);
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
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 320);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 321);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 322);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj35;
    struct list_item$1sNode$ph* litem_17;
    struct sNode* __dec_obj36;
    struct list_item$1sNode$ph* litem_18;
    struct sNode* __dec_obj37;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_17, 0, sizeof(litem_17));
    memset(&litem_18, 0, sizeof(litem_18));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1531, 325):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1534, 326, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1534, 327);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj35=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1538, 329);
        (__dec_obj35 ? __dec_obj35 = come_decrement_ref_count(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1538, 328) :0);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_17=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1544, 330, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1544, 331);
        # 1546 "./neo-c.h"
        litem_17->prev=self->head;
        # 1547 "./neo-c.h"
        litem_17->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj36=litem_17->item,
        litem_17->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1548, 333);
        (__dec_obj36 ? __dec_obj36 = come_decrement_ref_count(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1548, 332) :0);
        # 1550 "./neo-c.h"
        self->tail=litem_17;
        # 1551 "./neo-c.h"
        self->head->next=litem_17;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_18=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1554, 334, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1554, 335);
        # 1556 "./neo-c.h"
        litem_18->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_18->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj37=litem_18->item,
        litem_18->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1558, 337);
        (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1558, 336) :0);
        # 1560 "./neo-c.h"
        self->tail->next=litem_18;
        # 1561 "./neo-c.h"
        self->tail=litem_18;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1566, 338):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 348);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 349);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1513, 350, "struct list$1int$*"), "./neo-c.h", 1513, 354)), "./neo-c.h", 1513, 355);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1527, 362);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 363);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 364);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1485, 351);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 352);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 353);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_19;
    struct list_item$1int$* litem_20;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_19, 0, sizeof(litem_19));
    memset(&litem_20, 0, sizeof(litem_20));
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1534, 356, "struct list_item$1int$*"))), "./neo-c.h", 1534, 357);
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
        litem_19=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1544, 358, "struct list_item$1int$*"))), "./neo-c.h", 1544, 359);
        # 1546 "./neo-c.h"
        litem_19->prev=self->head;
        # 1547 "./neo-c.h"
        litem_19->next=((void*)0);
        # 1548 "./neo-c.h"
        litem_19->item=item;
        # 1550 "./neo-c.h"
        self->tail=litem_19;
        # 1551 "./neo-c.h"
        self->head->next=litem_19;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_20=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1554, 360, "struct list_item$1int$*"))), "./neo-c.h", 1554, 361);
        # 1556 "./neo-c.h"
        litem_20->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_20->next=((void*)0);
        # 1558 "./neo-c.h"
        litem_20->item=item;
        # 1560 "./neo-c.h"
        self->tail->next=litem_20;
        # 1561 "./neo-c.h"
        self->tail=litem_20;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 365);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 377);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 378);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1513, 379, "struct list$1char$ph*"), "./neo-c.h", 1513, 383)), "./neo-c.h", 1513, 384);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1518, 399, "char* "), "./neo-c.h", 1518, 400));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1521, 401, "char* "), "./neo-c.h", 1521, 402));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 403);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 404);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 405);
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 380);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 381);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 382);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj45  ;
    struct list_item$1char$ph* litem_21;
    char*  __dec_obj46  ;
    struct list_item$1char$ph* litem_22;
    char*  __dec_obj47  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_21, 0, sizeof(litem_21));
    memset(&litem_22, 0, sizeof(litem_22));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1531, 385));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1534, 386, "struct list_item$1char$ph*"))), "./neo-c.h", 1534, 387);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj45=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1538, 389);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1538, 388);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_21=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1544, 390, "struct list_item$1char$ph*"))), "./neo-c.h", 1544, 391);
        # 1546 "./neo-c.h"
        litem_21->prev=self->head;
        # 1547 "./neo-c.h"
        litem_21->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj46=litem_21->item,
        litem_21->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1548, 393);
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1548, 392);
        # 1550 "./neo-c.h"
        self->tail=litem_21;
        # 1551 "./neo-c.h"
        self->head->next=litem_21;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_22=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1554, 394, "struct list_item$1char$ph*"))), "./neo-c.h", 1554, 395);
        # 1556 "./neo-c.h"
        litem_22->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_22->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj47=litem_22->item,
        litem_22->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1558, 397);
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1558, 396);
        # 1560 "./neo-c.h"
        self->tail->next=litem_22;
        # 1561 "./neo-c.h"
        self->tail=litem_22;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1566, 398));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 406);
    }
            neo_current_frame = fr.prev;
}

static void sHeapSizeOfNode_finalize(struct sHeapSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_finalize"; neo_current_frame = &fr;
    # 1 "sHeapSizeOfNode_finalize"
    # 3 "sHeapSizeOfNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sHeapSizeOfNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sHeapSizeOfNode_finalize", 2, 419));
    }
    # 4 "sHeapSizeOfNode_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 3 "sHeapSizeOfNode_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sHeapSizeOfNode_finalize}", 3, 420);
    }
        neo_current_frame = fr.prev;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj55  ;
    struct sSizeOfNode* __result_obj__0;
    # 230 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSizeOfNode*)come_increment_ref_count(self, "53obj4.nc", 230, 461),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 230, 462);
    # 232 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj55=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "53obj4.nc", 232, 464);
    come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 232, 463);
    # 235 "53obj4.nc"
        __result_obj__0 = (struct sSizeOfNode*)come_increment_ref_count(self, "53obj4.nc", 235, 465);
    come_call_finalizer(sSizeOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 235, 468);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSizeOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 235, 469);
    return __result_obj__0;
}

char*  sSizeOfNode_kind(struct sSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 237 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSizeOfNode","53obj4.nc",237))), "53obj4.nc", 237, 470);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 237, 471));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 237, 472));
    return __result_obj__0;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj56  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj57  ;
    _Bool __result_obj__0;
    memset(&type, 0, sizeof(type));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type2_, 0, sizeof(type2_));
    memset(&type2, 0, sizeof(type2));
    memset(&type_name, 0, sizeof(type_name));
    # 242 "53obj4.nc"
    type=(struct sType* )come_increment_ref_count(self->type, "53obj4.nc", 242, 473);
    # 244 "53obj4.nc"
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 244, 474, "struct CVALUE* "), "53obj4.nc", 244, 475)), "53obj4.nc", 244, 476);
    # 246 "53obj4.nc"
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "53obj4.nc", 246, 477);
    # 247 "53obj4.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "53obj4.nc", 247, 478);
    # 249 "53obj4.nc"
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)1,(_Bool)0,(_Bool)1,(_Bool)0), "53obj4.nc", 249, 479);
    # 251 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj56=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("sizeof(%s)",type_name), "53obj4.nc", 251, 481);
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 251, 480);
    # 252 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj57=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 252, 482, "struct sType* "), "53obj4.nc", 252, 483),(char*)come_increment_ref_count(xsprintf("long"), "53obj4.nc", 252, 484),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 252, 486);
    come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 252, 485);
    # 253 "53obj4.nc"
    come_value->type->mUnsigned=(_Bool)1;
    # 254 "53obj4.nc"
    come_value->var=((void*)0);
    # 256 "53obj4.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 258 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 258, 487));
    # 260 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 260, 488);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 260, 489);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 260, 490);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 260, 491);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 260, 492));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_finalize"; neo_current_frame = &fr;
    # 1 "sSizeOfNode_finalize"
    # 3 "sSizeOfNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sSizeOfNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sSizeOfNode_finalize", 2, 466));
    }
    # 4 "sSizeOfNode_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 3 "sSizeOfNode_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sSizeOfNode_finalize}", 3, 467);
    }
        neo_current_frame = fr.prev;
}

struct sOffsetOf* sOffsetOf_initialize(struct sOffsetOf* self, struct sType*  type  , char*  name  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj58  ;
    char*  __dec_obj59  ;
    struct sOffsetOf* __result_obj__0;
    # 268 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sOffsetOf*)come_increment_ref_count(self, "53obj4.nc", 268, 493),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 268, 494);
    # 270 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj58=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "53obj4.nc", 270, 496);
    come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 270, 495);
    # 271 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj59=self->name,
    self->name=(char* )come_increment_ref_count((char* )come_memdup(name, "53obj4.nc", 271, 497, "char* "), "53obj4.nc", 271, 499);
    __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 271, 498);
    # 274 "53obj4.nc"
        __result_obj__0 = (struct sOffsetOf*)come_increment_ref_count(self, "53obj4.nc", 274, 500);
    come_call_finalizer(sOffsetOf_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 274, 504);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 274, 505));
    neo_current_frame = fr.prev;
    come_call_finalizer(sOffsetOf_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 274, 506);
    return __result_obj__0;
}

char*  sOffsetOf_kind(struct sOffsetOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 276 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sOffsetOf","53obj4.nc",276))), "53obj4.nc", 276, 507);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 276, 508));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 276, 509));
    return __result_obj__0;
}

_Bool sOffsetOf_compile(struct sOffsetOf* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    char*  name  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj60  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj61  ;
    _Bool __result_obj__0;
    memset(&type, 0, sizeof(type));
    memset(&name, 0, sizeof(name));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type2_, 0, sizeof(type2_));
    memset(&type2, 0, sizeof(type2));
    memset(&type_name, 0, sizeof(type_name));
    # 281 "53obj4.nc"
    type=(struct sType* )come_increment_ref_count(self->type, "53obj4.nc", 281, 510);
    # 282 "53obj4.nc"
    name=(char* )come_increment_ref_count(self->name, "53obj4.nc", 282, 511);
    # 284 "53obj4.nc"
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 284, 512, "struct CVALUE* "), "53obj4.nc", 284, 513)), "53obj4.nc", 284, 514);
    # 286 "53obj4.nc"
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "53obj4.nc", 286, 515);
    # 287 "53obj4.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "53obj4.nc", 287, 516);
    # 289 "53obj4.nc"
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0), "53obj4.nc", 289, 517);
    # 291 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj60=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("__builtin_offsetof(%s, %s)",type_name,name), "53obj4.nc", 291, 519);
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 291, 518);
    # 292 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj61=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 292, 520, "struct sType* "), "53obj4.nc", 292, 521),(char*)come_increment_ref_count(xsprintf("long"), "53obj4.nc", 292, 522),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 292, 524);
    come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 292, 523);
    # 293 "53obj4.nc"
    come_value->type->mUnsigned=(_Bool)1;
    # 294 "53obj4.nc"
    come_value->var=((void*)0);
    # 296 "53obj4.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 298 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 298, 525));
    # 300 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 300, 526);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 300, 527));
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 300, 528);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 300, 529);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 300, 530);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 300, 531));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sOffsetOf_finalize(struct sOffsetOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_finalize"; neo_current_frame = &fr;
    # 1 "sOffsetOf_finalize"
    # 3 "sOffsetOf_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sOffsetOf_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sOffsetOf_finalize", 2, 501));
    }
    # 4 "sOffsetOf_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 3 "sOffsetOf_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sOffsetOf_finalize}", 3, 502);
    }
    # 5 "sOffsetOf_finalize"
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        # 4 "sOffsetOf_finalize"
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0, "sOffsetOf_finalize", 4, 503));
    }
        neo_current_frame = fr.prev;
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj62;
    struct sSizeOfExpNode* __result_obj__0;
    # 308 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSizeOfExpNode*)come_increment_ref_count(self, "53obj4.nc", 308, 532),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 308, 533);
    # 310 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj62=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "53obj4.nc", 310, 535);
    (__dec_obj62 ? __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 310, 534) :0);
    # 312 "53obj4.nc"
        __result_obj__0 = (struct sSizeOfExpNode*)come_increment_ref_count(self, "53obj4.nc", 312, 536);
    come_call_finalizer(sSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 312, 539);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 312, 540):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSizeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 312, 541);
    return __result_obj__0;
    # 315 "53obj4.nc"
        __result_obj__0 = (struct sSizeOfExpNode*)come_increment_ref_count(self, "53obj4.nc", 315, 542);
    come_call_finalizer(sSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 315, 543);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 315, 544):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSizeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 315, 545);
    return __result_obj__0;
}

char*  sSizeOfExpNode_kind(struct sSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 317 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSizeOfExpNode","53obj4.nc",317))), "53obj4.nc", 317, 546);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 317, 547));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 317, 548));
    return __result_obj__0;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj63  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj64  ;
    memset(&exp, 0, sizeof(exp));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value2, 0, sizeof(come_value2));
    # 322 "53obj4.nc"
    exp=(struct sNode*)come_increment_ref_count(self->exp, "53obj4.nc", 322, 549);
    # 328 "53obj4.nc"
    Value=node_compile(exp,info);
    if(!Value) {
        # 325 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 325, 550):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 328 "53obj4.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 328, 551);
    # 330 "53obj4.nc"
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 330, 552, "struct CVALUE* "), "53obj4.nc", 330, 553)), "53obj4.nc", 330, 554);
    # 332 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj63=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("sizeof(%s)",come_value->c_value), "53obj4.nc", 332, 556);
    __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 332, 555);
    # 333 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj64=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 333, 557, "struct sType* "), "53obj4.nc", 333, 558),(char*)come_increment_ref_count(xsprintf("long"), "53obj4.nc", 333, 559),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 333, 561);
    come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 333, 560);
    # 334 "53obj4.nc"
    come_value2->type->mUnsigned=(_Bool)1;
    # 335 "53obj4.nc"
    come_value2->var=((void*)0);
    # 337 "53obj4.nc"
    add_come_last_code(info,"%s",come_value2->c_value);
    # 339 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "53obj4.nc", 339, 562));
    # 341 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 341, 563):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 341, 564);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 341, 565);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_finalize"; neo_current_frame = &fr;
    # 1 "sSizeOfExpNode_finalize"
    # 3 "sSizeOfExpNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sSizeOfExpNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sSizeOfExpNode_finalize", 2, 537));
    }
    # 4 "sSizeOfExpNode_finalize"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 3 "sSizeOfExpNode_finalize"
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sSizeOfExpNode_finalize", 3, 538):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sDynamicSizeOfExpNode* sDynamicSizeOfExpNode_initialize(struct sDynamicSizeOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj65;
    struct sDynamicSizeOfExpNode* __result_obj__0;
    # 349 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDynamicSizeOfExpNode*)come_increment_ref_count(self, "53obj4.nc", 349, 566),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 349, 567);
    # 351 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj65=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "53obj4.nc", 351, 569);
    (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 351, 568) :0);
    # 353 "53obj4.nc"
        __result_obj__0 = (struct sDynamicSizeOfExpNode*)come_increment_ref_count(self, "53obj4.nc", 353, 570);
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 353, 573);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 353, 574):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 353, 575);
    return __result_obj__0;
    # 356 "53obj4.nc"
        __result_obj__0 = (struct sDynamicSizeOfExpNode*)come_increment_ref_count(self, "53obj4.nc", 356, 576);
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 356, 577);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 356, 578):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 356, 579);
    return __result_obj__0;
}

char*  sDynamicSizeOfExpNode_kind(struct sDynamicSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 358 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSizeOfExpNode","53obj4.nc",358))), "53obj4.nc", 358, 580);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 358, 581));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 358, 582));
    return __result_obj__0;
}

_Bool sDynamicSizeOfExpNode_compile(struct sDynamicSizeOfExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj66  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj67  ;
    memset(&exp, 0, sizeof(exp));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value2, 0, sizeof(come_value2));
    # 363 "53obj4.nc"
    exp=(struct sNode*)come_increment_ref_count(self->exp, "53obj4.nc", 363, 583);
    # 369 "53obj4.nc"
    Value=node_compile(exp,info);
    if(!Value) {
        # 366 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 366, 584):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 369 "53obj4.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 369, 585);
    # 371 "53obj4.nc"
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 371, 586, "struct CVALUE* "), "53obj4.nc", 371, 587)), "53obj4.nc", 371, 588);
    # 373 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj66=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("dynamic_sizeof(%s, \"%s\", %d)",come_value->c_value,info->sname,info->sline), "53obj4.nc", 373, 590);
    __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 373, 589);
    # 374 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj67=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 374, 591, "struct sType* "), "53obj4.nc", 374, 592),(char*)come_increment_ref_count(xsprintf("long"), "53obj4.nc", 374, 593),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 374, 595);
    come_call_finalizer(sType_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 374, 594);
    # 375 "53obj4.nc"
    come_value2->type->mUnsigned=(_Bool)1;
    # 376 "53obj4.nc"
    come_value2->var=((void*)0);
    # 378 "53obj4.nc"
    add_come_last_code(info,"%s",come_value2->c_value);
    # 380 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "53obj4.nc", 380, 596));
    # 382 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 382, 597):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 382, 598);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 382, 599);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDynamicSizeOfExpNode_finalize(struct sDynamicSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_finalize"; neo_current_frame = &fr;
    # 1 "sDynamicSizeOfExpNode_finalize"
    # 3 "sDynamicSizeOfExpNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sDynamicSizeOfExpNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDynamicSizeOfExpNode_finalize", 2, 571));
    }
    # 4 "sDynamicSizeOfExpNode_finalize"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 3 "sDynamicSizeOfExpNode_finalize"
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sDynamicSizeOfExpNode_finalize", 3, 572):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj68  ;
    struct sTypeOfNode* __result_obj__0;
    # 390 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTypeOfNode*)come_increment_ref_count(self, "53obj4.nc", 390, 600),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 390, 601);
    # 392 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj68=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "53obj4.nc", 392, 603);
    come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 392, 602);
    # 395 "53obj4.nc"
        __result_obj__0 = (struct sTypeOfNode*)come_increment_ref_count(self, "53obj4.nc", 395, 604);
    come_call_finalizer(sTypeOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 395, 607);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTypeOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 395, 608);
    return __result_obj__0;
}

char*  sTypeOfNode_kind(struct sTypeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 397 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTypeOfNode","53obj4.nc",397))), "53obj4.nc", 397, 609);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 397, 610));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 397, 611));
    return __result_obj__0;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj69  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj70  ;
    _Bool __result_obj__0;
    memset(&type, 0, sizeof(type));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type2_, 0, sizeof(type2_));
    memset(&type2, 0, sizeof(type2));
    memset(&type_name, 0, sizeof(type_name));
    # 402 "53obj4.nc"
    type=(struct sType* )come_increment_ref_count(self->type, "53obj4.nc", 402, 612);
    # 404 "53obj4.nc"
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 404, 613, "struct CVALUE* "), "53obj4.nc", 404, 614)), "53obj4.nc", 404, 615);
    # 406 "53obj4.nc"
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "53obj4.nc", 406, 616);
    # 407 "53obj4.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "53obj4.nc", 407, 617);
    # 409 "53obj4.nc"
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "53obj4.nc", 409, 618);
    # 411 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj69=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",type_name), "53obj4.nc", 411, 620);
    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 411, 619);
    # 412 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj70=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 412, 621, "struct sType* "), "53obj4.nc", 412, 622),(char*)come_increment_ref_count(xsprintf("char*"), "53obj4.nc", 412, 623),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 412, 625);
    come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 412, 624);
    # 413 "53obj4.nc"
    come_value->var=((void*)0);
    # 415 "53obj4.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 417 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 417, 626));
    # 419 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 419, 627);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 419, 628);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 419, 629);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 419, 630);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 419, 631));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_finalize"; neo_current_frame = &fr;
    # 1 "sTypeOfNode_finalize"
    # 3 "sTypeOfNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sTypeOfNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sTypeOfNode_finalize", 2, 605));
    }
    # 4 "sTypeOfNode_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 3 "sTypeOfNode_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sTypeOfNode_finalize}", 3, 606);
    }
        neo_current_frame = fr.prev;
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj71;
    struct sTypeOfExpNode* __result_obj__0;
    # 427 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTypeOfExpNode*)come_increment_ref_count(self, "53obj4.nc", 427, 632),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 427, 633);
    # 429 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj71=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "53obj4.nc", 429, 635);
    (__dec_obj71 ? __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 429, 634) :0);
    # 432 "53obj4.nc"
        __result_obj__0 = (struct sTypeOfExpNode*)come_increment_ref_count(self, "53obj4.nc", 432, 636);
    come_call_finalizer(sTypeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 432, 639);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 432, 640):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTypeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 432, 641);
    return __result_obj__0;
}

char*  sTypeOfExpNode_kind(struct sTypeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 434 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTypeOfExpNode","53obj4.nc",434))), "53obj4.nc", 434, 642);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 434, 643));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 434, 644));
    return __result_obj__0;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj72  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj73  ;
    memset(&exp, 0, sizeof(exp));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type, 0, sizeof(type));
    memset(&type2_, 0, sizeof(type2_));
    memset(&type2, 0, sizeof(type2));
    memset(&type_name, 0, sizeof(type_name));
    # 439 "53obj4.nc"
    exp=(struct sNode*)come_increment_ref_count(self->exp, "53obj4.nc", 439, 645);
    # 445 "53obj4.nc"
    Value=node_compile(exp,info);
    if(!Value) {
        # 442 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 442, 646):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 445 "53obj4.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 445, 647);
    # 447 "53obj4.nc"
    __right_value0 = (void*)0;
    type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "53obj4.nc", 447, 648);
    # 449 "53obj4.nc"
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "53obj4.nc", 449, 649);
    # 450 "53obj4.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "53obj4.nc", 450, 650);
    # 452 "53obj4.nc"
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "53obj4.nc", 452, 651);
    # 454 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj72=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",type_name), "53obj4.nc", 454, 653);
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 454, 652);
    # 455 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj73=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 455, 654, "struct sType* "), "53obj4.nc", 455, 655),(char*)come_increment_ref_count(xsprintf("char*"), "53obj4.nc", 455, 656),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 455, 658);
    come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 455, 657);
    # 456 "53obj4.nc"
    come_value->var=((void*)0);
    # 458 "53obj4.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 460 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 460, 659));
    # 462 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 462, 660):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 462, 661);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 462, 662);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 462, 663);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 462, 664);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 462, 665));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_finalize"; neo_current_frame = &fr;
    # 1 "sTypeOfExpNode_finalize"
    # 3 "sTypeOfExpNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sTypeOfExpNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sTypeOfExpNode_finalize", 2, 637));
    }
    # 4 "sTypeOfExpNode_finalize"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 3 "sTypeOfExpNode_finalize"
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sTypeOfExpNode_finalize", 3, 638):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj74;
    struct sDynamicTypeOf* __result_obj__0;
    # 470 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDynamicTypeOf*)come_increment_ref_count(self, "53obj4.nc", 470, 666),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 470, 667);
    # 472 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj74=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "53obj4.nc", 472, 669);
    (__dec_obj74 ? __dec_obj74 = come_decrement_ref_count(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 472, 668) :0);
    # 475 "53obj4.nc"
        __result_obj__0 = (struct sDynamicTypeOf*)come_increment_ref_count(self, "53obj4.nc", 475, 670);
    come_call_finalizer(sDynamicTypeOf_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 475, 673);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 475, 674):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDynamicTypeOf_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 475, 675);
    return __result_obj__0;
}

char*  sDynamicTypeOf_kind(struct sDynamicTypeOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 477 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDynamicTypeOf","53obj4.nc",477))), "53obj4.nc", 477, 676);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 477, 677));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 477, 678));
    return __result_obj__0;
}

_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj75  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj76  ;
    struct CVALUE*  come_value2_23  ;
    char*  __dec_obj77  ;
    struct sType*  __dec_obj78  ;
    memset(&exp, 0, sizeof(exp));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value2, 0, sizeof(come_value2));
    memset(&come_value2_23, 0, sizeof(come_value2_23));
    # 482 "53obj4.nc"
    exp=(struct sNode*)come_increment_ref_count(self->exp, "53obj4.nc", 482, 679);
    # 488 "53obj4.nc"
    Value=node_compile(exp,info);
    if(!Value) {
        # 485 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 485, 680):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 488 "53obj4.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 488, 681);
    # 515 "53obj4.nc"
    if(come_value->type->mPointerNum>0&&come_value->type->mHeap) {
        # 491 "53obj4.nc"
        __right_value0 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 491, 682, "struct CVALUE* "), "53obj4.nc", 491, 683)), "53obj4.nc", 491, 684);
        # 493 "53obj4.nc"
        __right_value0 = (void*)0;
        __dec_obj75=come_value2->c_value,
        come_value2->c_value=(char* )come_increment_ref_count(xsprintf("come_dynamic_typeof(%s, \"%s\", %d)",come_value->c_value,info->sname,info->sline), "53obj4.nc", 493, 686);
        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 493, 685);
        # 494 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj76=come_value2->type,
        come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 494, 687, "struct sType* "), "53obj4.nc", 494, 688),(char*)come_increment_ref_count(xsprintf("char*"), "53obj4.nc", 494, 689),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 494, 691);
        come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 494, 690);
        # 495 "53obj4.nc"
        come_value2->var=((void*)0);
        # 497 "53obj4.nc"
        add_come_last_code(info,"%s",come_value2->c_value);
        # 499 "53obj4.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "53obj4.nc", 499, 692));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 515, 693);
    }
    else {
        # 502 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value2_23=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 502, 694, "struct CVALUE* "), "53obj4.nc", 502, 695)), "53obj4.nc", 502, 696);
        # 504 "53obj4.nc"
        __right_value0 = (void*)0;
        __dec_obj77=come_value2_23->c_value,
        come_value2_23->c_value=(char* )come_increment_ref_count(xsprintf("__builtin_string(\"NOT HEAP OBJECT\")"), "53obj4.nc", 504, 698);
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 504, 697);
        # 505 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj78=come_value2_23->type,
        come_value2_23->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 505, 699, "struct sType* "), "53obj4.nc", 505, 700),(char*)come_increment_ref_count(xsprintf("char*"), "53obj4.nc", 505, 701),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 505, 703);
        come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 505, 702);
        # 506 "53obj4.nc"
        come_value2_23->var=((void*)0);
        # 508 "53obj4.nc"
        add_come_last_code(info,"%s",come_value2_23->c_value);
        # 510 "53obj4.nc"
        append_object_to_right_values(come_value2_23,come_value2_23->type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        # 512 "53obj4.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2_23, "53obj4.nc", 512, 704));
        come_call_finalizer(CVALUE_finalize, come_value2_23, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 515, 705);
    }
    # 515 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 515, 706):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 515, 707);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_finalize"; neo_current_frame = &fr;
    # 1 "sDynamicTypeOf_finalize"
    # 3 "sDynamicTypeOf_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sDynamicTypeOf_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDynamicTypeOf_finalize", 2, 671));
    }
    # 4 "sDynamicTypeOf_finalize"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 3 "sDynamicTypeOf_finalize"
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sDynamicTypeOf_finalize", 3, 672):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj79  ;
    struct sAlignOfNode* __result_obj__0;
    # 523 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfNode*)come_increment_ref_count(self, "53obj4.nc", 523, 708),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 523, 709);
    # 525 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj79=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "53obj4.nc", 525, 711);
    come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 525, 710);
    # 527 "53obj4.nc"
        __result_obj__0 = (struct sAlignOfNode*)come_increment_ref_count(self, "53obj4.nc", 527, 712);
    come_call_finalizer(sAlignOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 527, 715);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 527, 716);
    return __result_obj__0;
    # 530 "53obj4.nc"
        __result_obj__0 = (struct sAlignOfNode*)come_increment_ref_count(self, "53obj4.nc", 530, 717);
    come_call_finalizer(sAlignOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 530, 718);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 530, 719);
    return __result_obj__0;
}

char*  sAlignOfNode_kind(struct sAlignOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 532 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignOfNode","53obj4.nc",532))), "53obj4.nc", 532, 720);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 532, 721));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 532, 722));
    return __result_obj__0;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj80  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj81  ;
    _Bool __result_obj__0;
    memset(&type, 0, sizeof(type));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type2_, 0, sizeof(type2_));
    memset(&type2, 0, sizeof(type2));
    memset(&type_name, 0, sizeof(type_name));
    # 537 "53obj4.nc"
    type=(struct sType* )come_increment_ref_count(self->type, "53obj4.nc", 537, 723);
    # 539 "53obj4.nc"
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 539, 724, "struct CVALUE* "), "53obj4.nc", 539, 725)), "53obj4.nc", 539, 726);
    # 541 "53obj4.nc"
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "53obj4.nc", 541, 727);
    # 542 "53obj4.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "53obj4.nc", 542, 728);
    # 544 "53obj4.nc"
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "53obj4.nc", 544, 729);
    # 546 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj80=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("_Alignof(%s)",type_name), "53obj4.nc", 546, 731);
    __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 546, 730);
    # 547 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj81=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 547, 732, "struct sType* "), "53obj4.nc", 547, 733),(char*)come_increment_ref_count(xsprintf("long"), "53obj4.nc", 547, 734),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 547, 736);
    come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 547, 735);
    # 548 "53obj4.nc"
    come_value->type->mUnsigned=(_Bool)1;
    # 549 "53obj4.nc"
    come_value->var=((void*)0);
    # 551 "53obj4.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 553 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 553, 737));
    # 555 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 555, 738);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 555, 739);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 555, 740);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 555, 741);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 555, 742));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_finalize"; neo_current_frame = &fr;
    # 1 "sAlignOfNode_finalize"
    # 3 "sAlignOfNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sAlignOfNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAlignOfNode_finalize", 2, 713));
    }
    # 4 "sAlignOfNode_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 3 "sAlignOfNode_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sAlignOfNode_finalize}", 3, 714);
    }
        neo_current_frame = fr.prev;
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj82;
    struct sAlignOfExpNode* __result_obj__0;
    # 563 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfExpNode*)come_increment_ref_count(self, "53obj4.nc", 563, 743),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 563, 744);
    # 565 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj82=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "53obj4.nc", 565, 746);
    (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 565, 745) :0);
    # 568 "53obj4.nc"
        __result_obj__0 = (struct sAlignOfExpNode*)come_increment_ref_count(self, "53obj4.nc", 568, 747);
    come_call_finalizer(sAlignOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 568, 750);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 568, 751):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 568, 752);
    return __result_obj__0;
}

char*  sAlignOfExpNode_kind(struct sAlignOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 570 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignOfExpNode","53obj4.nc",570))), "53obj4.nc", 570, 753);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 570, 754));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 570, 755));
    return __result_obj__0;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj83  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj84  ;
    memset(&exp, 0, sizeof(exp));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value2, 0, sizeof(come_value2));
    # 575 "53obj4.nc"
    exp=(struct sNode*)come_increment_ref_count(self->exp, "53obj4.nc", 575, 756);
    # 581 "53obj4.nc"
    Value=node_compile(exp,info);
    if(!Value) {
        # 578 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 578, 757):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 581 "53obj4.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 581, 758);
    # 583 "53obj4.nc"
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 583, 759, "struct CVALUE* "), "53obj4.nc", 583, 760)), "53obj4.nc", 583, 761);
    # 585 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj83=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value->c_value), "53obj4.nc", 585, 763);
    __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 585, 762);
    # 586 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj84=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 586, 764, "struct sType* "), "53obj4.nc", 586, 765),(char*)come_increment_ref_count(xsprintf("long"), "53obj4.nc", 586, 766),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 586, 768);
    come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 586, 767);
    # 587 "53obj4.nc"
    come_value2->type->mUnsigned=(_Bool)1;
    # 588 "53obj4.nc"
    come_value2->var=((void*)0);
    # 590 "53obj4.nc"
    add_come_last_code(info,"%s",come_value2->c_value);
    # 592 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "53obj4.nc", 592, 769));
    # 594 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 594, 770):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 594, 771);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 594, 772);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_finalize"; neo_current_frame = &fr;
    # 1 "sAlignOfExpNode_finalize"
    # 3 "sAlignOfExpNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sAlignOfExpNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAlignOfExpNode_finalize", 2, 748));
    }
    # 4 "sAlignOfExpNode_finalize"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 3 "sAlignOfExpNode_finalize"
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sAlignOfExpNode_finalize", 3, 749):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj85  ;
    struct sAlignOfNode2* __result_obj__0;
    # 602 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfNode2*)come_increment_ref_count(self, "53obj4.nc", 602, 773),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 602, 774);
    # 604 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj85=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "53obj4.nc", 604, 776);
    come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 604, 775);
    # 607 "53obj4.nc"
        __result_obj__0 = (struct sAlignOfNode2*)come_increment_ref_count(self, "53obj4.nc", 607, 777);
    come_call_finalizer(sAlignOfNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 607, 780);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfNode2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 607, 781);
    return __result_obj__0;
}

char*  sAlignOfNode2_kind(struct sAlignOfNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 609 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignOfNode2","53obj4.nc",609))), "53obj4.nc", 609, 782);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 609, 783));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 609, 784));
    return __result_obj__0;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj86  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj87  ;
    _Bool __result_obj__0;
    memset(&type, 0, sizeof(type));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type2_, 0, sizeof(type2_));
    memset(&type2, 0, sizeof(type2));
    memset(&type_name, 0, sizeof(type_name));
    # 614 "53obj4.nc"
    type=(struct sType* )come_increment_ref_count(self->type, "53obj4.nc", 614, 785);
    # 616 "53obj4.nc"
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 616, 786, "struct CVALUE* "), "53obj4.nc", 616, 787)), "53obj4.nc", 616, 788);
    # 618 "53obj4.nc"
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "53obj4.nc", 618, 789);
    # 619 "53obj4.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "53obj4.nc", 619, 790);
    # 621 "53obj4.nc"
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "53obj4.nc", 621, 791);
    # 623 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj86=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("__alignof__(%s)",type_name), "53obj4.nc", 623, 793);
    __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 623, 792);
    # 624 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj87=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 624, 794, "struct sType* "), "53obj4.nc", 624, 795),(char*)come_increment_ref_count(xsprintf("long"), "53obj4.nc", 624, 796),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 624, 798);
    come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 624, 797);
    # 625 "53obj4.nc"
    come_value->type->mUnsigned=(_Bool)1;
    # 626 "53obj4.nc"
    come_value->var=((void*)0);
    # 628 "53obj4.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 630 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 630, 799));
    # 632 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 632, 800);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 632, 801);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 632, 802);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 632, 803);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 632, 804));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_finalize"; neo_current_frame = &fr;
    # 1 "sAlignOfNode2_finalize"
    # 3 "sAlignOfNode2_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sAlignOfNode2_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAlignOfNode2_finalize", 2, 778));
    }
    # 4 "sAlignOfNode2_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 3 "sAlignOfNode2_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sAlignOfNode2_finalize}", 3, 779);
    }
        neo_current_frame = fr.prev;
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj88;
    struct sAlignOfExpNode2* __result_obj__0;
    # 640 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfExpNode2*)come_increment_ref_count(self, "53obj4.nc", 640, 805),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 640, 806);
    # 642 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj88=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "53obj4.nc", 642, 808);
    (__dec_obj88 ? __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 642, 807) :0);
    # 645 "53obj4.nc"
        __result_obj__0 = (struct sAlignOfExpNode2*)come_increment_ref_count(self, "53obj4.nc", 645, 809);
    come_call_finalizer(sAlignOfExpNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 645, 812);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 645, 813):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfExpNode2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 645, 814);
    return __result_obj__0;
}

char*  sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 647 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignOfExpNode2","53obj4.nc",647))), "53obj4.nc", 647, 815);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 647, 816));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 647, 817));
    return __result_obj__0;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj89  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj90  ;
    memset(&exp, 0, sizeof(exp));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value2, 0, sizeof(come_value2));
    # 652 "53obj4.nc"
    exp=(struct sNode*)come_increment_ref_count(self->exp, "53obj4.nc", 652, 818);
    # 658 "53obj4.nc"
    Value=node_compile(exp,info);
    if(!Value) {
        # 655 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 655, 819):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 658 "53obj4.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 658, 820);
    # 660 "53obj4.nc"
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 660, 821, "struct CVALUE* "), "53obj4.nc", 660, 822)), "53obj4.nc", 660, 823);
    # 662 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj89=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("__alignof__(%s)",come_value->c_value), "53obj4.nc", 662, 825);
    __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 662, 824);
    # 663 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj90=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 663, 826, "struct sType* "), "53obj4.nc", 663, 827),(char*)come_increment_ref_count(xsprintf("long"), "53obj4.nc", 663, 828),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 663, 830);
    come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 663, 829);
    # 664 "53obj4.nc"
    come_value2->type->mUnsigned=(_Bool)1;
    # 665 "53obj4.nc"
    come_value2->var=((void*)0);
    # 667 "53obj4.nc"
    add_come_last_code(info,"%s",come_value2->c_value);
    # 669 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "53obj4.nc", 669, 831));
    # 671 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 671, 832):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 671, 833);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 671, 834);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_finalize"; neo_current_frame = &fr;
    # 1 "sAlignOfExpNode2_finalize"
    # 3 "sAlignOfExpNode2_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sAlignOfExpNode2_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAlignOfExpNode2_finalize", 2, 810));
    }
    # 4 "sAlignOfExpNode2_finalize"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 3 "sAlignOfExpNode2_finalize"
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sAlignOfExpNode2_finalize", 3, 811):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj91  ;
    struct sAlignAsNode* __result_obj__0;
    # 679 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignAsNode*)come_increment_ref_count(self, "53obj4.nc", 679, 835),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 679, 836);
    # 681 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj91=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "53obj4.nc", 681, 838);
    come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 681, 837);
    # 684 "53obj4.nc"
        __result_obj__0 = (struct sAlignAsNode*)come_increment_ref_count(self, "53obj4.nc", 684, 839);
    come_call_finalizer(sAlignAsNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 684, 842);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignAsNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 684, 843);
    return __result_obj__0;
}

char*  sAlignAsNode_kind(struct sAlignAsNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 686 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignAsNode","53obj4.nc",686))), "53obj4.nc", 686, 844);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 686, 845));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 686, 846));
    return __result_obj__0;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj92  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj93  ;
    _Bool __result_obj__0;
    memset(&type, 0, sizeof(type));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type2_, 0, sizeof(type2_));
    memset(&type2, 0, sizeof(type2));
    memset(&type_name, 0, sizeof(type_name));
    # 691 "53obj4.nc"
    type=(struct sType* )come_increment_ref_count(self->type, "53obj4.nc", 691, 847);
    # 693 "53obj4.nc"
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 693, 848, "struct CVALUE* "), "53obj4.nc", 693, 849)), "53obj4.nc", 693, 850);
    # 695 "53obj4.nc"
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "53obj4.nc", 695, 851);
    # 696 "53obj4.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "53obj4.nc", 696, 852);
    # 698 "53obj4.nc"
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "53obj4.nc", 698, 853);
    # 700 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj92=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("_Alignas(%s)",type_name), "53obj4.nc", 700, 855);
    __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 700, 854);
    # 701 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj93=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 701, 856, "struct sType* "), "53obj4.nc", 701, 857),(char*)come_increment_ref_count(xsprintf("long"), "53obj4.nc", 701, 858),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 701, 860);
    come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 701, 859);
    # 702 "53obj4.nc"
    come_value->type->mUnsigned=(_Bool)1;
    # 703 "53obj4.nc"
    come_value->var=((void*)0);
    # 705 "53obj4.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 707 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 707, 861));
    # 709 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 709, 862);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 709, 863);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 709, 864);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 709, 865);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 709, 866));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_finalize"; neo_current_frame = &fr;
    # 1 "sAlignAsNode_finalize"
    # 3 "sAlignAsNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sAlignAsNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAlignAsNode_finalize", 2, 840));
    }
    # 4 "sAlignAsNode_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 3 "sAlignAsNode_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sAlignAsNode_finalize}", 3, 841);
    }
        neo_current_frame = fr.prev;
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj94;
    struct sAlignAsExpNode* __result_obj__0;
    # 717 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignAsExpNode*)come_increment_ref_count(self, "53obj4.nc", 717, 867),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 717, 868);
    # 719 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj94=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "53obj4.nc", 719, 870);
    (__dec_obj94 ? __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 719, 869) :0);
    # 722 "53obj4.nc"
        __result_obj__0 = (struct sAlignAsExpNode*)come_increment_ref_count(self, "53obj4.nc", 722, 871);
    come_call_finalizer(sAlignAsExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 722, 874);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 722, 875):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignAsExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 722, 876);
    return __result_obj__0;
}

char*  sAlignAsExpNode_kind(struct sAlignAsExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 724 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignAsExpNode","53obj4.nc",724))), "53obj4.nc", 724, 877);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 724, 878));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 724, 879));
    return __result_obj__0;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj95  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj96  ;
    memset(&exp, 0, sizeof(exp));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value2, 0, sizeof(come_value2));
    # 729 "53obj4.nc"
    exp=(struct sNode*)come_increment_ref_count(self->exp, "53obj4.nc", 729, 880);
    # 735 "53obj4.nc"
    Value=node_compile(exp,info);
    if(!Value) {
        # 732 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 732, 881):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 735 "53obj4.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 735, 882);
    # 737 "53obj4.nc"
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 737, 883, "struct CVALUE* "), "53obj4.nc", 737, 884)), "53obj4.nc", 737, 885);
    # 739 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj95=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("_Alignas(%s)",come_value->c_value), "53obj4.nc", 739, 887);
    __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 739, 886);
    # 740 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj96=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 740, 888, "struct sType* "), "53obj4.nc", 740, 889),(char*)come_increment_ref_count(xsprintf("long"), "53obj4.nc", 740, 890),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 740, 892);
    come_call_finalizer(sType_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 740, 891);
    # 741 "53obj4.nc"
    come_value2->type->mUnsigned=(_Bool)1;
    # 742 "53obj4.nc"
    come_value2->var=((void*)0);
    # 744 "53obj4.nc"
    add_come_last_code(info,"%s",come_value2->c_value);
    # 746 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "53obj4.nc", 746, 893));
    # 748 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 748, 894):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 748, 895);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 748, 896);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_finalize"; neo_current_frame = &fr;
    # 1 "sAlignAsExpNode_finalize"
    # 3 "sAlignAsExpNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sAlignAsExpNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAlignAsExpNode_finalize", 2, 872));
    }
    # 4 "sAlignAsExpNode_finalize"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 3 "sAlignAsExpNode_finalize"
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sAlignAsExpNode_finalize", 3, 873):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj97;
    struct sDeleteNode* __result_obj__0;
    # 756 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDeleteNode*)come_increment_ref_count(self, "53obj4.nc", 756, 897),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 756, 898);
    # 758 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj97=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "53obj4.nc", 758, 900);
    (__dec_obj97 ? __dec_obj97 = come_decrement_ref_count(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 758, 899) :0);
    # 761 "53obj4.nc"
        __result_obj__0 = (struct sDeleteNode*)come_increment_ref_count(self, "53obj4.nc", 761, 901);
    come_call_finalizer(sDeleteNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 761, 904);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 761, 905):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDeleteNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 761, 906);
    return __result_obj__0;
}

char*  sDeleteNode_kind(struct sDeleteNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 763 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDeleteNode","53obj4.nc",763))), "53obj4.nc", 763, 907);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 763, 908));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 763, 909));
    return __result_obj__0;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    # 768 "53obj4.nc"
    node=(struct sNode*)come_increment_ref_count(self->node, "53obj4.nc", 768, 910);
    # 774 "53obj4.nc"
    Value=node_compile(node,info);
    if(!Value) {
        # 771 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 771, 911):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 774 "53obj4.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 774, 912);
    # 780 "53obj4.nc"
    if(come_value->type->mPointerNum>0) {
        # 777 "53obj4.nc"
        __right_value0 = (void*)0;
        free_object(((struct sType* )(__right_value0=sType_clone(come_value->type))),come_value->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 777, 913);
    }
    # 780 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 780, 914):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 780, 915);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDeleteNode_finalize(struct sDeleteNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_finalize"; neo_current_frame = &fr;
    # 1 "sDeleteNode_finalize"
    # 3 "sDeleteNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sDeleteNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDeleteNode_finalize", 2, 902));
    }
    # 4 "sDeleteNode_finalize"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 3 "sDeleteNode_finalize"
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sDeleteNode_finalize", 3, 903):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj98;
    struct sBorrowNode* __result_obj__0;
    # 788 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sBorrowNode*)come_increment_ref_count(self, "53obj4.nc", 788, 916),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 788, 917);
    # 790 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj98=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "53obj4.nc", 790, 919);
    (__dec_obj98 ? __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 790, 918) :0);
    # 792 "53obj4.nc"
        __result_obj__0 = (struct sBorrowNode*)come_increment_ref_count(self, "53obj4.nc", 792, 920);
    come_call_finalizer(sBorrowNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 792, 923);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 792, 924):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBorrowNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 792, 925);
    return __result_obj__0;
    # 795 "53obj4.nc"
        __result_obj__0 = (struct sBorrowNode*)come_increment_ref_count(self, "53obj4.nc", 795, 926);
    come_call_finalizer(sBorrowNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 795, 927);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 795, 928):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBorrowNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 795, 929);
    return __result_obj__0;
}

char*  sBorrowNode_kind(struct sBorrowNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 797 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sBorrowNode","53obj4.nc",797))), "53obj4.nc", 797, 930);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 797, 931));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 797, 932));
    return __result_obj__0;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    struct sType*  __dec_obj99  ;
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type, 0, sizeof(type));
    # 802 "53obj4.nc"
    node=(struct sNode*)come_increment_ref_count(self->node, "53obj4.nc", 802, 933);
    # 808 "53obj4.nc"
    Value=node_compile(node,info);
    if(!Value) {
        # 805 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 805, 934):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 808 "53obj4.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 808, 935);
    # 810 "53obj4.nc"
    remove_value_from_right_value_objects(come_value,info);
    # 812 "53obj4.nc"
    __right_value0 = (void*)0;
    type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "53obj4.nc", 812, 936);
    # 813 "53obj4.nc"
    type->mHeap=(_Bool)0;
    # 814 "53obj4.nc"
    __dec_obj99=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(type, "53obj4.nc", 814, 938);
    come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 814, 937);
    # 816 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 816, 939));
    # 818 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 818, 940):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 818, 941);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 818, 942);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sBorrowNode_finalize(struct sBorrowNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_finalize"; neo_current_frame = &fr;
    # 1 "sBorrowNode_finalize"
    # 3 "sBorrowNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sBorrowNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sBorrowNode_finalize", 2, 921));
    }
    # 4 "sBorrowNode_finalize"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 3 "sBorrowNode_finalize"
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sBorrowNode_finalize", 3, 922):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj100;
    struct sCloneNode* __result_obj__0;
    # 826 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCloneNode*)come_increment_ref_count(self, "53obj4.nc", 826, 943),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 826, 944);
    # 828 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj100=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "53obj4.nc", 828, 946);
    (__dec_obj100 ? __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 828, 945) :0);
    # 831 "53obj4.nc"
        __result_obj__0 = (struct sCloneNode*)come_increment_ref_count(self, "53obj4.nc", 831, 947);
    come_call_finalizer(sCloneNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 831, 950);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 831, 951):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCloneNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 831, 952);
    return __result_obj__0;
}

char*  sCloneNode_kind(struct sCloneNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 833 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCloneNode","53obj4.nc",833))), "53obj4.nc", 833, 953);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 833, 954));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 833, 955));
    return __result_obj__0;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sType*  left_type  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct tuple2$2sType$phchar$ph* multiple_assign_var1
;    struct sType*  result_type  =0;
    char*  c_value  =0;
    char*  __dec_obj101  ;
    struct sType*  __dec_obj102  ;
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&left_type, 0, sizeof(left_type));
    memset(&come_value, 0, sizeof(come_value));
    # 838 "53obj4.nc"
    node=(struct sNode*)come_increment_ref_count(self->node, "53obj4.nc", 838, 956);
    # 844 "53obj4.nc"
    Value=node_compile(node,info);
    if(!Value) {
        # 841 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 841, 957):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 844 "53obj4.nc"
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 844, 958);
    # 846 "53obj4.nc"
    __right_value0 = (void*)0;
    left_type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "53obj4.nc", 846, 959);
    # 868 "53obj4.nc"
    if(left_type->mPointerNum==1&&string_operator_equals(left_type->mClass->mName,"void")&&left_type->mHeap==(_Bool)0) {
        # 849 "53obj4.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(left_value, "53obj4.nc", 849, 960));
    }
    else if(left_type->mPointerNum==0) {
        # 852 "53obj4.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(left_value, "53obj4.nc", 852, 961));
    }
    else if(left_type->mPointerNum>0) {
        # 855 "53obj4.nc"
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 855, 962, "struct CVALUE* "), "53obj4.nc", 855, 963)), "53obj4.nc", 855, 964);
        # 857 "53obj4.nc"
        __right_value0 = (void*)0;
        multiple_assign_var1=((struct tuple2$2sType$phchar$ph*)(__right_value0=(clone_object)(left_type,left_value->c_value,info)));
        result_type=(struct sType* )come_increment_ref_count(multiple_assign_var1->v1, "53obj4.nc", 857, 965);
        c_value=(char* )come_increment_ref_count(multiple_assign_var1->v2, "53obj4.nc", 857, 966);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 857, 969);
        # 858 "53obj4.nc"
        __dec_obj101=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(c_value, "53obj4.nc", 858, 971);
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 858, 970);
        # 859 "53obj4.nc"
        __right_value0 = (void*)0;
        __dec_obj102=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_type), "53obj4.nc", 859, 973);
        come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 859, 972);
        # 860 "53obj4.nc"
        come_value->type->mHeap=(_Bool)1;
        # 861 "53obj4.nc"
        come_value->var=((void*)0);
        # 863 "53obj4.nc"
        append_object_to_right_values(come_value,left_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        # 865 "53obj4.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 865, 974));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 868, 975);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 868, 976);
        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 868, 977));
    }
    # 868 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 868, 978):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 868, 979);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 868, 980);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCloneNode_finalize(struct sCloneNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_finalize"; neo_current_frame = &fr;
    # 1 "sCloneNode_finalize"
    # 3 "sCloneNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sCloneNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCloneNode_finalize", 2, 948));
    }
    # 4 "sCloneNode_finalize"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 3 "sCloneNode_finalize"
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sCloneNode_finalize", 3, 949):(void*)0);
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
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2sType$phchar$ph$p_finalize}", 2, 967);
    }
    # 4 "tuple2$2sType$phchar$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple2$2sType$phchar$ph$p_finalize"
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2sType$phchar$ph$p_finalize", 3, 968));
    }
            neo_current_frame = fr.prev;
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj103;
    struct sDupeNode* __result_obj__0;
    # 876 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDupeNode*)come_increment_ref_count(self, "53obj4.nc", 876, 981),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 876, 982);
    # 878 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj103=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "53obj4.nc", 878, 984);
    (__dec_obj103 ? __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 878, 983) :0);
    # 881 "53obj4.nc"
        __result_obj__0 = (struct sDupeNode*)come_increment_ref_count(self, "53obj4.nc", 881, 985);
    come_call_finalizer(sDupeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 881, 988);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 881, 989):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDupeNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 881, 990);
    return __result_obj__0;
}

char*  sDupeNode_kind(struct sDupeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 883 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDupeNode","53obj4.nc",883))), "53obj4.nc", 883, 991);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 883, 992));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 883, 993));
    return __result_obj__0;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sType*  left_type  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct tuple2$2sType$phchar$ph* multiple_assign_var2
;    struct sType*  result_type  =0;
    char*  c_value  =0;
    char*  __dec_obj104  ;
    struct sType*  __dec_obj105  ;
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&left_type, 0, sizeof(left_type));
    memset(&come_value, 0, sizeof(come_value));
    # 888 "53obj4.nc"
    node=(struct sNode*)come_increment_ref_count(self->node, "53obj4.nc", 888, 994);
    # 894 "53obj4.nc"
    Value=node_compile(node,info);
    if(!Value) {
        # 891 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 891, 995):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 894 "53obj4.nc"
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 894, 996);
    # 896 "53obj4.nc"
    __right_value0 = (void*)0;
    left_type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "53obj4.nc", 896, 997);
    # 918 "53obj4.nc"
    if(left_type->mPointerNum==0) {
        # 899 "53obj4.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(left_value, "53obj4.nc", 899, 998));
    }
    else if(left_type->mPointerNum>0&&left_type->mHeap==(_Bool)0) {
        # 902 "53obj4.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(left_value, "53obj4.nc", 902, 999));
    }
    else if(left_type->mPointerNum>0) {
        # 905 "53obj4.nc"
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 905, 1000, "struct CVALUE* "), "53obj4.nc", 905, 1001)), "53obj4.nc", 905, 1002);
        # 907 "53obj4.nc"
        __right_value0 = (void*)0;
        multiple_assign_var2=((struct tuple2$2sType$phchar$ph*)(__right_value0=(clone_object)(left_type,left_value->c_value,info)));
        result_type=(struct sType* )come_increment_ref_count(multiple_assign_var2->v1, "53obj4.nc", 907, 1003);
        c_value=(char* )come_increment_ref_count(multiple_assign_var2->v2, "53obj4.nc", 907, 1004);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 907, 1005);
        # 908 "53obj4.nc"
        __dec_obj104=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(c_value, "53obj4.nc", 908, 1007);
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 908, 1006);
        # 909 "53obj4.nc"
        __right_value0 = (void*)0;
        __dec_obj105=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_type), "53obj4.nc", 909, 1009);
        come_call_finalizer(sType_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 909, 1008);
        # 910 "53obj4.nc"
        come_value->type->mHeap=(_Bool)1;
        # 911 "53obj4.nc"
        come_value->var=((void*)0);
        # 913 "53obj4.nc"
        append_object_to_right_values(come_value,left_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        # 915 "53obj4.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 915, 1010));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 918, 1011);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 918, 1012);
        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 918, 1013));
    }
    # 918 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 918, 1014):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 918, 1015);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 918, 1016);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDupeNode_finalize(struct sDupeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_finalize"; neo_current_frame = &fr;
    # 1 "sDupeNode_finalize"
    # 3 "sDupeNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sDupeNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDupeNode_finalize", 2, 986));
    }
    # 4 "sDupeNode_finalize"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 3 "sDupeNode_finalize"
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sDupeNode_finalize", 3, 987):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj106;
    struct sDummyHeapNode* __result_obj__0;
    # 926 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDummyHeapNode*)come_increment_ref_count(self, "53obj4.nc", 926, 1017),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 926, 1018);
    # 928 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj106=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "53obj4.nc", 928, 1020);
    (__dec_obj106 ? __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 928, 1019) :0);
    # 931 "53obj4.nc"
        __result_obj__0 = (struct sDummyHeapNode*)come_increment_ref_count(self, "53obj4.nc", 931, 1021);
    come_call_finalizer(sDummyHeapNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 931, 1024);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 931, 1025):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDummyHeapNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 931, 1026);
    return __result_obj__0;
}

char*  sDummyHeapNode_kind(struct sDummyHeapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 933 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDummyHeapNode","53obj4.nc",933))), "53obj4.nc", 933, 1027);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 933, 1028));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 933, 1029));
    return __result_obj__0;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    # 938 "53obj4.nc"
    node=(struct sNode*)come_increment_ref_count(self->node, "53obj4.nc", 938, 1030);
    # 944 "53obj4.nc"
    Value=node_compile(node,info);
    if(!Value) {
        # 941 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 941, 1031):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 944 "53obj4.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 944, 1032);
    # 950 "53obj4.nc"
    if(come_value->type->mPointerNum>0) {
        # 947 "53obj4.nc"
        come_value->type->mHeap=(_Bool)1;
    }
    # 950 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 950, 1033));
    # 952 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 952, 1034):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 952, 1035);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_finalize"; neo_current_frame = &fr;
    # 1 "sDummyHeapNode_finalize"
    # 3 "sDummyHeapNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sDummyHeapNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDummyHeapNode_finalize", 2, 1022));
    }
    # 4 "sDummyHeapNode_finalize"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 3 "sDummyHeapNode_finalize"
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sDummyHeapNode_finalize", 3, 1023):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj107;
    struct sGCIncNode* __result_obj__0;
    # 960 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGCIncNode*)come_increment_ref_count(self, "53obj4.nc", 960, 1036),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 960, 1037);
    # 962 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj107=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "53obj4.nc", 962, 1039);
    (__dec_obj107 ? __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 962, 1038) :0);
    # 965 "53obj4.nc"
        __result_obj__0 = (struct sGCIncNode*)come_increment_ref_count(self, "53obj4.nc", 965, 1040);
    come_call_finalizer(sGCIncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 965, 1043);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 965, 1044):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGCIncNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 965, 1045);
    return __result_obj__0;
}

char*  sGCIncNode_kind(struct sGCIncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 967 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGCIncNode","53obj4.nc",967))), "53obj4.nc", 967, 1046);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 967, 1047));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 967, 1048));
    return __result_obj__0;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    char*  type_name  ;
    char*  __dec_obj108  ;
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type, 0, sizeof(type));
    memset(&type_name, 0, sizeof(type_name));
    # 972 "53obj4.nc"
    node=(struct sNode*)come_increment_ref_count(self->node, "53obj4.nc", 972, 1049);
    # 978 "53obj4.nc"
    Value=node_compile(node,info);
    if(!Value) {
        # 975 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 975, 1050):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 978 "53obj4.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 978, 1051);
    # 980 "53obj4.nc"
    type=come_value->type;
    # 987 "53obj4.nc"
    if(come_value->type->mHeap&&come_value->type->mPointerNum>0) {
        # 983 "53obj4.nc"
        __right_value0 = (void*)0;
        type_name=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "53obj4.nc", 983, 1052);
        # 984 "53obj4.nc"
        __right_value0 = (void*)0;
        __dec_obj108=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(increment_ref_count_object(come_value->type,come_value->c_value,info), "53obj4.nc", 984, 1054);
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 984, 1053);
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 987, 1055));
    }
    # 987 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 987, 1056));
    # 989 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 989, 1057):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 989, 1058);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGCIncNode_finalize(struct sGCIncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_finalize"; neo_current_frame = &fr;
    # 1 "sGCIncNode_finalize"
    # 3 "sGCIncNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sGCIncNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sGCIncNode_finalize", 2, 1041));
    }
    # 4 "sGCIncNode_finalize"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 3 "sGCIncNode_finalize"
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sGCIncNode_finalize", 3, 1042):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj109;
    struct sGCDecNode* __result_obj__0;
    # 997 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGCDecNode*)come_increment_ref_count(self, "53obj4.nc", 997, 1059),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 997, 1060);
    # 999 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj109=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "53obj4.nc", 999, 1062);
    (__dec_obj109 ? __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 999, 1061) :0);
    # 1002 "53obj4.nc"
        __result_obj__0 = (struct sGCDecNode*)come_increment_ref_count(self, "53obj4.nc", 1002, 1063);
    come_call_finalizer(sGCDecNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 1002, 1066);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1002, 1067):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGCDecNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 1002, 1068);
    return __result_obj__0;
}

char*  sGCDecNode_kind(struct sGCDecNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 1004 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGCDecNode","53obj4.nc",1004))), "53obj4.nc", 1004, 1069);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 1004, 1070));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 1004, 1071));
    return __result_obj__0;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type, 0, sizeof(type));
    # 1009 "53obj4.nc"
    node=(struct sNode*)come_increment_ref_count(self->node, "53obj4.nc", 1009, 1072);
    # 1015 "53obj4.nc"
    Value=node_compile(node,info);
    if(!Value) {
        # 1012 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1012, 1073):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1015 "53obj4.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 1015, 1074);
    # 1017 "53obj4.nc"
    type=(struct sType* )come_increment_ref_count(come_value->type, "53obj4.nc", 1017, 1075);
    # 1023 "53obj4.nc"
    if(come_value->type->mHeap&&come_value->type->mPointerNum>0) {
        # 1020 "53obj4.nc"
        decrement_ref_count_object(type,come_value->c_value,info,(_Bool)0);
    }
    # 1023 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 1023, 1076));
    # 1025 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1025, 1077):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1025, 1078);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1025, 1079);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGCDecNode_finalize(struct sGCDecNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_finalize"; neo_current_frame = &fr;
    # 1 "sGCDecNode_finalize"
    # 3 "sGCDecNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sGCDecNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sGCDecNode_finalize", 2, 1064));
    }
    # 4 "sGCDecNode_finalize"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 3 "sGCDecNode_finalize"
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sGCDecNode_finalize", 3, 1065):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj110  ;
    struct sIsHeap* __result_obj__0;
    # 1033 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sIsHeap*)come_increment_ref_count(self, "53obj4.nc", 1033, 1080),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1033, 1081);
    # 1035 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj110=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "53obj4.nc", 1035, 1083);
    come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 1035, 1082);
    # 1038 "53obj4.nc"
        __result_obj__0 = (struct sIsHeap*)come_increment_ref_count(self, "53obj4.nc", 1038, 1084);
    come_call_finalizer(sIsHeap_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 1038, 1087);
    neo_current_frame = fr.prev;
    come_call_finalizer(sIsHeap_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 1038, 1088);
    return __result_obj__0;
}

char*  sIsHeap_kind(struct sIsHeap* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 1040 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sIsHeap","53obj4.nc",1040))), "53obj4.nc", 1040, 1089);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 1040, 1090));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 1040, 1091));
    return __result_obj__0;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj111  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj112  ;
    struct CVALUE*  come_value_24  ;
    char*  __dec_obj113  ;
    struct sType*  __dec_obj114  ;
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value_24, 0, sizeof(come_value_24));
    # 1068 "53obj4.nc"
    if(self->type->mHeap) {
        # 1046 "53obj4.nc"
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 1046, 1092, "struct CVALUE* "), "53obj4.nc", 1046, 1093)), "53obj4.nc", 1046, 1094);
        # 1048 "53obj4.nc"
        __right_value0 = (void*)0;
        __dec_obj111=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("1"), "53obj4.nc", 1048, 1096);
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 1048, 1095);
        # 1049 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj112=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 1049, 1097, "struct sType* "), "53obj4.nc", 1049, 1098),(char*)come_increment_ref_count(xsprintf("int"), "53obj4.nc", 1049, 1099),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 1049, 1101);
        come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 1049, 1100);
        # 1050 "53obj4.nc"
        come_value->var=((void*)0);
        # 1052 "53obj4.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 1052, 1102));
        # 1054 "53obj4.nc"
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1068, 1103);
    }
    else {
        # 1057 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_24=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 1057, 1104, "struct CVALUE* "), "53obj4.nc", 1057, 1105)), "53obj4.nc", 1057, 1106);
        # 1059 "53obj4.nc"
        __right_value0 = (void*)0;
        __dec_obj113=come_value_24->c_value,
        come_value_24->c_value=(char* )come_increment_ref_count(xsprintf("0"), "53obj4.nc", 1059, 1108);
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 1059, 1107);
        # 1060 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj114=come_value_24->type,
        come_value_24->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 1060, 1109, "struct sType* "), "53obj4.nc", 1060, 1110),(char*)come_increment_ref_count(xsprintf("int"), "53obj4.nc", 1060, 1111),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 1060, 1113);
        come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 1060, 1112);
        # 1061 "53obj4.nc"
        come_value_24->var=((void*)0);
        # 1063 "53obj4.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_24, "53obj4.nc", 1063, 1114));
        # 1065 "53obj4.nc"
        add_come_last_code(info,"%s",come_value_24->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_24, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1068, 1115);
    }
    # 1068 "53obj4.nc"
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sIsHeap_finalize(struct sIsHeap* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_finalize"; neo_current_frame = &fr;
    # 1 "sIsHeap_finalize"
    # 3 "sIsHeap_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sIsHeap_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sIsHeap_finalize", 2, 1085));
    }
    # 4 "sIsHeap_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 3 "sIsHeap_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sIsHeap_finalize}", 3, 1086);
    }
        neo_current_frame = fr.prev;
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj115  ;
    struct sIsPointer* __result_obj__0;
    # 1076 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sIsPointer*)come_increment_ref_count(self, "53obj4.nc", 1076, 1116),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1076, 1117);
    # 1078 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj115=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "53obj4.nc", 1078, 1119);
    come_call_finalizer(sType_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 1078, 1118);
    # 1081 "53obj4.nc"
        __result_obj__0 = (struct sIsPointer*)come_increment_ref_count(self, "53obj4.nc", 1081, 1120);
    come_call_finalizer(sIsPointer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 1081, 1123);
    neo_current_frame = fr.prev;
    come_call_finalizer(sIsPointer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 1081, 1124);
    return __result_obj__0;
}

char*  sIsPointer_kind(struct sIsPointer* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 1083 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sIsPointer","53obj4.nc",1083))), "53obj4.nc", 1083, 1125);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 1083, 1126));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 1083, 1127));
    return __result_obj__0;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj116  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj117  ;
    struct CVALUE*  come_value_25  ;
    char*  __dec_obj118  ;
    struct sType*  __dec_obj119  ;
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value_25, 0, sizeof(come_value_25));
    # 1111 "53obj4.nc"
    if(self->type->mPointerNum==0&&self->type->mArrayPointerNum==0) {
        # 1089 "53obj4.nc"
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 1089, 1128, "struct CVALUE* "), "53obj4.nc", 1089, 1129)), "53obj4.nc", 1089, 1130);
        # 1091 "53obj4.nc"
        __right_value0 = (void*)0;
        __dec_obj116=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("0"), "53obj4.nc", 1091, 1132);
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 1091, 1131);
        # 1092 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj117=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 1092, 1133, "struct sType* "), "53obj4.nc", 1092, 1134),(char*)come_increment_ref_count(xsprintf("int"), "53obj4.nc", 1092, 1135),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 1092, 1137);
        come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 1092, 1136);
        # 1093 "53obj4.nc"
        come_value->var=((void*)0);
        # 1095 "53obj4.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 1095, 1138));
        # 1097 "53obj4.nc"
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1111, 1139);
    }
    else {
        # 1100 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_25=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "53obj4.nc", 1100, 1140, "struct CVALUE* "), "53obj4.nc", 1100, 1141)), "53obj4.nc", 1100, 1142);
        # 1102 "53obj4.nc"
        __right_value0 = (void*)0;
        __dec_obj118=come_value_25->c_value,
        come_value_25->c_value=(char* )come_increment_ref_count(xsprintf("1"), "53obj4.nc", 1102, 1144);
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0, "53obj4.nc", 1102, 1143);
        # 1103 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj119=come_value_25->type,
        come_value_25->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 1103, 1145, "struct sType* "), "53obj4.nc", 1103, 1146),(char*)come_increment_ref_count(xsprintf("int"), "53obj4.nc", 1103, 1147),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 1103, 1149);
        come_call_finalizer(sType_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 1103, 1148);
        # 1104 "53obj4.nc"
        come_value_25->var=((void*)0);
        # 1106 "53obj4.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_25, "53obj4.nc", 1106, 1150));
        # 1108 "53obj4.nc"
        add_come_last_code(info,"%s",come_value_25->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_25, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1111, 1151);
    }
    # 1111 "53obj4.nc"
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sIsPointer_finalize(struct sIsPointer* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_finalize"; neo_current_frame = &fr;
    # 1 "sIsPointer_finalize"
    # 3 "sIsPointer_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sIsPointer_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sIsPointer_finalize", 2, 1121));
    }
    # 4 "sIsPointer_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 3 "sIsPointer_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sIsPointer_finalize}", 3, 1122);
    }
        neo_current_frame = fr.prev;
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj120;
    struct sGCDecNoFreeNode* __result_obj__0;
    # 1119 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count(self, "53obj4.nc", 1119, 1152),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1119, 1153);
    # 1121 "53obj4.nc"
    __right_value0 = (void*)0;
    __dec_obj120=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "53obj4.nc", 1121, 1155);
    (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1121, 1154) :0);
    # 1124 "53obj4.nc"
        __result_obj__0 = (struct sGCDecNoFreeNode*)come_increment_ref_count(self, "53obj4.nc", 1124, 1156);
    come_call_finalizer(sGCDecNoFreeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 1124, 1159);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1124, 1160):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGCDecNoFreeNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 1124, 1161);
    return __result_obj__0;
}

char*  sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 1126 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGCDecNoFreeNode","53obj4.nc",1126))), "53obj4.nc", 1126, 1162);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 1126, 1163));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 1126, 1164));
    return __result_obj__0;
}

_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type, 0, sizeof(type));
    # 1131 "53obj4.nc"
    node=(struct sNode*)come_increment_ref_count(self->node, "53obj4.nc", 1131, 1165);
    # 1137 "53obj4.nc"
    Value=node_compile(node,info);
    if(!Value) {
        # 1134 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1134, 1166):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1137 "53obj4.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 1137, 1167);
    # 1139 "53obj4.nc"
    type=(struct sType* )come_increment_ref_count(come_value->type, "53obj4.nc", 1139, 1168);
    # 1145 "53obj4.nc"
    if(type->mHeap&&type->mPointerNum>0) {
        # 1142 "53obj4.nc"
        decrement_ref_count_object(type,come_value->c_value,info,(_Bool)1);
    }
    # 1145 "53obj4.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 1145, 1169));
    # 1147 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1147, 1170):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1147, 1171);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1147, 1172);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_finalize"; neo_current_frame = &fr;
    # 1 "sGCDecNoFreeNode_finalize"
    # 3 "sGCDecNoFreeNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sGCDecNoFreeNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sGCDecNoFreeNode_finalize", 2, 1157));
    }
    # 4 "sGCDecNoFreeNode_finalize"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 3 "sGCDecNoFreeNode_finalize"
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sGCDecNoFreeNode_finalize", 3, 1158):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sRefNode* sRefNode_initialize(struct sRefNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj121;
    struct sRefNode* __result_obj__0;
    # 1158 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sRefNode*)come_increment_ref_count(self, "53obj4.nc", 1158, 1173),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1158, 1174);
    # 1160 "53obj4.nc"
    __dec_obj121=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1160, 1176);
    (__dec_obj121 ? __dec_obj121 = come_decrement_ref_count(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1160, 1175) :0);
    # 1163 "53obj4.nc"
        __result_obj__0 = (struct sRefNode*)come_increment_ref_count(self, "53obj4.nc", 1163, 1177);
    come_call_finalizer(sRefNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 1163, 1180);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1163, 1181):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sRefNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 1163, 1182);
    return __result_obj__0;
}

char*  sRefNode_kind(struct sRefNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 1165 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sRefNode","53obj4.nc",1165))), "53obj4.nc", 1165, 1183);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 1165, 1184));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 1165, 1185));
    return __result_obj__0;
}

_Bool sRefNode_compile(struct sRefNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    _Bool global_;
    _Bool heap_;
    _Bool local_;
    struct sType*  origin  ;
    struct sType*  type_  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  generics_type  ;
    struct sType*  type  ;
    struct sType*  type2  ;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* node2;
    struct sNode* stacktop;
    void* __right_value3 = (void*)0;
    struct sNode* method_node;
    _Bool Value_28;
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&global_, 0, sizeof(global_));
    memset(&heap_, 0, sizeof(heap_));
    memset(&local_, 0, sizeof(local_));
    memset(&origin, 0, sizeof(origin));
    memset(&type_, 0, sizeof(type_));
    memset(&generics_type, 0, sizeof(generics_type));
    memset(&type, 0, sizeof(type));
    memset(&type2, 0, sizeof(type2));
    memset(&obj, 0, sizeof(obj));
    memset(&params, 0, sizeof(params));
    memset(&node2, 0, sizeof(node2));
    memset(&stacktop, 0, sizeof(stacktop));
    memset(&method_node, 0, sizeof(method_node));
    memset(&Value_28, 0, sizeof(Value_28));
    # 1170 "53obj4.nc"
    node=(struct sNode*)come_increment_ref_count(self->node, "53obj4.nc", 1170, 1186);
    # 1176 "53obj4.nc"
    Value=node_compile(node,info);
    if(!Value) {
        # 1173 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1173, 1187):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1176 "53obj4.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 1176, 1188);
    # 1178 "53obj4.nc"
    # 1179 "53obj4.nc"
    # 1180 "53obj4.nc"
    # 1182 "53obj4.nc"
    origin=(struct sType* )come_increment_ref_count(come_value->type->mTypedefOriginalType, "53obj4.nc", 1182, 1189);
    # 1208 "53obj4.nc"
    if(come_value->type->mPointerNum!=1&&come_value->type->mArrayPointerNum!=1&&origin->mPointerNum!=1) {
        # 1185 "53obj4.nc"
        err_msg(info,"require pointer for ref");
        # 1186 "53obj4.nc"
        show_type(come_value->type,info);
        # 1187 "53obj4.nc"
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1187, 1190):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1187, 1191);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1187, 1192);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else if(come_value->var) {
        # 1195 "53obj4.nc"
        if(come_value->type->mHeap) {
            # 1191 "53obj4.nc"
            err_msg(info,"require borrow and do not owned for ref");
            # 1192 "53obj4.nc"
            show_type(come_value->type,info);
            # 1193 "53obj4.nc"
                        __result_obj__0 = (_Bool)1;
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1193, 1193):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1193, 1194);
            come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1193, 1195);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 1195 "53obj4.nc"
        global_=come_value->var->mGlobal;
        # 1196 "53obj4.nc"
        heap_=come_value->var->mType->mHeap;
        # 1197 "53obj4.nc"
        local_=!global_&&!heap_;
    }
    else if(come_value->mNullValue) {
        # 1200 "53obj4.nc"
        err_msg(info,"no assign to null for ref");
        # 1201 "53obj4.nc"
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1201, 1196):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1201, 1197);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1201, 1198);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else {
        # 1204 "53obj4.nc"
        err_msg(info,"require variable name for ref");
        # 1205 "53obj4.nc"
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1205, 1199):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1205, 1200);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1205, 1201);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1208 "53obj4.nc"
    __right_value0 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "53obj4.nc", 1208, 1202);
    # 1210 "53obj4.nc"
    __right_value0 = (void*)0;
    generics_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 1210, 1203, "struct sType* "), "53obj4.nc", 1210, 1204),(char*)come_increment_ref_count(xsprintf("ref"), "53obj4.nc", 1210, 1205),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 1210, 1206);
    # 1211 "53obj4.nc"
    list$1sType$ph_add(generics_type->mGenericsTypes,(struct sType* )come_increment_ref_count(type_, "53obj4.nc", 1211, 1207));
    # 1217 "53obj4.nc"
    if(type_->mArrayPointerNum==1) {
        # 1213 "53obj4.nc"
        type_->mArrayPointerNum=0;
        # 1214 "53obj4.nc"
        type_->mPointerNum=1;
    }
    # 1217 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 1217, 1208, "struct sType* "), "53obj4.nc", 1217, 1209),(char*)come_increment_ref_count(xsprintf("ref"), "53obj4.nc", 1217, 1210),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 1217, 1211);
    # 1218 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    list$1sType$ph_add(type->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 1218, 1212, "struct sType* "), "53obj4.nc", 1218, 1213),(char*)come_increment_ref_count(xsprintf("__generics_type0"), "53obj4.nc", 1218, 1214),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 1218, 1215));
    # 1220 "53obj4.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,generics_type,info), "53obj4.nc", 1220, 1216);
    # 1222 "53obj4.nc"
    __right_value0 = (void*)0;
    obj=(struct sNode*)come_increment_ref_count(create_new_object((struct sType* )come_increment_ref_count(type2, "53obj4.nc", 1222, 1217),info), "53obj4.nc", 1222, 1218);
    # 1224 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "53obj4.nc", 1224, 1219, "struct list$1tuple2$2char$phsNode$ph$ph*"), "53obj4.nc", 1224, 1227)), "53obj4.nc", 1224, 1228);
    # 1226 "53obj4.nc"
    __right_value0 = (void*)0;
    node2=(struct sNode*)come_increment_ref_count(create_load_var("neo_current_frame",info), "53obj4.nc", 1226, 1229);
    # 1227 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    stacktop=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node2, "53obj4.nc", 1227, 1230),(char*)come_increment_ref_count(xsprintf("stacktop"), "53obj4.nc", 1227, 1231),info), "53obj4.nc", 1227, 1232);
    # 1229 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1229, 1247, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 3, 1257),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 3, 1258),(struct sNode*)come_increment_ref_count(obj, "53obj4.nc", 3, 1259)), "53obj4.nc", 1229, 1260));
    # 1230 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1230, 1261, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1230, 1262),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1230, 1263),(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1230, 1264)), "53obj4.nc", 1230, 1265));
    # 1231 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1231, 1266, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1231, 1267),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1231, 1268),(struct sNode*)come_increment_ref_count(((global_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "53obj4.nc", 1231, 1269)), "53obj4.nc", 1231, 1270));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1231, 1271):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1231, 1272):(void*)0);
    # 1232 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1232, 1273, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1232, 1274),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1232, 1275),(struct sNode*)come_increment_ref_count(((heap_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "53obj4.nc", 1232, 1276)), "53obj4.nc", 1232, 1277));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1232, 1278):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1232, 1279):(void*)0);
    # 1233 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1233, 1280, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1233, 1281),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1233, 1282),(struct sNode*)come_increment_ref_count(((local_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "53obj4.nc", 1233, 1283)), "53obj4.nc", 1233, 1284));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1233, 1285):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1233, 1286):(void*)0);
    # 1234 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1234, 1287, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1234, 1288),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1234, 1289),(struct sNode*)come_increment_ref_count(stacktop, "53obj4.nc", 1234, 1290)), "53obj4.nc", 1234, 1291));
    # 1236 "53obj4.nc"
    __right_value0 = (void*)0;
    method_node=(struct sNode*)come_increment_ref_count(create_method_call("initialize",(struct sNode*)come_increment_ref_count(obj, "53obj4.nc", 1236, 1292),params,((void*)0),0,((void*)0),info,(_Bool)0), "53obj4.nc", 1236, 1293);
    # 1242 "53obj4.nc"
    Value_28=node_compile(method_node,info);
    if(!Value_28) {
        # 1239 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1239, 1294):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1239, 1295);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1239, 1296);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1239, 1297);
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1239, 1298);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1239, 1299);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1239, 1300);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1239, 1301):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1239, 1302);
        ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1239, 1303):(void*)0);
        ((stacktop) ? stacktop = come_decrement_ref_count(stacktop, ((struct sNode*)stacktop)->finalize, ((struct sNode*)stacktop)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1239, 1304):(void*)0);
        ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1239, 1305):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1242 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1242, 1306):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1242, 1307);
    come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1242, 1308);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1242, 1309);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1242, 1310);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1242, 1311);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1242, 1312);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1242, 1313):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1242, 1314);
    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1242, 1315):(void*)0);
    ((stacktop) ? stacktop = come_decrement_ref_count(stacktop, ((struct sNode*)stacktop)->finalize, ((struct sNode*)stacktop)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1242, 1316):(void*)0);
    ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1242, 1317):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sRefNode_finalize(struct sRefNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_finalize"; neo_current_frame = &fr;
    # 1 "sRefNode_finalize"
    # 3 "sRefNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sRefNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sRefNode_finalize", 2, 1178));
    }
    # 4 "sRefNode_finalize"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 3 "sRefNode_finalize"
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sRefNode_finalize", 3, 1179):(void*)0);
    }
        neo_current_frame = fr.prev;
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
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 1220);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3, 1225);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3, 1226);
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 1224);
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
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 1223);
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
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph$p_finalize", 2, 1221));
    }
    # 4 "tuple2$2char$phsNode$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple2$2char$phsNode$ph$p_finalize"
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph$p_finalize", 3, 1222):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj122;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_26;
    struct tuple2$2char$phsNode$ph* __dec_obj123;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_27;
    struct tuple2$2char$phsNode$ph* __dec_obj124;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_26, 0, sizeof(litem_26));
    memset(&litem_27, 0, sizeof(litem_27));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 1233);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1534, 1234, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1534, 1235);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj122=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1538, 1237);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 1236);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_26=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1544, 1238, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1544, 1239);
        # 1546 "./neo-c.h"
        litem_26->prev=self->head;
        # 1547 "./neo-c.h"
        litem_26->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj123=litem_26->item,
        litem_26->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1548, 1241);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 1240);
        # 1550 "./neo-c.h"
        self->tail=litem_26;
        # 1551 "./neo-c.h"
        self->head->next=litem_26;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_27=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1554, 1242, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1554, 1243);
        # 1556 "./neo-c.h"
        litem_27->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_27->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj124=litem_27->item,
        litem_27->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1558, 1245);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 1244);
        # 1560 "./neo-c.h"
        self->tail->next=litem_27;
        # 1561 "./neo-c.h"
        self->tail=litem_27;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 1246);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj125  ;
    struct sNode* __dec_obj126;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    # 4455 "./neo-c.h"
    __dec_obj125=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "./neo-c.h", 4455, 1249);
    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4455, 1248);
    # 4456 "./neo-c.h"
    __dec_obj126=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "./neo-c.h", 4456, 1251);
    (__dec_obj126 ? __dec_obj126 = come_decrement_ref_count(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 4456, 1250) :0);
    # 4458 "./neo-c.h"
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "./neo-c.h", 4458, 1252);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4458, 1253);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4458, 1254));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 4458, 1255):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4458, 1256);
    return __result_obj__0;
}

struct sOptionalNode* sOptionalNode_initialize(struct sOptionalNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj127;
    struct sOptionalNode* __result_obj__0;
    # 1250 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sOptionalNode*)come_increment_ref_count(self, "53obj4.nc", 1250, 1318),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1250, 1319);
    # 1252 "53obj4.nc"
    __dec_obj127=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1252, 1321);
    (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1252, 1320) :0);
    # 1255 "53obj4.nc"
        __result_obj__0 = (struct sOptionalNode*)come_increment_ref_count(self, "53obj4.nc", 1255, 1322);
    come_call_finalizer(sOptionalNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 1255, 1325);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1255, 1326):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sOptionalNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 1255, 1327);
    return __result_obj__0;
}

char*  sOptionalNode_kind(struct sOptionalNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 1257 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sOptionalNode","53obj4.nc",1257))), "53obj4.nc", 1257, 1328);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 1257, 1329));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 1257, 1330));
    return __result_obj__0;
}

_Bool sOptionalNode_compile(struct sOptionalNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    _Bool global_;
    _Bool heap_;
    _Bool local_;
    struct sType*  origin  ;
    int origin_pointer_num;
    struct sType*  type_  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  generics_type  ;
    struct sType*  type  ;
    struct sType*  type2  ;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* node2;
    struct sNode* stacktop;
    void* __right_value3 = (void*)0;
    struct sNode* method_node;
    _Bool Value_29;
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&global_, 0, sizeof(global_));
    memset(&heap_, 0, sizeof(heap_));
    memset(&local_, 0, sizeof(local_));
    memset(&origin, 0, sizeof(origin));
    memset(&origin_pointer_num, 0, sizeof(origin_pointer_num));
    memset(&type_, 0, sizeof(type_));
    memset(&generics_type, 0, sizeof(generics_type));
    memset(&type, 0, sizeof(type));
    memset(&type2, 0, sizeof(type2));
    memset(&obj, 0, sizeof(obj));
    memset(&params, 0, sizeof(params));
    memset(&node2, 0, sizeof(node2));
    memset(&stacktop, 0, sizeof(stacktop));
    memset(&method_node, 0, sizeof(method_node));
    memset(&Value_29, 0, sizeof(Value_29));
    # 1262 "53obj4.nc"
    node=(struct sNode*)come_increment_ref_count(self->node, "53obj4.nc", 1262, 1331);
    # 1268 "53obj4.nc"
    Value=node_compile(node,info);
    if(!Value) {
        # 1265 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1265, 1332):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1268 "53obj4.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 1268, 1333);
    # 1270 "53obj4.nc"
    # 1271 "53obj4.nc"
    # 1272 "53obj4.nc"
    # 1274 "53obj4.nc"
    origin=(struct sType* )come_increment_ref_count(come_value->type->mTypedefOriginalType, "53obj4.nc", 1274, 1334);
    # 1275 "53obj4.nc"
    origin_pointer_num=((origin)?(origin->mPointerNum):(0));
    # 1308 "53obj4.nc"
    if(!come_value->mNullValue&&come_value->type->mPointerNum!=1&&come_value->type->mArrayPointerNum!=1&&origin_pointer_num!=1) {
        # 1282 "53obj4.nc"
        err_msg(info,"require pointer for opt");
        # 1283 "53obj4.nc"
        show_type(come_value->type,info);
        # 1284 "53obj4.nc"
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1284, 1335):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1284, 1336);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1284, 1337);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else if(come_value->var) {
        # 1287 "53obj4.nc"
        global_=come_value->var->mGlobal;
        # 1288 "53obj4.nc"
        heap_=come_value->var->mType->mHeap;
        # 1289 "53obj4.nc"
        local_=!global_&&!heap_;
    }
    else if(come_value->mNullValue) {
        # 1292 "53obj4.nc"
        global_=(_Bool)0;
        # 1293 "53obj4.nc"
        heap_=(_Bool)0;
        # 1294 "53obj4.nc"
        local_=(_Bool)0;
    }
    else {
        # 1306 "53obj4.nc"
        if(come_value->type->mHeap) {
            # 1298 "53obj4.nc"
            global_=(_Bool)0;
            # 1299 "53obj4.nc"
            heap_=(_Bool)1;
            # 1300 "53obj4.nc"
            local_=(_Bool)0;
        }
        else {
            # 1303 "53obj4.nc"
            err_msg(info,"require heap or variable name for opt");
            # 1304 "53obj4.nc"
                        __result_obj__0 = (_Bool)1;
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1304, 1338):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1304, 1339);
            come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1304, 1340);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    # 1308 "53obj4.nc"
    __right_value0 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "53obj4.nc", 1308, 1341);
    # 1310 "53obj4.nc"
    __right_value0 = (void*)0;
    generics_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 1310, 1342, "struct sType* "), "53obj4.nc", 1310, 1343),(char*)come_increment_ref_count(xsprintf("optional"), "53obj4.nc", 1310, 1344),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 1310, 1345);
    # 1315 "53obj4.nc"
    if(type_->mArrayPointerNum==1) {
        # 1312 "53obj4.nc"
        type_->mArrayPointerNum=0;
        # 1313 "53obj4.nc"
        type_->mPointerNum=1;
    }
    # 1315 "53obj4.nc"
    list$1sType$ph_add(generics_type->mGenericsTypes,(struct sType* )come_increment_ref_count(type_, "53obj4.nc", 1315, 1346));
    # 1317 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 1317, 1347, "struct sType* "), "53obj4.nc", 1317, 1348),(char*)come_increment_ref_count(xsprintf("optional"), "53obj4.nc", 1317, 1349),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 1317, 1350);
    # 1318 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    list$1sType$ph_add(type->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 1318, 1351, "struct sType* "), "53obj4.nc", 1318, 1352),(char*)come_increment_ref_count(xsprintf("__generics_type0"), "53obj4.nc", 1318, 1353),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 1318, 1354));
    # 1320 "53obj4.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,generics_type,info), "53obj4.nc", 1320, 1355);
    # 1322 "53obj4.nc"
    __right_value0 = (void*)0;
    obj=(struct sNode*)come_increment_ref_count(create_new_object((struct sType* )come_increment_ref_count(type2, "53obj4.nc", 1322, 1356),info), "53obj4.nc", 1322, 1357);
    # 1324 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "53obj4.nc", 1324, 1358, "struct list$1tuple2$2char$phsNode$ph$ph*"), "53obj4.nc", 1324, 1359)), "53obj4.nc", 1324, 1360);
    # 1326 "53obj4.nc"
    __right_value0 = (void*)0;
    node2=(struct sNode*)come_increment_ref_count(create_load_var("neo_current_frame",info), "53obj4.nc", 1326, 1361);
    # 1327 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    stacktop=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node2, "53obj4.nc", 1327, 1362),(char*)come_increment_ref_count(xsprintf("stacktop"), "53obj4.nc", 1327, 1363),info), "53obj4.nc", 1327, 1364);
    # 1329 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1329, 1365, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1329, 1366),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1329, 1367),(struct sNode*)come_increment_ref_count(obj, "53obj4.nc", 1329, 1368)), "53obj4.nc", 1329, 1369));
    # 1330 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1330, 1370, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1330, 1371),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1330, 1372),(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1330, 1373)), "53obj4.nc", 1330, 1374));
    # 1331 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1331, 1375, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1331, 1376),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1331, 1377),(struct sNode*)come_increment_ref_count(((global_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "53obj4.nc", 1331, 1378)), "53obj4.nc", 1331, 1379));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1331, 1380):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1331, 1381):(void*)0);
    # 1332 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1332, 1382, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1332, 1383),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1332, 1384),(struct sNode*)come_increment_ref_count(((heap_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "53obj4.nc", 1332, 1385)), "53obj4.nc", 1332, 1386));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1332, 1387):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1332, 1388):(void*)0);
    # 1333 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1333, 1389, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1333, 1390),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1333, 1391),(struct sNode*)come_increment_ref_count(((local_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "53obj4.nc", 1333, 1392)), "53obj4.nc", 1333, 1393));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1333, 1394):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1333, 1395):(void*)0);
    # 1334 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1334, 1396, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1334, 1397),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1334, 1398),(struct sNode*)come_increment_ref_count(stacktop, "53obj4.nc", 1334, 1399)), "53obj4.nc", 1334, 1400));
    # 1336 "53obj4.nc"
    __right_value0 = (void*)0;
    method_node=(struct sNode*)come_increment_ref_count(create_method_call("initialize",(struct sNode*)come_increment_ref_count(obj, "53obj4.nc", 1336, 1401),params,((void*)0),0,((void*)0),info,(_Bool)0), "53obj4.nc", 1336, 1402);
    # 1342 "53obj4.nc"
    Value_29=node_compile(method_node,info);
    if(!Value_29) {
        # 1339 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1339, 1403):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1339, 1404);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1339, 1405);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1339, 1406);
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1339, 1407);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1339, 1408);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1339, 1409);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1339, 1410):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1339, 1411);
        ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1339, 1412):(void*)0);
        ((stacktop) ? stacktop = come_decrement_ref_count(stacktop, ((struct sNode*)stacktop)->finalize, ((struct sNode*)stacktop)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1339, 1413):(void*)0);
        ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1339, 1414):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1342 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1342, 1415):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1342, 1416);
    come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1342, 1417);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1342, 1418);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1342, 1419);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1342, 1420);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1342, 1421);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1342, 1422):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1342, 1423);
    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1342, 1424):(void*)0);
    ((stacktop) ? stacktop = come_decrement_ref_count(stacktop, ((struct sNode*)stacktop)->finalize, ((struct sNode*)stacktop)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1342, 1425):(void*)0);
    ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1342, 1426):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sOptionalNode_finalize(struct sOptionalNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_finalize"; neo_current_frame = &fr;
    # 1 "sOptionalNode_finalize"
    # 3 "sOptionalNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sOptionalNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sOptionalNode_finalize", 2, 1323));
    }
    # 4 "sOptionalNode_finalize"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 3 "sOptionalNode_finalize"
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sOptionalNode_finalize", 3, 1324):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static _Bool is_buffer_like_type(struct sType*  type  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_buffer_like_type"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  it  ;
    int guard;
    char*  class_name  ;
    _Bool __result_obj__0;
    char*  original_name  ;
    struct sType*  __dec_obj128  ;
    memset(&it, 0, sizeof(it));
    memset(&guard, 0, sizeof(guard));
    memset(&class_name, 0, sizeof(class_name));
    memset(&original_name, 0, sizeof(original_name));
    # 1352 "53obj4.nc"
    if(type==((void*)0)) {
        # 1349 "53obj4.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 1352 "53obj4.nc"
    it=(struct sType* )come_increment_ref_count(sType_clone(type), "53obj4.nc", 1352, 1427);
    # 1353 "53obj4.nc"
    guard=0;
    # 1379 "53obj4.nc"
    while(it!=((void*)0)&&guard<16) {
        # 1363 "53obj4.nc"
        if(it->mClass&&it->mClass->mName) {
            # 1357 "53obj4.nc"
            __right_value0 = (void*)0;
            class_name=(char* )come_increment_ref_count(__builtin_string(it->mClass->mName,"53obj4.nc",1357), "53obj4.nc", 1357, 1428);
            # 1361 "53obj4.nc"
            if(string_operator_equals(class_name,"buffer")||string_operator_equals(class_name,"buffer*")) {
                # 1359 "53obj4.nc"
                                __result_obj__0 = (_Bool)1;
                (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 1359, 1429));
                come_call_finalizer(sType_finalize, it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1359, 1430);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 1363, 1431));
        }
        # 1370 "53obj4.nc"
        if(it->mOriginalTypeName) {
            # 1364 "53obj4.nc"
            __right_value0 = (void*)0;
            original_name=(char* )come_increment_ref_count(__builtin_string(it->mOriginalTypeName,"53obj4.nc",1364), "53obj4.nc", 1364, 1432);
            # 1368 "53obj4.nc"
            if(string_operator_equals(original_name,"buffer")||string_operator_equals(original_name,"buffer*")) {
                # 1366 "53obj4.nc"
                                __result_obj__0 = (_Bool)1;
                (original_name = come_decrement_ref_count(original_name, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 1366, 1433));
                come_call_finalizer(sType_finalize, it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1366, 1434);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            (original_name = come_decrement_ref_count(original_name, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 1370, 1435));
        }
        # 1376 "53obj4.nc"
        if(it->mTypedefOriginalType) {
            # 1371 "53obj4.nc"
            __right_value0 = (void*)0;
            __dec_obj128=it,
            it=(struct sType* )come_increment_ref_count(sType_clone(it->mTypedefOriginalType), "53obj4.nc", 1371, 1437);
            come_call_finalizer(sType_finalize, __dec_obj128,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 1371, 1436);
            # 1372 "53obj4.nc"
            guard++;
            # 1373 "53obj4.nc"
            continue;
        }
        # 1376 "53obj4.nc"
        break;
    }
    # 1379 "53obj4.nc"
        __result_obj__0 = (_Bool)0;
    come_call_finalizer(sType_finalize, it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1379, 1438);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct tuple2$2sNode$phsNode$ph* get_head_and_len(struct sNode* node, struct CVALUE*  come_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_head_and_len"; neo_current_frame = &fr;
    struct sNode* head;
    struct sNode* len;
    void* __right_value0 = (void*)0;
    struct sType*  type  ;
    struct sType*  type2  ;
    struct sType*  __dec_obj129  ;
    struct sType*  __dec_obj130  ;
    _Bool buffer_like;
    void* __right_value1 = (void*)0;
    struct sNode* __dec_obj131;
    struct sNode* len_field;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj132;
    char*  var_name  ;
    struct sNode* svar;
    struct sNode* __dec_obj133;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* __dec_obj134;
    struct sNode* __dec_obj135;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params_30;
    struct sNode* method_node;
    struct sNode* __dec_obj136;
    struct sNode* __dec_obj137;
    struct sNode* _inf_value3;
    struct sHeapSizeOfNode* _inf_obj_value3;
    struct sNode* __dec_obj140;
    char*  var_name_32  ;
    struct sNode* svar_33;
    struct sNode* __dec_obj141;
    struct sNode* _inf_value4;
    struct sDynamicSizeOfExpNode* _inf_obj_value4;
    void* __right_value3 = (void*)0;
    struct sNode* __dec_obj144;
    struct sNode* __dec_obj145;
    struct sNode* _inf_value5;
    struct sDynamicSizeOfExpNode* _inf_obj_value5;
    struct sNode* __dec_obj146;
    struct sNode* __dec_obj147;
    _Bool _conditional_value_X0;
    struct sNode* _inf_value6;
    struct sSizeOfExpNode* _inf_obj_value6;
    struct sNode* __dec_obj150;
    struct sNode* _inf_value7;
    struct sSizeOfExpNode* _inf_obj_value7;
    struct sNode* __dec_obj151;
    struct sNode* __dec_obj152;
    struct sNode* _inf_value8;
    struct sSizeOfExpNode* _inf_obj_value8;
    struct sNode* __dec_obj153;
    struct tuple2$2sNode$phsNode$ph* __result_obj__0;
    memset(&head, 0, sizeof(head));
    memset(&len, 0, sizeof(len));
    memset(&type, 0, sizeof(type));
    memset(&type2, 0, sizeof(type2));
    memset(&buffer_like, 0, sizeof(buffer_like));
    memset(&len_field, 0, sizeof(len_field));
    memset(&var_name, 0, sizeof(var_name));
    memset(&svar, 0, sizeof(svar));
    memset(&params, 0, sizeof(params));
    memset(&obj, 0, sizeof(obj));
    memset(&params_30, 0, sizeof(params_30));
    memset(&method_node, 0, sizeof(method_node));
    memset(&var_name_32, 0, sizeof(var_name_32));
    memset(&svar_33, 0, sizeof(svar_33));
    # 1384 "53obj4.nc"
    # 1385 "53obj4.nc"
    # 1386 "53obj4.nc"
    type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "53obj4.nc", 1386, 1439);
    # 1387 "53obj4.nc"
    # 1395 "53obj4.nc"
    if(type->mNoSolvedGenericsType) {
        # 1389 "53obj4.nc"
        __dec_obj129=type2,
        type2=(struct sType* )come_increment_ref_count(type->mNoSolvedGenericsType, "53obj4.nc", 1389, 1441);
        come_call_finalizer(sType_finalize, __dec_obj129,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 1389, 1440);
    }
    else {
        # 1392 "53obj4.nc"
        __dec_obj130=type2,
        type2=(struct sType* )come_increment_ref_count(type, "53obj4.nc", 1392, 1443);
        come_call_finalizer(sType_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc", 1392, 1442);
    }
    # 1395 "53obj4.nc"
    buffer_like=is_buffer_like_type(type)||is_buffer_like_type(type2);
    # 1469 "53obj4.nc"
    if(buffer_like) {
        # 1398 "53obj4.nc"
        __right_value0 = (void*)0;
        __dec_obj131=head,
        head=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1398, 1444),(char*)come_increment_ref_count(xsprintf("buf"), "53obj4.nc", 1398, 1445),info), "53obj4.nc", 1398, 1447);
        (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1398, 1446) :0);
        # 1399 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        len_field=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1399, 1448),(char*)come_increment_ref_count(xsprintf("len"), "53obj4.nc", 1399, 1449),info), "53obj4.nc", 1399, 1450);
        # 1400 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj132=len,
        len=(struct sNode*)come_increment_ref_count(add_node((struct sNode*)come_increment_ref_count(len_field, "53obj4.nc", 1400, 1451),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(xsprintf("1"), "53obj4.nc", 1400, 1452),info), "53obj4.nc", 1400, 1453),info), "53obj4.nc", 1400, 1455);
        (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1400, 1454) :0);
        ((len_field) ? len_field = come_decrement_ref_count(len_field, ((struct sNode*)len_field)->finalize, ((struct sNode*)len_field)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1469, 1456):(void*)0);
    }
    else if((type2->mOriginalTypeName&&string_operator_equals(type2->mOriginalTypeName,"string"))||(string_operator_equals(type2->mClass->mName,"char")&&type2->mPointerNum==1&&type2->mHeap)&&!type2->mNew) {
        # 1403 "53obj4.nc"
        static int n=0;
        # 1404 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        var_name=(char*)come_increment_ref_count(xsprintf("__tmp_string\%s",((char* )(__right_value0=int_to_string(++n)))), "53obj4.nc", 1404, 1457);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 1404, 1458));
        # 1406 "53obj4.nc"
        __right_value0 = (void*)0;
        svar=(struct sNode*)come_increment_ref_count(store_var((char* )come_increment_ref_count(var_name, "53obj4.nc", 1406, 1459),((void*)0),((void*)0),type2,(_Bool)1,node,info,(_Bool)0), "53obj4.nc", 1406, 1460);
        # 1408 "53obj4.nc"
        __dec_obj133=head,
        head=(struct sNode*)come_increment_ref_count(svar, "53obj4.nc", 1408, 1462);
        (__dec_obj133 ? __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1408, 1461) :0);
        # 1411 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "53obj4.nc", 1411, 1463, "struct list$1tuple2$2char$phsNode$ph$ph*"), "53obj4.nc", 1411, 1464)), "53obj4.nc", 1411, 1465);
        # 1413 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1413, 1466, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1413, 1467),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1413, 1468),(struct sNode*)come_increment_ref_count(create_load_var(var_name,info), "53obj4.nc", 1413, 1469)), "53obj4.nc", 1413, 1470));
        # 1415 "53obj4.nc"
        __right_value0 = (void*)0;
        __dec_obj134=len,
        len=(struct sNode*)come_increment_ref_count(create_funcall("strlen",params,((void*)0),0,((void*)0),info,(_Bool)0), "53obj4.nc", 1415, 1472);
        (__dec_obj134 ? __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1415, 1471) :0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 1469, 1473));
        ((svar) ? svar = come_decrement_ref_count(svar, ((struct sNode*)svar)->finalize, ((struct sNode*)svar)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1469, 1474):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1469, 1475);
    }
    else if(string_operator_equals(type2->mClass->mName,"vector")) {
        # 1419 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj135=head,
        head=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1419, 1476),(char*)come_increment_ref_count(xsprintf("items"), "53obj4.nc", 1419, 1477),info), "53obj4.nc", 1419, 1479);
        (__dec_obj135 ? __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1419, 1478) :0);
        # 1421 "53obj4.nc"
        obj=(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1421, 1480);
        # 1423 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        params_30=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "53obj4.nc", 1423, 1481, "struct list$1tuple2$2char$phsNode$ph$ph*"), "53obj4.nc", 1423, 1482)), "53obj4.nc", 1423, 1483);
        # 1425 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_30,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1425, 1484, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1425, 1485),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1425, 1486),(struct sNode*)come_increment_ref_count(obj, "53obj4.nc", 1425, 1487)), "53obj4.nc", 1425, 1488));
        # 1427 "53obj4.nc"
        __right_value0 = (void*)0;
        method_node=(struct sNode*)come_increment_ref_count(create_method_call("alloc_size",(struct sNode*)come_increment_ref_count(obj, "53obj4.nc", 1427, 1489),params_30,((void*)0),0,((void*)0),info,(_Bool)0), "53obj4.nc", 1427, 1490);
        # 1429 "53obj4.nc"
        __dec_obj136=len,
        len=(struct sNode*)come_increment_ref_count(method_node, "53obj4.nc", 1429, 1492);
        (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1429, 1491) :0);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1469, 1493):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_30, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1469, 1494);
        ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1469, 1495):(void*)0);
    }
    else if(string_operator_equals(type2->mClass->mName,"map")||string_operator_equals(type2->mClass->mName,"list")) {
        # 1432 "53obj4.nc"
        err_msg(info,"can't get serialize memory of this type(%s).require to use to_vector method.",type2->mClass->mName);
        # 1433 "53obj4.nc"
        exit(1);
    }
    else if(type2->mHeap&&type2->mPointerNum==1&&type2->mNew) {
        # 1436 "53obj4.nc"
        __dec_obj137=head,
        head=(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1436, 1497);
        (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1436, 1496) :0);
        # 1437 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1437, 1500, "struct sNode");
        _inf_obj_value3=(struct sHeapSizeOfNode*)come_increment_ref_count(((struct sHeapSizeOfNode*)(__right_value1=sHeapSizeOfNode_initialize((struct sHeapSizeOfNode* )come_increment_ref_count((struct sHeapSizeOfNode *)come_calloc(1, sizeof(struct sHeapSizeOfNode )*(1), "53obj4.nc", 1437, 1498, "struct sHeapSizeOfNode* "), "53obj4.nc", 1437, 1499),type2,info))), "53obj4.nc", 1437, 1501);
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sHeapSizeOfNode_finalize;
        _inf_value3->clone=(void*)sHeapSizeOfNode_clone;
        _inf_value3->compile=(void*)sHeapSizeOfNode_compile;
        _inf_value3->sline=(void*)sNodeBase_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sNodeBase_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sHeapSizeOfNode_kind;
        _inf_value3->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __dec_obj140=len,
        len=(struct sNode*)come_increment_ref_count(_inf_value3, "53obj4.nc", 1437, 1511);
        (__dec_obj140 ? __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1437, 1510) :0);
        come_call_finalizer(sHeapSizeOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1437, 1512);
    }
    else if(type2->mHeap&&type2->mPointerNum==1) {
        # 1440 "53obj4.nc"
        static int n_31=0;
        # 1441 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        var_name_32=(char*)come_increment_ref_count(xsprintf("__tmp_heap\%s",((char* )(__right_value0=int_to_string(++n_31)))), "53obj4.nc", 1441, 1513);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 1441, 1514));
        # 1443 "53obj4.nc"
        __right_value0 = (void*)0;
        svar_33=(struct sNode*)come_increment_ref_count(store_var((char* )come_increment_ref_count(var_name_32, "53obj4.nc", 1443, 1515),((void*)0),((void*)0),type2,(_Bool)1,node,info,(_Bool)0), "53obj4.nc", 1443, 1516);
        # 1445 "53obj4.nc"
        __dec_obj141=head,
        head=(struct sNode*)come_increment_ref_count(svar_33, "53obj4.nc", 1445, 1518);
        (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1445, 1517) :0);
        # 1446 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1446, 1522, "struct sNode");
        _inf_obj_value4=(struct sDynamicSizeOfExpNode*)come_increment_ref_count(((struct sDynamicSizeOfExpNode*)(__right_value2=sDynamicSizeOfExpNode_initialize((struct sDynamicSizeOfExpNode* )come_increment_ref_count((struct sDynamicSizeOfExpNode *)come_calloc(1, sizeof(struct sDynamicSizeOfExpNode )*(1), "53obj4.nc", 1446, 1519, "struct sDynamicSizeOfExpNode* "), "53obj4.nc", 1446, 1520),(struct sNode*)come_increment_ref_count(create_load_var(var_name_32,info), "53obj4.nc", 1446, 1521),info))), "53obj4.nc", 1446, 1523);
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sDynamicSizeOfExpNode_finalize;
        _inf_value4->clone=(void*)sDynamicSizeOfExpNode_clone;
        _inf_value4->compile=(void*)sDynamicSizeOfExpNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sDynamicSizeOfExpNode_kind;
        _inf_value4->left_value=(void*)sNodeBase_left_value;
        __dec_obj144=len,
        len=(struct sNode*)come_increment_ref_count(_inf_value4, "53obj4.nc", 1446, 1533);
        (__dec_obj144 ? __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1446, 1532) :0);
        come_call_finalizer(sDynamicSizeOfExpNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1446, 1534);
        (var_name_32 = come_decrement_ref_count(var_name_32, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 1469, 1535));
        ((svar_33) ? svar_33 = come_decrement_ref_count(svar_33, ((struct sNode*)svar_33)->finalize, ((struct sNode*)svar_33)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1469, 1536):(void*)0);
    }
    else if(type2->mPointerNum==1&&((come_value->var&&come_value->var->mType->mHeap)||(come_value->mLoadField&&come_value->var&&is_buffer_like_type(come_value->var->mType)))) {
        # 1452 "53obj4.nc"
        __dec_obj145=head,
        head=(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1452, 1538);
        (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1452, 1537) :0);
        # 1453 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1453, 1542, "struct sNode");
        _inf_obj_value5=(struct sDynamicSizeOfExpNode*)come_increment_ref_count(((struct sDynamicSizeOfExpNode*)(__right_value1=sDynamicSizeOfExpNode_initialize((struct sDynamicSizeOfExpNode* )come_increment_ref_count((struct sDynamicSizeOfExpNode *)come_calloc(1, sizeof(struct sDynamicSizeOfExpNode )*(1), "53obj4.nc", 1453, 1539, "struct sDynamicSizeOfExpNode* "), "53obj4.nc", 1453, 1540),(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1453, 1541),info))), "53obj4.nc", 1453, 1543);
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sDynamicSizeOfExpNode_finalize;
        _inf_value5->clone=(void*)sDynamicSizeOfExpNode_clone;
        _inf_value5->compile=(void*)sDynamicSizeOfExpNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sDynamicSizeOfExpNode_kind;
        _inf_value5->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __dec_obj146=len,
        len=(struct sNode*)come_increment_ref_count(_inf_value5, "53obj4.nc", 1453, 1545);
        (__dec_obj146 ? __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1453, 1544) :0);
        come_call_finalizer(sDynamicSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1453, 1546);
    }
    else if(type2->mPointerNum==1) {
        # 1456 "53obj4.nc"
        __dec_obj147=head,
        head=(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1456, 1548);
        (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1456, 1547) :0);
        # 1463 "53obj4.nc"
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X0=(string_operator_equals(((char* )(__right_value1=node->kind(node->_protocol_obj))),"sRefferenceNode")));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 1457, 1549));
_conditional_value_X0;})) {
            # 1458 "53obj4.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1458, 1553, "struct sNode");
            _inf_obj_value6=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value2=sSizeOfExpNode_initialize((struct sSizeOfExpNode* )come_increment_ref_count((struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), "53obj4.nc", 1458, 1550, "struct sSizeOfExpNode* "), "53obj4.nc", 1458, 1551),(struct sNode*)come_increment_ref_count(sNode_clone(node->left_value(node->_protocol_obj)), "53obj4.nc", 1458, 1552),info))), "53obj4.nc", 1458, 1554);
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value6->clone=(void*)sSizeOfExpNode_clone;
            _inf_value6->compile=(void*)sSizeOfExpNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sSizeOfExpNode_kind;
            _inf_value6->left_value=(void*)sNodeBase_left_value;
            __right_value3 = (void*)0;
            __dec_obj150=len,
            len=(struct sNode*)come_increment_ref_count(_inf_value6, "53obj4.nc", 1458, 1564);
            (__dec_obj150 ? __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1458, 1563) :0);
            come_call_finalizer(sSizeOfExpNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1458, 1565);
        }
        else {
            # 1461 "53obj4.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1461, 1569, "struct sNode");
            _inf_obj_value7=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value1=sSizeOfExpNode_initialize((struct sSizeOfExpNode* )come_increment_ref_count((struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), "53obj4.nc", 1461, 1566, "struct sSizeOfExpNode* "), "53obj4.nc", 1461, 1567),(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1461, 1568),info))), "53obj4.nc", 1461, 1570);
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value7->clone=(void*)sSizeOfExpNode_clone;
            _inf_value7->compile=(void*)sSizeOfExpNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sSizeOfExpNode_kind;
            _inf_value7->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj151=len,
            len=(struct sNode*)come_increment_ref_count(_inf_value7, "53obj4.nc", 1461, 1572);
            (__dec_obj151 ? __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1461, 1571) :0);
            come_call_finalizer(sSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1461, 1573);
        }
    }
    else {
        # 1465 "53obj4.nc"
        __dec_obj152=head,
        head=(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1465, 1575);
        (__dec_obj152 ? __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1465, 1574) :0);
        # 1466 "53obj4.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1466, 1579, "struct sNode");
        _inf_obj_value8=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value1=sSizeOfExpNode_initialize((struct sSizeOfExpNode* )come_increment_ref_count((struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), "53obj4.nc", 1466, 1576, "struct sSizeOfExpNode* "), "53obj4.nc", 1466, 1577),(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1466, 1578),info))), "53obj4.nc", 1466, 1580);
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sSizeOfExpNode_finalize;
        _inf_value8->clone=(void*)sSizeOfExpNode_clone;
        _inf_value8->compile=(void*)sSizeOfExpNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sSizeOfExpNode_kind;
        _inf_value8->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __dec_obj153=len,
        len=(struct sNode*)come_increment_ref_count(_inf_value8, "53obj4.nc", 1466, 1582);
        (__dec_obj153 ? __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1466, 1581) :0);
        come_call_finalizer(sSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1466, 1583);
    }
    # 1469 "53obj4.nc"
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(((struct tuple2$2sNode$phsNode$ph*)(__right_value1=tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "53obj4.nc", 1469, 1584, "struct tuple2$2sNode$phsNode$ph"), "53obj4.nc", 9, 1596),(struct sNode*)come_increment_ref_count(head, "53obj4.nc", 9, 1597),(struct sNode*)come_increment_ref_count(len, "53obj4.nc", 9, 1598)))), "53obj4.nc", 1469, 1599);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1469, 1600):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1469, 1601);
    ((head) ? head = come_decrement_ref_count(head, ((struct sNode*)head)->finalize, ((struct sNode*)head)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1469, 1602):(void*)0);
    ((len) ? len = come_decrement_ref_count(len, ((struct sNode*)len)->finalize, ((struct sNode*)len)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1469, 1603):(void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1469, 1604);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1469, 1605);
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 9, 1606);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 1469, 1607);
    return __result_obj__0;
}

static struct sHeapSizeOfNode* sHeapSizeOfNode_clone(struct sHeapSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_clone"; neo_current_frame = &fr;
    struct sHeapSizeOfNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sHeapSizeOfNode*  result  ;
    char*  __dec_obj138  ;
    struct sType*  __dec_obj139  ;
    memset(&result, 0, sizeof(result));
    # 3 "sHeapSizeOfNode_clone"
    # 5 "sHeapSizeOfNode_clone"
    if(self==(void*)0) {
        # 4 "sHeapSizeOfNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sHeapSizeOfNode_clone"
    result=(struct sHeapSizeOfNode* )come_increment_ref_count((struct sHeapSizeOfNode *)come_calloc(1, sizeof(struct sHeapSizeOfNode )*(1), "sHeapSizeOfNode_clone", 5, 1502, "struct sHeapSizeOfNode* "), "sHeapSizeOfNode_clone", 5, 1503);
    # 7 "sHeapSizeOfNode_clone"
    if(self!=((void*)0)) {
        # 6 "sHeapSizeOfNode_clone"
        result->sline=self->sline;
    }
    # 8 "sHeapSizeOfNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sHeapSizeOfNode_clone"
        __right_value0 = (void*)0;
        __dec_obj138=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sHeapSizeOfNode_clone", 7, 1504, "char* "), "sHeapSizeOfNode_clone", 7, 1506);
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0, "sHeapSizeOfNode_clone", 7, 1505);
    }
    # 9 "sHeapSizeOfNode_clone"
    if(self!=((void*)0)) {
        # 8 "sHeapSizeOfNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sHeapSizeOfNode_clone"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 9 "sHeapSizeOfNode_clone"
        __right_value0 = (void*)0;
        __dec_obj139=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sHeapSizeOfNode_clone", 9, 1508);
        come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sHeapSizeOfNode_clone", 9, 1507);
    }
    # 10 "sHeapSizeOfNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sHeapSizeOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sHeapSizeOfNode_clone}", 10, 1509);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDynamicSizeOfExpNode* sDynamicSizeOfExpNode_clone(struct sDynamicSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_clone"; neo_current_frame = &fr;
    struct sDynamicSizeOfExpNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDynamicSizeOfExpNode*  result  ;
    char*  __dec_obj142  ;
    struct sNode* __dec_obj143;
    memset(&result, 0, sizeof(result));
    # 3 "sDynamicSizeOfExpNode_clone"
    # 5 "sDynamicSizeOfExpNode_clone"
    if(self==(void*)0) {
        # 4 "sDynamicSizeOfExpNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sDynamicSizeOfExpNode_clone"
    result=(struct sDynamicSizeOfExpNode* )come_increment_ref_count((struct sDynamicSizeOfExpNode *)come_calloc(1, sizeof(struct sDynamicSizeOfExpNode )*(1), "sDynamicSizeOfExpNode_clone", 5, 1524, "struct sDynamicSizeOfExpNode* "), "sDynamicSizeOfExpNode_clone", 5, 1525);
    # 7 "sDynamicSizeOfExpNode_clone"
    if(self!=((void*)0)) {
        # 6 "sDynamicSizeOfExpNode_clone"
        result->sline=self->sline;
    }
    # 8 "sDynamicSizeOfExpNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sDynamicSizeOfExpNode_clone"
        __right_value0 = (void*)0;
        __dec_obj142=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDynamicSizeOfExpNode_clone", 7, 1526, "char* "), "sDynamicSizeOfExpNode_clone", 7, 1528);
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0, "sDynamicSizeOfExpNode_clone", 7, 1527);
    }
    # 9 "sDynamicSizeOfExpNode_clone"
    if(self!=((void*)0)) {
        # 8 "sDynamicSizeOfExpNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sDynamicSizeOfExpNode_clone"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 9 "sDynamicSizeOfExpNode_clone"
        __right_value0 = (void*)0;
        __dec_obj143=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sDynamicSizeOfExpNode_clone", 9, 1530);
        (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0, (void*)0, "sDynamicSizeOfExpNode_clone", 9, 1529) :0);
    }
    # 10 "sDynamicSizeOfExpNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDynamicSizeOfExpNode_clone}", 10, 1531);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_clone"; neo_current_frame = &fr;
    struct sSizeOfExpNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSizeOfExpNode*  result  ;
    char*  __dec_obj148  ;
    struct sNode* __dec_obj149;
    memset(&result, 0, sizeof(result));
    # 3 "sSizeOfExpNode_clone"
    # 5 "sSizeOfExpNode_clone"
    if(self==(void*)0) {
        # 4 "sSizeOfExpNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sSizeOfExpNode_clone"
    result=(struct sSizeOfExpNode* )come_increment_ref_count((struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), "sSizeOfExpNode_clone", 5, 1555, "struct sSizeOfExpNode* "), "sSizeOfExpNode_clone", 5, 1556);
    # 7 "sSizeOfExpNode_clone"
    if(self!=((void*)0)) {
        # 6 "sSizeOfExpNode_clone"
        result->sline=self->sline;
    }
    # 8 "sSizeOfExpNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sSizeOfExpNode_clone"
        __right_value0 = (void*)0;
        __dec_obj148=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSizeOfExpNode_clone", 7, 1557, "char* "), "sSizeOfExpNode_clone", 7, 1559);
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0, "sSizeOfExpNode_clone", 7, 1558);
    }
    # 9 "sSizeOfExpNode_clone"
    if(self!=((void*)0)) {
        # 8 "sSizeOfExpNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sSizeOfExpNode_clone"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 9 "sSizeOfExpNode_clone"
        __right_value0 = (void*)0;
        __dec_obj149=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sSizeOfExpNode_clone", 9, 1561);
        (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0, (void*)0, "sSizeOfExpNode_clone", 9, 1560) :0);
    }
    # 10 "sSizeOfExpNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sSizeOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sSizeOfExpNode_clone}", 10, 1562);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_initialize(struct tuple2$2sNode$phsNode$ph* self, struct sNode* v1, struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sNode$phsNode$ph_initialize"; neo_current_frame = &fr;
    struct sNode* __dec_obj154;
    struct sNode* __dec_obj155;
    struct tuple2$2sNode$phsNode$ph* __result_obj__0;
    # 4455 "./neo-c.h"
    __dec_obj154=self->v1,
    self->v1=(struct sNode*)come_increment_ref_count(v1, "./neo-c.h", 4455, 1586);
    (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 4455, 1585) :0);
    # 4456 "./neo-c.h"
    __dec_obj155=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "./neo-c.h", 4456, 1588);
    (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 4456, 1587) :0);
    # 4458 "./neo-c.h"
        __result_obj__0 = (struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(self, "./neo-c.h", 4458, 1589);
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4458, 1592);
    ((v1) ? v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 4458, 1593):(void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 4458, 1594):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4458, 1595);
    return __result_obj__0;
}

static void tuple2$2sNode$phsNode$ph$p_finalize(struct tuple2$2sNode$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sNode$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple2$2sNode$phsNode$ph$p_finalize"
    # 3 "tuple2$2sNode$phsNode$ph$p_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple2$2sNode$phsNode$ph$p_finalize"
        ((self->v1) ? self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0,(void*)0, "tuple2$2sNode$phsNode$ph$p_finalize", 2, 1590):(void*)0);
    }
    # 4 "tuple2$2sNode$phsNode$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple2$2sNode$phsNode$ph$p_finalize"
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2sNode$phsNode$ph$p_finalize", 3, 1591):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sSpanNode* sSpanNode_initialize(struct sSpanNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj156;
    struct sSpanNode* __result_obj__0;
    # 1476 "53obj4.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSpanNode*)come_increment_ref_count(self, "53obj4.nc", 1476, 1608),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1476, 1609);
    # 1478 "53obj4.nc"
    __dec_obj156=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1478, 1611);
    (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0, (void*)0, "53obj4.nc", 1478, 1610) :0);
    # 1481 "53obj4.nc"
        __result_obj__0 = (struct sSpanNode*)come_increment_ref_count(self, "53obj4.nc", 1481, 1612);
    come_call_finalizer(sSpanNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 1481, 1615);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1481, 1616):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSpanNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "53obj4.nc}", 1481, 1617);
    return __result_obj__0;
}

char*  sSpanNode_kind(struct sSpanNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 1483 "53obj4.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSpanNode","53obj4.nc",1483))), "53obj4.nc", 1483, 1618);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "53obj4.nc", 1483, 1619));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "53obj4.nc", 1483, 1620));
    return __result_obj__0;
}

_Bool sSpanNode_compile(struct sSpanNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  origin  ;
    _Bool global_;
    _Bool heap_;
    _Bool local_;
    struct sType*  type_  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  generics_type  ;
    struct sType*  type  ;
    struct sType*  type2  ;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct tuple2$2sNode$phsNode$ph* multiple_assign_var3
;    struct sNode* head=0;
    struct sNode* len=0;
    struct sNode* node2;
    struct sNode* stacktop;
    void* __right_value3 = (void*)0;
    struct sNode* method_node;
    _Bool Value_34;
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&origin, 0, sizeof(origin));
    memset(&global_, 0, sizeof(global_));
    memset(&heap_, 0, sizeof(heap_));
    memset(&local_, 0, sizeof(local_));
    memset(&type_, 0, sizeof(type_));
    memset(&generics_type, 0, sizeof(generics_type));
    memset(&type, 0, sizeof(type));
    memset(&type2, 0, sizeof(type2));
    memset(&obj, 0, sizeof(obj));
    memset(&params, 0, sizeof(params));
    memset(&node2, 0, sizeof(node2));
    memset(&stacktop, 0, sizeof(stacktop));
    memset(&method_node, 0, sizeof(method_node));
    memset(&Value_34, 0, sizeof(Value_34));
    # 1488 "53obj4.nc"
    node=(struct sNode*)come_increment_ref_count(self->node, "53obj4.nc", 1488, 1621);
    # 1494 "53obj4.nc"
    Value=node_compile(node,info);
    if(!Value) {
        # 1491 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1491, 1622):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1494 "53obj4.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "53obj4.nc", 1494, 1623);
    # 1496 "53obj4.nc"
    origin=(struct sType* )come_increment_ref_count(come_value->type->mTypedefOriginalType, "53obj4.nc", 1496, 1624);
    # 1504 "53obj4.nc"
    if(come_value->type->mPointerNum!=1&&come_value->type->mArrayPointerNum!=1&&origin->mPointerNum!=1) {
        # 1499 "53obj4.nc"
        err_msg(info,"require pointer for span");
        # 1500 "53obj4.nc"
        show_type(come_value->type,info);
        # 1501 "53obj4.nc"
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1501, 1625):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1501, 1626);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1501, 1627);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1504 "53obj4.nc"
    # 1505 "53obj4.nc"
    # 1506 "53obj4.nc"
    # 1523 "53obj4.nc"
    if(come_value->var) {
        # 1514 "53obj4.nc"
        if(come_value->type->mHeap) {
            # 1510 "53obj4.nc"
            err_msg(info,"require borrow and do not owned for span");
            # 1511 "53obj4.nc"
            show_type(come_value->type,info);
            # 1512 "53obj4.nc"
                        __result_obj__0 = (_Bool)1;
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1512, 1628):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1512, 1629);
            come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1512, 1630);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 1514 "53obj4.nc"
        global_=come_value->var->mGlobal;
        # 1515 "53obj4.nc"
        heap_=come_value->var->mType->mHeap;
        # 1516 "53obj4.nc"
        local_=!global_&&!heap_;
    }
    else {
        # 1519 "53obj4.nc"
        err_msg(info,"require variable name for span");
        # 1520 "53obj4.nc"
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1520, 1631):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1520, 1632);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1520, 1633);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1523 "53obj4.nc"
    __right_value0 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "53obj4.nc", 1523, 1634);
    # 1533 "53obj4.nc"
    if(type_->mPointerNum==1&&list$1sNode$ph_length(type_->mArrayNum)>0) {
        # 1527 "53obj4.nc"
        type_->mPointerNum=1;
        # 1528 "53obj4.nc"
        list$1sNode$ph_reset(type_->mArrayNum);
        # 1529 "53obj4.nc"
        type_->mArrayPointerNum=0;
        # 1530 "53obj4.nc"
        type_->mArrayPointerType=(_Bool)0;
    }
    # 1533 "53obj4.nc"
    __right_value0 = (void*)0;
    generics_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 1533, 1636, "struct sType* "), "53obj4.nc", 1533, 1637),(char*)come_increment_ref_count(xsprintf("span"), "53obj4.nc", 1533, 1638),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 1533, 1639);
    # 1534 "53obj4.nc"
    list$1sType$ph_add(generics_type->mGenericsTypes,(struct sType* )come_increment_ref_count(type_, "53obj4.nc", 1534, 1640));
    # 1540 "53obj4.nc"
    if(type_->mArrayPointerNum==1) {
        # 1536 "53obj4.nc"
        type_->mArrayPointerNum=0;
        # 1537 "53obj4.nc"
        type_->mPointerNum=1;
    }
    # 1540 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 1540, 1641, "struct sType* "), "53obj4.nc", 1540, 1642),(char*)come_increment_ref_count(xsprintf("span"), "53obj4.nc", 1540, 1643),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 1540, 1644);
    # 1541 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    list$1sType$ph_add(type->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "53obj4.nc", 1541, 1645, "struct sType* "), "53obj4.nc", 1541, 1646),(char*)come_increment_ref_count(xsprintf("__generics_type0"), "53obj4.nc", 1541, 1647),(_Bool)0,info,(_Bool)0,0), "53obj4.nc", 1541, 1648));
    # 1543 "53obj4.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,generics_type,info), "53obj4.nc", 1543, 1649);
    # 1545 "53obj4.nc"
    __right_value0 = (void*)0;
    obj=(struct sNode*)come_increment_ref_count(create_new_object((struct sType* )come_increment_ref_count(type2, "53obj4.nc", 1545, 1650),info), "53obj4.nc", 1545, 1651);
    # 1547 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "53obj4.nc", 1547, 1652, "struct list$1tuple2$2char$phsNode$ph$ph*"), "53obj4.nc", 1547, 1653)), "53obj4.nc", 1547, 1654);
    # 1549 "53obj4.nc"
    __right_value0 = (void*)0;
    multiple_assign_var3=((struct tuple2$2sNode$phsNode$ph*)(__right_value0=get_head_and_len((struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1549, 1655),(struct CVALUE* )come_increment_ref_count(come_value, "53obj4.nc", 1549, 1656),info)));
    head=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v1, "53obj4.nc", 1549, 1657);
    len=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2, "53obj4.nc", 1549, 1658);
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1549, 1659);
    # 1551 "53obj4.nc"
    __right_value0 = (void*)0;
    node2=(struct sNode*)come_increment_ref_count(create_load_var("neo_current_frame",info), "53obj4.nc", 1551, 1660);
    # 1552 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    stacktop=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node2, "53obj4.nc", 1552, 1661),(char*)come_increment_ref_count(xsprintf("stacktop"), "53obj4.nc", 1552, 1662),info), "53obj4.nc", 1552, 1663);
    # 1554 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1554, 1664, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1554, 1665),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1554, 1666),(struct sNode*)come_increment_ref_count(obj, "53obj4.nc", 1554, 1667)), "53obj4.nc", 1554, 1668));
    # 1555 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1555, 1669, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1555, 1670),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1555, 1671),(struct sNode*)come_increment_ref_count(head, "53obj4.nc", 1555, 1672)), "53obj4.nc", 1555, 1673));
    # 1556 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1556, 1674, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1556, 1675),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1556, 1676),(struct sNode*)come_increment_ref_count(len, "53obj4.nc", 1556, 1677)), "53obj4.nc", 1556, 1678));
    # 1557 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1557, 1679, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1557, 1680),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1557, 1681),(struct sNode*)come_increment_ref_count(((local_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "53obj4.nc", 1557, 1682)), "53obj4.nc", 1557, 1683));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1557, 1684):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1557, 1685):(void*)0);
    # 1558 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1558, 1686, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1558, 1687),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1558, 1688),(struct sNode*)come_increment_ref_count(((heap_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "53obj4.nc", 1558, 1689)), "53obj4.nc", 1558, 1690));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1558, 1691):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1558, 1692):(void*)0);
    # 1559 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1559, 1693, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1559, 1694),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1559, 1695),(struct sNode*)come_increment_ref_count(((global_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "53obj4.nc", 1559, 1696)), "53obj4.nc", 1559, 1697));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1559, 1698):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1559, 1699):(void*)0);
    # 1560 "53obj4.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "53obj4.nc", 1560, 1700, "struct tuple2$2char$phsNode$ph"), "53obj4.nc", 1560, 1701),(char* )come_increment_ref_count((char* )((void*)0), "53obj4.nc", 1560, 1702),(struct sNode*)come_increment_ref_count(stacktop, "53obj4.nc", 1560, 1703)), "53obj4.nc", 1560, 1704));
    # 1562 "53obj4.nc"
    __right_value0 = (void*)0;
    method_node=(struct sNode*)come_increment_ref_count(create_method_call("initialize",(struct sNode*)come_increment_ref_count(obj, "53obj4.nc", 1562, 1705),params,((void*)0),0,((void*)0),info,(_Bool)0), "53obj4.nc", 1562, 1706);
    # 1568 "53obj4.nc"
    Value_34=node_compile(method_node,info);
    if(!Value_34) {
        # 1565 "53obj4.nc"
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1565, 1707):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1565, 1708);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1565, 1709);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1565, 1710);
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1565, 1711);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1565, 1712);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1565, 1713);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1565, 1714):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1565, 1715);
        ((head) ? head = come_decrement_ref_count(head, ((struct sNode*)head)->finalize, ((struct sNode*)head)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1565, 1716):(void*)0);
        ((len) ? len = come_decrement_ref_count(len, ((struct sNode*)len)->finalize, ((struct sNode*)len)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1565, 1717):(void*)0);
        ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1565, 1718):(void*)0);
        ((stacktop) ? stacktop = come_decrement_ref_count(stacktop, ((struct sNode*)stacktop)->finalize, ((struct sNode*)stacktop)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1565, 1719):(void*)0);
        ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1565, 1720):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1568 "53obj4.nc"
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1568, 1721):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1568, 1722);
    come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1568, 1723);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1568, 1724);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1568, 1725);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1568, 1726);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1568, 1727);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1568, 1728):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1568, 1729);
    ((head) ? head = come_decrement_ref_count(head, ((struct sNode*)head)->finalize, ((struct sNode*)head)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1568, 1730):(void*)0);
    ((len) ? len = come_decrement_ref_count(len, ((struct sNode*)len)->finalize, ((struct sNode*)len)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1568, 1731):(void*)0);
    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1568, 1732):(void*)0);
    ((stacktop) ? stacktop = come_decrement_ref_count(stacktop, ((struct sNode*)stacktop)->finalize, ((struct sNode*)stacktop)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1568, 1733):(void*)0);
    ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1568, 1734):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSpanNode_finalize(struct sSpanNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_finalize"; neo_current_frame = &fr;
    # 1 "sSpanNode_finalize"
    # 3 "sSpanNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sSpanNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sSpanNode_finalize", 2, 1613));
    }
    # 4 "sSpanNode_finalize"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 3 "sSpanNode_finalize"
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sSpanNode_finalize", 3, 1614):(void*)0);
    }
        neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1864, 1635);
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

struct sNode* create_delete_node(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_delete_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value9;
    struct sDeleteNode* _inf_obj_value9;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1574 "53obj4.nc"
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1574, 1738, "struct sNode");
    _inf_obj_value9=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(__right_value1=sDeleteNode_initialize((struct sDeleteNode* )come_increment_ref_count((struct sDeleteNode *)come_calloc(1, sizeof(struct sDeleteNode )*(1), "53obj4.nc", 1574, 1735, "struct sDeleteNode* "), "53obj4.nc", 1574, 1736),(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1574, 1737),info))), "53obj4.nc", 1574, 1739);
    _inf_value9->_protocol_obj=_inf_obj_value9;
    _inf_value9->finalize=(void*)sDeleteNode_finalize;
    _inf_value9->clone=(void*)sDeleteNode_clone;
    _inf_value9->compile=(void*)sDeleteNode_compile;
    _inf_value9->sline=(void*)sNodeBase_sline;
    _inf_value9->sline_real=(void*)sNodeBase_sline_real;
    _inf_value9->sname=(void*)sNodeBase_sname;
    _inf_value9->terminated=(void*)sNodeBase_terminated;
    _inf_value9->kind=(void*)sDeleteNode_kind;
    _inf_value9->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)), "53obj4.nc", 1574, 1748);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1574, 1749):(void*)0);
    come_call_finalizer(sDeleteNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1574, 1750);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1574, 1751):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1574, 1752):(void*)0);
    return __result_obj__0;
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_clone"; neo_current_frame = &fr;
    struct sDeleteNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDeleteNode*  result  ;
    char*  __dec_obj157  ;
    struct sNode* __dec_obj158;
    memset(&result, 0, sizeof(result));
    # 3 "sDeleteNode_clone"
    # 5 "sDeleteNode_clone"
    if(self==(void*)0) {
        # 4 "sDeleteNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sDeleteNode_clone"
    result=(struct sDeleteNode* )come_increment_ref_count((struct sDeleteNode *)come_calloc(1, sizeof(struct sDeleteNode )*(1), "sDeleteNode_clone", 5, 1740, "struct sDeleteNode* "), "sDeleteNode_clone", 5, 1741);
    # 7 "sDeleteNode_clone"
    if(self!=((void*)0)) {
        # 6 "sDeleteNode_clone"
        result->sline=self->sline;
    }
    # 8 "sDeleteNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sDeleteNode_clone"
        __right_value0 = (void*)0;
        __dec_obj157=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDeleteNode_clone", 7, 1742, "char* "), "sDeleteNode_clone", 7, 1744);
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0, (void*)0, "sDeleteNode_clone", 7, 1743);
    }
    # 9 "sDeleteNode_clone"
    if(self!=((void*)0)) {
        # 8 "sDeleteNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sDeleteNode_clone"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 9 "sDeleteNode_clone"
        __right_value0 = (void*)0;
        __dec_obj158=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sDeleteNode_clone", 9, 1746);
        (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0, (void*)0, "sDeleteNode_clone", 9, 1745) :0);
    }
    # 10 "sDeleteNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sDeleteNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDeleteNode_clone}", 10, 1747);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_borrow_node(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_borrow_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value10;
    struct sBorrowNode* _inf_obj_value10;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1579 "53obj4.nc"
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1579, 1756, "struct sNode");
    _inf_obj_value10=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(__right_value1=sBorrowNode_initialize((struct sBorrowNode* )come_increment_ref_count((struct sBorrowNode *)come_calloc(1, sizeof(struct sBorrowNode )*(1), "53obj4.nc", 1579, 1753, "struct sBorrowNode* "), "53obj4.nc", 1579, 1754),(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1579, 1755),info))), "53obj4.nc", 1579, 1757);
    _inf_value10->_protocol_obj=_inf_obj_value10;
    _inf_value10->finalize=(void*)sBorrowNode_finalize;
    _inf_value10->clone=(void*)sBorrowNode_clone;
    _inf_value10->compile=(void*)sBorrowNode_compile;
    _inf_value10->sline=(void*)sNodeBase_sline;
    _inf_value10->sline_real=(void*)sNodeBase_sline_real;
    _inf_value10->sname=(void*)sNodeBase_sname;
    _inf_value10->terminated=(void*)sNodeBase_terminated;
    _inf_value10->kind=(void*)sBorrowNode_kind;
    _inf_value10->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)), "53obj4.nc", 1579, 1766);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1579, 1767):(void*)0);
    come_call_finalizer(sBorrowNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1579, 1768);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1579, 1769):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1579, 1770):(void*)0);
    return __result_obj__0;
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_clone"; neo_current_frame = &fr;
    struct sBorrowNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sBorrowNode*  result  ;
    char*  __dec_obj159  ;
    struct sNode* __dec_obj160;
    memset(&result, 0, sizeof(result));
    # 3 "sBorrowNode_clone"
    # 5 "sBorrowNode_clone"
    if(self==(void*)0) {
        # 4 "sBorrowNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sBorrowNode_clone"
    result=(struct sBorrowNode* )come_increment_ref_count((struct sBorrowNode *)come_calloc(1, sizeof(struct sBorrowNode )*(1), "sBorrowNode_clone", 5, 1758, "struct sBorrowNode* "), "sBorrowNode_clone", 5, 1759);
    # 7 "sBorrowNode_clone"
    if(self!=((void*)0)) {
        # 6 "sBorrowNode_clone"
        result->sline=self->sline;
    }
    # 8 "sBorrowNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sBorrowNode_clone"
        __right_value0 = (void*)0;
        __dec_obj159=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sBorrowNode_clone", 7, 1760, "char* "), "sBorrowNode_clone", 7, 1762);
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0, (void*)0, "sBorrowNode_clone", 7, 1761);
    }
    # 9 "sBorrowNode_clone"
    if(self!=((void*)0)) {
        # 8 "sBorrowNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sBorrowNode_clone"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 9 "sBorrowNode_clone"
        __right_value0 = (void*)0;
        __dec_obj160=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sBorrowNode_clone", 9, 1764);
        (__dec_obj160 ? __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0, (void*)0, "sBorrowNode_clone", 9, 1763) :0);
    }
    # 10 "sBorrowNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sBorrowNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBorrowNode_clone}", 10, 1765);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_clone_node(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_clone_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value11;
    struct sCloneNode* _inf_obj_value11;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1584 "53obj4.nc"
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1584, 1774, "struct sNode");
    _inf_obj_value11=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(__right_value1=sCloneNode_initialize((struct sCloneNode* )come_increment_ref_count((struct sCloneNode *)come_calloc(1, sizeof(struct sCloneNode )*(1), "53obj4.nc", 1584, 1771, "struct sCloneNode* "), "53obj4.nc", 1584, 1772),(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1584, 1773),info))), "53obj4.nc", 1584, 1775);
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sCloneNode_finalize;
    _inf_value11->clone=(void*)sCloneNode_clone;
    _inf_value11->compile=(void*)sCloneNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sline_real=(void*)sNodeBase_sline_real;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sNodeBase_terminated;
    _inf_value11->kind=(void*)sCloneNode_kind;
    _inf_value11->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)), "53obj4.nc", 1584, 1784);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1584, 1785):(void*)0);
    come_call_finalizer(sCloneNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1584, 1786);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1584, 1787):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1584, 1788):(void*)0);
    return __result_obj__0;
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_clone"; neo_current_frame = &fr;
    struct sCloneNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCloneNode*  result  ;
    char*  __dec_obj161  ;
    struct sNode* __dec_obj162;
    memset(&result, 0, sizeof(result));
    # 3 "sCloneNode_clone"
    # 5 "sCloneNode_clone"
    if(self==(void*)0) {
        # 4 "sCloneNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sCloneNode_clone"
    result=(struct sCloneNode* )come_increment_ref_count((struct sCloneNode *)come_calloc(1, sizeof(struct sCloneNode )*(1), "sCloneNode_clone", 5, 1776, "struct sCloneNode* "), "sCloneNode_clone", 5, 1777);
    # 7 "sCloneNode_clone"
    if(self!=((void*)0)) {
        # 6 "sCloneNode_clone"
        result->sline=self->sline;
    }
    # 8 "sCloneNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sCloneNode_clone"
        __right_value0 = (void*)0;
        __dec_obj161=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCloneNode_clone", 7, 1778, "char* "), "sCloneNode_clone", 7, 1780);
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0, (void*)0, "sCloneNode_clone", 7, 1779);
    }
    # 9 "sCloneNode_clone"
    if(self!=((void*)0)) {
        # 8 "sCloneNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sCloneNode_clone"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 9 "sCloneNode_clone"
        __right_value0 = (void*)0;
        __dec_obj162=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sCloneNode_clone", 9, 1782);
        (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0, (void*)0, "sCloneNode_clone", 9, 1781) :0);
    }
    # 10 "sCloneNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sCloneNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCloneNode_clone}", 10, 1783);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_dupe_node(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_dupe_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value12;
    struct sDupeNode* _inf_obj_value12;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1589 "53obj4.nc"
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1589, 1792, "struct sNode");
    _inf_obj_value12=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(__right_value1=sDupeNode_initialize((struct sDupeNode* )come_increment_ref_count((struct sDupeNode *)come_calloc(1, sizeof(struct sDupeNode )*(1), "53obj4.nc", 1589, 1789, "struct sDupeNode* "), "53obj4.nc", 1589, 1790),(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1589, 1791),info))), "53obj4.nc", 1589, 1793);
    _inf_value12->_protocol_obj=_inf_obj_value12;
    _inf_value12->finalize=(void*)sDupeNode_finalize;
    _inf_value12->clone=(void*)sDupeNode_clone;
    _inf_value12->compile=(void*)sDupeNode_compile;
    _inf_value12->sline=(void*)sNodeBase_sline;
    _inf_value12->sline_real=(void*)sNodeBase_sline_real;
    _inf_value12->sname=(void*)sNodeBase_sname;
    _inf_value12->terminated=(void*)sNodeBase_terminated;
    _inf_value12->kind=(void*)sDupeNode_kind;
    _inf_value12->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)), "53obj4.nc", 1589, 1802);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1589, 1803):(void*)0);
    come_call_finalizer(sDupeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1589, 1804);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1589, 1805):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1589, 1806):(void*)0);
    return __result_obj__0;
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_clone"; neo_current_frame = &fr;
    struct sDupeNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDupeNode*  result  ;
    char*  __dec_obj163  ;
    struct sNode* __dec_obj164;
    memset(&result, 0, sizeof(result));
    # 3 "sDupeNode_clone"
    # 5 "sDupeNode_clone"
    if(self==(void*)0) {
        # 4 "sDupeNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sDupeNode_clone"
    result=(struct sDupeNode* )come_increment_ref_count((struct sDupeNode *)come_calloc(1, sizeof(struct sDupeNode )*(1), "sDupeNode_clone", 5, 1794, "struct sDupeNode* "), "sDupeNode_clone", 5, 1795);
    # 7 "sDupeNode_clone"
    if(self!=((void*)0)) {
        # 6 "sDupeNode_clone"
        result->sline=self->sline;
    }
    # 8 "sDupeNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sDupeNode_clone"
        __right_value0 = (void*)0;
        __dec_obj163=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDupeNode_clone", 7, 1796, "char* "), "sDupeNode_clone", 7, 1798);
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0, (void*)0, "sDupeNode_clone", 7, 1797);
    }
    # 9 "sDupeNode_clone"
    if(self!=((void*)0)) {
        # 8 "sDupeNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sDupeNode_clone"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 9 "sDupeNode_clone"
        __right_value0 = (void*)0;
        __dec_obj164=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sDupeNode_clone", 9, 1800);
        (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0, (void*)0, "sDupeNode_clone", 9, 1799) :0);
    }
    # 10 "sDupeNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sDupeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDupeNode_clone}", 10, 1801);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_dummy_heap_node(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_dummy_heap_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value13;
    struct sDummyHeapNode* _inf_obj_value13;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1594 "53obj4.nc"
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1594, 1810, "struct sNode");
    _inf_obj_value13=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(__right_value1=sDummyHeapNode_initialize((struct sDummyHeapNode* )come_increment_ref_count((struct sDummyHeapNode *)come_calloc(1, sizeof(struct sDummyHeapNode )*(1), "53obj4.nc", 1594, 1807, "struct sDummyHeapNode* "), "53obj4.nc", 1594, 1808),(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1594, 1809),info))), "53obj4.nc", 1594, 1811);
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sDummyHeapNode_finalize;
    _inf_value13->clone=(void*)sDummyHeapNode_clone;
    _inf_value13->compile=(void*)sDummyHeapNode_compile;
    _inf_value13->sline=(void*)sNodeBase_sline;
    _inf_value13->sline_real=(void*)sNodeBase_sline_real;
    _inf_value13->sname=(void*)sNodeBase_sname;
    _inf_value13->terminated=(void*)sNodeBase_terminated;
    _inf_value13->kind=(void*)sDummyHeapNode_kind;
    _inf_value13->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)), "53obj4.nc", 1594, 1820);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1594, 1821):(void*)0);
    come_call_finalizer(sDummyHeapNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1594, 1822);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1594, 1823):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1594, 1824):(void*)0);
    return __result_obj__0;
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_clone"; neo_current_frame = &fr;
    struct sDummyHeapNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDummyHeapNode*  result  ;
    char*  __dec_obj165  ;
    struct sNode* __dec_obj166;
    memset(&result, 0, sizeof(result));
    # 3 "sDummyHeapNode_clone"
    # 5 "sDummyHeapNode_clone"
    if(self==(void*)0) {
        # 4 "sDummyHeapNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sDummyHeapNode_clone"
    result=(struct sDummyHeapNode* )come_increment_ref_count((struct sDummyHeapNode *)come_calloc(1, sizeof(struct sDummyHeapNode )*(1), "sDummyHeapNode_clone", 5, 1812, "struct sDummyHeapNode* "), "sDummyHeapNode_clone", 5, 1813);
    # 7 "sDummyHeapNode_clone"
    if(self!=((void*)0)) {
        # 6 "sDummyHeapNode_clone"
        result->sline=self->sline;
    }
    # 8 "sDummyHeapNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sDummyHeapNode_clone"
        __right_value0 = (void*)0;
        __dec_obj165=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDummyHeapNode_clone", 7, 1814, "char* "), "sDummyHeapNode_clone", 7, 1816);
        __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0, (void*)0, "sDummyHeapNode_clone", 7, 1815);
    }
    # 9 "sDummyHeapNode_clone"
    if(self!=((void*)0)) {
        # 8 "sDummyHeapNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sDummyHeapNode_clone"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 9 "sDummyHeapNode_clone"
        __right_value0 = (void*)0;
        __dec_obj166=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sDummyHeapNode_clone", 9, 1818);
        (__dec_obj166 ? __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0, (void*)0, "sDummyHeapNode_clone", 9, 1817) :0);
    }
    # 10 "sDummyHeapNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sDummyHeapNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDummyHeapNode_clone}", 10, 1819);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_gc_inc_node(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_gc_inc_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value14;
    struct sGCIncNode* _inf_obj_value14;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1599 "53obj4.nc"
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1599, 1828, "struct sNode");
    _inf_obj_value14=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(__right_value1=sGCIncNode_initialize((struct sGCIncNode* )come_increment_ref_count((struct sGCIncNode *)come_calloc(1, sizeof(struct sGCIncNode )*(1), "53obj4.nc", 1599, 1825, "struct sGCIncNode* "), "53obj4.nc", 1599, 1826),(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1599, 1827),info))), "53obj4.nc", 1599, 1829);
    _inf_value14->_protocol_obj=_inf_obj_value14;
    _inf_value14->finalize=(void*)sGCIncNode_finalize;
    _inf_value14->clone=(void*)sGCIncNode_clone;
    _inf_value14->compile=(void*)sGCIncNode_compile;
    _inf_value14->sline=(void*)sNodeBase_sline;
    _inf_value14->sline_real=(void*)sNodeBase_sline_real;
    _inf_value14->sname=(void*)sNodeBase_sname;
    _inf_value14->terminated=(void*)sNodeBase_terminated;
    _inf_value14->kind=(void*)sGCIncNode_kind;
    _inf_value14->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)), "53obj4.nc", 1599, 1838);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1599, 1839):(void*)0);
    come_call_finalizer(sGCIncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1599, 1840);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1599, 1841):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1599, 1842):(void*)0);
    return __result_obj__0;
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_clone"; neo_current_frame = &fr;
    struct sGCIncNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGCIncNode*  result  ;
    char*  __dec_obj167  ;
    struct sNode* __dec_obj168;
    memset(&result, 0, sizeof(result));
    # 3 "sGCIncNode_clone"
    # 5 "sGCIncNode_clone"
    if(self==(void*)0) {
        # 4 "sGCIncNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sGCIncNode_clone"
    result=(struct sGCIncNode* )come_increment_ref_count((struct sGCIncNode *)come_calloc(1, sizeof(struct sGCIncNode )*(1), "sGCIncNode_clone", 5, 1830, "struct sGCIncNode* "), "sGCIncNode_clone", 5, 1831);
    # 7 "sGCIncNode_clone"
    if(self!=((void*)0)) {
        # 6 "sGCIncNode_clone"
        result->sline=self->sline;
    }
    # 8 "sGCIncNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sGCIncNode_clone"
        __right_value0 = (void*)0;
        __dec_obj167=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGCIncNode_clone", 7, 1832, "char* "), "sGCIncNode_clone", 7, 1834);
        __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0, (void*)0, "sGCIncNode_clone", 7, 1833);
    }
    # 9 "sGCIncNode_clone"
    if(self!=((void*)0)) {
        # 8 "sGCIncNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sGCIncNode_clone"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 9 "sGCIncNode_clone"
        __right_value0 = (void*)0;
        __dec_obj168=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sGCIncNode_clone", 9, 1836);
        (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0, (void*)0, "sGCIncNode_clone", 9, 1835) :0);
    }
    # 10 "sGCIncNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sGCIncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sGCIncNode_clone}", 10, 1837);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_gc_dec_node(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_gc_dec_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value15;
    struct sGCDecNode* _inf_obj_value15;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1604 "53obj4.nc"
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1604, 1846, "struct sNode");
    _inf_obj_value15=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(__right_value1=sGCDecNode_initialize((struct sGCDecNode* )come_increment_ref_count((struct sGCDecNode *)come_calloc(1, sizeof(struct sGCDecNode )*(1), "53obj4.nc", 1604, 1843, "struct sGCDecNode* "), "53obj4.nc", 1604, 1844),(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1604, 1845),info))), "53obj4.nc", 1604, 1847);
    _inf_value15->_protocol_obj=_inf_obj_value15;
    _inf_value15->finalize=(void*)sGCDecNode_finalize;
    _inf_value15->clone=(void*)sGCDecNode_clone;
    _inf_value15->compile=(void*)sGCDecNode_compile;
    _inf_value15->sline=(void*)sNodeBase_sline;
    _inf_value15->sline_real=(void*)sNodeBase_sline_real;
    _inf_value15->sname=(void*)sNodeBase_sname;
    _inf_value15->terminated=(void*)sNodeBase_terminated;
    _inf_value15->kind=(void*)sGCDecNode_kind;
    _inf_value15->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value15)), "53obj4.nc", 1604, 1856);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1604, 1857):(void*)0);
    come_call_finalizer(sGCDecNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1604, 1858);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1604, 1859):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1604, 1860):(void*)0);
    return __result_obj__0;
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_clone"; neo_current_frame = &fr;
    struct sGCDecNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGCDecNode*  result  ;
    char*  __dec_obj169  ;
    struct sNode* __dec_obj170;
    memset(&result, 0, sizeof(result));
    # 3 "sGCDecNode_clone"
    # 5 "sGCDecNode_clone"
    if(self==(void*)0) {
        # 4 "sGCDecNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sGCDecNode_clone"
    result=(struct sGCDecNode* )come_increment_ref_count((struct sGCDecNode *)come_calloc(1, sizeof(struct sGCDecNode )*(1), "sGCDecNode_clone", 5, 1848, "struct sGCDecNode* "), "sGCDecNode_clone", 5, 1849);
    # 7 "sGCDecNode_clone"
    if(self!=((void*)0)) {
        # 6 "sGCDecNode_clone"
        result->sline=self->sline;
    }
    # 8 "sGCDecNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sGCDecNode_clone"
        __right_value0 = (void*)0;
        __dec_obj169=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGCDecNode_clone", 7, 1850, "char* "), "sGCDecNode_clone", 7, 1852);
        __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0, (void*)0, "sGCDecNode_clone", 7, 1851);
    }
    # 9 "sGCDecNode_clone"
    if(self!=((void*)0)) {
        # 8 "sGCDecNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sGCDecNode_clone"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 9 "sGCDecNode_clone"
        __right_value0 = (void*)0;
        __dec_obj170=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sGCDecNode_clone", 9, 1854);
        (__dec_obj170 ? __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0, (void*)0, "sGCDecNode_clone", 9, 1853) :0);
    }
    # 10 "sGCDecNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sGCDecNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sGCDecNode_clone}", 10, 1855);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_gc_dec_nofree_node(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_gc_dec_nofree_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value16;
    struct sGCDecNoFreeNode* _inf_obj_value16;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1609 "53obj4.nc"
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1609, 1864, "struct sNode");
    _inf_obj_value16=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value1=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode* )come_increment_ref_count((struct sGCDecNoFreeNode *)come_calloc(1, sizeof(struct sGCDecNoFreeNode )*(1), "53obj4.nc", 1609, 1861, "struct sGCDecNoFreeNode* "), "53obj4.nc", 1609, 1862),(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1609, 1863),info))), "53obj4.nc", 1609, 1865);
    _inf_value16->_protocol_obj=_inf_obj_value16;
    _inf_value16->finalize=(void*)sGCDecNoFreeNode_finalize;
    _inf_value16->clone=(void*)sGCDecNoFreeNode_clone;
    _inf_value16->compile=(void*)sGCDecNoFreeNode_compile;
    _inf_value16->sline=(void*)sNodeBase_sline;
    _inf_value16->sline_real=(void*)sNodeBase_sline_real;
    _inf_value16->sname=(void*)sNodeBase_sname;
    _inf_value16->terminated=(void*)sNodeBase_terminated;
    _inf_value16->kind=(void*)sGCDecNoFreeNode_kind;
    _inf_value16->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value16)), "53obj4.nc", 1609, 1874);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1609, 1875):(void*)0);
    come_call_finalizer(sGCDecNoFreeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1609, 1876);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1609, 1877):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1609, 1878):(void*)0);
    return __result_obj__0;
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_clone"; neo_current_frame = &fr;
    struct sGCDecNoFreeNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGCDecNoFreeNode*  result  ;
    char*  __dec_obj171  ;
    struct sNode* __dec_obj172;
    memset(&result, 0, sizeof(result));
    # 3 "sGCDecNoFreeNode_clone"
    # 5 "sGCDecNoFreeNode_clone"
    if(self==(void*)0) {
        # 4 "sGCDecNoFreeNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sGCDecNoFreeNode_clone"
    result=(struct sGCDecNoFreeNode* )come_increment_ref_count((struct sGCDecNoFreeNode *)come_calloc(1, sizeof(struct sGCDecNoFreeNode )*(1), "sGCDecNoFreeNode_clone", 5, 1866, "struct sGCDecNoFreeNode* "), "sGCDecNoFreeNode_clone", 5, 1867);
    # 7 "sGCDecNoFreeNode_clone"
    if(self!=((void*)0)) {
        # 6 "sGCDecNoFreeNode_clone"
        result->sline=self->sline;
    }
    # 8 "sGCDecNoFreeNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sGCDecNoFreeNode_clone"
        __right_value0 = (void*)0;
        __dec_obj171=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGCDecNoFreeNode_clone", 7, 1868, "char* "), "sGCDecNoFreeNode_clone", 7, 1870);
        __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0,0, (void*)0, "sGCDecNoFreeNode_clone", 7, 1869);
    }
    # 9 "sGCDecNoFreeNode_clone"
    if(self!=((void*)0)) {
        # 8 "sGCDecNoFreeNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sGCDecNoFreeNode_clone"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 9 "sGCDecNoFreeNode_clone"
        __right_value0 = (void*)0;
        __dec_obj172=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sGCDecNoFreeNode_clone", 9, 1872);
        (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0, (void*)0, "sGCDecNoFreeNode_clone", 9, 1871) :0);
    }
    # 10 "sGCDecNoFreeNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sGCDecNoFreeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sGCDecNoFreeNode_clone}", 10, 1873);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_is_heap_node(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_is_heap_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value17;
    struct sIsHeap* _inf_obj_value17;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1614 "53obj4.nc"
        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1614, 1881, "struct sNode");
    _inf_obj_value17=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(__right_value1=sIsHeap_initialize((struct sIsHeap* )come_increment_ref_count((struct sIsHeap *)come_calloc(1, sizeof(struct sIsHeap )*(1), "53obj4.nc", 1614, 1879, "struct sIsHeap* "), "53obj4.nc", 1614, 1880),type,info))), "53obj4.nc", 1614, 1882);
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sIsHeap_finalize;
    _inf_value17->clone=(void*)sIsHeap_clone;
    _inf_value17->compile=(void*)sIsHeap_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sNodeBase_terminated;
    _inf_value17->kind=(void*)sIsHeap_kind;
    _inf_value17->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value17)), "53obj4.nc", 1614, 1891);
    come_call_finalizer(sIsHeap_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1614, 1892);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1614, 1893):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1614, 1894):(void*)0);
    return __result_obj__0;
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_clone"; neo_current_frame = &fr;
    struct sIsHeap* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sIsHeap*  result  ;
    char*  __dec_obj173  ;
    struct sType*  __dec_obj174  ;
    memset(&result, 0, sizeof(result));
    # 3 "sIsHeap_clone"
    # 5 "sIsHeap_clone"
    if(self==(void*)0) {
        # 4 "sIsHeap_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sIsHeap_clone"
    result=(struct sIsHeap* )come_increment_ref_count((struct sIsHeap *)come_calloc(1, sizeof(struct sIsHeap )*(1), "sIsHeap_clone", 5, 1883, "struct sIsHeap* "), "sIsHeap_clone", 5, 1884);
    # 7 "sIsHeap_clone"
    if(self!=((void*)0)) {
        # 6 "sIsHeap_clone"
        result->sline=self->sline;
    }
    # 8 "sIsHeap_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sIsHeap_clone"
        __right_value0 = (void*)0;
        __dec_obj173=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sIsHeap_clone", 7, 1885, "char* "), "sIsHeap_clone", 7, 1887);
        __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0, (void*)0, "sIsHeap_clone", 7, 1886);
    }
    # 9 "sIsHeap_clone"
    if(self!=((void*)0)) {
        # 8 "sIsHeap_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sIsHeap_clone"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 9 "sIsHeap_clone"
        __right_value0 = (void*)0;
        __dec_obj174=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sIsHeap_clone", 9, 1889);
        come_call_finalizer(sType_finalize, __dec_obj174,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sIsHeap_clone", 9, 1888);
    }
    # 10 "sIsHeap_clone"
        __result_obj__0 = result;
    come_call_finalizer(sIsHeap_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sIsHeap_clone}", 10, 1890);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_is_pointer_node(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_is_pointer_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value18;
    struct sIsPointer* _inf_obj_value18;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1619 "53obj4.nc"
        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1619, 1897, "struct sNode");
    _inf_obj_value18=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(__right_value1=sIsPointer_initialize((struct sIsPointer* )come_increment_ref_count((struct sIsPointer *)come_calloc(1, sizeof(struct sIsPointer )*(1), "53obj4.nc", 1619, 1895, "struct sIsPointer* "), "53obj4.nc", 1619, 1896),type,info))), "53obj4.nc", 1619, 1898);
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sIsPointer_finalize;
    _inf_value18->clone=(void*)sIsPointer_clone;
    _inf_value18->compile=(void*)sIsPointer_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sNodeBase_terminated;
    _inf_value18->kind=(void*)sIsPointer_kind;
    _inf_value18->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value18)), "53obj4.nc", 1619, 1907);
    come_call_finalizer(sIsPointer_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1619, 1908);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1619, 1909):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1619, 1910):(void*)0);
    return __result_obj__0;
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_clone"; neo_current_frame = &fr;
    struct sIsPointer* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sIsPointer*  result  ;
    char*  __dec_obj175  ;
    struct sType*  __dec_obj176  ;
    memset(&result, 0, sizeof(result));
    # 3 "sIsPointer_clone"
    # 5 "sIsPointer_clone"
    if(self==(void*)0) {
        # 4 "sIsPointer_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sIsPointer_clone"
    result=(struct sIsPointer* )come_increment_ref_count((struct sIsPointer *)come_calloc(1, sizeof(struct sIsPointer )*(1), "sIsPointer_clone", 5, 1899, "struct sIsPointer* "), "sIsPointer_clone", 5, 1900);
    # 7 "sIsPointer_clone"
    if(self!=((void*)0)) {
        # 6 "sIsPointer_clone"
        result->sline=self->sline;
    }
    # 8 "sIsPointer_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sIsPointer_clone"
        __right_value0 = (void*)0;
        __dec_obj175=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sIsPointer_clone", 7, 1901, "char* "), "sIsPointer_clone", 7, 1903);
        __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0,0, (void*)0, "sIsPointer_clone", 7, 1902);
    }
    # 9 "sIsPointer_clone"
    if(self!=((void*)0)) {
        # 8 "sIsPointer_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sIsPointer_clone"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 9 "sIsPointer_clone"
        __right_value0 = (void*)0;
        __dec_obj176=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sIsPointer_clone", 9, 1905);
        come_call_finalizer(sType_finalize, __dec_obj176,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sIsPointer_clone", 9, 1904);
    }
    # 10 "sIsPointer_clone"
        __result_obj__0 = result;
    come_call_finalizer(sIsPointer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sIsPointer_clone}", 10, 1906);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_optional_node(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_optional_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value19;
    struct sOptionalNode* _inf_obj_value19;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1624 "53obj4.nc"
        _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1624, 1914, "struct sNode");
    _inf_obj_value19=(struct sOptionalNode*)come_increment_ref_count(((struct sOptionalNode*)(__right_value1=sOptionalNode_initialize((struct sOptionalNode* )come_increment_ref_count((struct sOptionalNode *)come_calloc(1, sizeof(struct sOptionalNode )*(1), "53obj4.nc", 1624, 1911, "struct sOptionalNode* "), "53obj4.nc", 1624, 1912),(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1624, 1913),info))), "53obj4.nc", 1624, 1915);
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sOptionalNode_finalize;
    _inf_value19->clone=(void*)sOptionalNode_clone;
    _inf_value19->compile=(void*)sOptionalNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sOptionalNode_kind;
    _inf_value19->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value19)), "53obj4.nc", 1624, 1924);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1624, 1925):(void*)0);
    come_call_finalizer(sOptionalNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1624, 1926);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1624, 1927):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1624, 1928):(void*)0);
    return __result_obj__0;
}

static struct sOptionalNode* sOptionalNode_clone(struct sOptionalNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_clone"; neo_current_frame = &fr;
    struct sOptionalNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOptionalNode*  result  ;
    char*  __dec_obj177  ;
    struct sNode* __dec_obj178;
    memset(&result, 0, sizeof(result));
    # 3 "sOptionalNode_clone"
    # 5 "sOptionalNode_clone"
    if(self==(void*)0) {
        # 4 "sOptionalNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sOptionalNode_clone"
    result=(struct sOptionalNode* )come_increment_ref_count((struct sOptionalNode *)come_calloc(1, sizeof(struct sOptionalNode )*(1), "sOptionalNode_clone", 5, 1916, "struct sOptionalNode* "), "sOptionalNode_clone", 5, 1917);
    # 7 "sOptionalNode_clone"
    if(self!=((void*)0)) {
        # 6 "sOptionalNode_clone"
        result->sline=self->sline;
    }
    # 8 "sOptionalNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sOptionalNode_clone"
        __right_value0 = (void*)0;
        __dec_obj177=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sOptionalNode_clone", 7, 1918, "char* "), "sOptionalNode_clone", 7, 1920);
        __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0, (void*)0, "sOptionalNode_clone", 7, 1919);
    }
    # 9 "sOptionalNode_clone"
    if(self!=((void*)0)) {
        # 8 "sOptionalNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sOptionalNode_clone"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 9 "sOptionalNode_clone"
        __right_value0 = (void*)0;
        __dec_obj178=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sOptionalNode_clone", 9, 1922);
        (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0, (void*)0, "sOptionalNode_clone", 9, 1921) :0);
    }
    # 10 "sOptionalNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sOptionalNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sOptionalNode_clone}", 10, 1923);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_ref_node(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_ref_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value20;
    struct sRefNode* _inf_obj_value20;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1629 "53obj4.nc"
        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1629, 1932, "struct sNode");
    _inf_obj_value20=(struct sRefNode*)come_increment_ref_count(((struct sRefNode*)(__right_value1=sRefNode_initialize((struct sRefNode* )come_increment_ref_count((struct sRefNode *)come_calloc(1, sizeof(struct sRefNode )*(1), "53obj4.nc", 1629, 1929, "struct sRefNode* "), "53obj4.nc", 1629, 1930),(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1629, 1931),info))), "53obj4.nc", 1629, 1933);
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sRefNode_finalize;
    _inf_value20->clone=(void*)sRefNode_clone;
    _inf_value20->compile=(void*)sRefNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sRefNode_kind;
    _inf_value20->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value20)), "53obj4.nc", 1629, 1942);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1629, 1943):(void*)0);
    come_call_finalizer(sRefNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1629, 1944);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1629, 1945):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1629, 1946):(void*)0);
    return __result_obj__0;
}

static struct sRefNode* sRefNode_clone(struct sRefNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_clone"; neo_current_frame = &fr;
    struct sRefNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sRefNode*  result  ;
    char*  __dec_obj179  ;
    struct sNode* __dec_obj180;
    memset(&result, 0, sizeof(result));
    # 3 "sRefNode_clone"
    # 5 "sRefNode_clone"
    if(self==(void*)0) {
        # 4 "sRefNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sRefNode_clone"
    result=(struct sRefNode* )come_increment_ref_count((struct sRefNode *)come_calloc(1, sizeof(struct sRefNode )*(1), "sRefNode_clone", 5, 1934, "struct sRefNode* "), "sRefNode_clone", 5, 1935);
    # 7 "sRefNode_clone"
    if(self!=((void*)0)) {
        # 6 "sRefNode_clone"
        result->sline=self->sline;
    }
    # 8 "sRefNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sRefNode_clone"
        __right_value0 = (void*)0;
        __dec_obj179=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sRefNode_clone", 7, 1936, "char* "), "sRefNode_clone", 7, 1938);
        __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0, (void*)0, "sRefNode_clone", 7, 1937);
    }
    # 9 "sRefNode_clone"
    if(self!=((void*)0)) {
        # 8 "sRefNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sRefNode_clone"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 9 "sRefNode_clone"
        __right_value0 = (void*)0;
        __dec_obj180=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sRefNode_clone", 9, 1940);
        (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0, (void*)0, "sRefNode_clone", 9, 1939) :0);
    }
    # 10 "sRefNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sRefNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sRefNode_clone}", 10, 1941);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_span_node(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_span_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value21;
    struct sSpanNode* _inf_obj_value21;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1634 "53obj4.nc"
        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1634, 1950, "struct sNode");
    _inf_obj_value21=(struct sSpanNode*)come_increment_ref_count(((struct sSpanNode*)(__right_value1=sSpanNode_initialize((struct sSpanNode* )come_increment_ref_count((struct sSpanNode *)come_calloc(1, sizeof(struct sSpanNode )*(1), "53obj4.nc", 1634, 1947, "struct sSpanNode* "), "53obj4.nc", 1634, 1948),(struct sNode*)come_increment_ref_count(node, "53obj4.nc", 1634, 1949),info))), "53obj4.nc", 1634, 1951);
    _inf_value21->_protocol_obj=_inf_obj_value21;
    _inf_value21->finalize=(void*)sSpanNode_finalize;
    _inf_value21->clone=(void*)sSpanNode_clone;
    _inf_value21->compile=(void*)sSpanNode_compile;
    _inf_value21->sline=(void*)sNodeBase_sline;
    _inf_value21->sline_real=(void*)sNodeBase_sline_real;
    _inf_value21->sname=(void*)sNodeBase_sname;
    _inf_value21->terminated=(void*)sNodeBase_terminated;
    _inf_value21->kind=(void*)sSpanNode_kind;
    _inf_value21->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value21)), "53obj4.nc", 1634, 1960);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1634, 1961):(void*)0);
    come_call_finalizer(sSpanNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1634, 1962);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1634, 1963):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1634, 1964):(void*)0);
    return __result_obj__0;
}

static struct sSpanNode* sSpanNode_clone(struct sSpanNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_clone"; neo_current_frame = &fr;
    struct sSpanNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSpanNode*  result  ;
    char*  __dec_obj181  ;
    struct sNode* __dec_obj182;
    memset(&result, 0, sizeof(result));
    # 3 "sSpanNode_clone"
    # 5 "sSpanNode_clone"
    if(self==(void*)0) {
        # 4 "sSpanNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sSpanNode_clone"
    result=(struct sSpanNode* )come_increment_ref_count((struct sSpanNode *)come_calloc(1, sizeof(struct sSpanNode )*(1), "sSpanNode_clone", 5, 1952, "struct sSpanNode* "), "sSpanNode_clone", 5, 1953);
    # 7 "sSpanNode_clone"
    if(self!=((void*)0)) {
        # 6 "sSpanNode_clone"
        result->sline=self->sline;
    }
    # 8 "sSpanNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sSpanNode_clone"
        __right_value0 = (void*)0;
        __dec_obj181=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSpanNode_clone", 7, 1954, "char* "), "sSpanNode_clone", 7, 1956);
        __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0,0, (void*)0, "sSpanNode_clone", 7, 1955);
    }
    # 9 "sSpanNode_clone"
    if(self!=((void*)0)) {
        # 8 "sSpanNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sSpanNode_clone"
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        # 9 "sSpanNode_clone"
        __right_value0 = (void*)0;
        __dec_obj182=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sSpanNode_clone", 9, 1958);
        (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0, (void*)0, "sSpanNode_clone", 9, 1957) :0);
    }
    # 10 "sSpanNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sSpanNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sSpanNode_clone}", 10, 1959);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_generic_node(struct sNode* exp, struct list$1sType$ph* types, struct list$1sNode$ph* exps, struct sNode* default_exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_generic_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value22;
    struct sGeneric* _inf_obj_value22;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1639 "53obj4.nc"
        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1639, 1971, "struct sNode");
    _inf_obj_value22=(struct sGeneric*)come_increment_ref_count(((struct sGeneric*)(__right_value1=sGeneric_initialize((struct sGeneric* )come_increment_ref_count((struct sGeneric *)come_calloc(1, sizeof(struct sGeneric )*(1), "53obj4.nc", 1639, 1965, "struct sGeneric* "), "53obj4.nc", 1639, 1966),(struct sNode*)come_increment_ref_count(exp, "53obj4.nc", 1639, 1967),(struct list$1sType$ph*)come_increment_ref_count(types, "53obj4.nc", 1639, 1968),(struct list$1sNode$ph*)come_increment_ref_count(exps, "53obj4.nc", 1639, 1969),(struct sNode*)come_increment_ref_count(default_exp, "53obj4.nc", 1639, 1970),info))), "53obj4.nc", 1639, 1972);
    _inf_value22->_protocol_obj=_inf_obj_value22;
    _inf_value22->finalize=(void*)sGeneric_finalize;
    _inf_value22->clone=(void*)sGeneric_clone;
    _inf_value22->compile=(void*)sGeneric_compile;
    _inf_value22->sline=(void*)sNodeBase_sline;
    _inf_value22->sline_real=(void*)sNodeBase_sline_real;
    _inf_value22->sname=(void*)sNodeBase_sname;
    _inf_value22->terminated=(void*)sNodeBase_terminated;
    _inf_value22->kind=(void*)sGeneric_kind;
    _inf_value22->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value22)), "53obj4.nc", 1639, 1987);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1639, 1988):(void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1639, 1989);
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "53obj4.nc}", 1639, 1990);
    ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1639, 1991):(void*)0);
    come_call_finalizer(sGeneric_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1639, 1992);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1639, 1993):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1639, 1994):(void*)0);
    return __result_obj__0;
}

static struct sGeneric* sGeneric_clone(struct sGeneric* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_clone"; neo_current_frame = &fr;
    struct sGeneric* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGeneric*  result  ;
    char*  __dec_obj183  ;
    struct sNode* __dec_obj184;
    struct list$1sType$ph* __dec_obj185;
    struct list$1sNode$ph* __dec_obj186;
    struct sNode* __dec_obj187;
    memset(&result, 0, sizeof(result));
    # 3 "sGeneric_clone"
    # 5 "sGeneric_clone"
    if(self==(void*)0) {
        # 4 "sGeneric_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sGeneric_clone"
    result=(struct sGeneric* )come_increment_ref_count((struct sGeneric *)come_calloc(1, sizeof(struct sGeneric )*(1), "sGeneric_clone", 5, 1973, "struct sGeneric* "), "sGeneric_clone", 5, 1974);
    # 7 "sGeneric_clone"
    if(self!=((void*)0)) {
        # 6 "sGeneric_clone"
        result->sline=self->sline;
    }
    # 8 "sGeneric_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sGeneric_clone"
        __right_value0 = (void*)0;
        __dec_obj183=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGeneric_clone", 7, 1975, "char* "), "sGeneric_clone", 7, 1977);
        __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0,0, (void*)0, "sGeneric_clone", 7, 1976);
    }
    # 9 "sGeneric_clone"
    if(self!=((void*)0)) {
        # 8 "sGeneric_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sGeneric_clone"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 9 "sGeneric_clone"
        __right_value0 = (void*)0;
        __dec_obj184=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sGeneric_clone", 9, 1979);
        (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0, (void*)0, "sGeneric_clone", 9, 1978) :0);
    }
    # 11 "sGeneric_clone"
    if(self!=((void*)0)&&self->types!=((void*)0)) {
        # 10 "sGeneric_clone"
        __right_value0 = (void*)0;
        __dec_obj185=result->types,
        result->types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->types), "sGeneric_clone", 10, 1981);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj185,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sGeneric_clone", 10, 1980);
    }
    # 12 "sGeneric_clone"
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        # 11 "sGeneric_clone"
        __right_value0 = (void*)0;
        __dec_obj186=result->exps,
        result->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps), "sGeneric_clone", 11, 1983);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj186,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sGeneric_clone", 11, 1982);
    }
    # 13 "sGeneric_clone"
    if(self!=((void*)0)&&self->default_exp!=((void*)0)) {
        # 12 "sGeneric_clone"
        __right_value0 = (void*)0;
        __dec_obj187=result->default_exp,
        result->default_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->default_exp), "sGeneric_clone", 12, 1985);
        (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0, (void*)0, "sGeneric_clone", 12, 1984) :0);
    }
    # 13 "sGeneric_clone"
        __result_obj__0 = result;
    come_call_finalizer(sGeneric_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sGeneric_clone}", 13, 1986);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_offsetof_node(struct sType*  type  , char*  name  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_offsetof_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value23;
    struct sOffsetOf* _inf_obj_value23;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1644 "53obj4.nc"
        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1644, 1998, "struct sNode");
    _inf_obj_value23=(struct sOffsetOf*)come_increment_ref_count(((struct sOffsetOf*)(__right_value1=sOffsetOf_initialize((struct sOffsetOf* )come_increment_ref_count((struct sOffsetOf *)come_calloc(1, sizeof(struct sOffsetOf )*(1), "53obj4.nc", 1644, 1995, "struct sOffsetOf* "), "53obj4.nc", 1644, 1996),type,(char* )come_increment_ref_count(name, "53obj4.nc", 1644, 1997),info))), "53obj4.nc", 1644, 1999);
    _inf_value23->_protocol_obj=_inf_obj_value23;
    _inf_value23->finalize=(void*)sOffsetOf_finalize;
    _inf_value23->clone=(void*)sOffsetOf_clone;
    _inf_value23->compile=(void*)sOffsetOf_compile;
    _inf_value23->sline=(void*)sNodeBase_sline;
    _inf_value23->sline_real=(void*)sNodeBase_sline_real;
    _inf_value23->sname=(void*)sNodeBase_sname;
    _inf_value23->terminated=(void*)sNodeBase_terminated;
    _inf_value23->kind=(void*)sOffsetOf_kind;
    _inf_value23->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value23)), "53obj4.nc", 1644, 2011);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "53obj4.nc", 1644, 2012));
    come_call_finalizer(sOffsetOf_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1644, 2013);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1644, 2014):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1644, 2015):(void*)0);
    return __result_obj__0;
}

static struct sOffsetOf* sOffsetOf_clone(struct sOffsetOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_clone"; neo_current_frame = &fr;
    struct sOffsetOf* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOffsetOf*  result  ;
    char*  __dec_obj188  ;
    struct sType*  __dec_obj189  ;
    char*  __dec_obj190  ;
    memset(&result, 0, sizeof(result));
    # 3 "sOffsetOf_clone"
    # 5 "sOffsetOf_clone"
    if(self==(void*)0) {
        # 4 "sOffsetOf_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sOffsetOf_clone"
    result=(struct sOffsetOf* )come_increment_ref_count((struct sOffsetOf *)come_calloc(1, sizeof(struct sOffsetOf )*(1), "sOffsetOf_clone", 5, 2000, "struct sOffsetOf* "), "sOffsetOf_clone", 5, 2001);
    # 7 "sOffsetOf_clone"
    if(self!=((void*)0)) {
        # 6 "sOffsetOf_clone"
        result->sline=self->sline;
    }
    # 8 "sOffsetOf_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sOffsetOf_clone"
        __right_value0 = (void*)0;
        __dec_obj188=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sOffsetOf_clone", 7, 2002, "char* "), "sOffsetOf_clone", 7, 2004);
        __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0, (void*)0, "sOffsetOf_clone", 7, 2003);
    }
    # 9 "sOffsetOf_clone"
    if(self!=((void*)0)) {
        # 8 "sOffsetOf_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sOffsetOf_clone"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 9 "sOffsetOf_clone"
        __right_value0 = (void*)0;
        __dec_obj189=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sOffsetOf_clone", 9, 2006);
        come_call_finalizer(sType_finalize, __dec_obj189,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sOffsetOf_clone", 9, 2005);
    }
    # 11 "sOffsetOf_clone"
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        # 10 "sOffsetOf_clone"
        __right_value0 = (void*)0;
        __dec_obj190=result->name,
        result->name=(char* )come_increment_ref_count((char* )come_memdup(self->name, "sOffsetOf_clone", 10, 2007, "char* "), "sOffsetOf_clone", 10, 2009);
        __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0,0, (void*)0, "sOffsetOf_clone", 10, 2008);
    }
    # 11 "sOffsetOf_clone"
        __result_obj__0 = result;
    come_call_finalizer(sOffsetOf_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sOffsetOf_clone}", 11, 2010);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_sizeof_node(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_sizeof_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value24;
    struct sSizeOfNode* _inf_obj_value24;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1649 "53obj4.nc"
        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1649, 2018, "struct sNode");
    _inf_obj_value24=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(__right_value1=sSizeOfNode_initialize((struct sSizeOfNode* )come_increment_ref_count((struct sSizeOfNode *)come_calloc(1, sizeof(struct sSizeOfNode )*(1), "53obj4.nc", 1649, 2016, "struct sSizeOfNode* "), "53obj4.nc", 1649, 2017),type,info))), "53obj4.nc", 1649, 2019);
    _inf_value24->_protocol_obj=_inf_obj_value24;
    _inf_value24->finalize=(void*)sSizeOfNode_finalize;
    _inf_value24->clone=(void*)sSizeOfNode_clone;
    _inf_value24->compile=(void*)sSizeOfNode_compile;
    _inf_value24->sline=(void*)sNodeBase_sline;
    _inf_value24->sline_real=(void*)sNodeBase_sline_real;
    _inf_value24->sname=(void*)sNodeBase_sname;
    _inf_value24->terminated=(void*)sNodeBase_terminated;
    _inf_value24->kind=(void*)sSizeOfNode_kind;
    _inf_value24->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value24)), "53obj4.nc", 1649, 2028);
    come_call_finalizer(sSizeOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1649, 2029);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1649, 2030):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1649, 2031):(void*)0);
    return __result_obj__0;
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_clone"; neo_current_frame = &fr;
    struct sSizeOfNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSizeOfNode*  result  ;
    char*  __dec_obj191  ;
    struct sType*  __dec_obj192  ;
    memset(&result, 0, sizeof(result));
    # 3 "sSizeOfNode_clone"
    # 5 "sSizeOfNode_clone"
    if(self==(void*)0) {
        # 4 "sSizeOfNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sSizeOfNode_clone"
    result=(struct sSizeOfNode* )come_increment_ref_count((struct sSizeOfNode *)come_calloc(1, sizeof(struct sSizeOfNode )*(1), "sSizeOfNode_clone", 5, 2020, "struct sSizeOfNode* "), "sSizeOfNode_clone", 5, 2021);
    # 7 "sSizeOfNode_clone"
    if(self!=((void*)0)) {
        # 6 "sSizeOfNode_clone"
        result->sline=self->sline;
    }
    # 8 "sSizeOfNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sSizeOfNode_clone"
        __right_value0 = (void*)0;
        __dec_obj191=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSizeOfNode_clone", 7, 2022, "char* "), "sSizeOfNode_clone", 7, 2024);
        __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0,0, (void*)0, "sSizeOfNode_clone", 7, 2023);
    }
    # 9 "sSizeOfNode_clone"
    if(self!=((void*)0)) {
        # 8 "sSizeOfNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sSizeOfNode_clone"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 9 "sSizeOfNode_clone"
        __right_value0 = (void*)0;
        __dec_obj192=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sSizeOfNode_clone", 9, 2026);
        come_call_finalizer(sType_finalize, __dec_obj192,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sSizeOfNode_clone", 9, 2025);
    }
    # 10 "sSizeOfNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sSizeOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sSizeOfNode_clone}", 10, 2027);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_sizeof_exp_node(struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_sizeof_exp_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value25;
    struct sSizeOfExpNode* _inf_obj_value25;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1654 "53obj4.nc"
        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1654, 2035, "struct sNode");
    _inf_obj_value25=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value1=sSizeOfExpNode_initialize((struct sSizeOfExpNode* )come_increment_ref_count((struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), "53obj4.nc", 1654, 2032, "struct sSizeOfExpNode* "), "53obj4.nc", 1654, 2033),(struct sNode*)come_increment_ref_count(exp, "53obj4.nc", 1654, 2034),info))), "53obj4.nc", 1654, 2036);
    _inf_value25->_protocol_obj=_inf_obj_value25;
    _inf_value25->finalize=(void*)sSizeOfExpNode_finalize;
    _inf_value25->clone=(void*)sSizeOfExpNode_clone;
    _inf_value25->compile=(void*)sSizeOfExpNode_compile;
    _inf_value25->sline=(void*)sNodeBase_sline;
    _inf_value25->sline_real=(void*)sNodeBase_sline_real;
    _inf_value25->sname=(void*)sNodeBase_sname;
    _inf_value25->terminated=(void*)sNodeBase_terminated;
    _inf_value25->kind=(void*)sSizeOfExpNode_kind;
    _inf_value25->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value25)), "53obj4.nc", 1654, 2037);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1654, 2038):(void*)0);
    come_call_finalizer(sSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1654, 2039);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1654, 2040):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1654, 2041):(void*)0);
    return __result_obj__0;
}

struct sNode* create_dynamic_typeof_node(struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_dynamic_typeof_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value26;
    struct sDynamicTypeOf* _inf_obj_value26;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1659 "53obj4.nc"
        _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1659, 2045, "struct sNode");
    _inf_obj_value26=(struct sDynamicTypeOf*)come_increment_ref_count(((struct sDynamicTypeOf*)(__right_value1=sDynamicTypeOf_initialize((struct sDynamicTypeOf* )come_increment_ref_count((struct sDynamicTypeOf *)come_calloc(1, sizeof(struct sDynamicTypeOf )*(1), "53obj4.nc", 1659, 2042, "struct sDynamicTypeOf* "), "53obj4.nc", 1659, 2043),(struct sNode*)come_increment_ref_count(exp, "53obj4.nc", 1659, 2044),info))), "53obj4.nc", 1659, 2046);
    _inf_value26->_protocol_obj=_inf_obj_value26;
    _inf_value26->finalize=(void*)sDynamicTypeOf_finalize;
    _inf_value26->clone=(void*)sDynamicTypeOf_clone;
    _inf_value26->compile=(void*)sDynamicTypeOf_compile;
    _inf_value26->sline=(void*)sNodeBase_sline;
    _inf_value26->sline_real=(void*)sNodeBase_sline_real;
    _inf_value26->sname=(void*)sNodeBase_sname;
    _inf_value26->terminated=(void*)sNodeBase_terminated;
    _inf_value26->kind=(void*)sDynamicTypeOf_kind;
    _inf_value26->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value26)), "53obj4.nc", 1659, 2055);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1659, 2056):(void*)0);
    come_call_finalizer(sDynamicTypeOf_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1659, 2057);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1659, 2058):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1659, 2059):(void*)0);
    return __result_obj__0;
}

static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_clone"; neo_current_frame = &fr;
    struct sDynamicTypeOf* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDynamicTypeOf*  result  ;
    char*  __dec_obj193  ;
    struct sNode* __dec_obj194;
    memset(&result, 0, sizeof(result));
    # 3 "sDynamicTypeOf_clone"
    # 5 "sDynamicTypeOf_clone"
    if(self==(void*)0) {
        # 4 "sDynamicTypeOf_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sDynamicTypeOf_clone"
    result=(struct sDynamicTypeOf* )come_increment_ref_count((struct sDynamicTypeOf *)come_calloc(1, sizeof(struct sDynamicTypeOf )*(1), "sDynamicTypeOf_clone", 5, 2047, "struct sDynamicTypeOf* "), "sDynamicTypeOf_clone", 5, 2048);
    # 7 "sDynamicTypeOf_clone"
    if(self!=((void*)0)) {
        # 6 "sDynamicTypeOf_clone"
        result->sline=self->sline;
    }
    # 8 "sDynamicTypeOf_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sDynamicTypeOf_clone"
        __right_value0 = (void*)0;
        __dec_obj193=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDynamicTypeOf_clone", 7, 2049, "char* "), "sDynamicTypeOf_clone", 7, 2051);
        __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0, (void*)0, "sDynamicTypeOf_clone", 7, 2050);
    }
    # 9 "sDynamicTypeOf_clone"
    if(self!=((void*)0)) {
        # 8 "sDynamicTypeOf_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sDynamicTypeOf_clone"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 9 "sDynamicTypeOf_clone"
        __right_value0 = (void*)0;
        __dec_obj194=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sDynamicTypeOf_clone", 9, 2053);
        (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0, (void*)0, "sDynamicTypeOf_clone", 9, 2052) :0);
    }
    # 10 "sDynamicTypeOf_clone"
        __result_obj__0 = result;
    come_call_finalizer(sDynamicTypeOf_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDynamicTypeOf_clone}", 10, 2054);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_dynamic_sizeof_exp_node(struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_dynamic_sizeof_exp_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value27;
    struct sDynamicSizeOfExpNode* _inf_obj_value27;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1664 "53obj4.nc"
        _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1664, 2063, "struct sNode");
    _inf_obj_value27=(struct sDynamicSizeOfExpNode*)come_increment_ref_count(((struct sDynamicSizeOfExpNode*)(__right_value1=sDynamicSizeOfExpNode_initialize((struct sDynamicSizeOfExpNode* )come_increment_ref_count((struct sDynamicSizeOfExpNode *)come_calloc(1, sizeof(struct sDynamicSizeOfExpNode )*(1), "53obj4.nc", 1664, 2060, "struct sDynamicSizeOfExpNode* "), "53obj4.nc", 1664, 2061),(struct sNode*)come_increment_ref_count(exp, "53obj4.nc", 1664, 2062),info))), "53obj4.nc", 1664, 2064);
    _inf_value27->_protocol_obj=_inf_obj_value27;
    _inf_value27->finalize=(void*)sDynamicSizeOfExpNode_finalize;
    _inf_value27->clone=(void*)sDynamicSizeOfExpNode_clone;
    _inf_value27->compile=(void*)sDynamicSizeOfExpNode_compile;
    _inf_value27->sline=(void*)sNodeBase_sline;
    _inf_value27->sline_real=(void*)sNodeBase_sline_real;
    _inf_value27->sname=(void*)sNodeBase_sname;
    _inf_value27->terminated=(void*)sNodeBase_terminated;
    _inf_value27->kind=(void*)sDynamicSizeOfExpNode_kind;
    _inf_value27->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value27)), "53obj4.nc", 1664, 2065);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1664, 2066):(void*)0);
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1664, 2067);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1664, 2068):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1664, 2069):(void*)0);
    return __result_obj__0;
}

struct sNode* create_alignof_node(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_alignof_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value28;
    struct sAlignOfNode* _inf_obj_value28;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1669 "53obj4.nc"
        _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1669, 2072, "struct sNode");
    _inf_obj_value28=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(__right_value1=sAlignOfNode_initialize((struct sAlignOfNode* )come_increment_ref_count((struct sAlignOfNode *)come_calloc(1, sizeof(struct sAlignOfNode )*(1), "53obj4.nc", 1669, 2070, "struct sAlignOfNode* "), "53obj4.nc", 1669, 2071),type,info))), "53obj4.nc", 1669, 2073);
    _inf_value28->_protocol_obj=_inf_obj_value28;
    _inf_value28->finalize=(void*)sAlignOfNode_finalize;
    _inf_value28->clone=(void*)sAlignOfNode_clone;
    _inf_value28->compile=(void*)sAlignOfNode_compile;
    _inf_value28->sline=(void*)sNodeBase_sline;
    _inf_value28->sline_real=(void*)sNodeBase_sline_real;
    _inf_value28->sname=(void*)sNodeBase_sname;
    _inf_value28->terminated=(void*)sNodeBase_terminated;
    _inf_value28->kind=(void*)sAlignOfNode_kind;
    _inf_value28->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value28)), "53obj4.nc", 1669, 2082);
    come_call_finalizer(sAlignOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1669, 2083);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1669, 2084):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1669, 2085):(void*)0);
    return __result_obj__0;
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_clone"; neo_current_frame = &fr;
    struct sAlignOfNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfNode*  result  ;
    char*  __dec_obj195  ;
    struct sType*  __dec_obj196  ;
    memset(&result, 0, sizeof(result));
    # 3 "sAlignOfNode_clone"
    # 5 "sAlignOfNode_clone"
    if(self==(void*)0) {
        # 4 "sAlignOfNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sAlignOfNode_clone"
    result=(struct sAlignOfNode* )come_increment_ref_count((struct sAlignOfNode *)come_calloc(1, sizeof(struct sAlignOfNode )*(1), "sAlignOfNode_clone", 5, 2074, "struct sAlignOfNode* "), "sAlignOfNode_clone", 5, 2075);
    # 7 "sAlignOfNode_clone"
    if(self!=((void*)0)) {
        # 6 "sAlignOfNode_clone"
        result->sline=self->sline;
    }
    # 8 "sAlignOfNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sAlignOfNode_clone"
        __right_value0 = (void*)0;
        __dec_obj195=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAlignOfNode_clone", 7, 2076, "char* "), "sAlignOfNode_clone", 7, 2078);
        __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0, (void*)0, "sAlignOfNode_clone", 7, 2077);
    }
    # 9 "sAlignOfNode_clone"
    if(self!=((void*)0)) {
        # 8 "sAlignOfNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sAlignOfNode_clone"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 9 "sAlignOfNode_clone"
        __right_value0 = (void*)0;
        __dec_obj196=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sAlignOfNode_clone", 9, 2080);
        come_call_finalizer(sType_finalize, __dec_obj196,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sAlignOfNode_clone", 9, 2079);
    }
    # 10 "sAlignOfNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sAlignOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAlignOfNode_clone}", 10, 2081);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_alignof_exp_node(struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_alignof_exp_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value29;
    struct sAlignOfExpNode* _inf_obj_value29;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1674 "53obj4.nc"
        _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1674, 2089, "struct sNode");
    _inf_obj_value29=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value1=sAlignOfExpNode_initialize((struct sAlignOfExpNode* )come_increment_ref_count((struct sAlignOfExpNode *)come_calloc(1, sizeof(struct sAlignOfExpNode )*(1), "53obj4.nc", 1674, 2086, "struct sAlignOfExpNode* "), "53obj4.nc", 1674, 2087),(struct sNode*)come_increment_ref_count(exp, "53obj4.nc", 1674, 2088),info))), "53obj4.nc", 1674, 2090);
    _inf_value29->_protocol_obj=_inf_obj_value29;
    _inf_value29->finalize=(void*)sAlignOfExpNode_finalize;
    _inf_value29->clone=(void*)sAlignOfExpNode_clone;
    _inf_value29->compile=(void*)sAlignOfExpNode_compile;
    _inf_value29->sline=(void*)sNodeBase_sline;
    _inf_value29->sline_real=(void*)sNodeBase_sline_real;
    _inf_value29->sname=(void*)sNodeBase_sname;
    _inf_value29->terminated=(void*)sNodeBase_terminated;
    _inf_value29->kind=(void*)sAlignOfExpNode_kind;
    _inf_value29->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value29)), "53obj4.nc", 1674, 2099);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1674, 2100):(void*)0);
    come_call_finalizer(sAlignOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1674, 2101);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1674, 2102):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1674, 2103):(void*)0);
    return __result_obj__0;
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_clone"; neo_current_frame = &fr;
    struct sAlignOfExpNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfExpNode*  result  ;
    char*  __dec_obj197  ;
    struct sNode* __dec_obj198;
    memset(&result, 0, sizeof(result));
    # 3 "sAlignOfExpNode_clone"
    # 5 "sAlignOfExpNode_clone"
    if(self==(void*)0) {
        # 4 "sAlignOfExpNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sAlignOfExpNode_clone"
    result=(struct sAlignOfExpNode* )come_increment_ref_count((struct sAlignOfExpNode *)come_calloc(1, sizeof(struct sAlignOfExpNode )*(1), "sAlignOfExpNode_clone", 5, 2091, "struct sAlignOfExpNode* "), "sAlignOfExpNode_clone", 5, 2092);
    # 7 "sAlignOfExpNode_clone"
    if(self!=((void*)0)) {
        # 6 "sAlignOfExpNode_clone"
        result->sline=self->sline;
    }
    # 8 "sAlignOfExpNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sAlignOfExpNode_clone"
        __right_value0 = (void*)0;
        __dec_obj197=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAlignOfExpNode_clone", 7, 2093, "char* "), "sAlignOfExpNode_clone", 7, 2095);
        __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0,0, (void*)0, "sAlignOfExpNode_clone", 7, 2094);
    }
    # 9 "sAlignOfExpNode_clone"
    if(self!=((void*)0)) {
        # 8 "sAlignOfExpNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sAlignOfExpNode_clone"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 9 "sAlignOfExpNode_clone"
        __right_value0 = (void*)0;
        __dec_obj198=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sAlignOfExpNode_clone", 9, 2097);
        (__dec_obj198 ? __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0, (void*)0, "sAlignOfExpNode_clone", 9, 2096) :0);
    }
    # 10 "sAlignOfExpNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sAlignOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAlignOfExpNode_clone}", 10, 2098);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_alignof_node2(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_alignof_node2"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value30;
    struct sAlignOfNode2* _inf_obj_value30;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1679 "53obj4.nc"
        _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1679, 2106, "struct sNode");
    _inf_obj_value30=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(__right_value1=sAlignOfNode2_initialize((struct sAlignOfNode2* )come_increment_ref_count((struct sAlignOfNode2 *)come_calloc(1, sizeof(struct sAlignOfNode2 )*(1), "53obj4.nc", 1679, 2104, "struct sAlignOfNode2* "), "53obj4.nc", 1679, 2105),type,info))), "53obj4.nc", 1679, 2107);
    _inf_value30->_protocol_obj=_inf_obj_value30;
    _inf_value30->finalize=(void*)sAlignOfNode2_finalize;
    _inf_value30->clone=(void*)sAlignOfNode2_clone;
    _inf_value30->compile=(void*)sAlignOfNode2_compile;
    _inf_value30->sline=(void*)sNodeBase_sline;
    _inf_value30->sline_real=(void*)sNodeBase_sline_real;
    _inf_value30->sname=(void*)sNodeBase_sname;
    _inf_value30->terminated=(void*)sNodeBase_terminated;
    _inf_value30->kind=(void*)sAlignOfNode2_kind;
    _inf_value30->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value30)), "53obj4.nc", 1679, 2116);
    come_call_finalizer(sAlignOfNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1679, 2117);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1679, 2118):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1679, 2119):(void*)0);
    return __result_obj__0;
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_clone"; neo_current_frame = &fr;
    struct sAlignOfNode2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfNode2*  result  ;
    char*  __dec_obj199  ;
    struct sType*  __dec_obj200  ;
    memset(&result, 0, sizeof(result));
    # 3 "sAlignOfNode2_clone"
    # 5 "sAlignOfNode2_clone"
    if(self==(void*)0) {
        # 4 "sAlignOfNode2_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sAlignOfNode2_clone"
    result=(struct sAlignOfNode2* )come_increment_ref_count((struct sAlignOfNode2 *)come_calloc(1, sizeof(struct sAlignOfNode2 )*(1), "sAlignOfNode2_clone", 5, 2108, "struct sAlignOfNode2* "), "sAlignOfNode2_clone", 5, 2109);
    # 7 "sAlignOfNode2_clone"
    if(self!=((void*)0)) {
        # 6 "sAlignOfNode2_clone"
        result->sline=self->sline;
    }
    # 8 "sAlignOfNode2_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sAlignOfNode2_clone"
        __right_value0 = (void*)0;
        __dec_obj199=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAlignOfNode2_clone", 7, 2110, "char* "), "sAlignOfNode2_clone", 7, 2112);
        __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0,0, (void*)0, "sAlignOfNode2_clone", 7, 2111);
    }
    # 9 "sAlignOfNode2_clone"
    if(self!=((void*)0)) {
        # 8 "sAlignOfNode2_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sAlignOfNode2_clone"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 9 "sAlignOfNode2_clone"
        __right_value0 = (void*)0;
        __dec_obj200=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sAlignOfNode2_clone", 9, 2114);
        come_call_finalizer(sType_finalize, __dec_obj200,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sAlignOfNode2_clone", 9, 2113);
    }
    # 10 "sAlignOfNode2_clone"
        __result_obj__0 = result;
    come_call_finalizer(sAlignOfNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAlignOfNode2_clone}", 10, 2115);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_alignof_exp_node2(struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_alignof_exp_node2"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value31;
    struct sAlignOfExpNode2* _inf_obj_value31;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 1684 "53obj4.nc"
        _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "53obj4.nc", 1684, 2123, "struct sNode");
    _inf_obj_value31=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value1=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2* )come_increment_ref_count((struct sAlignOfExpNode2 *)come_calloc(1, sizeof(struct sAlignOfExpNode2 )*(1), "53obj4.nc", 1684, 2120, "struct sAlignOfExpNode2* "), "53obj4.nc", 1684, 2121),(struct sNode*)come_increment_ref_count(exp, "53obj4.nc", 1684, 2122),info))), "53obj4.nc", 1684, 2124);
    _inf_value31->_protocol_obj=_inf_obj_value31;
    _inf_value31->finalize=(void*)sAlignOfExpNode2_finalize;
    _inf_value31->clone=(void*)sAlignOfExpNode2_clone;
    _inf_value31->compile=(void*)sAlignOfExpNode2_compile;
    _inf_value31->sline=(void*)sNodeBase_sline;
    _inf_value31->sline_real=(void*)sNodeBase_sline_real;
    _inf_value31->sname=(void*)sNodeBase_sname;
    _inf_value31->terminated=(void*)sNodeBase_terminated;
    _inf_value31->kind=(void*)sAlignOfExpNode2_kind;
    _inf_value31->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value31)), "53obj4.nc", 1684, 2133);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "53obj4.nc", 1684, 2134):(void*)0);
    come_call_finalizer(sAlignOfExpNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "53obj4.nc}", 1684, 2135);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "53obj4.nc", 1684, 2136):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "53obj4.nc", 1684, 2137):(void*)0);
    return __result_obj__0;
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_clone"; neo_current_frame = &fr;
    struct sAlignOfExpNode2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfExpNode2*  result  ;
    char*  __dec_obj201  ;
    struct sNode* __dec_obj202;
    memset(&result, 0, sizeof(result));
    # 3 "sAlignOfExpNode2_clone"
    # 5 "sAlignOfExpNode2_clone"
    if(self==(void*)0) {
        # 4 "sAlignOfExpNode2_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sAlignOfExpNode2_clone"
    result=(struct sAlignOfExpNode2* )come_increment_ref_count((struct sAlignOfExpNode2 *)come_calloc(1, sizeof(struct sAlignOfExpNode2 )*(1), "sAlignOfExpNode2_clone", 5, 2125, "struct sAlignOfExpNode2* "), "sAlignOfExpNode2_clone", 5, 2126);
    # 7 "sAlignOfExpNode2_clone"
    if(self!=((void*)0)) {
        # 6 "sAlignOfExpNode2_clone"
        result->sline=self->sline;
    }
    # 8 "sAlignOfExpNode2_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sAlignOfExpNode2_clone"
        __right_value0 = (void*)0;
        __dec_obj201=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAlignOfExpNode2_clone", 7, 2127, "char* "), "sAlignOfExpNode2_clone", 7, 2129);
        __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0,0, (void*)0, "sAlignOfExpNode2_clone", 7, 2128);
    }
    # 9 "sAlignOfExpNode2_clone"
    if(self!=((void*)0)) {
        # 8 "sAlignOfExpNode2_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sAlignOfExpNode2_clone"
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        # 9 "sAlignOfExpNode2_clone"
        __right_value0 = (void*)0;
        __dec_obj202=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sAlignOfExpNode2_clone", 9, 2131);
        (__dec_obj202 ? __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0, (void*)0, "sAlignOfExpNode2_clone", 9, 2130) :0);
    }
    # 10 "sAlignOfExpNode2_clone"
        __result_obj__0 = result;
    come_call_finalizer(sAlignOfExpNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAlignOfExpNode2_clone}", 10, 2132);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

