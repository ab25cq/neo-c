/// c_include definition ///
/// typedef definition ///
typedef unsigned long size_t;

typedef char* string;

typedef unsigned long  long    ;

typedef __builtin_va_list __gnuc_va_list;

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

typedef long  int (*cookie_read_function_t)(void*,char*,unsigned long );

typedef long  int (*cookie_write_function_t)(void*,const char*,unsigned long );

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

typedef __builtin_va_list va_list;

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
    long  int (*(*read))(void*,char*,unsigned long )  ;
    long  int (*(*write))(void*,const char*,unsigned long )  ;
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
    struct neo_frame*  prev  ;
    char* fun_name;
    unsigned long  int frame_id;
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

struct Result$1_IO_FILE$p
{
    int tag;
    struct _IO_FILE*  Some_value  ;
};

struct Result$1buffer$ph
{
    int tag;
    struct buffer*  Some_value  ;
};

struct Result$1int$
{
    int tag;
    int Some_value;
};

struct Result$1list$1char$ph$ph
{
    int tag;
    struct list$1char$ph* Some_value;
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
    _Bool in_case_optional_load;
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

extern unsigned long  int neo_frame_id;

extern struct sMemHeader*  gAllocMem  ;

extern struct sMemHeader*  gFreeMem  ;

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
struct _IO_FILE*  fmemopen(void* __s, unsigned long  __len  , const char* __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  open_memstream(char** __bufloc, unsigned long*  __sizeloc  ) __attribute__ ((__malloc__))  ;
void setbuf(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf);
int setvbuf(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf, int __modes, unsigned long  __n  );
void setbuffer(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf, unsigned long  __size  );
void setlinebuf(struct _IO_FILE*  __stream  );
int fprintf(struct _IO_FILE* __restrict  __stream  , const char* __restrict __format, ...);
int printf(const char* __restrict __format, ...);
int sprintf(char* __restrict __s, const char* __restrict __format, ...);
int vfprintf(struct _IO_FILE* __restrict  __s  , const char* __restrict __format, __builtin_va_list  __arg  );
int vprintf(const char* __restrict __format, __builtin_va_list  __arg  );
int vsprintf(char* __restrict __s, const char* __restrict __format, __builtin_va_list  __arg  );
int snprintf(char* __restrict __s, unsigned long  __maxlen  , const char* __restrict __format, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
int vsnprintf(char* __restrict __s, unsigned long  __maxlen  , const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 3, 0)));
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
long  int  __getdelim(char** __restrict __lineptr, unsigned long* __restrict  __n  , int __delimiter, struct _IO_FILE* __restrict  __stream  );
long  int  getdelim(char** __restrict __lineptr, unsigned long* __restrict  __n  , int __delimiter, struct _IO_FILE* __restrict  __stream  );
long  int  getline(char** __restrict __lineptr, unsigned long* __restrict  __n  , struct _IO_FILE* __restrict  __stream  );
int fputs(const char* __restrict __s, struct _IO_FILE* __restrict  __stream  );
int puts(const char* __s);
int ungetc(int __c, struct _IO_FILE*  __stream  );
unsigned long  fread(void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __stream  );
unsigned long  fwrite(const void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __s  );
int fputs_unlocked(const char* __restrict __s, struct _IO_FILE* __restrict  __stream  );
unsigned long  fread_unlocked(void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __stream  );
unsigned long  fwrite_unlocked(const void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __stream  );
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
unsigned long  __ctype_get_mb_cur_max();
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
int strfromd(char* __dest, unsigned long  __size  , const char* __format, double __f);
int strfromf(char* __dest, unsigned long  __size  , const char* __format, float __f);
int strfroml(char* __dest, unsigned long  __size  , const char* __format, long  double __f);
int strfromf32(char* __dest, unsigned long  __size  , const char* __format, float  __f  );
int strfromf64(char* __dest, unsigned long  __size  , const char* __format, double  __f  );
int strfromf32x(char* __dest, unsigned long  __size  , const char* __format, double  __f  );
int strfromf64x(char* __dest, unsigned long  __size  , const char* __format, long  double  __f  );
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
char* initstate(unsigned int __seed, char* __statebuf, unsigned long  __statelen  );
char* setstate(char* __statebuf);
int random_r(struct random_data* __restrict  __buf  , int* __restrict  __result  );
int srandom_r(unsigned int __seed, struct random_data*  __buf  );
int initstate_r(unsigned int __seed, char* __restrict __statebuf, unsigned long  __statelen  , struct random_data* __restrict  __buf  );
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
void arc4random_buf(void* __buf, unsigned long  __size  );
unsigned int  arc4random_uniform(unsigned int  __upper_bound  );
void* malloc(unsigned long  __size  ) __attribute__ ((__malloc__))
      ;
void* calloc(unsigned long  __nmemb  , unsigned long  __size  ) __attribute__ ((__malloc__))  ;
void* realloc(void* __ptr, unsigned long  __size  );
void free(void* __ptr);
void* reallocarray(void* __ptr, unsigned long  __nmemb  , unsigned long  __size  );
void* alloca(unsigned long  __size  );
void* valloc(unsigned long  __size  ) __attribute__ ((__malloc__))
      ;
int posix_memalign(void** __memptr, unsigned long  __alignment  , unsigned long  __size  );
void* aligned_alloc(unsigned long  __alignment  , unsigned long  __size  ) __attribute__ ((__malloc__)) 
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
void* bsearch(const void* __key, const void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*)  );
void qsort(void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*)  );
void qsort_r(void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*,void*)  , void* __arg);
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
int ecvt_r(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int fcvt_r(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int qecvt_r(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int qfcvt_r(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int mblen(const char* __s, unsigned long  __n  );
int mbtowc(int* __restrict  __pwc  , const char* __restrict __s, unsigned long  __n  );
int wctomb(char* __s, int  __wchar  );
unsigned long  mbstowcs(int* __restrict  __pwcs  , const char* __restrict __s, unsigned long  __n  );
unsigned long  wcstombs(char* __restrict __s, const int* __restrict  __pwcs  , unsigned long  __n  );
int rpmatch(const char* __response);
int getsubopt(char** __restrict __optionp, char** const __restrict __tokens, char** __restrict __valuep);
int posix_openpt(int __oflag);
int grantpt(int __fd);
int unlockpt(int __fd);
char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, unsigned long  __buflen  );
int getpt();
int getloadavg(double __loadavg[], int __nelem);
void* memcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
void* memmove(void* __dest, const void* __src, unsigned long  __n  );
void* memccpy(void* __restrict __dest, const void* __restrict __src, int __c, unsigned long  __n  );
void* memset(void* __s, int __c, unsigned long  __n  );
int memcmp(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int __memcmpeq(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void* memchr(const void* __s, int __c, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void* rawmemchr(const void* __s, int __c) __attribute__ ((__pure__)) ;
void* memrchr(const void* __s, int __c, unsigned long  __n  ) __attribute__ ((__pure__)) 
      ;
char* strcpy(char* __restrict __dest, const char* __restrict __src);
char* strncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
char* strcat(char* __restrict __dest, const char* __restrict __src);
char* strncat(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strcmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncmp(const char* __s1, const char* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int strcoll(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
unsigned long  strxfrm(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct*  __l  ) __attribute__ ((__pure__)) ;
unsigned long  strxfrm_l(char* __dest, const char* __src, unsigned long  __n  , struct __locale_struct*  __l  );
char* strdup(const char* __s) __attribute__ ((__malloc__)) ;
char* strndup(const char* __string, unsigned long  __n  ) __attribute__ ((__malloc__)) ;
char* strchr(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* strrchr(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* strchrnul(const char* __s, int __c) __attribute__ ((__pure__)) ;
unsigned long  strcspn(const char* __s, const char* __reject) __attribute__ ((__pure__)) ;
unsigned long  strspn(const char* __s, const char* __accept) __attribute__ ((__pure__)) ;
char* strpbrk(const char* __s, const char* __accept) __attribute__ ((__pure__)) ;
char* strstr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
char* strtok(char* __restrict __s, const char* __restrict __delim);
char* __strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr);
char* strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr);
char* strcasestr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
void* memmem(const void* __haystack, unsigned long  __haystacklen  , const void* __needle, unsigned long  __needlelen  ) __attribute__ ((__pure__)) 
    
    ;
void* __mempcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
void* mempcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
unsigned long  strlen(const char* __s) __attribute__ ((__pure__)) ;
unsigned long  strnlen(const char* __string, unsigned long  __maxlen  ) __attribute__ ((__pure__)) ;
char* strerror(int __errnum);
char* strerror_r(int __errnum, char* __buf, unsigned long  __buflen  );
const char* strerrordesc_np(int __err);
const char* strerrorname_np(int __err);
char* strerror_l(int __errnum, struct __locale_struct*  __l  );
int bcmp(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void bcopy(const void* __src, void* __dest, unsigned long  __n  );
void bzero(void* __s, unsigned long  __n  );
char* index(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* rindex(const char* __s, int __c) __attribute__ ((__pure__)) ;
int ffs(int __i) __attribute__ ((__const__));
int ffsl(long  int __l) __attribute__ ((__const__));
int ffsll(long long int __ll) __attribute__ ((__const__));
int strcasecmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncasecmp(const char* __s1, const char* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct*  __loc  ) __attribute__ ((__pure__)) ;
int strncasecmp_l(const char* __s1, const char* __s2, unsigned long  __n  , struct __locale_struct*  __loc  ) __attribute__ ((__pure__)) ;
void explicit_bzero(void* __s, unsigned long  __n  );
char* strsep(char** __restrict __stringp, const char* __restrict __delim);
char* strsignal(int __sig);
const char* sigabbrev_np(int __sig);
const char* sigdescr_np(int __sig);
char* __stpcpy(char* __restrict __dest, const char* __restrict __src);
char* stpcpy(char* __restrict __dest, const char* __restrict __src);
char* __stpncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
char* stpncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
unsigned long  strlcpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
unsigned long  strlcat(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strverscmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
char* strfry(char* __string);
void* memfrob(void* __s, unsigned long  __n  );
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
int*  wcsncpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
unsigned long  wcslcpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
unsigned long  wcslcat(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
int*  wcscat(int* __restrict  __dest  , const int* __restrict  __src  );
int*  wcsncat(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
int wcscmp(const int*  __s1  , const int*  __s2  ) __attribute__ ((__pure__)) ;
int wcsncmp(const int*  __s1  , const int*  __s2  , unsigned long  __n  ) __attribute__ ((__pure__)) ;
int wcscasecmp(const int*  __s1  , const int*  __s2  );
int wcsncasecmp(const int*  __s1  , const int*  __s2  , unsigned long  __n  );
int wcscasecmp_l(const int*  __s1  , const int*  __s2  , struct __locale_struct*  __loc  );
int wcsncasecmp_l(const int*  __s1  , const int*  __s2  , unsigned long  __n  , struct __locale_struct*  __loc  );
int wcscoll(const int*  __s1  , const int*  __s2  );
unsigned long  wcsxfrm(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  __n  );
int wcscoll_l(const int*  __s1  , const int*  __s2  , struct __locale_struct*  __loc  );
unsigned long  wcsxfrm_l(int*  __s1  , const int*  __s2  , unsigned long  __n  , struct __locale_struct*  __loc  );
int*  wcsdup(const int*  __s  ) __attribute__ ((__malloc__)) ;
int*  wcschr(const int*  __wcs  , int  __wc  ) __attribute__ ((__pure__));
int*  wcsrchr(const int*  __wcs  , int  __wc  ) __attribute__ ((__pure__));
int*  wcschrnul(const int*  __s  , int  __wc  ) __attribute__ ((__pure__));
unsigned long  wcscspn(const int*  __wcs  , const int*  __reject  ) __attribute__ ((__pure__));
unsigned long  wcsspn(const int*  __wcs  , const int*  __accept  ) __attribute__ ((__pure__));
int*  wcspbrk(const int*  __wcs  , const int*  __accept  ) __attribute__ ((__pure__));
int*  wcsstr(const int*  __haystack  , const int*  __needle  ) __attribute__ ((__pure__));
int*  wcstok(int* __restrict  __s  , const int* __restrict  __delim  , int** __restrict  __ptr  );
unsigned long  wcslen(const int*  __s  ) __attribute__ ((__pure__));
int*  wcswcs(const int*  __haystack  , const int*  __needle  ) __attribute__ ((__pure__));
unsigned long  wcsnlen(const int*  __s  , unsigned long  __maxlen  ) __attribute__ ((__pure__));
int*  wmemchr(const int*  __s  , int  __c  , unsigned long  __n  ) __attribute__ ((__pure__));
int wmemcmp(const int*  __s1  , const int*  __s2  , unsigned long  __n  ) __attribute__ ((__pure__));
int*  wmemcpy(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  __n  );
int*  wmemmove(int*  __s1  , const int*  __s2  , unsigned long  __n  );
int*  wmemset(int*  __s  , int  __c  , unsigned long  __n  );
int*  wmempcpy(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  __n  );
unsigned int  btowc(int __c);
int wctob(unsigned int  __c  );
int mbsinit(const struct anonymous_typeX1*  __ps  ) __attribute__ ((__pure__));
unsigned long  mbrtowc(int* __restrict  __pwc  , const char* __restrict __s, unsigned long  __n  , struct anonymous_typeX1* __restrict  __p  );
unsigned long  wcrtomb(char* __restrict __s, int  __wc  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  __mbrlen(const char* __restrict __s, unsigned long  __n  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  mbrlen(const char* __restrict __s, unsigned long  __n  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  mbsrtowcs(int* __restrict  __dst  , const char** __restrict __src, unsigned long  __len  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  wcsrtombs(char* __restrict __dst, const int** __restrict  __src  , unsigned long  __len  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  mbsnrtowcs(int* __restrict  __dst  , const char** __restrict __src, unsigned long  __nmc  , unsigned long  __len  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  wcsnrtombs(char* __restrict __dst, const int** __restrict  __src  , unsigned long  __nwc  , unsigned long  __len  , struct anonymous_typeX1* __restrict  __ps  );
int wcwidth(int  __c  );
int wcswidth(const int*  __s  , unsigned long  __n  );
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
int*  wcpncpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
struct _IO_FILE*  open_wmemstream(int**  __bufloc  , unsigned long*  __sizeloc  ) __attribute__ ((__malloc__)) ;
int fwide(struct _IO_FILE*  __fp  , int __mode);
int fwprintf(struct _IO_FILE* __restrict  __stream  , const int* __restrict  __format  , ...);
int wprintf(const int* __restrict  __format  , ...);
int swprintf(int* __restrict  __s  , unsigned long  __n  , const int* __restrict  __format  , ...);
int vfwprintf(struct _IO_FILE* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int vwprintf(const int* __restrict  __format  , __builtin_va_list  __arg  );
int vswprintf(int* __restrict  __s  , unsigned long  __n  , const int* __restrict  __format  , __builtin_va_list  __arg  );
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
unsigned long  wcsftime(int* __restrict  __s  , unsigned long  __maxsize  , const int* __restrict  __format  , const struct tm* __restrict  __tp  );
unsigned long  wcsftime_l(int* __restrict  __s  , unsigned long  __maxsize  , const int* __restrict  __format  , const struct tm* __restrict  __tp  , struct __locale_struct*  __loc  );
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
unsigned long  xwcslen(const int*  wstr  );
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
struct sNode* create_buffer_node(struct buffer*  value  , unsigned long  size  , struct sInfo*  info  );
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
int main(int argc, char** argv);
_Bool neo_frame_is_alive(unsigned long  int frame_id);
void stackframe();
void stackframe2(void* mem);
_Bool die(const char* msg, char* sname, int sline);
void come_memleak_checker();
void* alloc_from_pages(unsigned long  size  );
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  compiletime_size  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name);
char* come_dynamic_typeof(void* mem);
unsigned long  dynamic_sizeof(void* mem);
void* come_calloc(unsigned long  count  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name);
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
struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  size  );
void buffer_finalize(struct buffer*  self  );
struct buffer*  buffer_clone(struct buffer*  self  );
_Bool buffer_equals(struct buffer*  left  , struct buffer*  right  );
int buffer_length(struct buffer*  self  );
void buffer_reset(struct buffer*  self  );
void buffer_trim(struct buffer*  self  , int len);
struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  size  );
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
struct buffer*  chara_to_buffer(char* self, unsigned long  len  );
struct buffer*  charpa_to_buffer(char** self, unsigned long  len  );
struct buffer*  shorta_to_buffer(short* self, unsigned long  len  );
struct buffer*  inta_to_buffer(int* self, unsigned long  len  );
struct buffer*  longa_to_buffer(long* self, unsigned long  len  );
struct buffer*  floata_to_buffer(float* self, unsigned long  len  );
struct buffer*  doublea_to_buffer(double* self, unsigned long  len  );
char*  buffer_printable(struct buffer*  self  );
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$* chara_to_list(char* self, unsigned long  len  );
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1char$p* charpa_to_list(char** self, unsigned long  len  );
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1short$* shorta_to_list(short* self, unsigned long  len  );
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1int$* inta_to_list(int* self, unsigned long  len  );
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1long$* longa_to_list(long* self, unsigned long  len  );
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1float$* floata_to_list(float* self, unsigned long  len  );
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct list$1double$* doublea_to_list(double* self, unsigned long  len  );
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  self  , unsigned long  right  );
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
_Bool charpa_contained(const char* self[], unsigned long  len  , const char* str);
unsigned long  shorta_length(short* self, unsigned long  len  );
unsigned long  inta_length(int* self, unsigned long  len  );
unsigned long  longa_length(long* self, unsigned long  len  );
unsigned long  floata_length(float* self, unsigned long  len  );
unsigned long  doublea_length(double* self, unsigned long  len  );
unsigned int _Bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  value  );
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
unsigned long  size_t_clone(unsigned long  self  );
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
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
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
char*  size_t_to_string(unsigned long  self  );
char*  float_to_string(float self);
char*  double_to_string(double self);
char*  string_to_string(char* self);
char*  charp_to_string(const char* self);
int _Bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  left  , unsigned long  right  );
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
static struct Result$1_IO_FILE$p* Result$1_IO_FILE$p_None(struct Result$1_IO_FILE$p* self);
static void Result$1_IO_FILE$p$p_finalize(struct Result$1_IO_FILE$p* self);
static struct Result$1_IO_FILE$p* Result$1_IO_FILE$p_Some(struct Result$1_IO_FILE$p* self, struct _IO_FILE*  v1  );
struct Result$1_IO_FILE$p* xfopen(const char* file_name, const char* mode);
static struct Result$1buffer$ph* Result$1buffer$ph_None(struct Result$1buffer$ph* self);
static void Result$1buffer$ph$p_finalize(struct Result$1buffer$ph* self);
static struct Result$1buffer$ph* Result$1buffer$ph_Some(struct Result$1buffer$ph* self, struct buffer*  v1  );
struct Result$1buffer$ph* FILE_fread(struct _IO_FILE*  f  );
static struct Result$1int$* Result$1int$_None(struct Result$1int$* self);
static void Result$1int$$p_finalize(struct Result$1int$* self);
static struct Result$1int$* Result$1int$_Some(struct Result$1int$* self, int v1);
struct Result$1int$* FILE_fwrite(struct _IO_FILE*  f  , const char* str);
struct Result$1int$* FILE_fclose(struct _IO_FILE*  f  );
struct Result$1_IO_FILE$p* FILE_fprintf(struct _IO_FILE*  f  , const char* msg, ...);
static struct Result$1list$1char$ph$ph* Result$1list$1char$ph$ph_None(struct Result$1list$1char$ph$ph* self);
static void Result$1list$1char$ph$ph$p_finalize(struct Result$1list$1char$ph$ph* self);
static struct Result$1list$1char$ph$ph* Result$1list$1char$ph$ph_Some(struct Result$1list$1char$ph$ph* self, struct list$1char$ph* v1);
static void list$1char$ph_finalize(struct list$1char$ph* self);
struct Result$1list$1char$ph$ph* FILE_readlines(struct _IO_FILE*  f  );
_Bool xiswalpha(int  c  );
_Bool xiswblank(int  c  );
_Bool xiswdigit(int  c  );
_Bool xiswalnum(int  c  );
_Bool xiswascii(int  c  );
int string_index(char* str, const char* search_str, int default_value);
int charp_index(const char* str, const char* search_str, int default_value);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sClass_finalize(struct sClass* self);
struct sClass* sClass_initialize(struct sClass* self, char*  name  , _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, _Bool typename, struct sInfo*  info  , _Bool iter_);
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  item  , _Bool by_pointer);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static void map$2char$phsClass$ph_remove_ordered_entry(struct map$2char$phsClass$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phsClass$ph_key_position(struct map$2char$phsClass$ph* self, char*  key  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1int$* list$1int$_initialize(struct list$1int$* self);
static void list$1int$_finalize(struct list$1int$* self);
struct sType* sType_initialize(struct sType* self, char*  name  , _Bool heap, struct sInfo*  info  , _Bool unsigned_, int pointer_num_);
static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
static struct sType*  sType_clone(struct sType*  self  );
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  );
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1int$* list$1int$$p_clone(struct list$1int$* self);
static struct list$1int$* list$1int$_add(struct list$1int$* self, int item);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  );
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static void sBlock_finalize(struct sBlock*  self  );
static void sFun_finalize(struct sFun* self);
struct sFun* sFun_initialize(struct sFun* self, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock*  block  , _Bool static_, struct sInfo*  info  , _Bool inline_, _Bool uniq_, char*  attribute  , char*  fun_attribute  , _Bool const_fun, char*  text_block  , char*  generics_sname  , int generics_sline, _Bool immutable_, char*  asm_fun  );
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType*  impl_type  , struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char*  block  , struct sInfo*  info  , char*  generics_sname  , int generics_sline, _Bool const_fun);
static void CVALUE_finalize(struct CVALUE* self);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static void sModule_finalize(struct sModule* self);
struct sModule* sModule_initialize(struct sModule* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable*  parent  );
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo*  info  );
int sNodeBase_sline(struct sNodeBase* self, struct sInfo*  info  );
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo*  info  );
_Bool sNodeBase_terminated(struct sNodeBase* self);
char*  sNodeBase_sname(struct sNodeBase* self, struct sInfo*  info  );
struct sNode* sNodeBase_left_value(struct sNodeBase* self);
static void sCurrentNode_finalize(struct sCurrentNode* self);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo*  info  );
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo*  info  );
char*  sCurrentNode_sname(struct sCurrentNode* self, struct sInfo*  info  );
char*  sCurrentNode_kind(struct sCurrentNode* self);
static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar*  map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  );
static struct sVar*  map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  );
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char*  v1  , struct sType*  v2  );
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo*  info  );
static void sNothingNode_finalize(struct sNothingNode* self);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo*  info  );
_Bool sNothingNode_terminated(struct sNothingNode* self);
char*  sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo*  info  );
static void sNullChecker_finalize(struct sNullChecker* self);
struct sNullChecker* sNullChecker_initialize(struct sNullChecker* self, struct sNode* value, struct sInfo*  info  );
char*  sNullChecker_kind(struct sNullChecker* self);
_Bool sNullChecker_compile(struct sNullChecker* self, struct sInfo*  info  );
static void sHeapChecker_finalize(struct sHeapChecker* self);
struct sHeapChecker* sHeapChecker_initialize(struct sHeapChecker* self, struct sNode* value, struct sInfo*  info  );
char*  sHeapChecker_kind(struct sHeapChecker* self);
_Bool sHeapChecker_compile(struct sHeapChecker* self, struct sInfo*  info  );
static void sFunNode_finalize(struct sFunNode* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun*  fun  , struct sInfo*  info  );
char*  sFunNode_kind(struct sFunNode* self);
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo*  info  );
// uniq global variable
struct neo_frame*  neo_current_frame  =(void*)0;

unsigned long  int neo_frame_id=0;

struct sMemHeader*  gAllocMem  =(void*)0;

struct sMemHeader*  gFreeMem  =(void*)0;

int gNumAlloc=0;

int gNumFree=0;

// inline function
static inline unsigned short int  __bswap_16(unsigned short int  __bsx  )
{
        return ((unsigned short int )((((__bsx)>>8)&0xff)|(((__bsx)&0xff)<<8)));
}
static inline unsigned int  __bswap_32(unsigned int  __bsx  )
{
        return ((((__bsx)&0xff000000u)>>24)|(((__bsx)&0x00ff0000u)>>8)|(((__bsx)&0x0000ff00u)<<8)|(((__bsx)&0x000000ffu)<<24));
}
static inline unsigned long  int  __bswap_64(unsigned long  int  __bsx  )
{
        return ((((__bsx)&0xff00000000000000ull)>>56)|(((__bsx)&0x00ff000000000000ull)>>40)|(((__bsx)&0x0000ff0000000000ull)>>24)|(((__bsx)&0x000000ff00000000ull)>>8)|(((__bsx)&0x00000000ff000000ull)<<8)|(((__bsx)&0x0000000000ff0000ull)<<24)|(((__bsx)&0x000000000000ff00ull)<<40)|(((__bsx)&0x00000000000000ffull)<<56));
}
static inline unsigned short int  __uint16_identity(unsigned short int  __x  )
{
        return __x;
}
static inline unsigned int  __uint32_identity(unsigned int  __x  )
{
        return __x;
}
static inline unsigned long  int  __uint64_identity(unsigned long  int  __x  )
{
        return __x;
}

// body function
int main(int argc, char** argv)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "main"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int __result_obj__0;
    setlocale(6,"");
        __result_obj__0 = come_main(argc,argv);
    neo_current_frame = fr.prev;
    come_memleak_checker();
    return __result_obj__0;
}

_Bool neo_frame_is_alive(unsigned long  int frame_id)
{
    struct neo_frame*  f  ;
    memset(&f, 0, sizeof(f));
    f=neo_current_frame;
    while(f) {
        if(f->frame_id==frame_id) {
                        return (_Bool)1;
        }
        f=f->prev;
    }
        return (_Bool)0;
}

void stackframe()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct neo_frame*  f  ;
    char* fun_name;
    memset(&f, 0, sizeof(f));
    memset(&fun_name, 0, sizeof(fun_name));
    f=neo_current_frame;
    while(f) {
        fun_name=f->fun_name;
        printf("%s\n",fun_name);
        f=f->prev;
    }
    neo_current_frame = fr.prev;
}

void stackframe2(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe2"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct neo_frame*  f  ;
    char* fun_name;
    memset(&it, 0, sizeof(it));
    memset(&f, 0, sizeof(f));
    memset(&fun_name, 0, sizeof(fun_name));
    if(come_is_alive(mem)&&mem) {
        it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long )-sizeof(struct sMemHeader ));
        printf("allocated at %s %d #%d. type is %s.\n",it->sname,it->sline,it->id,it->class_name);
    }
    f=neo_current_frame;
    while(f) {
        fun_name=f->fun_name;
        printf("%s\n",fun_name);
        f=f->prev;
    }
    neo_current_frame = fr.prev;
}

_Bool die(const char* msg, char* sname, int sline)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "die"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    puts(((char* )(__right_value6=charp_operator_add(((char*)(__right_value5=xsprintf("\%s \%s : ",((char* )(__right_value3=charp_to_string(sname))),((char* )(__right_value4=int_to_string(sline)))))),msg))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 227, 1));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 227, 2));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 227, 3));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 227, 4));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 227, 5));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 227, 6));
    stackframe();
    exit(4);
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

void come_memleak_checker()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_memleak_checker"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    int n;
    _Bool flag;
    int i;
    memset(&it, 0, sizeof(it));
    memset(&n, 0, sizeof(n));
    memset(&flag, 0, sizeof(flag));
    memset(&i, 0, sizeof(i));
    it=gAllocMem;
    n=0;
    while(it) {
        n++;
        flag=(_Bool)0;
        printf("#%d ",n);
        if(it->class_name) {
            printf("%p (%s) %s %d: ",(char*)it+sizeof(struct sMemHeader )+sizeof(unsigned long )+sizeof(unsigned long ),it->class_name,it->sname,it->sline);
        }
        for(i=0        ;i<8;i++){
            if((*({ long long __neo_array_index1_0 = (long long)(i); if(__neo_array_index1_0 < 0 || __neo_array_index1_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &it->fun_name[__neo_array_index1_0]; }))) {
                printf("%s, ",(*({ long long __neo_array_index2_0 = (long long)(i); if(__neo_array_index2_0 < 0 || __neo_array_index2_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &it->fun_name[__neo_array_index2_0]; })));
                flag=(_Bool)1;
            }
        }
        if(flag) {
            puts("");
        }
        it=it->next;
    }
    if(n>0) {
        printf("%d memory leaks. %d alloc, %d free.\n",n,gNumAlloc,gNumFree);
    }
    neo_current_frame = fr.prev;
}

void* alloc_from_pages(unsigned long  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "alloc_from_pages"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct sMemHeader*  it_prev  ;
    void* __result_obj__0;
    struct sMemHeader*  it_0  ;
    memset(&it, 0, sizeof(it));
    memset(&it_prev, 0, sizeof(it_prev));
    memset(&it_0, 0, sizeof(it_0));
    it=gFreeMem;
    it_prev=((void*)0);
    while(it) {
        if(size<=it->alloc_size) {
            if(it_prev==((void*)0)) {
                gFreeMem=((void*)0);
            }
            else {
                it_prev->free_next=it->free_next;
            }
            memset(it,0,size);
                        __result_obj__0 = it;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        it_prev=it;
        it=it->free_next;
    }
    it_0=(struct sMemHeader* )calloc(1,size);
    it_0->alloc_size=size;
        __result_obj__0 = it_0;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_free_mem_of_heap_pool(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_free_mem_of_heap_pool"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct sMemHeader*  prev_it  ;
    struct sMemHeader*  next_it  ;
    unsigned long  size  ;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&next_it, 0, sizeof(next_it));
    memset(&size, 0, sizeof(size));
    if(mem) {
        it=(struct sMemHeader* )((char*)mem-sizeof(struct sMemHeader ));
        if(it->allocated!=177783) {
                        neo_current_frame = fr.prev;
            return;
        }
        it->allocated=0;
        prev_it=it->prev;
        next_it=it->next;
        if(gAllocMem==it) {
            gAllocMem=next_it;
            if(gAllocMem) {
                gAllocMem->prev=((void*)0);
            }
        }
        else {
            if(prev_it) {
                prev_it->next=next_it;
            }
            if(next_it) {
                next_it->prev=prev_it;
            }
        }
        size=it->size;
        it->free_next=gFreeMem;
        gFreeMem=it;
        it->alive=0;
        gNumFree++;
    }
    neo_current_frame = fr.prev;
}

void* come_alloc_mem_from_heap_pool(unsigned long  compiletime_size  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_alloc_mem_from_heap_pool"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  size2  ;
    void* result;
    struct sMemHeader*  it  ;
    int n;
    struct neo_frame*  f  ;
    char* fun_name;
    void* __result_obj__0;
    memset(&size2, 0, sizeof(size2));
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    memset(&n, 0, sizeof(n));
    memset(&f, 0, sizeof(f));
    memset(&fun_name, 0, sizeof(fun_name));
    size2=size+sizeof(struct sMemHeader );
    size2=(size2+7&~0x7);
    result=alloc_from_pages(size2);
    it=result;
    it->allocated=177783;
    it->compiletime_size=compiletime_size;
    it->size=size2;
    it->free_next=((void*)0);
    it->alive=1;
    n=0;
    f=neo_current_frame;
    while(f&&n<8) {
        fun_name=f->fun_name;
        ({ long long __neo_array_index3_0 = (long long)(n); if(__neo_array_index3_0 < 0 || __neo_array_index3_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } it->fun_name[__neo_array_index3_0] = fun_name; });
        n++;
        f=f->prev;
    }
    it->next=gAllocMem;
    it->prev=((void*)0);
    it->class_name=class_name;
    it->sname=sname;
    it->sline=sline;
    it->id=id;
    if(gAllocMem) {
        gAllocMem->prev=it;
    }
    gAllocMem=it;
    gNumAlloc++;
        __result_obj__0 = (char*)result+sizeof(struct sMemHeader );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* come_dynamic_typeof(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_dynamic_typeof"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    char* __result_obj__0;
    memset(&it, 0, sizeof(it));
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe2(mem);
        exit(3);
    }
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long )-sizeof(struct sMemHeader ));
    if(it->allocated!=177783) {
        printf("invalid heap object(%p)(1)\n",it);
        stackframe2(mem);
        exit(2);
    }
        __result_obj__0 = (char*)it->class_name;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

unsigned long  dynamic_sizeof(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "dynamic_sizeof"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    unsigned long  size  ;
    memset(&it, 0, sizeof(it));
    memset(&size, 0, sizeof(size));
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe2(mem);
        exit(3);
    }
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long )-sizeof(struct sMemHeader ));
    if(it->allocated!=177783) {
        printf("invalid heap object(%p)(1)\n",it);
        stackframe2(mem);
        exit(2);
    }
    size=it->compiletime_size;
        neo_current_frame = fr.prev;
    return size;
    neo_current_frame = fr.prev;
}

void* come_calloc(unsigned long  count  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_calloc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* mem;
    unsigned long*  ref_count  ;
    unsigned long*  size2  ;
    void* __result_obj__0;
    memset(&mem, 0, sizeof(mem));
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&size2, 0, sizeof(size2));
    mem=come_alloc_mem_from_heap_pool(count*size,sizeof(unsigned long )+sizeof(unsigned long )+count*size,sname,sline,id,class_name);
    ref_count=(unsigned long* )mem;
    *ref_count=0;
    size2=(unsigned long* )(mem+sizeof(unsigned long ));
    *size2=size*count+sizeof(unsigned long )+sizeof(unsigned long );
        __result_obj__0 = mem+sizeof(unsigned long )+sizeof(unsigned long );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool come_is_alive(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_is_alive"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    memset(&it, 0, sizeof(it));
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long )-sizeof(struct sMemHeader ));
        neo_current_frame = fr.prev;
    return it->alive;
    neo_current_frame = fr.prev;
}

void come_free(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_free"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe2(mem);
        exit(3);
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    come_free_mem_of_heap_pool((char*)ref_count);
    neo_current_frame = fr.prev;
}

void* come_memdup(void* block, char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_memdup"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    char* mem;
    unsigned long*  size_p  ;
    unsigned long  size  ;
    void* result;
    memset(&mem, 0, sizeof(mem));
    memset(&size_p, 0, sizeof(size_p));
    memset(&size, 0, sizeof(size));
    memset(&result, 0, sizeof(result));
    if(block==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(block)) {
        puts(((char*)(__right_value3=xsprintf("invalid heap object. \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 514, 7));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 514, 8));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 514, 9));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 514, 10));
        stackframe2(block);
        exit(3);
    }
    mem=(char*)block-sizeof(unsigned long )-sizeof(unsigned long );
    size_p=(unsigned long* )(mem+sizeof(unsigned long ));
    size=*size_p-sizeof(unsigned long )-sizeof(unsigned long );
    result=come_calloc(1,size,sname,sline,id,class_name);
    memcpy(result,block,size);
        __result_obj__0 = result;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_increment_ref_count(void* mem, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_increment_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    unsigned long*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(mem)) {
        puts(((char*)(__right_value3=xsprintf("invalid heap object \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 540, 11));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 540, 12));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 540, 13));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 540, 14));
        stackframe2(mem);
        exit(3);
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    (*ref_count)++;
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_print_ref_count(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_print_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    unsigned long*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe();
        exit(3);
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    printf("ref_count %ld\n",*ref_count);
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int come_get_ref_count(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_get_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe();
        exit(3);
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
        neo_current_frame = fr.prev;
    return *ref_count;
    neo_current_frame = fr.prev;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_decrement_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    long* ref_count;
    long count;
    void (*finalizer)(void*);
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&count, 0, sizeof(count));
    memset(&finalizer, 0, sizeof(finalizer));
    if(result_obj) {
        if(mem==result_obj) {
                        __result_obj__0 = mem;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    if(mem==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(mem)) {
        puts(((char*)(__right_value3=xsprintf("invalid heap object \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 603, 15));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 603, 16));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 603, 17));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 603, 18));
        stackframe2(mem);
        exit(3);
    }
    ref_count=(long*)((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    if(!no_decrement) {
        (*ref_count)--;
    }
    count=*ref_count;
    if(!no_free&&count<=0) {
        if(protocol_obj&&protocol_fun) {
            finalizer=(void (*)(void*))protocol_fun;
            finalizer(protocol_obj);
            come_free(protocol_obj);
        }
        come_free(mem);
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_call_finalizer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void (*finalizer)(void*);
    void (*finalizer_1)(void*);
    void (*finalizer_2)(void*);
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    long* ref_count;
    long count;
    void (*finalizer_3)(void*);
    void (*finalizer_4)(void*);
    void (*finalizer_5)(void*);
    memset(&finalizer, 0, sizeof(finalizer));
    memset(&finalizer_1, 0, sizeof(finalizer_1));
    memset(&finalizer_2, 0, sizeof(finalizer_2));
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&count, 0, sizeof(count));
    memset(&finalizer_3, 0, sizeof(finalizer_3));
    memset(&finalizer_4, 0, sizeof(finalizer_4));
    memset(&finalizer_5, 0, sizeof(finalizer_5));
    if(result_obj) {
        if(mem==result_obj) {
                        neo_current_frame = fr.prev;
            return;
        }
    }
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj&&protocol_fun) {
                finalizer=(void (*)(void*))protocol_fun;
                finalizer(protocol_obj);
            }
            finalizer_1=(void (*)(void*))fun;
            finalizer_1(mem);
        }
        else {
            if(protocol_obj&&protocol_fun) {
                finalizer_2=(void (*)(void*))protocol_fun;
                finalizer_2(protocol_obj);
            }
        }
    }
    else {
        if(!come_is_alive(mem)) {
            puts(((char*)(__right_value3=xsprintf("invalid heap object. \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 660, 19));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 660, 20));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 660, 21));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 660, 22));
            stackframe2(mem);
            exit(3);
        }
        ref_count=(long*)((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
        if(!no_decrement) {
            (*ref_count)--;
        }
        count=*ref_count;
        if(!no_free&&count<=0) {
            if(mem) {
                if(fun) {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_3=(void (*)(void*))protocol_fun;
                        finalizer_3(protocol_obj);
                        come_free(protocol_obj);
                    }
                    if(fun) {
                        finalizer_4=(void (*)(void*))fun;
                        finalizer_4(mem);
                    }
                }
                else {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_5=(void (*)(void*))protocol_fun;
                        finalizer_5(protocol_obj);
                        come_free(protocol_obj);
                    }
                }
                come_free(mem);
            }
        }
    }
    neo_current_frame = fr.prev;
}

void xassert(const char* msg, _Bool test)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xassert"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    printf("%s...",msg);
    if(!test) {
        puts("false");
        stackframe();
        exit(2);
    }
    puts("ok");
    neo_current_frame = fr.prev;
}

void* come_null_checker(void* mem, const char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_null_checker"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    if(mem) {
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    puts(((char*)(__right_value3=xsprintf("null pointer exception \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 715, 23));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 715, 24));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 715, 25));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 715, 26));
    stackframe();
    exit(1);
    neo_current_frame = fr.prev;
}

void* come_heap_checker(void* mem, const char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_heap_checker"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    if(mem) {
        if(come_is_alive(mem)) {
                        __result_obj__0 = mem;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else {
            puts(((char*)(__right_value3=xsprintf("heap pointer exception \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 727, 27));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 727, 28));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 727, 29));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 727, 30));
            stackframe();
            exit(1);
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    puts(((char*)(__right_value3=xsprintf("null pointer exception \%s \%s \%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 733, 31));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 733, 32));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 733, 33));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 733, 34));
    stackframe();
    exit(1);
    neo_current_frame = fr.prev;
}

char*  __builtin_string(const char* str, char* sname, int sline)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__builtin_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "./neo-c.h", 741, 35);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 741, 36));
        return __result_obj__0;
    }
    len=strlen(str)+1;
    result=come_calloc(1,sizeof(char)*(len),sname,sline,0,"string");
    strncpy(result,str,len);
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 750, 37);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 750, 38));
    return __result_obj__0;
}

struct buffer*  buffer_initialize(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj1;
    struct buffer*  __result_obj__0  ;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./neo-c.h", 4942, 39, "char*"), "./neo-c.h", 4942, 41);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4942, 40);
    ((char*)self->buf)[0]=0;
    self->len=0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "./neo-c.h", 4946, 42);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4946, 43);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4946, 44);
    return __result_obj__0;
}

struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize_with_value"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj2;
    struct buffer*  __result_obj__0  ;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./neo-c.h", 4952, 45, "char*"), "./neo-c.h", 4952, 47);
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4952, 46);
    ((char*)self->buf)[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "./neo-c.h", 4958, 48);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4958, 49);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4958, 50);
    return __result_obj__0;
}

void buffer_finalize(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self&&self->buf) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4963, 51));
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_clone(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct buffer*  result  ;
    char* __dec_obj3;
    memset(&result, 0, sizeof(result));
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((void*)0), "./neo-c.h", 4969, 52);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4969, 53);
        return __result_obj__0;
    }
    result=(struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 4972, 54, "struct buffer* "), "./neo-c.h", 4972, 55);
    result->size=self->size;
    __right_value0 = (void*)0;
    __dec_obj3=result->buf,
    result->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./neo-c.h", 4975, 56, "char*"), "./neo-c.h", 4975, 58);
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4975, 57);
    result->len=self->len;
    memcpy(result->buf,self->buf,self->len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 4979, 59);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4979, 60);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4979, 61);
    return __result_obj__0;
}

_Bool buffer_equals(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    _Bool __result_obj__0;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
        __result_obj__0 = string_equals(((char* )(__right_value0=buffer_to_string(left))),((char* )(__right_value1=buffer_to_string(right))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 4991, 62));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 4991, 63));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_length(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

void buffer_reset(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    ((char*)self->buf)[0]=0;
    self->len=0;
    neo_current_frame = fr.prev;
}

void buffer_trim(struct buffer*  self  , int len)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_trim"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    self->len-=len;
    if(self->len>=0) {
        ((char*)self->buf)[self->len]=0;
    }
    else {
        self->len=0;
        ((char*)self->buf)[0]=0;
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj4;
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)||mem==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5033, 64, "char*"), "./neo-c.h", 5033, 65);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5037, 66, "char*"), "./neo-c.h", 5037, 68);
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5037, 67);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5043, 69));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_char(struct buffer*  self  , char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_char"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj5;
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len+1+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5057, 70, "char*"), "./neo-c.h", 5057, 71);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+10+1)*2;
        __right_value0 = (void*)0;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5061, 72, "char*"), "./neo-c.h", 5061, 74);
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5061, 73);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5067, 75));
    }
    ((char*)self->buf)[self->len]=c;
    self->len++;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_str(struct buffer*  self  , const char* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_str"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj6;
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)||mem==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    size=strlen(mem);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5084, 76, "char*"), "./neo-c.h", 5084, 77);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5087, 78, "char*"), "./neo-c.h", 5087, 80);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5087, 79);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5093, 81));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_format(struct buffer*  self  , const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_format"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    __builtin_va_list  args  ;
    char* result;
    int len;
    void* __right_value0 = (void*)0;
    char*  mem  ;
    int size;
    int old_len;
    char* old_buf;
    int new_size;
    char* __dec_obj7;
    memset(&result, 0, sizeof(result));
    memset(&len, 0, sizeof(len));
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)||msg==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&result,msg,args);
    __builtin_va_end(args);
    if(len<0) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=(char* )come_increment_ref_count(__builtin_string(result,"./neo-c.h",5155), "./neo-c.h", 5155, 82);
    size=strlen(mem);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        __right_value0 = (void*)0;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5160, 83, "char*"), "./neo-c.h", 5160, 84);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5163, 85, "char*"), "./neo-c.h", 5163, 87);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5163, 86);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5169, 88));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
    free(result);
        __result_obj__0 = self;
    (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5175, 89));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_nullterminated_str(struct buffer*  self  , const char* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_nullterminated_str"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj8;
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)||mem==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    size=strlen(mem)+1;
    if(self->len+size+1+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5187, 90, "char*"), "./neo-c.h", 5187, 91);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5190, 92, "char*"), "./neo-c.h", 5190, 94);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5190, 93);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5196, 95));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_int(struct buffer*  self  , int value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_int"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int* mem;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj9;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(int);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5214, 96, "char*"), "./neo-c.h", 5214, 97);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5217, 98, "char*"), "./neo-c.h", 5217, 100);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5217, 99);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5223, 101));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_long(struct buffer*  self  , long value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_long"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    long* mem;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj10;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(long);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5240, 102, "char*"), "./neo-c.h", 5240, 103);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5243, 104, "char*"), "./neo-c.h", 5243, 106);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5243, 105);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5249, 107));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_short(struct buffer*  self  , short value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_short"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    short* mem;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj11;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(short);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5267, 108, "char*"), "./neo-c.h", 5267, 109);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5270, 110, "char*"), "./neo-c.h", 5270, 112);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5270, 111);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5276, 113));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_alignment(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_alignment"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int len;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj12;
    int i;
    memset(&len, 0, sizeof(len));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    len=self->len;
    len=(len+3)&~3;
    if(len>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5294, 114, "char*"), "./neo-c.h", 5294, 115);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+1+1)*2;
        __right_value0 = (void*)0;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5297, 116, "char*"), "./neo-c.h", 5297, 118);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5297, 117);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5303, 119));
    }
    for(i=self->len    ;i<len;i++){
        ((char*)self->buf)[i]=0;
    }
    self->len=len;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_compare(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return strcmp(left->buf,right->buf);
    neo_current_frame = fr.prev;
}

struct buffer*  charp_to_buffer(const char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5329, 120, "struct buffer* "), "./neo-c.h", 5329, 121)), "./neo-c.h", 5329, 122);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5332, 123);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5332, 124);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5332, 125);
        return __result_obj__0;
    }
    buffer_append_str(result,self);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5337, 126);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5337, 127);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5337, 128);
    return __result_obj__0;
}

char*  buffer_to_string(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5343))), "./neo-c.h", 5343, 129);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5343, 130));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5343, 131));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self->buf,"./neo-c.h",5346))), "./neo-c.h", 5346, 132);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5346, 133));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5346, 134));
    return __result_obj__0;
}

unsigned char* buffer_head_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_head_pointer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned char* __result_obj__0;
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = (unsigned char*)self->buf;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  chara_to_buffer(char* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5359, 135, "struct buffer* "), "./neo-c.h", 5359, 136)), "./neo-c.h", 5359, 137);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5361, 138);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5361, 139);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5361, 140);
        return __result_obj__0;
    }
    buffer_append(result,self,sizeof(char)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5364, 141);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5364, 142);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5364, 143);
    return __result_obj__0;
}

struct buffer*  charpa_to_buffer(char** self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5369, 144, "struct buffer* "), "./neo-c.h", 5369, 145)), "./neo-c.h", 5369, 146);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5371, 147);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5371, 148);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5371, 149);
        return __result_obj__0;
    }
    for(i=0    ;i<len;i++){
        buffer_append(result,self[i],strlen(self[i]));
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5376, 150);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5376, 151);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5376, 152);
    return __result_obj__0;
}

struct buffer*  shorta_to_buffer(short* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5381, 153, "struct buffer* "), "./neo-c.h", 5381, 154)), "./neo-c.h", 5381, 155);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5383, 156);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5383, 157);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5383, 158);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(short)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5386, 159);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5386, 160);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5386, 161);
    return __result_obj__0;
}

struct buffer*  inta_to_buffer(int* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5391, 162, "struct buffer* "), "./neo-c.h", 5391, 163)), "./neo-c.h", 5391, 164);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5393, 165);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5393, 166);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5393, 167);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(int)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5396, 168);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5396, 169);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5396, 170);
    return __result_obj__0;
}

struct buffer*  longa_to_buffer(long* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5401, 171, "struct buffer* "), "./neo-c.h", 5401, 172)), "./neo-c.h", 5401, 173);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5403, 174);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5403, 175);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5403, 176);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(long)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5406, 177);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5406, 178);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5406, 179);
    return __result_obj__0;
}

struct buffer*  floata_to_buffer(float* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5411, 180, "struct buffer* "), "./neo-c.h", 5411, 181)), "./neo-c.h", 5411, 182);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5413, 183);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5413, 184);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5413, 185);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(float)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5416, 186);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5416, 187);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5416, 188);
    return __result_obj__0;
}

struct buffer*  doublea_to_buffer(double* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5421, 189, "struct buffer* "), "./neo-c.h", 5421, 190)), "./neo-c.h", 5421, 191);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5423, 192);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5423, 193);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5423, 194);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(double)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5426, 195);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5426, 196);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5426, 197);
    return __result_obj__0;
}

char*  buffer_printable(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_printable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int len;
    void* __right_value0 = (void*)0;
    char*  result  ;
    char*  __result_obj__0  ;
    int n;
    int i;
    unsigned char c;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    memset(&n, 0, sizeof(n));
    memset(&i, 0, sizeof(i));
    memset(&c, 0, sizeof(c));
    len=self->len;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), "./neo-c.h", 5432, 198, "char*"), "./neo-c.h", 5432, 199);
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 5435, 200);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5435, 201));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5435, 202));
        return __result_obj__0;
    }
    n=0;
    for(i=0    ;i<len;i++){
        c=self->buf[i];
        if((c>=0&&c<32)||c==127) {
            result[n++]=94;
            result[n++]=c+65-1;
        }
        else if(c>127) {
            result[n++]=63;
        }
        else {
            result[n++]=c;
        }
    }
    result[n]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 5458, 203);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5458, 204));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5458, 205));
    return __result_obj__0;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1char$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1char$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(self, "./neo-c.h", 1555, 213);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4, 215);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4, 216);
    return __result_obj__0;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$* litem;
    struct list_item$1char$* litem_6;
    struct list_item$1char$* litem_7;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_6, 0, sizeof(litem_6));
    memset(&litem_7, 0, sizeof(litem_7));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./neo-c.h", 1677, 207, "struct list_item$1char$*"))), "./neo-c.h", 1677, 208);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./neo-c.h", 1687, 209, "struct list_item$1char$*"))), "./neo-c.h", 1687, 210);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        litem_6->item=item;
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./neo-c.h", 1697, 211, "struct list_item$1char$*"))), "./neo-c.h", 1697, 212);
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        litem_7->item=item;
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$$p_finalize(struct list$1char$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1char$* it;
    struct list_item$1char$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1564, 214);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1char$* chara_to_list(char* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$* __result_obj__0;
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value1=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc(1, sizeof(struct list$1char$)*(1), "./neo-c.h", 5483, 206, "struct list$1char$*"), "./neo-c.h", 5483, 217),len,self))), "./neo-c.h", 5483, 218);
    come_call_finalizer(list$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5483, 219);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5483, 220);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1char$p* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1char$p_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(self, "./neo-c.h", 1555, 228);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 230);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 231);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$p* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$p* litem;
    struct list_item$1char$p* litem_8;
    struct list_item$1char$p* litem_9;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_8, 0, sizeof(litem_8));
    memset(&litem_9, 0, sizeof(litem_9));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./neo-c.h", 1677, 222, "struct list_item$1char$p*"))), "./neo-c.h", 1677, 223);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./neo-c.h", 1687, 224, "struct list_item$1char$p*"))), "./neo-c.h", 1687, 225);
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        litem_8->item=item;
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./neo-c.h", 1697, 226, "struct list_item$1char$p*"))), "./neo-c.h", 1697, 227);
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        litem_9->item=item;
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$p$p_finalize(struct list$1char$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1char$p* it;
    struct list_item$1char$p* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1564, 229);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$p$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1char$p* charpa_to_list(char** self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$p* __result_obj__0;
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value1=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./neo-c.h", 5488, 221, "struct list$1char$p*"), "./neo-c.h", 5488, 232),len,self))), "./neo-c.h", 5488, 233);
    come_call_finalizer(list$1char$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5488, 234);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5488, 235);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1short$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1short$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(self, "./neo-c.h", 1555, 243);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 245);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 246);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1short$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1short$* litem;
    struct list_item$1short$* litem_10;
    struct list_item$1short$* litem_11;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_10, 0, sizeof(litem_10));
    memset(&litem_11, 0, sizeof(litem_11));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./neo-c.h", 1677, 237, "struct list_item$1short$*"))), "./neo-c.h", 1677, 238);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_10=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./neo-c.h", 1687, 239, "struct list_item$1short$*"))), "./neo-c.h", 1687, 240);
        litem_10->prev=self->head;
        litem_10->next=((void*)0);
        litem_10->item=item;
        self->tail=litem_10;
        self->head->next=litem_10;
    }
    else {
        __right_value0 = (void*)0;
        litem_11=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./neo-c.h", 1697, 241, "struct list_item$1short$*"))), "./neo-c.h", 1697, 242);
        litem_11->prev=self->tail;
        litem_11->next=((void*)0);
        litem_11->item=item;
        self->tail->next=litem_11;
        self->tail=litem_11;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1short$$p_finalize(struct list$1short$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1short$* it;
    struct list_item$1short$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1564, 244);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1short$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1short$* shorta_to_list(short* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1short$* __result_obj__0;
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value1=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc(1, sizeof(struct list$1short$)*(1), "./neo-c.h", 5493, 236, "struct list$1short$*"), "./neo-c.h", 5493, 247),len,self))), "./neo-c.h", 5493, 248);
    come_call_finalizer(list$1short$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5493, 249);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5493, 250);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1int$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1int$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1555, 258);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 260);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 261);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_12;
    struct list_item$1int$* litem_13;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_12, 0, sizeof(litem_12));
    memset(&litem_13, 0, sizeof(litem_13));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1677, 252, "struct list_item$1int$*"))), "./neo-c.h", 1677, 253);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1687, 254, "struct list_item$1int$*"))), "./neo-c.h", 1687, 255);
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        litem_12->item=item;
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1697, 256, "struct list_item$1int$*"))), "./neo-c.h", 1697, 257);
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        litem_13->item=item;
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1564, 259);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1int$* inta_to_list(int* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __result_obj__0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 5498, 251, "struct list$1int$*"), "./neo-c.h", 5498, 262),len,self))), "./neo-c.h", 5498, 263);
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5498, 264);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5498, 265);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1long$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1long$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(self, "./neo-c.h", 1555, 273);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 275);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 276);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1long$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1long$* litem;
    struct list_item$1long$* litem_14;
    struct list_item$1long$* litem_15;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_14, 0, sizeof(litem_14));
    memset(&litem_15, 0, sizeof(litem_15));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./neo-c.h", 1677, 267, "struct list_item$1long$*"))), "./neo-c.h", 1677, 268);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_14=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./neo-c.h", 1687, 269, "struct list_item$1long$*"))), "./neo-c.h", 1687, 270);
        litem_14->prev=self->head;
        litem_14->next=((void*)0);
        litem_14->item=item;
        self->tail=litem_14;
        self->head->next=litem_14;
    }
    else {
        __right_value0 = (void*)0;
        litem_15=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./neo-c.h", 1697, 271, "struct list_item$1long$*"))), "./neo-c.h", 1697, 272);
        litem_15->prev=self->tail;
        litem_15->next=((void*)0);
        litem_15->item=item;
        self->tail->next=litem_15;
        self->tail=litem_15;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1long$$p_finalize(struct list$1long$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1long$* it;
    struct list_item$1long$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1564, 274);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1long$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1long$* longa_to_list(long* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1long$* __result_obj__0;
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value1=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc(1, sizeof(struct list$1long$)*(1), "./neo-c.h", 5503, 266, "struct list$1long$*"), "./neo-c.h", 5503, 277),len,self))), "./neo-c.h", 5503, 278);
    come_call_finalizer(list$1long$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5503, 279);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5503, 280);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1float$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1float$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(self, "./neo-c.h", 1555, 288);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 290);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 291);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1float$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1float$* litem;
    struct list_item$1float$* litem_16;
    struct list_item$1float$* litem_17;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_16, 0, sizeof(litem_16));
    memset(&litem_17, 0, sizeof(litem_17));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./neo-c.h", 1677, 282, "struct list_item$1float$*"))), "./neo-c.h", 1677, 283);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_16=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./neo-c.h", 1687, 284, "struct list_item$1float$*"))), "./neo-c.h", 1687, 285);
        litem_16->prev=self->head;
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head->next=litem_16;
    }
    else {
        __right_value0 = (void*)0;
        litem_17=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./neo-c.h", 1697, 286, "struct list_item$1float$*"))), "./neo-c.h", 1697, 287);
        litem_17->prev=self->tail;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail->next=litem_17;
        self->tail=litem_17;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1float$$p_finalize(struct list$1float$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1float$* it;
    struct list_item$1float$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1564, 289);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1float$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1float$* floata_to_list(float* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1float$* __result_obj__0;
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value1=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc(1, sizeof(struct list$1float$)*(1), "./neo-c.h", 5508, 281, "struct list$1float$*"), "./neo-c.h", 5508, 292),len,self))), "./neo-c.h", 5508, 293);
    come_call_finalizer(list$1float$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5508, 294);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5508, 295);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1double$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1double$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(self, "./neo-c.h", 1555, 303);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 305);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 306);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1double$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1double$* litem;
    struct list_item$1double$* litem_18;
    struct list_item$1double$* litem_19;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_18, 0, sizeof(litem_18));
    memset(&litem_19, 0, sizeof(litem_19));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./neo-c.h", 1677, 297, "struct list_item$1double$*"))), "./neo-c.h", 1677, 298);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_18=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./neo-c.h", 1687, 299, "struct list_item$1double$*"))), "./neo-c.h", 1687, 300);
        litem_18->prev=self->head;
        litem_18->next=((void*)0);
        litem_18->item=item;
        self->tail=litem_18;
        self->head->next=litem_18;
    }
    else {
        __right_value0 = (void*)0;
        litem_19=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./neo-c.h", 1697, 301, "struct list_item$1double$*"))), "./neo-c.h", 1697, 302);
        litem_19->prev=self->tail;
        litem_19->next=((void*)0);
        litem_19->item=item;
        self->tail->next=litem_19;
        self->tail=litem_19;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1double$$p_finalize(struct list$1double$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1double$* it;
    struct list_item$1double$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1564, 304);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1double$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1double$* doublea_to_list(double* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1double$* __result_obj__0;
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value1=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc(1, sizeof(struct list$1double$)*(1), "./neo-c.h", 5513, 296, "struct list$1double$*"), "./neo-c.h", 5513, 307),len,self))), "./neo-c.h", 5513, 308);
    come_call_finalizer(list$1double$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5513, 309);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5513, 310);
    return __result_obj__0;
}

_Bool _Bool_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool size_t_equals(unsigned long  self  , unsigned long  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool float_equals(float self, float right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool double_equals(double self, double right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_operator_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_operator_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_operator_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_operator_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool char_operator_not_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool short_operator_not_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool int_operator_not_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool long_operator_not_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool charp_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool string_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool voidp_equals(void* self, void* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Boolp_equals(_Bool* self, _Bool* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Boolp_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return *self==*right;
    neo_current_frame = fr.prev;
}

_Bool string_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool charp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool chara_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !charp_operator_equals(self,right);
    neo_current_frame = fr.prev;
}

_Bool string_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool charp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool chara_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

char*  charp_operator_add(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(self==((void*)0)||right==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5756))), "./neo-c.h", 5756, 311);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5756, 312));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5756, 313));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "./neo-c.h", 5760, 314, "char*"), "./neo-c.h", 5760, 315);
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 5765, 316);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5765, 317));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5765, 318));
    return __result_obj__0;
}

char*  string_operator_add(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(self==((void*)0)||right==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5771))), "./neo-c.h", 5771, 319);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5771, 320));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5771, 321));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "./neo-c.h", 5775, 322, "char*"), "./neo-c.h", 5775, 323);
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 5780, 324);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5780, 325));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5780, 326));
    return __result_obj__0;
}

char*  charp_operator_mult(const char* self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_mult"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int i;
    memset(&buf, 0, sizeof(buf));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5786))), "./neo-c.h", 5786, 327);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5786, 328));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5786, 329));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5788, 330, "struct buffer* "), "./neo-c.h", 5788, 331)), "./neo-c.h", 5788, 332);
    for(i=0    ;i<right;i++){
        buffer_append_str(buf,self);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "./neo-c.h", 5794, 333);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 5794, 334);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5794, 335));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5794, 336));
    return __result_obj__0;
}

char*  string_operator_mult(const char* self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_mult"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int i;
    memset(&buf, 0, sizeof(buf));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5800))), "./neo-c.h", 5800, 337);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5800, 338));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5800, 339));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5802, 340, "struct buffer* "), "./neo-c.h", 5802, 341)), "./neo-c.h", 5802, 342);
    for(i=0    ;i<right;i++){
        buffer_append_str(buf,self);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "./neo-c.h", 5808, 343);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 5808, 344);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5808, 345));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5808, 346));
    return __result_obj__0;
}

_Bool charpa_contained(const char* self[], unsigned long  len  , const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_contained"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool result;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    result=(_Bool)0;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return result;
    }
    for(i=0    ;i<len;i++){
        if(strncmp(self[i],str,strlen(self[i]))==0) {
            result=(_Bool)1;
            break;
        }
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned long  shorta_length(short* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  inta_length(int* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  longa_length(long* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  floata_length(float* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  doublea_length(double* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned int _Bool_get_hash_key(_Bool value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

unsigned int char_get_hash_key(char value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int short_get_hash_key(short int value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int int_get_hash_key(int value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int long_get_hash_key(long value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int size_t_get_hash_key(unsigned long  value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int float_get_hash_key(float value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int double_get_hash_key(double value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int charp_get_hash_key(const char* value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int result;
    memset(&result, 0, sizeof(result));
    if(value==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    result=0;
    const char* p=value;
    while(*p) {
        result+=(*p);
        p++;
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int string_get_hash_key(char* value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int result;
    char* p;
    memset(&result, 0, sizeof(result));
    memset(&p, 0, sizeof(p));
    if(value==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    result=0;
    p=value;
    while(*p) {
        result+=(*p);
        p++;
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int voidp_get_hash_key(void* value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

_Bool _Bool_clone(_Bool self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

char char_clone(char self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

short int short_clone(short self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

int int_clone(int self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long  int long_clone(long self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

unsigned long  size_t_clone(unsigned long  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

double double_clone(double self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

float float_clone(float self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

_Bool xisalpha(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisalpha"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xisblank(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisblank"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xisdigit(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisdigit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xisspace(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisspace"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==32||c==9||c==10||c==13||c==28||c==11;
    neo_current_frame = fr.prev;
}

_Bool xisalnum(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisalnum"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return xisalpha(c)||xisdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xisascii(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisascii"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    result=(c>=32&&c<=126);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xispunct(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xispunct"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
    neo_current_frame = fr.prev;
}

int string_length(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(str==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int charp_length(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(str==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int chara_length(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(str==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

char*  charp_reverse(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_reverse"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    int i;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6060))), "./neo-c.h", 6060, 347);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6060, 348));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6060, 349));
        return __result_obj__0;
    }
    len=strlen(str);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "./neo-c.h", 6063, 350, "char*"), "./neo-c.h", 6063, 351);
    for(i=0    ;i<len;i++){
        result[i]=str[len-i-1];
    }
    result[len]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 6071, 352);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6071, 353));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6071, 354));
    return __result_obj__0;
}

char*  string_operator_load_range_element(char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_load_range_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6077))), "./neo-c.h", 6077, 355);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6077, 356));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6077, 357));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "./neo-c.h", 6090, 358);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6090, 359));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6090, 360));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6090, 361));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6102))), "./neo-c.h", 6102, 362);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6102, 363));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6102, 364));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6106))), "./neo-c.h", 6106, 365);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6106, 366));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6106, 367));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./neo-c.h", 6109, 368, "char*"), "./neo-c.h", 6109, 369);
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 6114, 370);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6114, 371));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6114, 372));
    return __result_obj__0;
}

char*  charp_operator_load_range_element(char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_load_range_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6120))), "./neo-c.h", 6120, 373);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6120, 374));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6120, 375));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "./neo-c.h", 6133, 376);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6133, 377));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6133, 378));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6133, 379));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6145))), "./neo-c.h", 6145, 380);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6145, 381));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6145, 382));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6149))), "./neo-c.h", 6149, 383);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6149, 384));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6149, 385));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./neo-c.h", 6152, 386, "char*"), "./neo-c.h", 6152, 387);
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 6157, 388);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6157, 389));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6157, 390));
    return __result_obj__0;
}

char*  charp_substring(const char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_substring"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6163))), "./neo-c.h", 6163, 391);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6163, 392));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6163, 393));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "./neo-c.h", 6176, 394);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6176, 395));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6176, 396));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6176, 397));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6188))), "./neo-c.h", 6188, 398);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6188, 399));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6188, 400));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6192))), "./neo-c.h", 6192, 401);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6192, 402));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6192, 403));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./neo-c.h", 6195, 404, "char*"), "./neo-c.h", 6195, 405);
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 6200, 406);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6200, 407));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6200, 408));
    return __result_obj__0;
}

char*  xsprintf(const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __builtin_va_list  args  ;
    char* result;
    int len;
    char*  result2  ;
    memset(&result, 0, sizeof(result));
    memset(&len, 0, sizeof(len));
    memset(&result2, 0, sizeof(result2));
    if(msg==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6206))), "./neo-c.h", 6206, 409);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6206, 410));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6206, 411));
        return __result_obj__0;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&result,msg,args);
    __builtin_va_end(args);
    if(len<0) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6215))), "./neo-c.h", 6215, 412);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6215, 413));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6215, 414));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result2=(char* )come_increment_ref_count(__builtin_string(result,"./neo-c.h",6218), "./neo-c.h", 6218, 415);
    free(result);
        __result_obj__0 = (char* )come_increment_ref_count(result2, "./neo-c.h", 6222, 416);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6222, 417));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6222, 418));
    return __result_obj__0;
}

char*  charp_delete(char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_delete"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6228))), "./neo-c.h", 6228, 419);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6228, 420));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6228, 421));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head>=len) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"./neo-c.h",6234))), "./neo-c.h", 6234, 422);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6234, 423));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6234, 424));
        return __result_obj__0;
    }
    if(strcmp(str,"")==0) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"./neo-c.h",6238))), "./neo-c.h", 6238, 425);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6238, 426));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6238, 427));
        return __result_obj__0;
    }
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head<0) {
        head=0;
    }
    if(tail<0) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"./neo-c.h",6254))), "./neo-c.h", 6254, 428);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6254, 429));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6254, 430));
        return __result_obj__0;
    }
    if(tail>=len) {
        tail=len;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len-(tail-head)+1)), "./neo-c.h", 6261, 431, "char*"), "./neo-c.h", 6261, 432);
    memcpy(result,str,head);
    memcpy(result+head,str+tail,len-tail);
    result[len-(tail-head)]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 6268, 433);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6268, 434));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6268, 435));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1543, 437);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 440);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 441);
    return __result_obj__0;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1564, 439);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 438));
    }
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj13  ;
    struct list_item$1char$ph* litem_20;
    char*  __dec_obj14  ;
    struct list_item$1char$ph* litem_21;
    char*  __dec_obj15  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_20, 0, sizeof(litem_20));
    memset(&litem_21, 0, sizeof(litem_21));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1673, 452));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1677, 453, "struct list_item$1char$ph*"))), "./neo-c.h", 1677, 454);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj13=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1681, 456);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1681, 455);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_20=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1687, 457, "struct list_item$1char$ph*"))), "./neo-c.h", 1687, 458);
        litem_20->prev=self->head;
        litem_20->next=((void*)0);
        __dec_obj14=litem_20->item,
        litem_20->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1691, 460);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1691, 459);
        self->tail=litem_20;
        self->head->next=litem_20;
    }
    else {
        __right_value0 = (void*)0;
        litem_21=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1697, 461, "struct list_item$1char$ph*"))), "./neo-c.h", 1697, 462);
        litem_21->prev=self->tail;
        litem_21->next=((void*)0);
        __dec_obj15=litem_21->item,
        litem_21->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1701, 464);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1701, 463);
        self->tail->next=litem_21;
        self->tail=litem_21;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1709, 465));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct list$1char$ph* charp_split_char(char* self, char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_split_char"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct buffer*  str  ;
    int self_len;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&str, 0, sizeof(str));
    memset(&self_len, 0, sizeof(self_len));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 6274, 436, "struct list$1char$ph*"), "./neo-c.h", 6274, 442)))), "./neo-c.h", 6274, 443);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6274, 444);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6274, 445);
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 6277, 446, "struct list$1char$ph*"), "./neo-c.h", 6277, 447)), "./neo-c.h", 6277, 448);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    str=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 6279, 449, "struct buffer* "), "./neo-c.h", 6279, 450)), "./neo-c.h", 6279, 451);
    self_len=charp_length(self);
    for(i=0    ;i<self_len;i++){
        if(self[i]==c) {
            __right_value0 = (void*)0;
            list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"./neo-c.h",6284), "./neo-c.h", 6284, 466));
            buffer_reset(str);
        }
        else {
            buffer_append_char(str,self[i]);
        }
    }
    if(buffer_length(str)!=0) {
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"./neo-c.h",6292), "./neo-c.h", 6292, 467));
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 6295, 468);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6295, 469);
    come_call_finalizer(buffer_finalize, str, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 6295, 470);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6295, 471);
    return __result_obj__0;
}

char*  charp_xsprintf(char* self, const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_xsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "./neo-c.h", 6300, 472);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6300, 473));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6300, 474));
    return __result_obj__0;
}

char*  int_xsprintf(int self, const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_xsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "./neo-c.h", 6305, 475);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6305, 476));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6305, 477));
    return __result_obj__0;
}

char*  charp_printable(char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_printable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char*  result  ;
    int n;
    int i;
    char c;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    memset(&n, 0, sizeof(n));
    memset(&i, 0, sizeof(i));
    memset(&c, 0, sizeof(c));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6311))), "./neo-c.h", 6311, 478);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6311, 479));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6311, 480));
        return __result_obj__0;
    }
    len=charp_length(str);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), "./neo-c.h", 6314, 481, "char*"), "./neo-c.h", 6314, 482);
    n=0;
    for(i=0    ;i<len;i++){
        c=str[i];
        if((c>=0&&c<32)||c==127) {
            result[n++]=94;
            result[n++]=c+65-1;
        }
        else {
            result[n++]=c;
        }
    }
    result[n]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 6333, 483);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6333, 484));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6333, 485));
    return __result_obj__0;
}

char*  chara_printable(char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_printable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_printable(str))), "./neo-c.h", 6338, 486);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6338, 487));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6338, 488));
    return __result_obj__0;
}

char*  charp_sub_plain(char* self, char* str, char* replace)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_sub_plain"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    char* p;
    char* p2;
    memset(&result, 0, sizeof(result));
    memset(&p, 0, sizeof(p));
    memset(&p2, 0, sizeof(p2));
    if(self==((void*)0)||str==((void*)0)||replace==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c.h",6344))), "./neo-c.h", 6344, 489);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6344, 490));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6344, 491));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 6347, 492, "struct buffer* "), "./neo-c.h", 6347, 493)), "./neo-c.h", 6347, 494);
    p=self;
    while((_Bool)1) {
        p2=strstr(p,str);
        if(p2==((void*)0)) {
            p2=p;
            while(*p2) {
                p2++;
            }
            buffer_append(result,p,p2-p);
            break;
        }
        buffer_append(result,p,p2-p);
        buffer_append_str(result,replace);
        p=p2+strlen(str);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "./neo-c.h", 6369, 495);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 6369, 496);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6369, 497));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6369, 498));
    return __result_obj__0;
}

char*  xbasename(char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xbasename"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    memset(&p, 0, sizeof(p));
    if(path==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6378))), "./neo-c.h", 6378, 499);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6378, 500));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6378, 501));
        return __result_obj__0;
    }
    p=path+strlen(path);
    while(p>=path) {
        if(*p==47) {
            break;
        }
        else {
            p--;
        }
    }
    if(p<path) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"./neo-c.h",6392))), "./neo-c.h", 6392, 502);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6392, 503));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6392, 504));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"./neo-c.h",6395))), "./neo-c.h", 6395, 505);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6395, 506));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6395, 507));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6398))), "./neo-c.h", 6398, 508);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6398, 509));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6398, 510));
    return __result_obj__0;
}

char*  xnoextname(char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xnoextname"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  path2  ;
    char* p;
    memset(&path2, 0, sizeof(path2));
    memset(&p, 0, sizeof(p));
    if(path==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6404))), "./neo-c.h", 6404, 511);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6404, 512));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6404, 513));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    path2=(char* )come_increment_ref_count(xbasename(path), "./neo-c.h", 6406, 514);
    p=path2+strlen(path2);
    while(p>=path2) {
        if(*p==46) {
            break;
        }
        else {
            p--;
        }
    }
    if(p<path2) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path2,"./neo-c.h",6420))), "./neo-c.h", 6420, 515);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 6420, 516));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6420, 517));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6420, 518));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(path2,0,p-path2))), "./neo-c.h", 6423, 519);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 6423, 520));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6423, 521));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6423, 522));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6426))), "./neo-c.h", 6426, 523);
    (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 6426, 524));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6426, 525));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6426, 526));
    return __result_obj__0;
}

char*  xextname(char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xextname"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    memset(&p, 0, sizeof(p));
    if(path==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6432))), "./neo-c.h", 6432, 527);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6432, 528));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6432, 529));
        return __result_obj__0;
    }
    p=path+strlen(path);
    while(p>=path) {
        if(*p==46) {
            break;
        }
        else {
            p--;
        }
    }
    if(p<path) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"./neo-c.h",6446))), "./neo-c.h", 6446, 530);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6446, 531));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6446, 532));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"./neo-c.h",6449))), "./neo-c.h", 6449, 533);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6449, 534));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6449, 535));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6452))), "./neo-c.h", 6452, 536);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6452, 537));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6452, 538));
    return __result_obj__0;
}

char*  _Bool_to_string(_Bool self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("true","./neo-c.h",6471))), "./neo-c.h", 6471, 539);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6471, 540));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6471, 541));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("false","./neo-c.h",6474))), "./neo-c.h", 6474, 542);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6474, 543));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6474, 544));
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

char*  char_to_string(char self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%c",self))), "./neo-c.h", 6480, 545);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6480, 546));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6480, 547));
    return __result_obj__0;
}

char*  short_to_string(short self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "./neo-c.h", 6485, 548);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6485, 549));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6485, 550));
    return __result_obj__0;
}

char*  int_to_string(int self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "./neo-c.h", 6490, 551);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6490, 552));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6490, 553));
    return __result_obj__0;
}

char*  long_to_string(long self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "./neo-c.h", 6495, 554);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6495, 555));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6495, 556));
    return __result_obj__0;
}

char*  size_t_to_string(unsigned long  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "./neo-c.h", 6500, 557);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6500, 558));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6500, 559));
    return __result_obj__0;
}

char*  float_to_string(float self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%f",self))), "./neo-c.h", 6505, 560);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6505, 561));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6505, 562));
    return __result_obj__0;
}

char*  double_to_string(double self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%lf",self))), "./neo-c.h", 6510, 563);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6510, 564));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6510, 565));
    return __result_obj__0;
}

char*  string_to_string(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6516))), "./neo-c.h", 6516, 566);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6516, 567));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6516, 568));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c.h",6518))), "./neo-c.h", 6518, 569);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6518, 570));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6518, 571));
    return __result_obj__0;
}

char*  charp_to_string(const char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6524))), "./neo-c.h", 6524, 572);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6524, 573));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6524, 574));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c.h",6526))), "./neo-c.h", 6526, 575);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6526, 576));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6526, 577));
    return __result_obj__0;
}

int _Bool_compare(_Bool left, _Bool right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!left&&right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left&&right) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(!left&&!right) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int char_compare(char left, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int short_compare(short left, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int int_compare(int left, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int long_compare(long left, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int size_t_compare(unsigned long  left  , unsigned long  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int float_compare(float left, float right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int double_compare(double left, double right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int string_compare(char* left, char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

int charp_compare(char* left, char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

char*  charp_puts(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_puts"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6709))), "./neo-c.h", 6709, 578);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6709, 579));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6709, 580));
        return __result_obj__0;
    }
    puts(self);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c.h",6713))), "./neo-c.h", 6713, 581);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6713, 582));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6713, 583));
    return __result_obj__0;
}

char*  charp_print(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_print"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6719))), "./neo-c.h", 6719, 584);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6719, 585));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6719, 586));
        return __result_obj__0;
    }
    printf("%s",self);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c.h",6723))), "./neo-c.h", 6723, 587);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6723, 588));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6723, 589));
    return __result_obj__0;
}

char*  charp_printf(char* self, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* msg2;
    __builtin_va_list  args  ;
    memset(&msg2, 0, sizeof(msg2));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6751))), "./neo-c.h", 6751, 590);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6751, 591));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6751, 592));
        return __result_obj__0;
    }
    __builtin_va_start(args,self);
    vasprintf(&msg2,self,args);
    __builtin_va_end(args);
    printf("%s",msg2);
    free(msg2);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c.h",6764))), "./neo-c.h", 6764, 593);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6764, 594));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6764, 595));
    return __result_obj__0;
}

int int_printf(int self, char* msg)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return self;
    }
    printf(msg,self);
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long long_printf(long self, char* msg)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return self;
    }
    printf(msg,self);
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

void int_times(int self, void* parent, void (*block)(void*,int))
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_times"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    for(i=0    ;i<self;i++){
        block(parent,i);
    }
    neo_current_frame = fr.prev;
}

static struct Result$1_IO_FILE$p* Result$1_IO_FILE$p_None(struct Result$1_IO_FILE$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1_IO_FILE$p_None"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct Result$1_IO_FILE$p* __result_obj__0;
    self->tag=2;
        __result_obj__0 = (struct Result$1_IO_FILE$p*)come_increment_ref_count(self, "./neo-c.h", 887, 597);
    come_call_finalizer(Result$1_IO_FILE$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 887, 598);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1_IO_FILE$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 887, 599);
    return __result_obj__0;
}

static void Result$1_IO_FILE$p$p_finalize(struct Result$1_IO_FILE$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1_IO_FILE$p$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static struct Result$1_IO_FILE$p* Result$1_IO_FILE$p_Some(struct Result$1_IO_FILE$p* self, struct _IO_FILE*  v1  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1_IO_FILE$p_Some"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct Result$1_IO_FILE$p* __result_obj__0;
    self->tag=1;
    self->Some_value=v1;
        __result_obj__0 = (struct Result$1_IO_FILE$p*)come_increment_ref_count(self, "./neo-c.h", 887, 605);
    come_call_finalizer(Result$1_IO_FILE$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 887, 606);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1_IO_FILE$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 887, 607);
    return __result_obj__0;
}

struct Result$1_IO_FILE$p* xfopen(const char* file_name, const char* mode)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xfopen"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct _IO_FILE*  f  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct Result$1_IO_FILE$p* __result_obj__0;
    memset(&f, 0, sizeof(f));
    f=fopen(file_name,mode);
    if(f==((void*)0)) {
                __result_obj__0 = (struct Result$1_IO_FILE$p*)come_increment_ref_count(((struct Result$1_IO_FILE$p*)(__right_value1=Result$1_IO_FILE$p_None((struct Result$1_IO_FILE$p*)come_increment_ref_count((struct Result$1_IO_FILE$p*)come_calloc(1, sizeof(struct Result$1_IO_FILE$p)*(1), "./neo-c.h", 6805, 596, "struct Result$1_IO_FILE$p*"), "./neo-c.h", 6805, 600)))), "./neo-c.h", 6805, 601);
        come_call_finalizer(Result$1_IO_FILE$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6805, 602);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1_IO_FILE$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6805, 603);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct Result$1_IO_FILE$p*)come_increment_ref_count(((struct Result$1_IO_FILE$p*)(__right_value1=Result$1_IO_FILE$p_Some((struct Result$1_IO_FILE$p*)come_increment_ref_count((struct Result$1_IO_FILE$p*)come_calloc(1, sizeof(struct Result$1_IO_FILE$p)*(1), "./neo-c.h", 6808, 604, "struct Result$1_IO_FILE$p*"), "./neo-c.h", 6808, 608),f))), "./neo-c.h", 6808, 609);
    come_call_finalizer(Result$1_IO_FILE$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6808, 610);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1_IO_FILE$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6808, 611);
    return __result_obj__0;
}

static struct Result$1buffer$ph* Result$1buffer$ph_None(struct Result$1buffer$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1buffer$ph_None"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct Result$1buffer$ph* __result_obj__0;
    self->tag=2;
        __result_obj__0 = (struct Result$1buffer$ph*)come_increment_ref_count(self, "./neo-c.h", 887, 613);
    come_call_finalizer(Result$1buffer$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 887, 615);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1buffer$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 887, 616);
    return __result_obj__0;
}

static void Result$1buffer$ph$p_finalize(struct Result$1buffer$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1buffer$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->Some_value!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->Some_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Result$1buffer$ph$p_finalize}", 2, 614);
    }
        neo_current_frame = fr.prev;
}

static struct Result$1buffer$ph* Result$1buffer$ph_Some(struct Result$1buffer$ph* self, struct buffer*  v1  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1buffer$ph_Some"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __dec_obj16  ;
    struct Result$1buffer$ph* __result_obj__0;
    self->tag=1;
    __dec_obj16=self->Some_value,
    self->Some_value=(struct buffer* )come_increment_ref_count(v1, "./neo-c.h", 887, 632);
    come_call_finalizer(buffer_finalize, __dec_obj16,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 887, 631);
        __result_obj__0 = (struct Result$1buffer$ph*)come_increment_ref_count(self, "./neo-c.h", 887, 633);
    come_call_finalizer(Result$1buffer$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 887, 634);
    come_call_finalizer(buffer_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 887, 635);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1buffer$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 887, 636);
    return __result_obj__0;
}

struct Result$1buffer$ph* FILE_fread(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fread"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct Result$1buffer$ph* __result_obj__0;
    struct buffer*  buf  ;
    int size;
    memset(&buf, 0, sizeof(buf));
    memset(&size, 0, sizeof(size));
    if(f==((void*)0)) {
                __result_obj__0 = (struct Result$1buffer$ph*)come_increment_ref_count(((struct Result$1buffer$ph*)(__right_value1=Result$1buffer$ph_None((struct Result$1buffer$ph*)come_increment_ref_count((struct Result$1buffer$ph*)come_calloc(1, sizeof(struct Result$1buffer$ph)*(1), "./neo-c.h", 6813, 612, "struct Result$1buffer$ph*"), "./neo-c.h", 6813, 617)))), "./neo-c.h", 6813, 618);
        come_call_finalizer(Result$1buffer$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6813, 619);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1buffer$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6813, 620);
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 6815, 621, "struct buffer* "), "./neo-c.h", 6815, 622)), "./neo-c.h", 6815, 623);
    while(1) {
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        size=fread(buf2,1,8192,f);
        buffer_append(buf,buf2,size);
        if(size<8192) {
            break;
        }
    }
    if(ferror(f)) {
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct Result$1buffer$ph*)come_increment_ref_count(((struct Result$1buffer$ph*)(__right_value1=Result$1buffer$ph_None((struct Result$1buffer$ph*)come_increment_ref_count((struct Result$1buffer$ph*)come_calloc(1, sizeof(struct Result$1buffer$ph)*(1), "./neo-c.h", 6830, 624, "struct Result$1buffer$ph*"), "./neo-c.h", 6830, 625)))), "./neo-c.h", 6830, 626);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 6830, 627);
        come_call_finalizer(Result$1buffer$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6830, 628);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1buffer$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6830, 629);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct Result$1buffer$ph*)come_increment_ref_count(((struct Result$1buffer$ph*)(__right_value1=Result$1buffer$ph_Some((struct Result$1buffer$ph*)come_increment_ref_count((struct Result$1buffer$ph*)come_calloc(1, sizeof(struct Result$1buffer$ph)*(1), "./neo-c.h", 6833, 630, "struct Result$1buffer$ph*"), "./neo-c.h", 6833, 637),(struct buffer* )come_increment_ref_count(buf, "./neo-c.h", 6833, 638)))), "./neo-c.h", 6833, 639);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 6833, 640);
    come_call_finalizer(Result$1buffer$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6833, 641);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1buffer$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6833, 642);
    return __result_obj__0;
}

static struct Result$1int$* Result$1int$_None(struct Result$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1int$_None"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct Result$1int$* __result_obj__0;
    self->tag=2;
        __result_obj__0 = (struct Result$1int$*)come_increment_ref_count(self, "./neo-c.h", 887, 644);
    come_call_finalizer(Result$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 887, 645);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 887, 646);
    return __result_obj__0;
}

static void Result$1int$$p_finalize(struct Result$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1int$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static struct Result$1int$* Result$1int$_Some(struct Result$1int$* self, int v1)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1int$_Some"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct Result$1int$* __result_obj__0;
    self->tag=1;
    self->Some_value=v1;
        __result_obj__0 = (struct Result$1int$*)come_increment_ref_count(self, "./neo-c.h", 887, 657);
    come_call_finalizer(Result$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 887, 658);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 887, 659);
    return __result_obj__0;
}

struct Result$1int$* FILE_fwrite(struct _IO_FILE*  f  , const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fwrite"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct Result$1int$* __result_obj__0;
    int result;
    memset(&result, 0, sizeof(result));
    if(f==((void*)0)||str==((void*)0)) {
                __result_obj__0 = (struct Result$1int$*)come_increment_ref_count(((struct Result$1int$*)(__right_value1=Result$1int$_None((struct Result$1int$*)come_increment_ref_count((struct Result$1int$*)come_calloc(1, sizeof(struct Result$1int$)*(1), "./neo-c.h", 6839, 643, "struct Result$1int$*"), "./neo-c.h", 6839, 647)))), "./neo-c.h", 6839, 648);
        come_call_finalizer(Result$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6839, 649);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6839, 650);
        return __result_obj__0;
    }
    result=fwrite(str,1,strlen(str),f);
    if(result!=strlen(str)) {
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct Result$1int$*)come_increment_ref_count(((struct Result$1int$*)(__right_value1=Result$1int$_None((struct Result$1int$*)come_increment_ref_count((struct Result$1int$*)come_calloc(1, sizeof(struct Result$1int$)*(1), "./neo-c.h", 6845, 651, "struct Result$1int$*"), "./neo-c.h", 6845, 652)))), "./neo-c.h", 6845, 653);
        come_call_finalizer(Result$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6845, 654);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6845, 655);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct Result$1int$*)come_increment_ref_count(((struct Result$1int$*)(__right_value1=Result$1int$_Some((struct Result$1int$*)come_increment_ref_count((struct Result$1int$*)come_calloc(1, sizeof(struct Result$1int$)*(1), "./neo-c.h", 6848, 656, "struct Result$1int$*"), "./neo-c.h", 6848, 660),result))), "./neo-c.h", 6848, 661);
    come_call_finalizer(Result$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6848, 662);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6848, 663);
    return __result_obj__0;
}

struct Result$1int$* FILE_fclose(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fclose"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct Result$1int$* __result_obj__0;
    int result;
    memset(&result, 0, sizeof(result));
    if(f==((void*)0)) {
                __result_obj__0 = (struct Result$1int$*)come_increment_ref_count(((struct Result$1int$*)(__right_value1=Result$1int$_None((struct Result$1int$*)come_increment_ref_count((struct Result$1int$*)come_calloc(1, sizeof(struct Result$1int$)*(1), "./neo-c.h", 6854, 664, "struct Result$1int$*"), "./neo-c.h", 6854, 665)))), "./neo-c.h", 6854, 666);
        come_call_finalizer(Result$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6854, 667);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6854, 668);
        return __result_obj__0;
    }
    result=fclose(f);
    if(result<0) {
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct Result$1int$*)come_increment_ref_count(((struct Result$1int$*)(__right_value1=Result$1int$_None((struct Result$1int$*)come_increment_ref_count((struct Result$1int$*)come_calloc(1, sizeof(struct Result$1int$)*(1), "./neo-c.h", 6860, 669, "struct Result$1int$*"), "./neo-c.h", 6860, 670)))), "./neo-c.h", 6860, 671);
        come_call_finalizer(Result$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6860, 672);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6860, 673);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct Result$1int$*)come_increment_ref_count(((struct Result$1int$*)(__right_value1=Result$1int$_Some((struct Result$1int$*)come_increment_ref_count((struct Result$1int$*)come_calloc(1, sizeof(struct Result$1int$)*(1), "./neo-c.h", 6863, 674, "struct Result$1int$*"), "./neo-c.h", 6863, 675),result))), "./neo-c.h", 6863, 676);
    come_call_finalizer(Result$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6863, 677);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6863, 678);
    return __result_obj__0;
}

struct Result$1_IO_FILE$p* FILE_fprintf(struct _IO_FILE*  f  , const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct Result$1_IO_FILE$p* __result_obj__0;
    __builtin_va_list  args  ;
    int result;
    memset(&result, 0, sizeof(result));
    if(f==((void*)0)||msg==((void*)0)) {
                __result_obj__0 = (struct Result$1_IO_FILE$p*)come_increment_ref_count(((struct Result$1_IO_FILE$p*)(__right_value1=Result$1_IO_FILE$p_None((struct Result$1_IO_FILE$p*)come_increment_ref_count((struct Result$1_IO_FILE$p*)come_calloc(1, sizeof(struct Result$1_IO_FILE$p)*(1), "./neo-c.h", 6869, 679, "struct Result$1_IO_FILE$p*"), "./neo-c.h", 6869, 680)))), "./neo-c.h", 6869, 681);
        come_call_finalizer(Result$1_IO_FILE$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6869, 682);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1_IO_FILE$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6869, 683);
        return __result_obj__0;
    }
    char msg2[1024*2*2*2];
    memset(&msg2, 0, sizeof(msg2));
    __builtin_va_start(args,msg);
    vsnprintf(msg2,1024*2*2*2,msg,args);
    __builtin_va_end(args);
    result=fprintf(f,"%s",msg2);
    if(result<0) {
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct Result$1_IO_FILE$p*)come_increment_ref_count(((struct Result$1_IO_FILE$p*)(__right_value1=Result$1_IO_FILE$p_None((struct Result$1_IO_FILE$p*)come_increment_ref_count((struct Result$1_IO_FILE$p*)come_calloc(1, sizeof(struct Result$1_IO_FILE$p)*(1), "./neo-c.h", 6881, 684, "struct Result$1_IO_FILE$p*"), "./neo-c.h", 6881, 685)))), "./neo-c.h", 6881, 686);
        come_call_finalizer(Result$1_IO_FILE$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6881, 687);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1_IO_FILE$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6881, 688);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct Result$1_IO_FILE$p*)come_increment_ref_count(((struct Result$1_IO_FILE$p*)(__right_value1=Result$1_IO_FILE$p_Some((struct Result$1_IO_FILE$p*)come_increment_ref_count((struct Result$1_IO_FILE$p*)come_calloc(1, sizeof(struct Result$1_IO_FILE$p)*(1), "./neo-c.h", 6884, 689, "struct Result$1_IO_FILE$p*"), "./neo-c.h", 6884, 690),f))), "./neo-c.h", 6884, 691);
    come_call_finalizer(Result$1_IO_FILE$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6884, 692);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1_IO_FILE$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6884, 693);
    return __result_obj__0;
}

static struct Result$1list$1char$ph$ph* Result$1list$1char$ph$ph_None(struct Result$1list$1char$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1list$1char$ph$ph_None"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct Result$1list$1char$ph$ph* __result_obj__0;
    self->tag=2;
        __result_obj__0 = (struct Result$1list$1char$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 887, 698);
    come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 887, 700);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 887, 701);
    return __result_obj__0;
}

static void Result$1list$1char$ph$ph$p_finalize(struct Result$1list$1char$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1list$1char$ph$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->Some_value!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->Some_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Result$1list$1char$ph$ph$p_finalize}", 2, 699);
    }
        neo_current_frame = fr.prev;
}

static struct Result$1list$1char$ph$ph* Result$1list$1char$ph$ph_Some(struct Result$1list$1char$ph$ph* self, struct list$1char$ph* v1)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "Result$1list$1char$ph$ph_Some"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __dec_obj17;
    struct Result$1list$1char$ph$ph* __result_obj__0;
    self->tag=1;
    __dec_obj17=self->Some_value,
    self->Some_value=(struct list$1char$ph*)come_increment_ref_count(v1, "./neo-c.h", 2, 717);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj17,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 2, 716);
        __result_obj__0 = (struct Result$1list$1char$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 887, 718);
    come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 887, 719);
    come_call_finalizer(list$1char$ph$p_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 887, 720);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 887, 721);
    return __result_obj__0;
}

static void list$1char$ph_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1564, 715);
    }
        neo_current_frame = fr.prev;
}

struct Result$1list$1char$ph$ph* FILE_readlines(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_readlines"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct Result$1list$1char$ph$ph* __result_obj__0;
    memset(&result, 0, sizeof(result));
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 6889, 694, "struct list$1char$ph*"), "./neo-c.h", 6889, 695)), "./neo-c.h", 6889, 696);
    if(f==((void*)0)) {
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct Result$1list$1char$ph$ph*)come_increment_ref_count(((struct Result$1list$1char$ph$ph*)(__right_value1=Result$1list$1char$ph$ph_None((struct Result$1list$1char$ph$ph*)come_increment_ref_count((struct Result$1list$1char$ph$ph*)come_calloc(1, sizeof(struct Result$1list$1char$ph$ph)*(1), "./neo-c.h", 6892, 697, "struct Result$1list$1char$ph$ph*"), "./neo-c.h", 6892, 702)))), "./neo-c.h", 6892, 703);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 6892, 704);
        come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6892, 705);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6892, 706);
        return __result_obj__0;
    }
    while(1) {
        char buf[8192];
        memset(&buf, 0, sizeof(buf));
        if(fgets(buf,8192,f)==((void*)0)) {
            break;
        }
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(buf,"./neo-c.h",6902), "./neo-c.h", 6902, 707));
    }
    if(ferror(f)) {
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct Result$1list$1char$ph$ph*)come_increment_ref_count(((struct Result$1list$1char$ph$ph*)(__right_value1=Result$1list$1char$ph$ph_None((struct Result$1list$1char$ph$ph*)come_increment_ref_count((struct Result$1list$1char$ph$ph*)come_calloc(1, sizeof(struct Result$1list$1char$ph$ph)*(1), "./neo-c.h", 6906, 708, "struct Result$1list$1char$ph$ph*"), "./neo-c.h", 6906, 709)))), "./neo-c.h", 6906, 710);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 6906, 711);
        come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6906, 712);
        neo_current_frame = fr.prev;
        come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6906, 713);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct Result$1list$1char$ph$ph*)come_increment_ref_count(((struct Result$1list$1char$ph$ph*)(__right_value1=Result$1list$1char$ph$ph_Some((struct Result$1list$1char$ph$ph*)come_increment_ref_count((struct Result$1list$1char$ph$ph*)come_calloc(1, sizeof(struct Result$1list$1char$ph$ph)*(1), "./neo-c.h", 6909, 714, "struct Result$1list$1char$ph$ph*"), "./neo-c.h", 6909, 722),(struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 6909, 723)))), "./neo-c.h", 6909, 724);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 6909, 725);
    come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6909, 726);
    neo_current_frame = fr.prev;
    come_call_finalizer(Result$1list$1char$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6909, 727);
    return __result_obj__0;
}

_Bool xiswalpha(int  c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalpha"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xiswblank(int  c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswblank"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xiswdigit(int  c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswdigit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xiswalnum(int  c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalnum"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return xiswalpha(c)||xiswdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xiswascii(int  c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswascii"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    result=(c>=32&&c<=126);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

int string_index(char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_index"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return charp_index(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int charp_index(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* head;
    memset(&head, 0, sizeof(head));
    if(str==((void*)0)||search_str==((void*)0)) {
                neo_current_frame = fr.prev;
        return default_value;
    }
    head=strstr(str,search_str);
    if(head==((void*)0)) {
                neo_current_frame = fr.prev;
        return default_value;
    }
        neo_current_frame = fr.prev;
    return head-str;
    neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 1543, 731);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2, 765);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2, 766);
    return __result_obj__0;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1564, 764);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 763);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 732));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 762);
    }
            neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 733);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 734);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 737);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 738);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 739):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 740):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 741));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 742));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 743));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 744));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 745));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 746));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 747));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 748));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 751);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 752);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 753);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 754);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 755);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 756));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 757);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 758);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 759);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 760):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 761);
    }
            neo_current_frame = fr.prev;
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1564, 736);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 735);
    }
            neo_current_frame = fr.prev;
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1564, 750);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 749):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1564, 768);
    }
        neo_current_frame = fr.prev;
}

static void sClass_finalize(struct sClass* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 772));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 3, 773);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 774));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 775));
    }
        neo_current_frame = fr.prev;
}

struct sClass* sClass_initialize(struct sClass* self, char*  name  , _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, _Bool typename, struct sInfo*  info  , _Bool iter_)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj18  ;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsType$ph$ph* __dec_obj19;
    struct sClass* __result_obj__0;
    self->mNumber=number;
    self->mStruct=struct_;
    self->mUnion=union_;
    self->mGenerics=generics;
    self->mMethodGenerics=method_generics;
    self->mEnum=(_Bool)0;
    self->mProtocol=protocol_;
    self->mFloat=float_;
    self->mEnum=enum_;
    self->mTypeName=typename;
    self->mUniq=uniq_;
    __dec_obj18=self->mName,
    self->mName=(char* )come_increment_ref_count(__builtin_string(name,"./common.h",95), "./common.h", 95, 729);
    __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 95, 728);
    self->mGenericsNum=generics_num;
    self->mMethodGenericsNum=method_generics_num;
    __right_value0 = (void*)0;
    __dec_obj19=self->mFields,
    self->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph_initialize((struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsType$ph$ph)*(1), "./common.h", 100, 730, "struct list$1tuple2$2char$phsType$ph$ph*"), "./common.h", 100, 767)), "./common.h", 2, 770);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 2, 769);
    self->mIter=iter_;
        __result_obj__0 = (struct sClass*)come_increment_ref_count(self, "./common.h", 103, 771);
    come_call_finalizer(sClass_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 103, 776);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 103, 777));
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 103, 778);
    return __result_obj__0;
}

static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph$p_operator_load_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sClass*  default_value  ;
    struct sClass*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    memset(&default_value,0,sizeof(struct sClass* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4167, 781);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4167, 782);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4167, 783);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right1 = (self->size); if(__neo_div_right1 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right1; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 4179, 784);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4179, 785);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4179, 786);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4186, 787);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4186, 788);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4186, 789);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4190, 790);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4190, 791);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4190, 792);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4194, 793);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4194, 794);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4194, 795);
    return __result_obj__0;
}

static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_operator_load_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sClass*  default_value  ;
    struct sClass*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    memset(&default_value,0,sizeof(struct sClass* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4167, 796);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4167, 797);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4167, 798);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right2 = (self->size); if(__neo_div_right2 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right2; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 4179, 799);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4179, 800);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4179, 801);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4186, 802);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4186, 803);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4186, 804);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4190, 805);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4190, 806);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4190, 807);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4194, 808);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4194, 809);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4194, 810);
    return __result_obj__0;
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_insert"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct map$2char$phsClass$ph* __result_obj__0;
    _Bool add_to_key_list;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&add_to_key_list, 0, sizeof(add_to_key_list));
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4006, 816));
        come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4006, 817);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    add_to_key_list=(_Bool)0;
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right4 = (self->size); if(__neo_div_right4 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right4; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                map$2char$phsClass$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4025, 832));
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4026, 833);
                }
                else {
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sClass_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4032, 834);
                    self->items[it]=(struct sClass* )come_increment_ref_count(item, "./neo-c.h", 4033, 835);
                }
                else {
                    self->items[it]=item;
                }
                self->hashes[it]=key_hash;
                add_to_key_list=(_Bool)1;
                break;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe2(self);
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            self->hashes[it]=key_hash;
            if(1) {
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4056, 836);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sClass* )come_increment_ref_count(item, "./neo-c.h", 4062, 837);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            add_to_key_list=(_Bool)1;
            break;
        }
    }
    if(add_to_key_list) {
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 4076, 838));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4079, 839));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4079, 840);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_rehash"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int old_size;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct sClass**  items  ;
    unsigned int* hashes;
    _Bool* item_existance;
    int i;
    int len;
    int i_22;
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
    memset(&i_22, 0, sizeof(i_22));
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&n, 0, sizeof(n));
    old_size=self->size;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3924, 818, "char** "))), "./neo-c.h", 3924, 819);
    __right_value0 = (void*)0;
    items=(struct sClass** )come_increment_ref_count(((struct sClass** )(__right_value0=(struct sClass* *)come_calloc(1, sizeof(struct sClass* )*(1*(size)), "./neo-c.h", 3925, 820, "struct sClass** "))), "./neo-c.h", 3925, 821);
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3926, 822, "unsigned int*"))), "./neo-c.h", 3926, 823);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3927, 824, "_Bool*"))), "./neo-c.h", 3927, 825);
    for(i=0    ;i<size;i++){
        hashes[i]=0;
        item_existance[i]=(_Bool)0;
    }
    len=0;
    for(i_22=0    ;i_22<old_size;i_22++){
        if(!self->item_existance[i_22]) {
            continue;
        }
        key_hash=self->hashes[i_22];
        hash=({ __typeof__(size) __neo_div_right3 = (size); if(__neo_div_right3 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right3; });
        n=hash;
        while((_Bool)1) {
            if(item_existance[n]) {
                if(++n>=size) {
                    n=0;
                }
                if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe2(self);
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                hashes[n]=key_hash;
                keys[n]=self->keys[i_22];
                items[n]=self->items[i_22];
                len++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3969, 826));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3970, 827));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->hashes=hashes;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static void map$2char$phsClass$ph_remove_ordered_entry(struct map$2char$phsClass$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_remove_ordered_entry"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int pos;
    memset(&pos, 0, sizeof(pos));
    pos=map$2char$phsClass$ph_key_position(self,key,by_pointer);
    if(pos>=0) {
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phsClass$ph_key_position(struct map$2char$phsClass$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_key_position"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int pos;
    struct list_item$1char$ph* it;
    memset(&pos, 0, sizeof(pos));
    memset(&it, 0, sizeof(it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    pos=0;
    it=self->key_list->head;
    while(it!=((void*)0)) {
        if((!by_pointer&&string_equals(it->item,key))||(by_pointer&&it->item==key)) {
                        neo_current_frame = fr.prev;
            return pos;
        }
        it=it->next;
        pos++;
    }
        neo_current_frame = fr.prev;
    return -1;
        neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_delete"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    int tmp;
    struct list_item$1char$ph* it;
    int i;
    struct list_item$1char$ph* prev_it;
    struct list_item$1char$ph* it_23;
    int i_24;
    struct list_item$1char$ph* prev_it_25;
    struct list_item$1char$ph* it_26;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_27;
    struct list_item$1char$ph* prev_it_28;
    memset(&tmp, 0, sizeof(tmp));
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&it_23, 0, sizeof(it_23));
    memset(&i_24, 0, sizeof(i_24));
    memset(&prev_it_25, 0, sizeof(prev_it_25));
    memset(&it_26, 0, sizeof(it_26));
    memset(&head_prev_it, 0, sizeof(head_prev_it));
    memset(&tail_it, 0, sizeof(tail_it));
    memset(&i_27, 0, sizeof(i_27));
    memset(&prev_it_28, 0, sizeof(prev_it_28));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head>=self->len) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==tail) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(head==0) {
        it=self->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2000, 829);
                self->len--;
            }
            else if(i==tail) {
                self->head=it;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it=it->next;
                i++;
            }
        }
    }
    else if(tail==self->len) {
        it_23=self->head;
        i_24=0;
        while(it_23!=((void*)0)) {
            if(i_24==head) {
                self->tail=it_23->prev;
                self->tail->next=((void*)0);
            }
            if(i_24>=head) {
                prev_it_25=it_23;
                it_23=it_23->next;
                i_24++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_25, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2030, 830);
                self->len--;
            }
            else {
                it_23=it_23->next;
                i_24++;
            }
        }
    }
    else {
        it_26=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_27=0;
        while(it_26!=((void*)0)) {
            if(i_27==head) {
                head_prev_it=it_26->prev;
            }
            if(i_27==tail) {
                tail_it=it_26;
            }
            if(i_27>=head&&i_27<tail) {
                prev_it_28=it_26;
                it_26=it_26->next;
                i_27++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_28, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2063, 831);
                self->len--;
            }
            else {
                it_26=it_26->next;
                i_27++;
            }
        }
        if(head_prev_it!=((void*)0)) {
            head_prev_it->next=tail_it;
        }
        if(tail_it!=((void*)0)) {
            tail_it->prev=head_prev_it;
        }
    }
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1922, 828);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1543, 848);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1543, 849);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1543, 850);
    return __result_obj__0;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1564, 852);
    }
        neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1543, 856);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1543, 857);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1543, 858);
    return __result_obj__0;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1564, 860);
    }
        neo_current_frame = fr.prev;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1543, 868);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1543, 869);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1543, 870);
    return __result_obj__0;
}

static void list$1int$_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1564, 872);
    }
        neo_current_frame = fr.prev;
}

struct sType* sType_initialize(struct sType* self, char*  name  , _Bool heap, struct sInfo*  info  , _Bool unsigned_, int pointer_num_)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int pointer_num;
    char* p;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    char*  name2  ;
    void* __right_value2 = (void*)0;
    struct sClass*  klass  ;
    struct sClass*  generics_class  ;
    struct sClass*  klass2  ;
    char*  __dec_obj20  ;
    struct sType*  __dec_obj21  ;
    struct sType*  __dec_obj22  ;
    struct list$1sType$ph* __dec_obj23;
    struct list$1sNode$ph* __dec_obj24;
    struct list$1sNode$ph* __dec_obj25;
    struct list$1int$* __dec_obj26;
    struct list$1int$* __dec_obj27;
    struct list$1sType$ph* __dec_obj28;
    struct list$1char$ph* __dec_obj29;
    char*  __dec_obj30  ;
    struct sType*  __dec_obj31  ;
    struct sNode* __dec_obj32;
    struct sNode* __dec_obj33;
    char*  __dec_obj34  ;
    char*  __dec_obj35  ;
    struct sType* __result_obj__0;
    memset(&pointer_num, 0, sizeof(pointer_num));
    memset(&p, 0, sizeof(p));
    memset(&name2, 0, sizeof(name2));
    memset(&klass, 0, sizeof(klass));
    memset(&generics_class, 0, sizeof(generics_class));
    memset(&klass2, 0, sizeof(klass2));
    pointer_num=pointer_num_;
    p=name;
    while(*p) {
        if(xisalpha(*p)||*p==95) {
            p++;
        }
        else {
            break;
        }
    }
    while(*p==42) {
        pointer_num++;
        p++;
    }
    name2=(char* )come_increment_ref_count(charp_substring(((char* )(__right_value0=__builtin_string(name,"./common.h",215))),0,-pointer_num+pointer_num_-1), "./common.h", 215, 779);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 215, 780));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    klass=((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(info->classes,((char* )(__right_value1=__builtin_string(name2,"./common.h",216))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 216, 811));
    __right_value0 = (void*)0;
    generics_class=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->generics_classes,name2)));
    if(klass==((void*)0)&&generics_class==((void*)0)) {
        warning_msg(info,"class not found(%s)(1)\n",name2);
    }
    if(klass) {
        self->mClass=klass;
    }
    else {
        __right_value0 = (void*)0;
        klass2=(struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), "./common.h", 227, 812, "struct sClass* "), "./common.h", 227, 813);
        __right_value0 = (void*)0;
        __dec_obj20=klass2->mName,
        klass2->mName=(char* )come_increment_ref_count(__builtin_string(name,"./common.h",228), "./common.h", 228, 815);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 228, 814);
        __right_value0 = (void*)0;
        map$2char$phsClass$ph_insert(info->classes,(char* )come_increment_ref_count(__builtin_string(name,"./common.h",230), "./common.h", 230, 841),(struct sClass* )come_increment_ref_count(klass2, "./common.h", 230, 842),(_Bool)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        self->mClass=((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(info->classes,((char* )(__right_value1=__builtin_string(name,"./common.h",232))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 232, 843));
        come_call_finalizer(sClass_finalize, klass2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 235, 844);
    }
    __dec_obj21=self->mNoSolvedGenericsType,
    self->mNoSolvedGenericsType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 235, 845);
    __dec_obj22=self->mOriginalLoadVarType,
    self->mOriginalLoadVarType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 236, 846);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj23=self->mGenericsTypes,
    self->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./common.h", 237, 847, "struct list$1sType$ph*"), "./common.h", 237, 851)), "./common.h", 5, 854);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 5, 853);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj24=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./common.h", 238, 855, "struct list$1sNode$ph*"), "./common.h", 238, 859)), "./common.h", 5, 862);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 5, 861);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj25=self->mVarNameArrayNum,
    self->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./common.h", 239, 863, "struct list$1sNode$ph*"), "./common.h", 239, 864)), "./common.h", 239, 866);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 239, 865);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj26=self->mArrayStatic,
    self->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./common.h", 240, 867, "struct list$1int$*"), "./common.h", 240, 871)), "./common.h", 5, 874);
    come_call_finalizer(list$1int$_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 5, 873);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj27=self->mArrayRestrict,
    self->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./common.h", 241, 875, "struct list$1int$*"), "./common.h", 241, 876)), "./common.h", 241, 878);
    come_call_finalizer(list$1int$_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 241, 877);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj28=self->mParamTypes,
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./common.h", 242, 879, "struct list$1sType$ph*"), "./common.h", 242, 880)), "./common.h", 242, 882);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 242, 881);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj29=self->mParamNames,
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./common.h", 243, 883, "struct list$1char$ph*"), "./common.h", 243, 884)), "./common.h", 243, 886);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 243, 885);
    __right_value0 = (void*)0;
    __dec_obj30=self->mOriginalTypeName,
    self->mOriginalTypeName=(char*)come_increment_ref_count(xsprintf(""), "./common.h", 244, 888);
    __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 244, 887);
    self->mVarArgs=(_Bool)0;
    __dec_obj31=self->mResultType,
    self->mResultType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 246, 889);
    self->mUnsigned=unsigned_;
    self->mConstant=(_Bool)0;
    self->mRegister=(_Bool)0;
    self->mVolatile=(_Bool)0;
    self->mStatic=(_Bool)0;
    self->mRestrict=(_Bool)0;
    self->mLongLong=(_Bool)0;
    self->mHeap=heap;
    self->mNoHeap=(_Bool)0;
    self->mPointerNum=pointer_num;
    __dec_obj32=self->mSizeNum,
    self->mSizeNum=((void*)0);
    (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0, (void*)0, "./common.h", 258, 890) :0);
    __dec_obj33=self->mTypeOfNode,
    self->mTypeOfNode=((void*)0);
    (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0, "./common.h", 260, 891) :0);
    __right_value0 = (void*)0;
    __dec_obj34=self->mMiddleAttribute,
    self->mMiddleAttribute=(char*)come_increment_ref_count(xsprintf(""), "./common.h", 261, 893);
    __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 261, 892);
    __right_value0 = (void*)0;
    __dec_obj35=self->mPointerAttribute,
    self->mPointerAttribute=(char*)come_increment_ref_count(xsprintf(""), "./common.h", 262, 895);
    __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 262, 894);
        __result_obj__0 = (struct sType*)come_increment_ref_count(self, "./common.h", 263, 896);
    come_call_finalizer(sType_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 263, 897);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 263, 898));
    (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 263, 899));
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 263, 900);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(self, "./neo-c.h", 1543, 912);
    come_call_finalizer(list$1sVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5, 919);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5, 920);
    return __result_obj__0;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1sVar$ph* it;
    struct list_item$1sVar$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1564, 918);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 917);
    }
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 913));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 914));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 915);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 916));
    }
            neo_current_frame = fr.prev;
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1sVar$ph* it;
    struct list_item$1sVar$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1564, 922);
    }
        neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_begin"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_29  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sType* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
                __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_29,0,sizeof(struct sType* ));
        __result_obj__0 = result_29;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_end"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_next"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_30  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sType* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
                __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_30,0,sizeof(struct sType* ));
        __result_obj__0 = result_30;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj44  ;
    struct list_item$1sType$ph* litem_31;
    struct sType*  __dec_obj45  ;
    struct list_item$1sType$ph* litem_32;
    struct sType*  __dec_obj46  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_31, 0, sizeof(litem_31));
    memset(&litem_32, 0, sizeof(litem_32));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1673, 933);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1677, 934, "struct list_item$1sType$ph*"))), "./neo-c.h", 1677, 935);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj44=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1681, 937);
        come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1681, 936);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_31=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1687, 938, "struct list_item$1sType$ph*"))), "./neo-c.h", 1687, 939);
        litem_31->prev=self->head;
        litem_31->next=((void*)0);
        __dec_obj45=litem_31->item,
        litem_31->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1691, 941);
        come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1691, 940);
        self->tail=litem_31;
        self->head->next=litem_31;
    }
    else {
        __right_value0 = (void*)0;
        litem_32=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1697, 942, "struct list_item$1sType$ph*"))), "./neo-c.h", 1697, 943);
        litem_32->prev=self->tail;
        litem_32->next=((void*)0);
        __dec_obj46=litem_32->item,
        litem_32->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1701, 945);
        come_call_finalizer(sType_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1701, 944);
        self->tail->next=litem_32;
        self->tail=litem_32;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1709, 946);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj47  ;
    struct sType*  __dec_obj48  ;
    struct list$1sType$ph* __dec_obj52;
    struct sType*  __dec_obj53  ;
    struct sNode* __dec_obj54;
    struct sNode* __dec_obj55;
    char*  __dec_obj56  ;
    char*  __dec_obj57  ;
    char*  __dec_obj58  ;
    char*  __dec_obj59  ;
    char*  __dec_obj60  ;
    char*  __dec_obj61  ;
    char*  __dec_obj62  ;
    char*  __dec_obj63  ;
    struct list$1sNode$ph* __dec_obj67;
    struct list$1sNode$ph* __dec_obj68;
    struct list$1int$* __dec_obj69;
    struct list$1int$* __dec_obj70;
    struct sType*  __dec_obj71  ;
    char*  __dec_obj72  ;
    struct list$1sType$ph* __dec_obj73;
    struct list$1char$ph* __dec_obj77;
    struct sType*  __dec_obj78  ;
    struct sNode* __dec_obj79;
    struct list$1sNode$ph* __dec_obj80;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 947, "struct sType* "), "sType_clone", 5, 948);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj47=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 950);
        come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 949);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj48=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 952);
        come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 951);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj52=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 978);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 977);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj53=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 980);
        come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 979);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj54=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 989);
        (__dec_obj54 ? __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 988) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj55=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 991);
        (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 990) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj56=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 992, "char* "), "sType_clone", 14, 994);
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 993);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj57=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 995, "char* "), "sType_clone", 15, 997);
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 996);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj58=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 998, "char* "), "sType_clone", 16, 1000);
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 999);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj59=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 1001, "char* "), "sType_clone", 17, 1003);
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 1002);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj60=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 1004, "char* "), "sType_clone", 18, 1006);
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 1005);
    }
    if(self!=((void*)0)) {
        result->mNew=self->mNew;
    }
    if(self!=((void*)0)) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result->mAtomic=self->mAtomic;
    }
    if(self!=((void*)0)) {
        result->mThreadLocal=self->mThreadLocal;
    }
    if(self!=((void*)0)) {
        result->mNorecord=self->mNorecord;
    }
    if(self!=((void*)0)) {
        result->mThread=self->mThread;
    }
    if(self!=((void*)0)) {
        result->mComplex=self->mComplex;
    }
    if(self!=((void*)0)) {
        result->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result->mNoreturn=self->mNoreturn;
    }
    if(self!=((void*)0)) {
        result->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result->mWeak=self->mWeak;
    }
    if(self!=((void*)0)) {
        result->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result->mChannel=self->mChannel;
    }
    if(self!=((void*)0)) {
        result->mDefferRightValue=self->mDefferRightValue;
    }
    if(self!=((void*)0)) {
        result->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result->mSlice=self->mSlice;
    }
    if(self!=((void*)0)) {
        result->mOptional=self->mOptional;
    }
    if(self!=((void*)0)) {
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result->mTypeName=self->mTypeName;
    }
    if(self!=((void*)0)) {
        result->mAnonymous=self->mAnonymous;
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj61=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 1007, "char* "), "sType_clone", 49, 1009);
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 1008);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj62=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 1010, "char* "), "sType_clone", 51, 1012);
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 1011);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj63=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 1013, "char* "), "sType_clone", 54, 1015);
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 1014);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj67=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 1041);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 1040);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj68=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 1043);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 1042);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj69=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 1059);
        come_call_finalizer(list$1int$_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 1058);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj70=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 1061);
        come_call_finalizer(list$1int$_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 1060);
    }
    if(self!=((void*)0)) {
        result->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result->mArrayPointerNum=self->mArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result->mPointerParen=self->mPointerParen;
    }
    if(self!=((void*)0)) {
        result->mMinusPointerNum=self->mMinusPointerNum;
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj71=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 1063);
        come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 1062);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj72=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 1064, "char* "), "sType_clone", 67, 1066);
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 1065);
    }
    if(self!=((void*)0)) {
        result->mOriginalTypePointerNum=self->mOriginalTypePointerNum;
    }
    if(self!=((void*)0)) {
        result->mOriginalTypePointerHeap=self->mOriginalTypePointerHeap;
    }
    if(self!=((void*)0)) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj73=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 1068);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 1067);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj77=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 1096);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 1095);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj78=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 1098);
        come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 1097);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj79=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 1100);
        (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 1099) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj80=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 1102);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 1101);
    }
        __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 1103);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* result;
    struct list_item$1sType$ph* it;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1569, 953);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1569, 954);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1571, 955, "struct list$1sType$ph*"), "./neo-c.h", 1571, 956)), "./neo-c.h", 1571, 957);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1576, 972));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1579, 973));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1585, 974);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1585, 975);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1585, 976);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj49  ;
    struct list_item$1sType$ph* litem_33;
    struct sType*  __dec_obj50  ;
    struct list_item$1sType$ph* litem_34;
    struct sType*  __dec_obj51  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_33, 0, sizeof(litem_33));
    memset(&litem_34, 0, sizeof(litem_34));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1589, 958);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1592, 959, "struct list_item$1sType$ph*"))), "./neo-c.h", 1592, 960);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj49=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1596, 962);
        come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1596, 961);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_33=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1602, 963, "struct list_item$1sType$ph*"))), "./neo-c.h", 1602, 964);
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        __dec_obj50=litem_33->item,
        litem_33->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1606, 966);
        come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1606, 965);
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        __right_value0 = (void*)0;
        litem_34=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1612, 967, "struct list_item$1sType$ph*"))), "./neo-c.h", 1612, 968);
        litem_34->prev=self->tail;
        litem_34->next=((void*)0);
        __dec_obj51=litem_34->item,
        litem_34->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1616, 970);
        come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1616, 969);
        self->tail->next=litem_34;
        self->tail=litem_34;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1624, 971);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sNode* sNode_clone(struct sNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNode* result;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 981);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 982):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 983, "struct sNode*"), "sNode_clone", 5, 984);
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result->kind=self->kind;
    }
    if(self!=((void*)0)) {
        result->left_value=self->left_value;
    }
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 985);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 986):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 987):(void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* result;
    struct list_item$1sNode$ph* it;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1569, 1016);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1569, 1017);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1571, 1018, "struct list$1sNode$ph*"), "./neo-c.h", 1571, 1019)), "./neo-c.h", 1571, 1020);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1576, 1035));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1579, 1036));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1585, 1037);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1585, 1038);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1585, 1039);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj64;
    struct list_item$1sNode$ph* litem_35;
    struct sNode* __dec_obj65;
    struct list_item$1sNode$ph* litem_36;
    struct sNode* __dec_obj66;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_35, 0, sizeof(litem_35));
    memset(&litem_36, 0, sizeof(litem_36));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1589, 1021):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1592, 1022, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1592, 1023);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj64=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1596, 1025);
        (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1596, 1024) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_35=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1602, 1026, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1602, 1027);
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        __dec_obj65=litem_35->item,
        litem_35->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1606, 1029);
        (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1606, 1028) :0);
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        __right_value0 = (void*)0;
        litem_36=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1612, 1030, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1612, 1031);
        litem_36->prev=self->tail;
        litem_36->next=((void*)0);
        __dec_obj66=litem_36->item,
        litem_36->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1616, 1033);
        (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1616, 1032) :0);
        self->tail->next=litem_36;
        self->tail=litem_36;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1624, 1034):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$* list$1int$$p_clone(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* result;
    struct list_item$1int$* it;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1569, 1044);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1569, 1045);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1571, 1046, "struct list$1int$*"), "./neo-c.h", 1571, 1047)), "./neo-c.h", 1571, 1048);
    it=self->head;
    while(it!=((void*)0)) {
        if(0) {
            list$1int$_add(result,it->item);
        }
        else {
            list$1int$_add(result,it->item);
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1585, 1055);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1585, 1056);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1585, 1057);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_37;
    struct list_item$1int$* litem_38;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_37, 0, sizeof(litem_37));
    memset(&litem_38, 0, sizeof(litem_38));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1592, 1049, "struct list_item$1int$*"))), "./neo-c.h", 1592, 1050);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_37=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1602, 1051, "struct list_item$1int$*"))), "./neo-c.h", 1602, 1052);
        litem_37->prev=self->head;
        litem_37->next=((void*)0);
        litem_37->item=item;
        self->tail=litem_37;
        self->head->next=litem_37;
    }
    else {
        __right_value0 = (void*)0;
        litem_38=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1612, 1053, "struct list_item$1int$*"))), "./neo-c.h", 1612, 1054);
        litem_38->prev=self->tail;
        litem_38->next=((void*)0);
        litem_38->item=item;
        self->tail->next=litem_38;
        self->tail=litem_38;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list_item$1char$ph* it;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1569, 1069);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1569, 1070);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1571, 1071, "struct list$1char$ph*"), "./neo-c.h", 1571, 1072)), "./neo-c.h", 1571, 1073);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1576, 1088, "char* "), "./neo-c.h", 1576, 1089));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1579, 1090, "char* "), "./neo-c.h", 1579, 1091));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1585, 1092);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1585, 1093);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1585, 1094);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj74  ;
    struct list_item$1char$ph* litem_39;
    char*  __dec_obj75  ;
    struct list_item$1char$ph* litem_40;
    char*  __dec_obj76  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_39, 0, sizeof(litem_39));
    memset(&litem_40, 0, sizeof(litem_40));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1589, 1074));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1592, 1075, "struct list_item$1char$ph*"))), "./neo-c.h", 1592, 1076);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj74=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1596, 1078);
        __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1596, 1077);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_39=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1602, 1079, "struct list_item$1char$ph*"))), "./neo-c.h", 1602, 1080);
        litem_39->prev=self->head;
        litem_39->next=((void*)0);
        __dec_obj75=litem_39->item,
        litem_39->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1606, 1082);
        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1606, 1081);
        self->tail=litem_39;
        self->head->next=litem_39;
    }
    else {
        __right_value0 = (void*)0;
        litem_40=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1612, 1083, "struct list_item$1char$ph*"))), "./neo-c.h", 1612, 1084);
        litem_40->prev=self->tail;
        litem_40->next=((void*)0);
        __dec_obj76=litem_40->item,
        litem_40->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1616, 1086);
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1616, 1085);
        self->tail->next=litem_40;
        self->tail=litem_40;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1624, 1087));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_41  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
                __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_41,0,sizeof(char* ));
        __result_obj__0 = result_41;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_end"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char*  list$1char$ph_next(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_next"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_43  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
                __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_43,0,sizeof(char* ));
        __result_obj__0 = result_43;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 1126);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 1127);
    }
        neo_current_frame = fr.prev;
}

static void sFun_finalize(struct sFun* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 1141));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 1142);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 1143);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 1144);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 1145);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 1146);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 8, 1147);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 1148);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 1149));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 1150));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 1151);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 1152);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 1153);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 1154);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 1155));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 1156));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 1157));
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 1158));
    }
        neo_current_frame = fr.prev;
}

struct sFun* sFun_initialize(struct sFun* self, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock*  block  , _Bool static_, struct sInfo*  info  , _Bool inline_, _Bool uniq_, char*  attribute  , char*  fun_attribute  , _Bool const_fun, char*  text_block  , char*  generics_sname  , int generics_sline, _Bool immutable_, char*  asm_fun  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  __dec_obj36  ;
    struct sType*  __dec_obj37  ;
    struct list$1sType$ph* __dec_obj38;
    struct list$1char$ph* __dec_obj39;
    struct list$1char$ph* __dec_obj40;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sVar$ph* __dec_obj41;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj42  ;
    char*  __dec_obj43  ;
    struct list$1sType$ph* _o2_saved_3;
    struct sType*  it  ;
    struct list$1char$ph* _o2_saved_4;
    char*  it_42  ;
    struct sType*  __dec_obj81  ;
    struct buffer*  __dec_obj82  ;
    struct buffer*  __dec_obj83  ;
    struct buffer*  __dec_obj84  ;
    struct buffer*  __dec_obj85  ;
    struct sBlock*  __dec_obj86  ;
    char*  __dec_obj87  ;
    char*  __dec_obj88  ;
    char*  __dec_obj89  ;
    char*  __dec_obj90  ;
    char*  __dec_obj91  ;
    struct sFun* __result_obj__0;
    memset(&_o2_saved_3, 0, sizeof(_o2_saved_3));
    memset(&it, 0, sizeof(it));
    memset(&_o2_saved_4, 0, sizeof(_o2_saved_4));
    memset(&it_42, 0, sizeof(it_42));
    __dec_obj36=self->mName,
    self->mName=(char* )come_increment_ref_count(name, "./common.h", 323, 902);
    __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 323, 901);
    __dec_obj37=self->mResultType,
    self->mResultType=(struct sType* )come_increment_ref_count(result_type, "./common.h", 324, 904);
    come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 324, 903);
    __dec_obj38=self->mParamTypes,
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types, "./common.h", 325, 906);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 325, 905);
    __dec_obj39=self->mParamNames,
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names, "./common.h", 326, 908);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 326, 907);
    __dec_obj40=self->mParamDefaultParametors,
    self->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "./common.h", 327, 910);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 327, 909);
    self->mExternal=external;
    self->mVarArgs=var_args;
    self->mStatic=static_;
    self->mInline=inline_;
    self->mUniq=uniq_;
    self->mConstFun=const_fun;
    __dec_obj41=self->mAllVar,
    self->mAllVar=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc(1, sizeof(struct list$1sVar$ph)*(1), "./common.h", 334, 911, "struct list$1sVar$ph*"), "./common.h", 334, 921)), "./common.h", 5, 924);
    come_call_finalizer(list$1sVar$ph_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 5, 923);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj42=self->mLambdaType,
    self->mLambdaType=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "./common.h", 336, 925, "struct sType* "), "./common.h", 336, 926),(char*)come_increment_ref_count(xsprintf("lambda"), "./common.h", 336, 927),(_Bool)0,info,(_Bool)0,0), "./common.h", 336, 929);
    come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 336, 928);
    __dec_obj43=self->mAsmFun,
    self->mAsmFun=(char* )come_increment_ref_count(asm_fun, "./common.h", 338, 931);
    __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 338, 930);
    for(_o2_saved_3=(struct list$1sType$ph*)come_increment_ref_count(param_types, "./common.h", 340, 932),it=list$1sType$ph_begin(_o2_saved_3)    ;!list$1sType$ph_end(_o2_saved_3);it=list$1sType$ph_next(_o2_saved_3)){
        __right_value0 = (void*)0;
        list$1sType$ph_push_back(self->mLambdaType->mParamTypes,(struct sType* )come_increment_ref_count(sType_clone(it), "./common.h", 341, 1104));
    }
    for(_o2_saved_4=(struct list$1char$ph*)come_increment_ref_count(param_names, "./common.h", 344, 1105),it_42=list$1char$ph_begin(_o2_saved_4)    ;!list$1char$ph_end(_o2_saved_4);it_42=list$1char$ph_next(_o2_saved_4)){
        __right_value0 = (void*)0;
        list$1char$ph_push_back(self->mLambdaType->mParamNames,(char* )come_increment_ref_count((char* )come_memdup(it_42, "./common.h", 345, 1106, "char* "), "./common.h", 345, 1107));
    }
    __dec_obj81=self->mLambdaType->mResultType,
    self->mLambdaType->mResultType=(struct sType* )come_increment_ref_count(result_type, "./common.h", 348, 1109);
    come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 348, 1108);
    self->mLambdaType->mVarArgs=var_args;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj82=self->mSource,
    self->mSource=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./common.h", 351, 1110, "struct buffer* "), "./common.h", 351, 1111)), "./common.h", 351, 1113);
    come_call_finalizer(buffer_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 351, 1112);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj83=self->mSourceHead,
    self->mSourceHead=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./common.h", 352, 1114, "struct buffer* "), "./common.h", 352, 1115)), "./common.h", 352, 1117);
    come_call_finalizer(buffer_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 352, 1116);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj84=self->mSourceHead2,
    self->mSourceHead2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./common.h", 353, 1118, "struct buffer* "), "./common.h", 353, 1119)), "./common.h", 353, 1121);
    come_call_finalizer(buffer_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 353, 1120);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj85=self->mSourceEnd,
    self->mSourceEnd=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./common.h", 354, 1122, "struct buffer* "), "./common.h", 354, 1123)), "./common.h", 354, 1125);
    come_call_finalizer(buffer_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 354, 1124);
    __dec_obj86=self->mBlock,
    self->mBlock=(struct sBlock* )come_increment_ref_count(block, "./common.h", 356, 1129);
    come_call_finalizer(sBlock_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 356, 1128);
    __dec_obj87=self->mTextBlock,
    self->mTextBlock=(char* )come_increment_ref_count(text_block, "./common.h", 357, 1131);
    __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 357, 1130);
    __dec_obj88=self->mTextBlockSName,
    self->mTextBlockSName=(char* )come_increment_ref_count(generics_sname, "./common.h", 359, 1133);
    __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 359, 1132);
    self->mTextBlockSline=generics_sline;
    if((result_type->mClass->mNumber||string_operator_equals(result_type->mClass->mName,"double")||string_operator_equals(result_type->mClass->mName,"float")||result_type->mClass->mStruct)&&result_type->mPointerNum==0) {
        self->mNoResultType=(_Bool)1;
    }
    __dec_obj89=self->mAttribute,
    self->mAttribute=(char* )come_increment_ref_count(attribute, "./common.h", 366, 1135);
    __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 366, 1134);
    __right_value0 = (void*)0;
    __dec_obj90=self->mMiddleAttribute,
    self->mMiddleAttribute=(char*)come_increment_ref_count(xsprintf(""), "./common.h", 367, 1137);
    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 367, 1136);
    __dec_obj91=self->mFunAttribute,
    self->mFunAttribute=(char* )come_increment_ref_count(fun_attribute, "./common.h", 368, 1139);
    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 368, 1138);
        __result_obj__0 = (struct sFun*)come_increment_ref_count(self, "./common.h", 369, 1140);
    come_call_finalizer(sFun_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 369, 1159);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 369, 1160));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 369, 1161);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 369, 1162);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 369, 1163);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 369, 1164);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 369, 1165);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 369, 1166));
    (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 369, 1167));
    (text_block = come_decrement_ref_count(text_block, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 369, 1168));
    (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 369, 1169));
    (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 369, 1170));
    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 369, 1171);
    come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 369, 1172);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 369, 1173);
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 2, 1193);
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 3, 1194);
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 4, 1195);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 5, 1196));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 6, 1197);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 7, 1198);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 8, 1199);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 9, 1200);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 10, 1201));
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 11, 1202));
    }
        neo_current_frame = fr.prev;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType*  impl_type  , struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char*  block  , struct sInfo*  info  , char*  generics_sname  , int generics_sline, _Bool const_fun)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __dec_obj92;
    struct list$1char$ph* __dec_obj93;
    char*  __dec_obj94  ;
    struct sType*  __dec_obj95  ;
    struct list$1sType$ph* __dec_obj96;
    struct list$1char$ph* __dec_obj97;
    struct list$1char$ph* __dec_obj98;
    char*  __dec_obj99  ;
    char*  __dec_obj100  ;
    struct sGenericsFun* __result_obj__0;
    __dec_obj92=self->mGenericsTypeNames,
    self->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_type_names), "./common.h", 397, 1175);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 397, 1174);
    __right_value0 = (void*)0;
    __dec_obj93=self->mMethodGenericsTypeNames,
    self->mMethodGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(method_generics_type_names), "./common.h", 398, 1177);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 398, 1176);
    __dec_obj94=self->mName,
    self->mName=(char* )come_increment_ref_count(name, "./common.h", 400, 1179);
    __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 400, 1178);
    __dec_obj95=self->mResultType,
    self->mResultType=(struct sType* )come_increment_ref_count(result_type, "./common.h", 401, 1181);
    come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 401, 1180);
    __dec_obj96=self->mParamTypes,
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types, "./common.h", 402, 1183);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 402, 1182);
    __dec_obj97=self->mParamNames,
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names, "./common.h", 403, 1185);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 403, 1184);
    __dec_obj98=self->mParamDefaultParametors,
    self->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "./common.h", 404, 1187);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 404, 1186);
    self->mVarArgs=var_args;
    __dec_obj99=self->mBlock,
    self->mBlock=(char* )come_increment_ref_count(block, "./common.h", 407, 1189);
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 407, 1188);
    self->mSLine=info->sline;
    __right_value0 = (void*)0;
    __dec_obj100=self->mGenericsSName,
    self->mGenericsSName=(char* )come_increment_ref_count(__builtin_string(generics_sname,"./common.h",410), "./common.h", 410, 1191);
    __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 410, 1190);
    self->mGenericsSLine=generics_sline;
    self->mConstFun=const_fun;
        __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(self, "./common.h", 413, 1192);
    come_call_finalizer(sGenericsFun_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 413, 1203);
    come_call_finalizer(sType_finalize, impl_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 413, 1204);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 413, 1205));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 413, 1206);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 413, 1207);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 413, 1208);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 413, 1209);
    (block = come_decrement_ref_count(block, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 413, 1210));
    (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 413, 1211));
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 413, 1212);
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 1214));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 1215);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 1216));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 1217));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 1218));
    }
        neo_current_frame = fr.prev;
}

struct CVALUE* CVALUE_initialize(struct CVALUE* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct CVALUE* __result_obj__0;
        __result_obj__0 = (struct CVALUE*)come_increment_ref_count(self, "./common.h", 430, 1213);
    come_call_finalizer(CVALUE_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 430, 1219);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 430, 1220);
    return __result_obj__0;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj105;
    struct map$2char$phchar$ph* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "./neo-c.h", 3454, 1232, "char** "))), "./neo-c.h", 3454, 1233);
    __right_value0 = (void*)0;
    self->items=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "./neo-c.h", 3455, 1234, "char** "))), "./neo-c.h", 3455, 1235);
    __right_value0 = (void*)0;
    self->hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(128)), "./neo-c.h", 3456, 1236, "unsigned int*"))), "./neo-c.h", 3456, 1237);
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 3457, 1238, "_Bool*"))), "./neo-c.h", 3457, 1239);
    for(i=0    ;i<128;i++){
        self->hashes[i]=0;
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __right_value0 = (void*)0;
    __dec_obj105=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3468, 1240, "struct list$1char$ph*"), "./neo-c.h", 3468, 1241)), "./neo-c.h", 3468, 1243);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3468, 1242);
    self->it=0;
        __result_obj__0 = (struct map$2char$phchar$ph*)come_increment_ref_count(self, "./neo-c.h", 3472, 1244);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6, 1250);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6, 1251);
    return __result_obj__0;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    int i_44;
    memset(&i, 0, sizeof(i));
    memset(&i_44, 0, sizeof(i_44));
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3508, 1245));
            }
        }
    }
    come_free((char*)self->items);
    for(i_44=0    ;i_44<self->size;i_44++){
        if(self->item_existance[i_44]) {
            if(1) {
                (self->keys[i_44] = come_decrement_ref_count(self->keys[i_44], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3517, 1246));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3523, 1247);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3525, 1248));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3526, 1249));
        neo_current_frame = fr.prev;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    int i_45;
    memset(&i, 0, sizeof(i));
    memset(&i_45, 0, sizeof(i_45));
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                (self->items[i] = come_decrement_ref_count(self->items[i], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3508, 1253));
            }
        }
    }
    come_free((char*)self->items);
    for(i_45=0    ;i_45<self->size;i_45++){
        if(self->item_existance[i_45]) {
            if(1) {
                (self->keys[i_45] = come_decrement_ref_count(self->keys[i_45], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3517, 1254));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3523, 1255);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3525, 1256));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3526, 1257));
        neo_current_frame = fr.prev;
}

static void sModule_finalize(struct sModule* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sModule_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sModule_finalize}", 2, 1261);
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sModule_finalize}", 3, 1262);
    }
    if(self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        (self->mLastCode = come_decrement_ref_count(self->mLastCode, (void*)0, (void*)0, 0, 0, (void*)0, "sModule_finalize", 4, 1263));
    }
    if(self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        (self->mLastCode2 = come_decrement_ref_count(self->mLastCode2, (void*)0, (void*)0, 0, 0, (void*)0, "sModule_finalize", 5, 1264));
    }
    if(self!=((void*)0)&&self->mHeader!=((void*)0)) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, self->mHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sModule_finalize}", 6, 1265);
    }
        neo_current_frame = fr.prev;
}

struct sModule* sModule_initialize(struct sModule* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sModule_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  __dec_obj101  ;
    struct buffer*  __dec_obj102  ;
    char*  __dec_obj103  ;
    char*  __dec_obj104  ;
    struct map$2char$phchar$ph* __dec_obj106;
    struct sModule* __result_obj__0;
    __dec_obj101=self->mSourceHead,
    self->mSourceHead=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./common.h", 443, 1221, "struct buffer* "), "./common.h", 443, 1222)), "./common.h", 443, 1224);
    come_call_finalizer(buffer_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 443, 1223);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj102=self->mSource,
    self->mSource=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./common.h", 444, 1225, "struct buffer* "), "./common.h", 444, 1226)), "./common.h", 444, 1228);
    come_call_finalizer(buffer_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 444, 1227);
    __dec_obj103=self->mLastCode,
    self->mLastCode=((void*)0);
    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 445, 1229);
    __dec_obj104=self->mLastCode2,
    self->mLastCode2=((void*)0);
    __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 446, 1230);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj106=self->mHeader,
    self->mHeader=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), "./common.h", 447, 1231, "struct map$2char$phchar$ph*"), "./common.h", 447, 1252)), "./common.h", 6, 1259);
    come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 6, 1258);
        __result_obj__0 = (struct sModule*)come_increment_ref_count(self, "./common.h", 448, 1260);
    come_call_finalizer(sModule_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 448, 1266);
    neo_current_frame = fr.prev;
    come_call_finalizer(sModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 448, 1267);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj107;
    struct map$2char$phsVar$ph* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "./neo-c.h", 3454, 1269, "char** "))), "./neo-c.h", 3454, 1270);
    __right_value0 = (void*)0;
    self->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), "./neo-c.h", 3455, 1271, "struct sVar** "))), "./neo-c.h", 3455, 1272);
    __right_value0 = (void*)0;
    self->hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(128)), "./neo-c.h", 3456, 1273, "unsigned int*"))), "./neo-c.h", 3456, 1274);
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 3457, 1275, "_Bool*"))), "./neo-c.h", 3457, 1276);
    for(i=0    ;i<128;i++){
        self->hashes[i]=0;
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __right_value0 = (void*)0;
    __dec_obj107=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3468, 1277, "struct list$1char$ph*"), "./neo-c.h", 3468, 1278)), "./neo-c.h", 3468, 1280);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3468, 1279);
    self->it=0;
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self, "./neo-c.h", 3472, 1281);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6, 1287);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6, 1288);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    int i_46;
    memset(&i, 0, sizeof(i));
    memset(&i_46, 0, sizeof(i_46));
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3508, 1282);
            }
        }
    }
    come_free((char*)self->items);
    for(i_46=0    ;i_46<self->size;i_46++){
        if(self->item_existance[i_46]) {
            if(1) {
                (self->keys[i_46] = come_decrement_ref_count(self->keys[i_46], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3517, 1283));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3523, 1284);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3525, 1285));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3526, 1286));
        neo_current_frame = fr.prev;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    int i_47;
    memset(&i, 0, sizeof(i));
    memset(&i_47, 0, sizeof(i_47));
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3508, 1290);
            }
        }
    }
    come_free((char*)self->items);
    for(i_47=0    ;i_47<self->size;i_47++){
        if(self->item_existance[i_47]) {
            if(1) {
                (self->keys[i_47] = come_decrement_ref_count(self->keys[i_47], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3517, 1291));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3523, 1292);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3525, 1293));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3526, 1294));
        neo_current_frame = fr.prev;
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable*  parent  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* __dec_obj108;
    struct sVarTable* __result_obj__0;
    __dec_obj108=self->mVars,
    self->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./common.h", 459, 1268, "struct map$2char$phsVar$ph*"), "./common.h", 459, 1289)), "./common.h", 6, 1296);
    come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 6, 1295);
    self->mGlobal=global;
    self->mParent=parent;
        __result_obj__0 = (struct sVarTable*)come_increment_ref_count(self, "./common.h", 462, 1297);
    come_call_finalizer(sVarTable_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 462, 1298);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 462, 1299);
    return __result_obj__0;
}

void sVarTable_finalize(struct sVarTable* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self->mVars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 466, 1300);
    neo_current_frame = fr.prev;
}

struct sBlock* sBlock_initialize(struct sBlock* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* __dec_obj109;
    struct sBlock* __result_obj__0;
    __dec_obj109=self->mNodes,
    self->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./common.h", 477, 1301, "struct list$1sNode$ph*"), "./common.h", 477, 1302)), "./common.h", 477, 1304);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 477, 1303);
        __result_obj__0 = (struct sBlock*)come_increment_ref_count(self, "./common.h", 478, 1305);
    come_call_finalizer(sBlock_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 478, 1306);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 478, 1307);
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 1311));
    }
        neo_current_frame = fr.prev;
}

struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj110  ;
    struct sNodeBase* __result_obj__0;
    self->sline=info->sline;
    __dec_obj110=self->sname,
    self->sname=(char* )come_increment_ref_count(__builtin_string(info->sname,"./common.h",669), "./common.h", 669, 1309);
    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 669, 1308);
    self->sline_real=info->sline_real;
        __result_obj__0 = (struct sNodeBase*)come_increment_ref_count(self, "./common.h", 671, 1310);
    come_call_finalizer(sNodeBase_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 671, 1312);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNodeBase_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 671, 1313);
    return __result_obj__0;
}

int sNodeBase_sline(struct sNodeBase* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_sline"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self->sline;
    neo_current_frame = fr.prev;
}

int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_sline_real"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self->sline_real;
    neo_current_frame = fr.prev;
}

_Bool sNodeBase_terminated(struct sNodeBase* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_terminated"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

char*  sNodeBase_sname(struct sNodeBase* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_sname"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(self->sname, "./common.h", 685, 1314);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./common.h", 685, 1315));
    return __result_obj__0;
}

struct sNode* sNodeBase_left_value(struct sNodeBase* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_left_value"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
        __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCurrentNode_finalize(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCurrentNode_finalize", 2, 1319));
    }
        neo_current_frame = fr.prev;
}

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCurrentNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "./common.h", 697, 1316),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./common.h}", 697, 1317);
        __result_obj__0 = (struct sCurrentNode*)come_increment_ref_count(self, "./common.h", 698, 1318);
    come_call_finalizer(sCurrentNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 698, 1320);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCurrentNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 698, 1321);
    return __result_obj__0;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_sline"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self->sline;
    neo_current_frame = fr.prev;
}

char*  sCurrentNode_sname(struct sCurrentNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_sname"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(self->sname, "./common.h", 707, 1322);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./common.h", 707, 1323));
    return __result_obj__0;
}

char*  sCurrentNode_kind(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCurrentNode","./common.h",712))), "./common.h", 712, 1324);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 712, 1325));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./common.h", 712, 1326));
    return __result_obj__0;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_48  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
                __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_48,0,sizeof(char* ));
        __result_obj__0 = result_48;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_end"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
            neo_current_frame = fr.prev;
}

static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_next"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_49  ;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
                __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_49,0,sizeof(char* ));
        __result_obj__0 = result_49;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_operator_load_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sVar*  default_value  ;
    struct sVar*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    memset(&default_value,0,sizeof(struct sVar* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4167, 1333);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4167, 1334);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4167, 1335);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right5 = (self->size); if(__neo_div_right5 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right5; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "./neo-c.h", 4179, 1336);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4179, 1337);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4179, 1338);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4186, 1339);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4186, 1340);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4186, 1341);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4190, 1342);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4190, 1343);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4190, 1344);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4194, 1345);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4194, 1346);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4194, 1347);
    return __result_obj__0;
}

static struct sVar*  map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_operator_load_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sVar*  default_value  ;
    struct sVar*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    memset(&default_value,0,sizeof(struct sVar* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4167, 1348);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4167, 1349);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4167, 1350);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right6 = (self->size); if(__neo_div_right6 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right6; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "./neo-c.h", 4179, 1351);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4179, 1352);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4179, 1353);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4186, 1354);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4186, 1355);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4186, 1356);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4190, 1357);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4190, 1358);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4190, 1359);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4194, 1360);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4194, 1361);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4194, 1362);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char*  v1  , struct sType*  v2  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  __dec_obj111  ;
    struct sType*  __dec_obj112  ;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    __dec_obj111=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "./neo-c.h", 4605, 1367);
    __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4605, 1366);
    __dec_obj112=self->v2,
    self->v2=(struct sType* )come_increment_ref_count(v2, "./neo-c.h", 4606, 1369);
    come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 4606, 1368);
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self, "./neo-c.h", 4608, 1370);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4608, 1371);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4608, 1372));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4608, 1373);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4608, 1374);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem;
    struct tuple2$2char$phsType$ph* __dec_obj113;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_50;
    struct tuple2$2char$phsType$ph* __dec_obj114;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_51;
    struct tuple2$2char$phsType$ph* __dec_obj115;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_50, 0, sizeof(litem_50));
    memset(&litem_51, 0, sizeof(litem_51));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1673, 1385);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./neo-c.h", 1677, 1386, "struct list_item$1tuple2$2char$phsType$ph$ph*"))), "./neo-c.h", 1677, 1387);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj113=litem->item,
        litem->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item, "./neo-c.h", 1681, 1389);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1681, 1388);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_50=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./neo-c.h", 1687, 1390, "struct list_item$1tuple2$2char$phsType$ph$ph*"))), "./neo-c.h", 1687, 1391);
        litem_50->prev=self->head;
        litem_50->next=((void*)0);
        __dec_obj114=litem_50->item,
        litem_50->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item, "./neo-c.h", 1691, 1393);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1691, 1392);
        self->tail=litem_50;
        self->head->next=litem_50;
    }
    else {
        __right_value0 = (void*)0;
        litem_51=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./neo-c.h", 1697, 1394, "struct list_item$1tuple2$2char$phsType$ph$ph*"))), "./neo-c.h", 1697, 1395);
        litem_51->prev=self->tail;
        litem_51->next=((void*)0);
        __dec_obj115=litem_51->item,
        litem_51->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item, "./neo-c.h", 1701, 1397);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1701, 1396);
        self->tail->next=litem_51;
        self->tail=litem_51;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1709, 1398);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsType$ph* result;
    char*  __dec_obj116  ;
    struct sType*  __dec_obj117  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count((void*)0, "tuple2$2char$phsType$ph_clone", 4, 1399);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsType$ph_clone}", 4, 1400);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 5, 1401, "struct tuple2$2char$phsType$ph*"), "tuple2$2char$phsType$ph_clone", 5, 1402);
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj116=result->v1,
        result->v1=(char* )come_increment_ref_count((char* )come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 6, 1403, "char* "), "tuple2$2char$phsType$ph_clone", 6, 1405);
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0, "tuple2$2char$phsType$ph_clone", 6, 1404);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj117=result->v2,
        result->v2=(struct sType* )come_increment_ref_count(sType_clone(self->v2), "tuple2$2char$phsType$ph_clone", 7, 1407);
        come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph_clone", 7, 1406);
    }
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result, "tuple2$2char$phsType$ph_clone", 8, 1408);
    come_call_finalizer(tuple2$2char$phsType$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsType$ph_clone}", 8, 1411);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsType$ph_clone}", 8, 1412);
    return __result_obj__0;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph_finalize", 2, 1409));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph_finalize}", 3, 1410);
    }
        neo_current_frame = fr.prev;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
                    neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj120  ;
    struct list_item$1CVALUE$ph* litem_59;
    struct CVALUE*  __dec_obj121  ;
    struct list_item$1CVALUE$ph* litem_60;
    struct CVALUE*  __dec_obj122  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_59, 0, sizeof(litem_59));
    memset(&litem_60, 0, sizeof(litem_60));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1673, 1451);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1677, 1452, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1677, 1453);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj120=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1681, 1455);
        come_call_finalizer(CVALUE_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1681, 1454);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_59=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1687, 1456, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1687, 1457);
        litem_59->prev=self->head;
        litem_59->next=((void*)0);
        __dec_obj121=litem_59->item,
        litem_59->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1691, 1459);
        come_call_finalizer(CVALUE_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1691, 1458);
        self->tail=litem_59;
        self->head->next=litem_59;
    }
    else {
        __right_value0 = (void*)0;
        litem_60=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1697, 1460, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1697, 1461);
        litem_60->prev=self->tail;
        litem_60->next=((void*)0);
        __dec_obj122=litem_60->item,
        litem_60->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1701, 1463);
        come_call_finalizer(CVALUE_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1701, 1462);
        self->tail->next=litem_60;
        self->tail=litem_60;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1709, 1464);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  class_name  ;
    void* __right_value1 = (void*)0;
    struct sClass*  current_stack  ;
    struct sVarTable*  vtable  ;
    struct map$2char$phsVar$ph* _o2_saved_5;
    char*  it  ;
    char* key;
    void* __right_value2 = (void*)0;
    struct sVar*  value  ;
    struct sType*  type2  ;
    struct tuple2$2char$phsType$ph* item;
    struct sType*  type3  ;
    struct tuple2$2char$phsType$ph* item2;
    struct sType*  type3_52  ;
    struct tuple2$2char$phsType$ph* item2_53;
    struct map$2char$phsVar$ph* _o2_saved_6;
    char*  it_54  ;
    char* key_55;
    struct sVar*  value_56  ;
    struct sType*  type2_57  ;
    struct tuple2$2char$phsType$ph* item_58;
    struct CVALUE*  come_value  ;
    char*  __dec_obj118  ;
    struct sType*  __dec_obj119  ;
    _Bool __result_obj__0;
    memset(&class_name, 0, sizeof(class_name));
    memset(&current_stack, 0, sizeof(current_stack));
    memset(&vtable, 0, sizeof(vtable));
    memset(&_o2_saved_5, 0, sizeof(_o2_saved_5));
    memset(&it, 0, sizeof(it));
    memset(&key, 0, sizeof(key));
    memset(&value, 0, sizeof(value));
    memset(&type2, 0, sizeof(type2));
    memset(&item, 0, sizeof(item));
    memset(&type3, 0, sizeof(type3));
    memset(&item2, 0, sizeof(item2));
    memset(&type3_52, 0, sizeof(type3_52));
    memset(&item2_53, 0, sizeof(item2_53));
    memset(&_o2_saved_6, 0, sizeof(_o2_saved_6));
    memset(&it_54, 0, sizeof(it_54));
    memset(&key_55, 0, sizeof(key_55));
    memset(&value_56, 0, sizeof(value_56));
    memset(&type2_57, 0, sizeof(type2_57));
    memset(&item_58, 0, sizeof(item_58));
    memset(&come_value, 0, sizeof(come_value));
    info->current_stack_num++;
    class_name=(char* )come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num), "./common.h", 718, 1327);
    __right_value0 = (void*)0;
    current_stack=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), "./common.h", 719, 1328, "struct sClass* "), "./common.h", 719, 1330),(char* )come_increment_ref_count(class_name, "./common.h", 719, 1329),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0), "./common.h", 719, 1331);
    vtable=info->lv_table;
    while(vtable) {
        for(_o2_saved_5=(struct map$2char$phsVar$ph*)come_increment_ref_count(vtable->mVars, "./common.h", 724, 1332),it=map$2char$phsVar$ph_begin(_o2_saved_5)        ;!map$2char$phsVar$ph_end(_o2_saved_5);it=map$2char$phsVar$ph_next(_o2_saved_5)){
            key=it;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            value=((struct sVar* )(__right_value2=map$2char$phsVar$ph_operator_load_element(vtable->mVars,((char* )(__right_value1=__builtin_string(key,"./common.h",726))))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 726, 1363));
            __right_value0 = (void*)0;
            type2=(struct sType* )come_increment_ref_count(sType_clone(value->mType), "./common.h", 728, 1364);
            type2->mPointerNum++;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 732, 1365, "struct tuple2$2char$phsType$ph"), "./common.h", 2, 1375),(char* )come_increment_ref_count(__builtin_string(value->mCValueName,"./common.h",732), "./common.h", 2, 1376),(struct sType* )come_increment_ref_count(type2, "./common.h", 2, 1377)), "./common.h", 732, 1378);
            if(value->mCValueName!=((void*)0)) {
                if(strcmp(value->mCValueName,"__list_values")==0) {
                }
                else if(strcmp(value->mCValueName,"__map_keys")==0) {
                }
                else if(strcmp(value->mCValueName,"__map_element")==0) {
                }
                else if(strncmp(value->mCValueName,"_o2_saved_",10)==0) {
                }
                else if(string_operator_equals(value->mType->mClass->mName,"va_list")||string_operator_equals(value->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(type2->mArrayPointerType) {
                    __right_value0 = (void*)0;
                    type3=(struct sType* )come_increment_ref_count(sType_clone(type2), "./common.h", 751, 1379);
                    type3->mPointerNum--;
                    type3->mArrayPointerNum++;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    item2=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 755, 1380, "struct tuple2$2char$phsType$ph"), "./common.h", 755, 1381),(char* )come_increment_ref_count(__builtin_string(value->mCValueName,"./common.h",755), "./common.h", 755, 1382),(struct sType* )come_increment_ref_count(type3, "./common.h", 755, 1383)), "./common.h", 755, 1384);
                    __right_value0 = (void*)0;
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2), "./common.h", 756, 1413));
                    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 768, 1414);
                    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 768, 1415);
                }
                else if(list$1sNode$ph_length(type2->mArrayNum)>0) {
                    __right_value0 = (void*)0;
                    type3_52=(struct sType* )come_increment_ref_count(sType_clone(type2), "./common.h", 759, 1416);
                    type3_52->mPointerNum--;
                    type3_52->mArrayPointerNum++;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    item2_53=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 762, 1417, "struct tuple2$2char$phsType$ph"), "./common.h", 762, 1418),(char* )come_increment_ref_count(__builtin_string(value->mCValueName,"./common.h",762), "./common.h", 762, 1419),(struct sType* )come_increment_ref_count(type3_52, "./common.h", 762, 1420)), "./common.h", 762, 1421);
                    __right_value0 = (void*)0;
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2_53), "./common.h", 763, 1422));
                    come_call_finalizer(sType_finalize, type3_52, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 768, 1423);
                    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item2_53, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 768, 1424);
                }
                else {
                    __right_value0 = (void*)0;
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item), "./common.h", 766, 1425));
                }
            }
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 771, 1426);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 771, 1427);
        }
        vtable=vtable->mParent;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 774, 1428);
    }
    output_struct(current_stack,((void*)0),info,(_Bool)0);
    map$2char$phsClass$ph_insert(info->classes,(char* )come_increment_ref_count(class_name, "./common.h", 776, 1429),(struct sClass* )come_increment_ref_count(current_stack, "./common.h", 776, 1430),(_Bool)0);
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name);
    vtable=info->lv_table;
    add_come_code(info,"({");
    while(vtable) {
        for(_o2_saved_6=(struct map$2char$phsVar$ph*)come_increment_ref_count(vtable->mVars, "./common.h", 786, 1431),it_54=map$2char$phsVar$ph_begin(_o2_saved_6)        ;!map$2char$phsVar$ph_end(_o2_saved_6);it_54=map$2char$phsVar$ph_next(_o2_saved_6)){
            key_55=it_54;
            __right_value0 = (void*)0;
            value_56=((struct sVar* )(__right_value0=map$2char$phsVar$ph_operator_load_element(vtable->mVars,key_55)));
            __right_value0 = (void*)0;
            type2_57=(struct sType* )come_increment_ref_count(sType_clone(value_56->mType), "./common.h", 790, 1432);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            item_58=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 792, 1433, "struct tuple2$2char$phsType$ph"), "./common.h", 792, 1434),(char* )come_increment_ref_count(value_56->mCValueName, "./common.h", 792, 1435),(struct sType* )come_increment_ref_count(type2_57, "./common.h", 792, 1436)), "./common.h", 792, 1437);
            if(value_56->mCValueName!=((void*)0)) {
                if(strcmp(value_56->mCValueName,"__list_values")==0) {
                }
                else if(strcmp(value_56->mCValueName,"__map_keys")==0) {
                }
                else if(strcmp(value_56->mCValueName,"__map_element")==0) {
                }
                else if(strncmp(value_56->mCValueName,"_o2_saved_",10)==0) {
                }
                else if(string_operator_equals(value_56->mType->mClass->mName,"va_list")||string_operator_equals(value_56->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(string_operator_equals(value_56->mFunName,info->come_fun->mName)) {
                        if(string_operator_equals(type2_57->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_56->mCValueName,value_56->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_56->mCValueName,value_56->mCValueName);
                        }
                    }
                    else {
                        if(string_operator_equals(type2_57->mClass->mName,"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_56->mCValueName,value_56->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",info->current_stack_num,value_56->mCValueName,value_56->mCValueName);
                        }
                    }
                }
            }
            come_call_finalizer(sType_finalize, type2_57, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 831, 1438);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item_58, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 831, 1439);
        }
        vtable=vtable->mParent;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 833, 1440);
    }
    add_come_code(info,"})");
    add_come_code(info,",");
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "./common.h", 843, 1441, "struct CVALUE* "), "./common.h", 843, 1442)), "./common.h", 843, 1443);
    __right_value0 = (void*)0;
    __dec_obj118=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num), "./common.h", 845, 1445);
    __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 845, 1444);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj119=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "./common.h", 846, 1446, "struct sType* "), "./common.h", 846, 1447),(char* )come_increment_ref_count(class_name, "./common.h", 846, 1448),(_Bool)0,info,(_Bool)0,0), "./common.h", 846, 1450);
    come_call_finalizer(sType_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 846, 1449);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "./common.h", 851, 1465));
        __result_obj__0 = (_Bool)1;
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 853, 1466));
    come_call_finalizer(sClass_finalize, current_stack, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 853, 1467);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 853, 1468);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNothingNode_finalize(struct sNothingNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNothingNode_finalize", 2, 1472));
    }
        neo_current_frame = fr.prev;
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNothingNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "./common.h", 1216, 1469),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./common.h}", 1216, 1470);
        __result_obj__0 = (struct sNothingNode*)come_increment_ref_count(self, "./common.h", 1217, 1471);
    come_call_finalizer(sNothingNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 1217, 1473);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNothingNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 1217, 1474);
    return __result_obj__0;
}

_Bool sNothingNode_terminated(struct sNothingNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_terminated"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char*  sNothingNode_kind(struct sNothingNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNothingNode","./common.h",1226))), "./common.h", 1226, 1475);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 1226, 1476));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./common.h", 1226, 1477));
    return __result_obj__0;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sNullChecker_finalize(struct sNullChecker* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNullChecker_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNullChecker_finalize", 2, 1483));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sNullChecker_finalize", 3, 1484):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNullChecker* sNullChecker_initialize(struct sNullChecker* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNullChecker_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj123;
    struct sNullChecker* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "./common.h", 1272, 1478),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./common.h}", 1272, 1479);
    __right_value0 = (void*)0;
    __dec_obj123=self->value,
    self->value=(struct sNode*)come_increment_ref_count(sNode_clone(value), "./common.h", 1274, 1481);
    (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0, (void*)0, "./common.h", 1274, 1480) :0);
        __result_obj__0 = (struct sNullChecker*)come_increment_ref_count(self, "./common.h", 1275, 1482);
    come_call_finalizer(sNullChecker_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 1275, 1485);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "./common.h", 1275, 1486):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNullChecker_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 1275, 1487);
    return __result_obj__0;
}

char*  sNullChecker_kind(struct sNullChecker* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNullChecker_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNullChecker","./common.h",1279))), "./common.h", 1279, 1488);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 1279, 1489));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./common.h", 1279, 1490));
    return __result_obj__0;
}

_Bool sNullChecker_compile(struct sNullChecker* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNullChecker_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* value;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type__  ;
    struct sType*  type_  ;
    struct sType*  type  ;
    struct sType*  original_type  ;
    _Bool pointer_type;
    _Bool heap_type;
    char*  type_name  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj124  ;
    struct sType*  __dec_obj125  ;
    char*  __dec_obj126  ;
    char*  __dec_obj127  ;
    char*  __dec_obj128  ;
    memset(&value, 0, sizeof(value));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type__, 0, sizeof(type__));
    memset(&type_, 0, sizeof(type_));
    memset(&type, 0, sizeof(type));
    memset(&original_type, 0, sizeof(original_type));
    memset(&pointer_type, 0, sizeof(pointer_type));
    memset(&heap_type, 0, sizeof(heap_type));
    memset(&type_name, 0, sizeof(type_name));
    memset(&come_value2, 0, sizeof(come_value2));
    value=(struct sNode*)come_increment_ref_count(self->value, "./common.h", 1284, 1491);
    Value=node_compile(value,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "./common.h", 1287, 1492):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "./common.h", 1290, 1493);
    __right_value0 = (void*)0;
    type__=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "./common.h", 1292, 1494);
    __right_value0 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(solve_generics(type__,info->generics_type,info), "./common.h", 1293, 1495);
    __right_value0 = (void*)0;
    type=(struct sType* )come_increment_ref_count(solve_method_generics(type_,info), "./common.h", 1294, 1496);
    original_type=(struct sType* )come_increment_ref_count(type__->mOriginalLoadVarType, "./common.h", 1296, 1497);
    pointer_type=type->mPointerNum>0||type->mArrayPointerNum>0||type->mFunctionPointerNum>0;
    heap_type=pointer_type&&type->mHeap;
    if(original_type) {
        if(list$1sNode$ph_length(original_type->mArrayNum)==1&&type->mArrayPointerNum==1) {
            pointer_type=(_Bool)0;
        }
        if(list$1sNode$ph_length(original_type->mArrayNum)>0&&original_type->mPointerNum==0) {
            pointer_type=(_Bool)0;
        }
    }
    if(!gComeC&&pointer_type&&!info->in_refference) {
        __right_value0 = (void*)0;
        type_name=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)1,(_Bool)1,(_Bool)0,(_Bool)1), "./common.h", 1315, 1498);
        __right_value0 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "./common.h", 1317, 1499, "struct CVALUE* "), "./common.h", 1317, 1500)), "./common.h", 1317, 1501);
        __right_value0 = (void*)0;
        __dec_obj124=come_value2->c_value,
        come_value2->c_value=(char* )come_increment_ref_count(xsprintf("((%s)come_null_checker(%s, \"%s\", %d, %d))",type_name,come_value->c_value,info->sname,info->sline,++info->id), "./common.h", 1319, 1503);
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1319, 1502);
        __right_value0 = (void*)0;
        __dec_obj125=come_value2->type,
        come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(type), "./common.h", 1320, 1505);
        come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 1320, 1504);
        come_value2->var=come_value->var;
        if(come_value->c_value_without_null_checker) {
            __dec_obj126=come_value2->c_value_without_null_checker,
            come_value2->c_value_without_null_checker=(char* )come_increment_ref_count(come_value->c_value_without_null_checker, "./common.h", 1323, 1507);
            __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1323, 1506);
        }
        else if(come_value->c_value_without_cast_object_value) {
            __dec_obj127=come_value2->c_value_without_null_checker,
            come_value2->c_value_without_null_checker=(char* )come_increment_ref_count(come_value->c_value_without_cast_object_value, "./common.h", 1326, 1509);
            __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1326, 1508);
        }
        else {
            __dec_obj128=come_value2->c_value_without_null_checker,
            come_value2->c_value_without_null_checker=(char* )come_increment_ref_count(come_value->c_value, "./common.h", 1329, 1511);
            __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1329, 1510);
        }
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "./common.h", 1332, 1512));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 1338, 1513));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1338, 1514);
    }
    else {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "./common.h", 1335, 1515));
    }
        __result_obj__0 = (_Bool)1;
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "./common.h", 1338, 1516):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1338, 1517);
    come_call_finalizer(sType_finalize, type__, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1338, 1518);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1338, 1519);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1338, 1520);
    come_call_finalizer(sType_finalize, original_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1338, 1521);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sHeapChecker_finalize(struct sHeapChecker* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapChecker_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sHeapChecker_finalize", 2, 1527));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sHeapChecker_finalize", 3, 1528):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sHeapChecker* sHeapChecker_initialize(struct sHeapChecker* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapChecker_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj129;
    struct sHeapChecker* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "./common.h", 1348, 1522),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./common.h}", 1348, 1523);
    __right_value0 = (void*)0;
    __dec_obj129=self->value,
    self->value=(struct sNode*)come_increment_ref_count(sNode_clone(value), "./common.h", 1350, 1525);
    (__dec_obj129 ? __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0, (void*)0, "./common.h", 1350, 1524) :0);
        __result_obj__0 = (struct sHeapChecker*)come_increment_ref_count(self, "./common.h", 1351, 1526);
    come_call_finalizer(sHeapChecker_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 1351, 1529);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "./common.h", 1351, 1530):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sHeapChecker_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 1351, 1531);
    return __result_obj__0;
}

char*  sHeapChecker_kind(struct sHeapChecker* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapChecker_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sHeapChecker","./common.h",1355))), "./common.h", 1355, 1532);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 1355, 1533));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./common.h", 1355, 1534));
    return __result_obj__0;
}

_Bool sHeapChecker_compile(struct sHeapChecker* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapChecker_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* value;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type__  ;
    struct sType*  type_  ;
    struct sType*  type  ;
    struct sType*  original_type  ;
    _Bool pointer_type;
    _Bool heap_type;
    char*  type_name  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj130  ;
    struct sType*  __dec_obj131  ;
    char*  __dec_obj132  ;
    char*  __dec_obj133  ;
    char*  __dec_obj134  ;
    char*  type_name_61  ;
    struct CVALUE*  come_value2_62  ;
    char*  __dec_obj135  ;
    struct sType*  __dec_obj136  ;
    char*  __dec_obj137  ;
    char*  __dec_obj138  ;
    char*  __dec_obj139  ;
    memset(&value, 0, sizeof(value));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&type__, 0, sizeof(type__));
    memset(&type_, 0, sizeof(type_));
    memset(&type, 0, sizeof(type));
    memset(&original_type, 0, sizeof(original_type));
    memset(&pointer_type, 0, sizeof(pointer_type));
    memset(&heap_type, 0, sizeof(heap_type));
    memset(&type_name, 0, sizeof(type_name));
    memset(&come_value2, 0, sizeof(come_value2));
    memset(&type_name_61, 0, sizeof(type_name_61));
    memset(&come_value2_62, 0, sizeof(come_value2_62));
    value=(struct sNode*)come_increment_ref_count(self->value, "./common.h", 1360, 1535);
    Value=node_compile(value,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "./common.h", 1363, 1536):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "./common.h", 1366, 1537);
    __right_value0 = (void*)0;
    type__=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "./common.h", 1368, 1538);
    __right_value0 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(solve_generics(type__,info->generics_type,info), "./common.h", 1369, 1539);
    __right_value0 = (void*)0;
    type=(struct sType* )come_increment_ref_count(solve_method_generics(type_,info), "./common.h", 1370, 1540);
    original_type=(struct sType* )come_increment_ref_count(type__->mOriginalLoadVarType, "./common.h", 1372, 1541);
    pointer_type=type->mPointerNum>0||type->mArrayPointerNum>0||type->mFunctionPointerNum>0;
    heap_type=pointer_type&&type->mHeap;
    if(original_type) {
        if(original_type->mHeap) {
            heap_type=(_Bool)1;
        }
    }
    info->in_refference=(_Bool)1;
    if(!gComeC&&heap_type&&!info->in_refference) {
        __right_value0 = (void*)0;
        type_name=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)1,(_Bool)1,(_Bool)0,(_Bool)1), "./common.h", 1388, 1542);
        __right_value0 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "./common.h", 1390, 1543, "struct CVALUE* "), "./common.h", 1390, 1544)), "./common.h", 1390, 1545);
        __right_value0 = (void*)0;
        __dec_obj130=come_value2->c_value,
        come_value2->c_value=(char* )come_increment_ref_count(xsprintf("((%s)come_heap_checker(%s, \"%s\", %d, %d))",type_name,come_value->c_value,info->sname,info->sline,++info->id), "./common.h", 1392, 1547);
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1392, 1546);
        __right_value0 = (void*)0;
        __dec_obj131=come_value2->type,
        come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(type), "./common.h", 1393, 1549);
        come_call_finalizer(sType_finalize, __dec_obj131,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 1393, 1548);
        come_value2->var=come_value->var;
        if(come_value->c_value_without_null_checker) {
            __dec_obj132=come_value2->c_value_without_null_checker,
            come_value2->c_value_without_null_checker=(char* )come_increment_ref_count(come_value->c_value_without_null_checker, "./common.h", 1396, 1551);
            __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1396, 1550);
        }
        else if(come_value->c_value_without_cast_object_value) {
            __dec_obj133=come_value2->c_value_without_null_checker,
            come_value2->c_value_without_null_checker=(char* )come_increment_ref_count(come_value->c_value_without_cast_object_value, "./common.h", 1399, 1553);
            __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1399, 1552);
        }
        else {
            __dec_obj134=come_value2->c_value_without_null_checker,
            come_value2->c_value_without_null_checker=(char* )come_increment_ref_count(come_value->c_value, "./common.h", 1402, 1555);
            __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1402, 1554);
        }
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "./common.h", 1405, 1556));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 1431, 1557));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1431, 1558);
    }
    else if(!gComeC&&pointer_type&&!info->in_refference) {
        __right_value0 = (void*)0;
        type_name_61=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)1,(_Bool)1,(_Bool)0,(_Bool)1), "./common.h", 1408, 1559);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value2_62=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "./common.h", 1410, 1560, "struct CVALUE* "), "./common.h", 1410, 1561)), "./common.h", 1410, 1562);
        __right_value0 = (void*)0;
        __dec_obj135=come_value2_62->c_value,
        come_value2_62->c_value=(char* )come_increment_ref_count(xsprintf("((%s)come_null_checker(%s, \"%s\", %d, %d))",type_name_61,come_value->c_value,info->sname,info->sline,++info->id), "./common.h", 1412, 1564);
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1412, 1563);
        __right_value0 = (void*)0;
        __dec_obj136=come_value2_62->type,
        come_value2_62->type=(struct sType* )come_increment_ref_count(sType_clone(type), "./common.h", 1413, 1566);
        come_call_finalizer(sType_finalize, __dec_obj136,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 1413, 1565);
        come_value2_62->var=come_value->var;
        if(come_value->c_value_without_null_checker) {
            __dec_obj137=come_value2_62->c_value_without_null_checker,
            come_value2_62->c_value_without_null_checker=(char* )come_increment_ref_count(come_value->c_value_without_null_checker, "./common.h", 1416, 1568);
            __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1416, 1567);
        }
        else if(come_value->c_value_without_cast_object_value) {
            __dec_obj138=come_value2_62->c_value_without_null_checker,
            come_value2_62->c_value_without_null_checker=(char* )come_increment_ref_count(come_value->c_value_without_cast_object_value, "./common.h", 1419, 1570);
            __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1419, 1569);
        }
        else {
            __dec_obj139=come_value2_62->c_value_without_null_checker,
            come_value2_62->c_value_without_null_checker=(char* )come_increment_ref_count(come_value->c_value, "./common.h", 1422, 1572);
            __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0, (void*)0, "./common.h", 1422, 1571);
        }
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2_62, "./common.h", 1425, 1573));
        (type_name_61 = come_decrement_ref_count(type_name_61, (void*)0, (void*)0, 0, 0, (void*)0, "./common.h", 1431, 1574));
        come_call_finalizer(CVALUE_finalize, come_value2_62, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1431, 1575);
    }
    else {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "./common.h", 1428, 1576));
    }
        __result_obj__0 = (_Bool)1;
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "./common.h", 1431, 1577):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1431, 1578);
    come_call_finalizer(sType_finalize, type__, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1431, 1579);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1431, 1580);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1431, 1581);
    come_call_finalizer(sType_finalize, original_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1431, 1582);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sFunNode_finalize(struct sFunNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFunNode_finalize", 2, 1588));
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        come_call_finalizer(sFun_finalize, self->mFun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunNode_finalize}", 3, 1589);
    }
        neo_current_frame = fr.prev;
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun*  fun  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sFun*  __dec_obj140  ;
    struct sFunNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count(((struct sNodeBase*)self), "./common.h", 1577, 1583),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./common.h}", 1577, 1584);
    __dec_obj140=self->mFun,
    self->mFun=(struct sFun* )come_increment_ref_count(fun, "./common.h", 1579, 1586);
    come_call_finalizer(sFun_finalize, __dec_obj140,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h", 1579, 1585);
        __result_obj__0 = (struct sFunNode*)come_increment_ref_count(self, "./common.h", 1580, 1587);
    come_call_finalizer(sFunNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 1580, 1590);
    come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./common.h}", 1580, 1591);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFunNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./common.h}", 1580, 1592);
    return __result_obj__0;
}

char*  sFunNode_kind(struct sFunNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sFunNode","./common.h",1584))), "./common.h", 1584, 1593);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 1584, 1594));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./common.h", 1584, 1595));
    return __result_obj__0;
}

static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph$p_operator_load_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    memset(&default_value,0,sizeof(struct sFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4167, 1599);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4167, 1600);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4167, 1601);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right7 = (self->size); if(__neo_div_right7 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right7; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4179, 1602);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4179, 1603);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4179, 1604);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4186, 1605);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4186, 1606);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4186, 1607);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4190, 1608);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4190, 1609);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4190, 1610);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4194, 1611);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4194, 1612);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4194, 1613);
    return __result_obj__0;
}

static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_operator_load_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    memset(&default_value,0,sizeof(struct sFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4167, 1614);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4167, 1615);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4167, 1616);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=({ __typeof__(self->size) __neo_div_right8 = (self->size); if(__neo_div_right8 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (key_hash) % __neo_div_right8; });
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4179, 1617);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4179, 1618);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4179, 1619);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4186, 1620);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4186, 1621);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4186, 1622);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4190, 1623);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4190, 1624);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4190, 1625);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4194, 1626);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4194, 1627);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4194, 1628);
    return __result_obj__0;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sFun*  come_fun  ;
    int right_value_num;
    int right_value_max;
    int max_conditional;
    _Bool unsafe_mode;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int block_level;
    void* __right_value2 = (void*)0;
    _Bool _conditional_value_X0;
    memset(&come_fun, 0, sizeof(come_fun));
    memset(&right_value_num, 0, sizeof(right_value_num));
    memset(&right_value_max, 0, sizeof(right_value_max));
    memset(&max_conditional, 0, sizeof(max_conditional));
    memset(&unsafe_mode, 0, sizeof(unsafe_mode));
    memset(&block_level, 0, sizeof(block_level));
    come_fun=info->come_fun;
    info->come_fun=self->mFun;
    info->come_fun->mDefineReturnVar=(_Bool)0;
    right_value_num=info->right_value_num;
    info->right_value_num=0;
    right_value_max=info->right_value_max;
    info->right_value_max=0;
    max_conditional=info->max_conditional;
    info->max_conditional=0;
    unsafe_mode=gComeSafe;
    if(self->mFun->mBlock) {
        if(!gComeC&&!info->come_fun->mResultType->mNorecord) {
            add_come_code_at_function_head(info,((char*)(__right_value1=xsprintf("struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = \"\%s\"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;\n",((char* )(__right_value0=string_to_string(info->come_fun->mName)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 1608, 1596));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 1608, 1597));
        }
        block_level=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level;
        if(!gComeC&&!info->inhibits_output_code2&&!info->come_fun->mResultType->mNorecord) {
            __right_value0 = (void*)0;
            add_come_code(info,"%s",((char* )(__right_value0=buffer_to_string(self->mFun->mSourceEnd))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 1619, 1598));
            add_come_code_no_indent(info,"neo_current_frame = fr.prev;\n");
        }
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X0=(!gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2&&((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_memleak_checker"))))))));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 1623, 1629));
        come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./common.h}", 3, 1630);
_conditional_value_X0;})) {
            free_objects(info->gv_table,((void*)0),info,(_Bool)0);
            __right_value0 = (void*)0;
            add_come_code(info,((char* )(__right_value0=xsprintf("come_memleak_checker();\n"))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./common.h", 1625, 1631));
        }
    }
    gComeSafe=unsafe_mode;
    info->come_fun=come_fun;
    info->right_value_max=right_value_max;
    info->right_value_num=right_value_num;
    info->max_conditional=max_conditional;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

