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

struct sNullNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sAddNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sSubNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sMultNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sDivNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sModNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLShiftNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sRShiftNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtEqNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtEqNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEqNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEqNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEq2Node
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEq2Node
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sXOrNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndAndNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrOrNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sCommaNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sConditionalNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
};

struct sTypeNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
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
_Bool neo_frame_is_alive(unsigned long  int frame_id);
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
struct Result$1_IO_FILE$p* xfopen(const char* file_name, const char* mode);
struct Result$1buffer$ph* FILE_fread(struct _IO_FILE*  f  );
struct Result$1int$* FILE_fwrite(struct _IO_FILE*  f  , const char* str);
struct Result$1int$* FILE_fclose(struct _IO_FILE*  f  );
struct Result$1_IO_FILE$p* FILE_fprintf(struct _IO_FILE*  f  , const char* msg, ...);
struct Result$1list$1char$ph$ph* FILE_readlines(struct _IO_FILE*  f  );
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
struct sNode* create_try_operator_node(struct sNode* node, struct sInfo*  info  );
struct sNode* post_op_v13(struct sNode* node, struct sInfo*  info  );
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
_Bool is_ref_or_optional_type_for_operator(struct sType*  type  , struct sInfo*  info  );
_Bool reject_ref_optional_unary_operator(const char* op_name, struct CVALUE*  value  , struct sInfo*  info  );
_Bool reject_ref_optional_binary_operator(const char* op_name, struct CVALUE*  left_value  , struct CVALUE*  right_value  , struct sInfo*  info  );
_Bool operator_overload_fun(struct sType*  type  , const char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE*  left_value  , struct CVALUE*  right_value  , _Bool break_guard, struct sInfo*  info  );
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo*  info  );
char*  sNullNode_kind(struct sNullNode* self);
_Bool sNullNode_compile(struct sNullNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sNullNode_finalize(struct sNullNode* self);
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
struct sNode* create_null_node(struct sInfo*  info  );
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sAddNode_kind(struct sAddNode* self);
_Bool sAddNode_compile(struct sAddNode* self, struct sInfo*  info  );
static struct sNode* sNode_clone(struct sNode* self);
static void sAddNode_finalize(struct sAddNode* self);
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
struct sNode* add_node(struct sNode* node, struct sNode* right, struct sInfo*  info  );
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sSubNode_kind(struct sSubNode* self);
_Bool sSubNode_compile(struct sSubNode* self, struct sInfo*  info  );
static void sSubNode_finalize(struct sSubNode* self);
struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sMultNode_kind(struct sMultNode* self);
_Bool sMultNode_compile(struct sMultNode* self, struct sInfo*  info  );
static void sMultNode_finalize(struct sMultNode* self);
static char*  create_zero_division_checked_binary_code(struct CVALUE*  left_value  , struct CVALUE*  right_value  , const char* op, const char* message, struct sInfo*  info  );
struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sDivNode_kind(struct sDivNode* self);
_Bool sDivNode_compile(struct sDivNode* self, struct sInfo*  info  );
static void sDivNode_finalize(struct sDivNode* self);
struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sModNode_kind(struct sModNode* self);
_Bool sModNode_compile(struct sModNode* self, struct sInfo*  info  );
static void sModNode_finalize(struct sModNode* self);
struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sLShiftNode_kind(struct sLShiftNode* self);
_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo*  info  );
static void sLShiftNode_finalize(struct sLShiftNode* self);
struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sRShiftNode_kind(struct sRShiftNode* self);
_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo*  info  );
static void sRShiftNode_finalize(struct sRShiftNode* self);
struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sGtEqNode_kind(struct sGtEqNode* self);
_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo*  info  );
static void sGtEqNode_finalize(struct sGtEqNode* self);
struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sLtEqNode_kind(struct sLtEqNode* self);
_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo*  info  );
static void sLtEqNode_finalize(struct sLtEqNode* self);
struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sLtNode_kind(struct sLtNode* self);
_Bool sLtNode_compile(struct sLtNode* self, struct sInfo*  info  );
static void sLtNode_finalize(struct sLtNode* self);
struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sGtNode_kind(struct sGtNode* self);
_Bool sGtNode_compile(struct sGtNode* self, struct sInfo*  info  );
static void sGtNode_finalize(struct sGtNode* self);
struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sEqNode_kind(struct sEqNode* self);
_Bool sEqNode_compile(struct sEqNode* self, struct sInfo*  info  );
static void sEqNode_finalize(struct sEqNode* self);
struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sNotEqNode_kind(struct sNotEqNode* self);
_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo*  info  );
static void sNotEqNode_finalize(struct sNotEqNode* self);
struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sEq2Node_kind(struct sEq2Node* self);
_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo*  info  );
static void sEq2Node_finalize(struct sEq2Node* self);
struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sNotEq2Node_kind(struct sNotEq2Node* self);
_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo*  info  );
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sAndNode_kind(struct sAndNode* self);
_Bool sAndNode_compile(struct sAndNode* self, struct sInfo*  info  );
static void sAndNode_finalize(struct sAndNode* self);
struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sXOrNode_kind(struct sXOrNode* self);
_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo*  info  );
static void sXOrNode_finalize(struct sXOrNode* self);
struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sOrNode_kind(struct sOrNode* self);
_Bool sOrNode_compile(struct sOrNode* self, struct sInfo*  info  );
static void sOrNode_finalize(struct sOrNode* self);
struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sAndAndNode_kind(struct sAndAndNode* self);
_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo*  info  );
static void sAndAndNode_finalize(struct sAndAndNode* self);
struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sOrOrNode_kind(struct sOrOrNode* self);
_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo*  info  );
static void sOrOrNode_finalize(struct sOrOrNode* self);
struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo*  info  );
char*  sCommaNode_kind(struct sCommaNode* self);
_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo*  info  );
static void sCommaNode_finalize(struct sCommaNode* self);
struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo*  info  );
char*  sConditionalNode_kind(struct sConditionalNode* self);
_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo*  info  );
static void sConditionalNode_finalize(struct sConditionalNode* self);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo*  info  );
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* mult_exp(struct sInfo*  info  );
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo*  info  );
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo*  info  );
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo*  info  );
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
struct sNode* eq_exp(struct sInfo*  info  );
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo*  info  );
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo*  info  );
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo*  info  );
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo*  info  );
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo*  info  );
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* create_comma_exp(struct sNode* node, struct sNode* node2, struct sInfo*  info  );
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* comma_exp(struct sInfo*  info  );
struct sNode* conditional_exp(struct sInfo*  info  );
struct sTypeNode* sTypeNode_initialize(struct sTypeNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sTypeNode_kind(struct sTypeNode* self);
_Bool sTypeNode_compile(struct sTypeNode* self, struct sInfo*  info  );
static void sTypeNode_finalize(struct sTypeNode* self);
struct sNode* expression_v13(struct sInfo*  info  , _Bool type_name_exp);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct sTypeNode* sTypeNode_clone(struct sTypeNode* self);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo*  info  );
// uniq global variable
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
_Bool is_ref_or_optional_type_for_operator(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "is_ref_or_optional_type_for_operator"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sType*  type2  ;
    char* class_name;
    memset(&type2, 0, sizeof(type2));
    memset(&class_name, 0, sizeof(class_name));
    if(type==((void*)0)||type->mClass==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    type2=type;
    if(type->mNoSolvedGenericsType&&type->mNoSolvedGenericsType->mClass) {
        type2=type->mNoSolvedGenericsType;
    }
    class_name=type2->mClass->mName;
        neo_current_frame = fr.prev;
    return charp_operator_equals(class_name,"ref")||charp_operator_equals(class_name,"optional")||(strlen(class_name)>=4&&memcmp(class_name,"ref$",4)==0)||(strlen(class_name)>=9&&memcmp(class_name,"optional$",9)==0);
    neo_current_frame = fr.prev;
}

_Bool reject_ref_optional_unary_operator(const char* op_name, struct CVALUE*  value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "reject_ref_optional_unary_operator"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(value&&is_ref_or_optional_type_for_operator(value->type,info)) {
        err_msg(info,"invalid operator(%s). ref/optional type is not supported this operator",op_name);
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

_Bool reject_ref_optional_binary_operator(const char* op_name, struct CVALUE*  left_value  , struct CVALUE*  right_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "reject_ref_optional_binary_operator"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if((left_value&&is_ref_or_optional_type_for_operator(left_value->type,info))||(right_value&&is_ref_or_optional_type_for_operator(right_value->type,info))) {
        err_msg(info,"invalid operator(%s). ref/optional type is not supported this operator",op_name);
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

_Bool operator_overload_fun(struct sType*  type  , const char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE*  left_value  , struct CVALUE*  right_value  , _Bool break_guard, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "operator_overload_fun"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool __result_obj__0;
    struct sType*  generics_type  ;
    struct sType*  type2  ;
    struct sClass*  klass  ;
    char* class_name;
    void* __right_value0 = (void*)0;
    struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var1
;    char*  fun_name2  =0;
    struct sFun*  operator_fun  =0;
    struct sGenericsFun*  generics_fun  =0;
    _Bool result;
    struct sRightValueObject*  right_value_object  ;
    struct sRightValueObject*  right_value_object_0  ;
    struct sNode* obj;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* node;
    _Bool Value;
    memset(&generics_type, 0, sizeof(generics_type));
    memset(&type2, 0, sizeof(type2));
    memset(&klass, 0, sizeof(klass));
    memset(&class_name, 0, sizeof(class_name));
    memset(&result, 0, sizeof(result));
    memset(&right_value_object, 0, sizeof(right_value_object));
    memset(&right_value_object_0, 0, sizeof(right_value_object_0));
    memset(&obj, 0, sizeof(obj));
    memset(&params, 0, sizeof(params));
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    if(reject_ref_optional_binary_operator(fun_name,left_value,right_value,info)) {
                __result_obj__0 = (_Bool)1;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 47, 1):(void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 47, 2):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(type->mNoSolvedGenericsType) {
        generics_type=type->mNoSolvedGenericsType;
    }
    else {
        generics_type=type;
    }
    if(type->mNoSolvedGenericsType) {
        type2=type->mNoSolvedGenericsType;
    }
    else {
        type2=type;
    }
    klass=type2->mClass;
    class_name=klass->mName;
    multiple_assign_var1=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value0=get_method(fun_name,type2,info,(_Bool)0)));
    fun_name2=(char* )come_increment_ref_count(multiple_assign_var1->v1, "42op2.nc", 68, 3);
    operator_fun=multiple_assign_var1->v2;
    generics_fun=multiple_assign_var1->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 68, 5);
    result=(_Bool)0;
    if(operator_fun&&(list$1sType$ph_length(type2->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&(left_value->type->mOriginalLoadVarType&&list$1sNode$ph_length(left_value->type->mOriginalLoadVarType->mArrayNum)>0||left_value->type->mPointerNum==right_value->type->mPointerNum))||charp_operator_equals(fun_name,"operator_mult"))) {
        {
            right_value_object=left_value->right_value_objects;
            if(right_value_object) {
                right_value_object->mFreed=(_Bool)1;
            }
        }
        {
            right_value_object_0=right_value->right_value_objects;
            if(right_value_object_0) {
                right_value_object_0->mFreed=(_Bool)1;
            }
        }
        obj=(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 88, 6);
        __right_value0 = (void*)0;
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "42op2.nc", 89, 7, "struct list$1tuple2$2char$phsNode$ph$ph*"), "42op2.nc", 89, 15)), "42op2.nc", 89, 16);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "42op2.nc", 91, 31, "struct tuple2$2char$phsNode$ph"), "42op2.nc", 3, 41),(char* )come_increment_ref_count((char* )((void*)0), "42op2.nc", 3, 42),(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 3, 43)), "42op2.nc", 91, 44));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "42op2.nc", 92, 45, "struct tuple2$2char$phsNode$ph"), "42op2.nc", 92, 46),(char* )come_increment_ref_count((char* )((void*)0), "42op2.nc", 92, 47),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 92, 48)), "42op2.nc", 92, 49));
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(create_method_call(fun_name,(struct sNode*)come_increment_ref_count(obj, "42op2.nc", 94, 50),params,((void*)0),0,((void*)0),info,(_Bool)0), "42op2.nc", 94, 51);
        Value=node_compile(node,info);
        if(Value) {
            result=(_Bool)1;
        }
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 101, 52):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 101, 53);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 101, 54):(void*)0);
    }
        __result_obj__0 = result;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 101, 55):(void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 101, 56):(void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "42op2.nc", 101, 57));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3char$phsFun$psGenericsFun$p$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3char$phsFun$psGenericsFun$p$p_finalize", 2, 4));
    }
        neo_current_frame = fr.prev;
}

static int list$1sType$ph_length(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
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

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 1539, 8);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2, 13);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2, 14);
    return __result_obj__0;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1560, 12);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 11);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph$p_finalize", 2, 9));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph$p_finalize", 3, 10):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj1;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_1;
    struct tuple2$2char$phsNode$ph* __dec_obj2;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_2;
    struct tuple2$2char$phsNode$ph* __dec_obj3;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_1, 0, sizeof(litem_1));
    memset(&litem_2, 0, sizeof(litem_2));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1585, 17);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1588, 18, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1588, 19);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj1=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1592, 21);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1592, 20);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1598, 22, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1598, 23);
        litem_1->prev=self->head;
        litem_1->next=((void*)0);
        __dec_obj2=litem_1->item,
        litem_1->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1602, 25);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1602, 24);
        self->tail=litem_1;
        self->head->next=litem_1;
    }
    else {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1608, 26, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1608, 27);
        litem_2->prev=self->tail;
        litem_2->next=((void*)0);
        __dec_obj3=litem_2->item,
        litem_2->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1612, 29);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1612, 28);
        self->tail->next=litem_2;
        self->tail=litem_2;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1620, 30);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  __dec_obj4  ;
    struct sNode* __dec_obj5;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj4=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "./neo-c.h", 4601, 33);
    __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4601, 32);
    __dec_obj5=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "./neo-c.h", 4602, 35);
    (__dec_obj5 ? __dec_obj5 = come_decrement_ref_count(__dec_obj5, ((struct sNode*)__dec_obj5)->finalize, ((struct sNode*)__dec_obj5)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 4602, 34) :0);
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "./neo-c.h", 4604, 36);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4604, 37);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4604, 38));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 4604, 39):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4604, 40);
    return __result_obj__0;
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNullNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNullNode*)come_increment_ref_count(self, "42op2.nc", 108, 58),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 108, 60);
        __result_obj__0 = (struct sNullNode*)come_increment_ref_count(self, "42op2.nc", 111, 61);
    come_call_finalizer(sNullNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 111, 63);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNullNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 111, 64);
    return __result_obj__0;
}

char*  sNullNode_kind(struct sNullNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNullNode","42op2.nc",113))), "42op2.nc", 113, 65);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 113, 66));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 113, 67));
    return __result_obj__0;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj6  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj7  ;
    _Bool __result_obj__0;
    memset(&come_value, 0, sizeof(come_value));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 118, 68, "struct CVALUE* "), "42op2.nc", 118, 69)), "42op2.nc", 118, 70);
    __right_value0 = (void*)0;
    __dec_obj6=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("((void*)0)"), "42op2.nc", 120, 72);
    __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 120, 71);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj7=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 121, 73, "struct sType* "), "42op2.nc", 121, 74),(char*)come_increment_ref_count(xsprintf("void*"), "42op2.nc", 121, 75),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 121, 109);
    come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 121, 108);
    come_value->var=((void*)0);
    come_value->mNullValue=(_Bool)1;
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 127, 129));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 129, 130);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 59));
    }
        neo_current_frame = fr.prev;
}

static void sNullNode_finalize(struct sNullNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNullNode_finalize", 2, 62));
    }
        neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 76);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 77);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 80);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 81);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 82):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 83):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 84));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 85));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 86));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 87));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 88));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 89));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 90));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 91));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 94);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 95);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 97);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 98);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 99);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 100));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 101);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 0, 104);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 105);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 106):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 107);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1560, 79);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 78);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1560, 93);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 92):(void*)0);
    }
            neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1560, 96);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1560, 103);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 102));
    }
            neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj8  ;
    struct list_item$1CVALUE$ph* litem_3;
    struct CVALUE*  __dec_obj9  ;
    struct list_item$1CVALUE$ph* litem_4;
    struct CVALUE*  __dec_obj10  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_3, 0, sizeof(litem_3));
    memset(&litem_4, 0, sizeof(litem_4));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1669, 115);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1673, 116, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1673, 117);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj8=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1677, 119);
        come_call_finalizer(CVALUE_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1677, 118);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1683, 120, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1683, 121);
        litem_3->prev=self->head;
        litem_3->next=((void*)0);
        __dec_obj9=litem_3->item,
        litem_3->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1687, 123);
        come_call_finalizer(CVALUE_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1687, 122);
        self->tail=litem_3;
        self->head->next=litem_3;
    }
    else {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1693, 124, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1693, 125);
        litem_4->prev=self->tail;
        litem_4->next=((void*)0);
        __dec_obj10=litem_4->item,
        litem_4->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1697, 127);
        come_call_finalizer(CVALUE_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1697, 126);
        self->tail->next=litem_4;
        self->tail=litem_4;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1705, 128);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 110));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 111);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 112));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 113));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 114));
    }
            neo_current_frame = fr.prev;
}

struct sNode* create_null_node(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_null_node"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sNullNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 135, 133, "struct sNode");
    _inf_obj_value1=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value1=sNullNode_initialize((struct sNullNode* )come_increment_ref_count((struct sNullNode *)come_calloc(1, sizeof(struct sNullNode )*(1), "42op2.nc", 135, 131, "struct sNullNode* "), "42op2.nc", 135, 132),info))), "42op2.nc", 135, 134);
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    _inf_value1->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "42op2.nc", 135, 141);
    come_call_finalizer(sNullNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 135, 142);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "42op2.nc", 135, 143):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 135, 144):(void*)0);
    return __result_obj__0;
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNullNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNullNode*  result  ;
    char*  __dec_obj11  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNullNode* )come_increment_ref_count((struct sNullNode *)come_calloc(1, sizeof(struct sNullNode )*(1), "sNullNode_clone", 5, 135, "struct sNullNode* "), "sNullNode_clone", 5, 136);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj11=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNullNode_clone", 7, 137, "char* "), "sNullNode_clone", 7, 139);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sNullNode_clone", 7, 138);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sNullNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sNullNode_clone}", 9, 140);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj12;
    struct sNode* __dec_obj13;
    struct sAddNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAddNode*)come_increment_ref_count(self, "42op2.nc", 142, 145),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 142, 146);
    __right_value0 = (void*)0;
    __dec_obj12=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 144, 155);
    (__dec_obj12 ? __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 144, 154) :0);
    __right_value0 = (void*)0;
    __dec_obj13=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 145, 157);
    (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 145, 156) :0);
    self->mQuote=quote;
        __result_obj__0 = (struct sAddNode*)come_increment_ref_count(self, "42op2.nc", 149, 158);
    come_call_finalizer(sAddNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 149, 162);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 149, 163):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 149, 164):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAddNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 149, 165);
    return __result_obj__0;
}

char*  sAddNode_kind(struct sAddNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAddNode","42op2.nc",151))), "42op2.nc", 151, 166);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 151, 167));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 151, 168));
    return __result_obj__0;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_5;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    _Bool left_is_string;
    _Bool right_is_string;
    _Bool left_is_arithmetic;
    _Bool right_is_arithmetic;
    struct sType*  result_type  ;
    struct sType*  __dec_obj48  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj49  ;
    struct sType*  __dec_obj50  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_5, 0, sizeof(Value_5));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&left_is_string, 0, sizeof(left_is_string));
    memset(&right_is_string, 0, sizeof(right_is_string));
    memset(&left_is_arithmetic, 0, sizeof(left_is_arithmetic));
    memset(&right_is_arithmetic, 0, sizeof(right_is_arithmetic));
    memset(&result_type, 0, sizeof(result_type));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 157, 169);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 160, 170):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 163, 171);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 165, 172);
    Value_5=node_compile(right_node,info);
    if(!Value_5) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 168, 173):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 168, 174);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 168, 175):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 171, 176);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 173, 177);
    const char* fun_name="operator_add";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 181, 178),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 181, 179),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        left_is_string=string_operator_equals(left_value->type->mClass->mName,"char")&&left_value->type->mPointerNum==1&&(left_value->c_value&&left_value->c_value[0]==34);
        right_is_string=string_operator_equals(right_value->type->mClass->mName,"char")&&right_value->type->mPointerNum==1&&(right_value->c_value&&right_value->c_value[0]==34);
        left_is_arithmetic=left_value->type->mClass->mNumber||left_value->type->mClass->mFloat||left_value->type->mClass->mEnum;
        right_is_arithmetic=right_value->type->mClass->mNumber||right_value->type->mClass->mFloat||right_value->type->mClass->mEnum;
        if((left_is_arithmetic&&right_is_string)||(right_is_arithmetic&&left_is_string)) {
            err_msg(info,"invalid + between arithmetic type and string. use to_string() or string interpolation.");
                        __result_obj__0 = (_Bool)0;
            ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 195, 180):(void*)0);
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 195, 181);
            ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 195, 182):(void*)0);
            come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 195, 183);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 195, 184);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        result_type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 198, 355);
        if(right_value->type->mPointerNum>0) {
            __right_value0 = (void*)0;
            __dec_obj48=result_type,
            result_type=(struct sType* )come_increment_ref_count(sType_clone(right_value->type), "42op2.nc", 200, 357);
            come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 200, 356);
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 203, 358, "struct CVALUE* "), "42op2.nc", 203, 359)), "42op2.nc", 203, 360);
        __right_value0 = (void*)0;
        __dec_obj49=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s+%s",left_value->c_value,right_value->c_value), "42op2.nc", 205, 362);
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 205, 361);
        __right_value0 = (void*)0;
        __dec_obj50=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "42op2.nc", 206, 364);
        come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 206, 363);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 212, 365));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 215, 366);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 215, 367);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 215, 368):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 215, 369);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 215, 370):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 215, 371);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 215, 372);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 147);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 148):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 149, "struct sNode*"), "sNode_clone", 5, 150);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 151);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 152):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 153):(void*)0);
    return __result_obj__0;
}

static void sAddNode_finalize(struct sAddNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAddNode_finalize", 2, 159));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sAddNode_finalize", 3, 160):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sAddNode_finalize", 4, 161):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj14  ;
    struct sType*  __dec_obj15  ;
    struct list$1sType$ph* __dec_obj19;
    struct sType*  __dec_obj20  ;
    struct sNode* __dec_obj21;
    struct sNode* __dec_obj22;
    char*  __dec_obj23  ;
    char*  __dec_obj24  ;
    char*  __dec_obj25  ;
    char*  __dec_obj26  ;
    char*  __dec_obj27  ;
    char*  __dec_obj28  ;
    char*  __dec_obj29  ;
    char*  __dec_obj30  ;
    struct list$1sNode$ph* __dec_obj34;
    struct list$1sNode$ph* __dec_obj35;
    struct list$1int$* __dec_obj36;
    struct list$1int$* __dec_obj37;
    struct sType*  __dec_obj38  ;
    char*  __dec_obj39  ;
    struct list$1sType$ph* __dec_obj40;
    struct list$1char$ph* __dec_obj44;
    struct sType*  __dec_obj45  ;
    struct sNode* __dec_obj46;
    struct list$1sNode$ph* __dec_obj47;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0, "sType_clone", 4, 185);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 4, 186);
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 187, "struct sType* "), "sType_clone", 5, 188);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 190);
        come_call_finalizer(sType_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 189);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj15=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 192);
        come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 191);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj19=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 76, 222);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 221);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj20=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 224);
        come_call_finalizer(sType_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 223);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj21=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 226);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 225) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 228);
        (__dec_obj22 ? __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 227) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 229, "char* "), "sType_clone", 14, 231);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 230);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 232, "char* "), "sType_clone", 15, 234);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 233);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 235, "char* "), "sType_clone", 16, 237);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 236);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj26=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 238, "char* "), "sType_clone", 17, 240);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 239);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj27=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 241, "char* "), "sType_clone", 18, 243);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 242);
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
        __dec_obj28=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 244, "char* "), "sType_clone", 49, 246);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 245);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj29=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 247, "char* "), "sType_clone", 51, 249);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 248);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj30=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 250, "char* "), "sType_clone", 54, 252);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 251);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 76, 282);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 281);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj35=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 284);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 283);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj36=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 76, 304);
        come_call_finalizer(list$1int$_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 303);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj37=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 306);
        come_call_finalizer(list$1int$_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 305);
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
        __dec_obj38=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 308);
        come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 307);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj39=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 309, "char* "), "sType_clone", 67, 311);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 310);
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
        __dec_obj40=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 313);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 312);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj44=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 76, 345);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 344);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj45=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 347);
        come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 346);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj46=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 349);
        (__dec_obj46 ? __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 348) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj47=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 351);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 350);
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "sType_clone", 77, 352);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 353);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 354);
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1565, 193);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1565, 194);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1567, 195, "struct list$1sType$ph*"), "./neo-c.h", 1567, 199)), "./neo-c.h", 1567, 200);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1572, 215));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1575, 216));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1581, 217);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1581, 218);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1581, 219);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1539, 196);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1539, 197);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1539, 198);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj16  ;
    struct list_item$1sType$ph* litem_6;
    struct sType*  __dec_obj17  ;
    struct list_item$1sType$ph* litem_7;
    struct sType*  __dec_obj18  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_6, 0, sizeof(litem_6));
    memset(&litem_7, 0, sizeof(litem_7));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1585, 201);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1588, 202, "struct list_item$1sType$ph*"))), "./neo-c.h", 1588, 203);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj16=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1592, 205);
        come_call_finalizer(sType_finalize, __dec_obj16,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1592, 204);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1598, 206, "struct list_item$1sType$ph*"))), "./neo-c.h", 1598, 207);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj17=litem_6->item,
        litem_6->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1602, 209);
        come_call_finalizer(sType_finalize, __dec_obj17,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1602, 208);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1608, 210, "struct list_item$1sType$ph*"))), "./neo-c.h", 1608, 211);
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj18=litem_7->item,
        litem_7->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1612, 213);
        come_call_finalizer(sType_finalize, __dec_obj18,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1612, 212);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1620, 214);
    neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1560, 220);
    }
            neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1565, 253);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1565, 254);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1567, 255, "struct list$1sNode$ph*"), "./neo-c.h", 1567, 259)), "./neo-c.h", 1567, 260);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1572, 275));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1575, 276));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1581, 277);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1581, 278);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1581, 279);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1539, 256);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1539, 257);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1539, 258);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj31;
    struct list_item$1sNode$ph* litem_8;
    struct sNode* __dec_obj32;
    struct list_item$1sNode$ph* litem_9;
    struct sNode* __dec_obj33;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_8, 0, sizeof(litem_8));
    memset(&litem_9, 0, sizeof(litem_9));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1585, 261):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1588, 262, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1588, 263);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj31=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1592, 265);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1592, 264) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1598, 266, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1598, 267);
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj32=litem_8->item,
        litem_8->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1602, 269);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1602, 268) :0);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1608, 270, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1608, 271);
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj33=litem_9->item,
        litem_9->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1612, 273);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1612, 272) :0);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1620, 274):(void*)0);
    neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1560, 280);
    }
            neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1565, 285);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1565, 286);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1567, 287, "struct list$1int$*"), "./neo-c.h", 1567, 291)), "./neo-c.h", 1567, 292);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1581, 299);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1581, 300);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1581, 301);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1539, 288);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1539, 289);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1539, 290);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_10;
    struct list_item$1int$* litem_11;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_10, 0, sizeof(litem_10));
    memset(&litem_11, 0, sizeof(litem_11));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1588, 293, "struct list_item$1int$*"))), "./neo-c.h", 1588, 294);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_10=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1598, 295, "struct list_item$1int$*"))), "./neo-c.h", 1598, 296);
        litem_10->prev=self->head;
        litem_10->next=((void*)0);
        litem_10->item=item;
        self->tail=litem_10;
        self->head->next=litem_10;
    }
    else {
        __right_value0 = (void*)0;
        litem_11=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1608, 297, "struct list_item$1int$*"))), "./neo-c.h", 1608, 298);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1560, 302);
    }
            neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1565, 314);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1565, 315);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1567, 316, "struct list$1char$ph*"), "./neo-c.h", 1567, 320)), "./neo-c.h", 1567, 321);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1572, 336, "char* "), "./neo-c.h", 1572, 337));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1575, 338, "char* "), "./neo-c.h", 1575, 339));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1581, 340);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1581, 341);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1581, 342);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1539, 317);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1539, 318);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1539, 319);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj41  ;
    struct list_item$1char$ph* litem_12;
    char*  __dec_obj42  ;
    struct list_item$1char$ph* litem_13;
    char*  __dec_obj43  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_12, 0, sizeof(litem_12));
    memset(&litem_13, 0, sizeof(litem_13));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1585, 322));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1588, 323, "struct list_item$1char$ph*"))), "./neo-c.h", 1588, 324);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj41=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1592, 326);
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1592, 325);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1598, 327, "struct list_item$1char$ph*"))), "./neo-c.h", 1598, 328);
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj42=litem_12->item,
        litem_12->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1602, 330);
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1602, 329);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1608, 331, "struct list_item$1char$ph*"))), "./neo-c.h", 1608, 332);
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj43=litem_13->item,
        litem_13->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1612, 334);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1612, 333);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1620, 335));
    neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1560, 343);
    }
            neo_current_frame = fr.prev;
}

struct sNode* add_node(struct sNode* node, struct sNode* right, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "add_node"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value2;
    struct sAddNode* _inf_obj_value2;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 221, 377, "struct sNode");
    _inf_obj_value2=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value1=sAddNode_initialize((struct sAddNode* )come_increment_ref_count((struct sAddNode *)come_calloc(1, sizeof(struct sAddNode )*(1), "42op2.nc", 221, 373, "struct sAddNode* "), "42op2.nc", 221, 374),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 221, 375),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 221, 376),(_Bool)1,info))), "42op2.nc", 221, 378);
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sAddNode_finalize;
    _inf_value2->clone=(void*)sAddNode_clone;
    _inf_value2->compile=(void*)sAddNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sAddNode_kind;
    _inf_value2->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)), "42op2.nc", 221, 389);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 221, 390):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 221, 391):(void*)0);
    come_call_finalizer(sAddNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 221, 392);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "42op2.nc", 221, 393):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 221, 394):(void*)0);
    return __result_obj__0;
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sAddNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAddNode*  result  ;
    char*  __dec_obj51  ;
    struct sNode* __dec_obj52;
    struct sNode* __dec_obj53;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAddNode* )come_increment_ref_count((struct sAddNode *)come_calloc(1, sizeof(struct sAddNode )*(1), "sAddNode_clone", 5, 379, "struct sAddNode* "), "sAddNode_clone", 5, 380);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj51=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAddNode_clone", 7, 381, "char* "), "sAddNode_clone", 7, 383);
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0, "sAddNode_clone", 7, 382);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj52=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sAddNode_clone", 9, 385);
        (__dec_obj52 ? __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0, (void*)0, "sAddNode_clone", 9, 384) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj53=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sAddNode_clone", 10, 387);
        (__dec_obj53 ? __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0, (void*)0, "sAddNode_clone", 10, 386) :0);
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
        __result_obj__0 = result;
    come_call_finalizer(sAddNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAddNode_clone}", 12, 388);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj54;
    struct sNode* __dec_obj55;
    struct sSubNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSubNode*)come_increment_ref_count(self, "42op2.nc", 228, 395),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 228, 396);
    __right_value0 = (void*)0;
    __dec_obj54=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 230, 398);
    (__dec_obj54 ? __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 230, 397) :0);
    __right_value0 = (void*)0;
    __dec_obj55=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 231, 400);
    (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 231, 399) :0);
    self->mQuote=quote;
        __result_obj__0 = (struct sSubNode*)come_increment_ref_count(self, "42op2.nc", 235, 401);
    come_call_finalizer(sSubNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 235, 405);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 235, 406):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 235, 407):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSubNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 235, 408);
    return __result_obj__0;
}

char*  sSubNode_kind(struct sSubNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSubNode","42op2.nc",237))), "42op2.nc", 237, 409);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 237, 410));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 237, 411));
    return __result_obj__0;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_14;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    struct sType*  result_type  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj56  ;
    struct CVALUE*  come_value  ;
    char*  __dec_obj57  ;
    struct sType*  __dec_obj58  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_14, 0, sizeof(Value_14));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&result_type, 0, sizeof(result_type));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 243, 412);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 246, 413):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 249, 414);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 251, 415);
    Value_14=node_compile(right_node,info);
    if(!Value_14) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 254, 416):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 254, 417);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 254, 418):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 257, 419);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 259, 420);
    const char* fun_name="operator_sub";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 267, 421),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 267, 422),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        result_type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 271, 423);
        if(left_value->type->mPointerNum>0&&right_value->type->mPointerNum>0) {
            __right_value0 = (void*)0;
            __dec_obj56=result_type,
            result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 273, 424, "struct sType* "), "42op2.nc", 273, 425),(char*)come_increment_ref_count(xsprintf("long"), "42op2.nc", 273, 426),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 273, 428);
            come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 273, 427);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 276, 429, "struct CVALUE* "), "42op2.nc", 276, 430)), "42op2.nc", 276, 431);
        __right_value0 = (void*)0;
        __dec_obj57=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s-%s",left_value->c_value,right_value->c_value), "42op2.nc", 278, 433);
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 278, 432);
        __right_value0 = (void*)0;
        __dec_obj58=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "42op2.nc", 279, 435);
        come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 279, 434);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 285, 436));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 288, 437);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 288, 438);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 288, 439):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 288, 440);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 288, 441):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 288, 442);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 288, 443);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSubNode_finalize(struct sSubNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sSubNode_finalize", 2, 402));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sSubNode_finalize", 3, 403):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sSubNode_finalize", 4, 404):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj59;
    struct sNode* __dec_obj60;
    struct sMultNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sMultNode*)come_increment_ref_count(self, "42op2.nc", 296, 444),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 296, 445);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj59=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 299, 447);
    (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 299, 446) :0);
    __right_value0 = (void*)0;
    __dec_obj60=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 300, 449);
    (__dec_obj60 ? __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 300, 448) :0);
        __result_obj__0 = (struct sMultNode*)come_increment_ref_count(self, "42op2.nc", 303, 450);
    come_call_finalizer(sMultNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 303, 454);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 303, 455):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 303, 456):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sMultNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 303, 457);
    return __result_obj__0;
}

char*  sMultNode_kind(struct sMultNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sMultNode","42op2.nc",305))), "42op2.nc", 305, 458);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 305, 459));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 305, 460));
    return __result_obj__0;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_15;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj61  ;
    struct sType*  __dec_obj62  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_15, 0, sizeof(Value_15));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 311, 461);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 314, 462):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 317, 463);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 319, 464);
    Value_15=node_compile(right_node,info);
    if(!Value_15) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 322, 465):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 322, 466);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 322, 467):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 325, 468);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 327, 469);
    const char* fun_name="operator_mult";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 335, 470),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 335, 471),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 339, 472, "struct CVALUE* "), "42op2.nc", 339, 473)), "42op2.nc", 339, 474);
        __right_value0 = (void*)0;
        __dec_obj61=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s*%s",left_value->c_value,right_value->c_value), "42op2.nc", 341, 476);
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 341, 475);
        __right_value0 = (void*)0;
        __dec_obj62=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 342, 478);
        come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 342, 477);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 348, 479));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 351, 480);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 351, 481):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 351, 482);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 351, 483):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 351, 484);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 351, 485);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sMultNode_finalize(struct sMultNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sMultNode_finalize", 2, 451));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sMultNode_finalize", 3, 452):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sMultNode_finalize", 4, 453):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static char*  create_zero_division_checked_binary_code(struct CVALUE*  left_value  , struct CVALUE*  right_value  , const char* op, const char* message, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_zero_division_checked_binary_code"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int id;
    memset(&id, 0, sizeof(id));
    if(info->in_top_level||info->in_typedef||info->in_fun_param||info->in_typeof||info->in_offsetof) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%s %s %s",left_value->c_value,op,right_value->c_value))), "42op2.nc", 358, 486);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 358, 487));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 358, 488));
        return __result_obj__0;
    }
    static int n=0;
    id=++n;
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("({ __typeof__(%s) __neo_div_right%d = (%s); if(__neo_div_right%d == 0) { extern int puts(const char*); extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts(\"%s\"); if(stackframe) stackframe(); else { puts(\"stackframe\"); puts(__func__); } exit(2); } (%s) %s __neo_div_right%d; })",right_value->c_value,id,right_value->c_value,id,message,left_value->c_value,op,id))), "42op2.nc", 363, 489);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 363, 490));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 363, 491));
    return __result_obj__0;
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj63;
    struct sNode* __dec_obj64;
    struct sDivNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDivNode*)come_increment_ref_count(self, "42op2.nc", 370, 492),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 370, 493);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj63=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 373, 495);
    (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 373, 494) :0);
    __right_value0 = (void*)0;
    __dec_obj64=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 374, 497);
    (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 374, 496) :0);
        __result_obj__0 = (struct sDivNode*)come_increment_ref_count(self, "42op2.nc", 377, 498);
    come_call_finalizer(sDivNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 377, 502);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 377, 503):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 377, 504):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDivNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 377, 505);
    return __result_obj__0;
}

char*  sDivNode_kind(struct sDivNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDivNode","42op2.nc",379))), "42op2.nc", 379, 506);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 379, 507));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 379, 508));
    return __result_obj__0;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_16;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj65  ;
    struct sType*  __dec_obj66  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_16, 0, sizeof(Value_16));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 385, 509);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 388, 510):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 391, 511);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 393, 512);
    Value_16=node_compile(right_node,info);
    if(!Value_16) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 396, 513):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 396, 514);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 396, 515):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 399, 516);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 401, 517);
    const char* fun_name="operator_div";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 409, 518),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 409, 519),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 413, 520, "struct CVALUE* "), "42op2.nc", 413, 521)), "42op2.nc", 413, 522);
        __right_value0 = (void*)0;
        __dec_obj65=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(create_zero_division_checked_binary_code(left_value,right_value,"/","division by zero",info), "42op2.nc", 415, 524);
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 415, 523);
        __right_value0 = (void*)0;
        __dec_obj66=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 416, 526);
        come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 416, 525);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 422, 527));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 425, 528);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 425, 529):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 425, 530);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 425, 531):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 425, 532);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 425, 533);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDivNode_finalize(struct sDivNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDivNode_finalize", 2, 499));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sDivNode_finalize", 3, 500):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sDivNode_finalize", 4, 501):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj67;
    struct sNode* __dec_obj68;
    struct sModNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sModNode*)come_increment_ref_count(self, "42op2.nc", 433, 534),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 433, 535);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj67=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 436, 537);
    (__dec_obj67 ? __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 436, 536) :0);
    __right_value0 = (void*)0;
    __dec_obj68=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 437, 539);
    (__dec_obj68 ? __dec_obj68 = come_decrement_ref_count(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 437, 538) :0);
        __result_obj__0 = (struct sModNode*)come_increment_ref_count(self, "42op2.nc", 440, 540);
    come_call_finalizer(sModNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 440, 544);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 440, 545):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 440, 546):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sModNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 440, 547);
    return __result_obj__0;
}

char*  sModNode_kind(struct sModNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sModNode","42op2.nc",442))), "42op2.nc", 442, 548);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 442, 549));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 442, 550));
    return __result_obj__0;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_17;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj69  ;
    struct sType*  __dec_obj70  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_17, 0, sizeof(Value_17));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 448, 551);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 451, 552):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 454, 553);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 456, 554);
    Value_17=node_compile(right_node,info);
    if(!Value_17) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 459, 555):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 459, 556);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 459, 557):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 462, 558);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 464, 559);
    const char* fun_name="operator_mod";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 472, 560),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 472, 561),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 476, 562, "struct CVALUE* "), "42op2.nc", 476, 563)), "42op2.nc", 476, 564);
        __right_value0 = (void*)0;
        __dec_obj69=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(create_zero_division_checked_binary_code(left_value,right_value,"%","modulo by zero",info), "42op2.nc", 478, 566);
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 478, 565);
        __right_value0 = (void*)0;
        __dec_obj70=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 479, 568);
        come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 479, 567);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 485, 569));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 488, 570);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 488, 571):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 488, 572);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 488, 573):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 488, 574);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 488, 575);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sModNode_finalize(struct sModNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sModNode_finalize", 2, 541));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sModNode_finalize", 3, 542):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sModNode_finalize", 4, 543):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj71;
    struct sNode* __dec_obj72;
    struct sLShiftNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLShiftNode*)come_increment_ref_count(self, "42op2.nc", 496, 576),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 496, 577);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj71=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 500, 579);
    (__dec_obj71 ? __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 500, 578) :0);
    __right_value0 = (void*)0;
    __dec_obj72=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 501, 581);
    (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 501, 580) :0);
        __result_obj__0 = (struct sLShiftNode*)come_increment_ref_count(self, "42op2.nc", 504, 582);
    come_call_finalizer(sLShiftNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 504, 586);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 504, 587):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 504, 588):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLShiftNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 504, 589);
    return __result_obj__0;
}

char*  sLShiftNode_kind(struct sLShiftNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLShiftNode","42op2.nc",506))), "42op2.nc", 506, 590);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 506, 591));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 506, 592));
    return __result_obj__0;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_18;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj73  ;
    struct sType*  __dec_obj74  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_18, 0, sizeof(Value_18));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 512, 593);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 515, 594):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 518, 595);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 520, 596);
    Value_18=node_compile(right_node,info);
    if(!Value_18) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 523, 597):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 523, 598);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 523, 599):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 526, 600);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 528, 601);
    const char* fun_name="operator_lshift";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 536, 602),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 536, 603),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 540, 604, "struct CVALUE* "), "42op2.nc", 540, 605)), "42op2.nc", 540, 606);
        __right_value0 = (void*)0;
        __dec_obj73=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s<<%s",left_value->c_value,right_value->c_value), "42op2.nc", 542, 608);
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 542, 607);
        __right_value0 = (void*)0;
        __dec_obj74=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 543, 610);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 543, 609);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 549, 611));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 552, 612);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 552, 613):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 552, 614);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 552, 615):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 552, 616);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 552, 617);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLShiftNode_finalize(struct sLShiftNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLShiftNode_finalize", 2, 583));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sLShiftNode_finalize", 3, 584):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sLShiftNode_finalize", 4, 585):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj75;
    struct sNode* __dec_obj76;
    struct sRShiftNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sRShiftNode*)come_increment_ref_count(self, "42op2.nc", 560, 618),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 560, 619);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj75=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 563, 621);
    (__dec_obj75 ? __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 563, 620) :0);
    __right_value0 = (void*)0;
    __dec_obj76=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 564, 623);
    (__dec_obj76 ? __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 564, 622) :0);
        __result_obj__0 = (struct sRShiftNode*)come_increment_ref_count(self, "42op2.nc", 567, 624);
    come_call_finalizer(sRShiftNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 567, 628);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 567, 629):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 567, 630):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sRShiftNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 567, 631);
    return __result_obj__0;
}

char*  sRShiftNode_kind(struct sRShiftNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sRShiftNode","42op2.nc",569))), "42op2.nc", 569, 632);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 569, 633));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 569, 634));
    return __result_obj__0;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_19;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj77  ;
    struct sType*  __dec_obj78  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_19, 0, sizeof(Value_19));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 575, 635);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 578, 636):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 581, 637);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 583, 638);
    Value_19=node_compile(right_node,info);
    if(!Value_19) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 586, 639):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 586, 640);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 586, 641):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 589, 642);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 591, 643);
    const char* fun_name="operator_rshift";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 599, 644),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 599, 645),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 603, 646, "struct CVALUE* "), "42op2.nc", 603, 647)), "42op2.nc", 603, 648);
        __right_value0 = (void*)0;
        __dec_obj77=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s>>%s",left_value->c_value,right_value->c_value), "42op2.nc", 605, 650);
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 605, 649);
        __right_value0 = (void*)0;
        __dec_obj78=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 606, 652);
        come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 606, 651);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 612, 653));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 615, 654);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 615, 655):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 615, 656);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 615, 657):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 615, 658);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 615, 659);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sRShiftNode_finalize(struct sRShiftNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sRShiftNode_finalize", 2, 625));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sRShiftNode_finalize", 3, 626):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sRShiftNode_finalize", 4, 627):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj79;
    struct sNode* __dec_obj80;
    struct sGtEqNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGtEqNode*)come_increment_ref_count(self, "42op2.nc", 623, 660),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 623, 661);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj79=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 626, 663);
    (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 626, 662) :0);
    __right_value0 = (void*)0;
    __dec_obj80=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 627, 665);
    (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 627, 664) :0);
        __result_obj__0 = (struct sGtEqNode*)come_increment_ref_count(self, "42op2.nc", 630, 666);
    come_call_finalizer(sGtEqNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 630, 670);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 630, 671):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 630, 672):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGtEqNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 630, 673);
    return __result_obj__0;
}

char*  sGtEqNode_kind(struct sGtEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGtEqNode","42op2.nc",632))), "42op2.nc", 632, 674);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 632, 675));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 632, 676));
    return __result_obj__0;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_20;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj81  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj82  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_20, 0, sizeof(Value_20));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 638, 677);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 641, 678):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 644, 679);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 646, 680);
    Value_20=node_compile(right_node,info);
    if(!Value_20) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 649, 681):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 649, 682);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 649, 683):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 652, 684);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 654, 685);
    const char* fun_name="operator_gteq";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 662, 686),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 662, 687),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 666, 688, "struct CVALUE* "), "42op2.nc", 666, 689)), "42op2.nc", 666, 690);
        __right_value0 = (void*)0;
        __dec_obj81=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s>=%s",left_value->c_value,right_value->c_value), "42op2.nc", 668, 692);
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 668, 691);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj82=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 669, 693, "struct sType* "), "42op2.nc", 669, 694),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 669, 695),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 669, 697);
        come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 669, 696);
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 674, 698));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 677, 699);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 677, 700):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 677, 701);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 677, 702):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 677, 703);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 677, 704);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGtEqNode_finalize(struct sGtEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sGtEqNode_finalize", 2, 667));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sGtEqNode_finalize", 3, 668):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sGtEqNode_finalize", 4, 669):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj83;
    struct sNode* __dec_obj84;
    struct sLtEqNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLtEqNode*)come_increment_ref_count(self, "42op2.nc", 685, 705),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 685, 706);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj83=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 688, 708);
    (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 688, 707) :0);
    __right_value0 = (void*)0;
    __dec_obj84=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 689, 710);
    (__dec_obj84 ? __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 689, 709) :0);
        __result_obj__0 = (struct sLtEqNode*)come_increment_ref_count(self, "42op2.nc", 692, 711);
    come_call_finalizer(sLtEqNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 692, 715);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 692, 716):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 692, 717):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLtEqNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 692, 718);
    return __result_obj__0;
}

char*  sLtEqNode_kind(struct sLtEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLtEqNode","42op2.nc",694))), "42op2.nc", 694, 719);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 694, 720));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 694, 721));
    return __result_obj__0;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_21;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj85  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj86  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_21, 0, sizeof(Value_21));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 700, 722);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 703, 723):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 706, 724);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 708, 725);
    Value_21=node_compile(right_node,info);
    if(!Value_21) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 711, 726):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 711, 727);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 711, 728):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 714, 729);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 716, 730);
    const char* fun_name="operator_lteq";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 724, 731),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 724, 732),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 728, 733, "struct CVALUE* "), "42op2.nc", 728, 734)), "42op2.nc", 728, 735);
        __right_value0 = (void*)0;
        __dec_obj85=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s<=%s",left_value->c_value,right_value->c_value), "42op2.nc", 730, 737);
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 730, 736);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj86=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 731, 738, "struct sType* "), "42op2.nc", 731, 739),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 731, 740),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 731, 742);
        come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 731, 741);
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 736, 743));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 739, 744);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 739, 745):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 739, 746);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 739, 747):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 739, 748);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 739, 749);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLtEqNode_finalize(struct sLtEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLtEqNode_finalize", 2, 712));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sLtEqNode_finalize", 3, 713):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sLtEqNode_finalize", 4, 714):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj87;
    struct sNode* __dec_obj88;
    struct sLtNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLtNode*)come_increment_ref_count(self, "42op2.nc", 747, 750),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 747, 751);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj87=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 750, 753);
    (__dec_obj87 ? __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 750, 752) :0);
    __right_value0 = (void*)0;
    __dec_obj88=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 751, 755);
    (__dec_obj88 ? __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 751, 754) :0);
        __result_obj__0 = (struct sLtNode*)come_increment_ref_count(self, "42op2.nc", 754, 756);
    come_call_finalizer(sLtNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 754, 760);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 754, 761):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 754, 762):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLtNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 754, 763);
    return __result_obj__0;
}

char*  sLtNode_kind(struct sLtNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLtNode","42op2.nc",756))), "42op2.nc", 756, 764);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 756, 765));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 756, 766));
    return __result_obj__0;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_22;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj89  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj90  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_22, 0, sizeof(Value_22));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 762, 767);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 765, 768):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 768, 769);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 770, 770);
    Value_22=node_compile(right_node,info);
    if(!Value_22) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 773, 771):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 773, 772);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 773, 773):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 776, 774);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 778, 775);
    const char* fun_name="operator_lt";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 786, 776),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 786, 777),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 790, 778, "struct CVALUE* "), "42op2.nc", 790, 779)), "42op2.nc", 790, 780);
        __right_value0 = (void*)0;
        __dec_obj89=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s<%s",left_value->c_value,right_value->c_value), "42op2.nc", 792, 782);
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 792, 781);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj90=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 793, 783, "struct sType* "), "42op2.nc", 793, 784),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 793, 785),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 793, 787);
        come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 793, 786);
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 798, 788));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 801, 789);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 801, 790):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 801, 791);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 801, 792):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 801, 793);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 801, 794);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLtNode_finalize(struct sLtNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLtNode_finalize", 2, 757));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sLtNode_finalize", 3, 758):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sLtNode_finalize", 4, 759):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj91;
    struct sNode* __dec_obj92;
    struct sGtNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGtNode*)come_increment_ref_count(self, "42op2.nc", 809, 795),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 809, 796);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj91=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 812, 798);
    (__dec_obj91 ? __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 812, 797) :0);
    __right_value0 = (void*)0;
    __dec_obj92=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 813, 800);
    (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 813, 799) :0);
        __result_obj__0 = (struct sGtNode*)come_increment_ref_count(self, "42op2.nc", 816, 801);
    come_call_finalizer(sGtNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 816, 805);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 816, 806):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 816, 807):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGtNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 816, 808);
    return __result_obj__0;
}

char*  sGtNode_kind(struct sGtNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGtNode","42op2.nc",818))), "42op2.nc", 818, 809);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 818, 810));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 818, 811));
    return __result_obj__0;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_23;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj93  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj94  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_23, 0, sizeof(Value_23));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 824, 812);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 827, 813):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 830, 814);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 832, 815);
    Value_23=node_compile(right_node,info);
    if(!Value_23) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 835, 816):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 835, 817);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 835, 818):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 838, 819);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 840, 820);
    const char* fun_name="operator_gt";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 848, 821),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 848, 822),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 852, 823, "struct CVALUE* "), "42op2.nc", 852, 824)), "42op2.nc", 852, 825);
        __right_value0 = (void*)0;
        __dec_obj93=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s>%s",left_value->c_value,right_value->c_value), "42op2.nc", 854, 827);
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 854, 826);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj94=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 855, 828, "struct sType* "), "42op2.nc", 855, 829),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 855, 830),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 855, 832);
        come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 855, 831);
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 860, 833));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 863, 834);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 863, 835):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 863, 836);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 863, 837):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 863, 838);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 863, 839);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGtNode_finalize(struct sGtNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sGtNode_finalize", 2, 802));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sGtNode_finalize", 3, 803):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sGtNode_finalize", 4, 804):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj95;
    struct sNode* __dec_obj96;
    struct sEqNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sEqNode*)come_increment_ref_count(self, "42op2.nc", 871, 840),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 871, 841);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj95=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 874, 843);
    (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 874, 842) :0);
    __right_value0 = (void*)0;
    __dec_obj96=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 875, 845);
    (__dec_obj96 ? __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 875, 844) :0);
        __result_obj__0 = (struct sEqNode*)come_increment_ref_count(self, "42op2.nc", 878, 846);
    come_call_finalizer(sEqNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 878, 850);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 878, 851):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 878, 852):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sEqNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 878, 853);
    return __result_obj__0;
}

char*  sEqNode_kind(struct sEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sEqNode","42op2.nc",880))), "42op2.nc", 880, 854);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 880, 855));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 880, 856));
    return __result_obj__0;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_24;
    _Bool __result_obj__0;
    struct CVALUE*  right_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj97  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj98  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_24, 0, sizeof(Value_24));
    memset(&right_value, 0, sizeof(right_value));
    memset(&come_value, 0, sizeof(come_value));
    left_node=self->mLeft;
    Value=node_compile(left_node,info);
    if(!Value) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 892, 857);
    right_node=self->mRight;
    Value_24=node_compile(right_node,info);
    if(!Value_24) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 897, 858);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 900, 859);
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 902, 860, "struct CVALUE* "), "42op2.nc", 902, 861)), "42op2.nc", 902, 862);
    __right_value0 = (void*)0;
    __dec_obj97=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s==%s",left_value->c_value,right_value->c_value), "42op2.nc", 904, 864);
    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 904, 863);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj98=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 905, 865, "struct sType* "), "42op2.nc", 905, 866),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 905, 867),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 905, 869);
    come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 905, 868);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 910, 870));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 912, 871);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 912, 872);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 912, 873);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sEqNode_finalize(struct sEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sEqNode_finalize", 2, 847));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sEqNode_finalize", 3, 848):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sEqNode_finalize", 4, 849):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj99;
    struct sNode* __dec_obj100;
    struct sNotEqNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNotEqNode*)come_increment_ref_count(self, "42op2.nc", 920, 874),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 920, 875);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj99=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 923, 877);
    (__dec_obj99 ? __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 923, 876) :0);
    __right_value0 = (void*)0;
    __dec_obj100=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 924, 879);
    (__dec_obj100 ? __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 924, 878) :0);
        __result_obj__0 = (struct sNotEqNode*)come_increment_ref_count(self, "42op2.nc", 927, 880);
    come_call_finalizer(sNotEqNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 927, 884);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 927, 885):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 927, 886):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNotEqNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 927, 887);
    return __result_obj__0;
}

char*  sNotEqNode_kind(struct sNotEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNotEqNode","42op2.nc",929))), "42op2.nc", 929, 888);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 929, 889));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 929, 890));
    return __result_obj__0;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_25;
    _Bool __result_obj__0;
    struct CVALUE*  right_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj101  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj102  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_25, 0, sizeof(Value_25));
    memset(&right_value, 0, sizeof(right_value));
    memset(&come_value, 0, sizeof(come_value));
    left_node=self->mLeft;
    Value=node_compile(left_node,info);
    if(!Value) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 941, 891);
    right_node=self->mRight;
    Value_25=node_compile(right_node,info);
    if(!Value_25) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 946, 892);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 949, 893);
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 951, 894, "struct CVALUE* "), "42op2.nc", 951, 895)), "42op2.nc", 951, 896);
    __right_value0 = (void*)0;
    __dec_obj101=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s!=%s",left_value->c_value,right_value->c_value), "42op2.nc", 953, 898);
    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 953, 897);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj102=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 954, 899, "struct sType* "), "42op2.nc", 954, 900),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 954, 901),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 954, 903);
    come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 954, 902);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 959, 904));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 961, 905);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 961, 906);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 961, 907);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNotEqNode_finalize(struct sNotEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNotEqNode_finalize", 2, 881));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sNotEqNode_finalize", 3, 882):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sNotEqNode_finalize", 4, 883):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj103;
    struct sNode* __dec_obj104;
    struct sEq2Node* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sEq2Node*)come_increment_ref_count(self, "42op2.nc", 969, 908),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 969, 909);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj103=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 972, 911);
    (__dec_obj103 ? __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 972, 910) :0);
    __right_value0 = (void*)0;
    __dec_obj104=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 973, 913);
    (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 973, 912) :0);
        __result_obj__0 = (struct sEq2Node*)come_increment_ref_count(self, "42op2.nc", 976, 914);
    come_call_finalizer(sEq2Node_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 976, 918);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 976, 919):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 976, 920):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sEq2Node_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 976, 921);
    return __result_obj__0;
}

char*  sEq2Node_kind(struct sEq2Node* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sEq2Node","42op2.nc",978))), "42op2.nc", 978, 922);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 978, 923));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 978, 924));
    return __result_obj__0;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_26;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj105  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj106  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_26, 0, sizeof(Value_26));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 984, 925);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 987, 926):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 990, 927);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 992, 928);
    Value_26=node_compile(right_node,info);
    if(!Value_26) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 995, 929):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 995, 930);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 995, 931):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 998, 932);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 1000, 933);
    const char* fun_name="operator_equals";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 1008, 934),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 1008, 935),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        if(!self->mQuote&&require_explicit_method_in_low_memory_mode(type,fun_name,info)) {
                        __result_obj__0 = (_Bool)0;
            ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1013, 936):(void*)0);
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1013, 937);
            ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1013, 938):(void*)0);
            come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1013, 939);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1013, 940);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 1016, 941, "struct CVALUE* "), "42op2.nc", 1016, 942)), "42op2.nc", 1016, 943);
        __right_value0 = (void*)0;
        __dec_obj105=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s==%s",left_value->c_value,right_value->c_value), "42op2.nc", 1018, 945);
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 1018, 944);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj106=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 1019, 946, "struct sType* "), "42op2.nc", 1019, 947),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 1019, 948),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 1019, 950);
        come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 1019, 949);
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 1024, 951));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1027, 952);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1027, 953):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1027, 954);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1027, 955):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1027, 956);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1027, 957);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sEq2Node_finalize(struct sEq2Node* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sEq2Node_finalize", 2, 915));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sEq2Node_finalize", 3, 916):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sEq2Node_finalize", 4, 917):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj107;
    struct sNode* __dec_obj108;
    struct sNotEq2Node* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNotEq2Node*)come_increment_ref_count(self, "42op2.nc", 1035, 958),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1035, 959);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj107=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 1038, 961);
    (__dec_obj107 ? __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1038, 960) :0);
    __right_value0 = (void*)0;
    __dec_obj108=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 1039, 963);
    (__dec_obj108 ? __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1039, 962) :0);
        __result_obj__0 = (struct sNotEq2Node*)come_increment_ref_count(self, "42op2.nc", 1042, 964);
    come_call_finalizer(sNotEq2Node_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1042, 968);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1042, 969):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1042, 970):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNotEq2Node_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1042, 971);
    return __result_obj__0;
}

char*  sNotEq2Node_kind(struct sNotEq2Node* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNotEq2Node","42op2.nc",1044))), "42op2.nc", 1044, 972);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 1044, 973));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 1044, 974));
    return __result_obj__0;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_27;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj109  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj110  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_27, 0, sizeof(Value_27));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 1050, 975);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1053, 976):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1056, 977);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 1058, 978);
    Value_27=node_compile(right_node,info);
    if(!Value_27) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1061, 979):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1061, 980);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1061, 981):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1064, 982);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 1066, 983);
    const char* fun_name="operator_not_equals";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 1074, 984),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 1074, 985),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        if(!self->mQuote&&require_explicit_method_in_low_memory_mode(type,fun_name,info)) {
                        __result_obj__0 = (_Bool)0;
            ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1079, 986):(void*)0);
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1079, 987);
            ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1079, 988):(void*)0);
            come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1079, 989);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1079, 990);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 1082, 991, "struct CVALUE* "), "42op2.nc", 1082, 992)), "42op2.nc", 1082, 993);
        __right_value0 = (void*)0;
        __dec_obj109=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s!=%s",left_value->c_value,right_value->c_value), "42op2.nc", 1084, 995);
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 1084, 994);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj110=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 1085, 996, "struct sType* "), "42op2.nc", 1085, 997),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 1085, 998),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 1085, 1000);
        come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 1085, 999);
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 1090, 1001));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1093, 1002);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1093, 1003):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1093, 1004);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1093, 1005):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1093, 1006);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1093, 1007);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNotEq2Node_finalize", 2, 965));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sNotEq2Node_finalize", 3, 966):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sNotEq2Node_finalize", 4, 967):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj111;
    struct sNode* __dec_obj112;
    struct sAndNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAndNode*)come_increment_ref_count(self, "42op2.nc", 1101, 1008),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1101, 1009);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj111=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 1104, 1011);
    (__dec_obj111 ? __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1104, 1010) :0);
    __right_value0 = (void*)0;
    __dec_obj112=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 1105, 1013);
    (__dec_obj112 ? __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1105, 1012) :0);
        __result_obj__0 = (struct sAndNode*)come_increment_ref_count(self, "42op2.nc", 1108, 1014);
    come_call_finalizer(sAndNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1108, 1018);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1108, 1019):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1108, 1020):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAndNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1108, 1021);
    return __result_obj__0;
}

char*  sAndNode_kind(struct sAndNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAndNode","42op2.nc",1110))), "42op2.nc", 1110, 1022);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 1110, 1023));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 1110, 1024));
    return __result_obj__0;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_28;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj113  ;
    struct sType*  __dec_obj114  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_28, 0, sizeof(Value_28));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 1116, 1025);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1119, 1026):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1122, 1027);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 1124, 1028);
    Value_28=node_compile(right_node,info);
    if(!Value_28) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1127, 1029):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1127, 1030);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1127, 1031):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1130, 1032);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 1132, 1033);
    const char* fun_name="operator_and";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 1140, 1034),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 1140, 1035),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 1145, 1036, "struct CVALUE* "), "42op2.nc", 1145, 1037)), "42op2.nc", 1145, 1038);
        __right_value0 = (void*)0;
        __dec_obj113=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s&%s",left_value->c_value,right_value->c_value), "42op2.nc", 1147, 1040);
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 1147, 1039);
        __right_value0 = (void*)0;
        __dec_obj114=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 1148, 1042);
        come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 1148, 1041);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 1154, 1043));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1157, 1044);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1157, 1045):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1157, 1046);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1157, 1047):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1157, 1048);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1157, 1049);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAndNode_finalize(struct sAndNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAndNode_finalize", 2, 1015));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sAndNode_finalize", 3, 1016):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sAndNode_finalize", 4, 1017):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj115;
    struct sNode* __dec_obj116;
    struct sXOrNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sXOrNode*)come_increment_ref_count(self, "42op2.nc", 1165, 1050),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1165, 1051);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj115=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 1168, 1053);
    (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1168, 1052) :0);
    __right_value0 = (void*)0;
    __dec_obj116=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 1169, 1055);
    (__dec_obj116 ? __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1169, 1054) :0);
        __result_obj__0 = (struct sXOrNode*)come_increment_ref_count(self, "42op2.nc", 1172, 1056);
    come_call_finalizer(sXOrNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1172, 1060);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1172, 1061):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1172, 1062):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sXOrNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1172, 1063);
    return __result_obj__0;
}

char*  sXOrNode_kind(struct sXOrNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sXOrNode","42op2.nc",1174))), "42op2.nc", 1174, 1064);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 1174, 1065));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 1174, 1066));
    return __result_obj__0;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_29;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj117  ;
    struct sType*  __dec_obj118  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_29, 0, sizeof(Value_29));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 1180, 1067);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1183, 1068):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1186, 1069);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 1188, 1070);
    Value_29=node_compile(right_node,info);
    if(!Value_29) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1191, 1071):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1191, 1072);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1191, 1073):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1194, 1074);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 1196, 1075);
    const char* fun_name="operator_xor";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 1204, 1076),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 1204, 1077),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 1208, 1078, "struct CVALUE* "), "42op2.nc", 1208, 1079)), "42op2.nc", 1208, 1080);
        __right_value0 = (void*)0;
        __dec_obj117=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s^%s",left_value->c_value,right_value->c_value), "42op2.nc", 1210, 1082);
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 1210, 1081);
        __right_value0 = (void*)0;
        __dec_obj118=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 1211, 1084);
        come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 1211, 1083);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 1217, 1085));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1220, 1086);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1220, 1087):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1220, 1088);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1220, 1089):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1220, 1090);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1220, 1091);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sXOrNode_finalize(struct sXOrNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sXOrNode_finalize", 2, 1057));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sXOrNode_finalize", 3, 1058):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sXOrNode_finalize", 4, 1059):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj119;
    struct sNode* __dec_obj120;
    struct sOrNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sOrNode*)come_increment_ref_count(self, "42op2.nc", 1228, 1092),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1228, 1093);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj119=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 1231, 1095);
    (__dec_obj119 ? __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1231, 1094) :0);
    __right_value0 = (void*)0;
    __dec_obj120=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 1232, 1097);
    (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1232, 1096) :0);
        __result_obj__0 = (struct sOrNode*)come_increment_ref_count(self, "42op2.nc", 1235, 1098);
    come_call_finalizer(sOrNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1235, 1102);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1235, 1103):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1235, 1104):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sOrNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1235, 1105);
    return __result_obj__0;
}

char*  sOrNode_kind(struct sOrNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sOrNode","42op2.nc",1237))), "42op2.nc", 1237, 1106);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 1237, 1107));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 1237, 1108));
    return __result_obj__0;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_30;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj121  ;
    struct sType*  __dec_obj122  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_30, 0, sizeof(Value_30));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 1243, 1109);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1246, 1110):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1249, 1111);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 1251, 1112);
    Value_30=node_compile(right_node,info);
    if(!Value_30) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1254, 1113):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1254, 1114);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1254, 1115):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1257, 1116);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 1259, 1117);
    const char* fun_name="operator_or";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 1267, 1118),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 1267, 1119),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 1272, 1120, "struct CVALUE* "), "42op2.nc", 1272, 1121)), "42op2.nc", 1272, 1122);
        __right_value0 = (void*)0;
        __dec_obj121=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s|%s",left_value->c_value,right_value->c_value), "42op2.nc", 1274, 1124);
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 1274, 1123);
        __right_value0 = (void*)0;
        __dec_obj122=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "42op2.nc", 1275, 1126);
        come_call_finalizer(sType_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 1275, 1125);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 1281, 1127));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1284, 1128);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1284, 1129):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1284, 1130);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1284, 1131):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1284, 1132);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1284, 1133);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sOrNode_finalize(struct sOrNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sOrNode_finalize", 2, 1099));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sOrNode_finalize", 3, 1100):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sOrNode_finalize", 4, 1101):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj123;
    struct sNode* __dec_obj124;
    struct sAndAndNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAndAndNode*)come_increment_ref_count(self, "42op2.nc", 1292, 1134),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1292, 1135);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj123=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 1295, 1137);
    (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1295, 1136) :0);
    __right_value0 = (void*)0;
    __dec_obj124=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 1296, 1139);
    (__dec_obj124 ? __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1296, 1138) :0);
        __result_obj__0 = (struct sAndAndNode*)come_increment_ref_count(self, "42op2.nc", 1299, 1140);
    come_call_finalizer(sAndAndNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1299, 1144);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1299, 1145):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1299, 1146):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAndAndNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1299, 1147);
    return __result_obj__0;
}

char*  sAndAndNode_kind(struct sAndAndNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAndAndNode","42op2.nc",1301))), "42op2.nc", 1301, 1148);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 1301, 1149));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 1301, 1150));
    return __result_obj__0;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_31;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj125  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj126  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_31, 0, sizeof(Value_31));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 1307, 1151);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1310, 1152):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1313, 1153);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 1315, 1154);
    Value_31=node_compile(right_node,info);
    if(!Value_31) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1318, 1155):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1318, 1156);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1318, 1157):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1321, 1158);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 1323, 1159);
    const char* fun_name="operator_andand";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 1331, 1160),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 1331, 1161),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 1336, 1162, "struct CVALUE* "), "42op2.nc", 1336, 1163)), "42op2.nc", 1336, 1164);
        __right_value0 = (void*)0;
        __dec_obj125=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s&&%s",left_value->c_value,right_value->c_value), "42op2.nc", 1338, 1166);
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 1338, 1165);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj126=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 1339, 1167, "struct sType* "), "42op2.nc", 1339, 1168),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 1339, 1169),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 1339, 1171);
        come_call_finalizer(sType_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 1339, 1170);
        come_value->var=left_value->var;
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 1344, 1172));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1347, 1173);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1347, 1174):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1347, 1175);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1347, 1176):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1347, 1177);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1347, 1178);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAndAndNode_finalize(struct sAndAndNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAndAndNode_finalize", 2, 1141));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sAndAndNode_finalize", 3, 1142):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sAndAndNode_finalize", 4, 1143):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj127;
    struct sNode* __dec_obj128;
    struct sOrOrNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sOrOrNode*)come_increment_ref_count(self, "42op2.nc", 1355, 1179),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1355, 1180);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj127=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 1358, 1182);
    (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1358, 1181) :0);
    __right_value0 = (void*)0;
    __dec_obj128=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 1359, 1184);
    (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1359, 1183) :0);
        __result_obj__0 = (struct sOrOrNode*)come_increment_ref_count(self, "42op2.nc", 1362, 1185);
    come_call_finalizer(sOrOrNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1362, 1189);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1362, 1190):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1362, 1191):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sOrOrNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1362, 1192);
    return __result_obj__0;
}

char*  sOrOrNode_kind(struct sOrOrNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sOrOrNode","42op2.nc",1364))), "42op2.nc", 1364, 1193);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 1364, 1194));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 1364, 1195));
    return __result_obj__0;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_32;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj129  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj130  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_32, 0, sizeof(Value_32));
    memset(&right_value, 0, sizeof(right_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "42op2.nc", 1370, 1196);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1373, 1197):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1376, 1198);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "42op2.nc", 1378, 1199);
    Value_32=node_compile(right_node,info);
    if(!Value_32) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1381, 1200):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1381, 1201);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1381, 1202):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1384, 1203);
    type=(struct sType* )come_increment_ref_count(left_value->type, "42op2.nc", 1386, 1204);
    const char* fun_name="operator_oror";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "42op2.nc", 1394, 1205),(struct sNode*)come_increment_ref_count(right_node, "42op2.nc", 1394, 1206),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 1398, 1207, "struct CVALUE* "), "42op2.nc", 1398, 1208)), "42op2.nc", 1398, 1209);
        __right_value0 = (void*)0;
        __dec_obj129=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s||%s",left_value->c_value,right_value->c_value), "42op2.nc", 1400, 1211);
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 1400, 1210);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj130=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 1401, 1212, "struct sType* "), "42op2.nc", 1401, 1213),(char*)come_increment_ref_count(xsprintf("int"), "42op2.nc", 1401, 1214),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 1401, 1216);
        come_call_finalizer(sType_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 1401, 1215);
        come_value->var=left_value->var;
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 1406, 1217));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1409, 1218);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1409, 1219):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1409, 1220);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1409, 1221):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1409, 1222);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1409, 1223);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sOrOrNode_finalize(struct sOrOrNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sOrOrNode_finalize", 2, 1186));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sOrOrNode_finalize", 3, 1187):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sOrOrNode_finalize", 4, 1188):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj131;
    struct sNode* __dec_obj132;
    struct sCommaNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCommaNode*)come_increment_ref_count(self, "42op2.nc", 1417, 1224),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1417, 1225);
    __right_value0 = (void*)0;
    __dec_obj131=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "42op2.nc", 1419, 1227);
    (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1419, 1226) :0);
    __right_value0 = (void*)0;
    __dec_obj132=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "42op2.nc", 1420, 1229);
    (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1420, 1228) :0);
        __result_obj__0 = (struct sCommaNode*)come_increment_ref_count(self, "42op2.nc", 1423, 1230);
    come_call_finalizer(sCommaNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1423, 1234);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1423, 1235):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1423, 1236):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCommaNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1423, 1237);
    return __result_obj__0;
}

char*  sCommaNode_kind(struct sCommaNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCommaNode","42op2.nc",1425))), "42op2.nc", 1425, 1238);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 1425, 1239));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 1425, 1240));
    return __result_obj__0;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_33;
    _Bool __result_obj__0;
    struct CVALUE*  right_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj133  ;
    struct sType*  __dec_obj134  ;
    memset(&left_node, 0, sizeof(left_node));
    memset(&Value, 0, sizeof(Value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&right_node, 0, sizeof(right_node));
    memset(&Value_33, 0, sizeof(Value_33));
    memset(&right_value, 0, sizeof(right_value));
    memset(&come_value, 0, sizeof(come_value));
    left_node=self->mLeft;
    Value=node_compile(left_node,info);
    if(!Value) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1437, 1241);
    right_node=self->mRight;
    Value_33=node_compile(right_node,info);
    if(!Value_33) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1442, 1242);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1445, 1243);
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 1447, 1244, "struct CVALUE* "), "42op2.nc", 1447, 1245)), "42op2.nc", 1447, 1246);
    __right_value0 = (void*)0;
    __dec_obj133=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s,%s",left_value->c_value,right_value->c_value), "42op2.nc", 1449, 1248);
    __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 1449, 1247);
    __right_value0 = (void*)0;
    __dec_obj134=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(right_value->type), "42op2.nc", 1450, 1250);
    come_call_finalizer(sType_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 1450, 1249);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 1455, 1251));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1457, 1252);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1457, 1253);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1457, 1254);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCommaNode_finalize(struct sCommaNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCommaNode_finalize", 2, 1231));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sCommaNode_finalize", 3, 1232):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sCommaNode_finalize", 4, 1233):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj135;
    struct sNode* __dec_obj136;
    struct sNode* __dec_obj137;
    struct sConditionalNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sConditionalNode*)come_increment_ref_count(self, "42op2.nc", 1465, 1255),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1465, 1256);
    __right_value0 = (void*)0;
    __dec_obj135=self->mValue1,
    self->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(value1), "42op2.nc", 1467, 1258);
    (__dec_obj135 ? __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1467, 1257) :0);
    __right_value0 = (void*)0;
    __dec_obj136=self->mValue2,
    self->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(value2), "42op2.nc", 1468, 1260);
    (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1468, 1259) :0);
    __right_value0 = (void*)0;
    __dec_obj137=self->mValue3,
    self->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(value3), "42op2.nc", 1469, 1262);
    (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1469, 1261) :0);
        __result_obj__0 = (struct sConditionalNode*)come_increment_ref_count(self, "42op2.nc", 1472, 1263);
    come_call_finalizer(sConditionalNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1472, 1268);
    ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1472, 1269):(void*)0);
    ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1472, 1270):(void*)0);
    ((value3) ? value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1472, 1271):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sConditionalNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 1472, 1272);
    return __result_obj__0;
}

char*  sConditionalNode_kind(struct sConditionalNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sConditionalNode","42op2.nc",1474))), "42op2.nc", 1474, 1273);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 1474, 1274));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 1474, 1275));
    return __result_obj__0;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool in_conditional_operator;
    struct sNode* value1;
    _Bool Value;
    void* __right_value0 = (void*)0;
    struct CVALUE*  value1_value  ;
    struct sNode* value2;
    _Bool Value_34;
    _Bool __result_obj__0;
    struct CVALUE*  value2_value  ;
    struct sNode* value3;
    _Bool Value_35;
    struct CVALUE*  value3_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj138  ;
    struct sType*  __dec_obj139  ;
    memset(&in_conditional_operator, 0, sizeof(in_conditional_operator));
    memset(&value1, 0, sizeof(value1));
    memset(&Value, 0, sizeof(Value));
    memset(&value1_value, 0, sizeof(value1_value));
    memset(&value2, 0, sizeof(value2));
    memset(&Value_34, 0, sizeof(Value_34));
    memset(&value2_value, 0, sizeof(value2_value));
    memset(&value3, 0, sizeof(value3));
    memset(&Value_35, 0, sizeof(Value_35));
    memset(&value3_value, 0, sizeof(value3_value));
    memset(&come_value, 0, sizeof(come_value));
    in_conditional_operator=info->in_conditional_operator;
    info->in_conditional_operator=(_Bool)1;
    value1=self->mValue1;
    Value=node_compile(value1,info);
    if(!Value) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    value1_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1489, 1276);
    value2=self->mValue2;
    Value_34=node_compile(value2,info);
    if(!Value_34) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, value1_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1494, 1277);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    value2_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1497, 1278);
    value3=self->mValue3;
    Value_35=node_compile(value3,info);
    if(!Value_35) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, value1_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1502, 1279);
        come_call_finalizer(CVALUE_finalize, value2_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1502, 1280);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    value3_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "42op2.nc", 1505, 1281);
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 1507, 1282, "struct CVALUE* "), "42op2.nc", 1507, 1283)), "42op2.nc", 1507, 1284);
    __right_value0 = (void*)0;
    __dec_obj138=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("((%s)?(%s):(%s))",value1_value->c_value,value2_value->c_value,value3_value->c_value), "42op2.nc", 1509, 1286);
    __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 1509, 1285);
    __right_value0 = (void*)0;
    __dec_obj139=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(value2_value->type), "42op2.nc", 1510, 1288);
    come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 1510, 1287);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 1515, 1289));
    info->in_conditional_operator=in_conditional_operator;
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, value1_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1519, 1290);
    come_call_finalizer(CVALUE_finalize, value2_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1519, 1291);
    come_call_finalizer(CVALUE_finalize, value3_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1519, 1292);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 1519, 1293);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sConditionalNode_finalize(struct sConditionalNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sConditionalNode_finalize", 2, 1264));
    }
    if(self!=((void*)0)&&self->mValue1!=((void*)0)) {
        ((self->mValue1) ? self->mValue1 = come_decrement_ref_count(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0,(void*)0, "sConditionalNode_finalize", 3, 1265):(void*)0);
    }
    if(self!=((void*)0)&&self->mValue2!=((void*)0)) {
        ((self->mValue2) ? self->mValue2 = come_decrement_ref_count(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0,(void*)0, "sConditionalNode_finalize", 4, 1266):(void*)0);
    }
    if(self!=((void*)0)&&self->mValue3!=((void*)0)) {
        ((self->mValue3) ? self->mValue3 = come_decrement_ref_count(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0,(void*)0, "sConditionalNode_finalize", 5, 1267):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "conditional_node"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sConditionalNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1526, 1299, "struct sNode");
    _inf_obj_value3=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value1=sConditionalNode_initialize((struct sConditionalNode* )come_increment_ref_count((struct sConditionalNode *)come_calloc(1, sizeof(struct sConditionalNode )*(1), "42op2.nc", 1526, 1294, "struct sConditionalNode* "), "42op2.nc", 1526, 1295),(struct sNode*)come_increment_ref_count(value1, "42op2.nc", 1526, 1296),(struct sNode*)come_increment_ref_count(value2, "42op2.nc", 1526, 1297),(struct sNode*)come_increment_ref_count(value3, "42op2.nc", 1526, 1298),info))), "42op2.nc", 1526, 1300);
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sConditionalNode_finalize;
    _inf_value3->clone=(void*)sConditionalNode_clone;
    _inf_value3->compile=(void*)sConditionalNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sConditionalNode_kind;
    _inf_value3->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)), "42op2.nc", 1526, 1313);
    ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1526, 1314):(void*)0);
    ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1526, 1315):(void*)0);
    ((value3) ? value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1526, 1316):(void*)0);
    come_call_finalizer(sConditionalNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1526, 1317);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "42op2.nc", 1526, 1318):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1526, 1319):(void*)0);
    return __result_obj__0;
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sConditionalNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sConditionalNode*  result  ;
    char*  __dec_obj140  ;
    struct sNode* __dec_obj141;
    struct sNode* __dec_obj142;
    struct sNode* __dec_obj143;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sConditionalNode* )come_increment_ref_count((struct sConditionalNode *)come_calloc(1, sizeof(struct sConditionalNode )*(1), "sConditionalNode_clone", 5, 1301, "struct sConditionalNode* "), "sConditionalNode_clone", 5, 1302);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj140=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sConditionalNode_clone", 7, 1303, "char* "), "sConditionalNode_clone", 7, 1305);
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0, "sConditionalNode_clone", 7, 1304);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mValue1!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj141=result->mValue1,
        result->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue1), "sConditionalNode_clone", 9, 1307);
        (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0, (void*)0, "sConditionalNode_clone", 9, 1306) :0);
    }
    if(self!=((void*)0)&&self->mValue2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj142=result->mValue2,
        result->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue2), "sConditionalNode_clone", 10, 1309);
        (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0, (void*)0, "sConditionalNode_clone", 10, 1308) :0);
    }
    if(self!=((void*)0)&&self->mValue3!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj143=result->mValue3,
        result->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue3), "sConditionalNode_clone", 11, 1311);
        (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0, (void*)0, "sConditionalNode_clone", 11, 1310) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sConditionalNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sConditionalNode_clone}", 12, 1312);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* mult_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "mult_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* __result_obj__0;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value4;
    struct sMultNode* _inf_obj_value4;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj147;
    int sline_real_36;
    struct sNode* right_37;
    struct sNode* _inf_value5;
    struct sDivNode* _inf_obj_value5;
    struct sNode* __dec_obj151;
    int sline_real_38;
    struct sNode* right_39;
    struct sNode* _inf_value6;
    struct sModNode* _inf_obj_value6;
    struct sNode* __dec_obj155;
    int sline_real_40;
    struct sNode* right_41;
    struct sNode* _inf_value7;
    struct sMultNode* _inf_obj_value7;
    struct sNode* __dec_obj156;
    int sline_real_42;
    struct sNode* right_43;
    struct sNode* _inf_value8;
    struct sDivNode* _inf_obj_value8;
    struct sNode* __dec_obj157;
    int sline_real_44;
    struct sNode* right_45;
    struct sNode* _inf_value9;
    struct sModNode* _inf_obj_value9;
    struct sNode* __dec_obj158;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_36, 0, sizeof(sline_real_36));
    memset(&right_37, 0, sizeof(right_37));
    memset(&sline_real_38, 0, sizeof(sline_real_38));
    memset(&right_39, 0, sizeof(right_39));
    memset(&sline_real_40, 0, sizeof(sline_real_40));
    memset(&right_41, 0, sizeof(right_41));
    memset(&sline_real_42, 0, sizeof(sline_real_42));
    memset(&right_43, 0, sizeof(right_43));
    memset(&sline_real_44, 0, sizeof(sline_real_44));
    memset(&right_45, 0, sizeof(right_45));
    node=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "42op2.nc", 1531, 1320);
    parse_sharp_v5(info);
    while(*info->p) {
        if(!node->terminated(node->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61) {
            info->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            if(*info->p==41) {
                err_msg(info,"invalid )");
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "42op2.nc", 1544, 1321);
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1544, 1322):(void*)0);
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "42op2.nc", 1544, 1323):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1544, 1324):(void*)0);
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "42op2.nc", 1546, 1325);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1550, 1330, "struct sNode");
            _inf_obj_value4=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value1=sMultNode_initialize((struct sMultNode* )come_increment_ref_count((struct sMultNode *)come_calloc(1, sizeof(struct sMultNode )*(1), "42op2.nc", 1550, 1326, "struct sMultNode* "), "42op2.nc", 1550, 1327),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1550, 1328),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 1550, 1329),(_Bool)0,info))), "42op2.nc", 1550, 1331);
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sMultNode_finalize;
            _inf_value4->clone=(void*)sMultNode_clone;
            _inf_value4->compile=(void*)sMultNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sMultNode_kind;
            _inf_value4->left_value=(void*)sNodeBase_left_value;
            __dec_obj147=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value4, "42op2.nc", 1550, 1343);
            (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1550, 1342) :0);
            come_call_finalizer(sMultNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1550, 1344);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1610, 1345):(void*)0);
        }
        else if(*info->p==47&&*(info->p+1)!=61&&*(info->p+1)!=42&&*(info->p-1)!=42) {
            info->p++;
            sline_real_36=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_37=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "42op2.nc", 1558, 1346);
            info->sline_real=sline_real_36;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1561, 1351, "struct sNode");
            _inf_obj_value5=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value1=sDivNode_initialize((struct sDivNode* )come_increment_ref_count((struct sDivNode *)come_calloc(1, sizeof(struct sDivNode )*(1), "42op2.nc", 1561, 1347, "struct sDivNode* "), "42op2.nc", 1561, 1348),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1561, 1349),(struct sNode*)come_increment_ref_count(right_37, "42op2.nc", 1561, 1350),(_Bool)0,info))), "42op2.nc", 1561, 1352);
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sDivNode_finalize;
            _inf_value5->clone=(void*)sDivNode_clone;
            _inf_value5->compile=(void*)sDivNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sDivNode_kind;
            _inf_value5->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj151=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value5, "42op2.nc", 1561, 1364);
            (__dec_obj151 ? __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1561, 1363) :0);
            come_call_finalizer(sDivNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1561, 1365);
            ((right_37) ? right_37 = come_decrement_ref_count(right_37, ((struct sNode*)right_37)->finalize, ((struct sNode*)right_37)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1610, 1366):(void*)0);
        }
        else if(*info->p==37&&*(info->p+1)!=61) {
            info->p++;
            sline_real_38=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_39=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "42op2.nc", 1569, 1367);
            info->sline_real=sline_real_38;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1572, 1372, "struct sNode");
            _inf_obj_value6=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value1=sModNode_initialize((struct sModNode* )come_increment_ref_count((struct sModNode *)come_calloc(1, sizeof(struct sModNode )*(1), "42op2.nc", 1572, 1368, "struct sModNode* "), "42op2.nc", 1572, 1369),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1572, 1370),(struct sNode*)come_increment_ref_count(right_39, "42op2.nc", 1572, 1371),(_Bool)0,info))), "42op2.nc", 1572, 1373);
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sModNode_finalize;
            _inf_value6->clone=(void*)sModNode_clone;
            _inf_value6->compile=(void*)sModNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sModNode_kind;
            _inf_value6->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj155=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value6, "42op2.nc", 1572, 1385);
            (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1572, 1384) :0);
            come_call_finalizer(sModNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1572, 1386);
            ((right_39) ? right_39 = come_decrement_ref_count(right_39, ((struct sNode*)right_39)->finalize, ((struct sNode*)right_39)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1610, 1387):(void*)0);
        }
        else if(!node->terminated(node->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_40=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_41=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "42op2.nc", 1580, 1388);
            info->sline_real=sline_real_40;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1583, 1393, "struct sNode");
            _inf_obj_value7=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value1=sMultNode_initialize((struct sMultNode* )come_increment_ref_count((struct sMultNode *)come_calloc(1, sizeof(struct sMultNode )*(1), "42op2.nc", 1583, 1389, "struct sMultNode* "), "42op2.nc", 1583, 1390),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1583, 1391),(struct sNode*)come_increment_ref_count(right_41, "42op2.nc", 1583, 1392),(_Bool)1,info))), "42op2.nc", 1583, 1394);
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sMultNode_finalize;
            _inf_value7->clone=(void*)sMultNode_clone;
            _inf_value7->compile=(void*)sMultNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sMultNode_kind;
            _inf_value7->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj156=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value7, "42op2.nc", 1583, 1396);
            (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1583, 1395) :0);
            come_call_finalizer(sMultNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1583, 1397);
            ((right_41) ? right_41 = come_decrement_ref_count(right_41, ((struct sNode*)right_41)->finalize, ((struct sNode*)right_41)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1610, 1398):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_42=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_43=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "42op2.nc", 1591, 1399);
            info->sline_real=sline_real_42;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1594, 1404, "struct sNode");
            _inf_obj_value8=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value1=sDivNode_initialize((struct sDivNode* )come_increment_ref_count((struct sDivNode *)come_calloc(1, sizeof(struct sDivNode )*(1), "42op2.nc", 1594, 1400, "struct sDivNode* "), "42op2.nc", 1594, 1401),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1594, 1402),(struct sNode*)come_increment_ref_count(right_43, "42op2.nc", 1594, 1403),(_Bool)1,info))), "42op2.nc", 1594, 1405);
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sDivNode_finalize;
            _inf_value8->clone=(void*)sDivNode_clone;
            _inf_value8->compile=(void*)sDivNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sDivNode_kind;
            _inf_value8->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj157=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value8, "42op2.nc", 1594, 1407);
            (__dec_obj157 ? __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1594, 1406) :0);
            come_call_finalizer(sDivNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1594, 1408);
            ((right_43) ? right_43 = come_decrement_ref_count(right_43, ((struct sNode*)right_43)->finalize, ((struct sNode*)right_43)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1610, 1409):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_44=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_45=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "42op2.nc", 1602, 1410);
            info->sline_real=sline_real_44;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1605, 1415, "struct sNode");
            _inf_obj_value9=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value1=sModNode_initialize((struct sModNode* )come_increment_ref_count((struct sModNode *)come_calloc(1, sizeof(struct sModNode )*(1), "42op2.nc", 1605, 1411, "struct sModNode* "), "42op2.nc", 1605, 1412),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1605, 1413),(struct sNode*)come_increment_ref_count(right_45, "42op2.nc", 1605, 1414),(_Bool)1,info))), "42op2.nc", 1605, 1416);
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sModNode_finalize;
            _inf_value9->clone=(void*)sModNode_clone;
            _inf_value9->compile=(void*)sModNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sModNode_kind;
            _inf_value9->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj158=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value9, "42op2.nc", 1605, 1418);
            (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1605, 1417) :0);
            come_call_finalizer(sModNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1605, 1419);
            ((right_45) ? right_45 = come_decrement_ref_count(right_45, ((struct sNode*)right_45)->finalize, ((struct sNode*)right_45)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1610, 1420):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 1614, 1421);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1614, 1422):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1614, 1423):(void*)0);
    return __result_obj__0;
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMultNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sMultNode*  result  ;
    char*  __dec_obj144  ;
    struct sNode* __dec_obj145;
    struct sNode* __dec_obj146;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sMultNode* )come_increment_ref_count((struct sMultNode *)come_calloc(1, sizeof(struct sMultNode )*(1), "sMultNode_clone", 5, 1332, "struct sMultNode* "), "sMultNode_clone", 5, 1333);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj144=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sMultNode_clone", 7, 1334, "char* "), "sMultNode_clone", 7, 1336);
        __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0, (void*)0, "sMultNode_clone", 7, 1335);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj145=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sMultNode_clone", 10, 1338);
        (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0, (void*)0, "sMultNode_clone", 10, 1337) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj146=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sMultNode_clone", 11, 1340);
        (__dec_obj146 ? __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0, (void*)0, "sMultNode_clone", 11, 1339) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sMultNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sMultNode_clone}", 12, 1341);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sDivNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDivNode*  result  ;
    char*  __dec_obj148  ;
    struct sNode* __dec_obj149;
    struct sNode* __dec_obj150;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDivNode* )come_increment_ref_count((struct sDivNode *)come_calloc(1, sizeof(struct sDivNode )*(1), "sDivNode_clone", 5, 1353, "struct sDivNode* "), "sDivNode_clone", 5, 1354);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj148=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDivNode_clone", 7, 1355, "char* "), "sDivNode_clone", 7, 1357);
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0, "sDivNode_clone", 7, 1356);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj149=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sDivNode_clone", 10, 1359);
        (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0, (void*)0, "sDivNode_clone", 10, 1358) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj150=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sDivNode_clone", 11, 1361);
        (__dec_obj150 ? __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0, (void*)0, "sDivNode_clone", 11, 1360) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sDivNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDivNode_clone}", 12, 1362);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sModNode* sModNode_clone(struct sModNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sModNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sModNode*  result  ;
    char*  __dec_obj152  ;
    struct sNode* __dec_obj153;
    struct sNode* __dec_obj154;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sModNode* )come_increment_ref_count((struct sModNode *)come_calloc(1, sizeof(struct sModNode )*(1), "sModNode_clone", 5, 1374, "struct sModNode* "), "sModNode_clone", 5, 1375);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj152=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sModNode_clone", 7, 1376, "char* "), "sModNode_clone", 7, 1378);
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0, "sModNode_clone", 7, 1377);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj153=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sModNode_clone", 10, 1380);
        (__dec_obj153 ? __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0, (void*)0, "sModNode_clone", 10, 1379) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj154=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sModNode_clone", 11, 1382);
        (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0, (void*)0, "sModNode_clone", 11, 1381) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sModNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sModNode_clone}", 12, 1383);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* add_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "add_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value10;
    struct sAddNode* _inf_obj_value10;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj159;
    int sline_real_46;
    struct sNode* right_47;
    struct sNode* _inf_value11;
    struct sSubNode* _inf_obj_value11;
    struct sNode* __dec_obj163;
    int sline_real_48;
    struct sNode* right_49;
    struct sNode* _inf_value12;
    struct sAddNode* _inf_obj_value12;
    struct sNode* __dec_obj164;
    int sline_real_50;
    struct sNode* right_51;
    struct sNode* _inf_value13;
    struct sSubNode* _inf_obj_value13;
    struct sNode* __dec_obj165;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_46, 0, sizeof(sline_real_46));
    memset(&right_47, 0, sizeof(right_47));
    memset(&sline_real_48, 0, sizeof(sline_real_48));
    memset(&right_49, 0, sizeof(right_49));
    memset(&sline_real_50, 0, sizeof(sline_real_50));
    memset(&right_51, 0, sizeof(right_51));
    node=(struct sNode*)come_increment_ref_count(mult_exp(info), "42op2.nc", 1619, 1424);
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43) {
            info->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(mult_exp(info), "42op2.nc", 1631, 1425);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1634, 1430, "struct sNode");
            _inf_obj_value10=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value1=sAddNode_initialize((struct sAddNode* )come_increment_ref_count((struct sAddNode *)come_calloc(1, sizeof(struct sAddNode )*(1), "42op2.nc", 1634, 1426, "struct sAddNode* "), "42op2.nc", 1634, 1427),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1634, 1428),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 1634, 1429),(_Bool)0,info))), "42op2.nc", 1634, 1431);
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sAddNode_finalize;
            _inf_value10->clone=(void*)sAddNode_clone;
            _inf_value10->compile=(void*)sAddNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sAddNode_kind;
            _inf_value10->left_value=(void*)sNodeBase_left_value;
            __dec_obj159=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value10, "42op2.nc", 1634, 1433);
            (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1634, 1432) :0);
            come_call_finalizer(sAddNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1634, 1434);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1675, 1435):(void*)0);
        }
        else if(*info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62) {
            info->p++;
            sline_real_46=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_47=(struct sNode*)come_increment_ref_count(mult_exp(info), "42op2.nc", 1643, 1436);
            info->sline_real=sline_real_46;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1646, 1441, "struct sNode");
            _inf_obj_value11=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value1=sSubNode_initialize((struct sSubNode* )come_increment_ref_count((struct sSubNode *)come_calloc(1, sizeof(struct sSubNode )*(1), "42op2.nc", 1646, 1437, "struct sSubNode* "), "42op2.nc", 1646, 1438),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1646, 1439),(struct sNode*)come_increment_ref_count(right_47, "42op2.nc", 1646, 1440),(_Bool)0,info))), "42op2.nc", 1646, 1442);
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sSubNode_finalize;
            _inf_value11->clone=(void*)sSubNode_clone;
            _inf_value11->compile=(void*)sSubNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sSubNode_kind;
            _inf_value11->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj163=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value11, "42op2.nc", 1646, 1454);
            (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1646, 1453) :0);
            come_call_finalizer(sSubNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1646, 1455);
            ((right_47) ? right_47 = come_decrement_ref_count(right_47, ((struct sNode*)right_47)->finalize, ((struct sNode*)right_47)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1675, 1456):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43) {
            info->p+=2;
            sline_real_48=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_49=(struct sNode*)come_increment_ref_count(mult_exp(info), "42op2.nc", 1655, 1457);
            info->sline_real=sline_real_48;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1658, 1462, "struct sNode");
            _inf_obj_value12=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value1=sAddNode_initialize((struct sAddNode* )come_increment_ref_count((struct sAddNode *)come_calloc(1, sizeof(struct sAddNode )*(1), "42op2.nc", 1658, 1458, "struct sAddNode* "), "42op2.nc", 1658, 1459),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1658, 1460),(struct sNode*)come_increment_ref_count(right_49, "42op2.nc", 1658, 1461),(_Bool)1,info))), "42op2.nc", 1658, 1463);
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sAddNode_finalize;
            _inf_value12->clone=(void*)sAddNode_clone;
            _inf_value12->compile=(void*)sAddNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sAddNode_kind;
            _inf_value12->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj164=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value12, "42op2.nc", 1658, 1465);
            (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1658, 1464) :0);
            come_call_finalizer(sAddNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1658, 1466);
            ((right_49) ? right_49 = come_decrement_ref_count(right_49, ((struct sNode*)right_49)->finalize, ((struct sNode*)right_49)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1675, 1467):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_50=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_51=(struct sNode*)come_increment_ref_count(mult_exp(info), "42op2.nc", 1667, 1468);
            info->sline_real=sline_real_50;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1670, 1473, "struct sNode");
            _inf_obj_value13=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value1=sSubNode_initialize((struct sSubNode* )come_increment_ref_count((struct sSubNode *)come_calloc(1, sizeof(struct sSubNode )*(1), "42op2.nc", 1670, 1469, "struct sSubNode* "), "42op2.nc", 1670, 1470),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1670, 1471),(struct sNode*)come_increment_ref_count(right_51, "42op2.nc", 1670, 1472),(_Bool)1,info))), "42op2.nc", 1670, 1474);
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sSubNode_finalize;
            _inf_value13->clone=(void*)sSubNode_clone;
            _inf_value13->compile=(void*)sSubNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sSubNode_kind;
            _inf_value13->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj165=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value13, "42op2.nc", 1670, 1476);
            (__dec_obj165 ? __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1670, 1475) :0);
            come_call_finalizer(sSubNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1670, 1477);
            ((right_51) ? right_51 = come_decrement_ref_count(right_51, ((struct sNode*)right_51)->finalize, ((struct sNode*)right_51)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1675, 1478):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 1679, 1479);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1679, 1480):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1679, 1481):(void*)0);
    return __result_obj__0;
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sSubNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSubNode*  result  ;
    char*  __dec_obj160  ;
    struct sNode* __dec_obj161;
    struct sNode* __dec_obj162;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSubNode* )come_increment_ref_count((struct sSubNode *)come_calloc(1, sizeof(struct sSubNode )*(1), "sSubNode_clone", 5, 1443, "struct sSubNode* "), "sSubNode_clone", 5, 1444);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj160=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSubNode_clone", 7, 1445, "char* "), "sSubNode_clone", 7, 1447);
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0, (void*)0, "sSubNode_clone", 7, 1446);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj161=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sSubNode_clone", 9, 1449);
        (__dec_obj161 ? __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0, (void*)0, "sSubNode_clone", 9, 1448) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj162=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sSubNode_clone", 10, 1451);
        (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0, (void*)0, "sSubNode_clone", 10, 1450) :0);
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
        __result_obj__0 = result;
    come_call_finalizer(sSubNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sSubNode_clone}", 12, 1452);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* shift_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shift_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value14;
    struct sLShiftNode* _inf_obj_value14;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj169;
    int sline_real_52;
    struct sNode* right_53;
    struct sNode* _inf_value15;
    struct sRShiftNode* _inf_obj_value15;
    struct sNode* __dec_obj173;
    int sline_real_54;
    struct sNode* right_55;
    struct sNode* _inf_value16;
    struct sLShiftNode* _inf_obj_value16;
    struct sNode* __dec_obj174;
    int sline_real_56;
    struct sNode* right_57;
    struct sNode* _inf_value17;
    struct sRShiftNode* _inf_obj_value17;
    struct sNode* __dec_obj175;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_52, 0, sizeof(sline_real_52));
    memset(&right_53, 0, sizeof(right_53));
    memset(&sline_real_54, 0, sizeof(sline_real_54));
    memset(&right_55, 0, sizeof(right_55));
    memset(&sline_real_56, 0, sizeof(sline_real_56));
    memset(&right_57, 0, sizeof(right_57));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(add_exp(info), "42op2.nc", 1686, 1482);
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(add_exp(info), "42op2.nc", 1697, 1483);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1700, 1488, "struct sNode");
            _inf_obj_value14=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value1=sLShiftNode_initialize((struct sLShiftNode* )come_increment_ref_count((struct sLShiftNode *)come_calloc(1, sizeof(struct sLShiftNode )*(1), "42op2.nc", 1700, 1484, "struct sLShiftNode* "), "42op2.nc", 1700, 1485),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1700, 1486),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 1700, 1487),(_Bool)0,info))), "42op2.nc", 1700, 1489);
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sLShiftNode_finalize;
            _inf_value14->clone=(void*)sLShiftNode_clone;
            _inf_value14->compile=(void*)sLShiftNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sLShiftNode_kind;
            _inf_value14->left_value=(void*)sNodeBase_left_value;
            __dec_obj169=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value14, "42op2.nc", 1700, 1501);
            (__dec_obj169 ? __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1700, 1500) :0);
            come_call_finalizer(sLShiftNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1700, 1502);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1738, 1503):(void*)0);
        }
        else if(*info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_52=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_53=(struct sNode*)come_increment_ref_count(add_exp(info), "42op2.nc", 1708, 1504);
            info->sline_real=sline_real_52;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1711, 1509, "struct sNode");
            _inf_obj_value15=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value1=sRShiftNode_initialize((struct sRShiftNode* )come_increment_ref_count((struct sRShiftNode *)come_calloc(1, sizeof(struct sRShiftNode )*(1), "42op2.nc", 1711, 1505, "struct sRShiftNode* "), "42op2.nc", 1711, 1506),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1711, 1507),(struct sNode*)come_increment_ref_count(right_53, "42op2.nc", 1711, 1508),(_Bool)0,info))), "42op2.nc", 1711, 1510);
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sRShiftNode_finalize;
            _inf_value15->clone=(void*)sRShiftNode_clone;
            _inf_value15->compile=(void*)sRShiftNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sRShiftNode_kind;
            _inf_value15->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj173=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value15, "42op2.nc", 1711, 1522);
            (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1711, 1521) :0);
            come_call_finalizer(sRShiftNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1711, 1523);
            ((right_53) ? right_53 = come_decrement_ref_count(right_53, ((struct sNode*)right_53)->finalize, ((struct sNode*)right_53)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1738, 1524):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61) {
            info->p+=3;
            sline_real_54=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_55=(struct sNode*)come_increment_ref_count(add_exp(info), "42op2.nc", 1719, 1525);
            info->sline_real=sline_real_54;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1722, 1530, "struct sNode");
            _inf_obj_value16=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value1=sLShiftNode_initialize((struct sLShiftNode* )come_increment_ref_count((struct sLShiftNode *)come_calloc(1, sizeof(struct sLShiftNode )*(1), "42op2.nc", 1722, 1526, "struct sLShiftNode* "), "42op2.nc", 1722, 1527),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1722, 1528),(struct sNode*)come_increment_ref_count(right_55, "42op2.nc", 1722, 1529),(_Bool)1,info))), "42op2.nc", 1722, 1531);
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sLShiftNode_finalize;
            _inf_value16->clone=(void*)sLShiftNode_clone;
            _inf_value16->compile=(void*)sLShiftNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sLShiftNode_kind;
            _inf_value16->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj174=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value16, "42op2.nc", 1722, 1533);
            (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1722, 1532) :0);
            come_call_finalizer(sLShiftNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1722, 1534);
            ((right_55) ? right_55 = come_decrement_ref_count(right_55, ((struct sNode*)right_55)->finalize, ((struct sNode*)right_55)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1738, 1535):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62) {
            info->p+=3;
            sline_real_56=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_57=(struct sNode*)come_increment_ref_count(add_exp(info), "42op2.nc", 1730, 1536);
            info->sline_real=sline_real_56;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1733, 1541, "struct sNode");
            _inf_obj_value17=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value1=sRShiftNode_initialize((struct sRShiftNode* )come_increment_ref_count((struct sRShiftNode *)come_calloc(1, sizeof(struct sRShiftNode )*(1), "42op2.nc", 1733, 1537, "struct sRShiftNode* "), "42op2.nc", 1733, 1538),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1733, 1539),(struct sNode*)come_increment_ref_count(right_57, "42op2.nc", 1733, 1540),(_Bool)1,info))), "42op2.nc", 1733, 1542);
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sRShiftNode_finalize;
            _inf_value17->clone=(void*)sRShiftNode_clone;
            _inf_value17->compile=(void*)sRShiftNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sRShiftNode_kind;
            _inf_value17->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj175=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value17, "42op2.nc", 1733, 1544);
            (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1733, 1543) :0);
            come_call_finalizer(sRShiftNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1733, 1545);
            ((right_57) ? right_57 = come_decrement_ref_count(right_57, ((struct sNode*)right_57)->finalize, ((struct sNode*)right_57)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1738, 1546):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 1742, 1547);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1742, 1548):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1742, 1549):(void*)0);
    return __result_obj__0;
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sLShiftNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLShiftNode*  result  ;
    char*  __dec_obj166  ;
    struct sNode* __dec_obj167;
    struct sNode* __dec_obj168;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLShiftNode* )come_increment_ref_count((struct sLShiftNode *)come_calloc(1, sizeof(struct sLShiftNode )*(1), "sLShiftNode_clone", 5, 1490, "struct sLShiftNode* "), "sLShiftNode_clone", 5, 1491);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj166=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLShiftNode_clone", 7, 1492, "char* "), "sLShiftNode_clone", 7, 1494);
        __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0, (void*)0, "sLShiftNode_clone", 7, 1493);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj167=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sLShiftNode_clone", 10, 1496);
        (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0, (void*)0, "sLShiftNode_clone", 10, 1495) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj168=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sLShiftNode_clone", 11, 1498);
        (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0, (void*)0, "sLShiftNode_clone", 11, 1497) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sLShiftNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLShiftNode_clone}", 12, 1499);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sRShiftNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sRShiftNode*  result  ;
    char*  __dec_obj170  ;
    struct sNode* __dec_obj171;
    struct sNode* __dec_obj172;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sRShiftNode* )come_increment_ref_count((struct sRShiftNode *)come_calloc(1, sizeof(struct sRShiftNode )*(1), "sRShiftNode_clone", 5, 1511, "struct sRShiftNode* "), "sRShiftNode_clone", 5, 1512);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj170=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sRShiftNode_clone", 7, 1513, "char* "), "sRShiftNode_clone", 7, 1515);
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0, (void*)0, "sRShiftNode_clone", 7, 1514);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj171=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sRShiftNode_clone", 10, 1517);
        (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0, (void*)0, "sRShiftNode_clone", 10, 1516) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj172=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sRShiftNode_clone", 11, 1519);
        (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0, (void*)0, "sRShiftNode_clone", 11, 1518) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sRShiftNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sRShiftNode_clone}", 12, 1520);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* comparison_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "comparison_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value18;
    struct sGtEqNode* _inf_obj_value18;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj179;
    int sline_real_58;
    struct sNode* right_59;
    struct sNode* _inf_value19;
    struct sLtEqNode* _inf_obj_value19;
    struct sNode* __dec_obj183;
    int sline_real_60;
    struct sNode* right_61;
    struct sNode* _inf_value20;
    struct sGtNode* _inf_obj_value20;
    struct sNode* __dec_obj187;
    int sline_real_62;
    struct sNode* right_63;
    struct sNode* _inf_value21;
    struct sLtNode* _inf_obj_value21;
    struct sNode* __dec_obj191;
    int sline_real_64;
    struct sNode* right_65;
    struct sNode* _inf_value22;
    struct sGtEqNode* _inf_obj_value22;
    struct sNode* __dec_obj192;
    int sline_real_66;
    struct sNode* right_67;
    struct sNode* _inf_value23;
    struct sLtEqNode* _inf_obj_value23;
    struct sNode* __dec_obj193;
    int sline_real_68;
    struct sNode* right_69;
    struct sNode* _inf_value24;
    struct sGtNode* _inf_obj_value24;
    struct sNode* __dec_obj194;
    int sline_real_70;
    struct sNode* right_71;
    struct sNode* _inf_value25;
    struct sLtNode* _inf_obj_value25;
    struct sNode* __dec_obj195;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_58, 0, sizeof(sline_real_58));
    memset(&right_59, 0, sizeof(right_59));
    memset(&sline_real_60, 0, sizeof(sline_real_60));
    memset(&right_61, 0, sizeof(right_61));
    memset(&sline_real_62, 0, sizeof(sline_real_62));
    memset(&right_63, 0, sizeof(right_63));
    memset(&sline_real_64, 0, sizeof(sline_real_64));
    memset(&right_65, 0, sizeof(right_65));
    memset(&sline_real_66, 0, sizeof(sline_real_66));
    memset(&right_67, 0, sizeof(right_67));
    memset(&sline_real_68, 0, sizeof(sline_real_68));
    memset(&right_69, 0, sizeof(right_69));
    memset(&sline_real_70, 0, sizeof(sline_real_70));
    memset(&right_71, 0, sizeof(right_71));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(shift_exp(info), "42op2.nc", 1749, 1550);
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==62&&*(info->p+1)==61) {
            info->p+=2;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(shift_exp(info), "42op2.nc", 1760, 1551);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1763, 1556, "struct sNode");
            _inf_obj_value18=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value1=sGtEqNode_initialize((struct sGtEqNode* )come_increment_ref_count((struct sGtEqNode *)come_calloc(1, sizeof(struct sGtEqNode )*(1), "42op2.nc", 1763, 1552, "struct sGtEqNode* "), "42op2.nc", 1763, 1553),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1763, 1554),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 1763, 1555),(_Bool)0,info))), "42op2.nc", 1763, 1557);
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sGtEqNode_finalize;
            _inf_value18->clone=(void*)sGtEqNode_clone;
            _inf_value18->compile=(void*)sGtEqNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sGtEqNode_kind;
            _inf_value18->left_value=(void*)sNodeBase_left_value;
            __dec_obj179=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value18, "42op2.nc", 1763, 1569);
            (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1763, 1568) :0);
            come_call_finalizer(sGtEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1763, 1570);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1845, 1571):(void*)0);
        }
        else if(*info->p==60&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_58=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_59=(struct sNode*)come_increment_ref_count(shift_exp(info), "42op2.nc", 1771, 1572);
            info->sline_real=sline_real_58;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1774, 1577, "struct sNode");
            _inf_obj_value19=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value1=sLtEqNode_initialize((struct sLtEqNode* )come_increment_ref_count((struct sLtEqNode *)come_calloc(1, sizeof(struct sLtEqNode )*(1), "42op2.nc", 1774, 1573, "struct sLtEqNode* "), "42op2.nc", 1774, 1574),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1774, 1575),(struct sNode*)come_increment_ref_count(right_59, "42op2.nc", 1774, 1576),(_Bool)0,info))), "42op2.nc", 1774, 1578);
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sLtEqNode_finalize;
            _inf_value19->clone=(void*)sLtEqNode_clone;
            _inf_value19->compile=(void*)sLtEqNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sLtEqNode_kind;
            _inf_value19->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj183=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value19, "42op2.nc", 1774, 1590);
            (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1774, 1589) :0);
            come_call_finalizer(sLtEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1774, 1591);
            ((right_59) ? right_59 = come_decrement_ref_count(right_59, ((struct sNode*)right_59)->finalize, ((struct sNode*)right_59)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1845, 1592):(void*)0);
        }
        else if(*info->p==62&&*(info->p+1)!=62) {
            info->p++;
            sline_real_60=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_61=(struct sNode*)come_increment_ref_count(shift_exp(info), "42op2.nc", 1782, 1593);
            info->sline_real=sline_real_60;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1785, 1598, "struct sNode");
            _inf_obj_value20=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value1=sGtNode_initialize((struct sGtNode* )come_increment_ref_count((struct sGtNode *)come_calloc(1, sizeof(struct sGtNode )*(1), "42op2.nc", 1785, 1594, "struct sGtNode* "), "42op2.nc", 1785, 1595),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1785, 1596),(struct sNode*)come_increment_ref_count(right_61, "42op2.nc", 1785, 1597),(_Bool)0,info))), "42op2.nc", 1785, 1599);
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sGtNode_finalize;
            _inf_value20->clone=(void*)sGtNode_clone;
            _inf_value20->compile=(void*)sGtNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sGtNode_kind;
            _inf_value20->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj187=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value20, "42op2.nc", 1785, 1611);
            (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1785, 1610) :0);
            come_call_finalizer(sGtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1785, 1612);
            ((right_61) ? right_61 = come_decrement_ref_count(right_61, ((struct sNode*)right_61)->finalize, ((struct sNode*)right_61)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1845, 1613):(void*)0);
        }
        else if(*info->p==60&&*(info->p+1)!=60&&*(info->p+1)!=45) {
            info->p++;
            sline_real_62=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_63=(struct sNode*)come_increment_ref_count(shift_exp(info), "42op2.nc", 1793, 1614);
            info->sline_real=sline_real_62;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1796, 1619, "struct sNode");
            _inf_obj_value21=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value1=sLtNode_initialize((struct sLtNode* )come_increment_ref_count((struct sLtNode *)come_calloc(1, sizeof(struct sLtNode )*(1), "42op2.nc", 1796, 1615, "struct sLtNode* "), "42op2.nc", 1796, 1616),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1796, 1617),(struct sNode*)come_increment_ref_count(right_63, "42op2.nc", 1796, 1618),(_Bool)0,info))), "42op2.nc", 1796, 1620);
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sLtNode_finalize;
            _inf_value21->clone=(void*)sLtNode_clone;
            _inf_value21->compile=(void*)sLtNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sLtNode_kind;
            _inf_value21->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj191=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value21, "42op2.nc", 1796, 1632);
            (__dec_obj191 ? __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1796, 1631) :0);
            come_call_finalizer(sLtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1796, 1633);
            ((right_63) ? right_63 = come_decrement_ref_count(right_63, ((struct sNode*)right_63)->finalize, ((struct sNode*)right_63)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1845, 1634):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==62&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_64=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_65=(struct sNode*)come_increment_ref_count(shift_exp(info), "42op2.nc", 1804, 1635);
            info->sline_real=sline_real_64;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1807, 1640, "struct sNode");
            _inf_obj_value22=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value1=sGtEqNode_initialize((struct sGtEqNode* )come_increment_ref_count((struct sGtEqNode *)come_calloc(1, sizeof(struct sGtEqNode )*(1), "42op2.nc", 1807, 1636, "struct sGtEqNode* "), "42op2.nc", 1807, 1637),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1807, 1638),(struct sNode*)come_increment_ref_count(right_65, "42op2.nc", 1807, 1639),(_Bool)1,info))), "42op2.nc", 1807, 1641);
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sGtEqNode_finalize;
            _inf_value22->clone=(void*)sGtEqNode_clone;
            _inf_value22->compile=(void*)sGtEqNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sGtEqNode_kind;
            _inf_value22->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj192=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value22, "42op2.nc", 1807, 1643);
            (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1807, 1642) :0);
            come_call_finalizer(sGtEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1807, 1644);
            ((right_65) ? right_65 = come_decrement_ref_count(right_65, ((struct sNode*)right_65)->finalize, ((struct sNode*)right_65)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1845, 1645):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==60&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_66=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_67=(struct sNode*)come_increment_ref_count(shift_exp(info), "42op2.nc", 1815, 1646);
            info->sline_real=sline_real_66;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1818, 1651, "struct sNode");
            _inf_obj_value23=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value1=sLtEqNode_initialize((struct sLtEqNode* )come_increment_ref_count((struct sLtEqNode *)come_calloc(1, sizeof(struct sLtEqNode )*(1), "42op2.nc", 1818, 1647, "struct sLtEqNode* "), "42op2.nc", 1818, 1648),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1818, 1649),(struct sNode*)come_increment_ref_count(right_67, "42op2.nc", 1818, 1650),(_Bool)1,info))), "42op2.nc", 1818, 1652);
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sLtEqNode_finalize;
            _inf_value23->clone=(void*)sLtEqNode_clone;
            _inf_value23->compile=(void*)sLtEqNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sLtEqNode_kind;
            _inf_value23->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj193=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value23, "42op2.nc", 1818, 1654);
            (__dec_obj193 ? __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1818, 1653) :0);
            come_call_finalizer(sLtEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1818, 1655);
            ((right_67) ? right_67 = come_decrement_ref_count(right_67, ((struct sNode*)right_67)->finalize, ((struct sNode*)right_67)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1845, 1656):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_68=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_69=(struct sNode*)come_increment_ref_count(shift_exp(info), "42op2.nc", 1826, 1657);
            info->sline_real=sline_real_68;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1829, 1662, "struct sNode");
            _inf_obj_value24=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value1=sGtNode_initialize((struct sGtNode* )come_increment_ref_count((struct sGtNode *)come_calloc(1, sizeof(struct sGtNode )*(1), "42op2.nc", 1829, 1658, "struct sGtNode* "), "42op2.nc", 1829, 1659),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1829, 1660),(struct sNode*)come_increment_ref_count(right_69, "42op2.nc", 1829, 1661),(_Bool)1,info))), "42op2.nc", 1829, 1663);
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sGtNode_finalize;
            _inf_value24->clone=(void*)sGtNode_clone;
            _inf_value24->compile=(void*)sGtNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sGtNode_kind;
            _inf_value24->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj194=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value24, "42op2.nc", 1829, 1665);
            (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1829, 1664) :0);
            come_call_finalizer(sGtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1829, 1666);
            ((right_69) ? right_69 = come_decrement_ref_count(right_69, ((struct sNode*)right_69)->finalize, ((struct sNode*)right_69)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1845, 1667):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60&&*(info->p+2)!=45) {
            info->p+=2;
            sline_real_70=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_71=(struct sNode*)come_increment_ref_count(shift_exp(info), "42op2.nc", 1837, 1668);
            info->sline_real=sline_real_70;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1840, 1673, "struct sNode");
            _inf_obj_value25=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value1=sLtNode_initialize((struct sLtNode* )come_increment_ref_count((struct sLtNode *)come_calloc(1, sizeof(struct sLtNode )*(1), "42op2.nc", 1840, 1669, "struct sLtNode* "), "42op2.nc", 1840, 1670),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1840, 1671),(struct sNode*)come_increment_ref_count(right_71, "42op2.nc", 1840, 1672),(_Bool)1,info))), "42op2.nc", 1840, 1674);
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sLtNode_finalize;
            _inf_value25->clone=(void*)sLtNode_clone;
            _inf_value25->compile=(void*)sLtNode_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sLtNode_kind;
            _inf_value25->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj195=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value25, "42op2.nc", 1840, 1676);
            (__dec_obj195 ? __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1840, 1675) :0);
            come_call_finalizer(sLtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1840, 1677);
            ((right_71) ? right_71 = come_decrement_ref_count(right_71, ((struct sNode*)right_71)->finalize, ((struct sNode*)right_71)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1845, 1678):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 1849, 1679);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1849, 1680):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1849, 1681):(void*)0);
    return __result_obj__0;
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sGtEqNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGtEqNode*  result  ;
    char*  __dec_obj176  ;
    struct sNode* __dec_obj177;
    struct sNode* __dec_obj178;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGtEqNode* )come_increment_ref_count((struct sGtEqNode *)come_calloc(1, sizeof(struct sGtEqNode )*(1), "sGtEqNode_clone", 5, 1558, "struct sGtEqNode* "), "sGtEqNode_clone", 5, 1559);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj176=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGtEqNode_clone", 7, 1560, "char* "), "sGtEqNode_clone", 7, 1562);
        __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0, (void*)0, "sGtEqNode_clone", 7, 1561);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj177=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sGtEqNode_clone", 10, 1564);
        (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0, (void*)0, "sGtEqNode_clone", 10, 1563) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj178=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sGtEqNode_clone", 11, 1566);
        (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0, (void*)0, "sGtEqNode_clone", 11, 1565) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sGtEqNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sGtEqNode_clone}", 12, 1567);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sLtEqNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLtEqNode*  result  ;
    char*  __dec_obj180  ;
    struct sNode* __dec_obj181;
    struct sNode* __dec_obj182;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLtEqNode* )come_increment_ref_count((struct sLtEqNode *)come_calloc(1, sizeof(struct sLtEqNode )*(1), "sLtEqNode_clone", 5, 1579, "struct sLtEqNode* "), "sLtEqNode_clone", 5, 1580);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj180=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLtEqNode_clone", 7, 1581, "char* "), "sLtEqNode_clone", 7, 1583);
        __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0,0, (void*)0, "sLtEqNode_clone", 7, 1582);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj181=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sLtEqNode_clone", 10, 1585);
        (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0, (void*)0, "sLtEqNode_clone", 10, 1584) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj182=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sLtEqNode_clone", 11, 1587);
        (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0, (void*)0, "sLtEqNode_clone", 11, 1586) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sLtEqNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLtEqNode_clone}", 12, 1588);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sGtNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGtNode*  result  ;
    char*  __dec_obj184  ;
    struct sNode* __dec_obj185;
    struct sNode* __dec_obj186;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGtNode* )come_increment_ref_count((struct sGtNode *)come_calloc(1, sizeof(struct sGtNode )*(1), "sGtNode_clone", 5, 1600, "struct sGtNode* "), "sGtNode_clone", 5, 1601);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj184=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGtNode_clone", 7, 1602, "char* "), "sGtNode_clone", 7, 1604);
        __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0,0, (void*)0, "sGtNode_clone", 7, 1603);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj185=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sGtNode_clone", 10, 1606);
        (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0, (void*)0, "sGtNode_clone", 10, 1605) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj186=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sGtNode_clone", 11, 1608);
        (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0, (void*)0, "sGtNode_clone", 11, 1607) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sGtNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sGtNode_clone}", 12, 1609);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sLtNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLtNode*  result  ;
    char*  __dec_obj188  ;
    struct sNode* __dec_obj189;
    struct sNode* __dec_obj190;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLtNode* )come_increment_ref_count((struct sLtNode *)come_calloc(1, sizeof(struct sLtNode )*(1), "sLtNode_clone", 5, 1621, "struct sLtNode* "), "sLtNode_clone", 5, 1622);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj188=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLtNode_clone", 7, 1623, "char* "), "sLtNode_clone", 7, 1625);
        __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0, (void*)0, "sLtNode_clone", 7, 1624);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj189=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sLtNode_clone", 10, 1627);
        (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0, (void*)0, "sLtNode_clone", 10, 1626) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj190=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sLtNode_clone", 11, 1629);
        (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0, (void*)0, "sLtNode_clone", 11, 1628) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sLtNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLtNode_clone}", 12, 1630);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* eq_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "eq_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value26;
    struct sEq2Node* _inf_obj_value26;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj199;
    int sline_real_72;
    struct sNode* right_73;
    struct sNode* _inf_value27;
    struct sEqNode* _inf_obj_value27;
    struct sNode* __dec_obj203;
    int sline_real_74;
    struct sNode* right_75;
    struct sNode* _inf_value28;
    struct sNotEq2Node* _inf_obj_value28;
    struct sNode* __dec_obj207;
    int sline_real_76;
    struct sNode* right_77;
    struct sNode* _inf_value29;
    struct sNotEqNode* _inf_obj_value29;
    struct sNode* __dec_obj211;
    int sline_real_78;
    struct sNode* right_79;
    struct sNode* _inf_value30;
    struct sEq2Node* _inf_obj_value30;
    struct sNode* __dec_obj212;
    int sline_real_80;
    struct sNode* right_81;
    struct sNode* _inf_value31;
    struct sEqNode* _inf_obj_value31;
    struct sNode* __dec_obj213;
    int sline_real_82;
    struct sNode* right_83;
    struct sNode* _inf_value32;
    struct sNotEq2Node* _inf_obj_value32;
    struct sNode* __dec_obj214;
    int sline_real_84;
    struct sNode* right_85;
    struct sNode* _inf_value33;
    struct sNotEqNode* _inf_obj_value33;
    struct sNode* __dec_obj215;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_72, 0, sizeof(sline_real_72));
    memset(&right_73, 0, sizeof(right_73));
    memset(&sline_real_74, 0, sizeof(sline_real_74));
    memset(&right_75, 0, sizeof(right_75));
    memset(&sline_real_76, 0, sizeof(sline_real_76));
    memset(&right_77, 0, sizeof(right_77));
    memset(&sline_real_78, 0, sizeof(sline_real_78));
    memset(&right_79, 0, sizeof(right_79));
    memset(&sline_real_80, 0, sizeof(sline_real_80));
    memset(&right_81, 0, sizeof(right_81));
    memset(&sline_real_82, 0, sizeof(sline_real_82));
    memset(&right_83, 0, sizeof(right_83));
    memset(&sline_real_84, 0, sizeof(sline_real_84));
    memset(&right_85, 0, sizeof(right_85));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(comparison_exp(info), "42op2.nc", 1856, 1682);
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==61&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(comparison_exp(info), "42op2.nc", 1867, 1683);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1870, 1688, "struct sNode");
            _inf_obj_value26=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value1=sEq2Node_initialize((struct sEq2Node* )come_increment_ref_count((struct sEq2Node *)come_calloc(1, sizeof(struct sEq2Node )*(1), "42op2.nc", 1870, 1684, "struct sEq2Node* "), "42op2.nc", 1870, 1685),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1870, 1686),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 1870, 1687),(_Bool)0,info))), "42op2.nc", 1870, 1689);
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sEq2Node_finalize;
            _inf_value26->clone=(void*)sEq2Node_clone;
            _inf_value26->compile=(void*)sEq2Node_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sEq2Node_kind;
            _inf_value26->left_value=(void*)sNodeBase_left_value;
            __dec_obj199=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value26, "42op2.nc", 1870, 1701);
            (__dec_obj199 ? __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1870, 1700) :0);
            come_call_finalizer(sEq2Node_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1870, 1702);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1952, 1703):(void*)0);
        }
        else if(*info->p==61&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_72=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_73=(struct sNode*)come_increment_ref_count(comparison_exp(info), "42op2.nc", 1878, 1704);
            info->sline_real=sline_real_72;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1881, 1709, "struct sNode");
            _inf_obj_value27=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value1=sEqNode_initialize((struct sEqNode* )come_increment_ref_count((struct sEqNode *)come_calloc(1, sizeof(struct sEqNode )*(1), "42op2.nc", 1881, 1705, "struct sEqNode* "), "42op2.nc", 1881, 1706),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1881, 1707),(struct sNode*)come_increment_ref_count(right_73, "42op2.nc", 1881, 1708),(_Bool)0,info))), "42op2.nc", 1881, 1710);
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sEqNode_finalize;
            _inf_value27->clone=(void*)sEqNode_clone;
            _inf_value27->compile=(void*)sEqNode_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sEqNode_kind;
            _inf_value27->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj203=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value27, "42op2.nc", 1881, 1722);
            (__dec_obj203 ? __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1881, 1721) :0);
            come_call_finalizer(sEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1881, 1723);
            ((right_73) ? right_73 = come_decrement_ref_count(right_73, ((struct sNode*)right_73)->finalize, ((struct sNode*)right_73)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1952, 1724):(void*)0);
        }
        else if(*info->p==33&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_74=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_75=(struct sNode*)come_increment_ref_count(comparison_exp(info), "42op2.nc", 1889, 1725);
            info->sline_real=sline_real_74;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1892, 1730, "struct sNode");
            _inf_obj_value28=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value1=sNotEq2Node_initialize((struct sNotEq2Node* )come_increment_ref_count((struct sNotEq2Node *)come_calloc(1, sizeof(struct sNotEq2Node )*(1), "42op2.nc", 1892, 1726, "struct sNotEq2Node* "), "42op2.nc", 1892, 1727),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1892, 1728),(struct sNode*)come_increment_ref_count(right_75, "42op2.nc", 1892, 1729),(_Bool)0,info))), "42op2.nc", 1892, 1731);
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sNotEq2Node_finalize;
            _inf_value28->clone=(void*)sNotEq2Node_clone;
            _inf_value28->compile=(void*)sNotEq2Node_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sNotEq2Node_kind;
            _inf_value28->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj207=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value28, "42op2.nc", 1892, 1743);
            (__dec_obj207 ? __dec_obj207 = come_decrement_ref_count(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1892, 1742) :0);
            come_call_finalizer(sNotEq2Node_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1892, 1744);
            ((right_75) ? right_75 = come_decrement_ref_count(right_75, ((struct sNode*)right_75)->finalize, ((struct sNode*)right_75)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1952, 1745):(void*)0);
        }
        else if(*info->p==33&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_76=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_77=(struct sNode*)come_increment_ref_count(comparison_exp(info), "42op2.nc", 1900, 1746);
            info->sline_real=sline_real_76;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1903, 1751, "struct sNode");
            _inf_obj_value29=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value1=sNotEqNode_initialize((struct sNotEqNode* )come_increment_ref_count((struct sNotEqNode *)come_calloc(1, sizeof(struct sNotEqNode )*(1), "42op2.nc", 1903, 1747, "struct sNotEqNode* "), "42op2.nc", 1903, 1748),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1903, 1749),(struct sNode*)come_increment_ref_count(right_77, "42op2.nc", 1903, 1750),(_Bool)0,info))), "42op2.nc", 1903, 1752);
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sNotEqNode_finalize;
            _inf_value29->clone=(void*)sNotEqNode_clone;
            _inf_value29->compile=(void*)sNotEqNode_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sNotEqNode_kind;
            _inf_value29->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj211=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value29, "42op2.nc", 1903, 1764);
            (__dec_obj211 ? __dec_obj211 = come_decrement_ref_count(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1903, 1763) :0);
            come_call_finalizer(sNotEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1903, 1765);
            ((right_77) ? right_77 = come_decrement_ref_count(right_77, ((struct sNode*)right_77)->finalize, ((struct sNode*)right_77)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1952, 1766):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_78=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_79=(struct sNode*)come_increment_ref_count(comparison_exp(info), "42op2.nc", 1911, 1767);
            info->sline_real=sline_real_78;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1914, 1772, "struct sNode");
            _inf_obj_value30=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value1=sEq2Node_initialize((struct sEq2Node* )come_increment_ref_count((struct sEq2Node *)come_calloc(1, sizeof(struct sEq2Node )*(1), "42op2.nc", 1914, 1768, "struct sEq2Node* "), "42op2.nc", 1914, 1769),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1914, 1770),(struct sNode*)come_increment_ref_count(right_79, "42op2.nc", 1914, 1771),(_Bool)1,info))), "42op2.nc", 1914, 1773);
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sEq2Node_finalize;
            _inf_value30->clone=(void*)sEq2Node_clone;
            _inf_value30->compile=(void*)sEq2Node_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sline_real=(void*)sNodeBase_sline_real;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sEq2Node_kind;
            _inf_value30->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj212=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value30, "42op2.nc", 1914, 1775);
            (__dec_obj212 ? __dec_obj212 = come_decrement_ref_count(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1914, 1774) :0);
            come_call_finalizer(sEq2Node_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1914, 1776);
            ((right_79) ? right_79 = come_decrement_ref_count(right_79, ((struct sNode*)right_79)->finalize, ((struct sNode*)right_79)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1952, 1777):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_80=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_81=(struct sNode*)come_increment_ref_count(comparison_exp(info), "42op2.nc", 1922, 1778);
            info->sline_real=sline_real_80;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1925, 1783, "struct sNode");
            _inf_obj_value31=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value1=sEqNode_initialize((struct sEqNode* )come_increment_ref_count((struct sEqNode *)come_calloc(1, sizeof(struct sEqNode )*(1), "42op2.nc", 1925, 1779, "struct sEqNode* "), "42op2.nc", 1925, 1780),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1925, 1781),(struct sNode*)come_increment_ref_count(right_81, "42op2.nc", 1925, 1782),(_Bool)1,info))), "42op2.nc", 1925, 1784);
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sEqNode_finalize;
            _inf_value31->clone=(void*)sEqNode_clone;
            _inf_value31->compile=(void*)sEqNode_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sline_real=(void*)sNodeBase_sline_real;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sEqNode_kind;
            _inf_value31->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj213=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value31, "42op2.nc", 1925, 1786);
            (__dec_obj213 ? __dec_obj213 = come_decrement_ref_count(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1925, 1785) :0);
            come_call_finalizer(sEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1925, 1787);
            ((right_81) ? right_81 = come_decrement_ref_count(right_81, ((struct sNode*)right_81)->finalize, ((struct sNode*)right_81)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1952, 1788):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_82=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_83=(struct sNode*)come_increment_ref_count(comparison_exp(info), "42op2.nc", 1933, 1789);
            info->sline_real=sline_real_82;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1936, 1794, "struct sNode");
            _inf_obj_value32=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value1=sNotEq2Node_initialize((struct sNotEq2Node* )come_increment_ref_count((struct sNotEq2Node *)come_calloc(1, sizeof(struct sNotEq2Node )*(1), "42op2.nc", 1936, 1790, "struct sNotEq2Node* "), "42op2.nc", 1936, 1791),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1936, 1792),(struct sNode*)come_increment_ref_count(right_83, "42op2.nc", 1936, 1793),(_Bool)1,info))), "42op2.nc", 1936, 1795);
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sNotEq2Node_finalize;
            _inf_value32->clone=(void*)sNotEq2Node_clone;
            _inf_value32->compile=(void*)sNotEq2Node_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sline_real=(void*)sNodeBase_sline_real;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sNotEq2Node_kind;
            _inf_value32->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj214=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value32, "42op2.nc", 1936, 1797);
            (__dec_obj214 ? __dec_obj214 = come_decrement_ref_count(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1936, 1796) :0);
            come_call_finalizer(sNotEq2Node_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1936, 1798);
            ((right_83) ? right_83 = come_decrement_ref_count(right_83, ((struct sNode*)right_83)->finalize, ((struct sNode*)right_83)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1952, 1799):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_84=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_85=(struct sNode*)come_increment_ref_count(comparison_exp(info), "42op2.nc", 1944, 1800);
            info->sline_real=sline_real_84;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1947, 1805, "struct sNode");
            _inf_obj_value33=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value1=sNotEqNode_initialize((struct sNotEqNode* )come_increment_ref_count((struct sNotEqNode *)come_calloc(1, sizeof(struct sNotEqNode )*(1), "42op2.nc", 1947, 1801, "struct sNotEqNode* "), "42op2.nc", 1947, 1802),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1947, 1803),(struct sNode*)come_increment_ref_count(right_85, "42op2.nc", 1947, 1804),(_Bool)1,info))), "42op2.nc", 1947, 1806);
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sNotEqNode_finalize;
            _inf_value33->clone=(void*)sNotEqNode_clone;
            _inf_value33->compile=(void*)sNotEqNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sline_real=(void*)sNodeBase_sline_real;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sNodeBase_terminated;
            _inf_value33->kind=(void*)sNotEqNode_kind;
            _inf_value33->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj215=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value33, "42op2.nc", 1947, 1808);
            (__dec_obj215 ? __dec_obj215 = come_decrement_ref_count(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1947, 1807) :0);
            come_call_finalizer(sNotEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1947, 1809);
            ((right_85) ? right_85 = come_decrement_ref_count(right_85, ((struct sNode*)right_85)->finalize, ((struct sNode*)right_85)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1952, 1810):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 1956, 1811);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1956, 1812):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1956, 1813):(void*)0);
    return __result_obj__0;
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sEq2Node* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sEq2Node*  result  ;
    char*  __dec_obj196  ;
    struct sNode* __dec_obj197;
    struct sNode* __dec_obj198;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sEq2Node* )come_increment_ref_count((struct sEq2Node *)come_calloc(1, sizeof(struct sEq2Node )*(1), "sEq2Node_clone", 5, 1690, "struct sEq2Node* "), "sEq2Node_clone", 5, 1691);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj196=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sEq2Node_clone", 7, 1692, "char* "), "sEq2Node_clone", 7, 1694);
        __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0,0, (void*)0, "sEq2Node_clone", 7, 1693);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj197=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sEq2Node_clone", 10, 1696);
        (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0, (void*)0, "sEq2Node_clone", 10, 1695) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj198=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sEq2Node_clone", 11, 1698);
        (__dec_obj198 ? __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0, (void*)0, "sEq2Node_clone", 11, 1697) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sEq2Node_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sEq2Node_clone}", 12, 1699);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sEqNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sEqNode*  result  ;
    char*  __dec_obj200  ;
    struct sNode* __dec_obj201;
    struct sNode* __dec_obj202;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sEqNode* )come_increment_ref_count((struct sEqNode *)come_calloc(1, sizeof(struct sEqNode )*(1), "sEqNode_clone", 5, 1711, "struct sEqNode* "), "sEqNode_clone", 5, 1712);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj200=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sEqNode_clone", 7, 1713, "char* "), "sEqNode_clone", 7, 1715);
        __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0,0, (void*)0, "sEqNode_clone", 7, 1714);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj201=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sEqNode_clone", 10, 1717);
        (__dec_obj201 ? __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0, (void*)0, "sEqNode_clone", 10, 1716) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj202=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sEqNode_clone", 11, 1719);
        (__dec_obj202 ? __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0, (void*)0, "sEqNode_clone", 11, 1718) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sEqNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sEqNode_clone}", 12, 1720);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNotEq2Node* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNotEq2Node*  result  ;
    char*  __dec_obj204  ;
    struct sNode* __dec_obj205;
    struct sNode* __dec_obj206;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNotEq2Node* )come_increment_ref_count((struct sNotEq2Node *)come_calloc(1, sizeof(struct sNotEq2Node )*(1), "sNotEq2Node_clone", 5, 1732, "struct sNotEq2Node* "), "sNotEq2Node_clone", 5, 1733);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj204=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNotEq2Node_clone", 7, 1734, "char* "), "sNotEq2Node_clone", 7, 1736);
        __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0,0, (void*)0, "sNotEq2Node_clone", 7, 1735);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj205=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sNotEq2Node_clone", 10, 1738);
        (__dec_obj205 ? __dec_obj205 = come_decrement_ref_count(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0, (void*)0, "sNotEq2Node_clone", 10, 1737) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj206=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sNotEq2Node_clone", 11, 1740);
        (__dec_obj206 ? __dec_obj206 = come_decrement_ref_count(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0, (void*)0, "sNotEq2Node_clone", 11, 1739) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sNotEq2Node_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sNotEq2Node_clone}", 12, 1741);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNotEqNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNotEqNode*  result  ;
    char*  __dec_obj208  ;
    struct sNode* __dec_obj209;
    struct sNode* __dec_obj210;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNotEqNode* )come_increment_ref_count((struct sNotEqNode *)come_calloc(1, sizeof(struct sNotEqNode )*(1), "sNotEqNode_clone", 5, 1753, "struct sNotEqNode* "), "sNotEqNode_clone", 5, 1754);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj208=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNotEqNode_clone", 7, 1755, "char* "), "sNotEqNode_clone", 7, 1757);
        __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0,0, (void*)0, "sNotEqNode_clone", 7, 1756);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj209=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sNotEqNode_clone", 10, 1759);
        (__dec_obj209 ? __dec_obj209 = come_decrement_ref_count(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0, (void*)0, "sNotEqNode_clone", 10, 1758) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj210=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sNotEqNode_clone", 11, 1761);
        (__dec_obj210 ? __dec_obj210 = come_decrement_ref_count(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0, (void*)0, "sNotEqNode_clone", 11, 1760) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sNotEqNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sNotEqNode_clone}", 12, 1762);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* and_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "and_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value34;
    struct sAndNode* _inf_obj_value34;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj219;
    int sline_real_86;
    struct sNode* right_87;
    struct sNode* _inf_value35;
    struct sAndNode* _inf_obj_value35;
    struct sNode* __dec_obj220;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_86, 0, sizeof(sline_real_86));
    memset(&right_87, 0, sizeof(right_87));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(eq_exp(info), "42op2.nc", 1963, 1814);
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(!node->terminated(node->_protocol_obj)&&*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61) {
            info->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(eq_exp(info), "42op2.nc", 1974, 1815);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1977, 1820, "struct sNode");
            _inf_obj_value34=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value1=sAndNode_initialize((struct sAndNode* )come_increment_ref_count((struct sAndNode *)come_calloc(1, sizeof(struct sAndNode )*(1), "42op2.nc", 1977, 1816, "struct sAndNode* "), "42op2.nc", 1977, 1817),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1977, 1818),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 1977, 1819),(_Bool)0,info))), "42op2.nc", 1977, 1821);
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sAndNode_finalize;
            _inf_value34->clone=(void*)sAndNode_clone;
            _inf_value34->compile=(void*)sAndNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sline_real=(void*)sNodeBase_sline_real;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sAndNode_kind;
            _inf_value34->left_value=(void*)sNodeBase_left_value;
            __dec_obj219=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value34, "42op2.nc", 1977, 1833);
            (__dec_obj219 ? __dec_obj219 = come_decrement_ref_count(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1977, 1832) :0);
            come_call_finalizer(sAndNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1977, 1834);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1993, 1835):(void*)0);
        }
        else if(!node->terminated(node->_protocol_obj)&&*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_86=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_87=(struct sNode*)come_increment_ref_count(eq_exp(info), "42op2.nc", 1985, 1836);
            info->sline_real=sline_real_86;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 1988, 1841, "struct sNode");
            _inf_obj_value35=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value1=sAndNode_initialize((struct sAndNode* )come_increment_ref_count((struct sAndNode *)come_calloc(1, sizeof(struct sAndNode )*(1), "42op2.nc", 1988, 1837, "struct sAndNode* "), "42op2.nc", 1988, 1838),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 1988, 1839),(struct sNode*)come_increment_ref_count(right_87, "42op2.nc", 1988, 1840),(_Bool)1,info))), "42op2.nc", 1988, 1842);
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sAndNode_finalize;
            _inf_value35->clone=(void*)sAndNode_clone;
            _inf_value35->compile=(void*)sAndNode_compile;
            _inf_value35->sline=(void*)sNodeBase_sline;
            _inf_value35->sline_real=(void*)sNodeBase_sline_real;
            _inf_value35->sname=(void*)sNodeBase_sname;
            _inf_value35->terminated=(void*)sNodeBase_terminated;
            _inf_value35->kind=(void*)sAndNode_kind;
            _inf_value35->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj220=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value35, "42op2.nc", 1988, 1844);
            (__dec_obj220 ? __dec_obj220 = come_decrement_ref_count(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 1988, 1843) :0);
            come_call_finalizer(sAndNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 1988, 1845);
            ((right_87) ? right_87 = come_decrement_ref_count(right_87, ((struct sNode*)right_87)->finalize, ((struct sNode*)right_87)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 1993, 1846):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 1997, 1847);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1997, 1848):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 1997, 1849):(void*)0);
    return __result_obj__0;
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sAndNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAndNode*  result  ;
    char*  __dec_obj216  ;
    struct sNode* __dec_obj217;
    struct sNode* __dec_obj218;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAndNode* )come_increment_ref_count((struct sAndNode *)come_calloc(1, sizeof(struct sAndNode )*(1), "sAndNode_clone", 5, 1822, "struct sAndNode* "), "sAndNode_clone", 5, 1823);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj216=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAndNode_clone", 7, 1824, "char* "), "sAndNode_clone", 7, 1826);
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0,0, (void*)0, "sAndNode_clone", 7, 1825);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj217=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sAndNode_clone", 10, 1828);
        (__dec_obj217 ? __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0, (void*)0, "sAndNode_clone", 10, 1827) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj218=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sAndNode_clone", 11, 1830);
        (__dec_obj218 ? __dec_obj218 = come_decrement_ref_count(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0, (void*)0, "sAndNode_clone", 11, 1829) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sAndNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAndNode_clone}", 12, 1831);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* xor_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xor_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value36;
    struct sXOrNode* _inf_obj_value36;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj224;
    int sline_real_88;
    struct sNode* right_89;
    struct sNode* _inf_value37;
    struct sXOrNode* _inf_obj_value37;
    struct sNode* __dec_obj225;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_88, 0, sizeof(sline_real_88));
    memset(&right_89, 0, sizeof(right_89));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(and_exp(info), "42op2.nc", 2004, 1850);
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(*info->p==94&&*(info->p+1)!=61) {
            info->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(and_exp(info), "42op2.nc", 2015, 1851);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2018, 1856, "struct sNode");
            _inf_obj_value36=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value1=sXOrNode_initialize((struct sXOrNode* )come_increment_ref_count((struct sXOrNode *)come_calloc(1, sizeof(struct sXOrNode )*(1), "42op2.nc", 2018, 1852, "struct sXOrNode* "), "42op2.nc", 2018, 1853),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2018, 1854),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 2018, 1855),(_Bool)0,info))), "42op2.nc", 2018, 1857);
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sXOrNode_finalize;
            _inf_value36->clone=(void*)sXOrNode_clone;
            _inf_value36->compile=(void*)sXOrNode_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sline_real=(void*)sNodeBase_sline_real;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sXOrNode_kind;
            _inf_value36->left_value=(void*)sNodeBase_left_value;
            __dec_obj224=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value36, "42op2.nc", 2018, 1869);
            (__dec_obj224 ? __dec_obj224 = come_decrement_ref_count(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2018, 1868) :0);
            come_call_finalizer(sXOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2018, 1870);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2034, 1871):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_88=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_89=(struct sNode*)come_increment_ref_count(and_exp(info), "42op2.nc", 2026, 1872);
            info->sline_real=sline_real_88;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2029, 1877, "struct sNode");
            _inf_obj_value37=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value1=sXOrNode_initialize((struct sXOrNode* )come_increment_ref_count((struct sXOrNode *)come_calloc(1, sizeof(struct sXOrNode )*(1), "42op2.nc", 2029, 1873, "struct sXOrNode* "), "42op2.nc", 2029, 1874),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2029, 1875),(struct sNode*)come_increment_ref_count(right_89, "42op2.nc", 2029, 1876),(_Bool)1,info))), "42op2.nc", 2029, 1878);
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sXOrNode_finalize;
            _inf_value37->clone=(void*)sXOrNode_clone;
            _inf_value37->compile=(void*)sXOrNode_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sline_real=(void*)sNodeBase_sline_real;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sNodeBase_terminated;
            _inf_value37->kind=(void*)sXOrNode_kind;
            _inf_value37->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj225=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value37, "42op2.nc", 2029, 1880);
            (__dec_obj225 ? __dec_obj225 = come_decrement_ref_count(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2029, 1879) :0);
            come_call_finalizer(sXOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2029, 1881);
            ((right_89) ? right_89 = come_decrement_ref_count(right_89, ((struct sNode*)right_89)->finalize, ((struct sNode*)right_89)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2034, 1882):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 2038, 1883);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2038, 1884):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2038, 1885):(void*)0);
    return __result_obj__0;
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sXOrNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sXOrNode*  result  ;
    char*  __dec_obj221  ;
    struct sNode* __dec_obj222;
    struct sNode* __dec_obj223;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sXOrNode* )come_increment_ref_count((struct sXOrNode *)come_calloc(1, sizeof(struct sXOrNode )*(1), "sXOrNode_clone", 5, 1858, "struct sXOrNode* "), "sXOrNode_clone", 5, 1859);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj221=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sXOrNode_clone", 7, 1860, "char* "), "sXOrNode_clone", 7, 1862);
        __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0,0, (void*)0, "sXOrNode_clone", 7, 1861);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj222=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sXOrNode_clone", 10, 1864);
        (__dec_obj222 ? __dec_obj222 = come_decrement_ref_count(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0, (void*)0, "sXOrNode_clone", 10, 1863) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj223=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sXOrNode_clone", 11, 1866);
        (__dec_obj223 ? __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0, (void*)0, "sXOrNode_clone", 11, 1865) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sXOrNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sXOrNode_clone}", 12, 1867);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* or_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "or_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value38;
    struct sOrNode* _inf_obj_value38;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj229;
    int sline_real_90;
    struct sNode* right_91;
    struct sNode* _inf_value39;
    struct sOrNode* _inf_obj_value39;
    struct sNode* __dec_obj230;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_90, 0, sizeof(sline_real_90));
    memset(&right_91, 0, sizeof(right_91));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(xor_exp(info), "42op2.nc", 2045, 1886);
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(*info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124) {
            info->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(xor_exp(info), "42op2.nc", 2056, 1887);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2059, 1892, "struct sNode");
            _inf_obj_value38=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value1=sOrNode_initialize((struct sOrNode* )come_increment_ref_count((struct sOrNode *)come_calloc(1, sizeof(struct sOrNode )*(1), "42op2.nc", 2059, 1888, "struct sOrNode* "), "42op2.nc", 2059, 1889),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2059, 1890),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 2059, 1891),(_Bool)0,info))), "42op2.nc", 2059, 1893);
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sOrNode_finalize;
            _inf_value38->clone=(void*)sOrNode_clone;
            _inf_value38->compile=(void*)sOrNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sline_real=(void*)sNodeBase_sline_real;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sOrNode_kind;
            _inf_value38->left_value=(void*)sNodeBase_left_value;
            __dec_obj229=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value38, "42op2.nc", 2059, 1905);
            (__dec_obj229 ? __dec_obj229 = come_decrement_ref_count(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2059, 1904) :0);
            come_call_finalizer(sOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2059, 1906);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2075, 1907):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124) {
            info->p+=2;
            sline_real_90=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_91=(struct sNode*)come_increment_ref_count(xor_exp(info), "42op2.nc", 2067, 1908);
            info->sline_real=sline_real_90;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2070, 1913, "struct sNode");
            _inf_obj_value39=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value1=sOrNode_initialize((struct sOrNode* )come_increment_ref_count((struct sOrNode *)come_calloc(1, sizeof(struct sOrNode )*(1), "42op2.nc", 2070, 1909, "struct sOrNode* "), "42op2.nc", 2070, 1910),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2070, 1911),(struct sNode*)come_increment_ref_count(right_91, "42op2.nc", 2070, 1912),(_Bool)1,info))), "42op2.nc", 2070, 1914);
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sOrNode_finalize;
            _inf_value39->clone=(void*)sOrNode_clone;
            _inf_value39->compile=(void*)sOrNode_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sline_real=(void*)sNodeBase_sline_real;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sNodeBase_terminated;
            _inf_value39->kind=(void*)sOrNode_kind;
            _inf_value39->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj230=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value39, "42op2.nc", 2070, 1916);
            (__dec_obj230 ? __dec_obj230 = come_decrement_ref_count(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2070, 1915) :0);
            come_call_finalizer(sOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2070, 1917);
            ((right_91) ? right_91 = come_decrement_ref_count(right_91, ((struct sNode*)right_91)->finalize, ((struct sNode*)right_91)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2075, 1918):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 2079, 1919);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2079, 1920):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2079, 1921):(void*)0);
    return __result_obj__0;
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sOrNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOrNode*  result  ;
    char*  __dec_obj226  ;
    struct sNode* __dec_obj227;
    struct sNode* __dec_obj228;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sOrNode* )come_increment_ref_count((struct sOrNode *)come_calloc(1, sizeof(struct sOrNode )*(1), "sOrNode_clone", 5, 1894, "struct sOrNode* "), "sOrNode_clone", 5, 1895);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj226=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sOrNode_clone", 7, 1896, "char* "), "sOrNode_clone", 7, 1898);
        __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0,0, (void*)0, "sOrNode_clone", 7, 1897);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj227=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sOrNode_clone", 10, 1900);
        (__dec_obj227 ? __dec_obj227 = come_decrement_ref_count(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0, (void*)0, "sOrNode_clone", 10, 1899) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj228=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sOrNode_clone", 11, 1902);
        (__dec_obj228 ? __dec_obj228 = come_decrement_ref_count(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0, (void*)0, "sOrNode_clone", 11, 1901) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sOrNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sOrNode_clone}", 12, 1903);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* andand_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "andand_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value40;
    struct sAndAndNode* _inf_obj_value40;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj234;
    int sline_real_92;
    struct sNode* right_93;
    struct sNode* _inf_value41;
    struct sAndAndNode* _inf_obj_value41;
    struct sNode* __dec_obj235;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_92, 0, sizeof(sline_real_92));
    memset(&right_93, 0, sizeof(right_93));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(or_exp(info), "42op2.nc", 2086, 1922);
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(*info->p==38&&*(info->p+1)==38) {
            info->p+=2;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(or_exp(info), "42op2.nc", 2097, 1923);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2100, 1928, "struct sNode");
            _inf_obj_value40=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value1=sAndAndNode_initialize((struct sAndAndNode* )come_increment_ref_count((struct sAndAndNode *)come_calloc(1, sizeof(struct sAndAndNode )*(1), "42op2.nc", 2100, 1924, "struct sAndAndNode* "), "42op2.nc", 2100, 1925),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2100, 1926),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 2100, 1927),(_Bool)0,info))), "42op2.nc", 2100, 1929);
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sAndAndNode_finalize;
            _inf_value40->clone=(void*)sAndAndNode_clone;
            _inf_value40->compile=(void*)sAndAndNode_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sline_real=(void*)sNodeBase_sline_real;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sAndAndNode_kind;
            _inf_value40->left_value=(void*)sNodeBase_left_value;
            __dec_obj234=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value40, "42op2.nc", 2100, 1941);
            (__dec_obj234 ? __dec_obj234 = come_decrement_ref_count(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2100, 1940) :0);
            come_call_finalizer(sAndAndNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2100, 1942);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2116, 1943):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==38&&*(info->p+2)==38) {
            info->p+=3;
            sline_real_92=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_93=(struct sNode*)come_increment_ref_count(or_exp(info), "42op2.nc", 2108, 1944);
            info->sline_real=sline_real_92;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2111, 1949, "struct sNode");
            _inf_obj_value41=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value1=sAndAndNode_initialize((struct sAndAndNode* )come_increment_ref_count((struct sAndAndNode *)come_calloc(1, sizeof(struct sAndAndNode )*(1), "42op2.nc", 2111, 1945, "struct sAndAndNode* "), "42op2.nc", 2111, 1946),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2111, 1947),(struct sNode*)come_increment_ref_count(right_93, "42op2.nc", 2111, 1948),(_Bool)1,info))), "42op2.nc", 2111, 1950);
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sAndAndNode_finalize;
            _inf_value41->clone=(void*)sAndAndNode_clone;
            _inf_value41->compile=(void*)sAndAndNode_compile;
            _inf_value41->sline=(void*)sNodeBase_sline;
            _inf_value41->sline_real=(void*)sNodeBase_sline_real;
            _inf_value41->sname=(void*)sNodeBase_sname;
            _inf_value41->terminated=(void*)sNodeBase_terminated;
            _inf_value41->kind=(void*)sAndAndNode_kind;
            _inf_value41->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj235=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value41, "42op2.nc", 2111, 1952);
            (__dec_obj235 ? __dec_obj235 = come_decrement_ref_count(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2111, 1951) :0);
            come_call_finalizer(sAndAndNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2111, 1953);
            ((right_93) ? right_93 = come_decrement_ref_count(right_93, ((struct sNode*)right_93)->finalize, ((struct sNode*)right_93)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2116, 1954):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 2120, 1955);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2120, 1956):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2120, 1957):(void*)0);
    return __result_obj__0;
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sAndAndNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAndAndNode*  result  ;
    char*  __dec_obj231  ;
    struct sNode* __dec_obj232;
    struct sNode* __dec_obj233;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAndAndNode* )come_increment_ref_count((struct sAndAndNode *)come_calloc(1, sizeof(struct sAndAndNode )*(1), "sAndAndNode_clone", 5, 1930, "struct sAndAndNode* "), "sAndAndNode_clone", 5, 1931);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj231=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAndAndNode_clone", 7, 1932, "char* "), "sAndAndNode_clone", 7, 1934);
        __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0,0, (void*)0, "sAndAndNode_clone", 7, 1933);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj232=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sAndAndNode_clone", 10, 1936);
        (__dec_obj232 ? __dec_obj232 = come_decrement_ref_count(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0, (void*)0, "sAndAndNode_clone", 10, 1935) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj233=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sAndAndNode_clone", 11, 1938);
        (__dec_obj233 ? __dec_obj233 = come_decrement_ref_count(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0, (void*)0, "sAndAndNode_clone", 11, 1937) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sAndAndNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAndAndNode_clone}", 12, 1939);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* oror_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "oror_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value42;
    struct sOrOrNode* _inf_obj_value42;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj239;
    int sline_real_94;
    struct sNode* right_95;
    struct sNode* _inf_value43;
    struct sOrOrNode* _inf_obj_value43;
    struct sNode* __dec_obj240;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&right, 0, sizeof(right));
    memset(&sline_real_94, 0, sizeof(sline_real_94));
    memset(&right_95, 0, sizeof(right_95));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(andand_exp(info), "42op2.nc", 2127, 1958);
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(*info->p==124&&*(info->p+1)==124) {
            info->p+=2;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(andand_exp(info), "42op2.nc", 2138, 1959);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2141, 1964, "struct sNode");
            _inf_obj_value42=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value1=sOrOrNode_initialize((struct sOrOrNode* )come_increment_ref_count((struct sOrOrNode *)come_calloc(1, sizeof(struct sOrOrNode )*(1), "42op2.nc", 2141, 1960, "struct sOrOrNode* "), "42op2.nc", 2141, 1961),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2141, 1962),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 2141, 1963),(_Bool)0,info))), "42op2.nc", 2141, 1965);
            _inf_value42->_protocol_obj=_inf_obj_value42;
            _inf_value42->finalize=(void*)sOrOrNode_finalize;
            _inf_value42->clone=(void*)sOrOrNode_clone;
            _inf_value42->compile=(void*)sOrOrNode_compile;
            _inf_value42->sline=(void*)sNodeBase_sline;
            _inf_value42->sline_real=(void*)sNodeBase_sline_real;
            _inf_value42->sname=(void*)sNodeBase_sname;
            _inf_value42->terminated=(void*)sNodeBase_terminated;
            _inf_value42->kind=(void*)sOrOrNode_kind;
            _inf_value42->left_value=(void*)sNodeBase_left_value;
            __dec_obj239=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value42, "42op2.nc", 2141, 1977);
            (__dec_obj239 ? __dec_obj239 = come_decrement_ref_count(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2141, 1976) :0);
            come_call_finalizer(sOrOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2141, 1978);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2157, 1979):(void*)0);
        }
        else if(*info->p==92&&*(info->p+1)==124&&*(info->p+2)==124) {
            info->p+=3;
            sline_real_94=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_95=(struct sNode*)come_increment_ref_count(andand_exp(info), "42op2.nc", 2149, 1980);
            info->sline_real=sline_real_94;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2152, 1985, "struct sNode");
            _inf_obj_value43=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value1=sOrOrNode_initialize((struct sOrOrNode* )come_increment_ref_count((struct sOrOrNode *)come_calloc(1, sizeof(struct sOrOrNode )*(1), "42op2.nc", 2152, 1981, "struct sOrOrNode* "), "42op2.nc", 2152, 1982),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2152, 1983),(struct sNode*)come_increment_ref_count(right_95, "42op2.nc", 2152, 1984),(_Bool)1,info))), "42op2.nc", 2152, 1986);
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sOrOrNode_finalize;
            _inf_value43->clone=(void*)sOrOrNode_clone;
            _inf_value43->compile=(void*)sOrOrNode_compile;
            _inf_value43->sline=(void*)sNodeBase_sline;
            _inf_value43->sline_real=(void*)sNodeBase_sline_real;
            _inf_value43->sname=(void*)sNodeBase_sname;
            _inf_value43->terminated=(void*)sNodeBase_terminated;
            _inf_value43->kind=(void*)sOrOrNode_kind;
            _inf_value43->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj240=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value43, "42op2.nc", 2152, 1988);
            (__dec_obj240 ? __dec_obj240 = come_decrement_ref_count(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2152, 1987) :0);
            come_call_finalizer(sOrOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2152, 1989);
            ((right_95) ? right_95 = come_decrement_ref_count(right_95, ((struct sNode*)right_95)->finalize, ((struct sNode*)right_95)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2157, 1990):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 2161, 1991);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2161, 1992):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2161, 1993):(void*)0);
    return __result_obj__0;
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sOrOrNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOrOrNode*  result  ;
    char*  __dec_obj236  ;
    struct sNode* __dec_obj237;
    struct sNode* __dec_obj238;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sOrOrNode* )come_increment_ref_count((struct sOrOrNode *)come_calloc(1, sizeof(struct sOrOrNode )*(1), "sOrOrNode_clone", 5, 1966, "struct sOrOrNode* "), "sOrOrNode_clone", 5, 1967);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj236=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sOrOrNode_clone", 7, 1968, "char* "), "sOrOrNode_clone", 7, 1970);
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0,0, (void*)0, "sOrOrNode_clone", 7, 1969);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj237=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sOrOrNode_clone", 10, 1972);
        (__dec_obj237 ? __dec_obj237 = come_decrement_ref_count(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0, (void*)0, "sOrOrNode_clone", 10, 1971) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj238=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sOrOrNode_clone", 11, 1974);
        (__dec_obj238 ? __dec_obj238 = come_decrement_ref_count(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0,0, (void*)0, "sOrOrNode_clone", 11, 1973) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sOrOrNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sOrOrNode_clone}", 12, 1975);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_comma_exp(struct sNode* node, struct sNode* node2, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_comma_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value44;
    struct sCommaNode* _inf_obj_value44;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2166, 1998, "struct sNode");
    _inf_obj_value44=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value1=sCommaNode_initialize((struct sCommaNode* )come_increment_ref_count((struct sCommaNode *)come_calloc(1, sizeof(struct sCommaNode )*(1), "42op2.nc", 2166, 1994, "struct sCommaNode* "), "42op2.nc", 2166, 1995),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2166, 1996),(struct sNode*)come_increment_ref_count(node2, "42op2.nc", 2166, 1997),info))), "42op2.nc", 2166, 1999);
    _inf_value44->_protocol_obj=_inf_obj_value44;
    _inf_value44->finalize=(void*)sCommaNode_finalize;
    _inf_value44->clone=(void*)sCommaNode_clone;
    _inf_value44->compile=(void*)sCommaNode_compile;
    _inf_value44->sline=(void*)sNodeBase_sline;
    _inf_value44->sline_real=(void*)sNodeBase_sline_real;
    _inf_value44->sname=(void*)sNodeBase_sname;
    _inf_value44->terminated=(void*)sNodeBase_terminated;
    _inf_value44->kind=(void*)sCommaNode_kind;
    _inf_value44->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value44)), "42op2.nc", 2166, 2010);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2166, 2011):(void*)0);
    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2166, 2012):(void*)0);
    come_call_finalizer(sCommaNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2166, 2013);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "42op2.nc", 2166, 2014):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2166, 2015):(void*)0);
    return __result_obj__0;
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sCommaNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCommaNode*  result  ;
    char*  __dec_obj241  ;
    struct sNode* __dec_obj242;
    struct sNode* __dec_obj243;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCommaNode* )come_increment_ref_count((struct sCommaNode *)come_calloc(1, sizeof(struct sCommaNode )*(1), "sCommaNode_clone", 5, 2000, "struct sCommaNode* "), "sCommaNode_clone", 5, 2001);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj241=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCommaNode_clone", 7, 2002, "char* "), "sCommaNode_clone", 7, 2004);
        __dec_obj241 = come_decrement_ref_count(__dec_obj241, (void*)0, (void*)0, 0,0, (void*)0, "sCommaNode_clone", 7, 2003);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj242=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sCommaNode_clone", 9, 2006);
        (__dec_obj242 ? __dec_obj242 = come_decrement_ref_count(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0, (void*)0, "sCommaNode_clone", 9, 2005) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj243=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sCommaNode_clone", 10, 2008);
        (__dec_obj243 ? __dec_obj243 = come_decrement_ref_count(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0, (void*)0, "sCommaNode_clone", 10, 2007) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sCommaNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCommaNode_clone}", 11, 2009);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* comma_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "comma_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* node2;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value45;
    struct sCommaNode* _inf_obj_value45;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj244;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&node2, 0, sizeof(node2));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(oror_exp(info), "42op2.nc", 2173, 2016);
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(!info->no_comma&&*info->p==44) {
            info->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            node2=(struct sNode*)come_increment_ref_count(comma_exp(info), "42op2.nc", 2184, 2017);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2187, 2022, "struct sNode");
            _inf_obj_value45=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value1=sCommaNode_initialize((struct sCommaNode* )come_increment_ref_count((struct sCommaNode *)come_calloc(1, sizeof(struct sCommaNode )*(1), "42op2.nc", 2187, 2018, "struct sCommaNode* "), "42op2.nc", 2187, 2019),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2187, 2020),(struct sNode*)come_increment_ref_count(node2, "42op2.nc", 2187, 2021),info))), "42op2.nc", 2187, 2023);
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sCommaNode_finalize;
            _inf_value45->clone=(void*)sCommaNode_clone;
            _inf_value45->compile=(void*)sCommaNode_compile;
            _inf_value45->sline=(void*)sNodeBase_sline;
            _inf_value45->sline_real=(void*)sNodeBase_sline_real;
            _inf_value45->sname=(void*)sNodeBase_sname;
            _inf_value45->terminated=(void*)sNodeBase_terminated;
            _inf_value45->kind=(void*)sCommaNode_kind;
            _inf_value45->left_value=(void*)sNodeBase_left_value;
            __dec_obj244=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value45, "42op2.nc", 2187, 2025);
            (__dec_obj244 ? __dec_obj244 = come_decrement_ref_count(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2187, 2024) :0);
            come_call_finalizer(sCommaNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2187, 2026);
            ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2192, 2027):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 2196, 2028);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2196, 2029):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2196, 2030):(void*)0);
    return __result_obj__0;
}

struct sNode* conditional_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "conditional_exp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    struct sNode* __dec_obj245;
    int sline_real;
    struct sNode* value1;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value46;
    struct sNullNode* _inf_obj_value46;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj246;
    _Bool no_label;
    struct sNode* __dec_obj247;
    struct sNode* value2;
    struct sNode* _inf_value47;
    struct sConditionalNode* _inf_obj_value47;
    struct sNode* __dec_obj248;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&value1, 0, sizeof(value1));
    memset(&no_label, 0, sizeof(no_label));
    memset(&value2, 0, sizeof(value2));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(comma_exp(info), "42op2.nc", 2203, 2031);
    skip_spaces_and_lf(info);
    while(*info->p) {
        if(*info->p==63&&*(info->p+1)==63) {
            info->p+=2;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __dec_obj245=node,
            node=(struct sNode*)come_increment_ref_count(create_try_operator_node((struct sNode*)come_increment_ref_count(node, "42op2.nc", 2212, 2032),info), "42op2.nc", 2212, 2034);
            (__dec_obj245 ? __dec_obj245 = come_decrement_ref_count(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2212, 2033) :0);
        }
        else if(*info->p==63) {
            info->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            if(*info->p==58) {
                __right_value0 = (void*)0;
                _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2222, 2037, "struct sNode");
                _inf_obj_value46=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value1=sNullNode_initialize((struct sNullNode* )come_increment_ref_count((struct sNullNode *)come_calloc(1, sizeof(struct sNullNode )*(1), "42op2.nc", 2222, 2035, "struct sNullNode* "), "42op2.nc", 2222, 2036),info))), "42op2.nc", 2222, 2038);
                _inf_value46->_protocol_obj=_inf_obj_value46;
                _inf_value46->finalize=(void*)sNullNode_finalize;
                _inf_value46->clone=(void*)sNullNode_clone;
                _inf_value46->compile=(void*)sNullNode_compile;
                _inf_value46->sline=(void*)sNodeBase_sline;
                _inf_value46->sline_real=(void*)sNodeBase_sline_real;
                _inf_value46->sname=(void*)sNodeBase_sname;
                _inf_value46->terminated=(void*)sNodeBase_terminated;
                _inf_value46->kind=(void*)sNullNode_kind;
                _inf_value46->left_value=(void*)sNodeBase_left_value;
                __dec_obj246=value1,
                value1=(struct sNode*)come_increment_ref_count(_inf_value46, "42op2.nc", 2222, 2040);
                (__dec_obj246 ? __dec_obj246 = come_decrement_ref_count(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2222, 2039) :0);
                come_call_finalizer(sNullNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2222, 2041);
            }
            else {
                no_label=info->no_label;
                info->no_label=(_Bool)1;
                __right_value0 = (void*)0;
                __dec_obj247=value1,
                value1=(struct sNode*)come_increment_ref_count(conditional_exp(info), "42op2.nc", 2227, 2043);
                (__dec_obj247 ? __dec_obj247 = come_decrement_ref_count(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2227, 2042) :0);
                info->no_label=no_label;
            }
            expected_next_character(58,info);
            __right_value0 = (void*)0;
            value2=(struct sNode*)come_increment_ref_count(conditional_exp(info), "42op2.nc", 2234, 2044);
            skip_spaces_and_lf(info);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2239, 2050, "struct sNode");
            _inf_obj_value47=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value1=sConditionalNode_initialize((struct sConditionalNode* )come_increment_ref_count((struct sConditionalNode *)come_calloc(1, sizeof(struct sConditionalNode )*(1), "42op2.nc", 2239, 2045, "struct sConditionalNode* "), "42op2.nc", 2239, 2046),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2239, 2047),(struct sNode*)come_increment_ref_count(value1, "42op2.nc", 2239, 2048),(struct sNode*)come_increment_ref_count(value2, "42op2.nc", 2239, 2049),info))), "42op2.nc", 2239, 2051);
            _inf_value47->_protocol_obj=_inf_obj_value47;
            _inf_value47->finalize=(void*)sConditionalNode_finalize;
            _inf_value47->clone=(void*)sConditionalNode_clone;
            _inf_value47->compile=(void*)sConditionalNode_compile;
            _inf_value47->sline=(void*)sNodeBase_sline;
            _inf_value47->sline_real=(void*)sNodeBase_sline_real;
            _inf_value47->sname=(void*)sNodeBase_sname;
            _inf_value47->terminated=(void*)sNodeBase_terminated;
            _inf_value47->kind=(void*)sConditionalNode_kind;
            _inf_value47->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj248=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value47, "42op2.nc", 2239, 2053);
            (__dec_obj248 ? __dec_obj248 = come_decrement_ref_count(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2239, 2052) :0);
            come_call_finalizer(sConditionalNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2239, 2054);
            ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2244, 2055):(void*)0);
            ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2244, 2056):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 2248, 2057);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2248, 2058):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2248, 2059):(void*)0);
    return __result_obj__0;
}

struct sTypeNode* sTypeNode_initialize(struct sTypeNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj249  ;
    struct sTypeNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTypeNode*)come_increment_ref_count(self, "42op2.nc", 2255, 2060),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2255, 2061);
    __right_value0 = (void*)0;
    __dec_obj249=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "42op2.nc", 2257, 2063);
    come_call_finalizer(sType_finalize, __dec_obj249,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 2257, 2062);
        __result_obj__0 = (struct sTypeNode*)come_increment_ref_count(self, "42op2.nc", 2260, 2064);
    come_call_finalizer(sTypeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 2260, 2067);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTypeNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "42op2.nc}", 2260, 2068);
    return __result_obj__0;
}

char*  sTypeNode_kind(struct sTypeNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_kind"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTypeNode","42op2.nc",2262))), "42op2.nc", 2262, 2069);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "42op2.nc", 2262, 2070));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "42op2.nc", 2262, 2071));
    return __result_obj__0;
}

_Bool sTypeNode_compile(struct sTypeNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_compile"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj250  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj251  ;
    _Bool __result_obj__0;
    memset(&come_value, 0, sizeof(come_value));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "42op2.nc", 2267, 2072, "struct CVALUE* "), "42op2.nc", 2267, 2073)), "42op2.nc", 2267, 2074);
    __right_value0 = (void*)0;
    __dec_obj250=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(make_type_name_string(self->type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "42op2.nc", 2269, 2076);
    __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0,0, (void*)0, "42op2.nc", 2269, 2075);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj251=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "42op2.nc", 2270, 2077, "struct sType* "), "42op2.nc", 2270, 2078),(char*)come_increment_ref_count(xsprintf("__typename"), "42op2.nc", 2270, 2079),(_Bool)0,info,(_Bool)0,0), "42op2.nc", 2270, 2081);
    come_call_finalizer(sType_finalize, __dec_obj251,(void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc", 2270, 2080);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "42op2.nc", 2273, 2082));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 2275, 2083);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sTypeNode_finalize(struct sTypeNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sTypeNode_finalize", 2, 2065));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sTypeNode_finalize}", 3, 2066);
    }
        neo_current_frame = fr.prev;
}

struct sNode* expression_v13(struct sInfo*  info  , _Bool type_name_exp)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "expression_v13"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sNode* node;
    char* p;
    int sline;
    void* __right_value0 = (void*)0;
    char*  word  ;
    _Bool fun_call;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var2
;    struct sType*  type1  =0;
    char*  name  =0;
    _Bool err=0;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value48;
    struct sTypeNode* _inf_obj_value48;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj254;
    struct sNode* __dec_obj255;
    struct sNode* __dec_obj256;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    memset(&p, 0, sizeof(p));
    memset(&sline, 0, sizeof(sline));
    memset(&word, 0, sizeof(word));
    memset(&fun_call, 0, sizeof(fun_call));
    memset(&type2_, 0, sizeof(type2_));
    memset(&type2, 0, sizeof(type2));
    node=((void*)0);
    skip_spaces_and_lf(info);
    if(*info->p==92) {
        info->p++;
    }
    if(type_name_exp&&(*info->p==95||xisalpha(*info->p))) {
        p=info->p;
        sline=info->sline;
        word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "42op2.nc", 2293, 2084);
        fun_call=*info->p==40;
        info->p=p;
        info->sline=sline;
        if(is_type_name(word,info)&&!fun_call) {
            __right_value0 = (void*)0;
            multiple_assign_var2=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type1=(struct sType* )come_increment_ref_count(multiple_assign_var2->v1, "42op2.nc", 2301, 2085);
            name=(char* )come_increment_ref_count(multiple_assign_var2->v2, "42op2.nc", 2301, 2086);
            err=multiple_assign_var2->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2301, 2089);
            __right_value0 = (void*)0;
            type2_=(struct sType* )come_increment_ref_count(solve_generics(type1,info->generics_type,info), "42op2.nc", 2302, 2090);
            __right_value0 = (void*)0;
            type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "42op2.nc", 2303, 2091);
            __right_value0 = (void*)0;
            _inf_value48=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2305, 2094, "struct sNode");
            _inf_obj_value48=(struct sTypeNode*)come_increment_ref_count(((struct sTypeNode*)(__right_value1=sTypeNode_initialize((struct sTypeNode* )come_increment_ref_count((struct sTypeNode *)come_calloc(1, sizeof(struct sTypeNode )*(1), "42op2.nc", 2305, 2092, "struct sTypeNode* "), "42op2.nc", 2305, 2093),type2,info))), "42op2.nc", 2305, 2095);
            _inf_value48->_protocol_obj=_inf_obj_value48;
            _inf_value48->finalize=(void*)sTypeNode_finalize;
            _inf_value48->clone=(void*)sTypeNode_clone;
            _inf_value48->compile=(void*)sTypeNode_compile;
            _inf_value48->sline=(void*)sNodeBase_sline;
            _inf_value48->sline_real=(void*)sNodeBase_sline_real;
            _inf_value48->sname=(void*)sNodeBase_sname;
            _inf_value48->terminated=(void*)sNodeBase_terminated;
            _inf_value48->kind=(void*)sTypeNode_kind;
            _inf_value48->left_value=(void*)sNodeBase_left_value;
            __dec_obj254=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value48, "42op2.nc", 2305, 2105);
            (__dec_obj254 ? __dec_obj254 = come_decrement_ref_count(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2305, 2104) :0);
            come_call_finalizer(sTypeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2305, 2106);
            come_call_finalizer(sType_finalize, type1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 2310, 2107);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "42op2.nc", 2310, 2108));
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 2310, 2109);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "42op2.nc}", 2310, 2110);
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj255=node,
            node=(struct sNode*)come_increment_ref_count(conditional_exp(info), "42op2.nc", 2308, 2112);
            (__dec_obj255 ? __dec_obj255 = come_decrement_ref_count(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2308, 2111) :0);
        }
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "42op2.nc", 2315, 2113));
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj256=node,
        node=(struct sNode*)come_increment_ref_count(conditional_exp(info), "42op2.nc", 2312, 2115);
        (__dec_obj256 ? __dec_obj256 = come_decrement_ref_count(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0, (void*)0, "42op2.nc", 2312, 2114) :0);
    }
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "42op2.nc", 2315, 2116);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2315, 2117):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2315, 2118):(void*)0);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 2087);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 2088));
    }
                neo_current_frame = fr.prev;
}

static struct sTypeNode* sTypeNode_clone(struct sTypeNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sTypeNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sTypeNode*  result  ;
    char*  __dec_obj252  ;
    struct sType*  __dec_obj253  ;
    memset(&result, 0, sizeof(result));
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sTypeNode* )come_increment_ref_count((struct sTypeNode *)come_calloc(1, sizeof(struct sTypeNode )*(1), "sTypeNode_clone", 5, 2096, "struct sTypeNode* "), "sTypeNode_clone", 5, 2097);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj252=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sTypeNode_clone", 7, 2098, "char* "), "sTypeNode_clone", 7, 2100);
        __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0,0, (void*)0, "sTypeNode_clone", 7, 2099);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj253=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sTypeNode_clone", 9, 2102);
        come_call_finalizer(sType_finalize, __dec_obj253,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sTypeNode_clone", 9, 2101);
    }
        __result_obj__0 = result;
    come_call_finalizer(sTypeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sTypeNode_clone}", 10, 2103);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_node_v13"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value49;
    struct sNullNode* _inf_obj_value49;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    if(!gComeC&&charp_operator_equals(buf,"null")) {
                _inf_value49=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2321, 2121, "struct sNode");
        _inf_obj_value49=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value1=sNullNode_initialize((struct sNullNode* )come_increment_ref_count((struct sNullNode *)come_calloc(1, sizeof(struct sNullNode )*(1), "42op2.nc", 2321, 2119, "struct sNullNode* "), "42op2.nc", 2321, 2120),info))), "42op2.nc", 2321, 2122);
        _inf_value49->_protocol_obj=_inf_obj_value49;
        _inf_value49->finalize=(void*)sNullNode_finalize;
        _inf_value49->clone=(void*)sNullNode_clone;
        _inf_value49->compile=(void*)sNullNode_compile;
        _inf_value49->sline=(void*)sNodeBase_sline;
        _inf_value49->sline_real=(void*)sNodeBase_sline_real;
        _inf_value49->sname=(void*)sNodeBase_sname;
        _inf_value49->terminated=(void*)sNodeBase_terminated;
        _inf_value49->kind=(void*)sNullNode_kind;
        _inf_value49->left_value=(void*)sNodeBase_left_value;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value49)), "42op2.nc", 2321, 2123);
        come_call_finalizer(sNullNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2321, 2124);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "42op2.nc", 2321, 2125):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2321, 2126):(void*)0);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=string_node_v12(buf,head,head_sline,info))), "42op2.nc", 2324, 2127);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "42op2.nc", 2324, 2128):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2324, 2129):(void*)0);
    return __result_obj__0;
}

struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_less"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value50;
    struct sLtNode* _inf_obj_value50;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value50=(struct sNode*)come_calloc(1, sizeof(struct sNode), "42op2.nc", 2329, 2134, "struct sNode");
    _inf_obj_value50=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value1=sLtNode_initialize((struct sLtNode* )come_increment_ref_count((struct sLtNode *)come_calloc(1, sizeof(struct sLtNode )*(1), "42op2.nc", 2329, 2130, "struct sLtNode* "), "42op2.nc", 2329, 2131),(struct sNode*)come_increment_ref_count(node, "42op2.nc", 2329, 2132),(struct sNode*)come_increment_ref_count(right, "42op2.nc", 2329, 2133),(_Bool)0,info))), "42op2.nc", 2329, 2135);
    _inf_value50->_protocol_obj=_inf_obj_value50;
    _inf_value50->finalize=(void*)sLtNode_finalize;
    _inf_value50->clone=(void*)sLtNode_clone;
    _inf_value50->compile=(void*)sLtNode_compile;
    _inf_value50->sline=(void*)sNodeBase_sline;
    _inf_value50->sline_real=(void*)sNodeBase_sline_real;
    _inf_value50->sname=(void*)sNodeBase_sname;
    _inf_value50->terminated=(void*)sNodeBase_terminated;
    _inf_value50->kind=(void*)sLtNode_kind;
    _inf_value50->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value50)), "42op2.nc", 2329, 2136);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2329, 2137):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "42op2.nc", 2329, 2138):(void*)0);
    come_call_finalizer(sLtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "42op2.nc}", 2329, 2139);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "42op2.nc", 2329, 2140):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "42op2.nc", 2329, 2141):(void*)0);
    return __result_obj__0;
}

