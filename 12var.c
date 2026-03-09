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

typedef struct MacroSnapshot MacroSnapshot;

/// previous struct definition ///
struct _IO_FILE;

struct _IO_marker;

struct _IO_codecvt;

struct _IO_wide_data;

struct obstack;

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

struct anonymous_typeX7
{
    unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
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

struct anonymous_typeX8
{
    long  int  fds_bits[1024/(8*(int)sizeof(long  int ))]  ;
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

struct span$1char$p
{
    char* memory;
    char* p;
    unsigned long  len  ;
    _Bool local;
    _Bool heap;
    _Bool global;
    void* stacktop;
};

struct map$2char$phsFun$ph
{
    char**  keys  ;
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
    struct span$1char$p* p;
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
void stackframe();
void stackframe2(void* mem);
_Bool die(const char* msg, char* sname, int sline);
void come_heap_final();
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
struct list$1char$* chara_to_list(char* self, unsigned long  len  );
struct list$1char$p* charpa_to_list(char** self, unsigned long  len  );
struct list$1short$* shorta_to_list(short* self, unsigned long  len  );
struct list$1int$* inta_to_list(int* self, unsigned long  len  );
struct list$1long$* longa_to_list(long* self, unsigned long  len  );
struct list$1float$* floata_to_list(float* self, unsigned long  len  );
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
void show_type(struct sType*  type  , struct sInfo*  info  );
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
struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo*  info  );
void skip_pointer_attribute(struct sInfo*  info  );
void skip_paren(struct sInfo*  info  );
struct sNode* parse_normal_block(_Bool clang, _Bool unsafe_block, struct sInfo*  info  );
void cast_type(struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  );
_Bool check_assign_type(const char* msg, struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  );
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo*  info  , _Bool parse_function_attribute);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo*  info  );
struct sNode* get_number(_Bool minus, struct sInfo*  info  );
struct sNode* get_oct_number(struct sInfo*  info  );
struct sNode* get_hex_number(_Bool minus, struct sInfo*  info  );
struct sNode* create_int_node(char*  value  , struct sInfo*  info  );
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* parse_params(struct sInfo*  info  , _Bool in_constructor_);
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
_Bool is_contained_generics_class(struct sType*  type  , struct sInfo*  info  );
_Bool is_type_name(char* buf, struct sInfo*  info  );
_Bool parsecmp(const char* p2, struct sInfo*  info  );
char*  parse_word(_Bool digits, struct sInfo*  info  );
char*  backtrace_parse_word(struct sInfo*  info  );
void skip_spaces_and_lf(struct sInfo*  info  );
void skip_spaces_and_lf2(struct sInfo*  info  );
struct tuple2$2char$ph_Bool$* create_generics_fun(char*  fun_name  , struct sGenericsFun*  generics_fun  , struct sType*  generics_type  , struct sInfo*  info  );
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo*  info  , _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name_on_multiple_declare(struct sType*  base_type_name  , _Bool first, struct sInfo*  info  );
struct sBlock*  parse_block(struct sInfo*  info  , _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock*  block  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo*  info  , _Bool no_var_table, _Bool loop_block, _Bool if_result_value, _Bool iter_, _Bool loop_result_type);
void arrange_stack(struct sInfo*  info  , int top);
struct sNode* parse_function(struct sInfo*  info  );
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
struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* backtrace_struct_union_enum(struct sInfo*  info  );
struct sNode* create_null_return_value(struct sInfo*  info  );
struct sNode* create_some(struct sNode* exp, struct sInfo*  info  );
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
char*  parse_struct_attribute(struct sInfo*  info  , _Bool allow_end);
char*  parse_declspec_attribute(struct sInfo*  info  );
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
struct sNode* create_true_object(struct sInfo*  info  );
struct sNode* create_false_object(struct sInfo*  info  );
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
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
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
static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar*  item  );
void add_variable_to_global_table(char* name, struct sType*  type  , struct sInfo*  info  );
void add_variable_to_global_table_with_int_value(char* name, struct sType*  type  , char* c_value, struct sInfo*  info  );
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo*  info  );
static char span$1char$p$p_operator_derefference(struct span$1char$p* self);
static char span$1char$p_operator_derefference(struct span$1char$p* self);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType*  v1  , char*  v2  , struct sNode* v3);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char*  v1  , struct sType*  v2  );
struct sNode* expression_node_v95(struct sInfo*  info  );
static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo*  info  );
static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self);
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
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sStoreNode*)come_increment_ref_count(self, "12var.nc", 7, 1),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 7, 3);
    __right_value0 = (void*)0;
    __dec_obj1=self->name,
    self->name=(char* )come_increment_ref_count(__builtin_string(name,"12var.nc",9), "12var.nc", 9, 5);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 9, 4);
    self->alloc=alloc;
    __right_value0 = (void*)0;
    __dec_obj36=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "12var.nc", 11, 212);
    come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 11, 211);
    __right_value0 = (void*)0;
    __dec_obj37=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(right_value), "12var.nc", 12, 214);
    (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0, (void*)0, "12var.nc", 12, 213) :0);
    __right_value0 = (void*)0;
    __dec_obj38=self->multiple_assign,
    self->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(multiple_assign), "12var.nc", 13, 216);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 13, 215);
    __right_value0 = (void*)0;
    __dec_obj45=self->multiple_declare,
    self->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(multiple_declare), "12var.nc", 14, 268);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 14, 267);
    __dec_obj46=self->attribute,
    self->attribute=(char* )come_increment_ref_count(attribute, "12var.nc", 15, 270);
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 15, 269);
    self->iter_=iter_;
        __result_obj__0 = (struct sStoreNode*)come_increment_ref_count(self, "12var.nc", 19, 271);
    come_call_finalizer(sStoreNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12var.nc}", 19, 279);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 19, 280));
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 19, 281));
    neo_current_frame = fr.prev;
    come_call_finalizer(sStoreNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12var.nc}", 19, 282);
    return __result_obj__0;
}

char*  sStoreNode_kind(struct sStoreNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sStoreNode","12var.nc",21))), "12var.nc", 21, 283);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 21, 284));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12var.nc", 21, 285));
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
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* _o2_saved_1;
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
    struct list$1char$ph* _o2_saved_2;
    char*  it_27  ;
    struct sVar*  var__29  ;
    struct sType*  right_type2  ;
    char*  multiple_var_name  ;
    char*  __dec_obj54  ;
    struct list$1char$ph* _o2_saved_3;
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
    if(self->multiple_declare) {
        var_=((struct sVar* )(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char* )(__right_value0=__builtin_string(self->name,"12var.nc",27))),((void*)0),(_Bool)0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 27, 305));
        if(var_) {
            if(var_->mType->mHeap) {
                if(!var_->no_output_come_code) {
                    __right_value0 = (void*)0;
                    free_object(((struct sType* )(__right_value0=sType_clone(var_->mType))),var_->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 31, 306);
                }
            }
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_remove(info->lv_table->mVars,(char* )come_increment_ref_count(__builtin_string(self->name,"12var.nc",35), "12var.nc", 35, 315),(_Bool)0);
        }
        if(self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
                        neo_current_frame = fr.prev;
            return (_Bool)1;
        }
        __right_value0 = (void*)0;
        type_=(struct sType* )come_increment_ref_count(solve_generics(self->type,info->generics_type,info), "12var.nc", 43, 316);
        __right_value0 = (void*)0;
        type=(struct sType* )come_increment_ref_count(solve_method_generics(type_,info), "12var.nc", 44, 317);
        type->mPointerNum=0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "12var.nc", 48, 318, "struct buffer* "), "12var.nc", 48, 319)), "12var.nc", 48, 320);
        __right_value0 = (void*)0;
        buffer_append_format(buf,"%s ",((char* )(__right_value0=make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 49, 321));
        n=0;
        for(_o2_saved_1=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(self->multiple_declare, "12var.nc", 52, 322),it=list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(_o2_saved_1)        ;!list$1tuple3$3sType$phchar$phsNode$ph$ph_end(_o2_saved_1);it=list$1tuple3$3sType$phchar$phsNode$ph$ph_next(_o2_saved_1)){
            multiple_assign_var1=it;
            type_18=(struct sType* )come_increment_ref_count(multiple_assign_var1->v1, "12var.nc", 53, 323);
            var_name=(char* )come_increment_ref_count(multiple_assign_var1->v2, "12var.nc", 53, 324);
            right_value=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3, "12var.nc", 53, 325);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            var_=((struct sVar* )(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char* )(__right_value0=__builtin_string(var_name,"12var.nc",54))),((void*)0),(_Bool)0)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 54, 326));
            if(var_) {
                if(var_->mType->mHeap) {
                    if(!var_->no_output_come_code) {
                        __right_value0 = (void*)0;
                        free_object(((struct sType* )(__right_value0=sType_clone(var_->mType))),var_->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 58, 327);
                    }
                }
                __right_value0 = (void*)0;
                map$2char$phsVar$ph_remove(info->lv_table->mVars,(char* )come_increment_ref_count(__builtin_string(var_name,"12var.nc",62), "12var.nc", 62, 328),(_Bool)0);
            }
            __right_value0 = (void*)0;
            type2_=(struct sType* )come_increment_ref_count(solve_generics(type_18,info->generics_type,info), "12var.nc", 64, 329);
            __right_value0 = (void*)0;
            type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "12var.nc", 65, 330);
            add_variable_to_table(var_name,type2,info,(_Bool)0,(_Bool)0,(_Bool)0);
            var_=get_variable_from_table(info->lv_table,var_name);
            if(var_==((void*)0)) {
                warning_msg(info,"var not found(%s)(ZY) at definition of variable",it);
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, type_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 72, 331);
                (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 72, 332));
                ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 72, 333):(void*)0);
                come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 72, 334);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 72, 335);
                come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 72, 336);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 72, 337);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 72, 338);
                come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 72, 339);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            left_type=(struct sType* )come_increment_ref_count(var_->mType, "12var.nc", 75, 340);
            if(right_value) {
                Value=node_compile(right_value,info);
                if(!Value) {
                                        __result_obj__0 = (_Bool)0;
                    come_call_finalizer(sType_finalize, type_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 79, 341);
                    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 79, 342));
                    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 79, 343):(void*)0);
                    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 79, 344);
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 79, 345);
                    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 79, 346);
                    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 79, 347);
                    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 79, 348);
                    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 79, 349);
                    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 79, 350);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                __right_value0 = (void*)0;
                come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "12var.nc", 81, 351);
                __right_value0 = (void*)0;
                var_name2=(char* )come_increment_ref_count(make_var_name(type2,var_name,info,(_Bool)0), "12var.nc", 83, 352);
                buffer_append_format(buf,"%s=%s",var_name2,come_value->c_value);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 97, 358);
                (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 97, 359));
            }
            else {
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X0=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type->mNoCallingDestructor&&((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("memset"))))))));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 88, 412));
                come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 88, 413);
_conditional_value_X0;})) {
                    add_come_last_code2(info,"memset(&%s, 0, sizeof(%s));\n",var_->mCValueName,var_->mCValueName);
                }
                __right_value0 = (void*)0;
                var_name2_19=(char* )come_increment_ref_count(make_var_name(type2,var_name,info,(_Bool)0), "12var.nc", 92, 414);
                buffer_append_format(buf,"%s",var_name2_19);
                (var_name2_19 = come_decrement_ref_count(var_name2_19, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 97, 415));
            }
            if(n!=list$1tuple3$3sType$phchar$phsNode$ph$ph_length(self->multiple_declare)-1) {
                buffer_append_format(buf,", ");
            }
            n++;
            come_call_finalizer(sType_finalize, type_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 103, 416);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 103, 417));
            ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 103, 418):(void*)0);
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 103, 419);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 103, 420);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 103, 421);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_20=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 103, 422, "struct CVALUE* "), "12var.nc", 103, 423)), "12var.nc", 103, 424);
        __right_value0 = (void*)0;
        __dec_obj47=come_value_20->c_value,
        come_value_20->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "12var.nc", 104, 426);
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 104, 425);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj48=come_value_20->type,
        come_value_20->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "12var.nc", 105, 427, "struct sType* "), "12var.nc", 105, 428),(char*)come_increment_ref_count(xsprintf("void"), "12var.nc", 105, 429),(_Bool)0,info,(_Bool)0,0), "12var.nc", 105, 431);
        come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 105, 430);
        come_value_20->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_20, "12var.nc", 108, 446));
        add_come_last_code(info,"%s",come_value_20->c_value);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 447);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 448);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 449);
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 450);
        come_call_finalizer(CVALUE_finalize, come_value_20, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 451);
    }
    else if(self->multiple_assign) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_23=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "12var.nc", 113, 452, "struct buffer* "), "12var.nc", 113, 453)), "12var.nc", 113, 454);
        Value_24=node_compile(self->right_value,info);
        if(!Value_24) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(buffer_finalize, buf_23, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 116, 455);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        right_value_25=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "12var.nc", 119, 456);
        if(right_value_25->type->mNoSolvedGenericsType) {
            __right_value0 = (void*)0;
            __dec_obj52=right_type,
            right_type=(struct sType* )come_increment_ref_count(sType_clone(right_value_25->type->mNoSolvedGenericsType), "12var.nc", 123, 458);
            come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 123, 457);
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj53=right_type,
            right_type=(struct sType* )come_increment_ref_count(sType_clone(right_value_25->type), "12var.nc", 126, 460);
            come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 126, 459);
        }
        i=0;
        for(_o2_saved_2=(struct list$1char$ph*)come_increment_ref_count(self->multiple_assign, "12var.nc", 130, 461),it_27=list$1char$ph_begin(_o2_saved_2)        ;!list$1char$ph_end(_o2_saved_2);it_27=list$1char$ph_next(_o2_saved_2)){
            if(i<list$1sType$ph_length(right_type->mGenericsTypes)) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                var__29=((struct sVar* )(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char* )(__right_value0=__builtin_string(it_27,"12var.nc",132))),((void*)0),(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 132, 462));
                if(var__29) {
                    if(var__29->mType->mHeap) {
                        if(!var__29->no_output_come_code) {
                            __right_value0 = (void*)0;
                            free_object(((struct sType* )(__right_value0=sType_clone(var__29->mType))),var__29->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 136, 463);
                        }
                    }
                    __right_value0 = (void*)0;
                    map$2char$phsVar$ph_remove(info->lv_table->mVars,(char* )come_increment_ref_count(__builtin_string(it_27,"12var.nc",140), "12var.nc", 140, 464),(_Bool)0);
                }
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                right_type2=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(right_type->mGenericsTypes,i)))), "12var.nc", 143, 483);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 143, 484);
                right_type2->mStatic=(_Bool)0;
                add_variable_to_table(it_27,right_type2,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 148, 485);
            }
            i++;
        }
        static int num_multiple_var=0;
        __right_value0 = (void*)0;
        multiple_var_name=(char* )come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var), "12var.nc", 152, 486);
        __right_value0 = (void*)0;
        add_come_code_at_function_head(info,"%s\n;",((char* )(__right_value0=make_define_var(right_value_25->type,multiple_var_name,info,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 153, 487));
        add_come_code(info,"%s=%s;\n",multiple_var_name,right_value_25->c_value);
        __right_value0 = (void*)0;
        __dec_obj54=right_value_25->c_value,
        right_value_25->c_value=(char* )come_increment_ref_count((char* )come_memdup(multiple_var_name, "12var.nc", 157, 488, "char* "), "12var.nc", 157, 490);
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 157, 489);
        i=0;
        for(_o2_saved_3=(struct list$1char$ph*)come_increment_ref_count(self->multiple_assign, "12var.nc", 160, 491),it_32=list$1char$ph_begin(_o2_saved_3)        ;!list$1char$ph_end(_o2_saved_3);it_32=list$1char$ph_next(_o2_saved_3)){
            if(i<list$1sType$ph_length(right_type->mGenericsTypes)) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                right_type2_33=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(right_type->mGenericsTypes,i)))), "12var.nc", 162, 492);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 162, 493);
                var__34=get_variable_from_table(info->lv_table,it_32);
                left_type_35=(struct sType* )come_increment_ref_count(var__34->mType, "12var.nc", 166, 494);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                right_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 168, 495, "struct CVALUE* "), "12var.nc", 168, 496)), "12var.nc", 168, 497);
                __right_value0 = (void*)0;
                __dec_obj55=right_value2->c_value,
                right_value2->c_value=(char* )come_increment_ref_count(xsprintf("%s->v%d",right_value_25->c_value,i+1), "12var.nc", 170, 499);
                __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 170, 498);
                __dec_obj56=right_value2->type,
                right_value2->type=(struct sType* )come_increment_ref_count(right_type2_33, "12var.nc", 171, 501);
                come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 171, 500);
                right_value2->var=((void*)0);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                come_value_36=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 174, 502, "struct CVALUE* "), "12var.nc", 174, 503)), "12var.nc", 174, 504);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                check_assign_type(((char*)(__right_value1=xsprintf("\%s is assigning to (1)",((char* )(__right_value0=string_to_string(self->name)))))),left_type_35,right_type2_33,come_value_36,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 176, 505));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 176, 506));
                if(right_type2_33->mHeap&&!left_type_35->mHeap) {
                    err_msg(info,"require borrow");
                    exit(1);
                }
                if(right_type2_33->mHeap&&left_type_35->mHeap&&left_type_35->mPointerNum>0&&right_type2_33->mPointerNum>0) {
                    std_move(left_type_35,right_type2_33,right_value2,info);
                    __right_value0 = (void*)0;
                    __dec_obj57=come_value_36->c_value,
                    come_value_36->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",var__34->mCValueName,right_value2->c_value), "12var.nc", 185, 508);
                    __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 185, 507);
                }
                else if(right_type2_33->mHeap!=left_type_35->mHeap&&left_type_35->mPointerNum>0&&right_type2_33->mPointerNum>0) {
                    err_msg(info,"invalid heap object left  %d right %d",left_type_35->mHeap,right_type2_33->mHeap);
                                        __result_obj__0 = (_Bool)0;
                    come_call_finalizer(sType_finalize, right_type2_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 190, 509);
                    come_call_finalizer(sType_finalize, left_type_35, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 190, 510);
                    come_call_finalizer(CVALUE_finalize, right_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 190, 511);
                    come_call_finalizer(CVALUE_finalize, come_value_36, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 190, 512);
                    come_call_finalizer(buffer_finalize, buf_23, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 190, 513);
                    come_call_finalizer(CVALUE_finalize, right_value_25, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 190, 514);
                    come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 190, 515);
                    come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 190, 516);
                    (multiple_var_name = come_decrement_ref_count(multiple_var_name, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 190, 517));
                    come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 190, 518);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj58=come_value_36->c_value,
                    come_value_36->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",var__34->mCValueName,right_value2->c_value), "12var.nc", 193, 520);
                    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 193, 519);
                }
                __right_value0 = (void*)0;
                __dec_obj59=come_value_36->type,
                come_value_36->type=(struct sType* )come_increment_ref_count(sType_clone(left_type_35), "12var.nc", 195, 522);
                come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 195, 521);
                come_value_36->var=var__34;
                __right_value0 = (void*)0;
                add_come_code_at_function_head(info,"%s=0;\n",((char* )(__right_value0=make_define_var(left_type_35,var__34->mCValueName,info,(_Bool)0,(_Bool)0))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 198, 523));
                add_come_code(info,"%s;\n",come_value_36->c_value);
                come_call_finalizer(sType_finalize, right_type2_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 203, 524);
                come_call_finalizer(sType_finalize, left_type_35, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 203, 525);
                come_call_finalizer(CVALUE_finalize, right_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 203, 526);
                come_call_finalizer(CVALUE_finalize, come_value_36, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 203, 527);
            }
            i++;
        }
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X1=(string_operator_not_equals(((char* )(__right_value1=buffer_to_string(buf_23))),"")));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 206, 528));
_conditional_value_X1;})) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_37=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 207, 529, "struct CVALUE* "), "12var.nc", 207, 530)), "12var.nc", 207, 531);
            __right_value0 = (void*)0;
            __dec_obj60=come_value_37->c_value,
            come_value_37->c_value=(char* )come_increment_ref_count(buffer_to_string(buf_23), "12var.nc", 209, 533);
            __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 209, 532);
            list$1CVALUE$ph_add(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_37, "12var.nc", 211, 548));
            come_call_finalizer(CVALUE_finalize, come_value_37, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 213, 549);
        }
        come_call_finalizer(buffer_finalize, buf_23, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 550);
        come_call_finalizer(CVALUE_finalize, right_value_25, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 551);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 552);
        come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 553);
        (multiple_var_name = come_decrement_ref_count(multiple_var_name, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 549, 554));
        come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 555);
    }
    else if(self->right_value==((void*)0)) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        var__40=((struct sVar* )(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char* )(__right_value0=__builtin_string(self->name,"12var.nc",215))),((void*)0),(_Bool)0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 215, 556));
        if(var__40) {
            if(var__40->mType->mHeap) {
                if(!var__40->no_output_come_code) {
                    __right_value0 = (void*)0;
                    free_object(((struct sType* )(__right_value0=sType_clone(var__40->mType))),var__40->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 219, 557);
                }
            }
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_remove(info->lv_table->mVars,(char* )come_increment_ref_count(__builtin_string(self->name,"12var.nc",223), "12var.nc", 223, 558),(_Bool)0);
        }
        if(self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
                        neo_current_frame = fr.prev;
            return (_Bool)1;
        }
        __right_value0 = (void*)0;
        type__41=(struct sType* )come_increment_ref_count(solve_generics(self->type,info->generics_type,info), "12var.nc", 231, 559);
        __right_value0 = (void*)0;
        type_42=(struct sType* )come_increment_ref_count(solve_method_generics(type__41,info), "12var.nc", 232, 560);
        __right_value0 = (void*)0;
        add_variable_to_table(self->name,((struct sType* )(__right_value0=sType_clone(type_42))),info,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 234, 561);
        var__40=get_variable_from_table(info->lv_table,self->name);
        if(var__40==((void*)0)) {
            var__40=get_variable_from_table(info->gv_table,self->name);
            if(var__40==((void*)0)) {
                err_msg(info,"var not found(%s)(Y) at definition of variable",self->name);
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, type__41, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 243, 562);
                come_call_finalizer(sType_finalize, type_42, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 243, 563);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
        }
        __right_value0 = (void*)0;
        left_type_43=(struct sType* )come_increment_ref_count(sType_clone(var__40->mType), "12var.nc", 247, 564);
        if(left_type_43->mChannel) {
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X2=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_43->mNoCallingDestructor&&((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("memset"))))))));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 250, 565));
            come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 250, 566);
_conditional_value_X2;})) {
                add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__40->mCValueName);
            }
        }
        else if(list$1sNode$ph_length(left_type_43->mArrayNum)>0||list$1sNode$ph_length(left_type_43->mVarNameArrayNum)>0) {
            __right_value0 = (void*)0;
            add_come_code(info,"%s;\n",((char* )(__right_value0=make_define_var(left_type_43,var__40->mCValueName,info,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 255, 567));
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X3=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_43->mNoCallingDestructor&&((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("memset"))))))));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 257, 568));
            come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 257, 569);
_conditional_value_X3;})) {
                add_come_code(info,"memset(&%s, 0, sizeof(%s));\n",var__40->mCValueName,var__40->mCValueName);
            }
        }
        else {
            __right_value0 = (void*)0;
            add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(left_type_43,var__40->mCValueName,info,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 262, 570));
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X4=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_43->mNoCallingDestructor&&((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("memset"))))))));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 264, 571));
            come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 264, 572);
_conditional_value_X4;})) {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__40->mCValueName,var__40->mCValueName);
            }
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_44=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 269, 573, "struct CVALUE* "), "12var.nc", 269, 574)), "12var.nc", 269, 575);
        __right_value0 = (void*)0;
        __dec_obj64=come_value_44->c_value,
        come_value_44->c_value=(char* )come_increment_ref_count(xsprintf("%s",var__40->mCValueName), "12var.nc", 271, 577);
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 271, 576);
        __right_value0 = (void*)0;
        __dec_obj65=come_value_44->type,
        come_value_44->type=(struct sType* )come_increment_ref_count(sType_clone(left_type_43), "12var.nc", 272, 579);
        come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 272, 578);
        come_value_44->var=var__40;
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_44, "12var.nc", 275, 580));
        if(!left_type_43->mClass->mNumber&&left_type_43->mPointerNum==0) {
            var__40->mType->mAllocaValue=(_Bool)1;
            if(var__40->mType->mNoSolvedGenericsType) {
                var__40->mType->mNoSolvedGenericsType->mAllocaValue=(_Bool)1;
            }
        }
        come_call_finalizer(sType_finalize, type__41, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 581);
        come_call_finalizer(sType_finalize, type_42, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 582);
        come_call_finalizer(sType_finalize, left_type_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 583);
        come_call_finalizer(CVALUE_finalize, come_value_44, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 584);
    }
    else if(self->alloc) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        var__45=((struct sVar* )(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char* )(__right_value0=__builtin_string(self->name,"12var.nc",285))),((void*)0),(_Bool)0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 285, 585));
        old_var_=var__45;
        if(var__45&&!self->iter_) {
            if(var__45->mType->mHeap) {
                if(!var__45->no_output_come_code) {
                    __right_value0 = (void*)0;
                    free_object(((struct sType* )(__right_value0=sType_clone(var__45->mType))),var__45->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 290, 586);
                }
            }
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_remove(info->lv_table->mVars,(char* )come_increment_ref_count(__builtin_string(self->name,"12var.nc",294), "12var.nc", 294, 587),(_Bool)0);
        }
        if(self->type==((void*)0)) {
        }
        else {
            __right_value0 = (void*)0;
            type__46=(struct sType* )come_increment_ref_count(solve_generics(self->type,info->generics_type,info), "12var.nc", 300, 588);
            __right_value0 = (void*)0;
            type_47=(struct sType* )come_increment_ref_count(solve_method_generics(type__46,info), "12var.nc", 301, 589);
            add_variable_to_table(self->name,type_47,info,(_Bool)0,(_Bool)0,(_Bool)0);
            come_call_finalizer(sType_finalize, type__46, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 306, 590);
            come_call_finalizer(sType_finalize, type_47, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 306, 591);
        }
        Value_48=node_compile(self->right_value,info);
        if(!Value_48) {
                        neo_current_frame = fr.prev;
            return (_Bool)0;
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        array_initializer=string_operator_equals(((char* )(__right_value1=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 310, 592));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        string_initializer=string_operator_equals(((char* )(__right_value1=self->right_value->kind(self->right_value->_protocol_obj))),"sStrNode");
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 311, 593));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        new_channel=string_operator_equals(((char* )(__right_value1=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 312, 594));
        __right_value0 = (void*)0;
        right_value_49=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "12var.nc", 314, 595);
        __right_value0 = (void*)0;
        right_type_50=(struct sType* )come_increment_ref_count(sType_clone(right_value_49->type), "12var.nc", 315, 596);
        right_type_50->mStatic=(_Bool)0;
        if(self->iter_&&old_var_) {
            if(old_var_->mType->mHeap) {
                if(!old_var_->no_output_come_code) {
                    __right_value0 = (void*)0;
                    free_object(((struct sType* )(__right_value0=sType_clone(old_var_->mType))),old_var_->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 321, 597);
                }
            }
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_remove(info->lv_table->mVars,(char* )come_increment_ref_count(__builtin_string(self->name,"12var.nc",325), "12var.nc", 325, 598),(_Bool)0);
        }
        if(self->type==((void*)0)) {
            __right_value0 = (void*)0;
            type__51=(struct sType* )come_increment_ref_count(solve_generics(right_type_50,info->generics_type,info), "12var.nc", 329, 599);
            __right_value0 = (void*)0;
            type_52=(struct sType* )come_increment_ref_count(solve_method_generics(type__51,info), "12var.nc", 330, 600);
            add_variable_to_table(self->name,type_52,info,(_Bool)0,(_Bool)0,(_Bool)0);
            come_call_finalizer(sType_finalize, type__51, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 334, 601);
            come_call_finalizer(sType_finalize, type_52, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 334, 602);
        }
        if(self->iter_) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj66=info->generics_type,
            info->generics_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "12var.nc", 335, 603, "struct sType* "), "12var.nc", 335, 604),(char*)come_increment_ref_count(xsprintf("list"), "12var.nc", 335, 605),(_Bool)0,info,(_Bool)0,0), "12var.nc", 335, 607);
            come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 335, 606);
            list$1sType$ph_reset(info->generics_type->mGenericsTypes);
            __right_value0 = (void*)0;
            list$1sType$ph_add(info->generics_type->mGenericsTypes,(struct sType* )come_increment_ref_count(sType_clone(right_type_50), "12var.nc", 337, 609));
        }
        var__45=get_variable_from_table(info->lv_table,self->name);
        __right_value0 = (void*)0;
        left_type_53=(struct sType* )come_increment_ref_count(sType_clone(var__45->mType), "12var.nc", 342, 610);
        if(left_type_53->mHeap&&(left_type_53->mConstant||left_type_53->mStatic||left_type_53->mRegister)) {
            err_msg(info,"don't append heap with constant, static, register");
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(CVALUE_finalize, right_value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 346, 611);
            come_call_finalizer(sType_finalize, right_type_50, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 346, 612);
            come_call_finalizer(sType_finalize, left_type_53, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 346, 613);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(array_initializer||(string_operator_equals(left_type_53->mClass->mName,"char")&&(list$1sNode$ph_length(left_type_53->mArrayNum)>0||left_type_53->mArrayPointerType)&&string_initializer)||left_type_53->mStatic||left_type_53->mConstant||left_type_53->mRegister||list$1sNode$ph_length(left_type_53->mArrayNum)>0||left_type_53->mArrayPointerType) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            var__54=((struct sVar* )(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char* )(__right_value0=__builtin_string(self->name,"12var.nc",350))),((void*)0),(_Bool)0)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 350, 614));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_55=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 351, 615, "struct CVALUE* "), "12var.nc", 351, 616)), "12var.nc", 351, 617);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj67=come_value_55->c_value,
            come_value_55->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",((char* )(__right_value0=make_define_var(left_type_53,var__54->mCValueName,info,(_Bool)0,(_Bool)0))),right_value_49->c_value), "12var.nc", 353, 619);
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 353, 618);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 353, 620));
            __right_value0 = (void*)0;
            __dec_obj68=come_value_55->type,
            come_value_55->type=(struct sType* )come_increment_ref_count(sType_clone(left_type_53), "12var.nc", 354, 622);
            come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 354, 621);
            come_value_55->var=var__54;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_55, "12var.nc", 357, 623));
            add_come_last_code(info,"%s",come_value_55->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_55, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 416, 624);
        }
        else if(left_type_53->mChannel&&new_channel) {
            __right_value0 = (void*)0;
            add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(left_type_53,var__45->mCValueName,info,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 362, 625));
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X5=(string_operator_not_equals(info->come_fun->mName,"memset")&&!left_type_53->mNoCallingDestructor&&((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("memset"))))))));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 364, 626));
            come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 364, 627);
_conditional_value_X5;})) {
                add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__45->mCValueName);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_56=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 368, 628, "struct CVALUE* "), "12var.nc", 368, 629)), "12var.nc", 368, 630);
            __right_value0 = (void*)0;
            __dec_obj69=come_value_56->c_value,
            come_value_56->c_value=(char* )come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__45->mCValueName), "12var.nc", 369, 632);
            __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 369, 631);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj70=come_value_56->type,
            come_value_56->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "12var.nc", 370, 633, "struct sType* "), "12var.nc", 370, 634),(char*)come_increment_ref_count(xsprintf("void"), "12var.nc", 370, 635),(_Bool)0,info,(_Bool)0,0), "12var.nc", 370, 637);
            come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 370, 636);
            come_value_56->type->mPointerNum=1;
            come_value_56->var=var__45;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_56, "12var.nc", 374, 638));
            add_come_last_code(info,"%s",come_value_56->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_56, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 416, 639);
        }
        else {
            __right_value0 = (void*)0;
            type__57=(struct sType* )come_increment_ref_count(solve_generics(left_type_53,info->generics_type,info), "12var.nc", 379, 640);
            __right_value0 = (void*)0;
            type_58=(struct sType* )come_increment_ref_count(solve_method_generics(type__57,info), "12var.nc", 380, 641);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            check_assign_type(((char*)(__right_value1=xsprintf("\%s is assigning to (2)",((char* )(__right_value0=string_to_string(self->name)))))),type_58,right_type_50,right_value_49,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 381, 642));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 381, 643));
            if(right_type_50->mHeap&&!type_58->mHeap) {
                err_msg(info,"require borrow");
                exit(1);
            }
            if(left_type_53->mPointerNum>0&&left_type_53->mHeap&&string_operator_equals(right_type_50->mClass->mName,"void")&&right_type_50->mPointerNum>0) {
            }
            else if(right_type_50->mHeap&&left_type_53->mHeap&&left_type_53->mPointerNum>0&&right_type_50->mPointerNum>0) {
                std_move(left_type_53,right_type_50,right_value_49,info);
            }
            else if(right_type_50->mHeap!=left_type_53->mHeap&&left_type_53->mPointerNum>0&&right_type_50->mPointerNum>0) {
                err_msg(info,"invalid heap object(%s) left  %d right %d",self->name,left_type_53->mHeap,right_type_50->mHeap);
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, type__57, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 397, 644);
                come_call_finalizer(sType_finalize, type_58, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 397, 645);
                come_call_finalizer(CVALUE_finalize, right_value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 397, 646);
                come_call_finalizer(sType_finalize, right_type_50, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 397, 647);
                come_call_finalizer(sType_finalize, left_type_53, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 397, 648);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            else if(left_type_53->mHeap&&!right_value_49->type->mHeap) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, type__57, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 401, 649);
                come_call_finalizer(sType_finalize, type_58, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 401, 650);
                come_call_finalizer(CVALUE_finalize, right_value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 401, 651);
                come_call_finalizer(sType_finalize, right_type_50, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 401, 652);
                come_call_finalizer(sType_finalize, left_type_53, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 401, 653);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(left_type_53,var__45->mCValueName,info,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 404, 654));
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_59=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 406, 655, "struct CVALUE* "), "12var.nc", 406, 656)), "12var.nc", 406, 657);
            __right_value0 = (void*)0;
            __dec_obj71=come_value_59->c_value,
            come_value_59->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",var__45->mCValueName,right_value_49->c_value), "12var.nc", 408, 659);
            __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 408, 658);
            __right_value0 = (void*)0;
            __dec_obj72=come_value_59->type,
            come_value_59->type=(struct sType* )come_increment_ref_count(sType_clone(left_type_53), "12var.nc", 409, 661);
            come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 409, 660);
            come_value_59->var=var__45;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_59, "12var.nc", 412, 662));
            add_come_last_code(info,"%s",come_value_59->c_value);
            come_call_finalizer(sType_finalize, type__57, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 416, 663);
            come_call_finalizer(sType_finalize, type_58, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 416, 664);
            come_call_finalizer(CVALUE_finalize, come_value_59, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 416, 665);
        }
        come_call_finalizer(CVALUE_finalize, right_value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 666);
        come_call_finalizer(sType_finalize, right_type_50, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 667);
        come_call_finalizer(sType_finalize, left_type_53, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 668);
    }
    else {
        Value_60=node_compile(self->right_value,info);
        if(!Value_60) {
                        neo_current_frame = fr.prev;
            return (_Bool)0;
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        new_channel_61=string_operator_equals(((char* )(__right_value1=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 422, 669));
        __right_value0 = (void*)0;
        right_value_62=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "12var.nc", 424, 670);
        right_type_63=right_value_62->type;
        current_stack_frame_struct=info->current_stack_frame_struct;
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X6=(current_stack_frame_struct&&((struct sVar* )(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char* )(__right_value0=__builtin_string(self->name,"12var.nc",429))),((void*)0),(_Bool)0)))==((void*)0)));        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 429, 671));
        come_call_finalizer(sVar_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 429, 672);
_conditional_value_X6;})) {
            parent_var=get_variable_from_table(info->lv_table->mParent,self->name);
            if(parent_var!=((void*)0)) {
                if(string_operator_not_equals(parent_var->mFunName,info->come_fun->mName)) {
                    left_type_64=parent_var->mType;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    check_assign_type(((char*)(__right_value1=xsprintf("\%s is assigning to(3)",((char* )(__right_value0=string_to_string(self->name)))))),left_type_64,right_type_63,right_value_62,info);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 436, 673));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 436, 674));
                    if(right_type_63->mHeap&&!left_type_64->mHeap) {
                        err_msg(info,"require borrow");
                        exit(1);
                    }
                    if(left_type_64->mPointerNum>0&&right_type_63->mPointerNum>0&&right_type_63->mHeap&&left_type_64->mHeap) {
                        __right_value0 = (void*)0;
                        c_value=(char* )come_increment_ref_count(xsprintf("*(parent->%s)",parent_var->mCValueName), "12var.nc", 443, 675);
                        decrement_ref_count_object(parent_var->mType,c_value,info,(_Bool)0);
                        std_move(left_type_64,right_type_63,right_value_62,info);
                        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 461, 676));
                    }
                    else if(left_type_64->mPointerNum>0&&right_type_63->mPointerNum>0&&string_operator_equals(right_type_63->mClass->mName,"void")&&left_type_64->mHeap) {
                        __right_value0 = (void*)0;
                        c_value_65=(char* )come_increment_ref_count(xsprintf("*(parent->%s)",parent_var->mCValueName), "12var.nc", 449, 677);
                        decrement_ref_count_object(parent_var->mType,c_value_65,info,(_Bool)0);
                        (c_value_65 = come_decrement_ref_count(c_value_65, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 461, 678));
                    }
                    else if(left_type_64->mHeap&&!right_value_62->type->mHeap) {
                        err_msg(info,"require right value as heap object(%s)",self->name);
                                                __result_obj__0 = (_Bool)1;
                        come_call_finalizer(CVALUE_finalize, right_value_62, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 454, 679);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                    else if(left_type_64->mHeap!=right_value_62->type->mHeap) {
                        err_msg(info,"invalid heap object(%s) left  %d right %d",self->name,left_type_64->mHeap,right_value_62->type->mHeap);
                                                __result_obj__0 = (_Bool)1;
                        come_call_finalizer(CVALUE_finalize, right_value_62, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 458, 680);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    come_value_66=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 461, 681, "struct CVALUE* "), "12var.nc", 461, 682)), "12var.nc", 461, 683);
                    __right_value0 = (void*)0;
                    __dec_obj73=come_value_66->c_value,
                    come_value_66->c_value=(char* )come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var->mCValueName,right_value_62->c_value), "12var.nc", 463, 685);
                    __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 463, 684);
                    __right_value0 = (void*)0;
                    __dec_obj74=come_value_66->type,
                    come_value_66->type=(struct sType* )come_increment_ref_count(sType_clone(left_type_64), "12var.nc", 464, 687);
                    come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 464, 686);
                    come_value_66->var=((void*)0);
                    add_come_last_code(info,"%s",come_value_66->c_value);
                    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_66, "12var.nc", 469, 688));
                                        __result_obj__0 = (_Bool)1;
                    come_call_finalizer(CVALUE_finalize, come_value_66, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 471, 689);
                    come_call_finalizer(CVALUE_finalize, right_value_62, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 471, 690);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                    come_call_finalizer(CVALUE_finalize, come_value_66, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 473, 691);
                }
            }
        }
        var__67=get_variable_from_table(info->lv_table,self->name);
        if(var__67==((void*)0)) {
            var__67=get_variable_from_table(info->gv_table,self->name);
            if(var__67==((void*)0)) {
                warning_msg(info,"var not found(%s)(X) at storing variable",self->name);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                come_value_68=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 484, 692, "struct CVALUE* "), "12var.nc", 484, 693)), "12var.nc", 484, 694);
                __right_value0 = (void*)0;
                __dec_obj75=come_value_68->c_value,
                come_value_68->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",self->name,right_value_62->c_value), "12var.nc", 486, 696);
                __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 486, 695);
                __right_value0 = (void*)0;
                __dec_obj76=come_value_68->type,
                come_value_68->type=(struct sType* )come_increment_ref_count(sType_clone(right_type_63), "12var.nc", 487, 698);
                come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 487, 697);
                come_value_68->var=var__67;
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_68, "12var.nc", 490, 699));
                add_come_last_code(info,"%s",come_value_68->c_value);
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value_68, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 494, 700);
                come_call_finalizer(CVALUE_finalize, right_value_62, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 494, 701);
                neo_current_frame = fr.prev;
                return __result_obj__0;
                come_call_finalizer(CVALUE_finalize, come_value_68, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 496, 702);
            }
        }
        if(var__67->mType==((void*)0)) {
            __right_value0 = (void*)0;
            __dec_obj77=var__67->mType,
            var__67->mType=(struct sType* )come_increment_ref_count(sType_clone(right_type_63), "12var.nc", 499, 704);
            come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 499, 703);
        }
        __right_value0 = (void*)0;
        left_type_69=(struct sType* )come_increment_ref_count(sType_clone(var__67->mType), "12var.nc", 502, 705);
        if(left_type_69->mChannel&&new_channel_61) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_70=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 505, 706, "struct CVALUE* "), "12var.nc", 505, 707)), "12var.nc", 505, 708);
            __right_value0 = (void*)0;
            __dec_obj78=come_value_70->c_value,
            come_value_70->c_value=(char* )come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__67->mCValueName), "12var.nc", 507, 710);
            __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 507, 709);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj79=come_value_70->type,
            come_value_70->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "12var.nc", 508, 711, "struct sType* "), "12var.nc", 508, 712),(char*)come_increment_ref_count(xsprintf("void"), "12var.nc", 508, 713),(_Bool)0,info,(_Bool)0,0), "12var.nc", 508, 715);
            come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 508, 714);
            come_value_70->type->mPointerNum=1;
            come_value_70->var=var__67;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_70, "12var.nc", 512, 716));
            add_come_last_code(info,"%s",come_value_70->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_70, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 547, 717);
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            check_assign_type(((char*)(__right_value1=xsprintf("\%s is assigning to(4)",((char* )(__right_value0=string_to_string(self->name)))))),left_type_69,right_type_63,right_value_62,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 517, 718));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 517, 719));
            if(right_type_63->mHeap&&!left_type_69->mHeap) {
                err_msg(info,"require borrow");
                exit(1);
            }
            if(right_type_63->mHeap&&left_type_69->mHeap&&left_type_69->mPointerNum>0&&right_type_63->mPointerNum>0) {
                decrement_ref_count_object(left_type_69,var__67->mCValueName,info,(_Bool)0);
                std_move(left_type_69,right_type_63,right_value_62,info);
            }
            else if(left_type_69->mPointerNum>0&&left_type_69->mHeap&&string_operator_equals(right_type_63->mClass->mName,"void")&&right_type_63->mPointerNum>0) {
                decrement_ref_count_object(left_type_69,var__67->mCValueName,info,(_Bool)0);
            }
            else if(left_type_69->mHeap!=right_value_62->type->mHeap) {
                err_msg(info,"invalid heap object(%s) left  %d right %d",self->name,left_type_69->mHeap,right_value_62->type->mHeap);
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, right_value_62, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 534, 720);
                come_call_finalizer(sType_finalize, left_type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 534, 721);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_71=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 537, 722, "struct CVALUE* "), "12var.nc", 537, 723)), "12var.nc", 537, 724);
            __right_value0 = (void*)0;
            __dec_obj80=come_value_71->c_value,
            come_value_71->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",var__67->mCValueName,right_value_62->c_value), "12var.nc", 539, 726);
            __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 539, 725);
            __right_value0 = (void*)0;
            __dec_obj81=come_value_71->type,
            come_value_71->type=(struct sType* )come_increment_ref_count(sType_clone(left_type_69), "12var.nc", 540, 728);
            come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 540, 727);
            come_value_71->var=var__67;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_71, "12var.nc", 543, 729));
            add_come_last_code(info,"%s",come_value_71->c_value);
            come_call_finalizer(CVALUE_finalize, come_value_71, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 547, 730);
        }
        come_call_finalizer(CVALUE_finalize, right_value_62, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 731);
        come_call_finalizer(sType_finalize, left_type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 549, 732);
    }
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
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
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 6, "struct sType* "), "sType_clone", 5, 7);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj2=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 41);
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 40);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj3=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 43);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 42);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj7=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 73);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 72);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 75);
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 74);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 84);
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 83) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 86);
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 85) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 87, "char* "), "sType_clone", 14, 89);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 88);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 90, "char* "), "sType_clone", 15, 92);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 91);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 93, "char* "), "sType_clone", 16, 95);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 94);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 96, "char* "), "sType_clone", 17, 98);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 97);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj15=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 99, "char* "), "sType_clone", 18, 101);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 100);
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
        __dec_obj16=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 102, "char* "), "sType_clone", 49, 104);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 103);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj17=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 105, "char* "), "sType_clone", 51, 107);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 106);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj18=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 108, "char* "), "sType_clone", 54, 110);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 109);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 140);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 139);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 142);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 141);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 162);
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 161);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 164);
        come_call_finalizer(list$1int$_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 163);
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
        __dec_obj26=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 166);
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 165);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj27=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 167, "char* "), "sType_clone", 67, 169);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 168);
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
        __dec_obj28=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 171);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 170);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 203);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 202);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 205);
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 204);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 207);
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 206) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj35=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 209);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 208);
    }
        __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 210);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 8);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 9);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 12);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 13);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 14):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 15):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 16));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 17));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 18));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 19));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 20));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 21));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 22));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 23));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 26);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 27);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 29);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 30);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 31);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 32));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 33);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 36);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 37);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 38):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 39);
    }
            neo_current_frame = fr.prev;
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 11);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 10);
    }
            neo_current_frame = fr.prev;
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 25);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 24):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 28);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 35);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
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
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1510, 44);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1510, 45);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1512, 46, "struct list$1sType$ph*"), "/usr/local/include/neo-c.h", 1512, 50)), "/usr/local/include/neo-c.h", 1512, 51);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1517, 66));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1520, 67));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1526, 68);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1526, 69);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1526, 70);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1484, 47);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 48);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 49);
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
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1530, 52);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1533, 53, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1533, 54);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1537, 56);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1537, 55);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1543, 57, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1543, 58);
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj5=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1547, 60);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1547, 59);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1553, 61, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1553, 62);
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj6=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1557, 64);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1557, 63);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1565, 65);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 71);
    }
            neo_current_frame = fr.prev;
}

static struct sNode* sNode_clone(struct sNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNode_clone"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNode* result;
    if(self==(void*)0) {
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 76);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 77):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 78, "struct sNode*"), "sNode_clone", 5, 79);
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
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1510, 111);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1510, 112);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1512, 113, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1512, 117)), "/usr/local/include/neo-c.h", 1512, 118);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1517, 133));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1520, 134));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1526, 135);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1526, 136);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1526, 137);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1484, 114);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 115);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 116);
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
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1530, 119):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1533, 120, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1533, 121);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj19=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1537, 123);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1537, 122) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1543, 124, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1543, 125);
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj20=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1547, 127);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1547, 126) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1553, 128, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1553, 129);
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj21=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1557, 131);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1557, 130) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1565, 132):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 138);
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
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1510, 143);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1510, 144);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1512, 145, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1512, 149)), "/usr/local/include/neo-c.h", 1512, 150);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1526, 157);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1526, 158);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1526, 159);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1484, 146);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 147);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 148);
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
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1533, 151, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1533, 152);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1543, 153, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1543, 154);
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1553, 155, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1553, 156);
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        litem_5->item=item;
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1int$_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_finalize"; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 160);
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
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1510, 172);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1510, 173);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1512, 174, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1512, 178)), "/usr/local/include/neo-c.h", 1512, 179);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1517, 194, "char* "), "/usr/local/include/neo-c.h", 1517, 195));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1520, 196, "char* "), "/usr/local/include/neo-c.h", 1520, 197));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1526, 198);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1526, 199);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1526, 200);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1484, 175);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 176);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 177);
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
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1530, 180));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1533, 181, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1533, 182);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj29=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1537, 184);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1537, 183);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1543, 185, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1543, 186);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj30=litem_6->item,
        litem_6->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1547, 188);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1547, 187);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1553, 189, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1553, 190);
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj31=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1557, 192);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1557, 191);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1565, 193));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$ph_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 201);
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
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1510, 217);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1510, 223);
        return __result_obj__0;
    }
    result=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1512, 224, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"), "/usr/local/include/neo-c.h", 1512, 228)), "/usr/local/include/neo-c.h", 1512, 229);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_clone(it->item), "/usr/local/include/neo-c.h", 1517, 261));
        }
        else {
            __right_value0 = (void*)0;
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_clone(it->item), "/usr/local/include/neo-c.h", 1520, 262));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1526, 263);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1526, 264);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1526, 265);
    return __result_obj__0;
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 222);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize}", 2, 221);
    }
            neo_current_frame = fr.prev;
}

static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$phsNode$ph$p_finalize}", 2, 218);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$phsNode$ph$p_finalize", 3, 219));
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        ((self->v3) ? self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0,(void*)0, "tuple3$3sType$phchar$phsNode$ph$p_finalize", 4, 220):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1484, 225);
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 226);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 227);
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
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1530, 230);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1533, 231, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1533, 232);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj39=litem->item,
        litem->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1537, 234);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1537, 233);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1543, 235, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1543, 236);
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj40=litem_8->item,
        litem_8->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1547, 238);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1547, 237);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1553, 239, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1553, 240);
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj41=litem_9->item,
        litem_9->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1557, 242);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1557, 241);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1565, 243);
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
    if(self==(void*)0) {
                __result_obj__0 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((void*)0, "tuple3$3sType$phchar$phsNode$ph_clone", 4, 244);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple3$3sType$phchar$phsNode$ph_clone}", 4, 245);
        return __result_obj__0;
    }
    result=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "tuple3$3sType$phchar$phsNode$ph_clone", 5, 246, "struct tuple3$3sType$phchar$phsNode$ph*"), "tuple3$3sType$phchar$phsNode$ph_clone", 5, 247);
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj42=result->v1,
        result->v1=(struct sType* )come_increment_ref_count(sType_clone(self->v1), "tuple3$3sType$phchar$phsNode$ph_clone", 6, 249);
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$phsNode$ph_clone", 6, 248);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj43=result->v2,
        result->v2=(char* )come_increment_ref_count((char* )come_memdup(self->v2, "tuple3$3sType$phchar$phsNode$ph_clone", 7, 250, "char* "), "tuple3$3sType$phchar$phsNode$ph_clone", 7, 252);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "tuple3$3sType$phchar$phsNode$ph_clone", 7, 251);
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj44=result->v3,
        result->v3=(struct sNode*)come_increment_ref_count(sNode_clone(self->v3), "tuple3$3sType$phchar$phsNode$ph_clone", 8, 254);
        (__dec_obj44 ? __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0, (void*)0, "tuple3$3sType$phchar$phsNode$ph_clone", 8, 253) :0);
    }
        __result_obj__0 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(result, "tuple3$3sType$phchar$phsNode$ph_clone", 9, 255);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple3$3sType$phchar$phsNode$ph_clone}", 9, 259);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple3$3sType$phchar$phsNode$ph_clone}", 9, 260);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$phsNode$ph_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$phsNode$ph_finalize}", 2, 256);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$phsNode$ph_finalize", 3, 257));
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        ((self->v3) ? self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0,(void*)0, "tuple3$3sType$phchar$phsNode$ph_finalize", 4, 258):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 266);
    }
        neo_current_frame = fr.prev;
}

static void sStoreNode_finalize(struct sStoreNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sStoreNode_finalize", 2, 272));
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0, "sStoreNode_finalize", 3, 273));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sStoreNode_finalize}", 4, 274);
    }
    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
        ((self->right_value) ? self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0,(void*)0, "sStoreNode_finalize", 5, 275):(void*)0);
    }
    if(self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sStoreNode_finalize}", 6, 276);
    }
    if(self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sStoreNode_finalize}", 7, 277);
    }
    if(self!=((void*)0)&&self->attribute!=((void*)0)) {
        (self->attribute = come_decrement_ref_count(self->attribute, (void*)0, (void*)0, 0, 0, (void*)0, "sStoreNode_finalize", 8, 278));
    }
        neo_current_frame = fr.prev;
}

static struct sVar*  map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_at"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3140, 286);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3140, 291);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3140, 292);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3151, 293);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3151, 294);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3151, 295);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3160, 296);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3160, 297);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3160, 298);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3164, 299);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3164, 300);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3164, 301);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3168, 302);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3168, 303);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3168, 304);
    return __result_obj__0;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 287));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 288));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 289);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 290));
    }
            neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_remove(struct map$2char$phsVar$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_remove"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3174, 307));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                self->item_existance[it]=(_Bool)0;
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3189, 312));
                }
                self->keys[it]=((void*)0);
                if(1) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3194, 313);
                }
                memset(self->items+it,0,sizeof(struct sVar* ));
                self->len--;
                break;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                break;
            }
        }
        else {
            break;
        }
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3216, 314));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_remove"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    int it2;
    struct list_item$1char$ph* it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it2=0;
    it=self->head;
    while(it!=((void*)0)) {
        if((!by_pointer&&string_equals(it->item,item))||(by_pointer&&it->item==item)) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
    }
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1933, 309);
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
        it_10=self->head;
        i_11=0;
        while(it_10!=((void*)0)) {
            if(i_11==head) {
                self->tail=it_10->prev;
                self->tail->next=((void*)0);
            }
            if(i_11>=head) {
                prev_it_12=it_10;
                it_10=it_10->next;
                i_11++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1963, 310);
                self->len--;
            }
            else {
                it_10=it_10->next;
                i_11++;
            }
        }
    }
    else {
        it_13=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_14=0;
        while(it_13!=((void*)0)) {
            if(i_14==head) {
                head_prev_it=it_13->prev;
            }
            if(i_14==tail) {
                tail_it=it_13;
            }
            if(i_14>=head&&i_14<tail) {
                prev_it_15=it_13;
                it_13=it_13->next;
                i_14++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1996, 311);
                self->len--;
            }
            else {
                it_13=it_13->next;
                i_14++;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_reset"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1855, 308);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
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
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
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
    memset(&result_16,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__0 = result_16;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3sType$phchar$phsNode$ph$ph_end"; neo_current_frame = &fr;
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
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
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
    memset(&result_17,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__0 = result_17;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 353));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 354);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 355));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 356));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 357));
    }
                    neo_current_frame = fr.prev;
}

static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3514, 360);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3514, 383);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3514, 384);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3525, 385);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3525, 386);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3525, 387);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3534, 388);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3534, 389);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3534, 390);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3538, 391);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3538, 392);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3538, 393);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3542, 394);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3542, 395);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3542, 396);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 361));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 362);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 363);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 364);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 365);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 366);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 8, 369);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 372);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 373));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 374));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 375);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 376);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 377);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 378);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 379));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 380));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 381));
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 382));
    }
            neo_current_frame = fr.prev;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sVar$ph* it;
    struct list_item$1sVar$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 368);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 367);
    }
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 370);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 371);
    }
            neo_current_frame = fr.prev;
}

static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_operator_load_element"; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3514, 397);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3514, 398);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3514, 399);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3525, 400);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3525, 401);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3525, 402);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3534, 403);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3534, 404);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3534, 405);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3538, 406);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3538, 407);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3538, 408);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3542, 409);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3542, 410);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3542, 411);
    return __result_obj__0;
}

static int list$1tuple3$3sType$phchar$phsNode$ph$ph_length(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3sType$phchar$phsNode$ph$ph_length"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj49  ;
    struct list_item$1CVALUE$ph* litem_21;
    struct CVALUE*  __dec_obj50  ;
    struct list_item$1CVALUE$ph* litem_22;
    struct CVALUE*  __dec_obj51  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1614, 432);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1618, 433, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1618, 434);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj49=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1622, 436);
        come_call_finalizer(CVALUE_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1622, 435);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_21=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1628, 437, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1628, 438);
        litem_21->prev=self->head;
        litem_21->next=((void*)0);
        __dec_obj50=litem_21->item,
        litem_21->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1632, 440);
        come_call_finalizer(CVALUE_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1632, 439);
        self->tail=litem_21;
        self->head->next=litem_21;
    }
    else {
        __right_value0 = (void*)0;
        litem_22=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1638, 441, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1638, 442);
        litem_22->prev=self->tail;
        litem_22->next=((void*)0);
        __dec_obj51=litem_22->item,
        litem_22->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1642, 444);
        come_call_finalizer(CVALUE_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1642, 443);
        self->tail->next=litem_22;
        self->tail=litem_22;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1650, 445);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_26  ;
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
    memset(&result_26,0,sizeof(char* ));
        __result_obj__0 = result_26;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_end"; neo_current_frame = &fr;
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
    memset(&result_28,0,sizeof(char* ));
        __result_obj__0 = result_28;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static int list$1sType$ph_length(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
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
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2149, 465);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2149, 466);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2149, 467);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2152, 468);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2160, 469);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2160, 470);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_30,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_30, "/usr/local/include/neo-c.h", 2168, 471);
    come_call_finalizer(sType_finalize, default_value_30, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2168, 472);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2168, 473);
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
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2149, 474);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2149, 475);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2149, 476);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2152, 477);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2160, 478);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2160, 479);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_31,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_31, "/usr/local/include/neo-c.h", 2168, 480);
    come_call_finalizer(sType_finalize, default_value_31, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2168, 481);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2168, 482);
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
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1530, 534);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1533, 535, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1533, 536);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj61=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1537, 538);
        come_call_finalizer(CVALUE_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1537, 537);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_38=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1543, 539, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1543, 540);
        litem_38->prev=self->head;
        litem_38->next=((void*)0);
        __dec_obj62=litem_38->item,
        litem_38->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1547, 542);
        come_call_finalizer(CVALUE_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1547, 541);
        self->tail=litem_38;
        self->head->next=litem_38;
    }
    else {
        __right_value0 = (void*)0;
        litem_39=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1553, 543, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1553, 544);
        litem_39->prev=self->tail;
        litem_39->next=((void*)0);
        __dec_obj63=litem_39->item,
        litem_39->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1557, 546);
        come_call_finalizer(CVALUE_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1557, 545);
        self->tail->next=litem_39;
        self->tail=litem_39;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1565, 547);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
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
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1855, 608);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewChannel_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNewChannel* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNewChannel*)come_increment_ref_count(self, "12var.nc", 557, 733),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 557, 734);
        __result_obj__0 = (struct sNewChannel*)come_increment_ref_count(self, "12var.nc", 560, 735);
    come_call_finalizer(sNewChannel_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12var.nc}", 560, 737);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNewChannel_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12var.nc}", 560, 738);
    return __result_obj__0;
}

char*  sNewChannel_kind(struct sNewChannel* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewChannel_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNewChannel","12var.nc",562))), "12var.nc", 562, 739);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 562, 740));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12var.nc", 562, 741));
    return __result_obj__0;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewChannel_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    node=(struct sNode*)come_increment_ref_count(create_null_node(info), "12var.nc", 567, 742);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 570, 743):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 573, 744):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNewChannel_finalize(struct sNewChannel* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewChannel_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
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
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sWriteChannelNode*)come_increment_ref_count(self, "12var.nc", 582, 745),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 582, 746);
    __dec_obj82=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp, "12var.nc", 584, 748);
    (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0, (void*)0, "12var.nc", 584, 747) :0);
    __dec_obj83=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value, "12var.nc", 585, 750);
    (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0, (void*)0, "12var.nc", 585, 749) :0);
        __result_obj__0 = (struct sWriteChannelNode*)come_increment_ref_count(self, "12var.nc", 588, 751);
    come_call_finalizer(sWriteChannelNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12var.nc}", 588, 755);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 588, 756):(void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 588, 757):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sWriteChannelNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12var.nc}", 588, 758);
    return __result_obj__0;
}

char*  sWriteChannelNode_kind(struct sWriteChannelNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWriteChannelNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sWriteChannelNode","12var.nc",590))), "12var.nc", 590, 759);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 590, 760));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12var.nc", 590, 761));
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
    Value=node_compile(self->exp,info);
    if(!Value) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "12var.nc", 599, 762);
    Value_72=node_compile(self->right_value,info);
    if(!Value_72) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 602, 763);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "12var.nc", 605, 764);
    right_type=right_value->type;
    __right_value0 = (void*)0;
    left_type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "12var.nc", 608, 765);
    channel_type=(struct sType* )come_increment_ref_count(left_type->mChannelType, "12var.nc", 610, 766);
    static int var_num=0;
    var_num++;
    if(right_value->type->mHeap) {
        err_msg(info,"channel can't get heap type");
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 617, 767);
        come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 617, 768);
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 617, 769);
        come_call_finalizer(sType_finalize, channel_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 617, 770);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "12var.nc", 620, 771, "struct buffer* "), "12var.nc", 620, 772)), "12var.nc", 620, 773);
    __right_value0 = (void*)0;
    buffer_append_format(buf,"char __channel_buf%d[sizeof(%s)+1];\n",var_num,((char* )(__right_value0=make_type_name_string(channel_type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 622, 774));
    __right_value0 = (void*)0;
    buffer_append_format(buf,"%s* __channel_p%d = __channel_buf%d;\n",((char* )(__right_value0=make_type_name_string(channel_type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))),var_num,var_num);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 623, 775));
    buffer_append_format(buf,"*__channel_p%d = %s;\n",var_num,right_value->c_value);
    __right_value0 = (void*)0;
    add_come_code(info,((char* )(__right_value0=buffer_to_string(buf))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 626, 776));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 628, 777, "struct CVALUE* "), "12var.nc", 628, 778)), "12var.nc", 628, 779);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj84=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value->c_value,var_num,((char* )(__right_value0=make_type_name_string(channel_type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0)))), "12var.nc", 630, 781);
    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 630, 780);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 630, 782));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj85=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "12var.nc", 632, 783, "struct sType* "), "12var.nc", 632, 784),(char*)come_increment_ref_count(xsprintf("void"), "12var.nc", 632, 785),(_Bool)0,info,(_Bool)0,0), "12var.nc", 632, 787);
    come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 632, 786);
    come_value2->type->mPointerNum=1;
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "12var.nc", 636, 788));
    add_come_last_code(info,"%s",come_value2->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 640, 789);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 640, 790);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 640, 791);
    come_call_finalizer(sType_finalize, channel_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 640, 792);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 640, 793);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 640, 794);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sWriteChannelNode_finalize(struct sWriteChannelNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWriteChannelNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sWriteChannelNode_finalize", 2, 752));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sWriteChannelNode_finalize", 3, 753):(void*)0);
    }
    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
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
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sReadChannelNode*)come_increment_ref_count(self, "12var.nc", 649, 795),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 649, 796);
    __dec_obj86=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp, "12var.nc", 651, 798);
    (__dec_obj86 ? __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0, (void*)0, "12var.nc", 651, 797) :0);
        __result_obj__0 = (struct sReadChannelNode*)come_increment_ref_count(self, "12var.nc", 654, 799);
    come_call_finalizer(sReadChannelNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12var.nc}", 654, 802);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 654, 803):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sReadChannelNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12var.nc}", 654, 804);
    return __result_obj__0;
}

char*  sReadChannelNode_kind(struct sReadChannelNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReadChannelNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sReadChannelNode","12var.nc",656))), "12var.nc", 656, 805);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 656, 806));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12var.nc", 656, 807));
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
    exp=(struct sNode*)come_increment_ref_count(self->exp, "12var.nc", 661, 808);
    Value=node_compile(exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 664, 809):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "12var.nc", 667, 810);
    __right_value0 = (void*)0;
    var_type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "12var.nc", 669, 811);
    if(!var_type->mChannel) {
        err_msg(info,"require right type is channel");
                __result_obj__0 = (_Bool)1;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 673, 812):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 673, 813);
        come_call_finalizer(sType_finalize, var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 673, 814);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    channel_type=(struct sType* )come_increment_ref_count(var_type->mChannelType, "12var.nc", 676, 815);
    static int var_num=0;
    var_num++;
    __right_value0 = (void*)0;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num,((char* )(__right_value0=make_type_name_string(channel_type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 681, 816));
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 683, 817, "struct CVALUE* "), "12var.nc", 683, 818)), "12var.nc", 683, 819);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj87=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value->c_value,var_num,((char* )(__right_value0=make_type_name_string(channel_type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))),((char* )(__right_value1=make_type_name_string(channel_type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))),var_num), "12var.nc", 685, 821);
    __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 685, 820);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 685, 822));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 685, 823));
    __right_value0 = (void*)0;
    __dec_obj88=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(channel_type), "12var.nc", 686, 825);
    come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 686, 824);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "12var.nc", 689, 826));
    add_come_last_code(info,"%s",come_value2->c_value);
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 693, 827):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 693, 828);
    come_call_finalizer(sType_finalize, var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 693, 829);
    come_call_finalizer(sType_finalize, channel_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 693, 830);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 693, 831);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sReadChannelNode_finalize(struct sReadChannelNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReadChannelNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sReadChannelNode_finalize", 2, 800));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
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
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 700, 836, "struct sNode");
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value1=sStoreNode_initialize((struct sStoreNode* )come_increment_ref_count((struct sStoreNode *)come_calloc(1, sizeof(struct sStoreNode )*(1), "12var.nc", 700, 832, "struct sStoreNode* "), "12var.nc", 700, 833),(char* )come_increment_ref_count(name, "12var.nc", 700, 834),multiple_assign,multiple_declare,type,alloc,right_value,info,(char*)come_increment_ref_count(xsprintf(""), "12var.nc", 700, 835),iter_))), "12var.nc", 700, 837);
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
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "12var.nc", 700, 858);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 700, 859));
    come_call_finalizer(sStoreNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 700, 860);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "12var.nc", 700, 861):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 700, 862):(void*)0);
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
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sStoreNode* )come_increment_ref_count((struct sStoreNode *)come_calloc(1, sizeof(struct sStoreNode )*(1), "sStoreNode_clone", 5, 838, "struct sStoreNode* "), "sStoreNode_clone", 5, 839);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj89=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sStoreNode_clone", 7, 840, "char* "), "sStoreNode_clone", 7, 842);
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "sStoreNode_clone", 7, 841);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj90=result->name,
        result->name=(char* )come_increment_ref_count((char* )come_memdup(self->name, "sStoreNode_clone", 9, 843, "char* "), "sStoreNode_clone", 9, 845);
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "sStoreNode_clone", 9, 844);
    }
    if(self!=((void*)0)) {
        result->alloc=self->alloc;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj91=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sStoreNode_clone", 11, 847);
        come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sStoreNode_clone", 11, 846);
    }
    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj92=result->right_value,
        result->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value), "sStoreNode_clone", 12, 849);
        (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0, (void*)0, "sStoreNode_clone", 12, 848) :0);
    }
    if(self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj93=result->multiple_assign,
        result->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->multiple_assign), "sStoreNode_clone", 13, 851);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sStoreNode_clone", 13, 850);
    }
    if(self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj94=result->multiple_declare,
        result->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(self->multiple_declare), "sStoreNode_clone", 14, 853);
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sStoreNode_clone", 14, 852);
    }
    if(self!=((void*)0)&&self->attribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj95=result->attribute,
        result->attribute=(char* )come_increment_ref_count((char* )come_memdup(self->attribute, "sStoreNode_clone", 15, 854, "char* "), "sStoreNode_clone", 15, 856);
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0, "sStoreNode_clone", 15, 855);
    }
    if(self!=((void*)0)) {
        result->iter_=self->iter_;
    }
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
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLoadNode*)come_increment_ref_count(self, "12var.nc", 707, 863),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 707, 864);
    __right_value0 = (void*)0;
    __dec_obj96=self->name,
    self->name=(char* )come_increment_ref_count(__builtin_string(name,"12var.nc",709), "12var.nc", 709, 866);
    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 709, 865);
        __result_obj__0 = (struct sLoadNode*)come_increment_ref_count(self, "12var.nc", 712, 867);
    come_call_finalizer(sLoadNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12var.nc}", 712, 870);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 712, 871));
    neo_current_frame = fr.prev;
    come_call_finalizer(sLoadNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12var.nc}", 712, 872);
    return __result_obj__0;
}

char*  sLoadNode_kind(struct sLoadNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLoadNode","12var.nc",714))), "12var.nc", 714, 873);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 714, 874));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12var.nc", 714, 875));
    return __result_obj__0;
}

_Bool sLoadNode_terminated(struct sLoadNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadNode_terminated"; neo_current_frame = &fr;
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
    current_stack_frame_struct=info->current_stack_frame_struct;
    if(({(_conditional_value_X0=(current_stack_frame_struct&&((struct sVar* )(__right_value1=map$2char$phsVar$ph_at(info->lv_table->mVars,((char* )(__right_value0=__builtin_string(self->name,"12var.nc",725))),((void*)0),(_Bool)0)))==((void*)0)));    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 725, 876));
    come_call_finalizer(sVar_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 725, 877);
_conditional_value_X0;})) {
        parent_var=get_variable_from_table(info->lv_table->mParent,self->name);
        if(parent_var!=((void*)0)) {
            if(string_operator_not_equals(parent_var->mFunName,info->come_fun->mName)) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 730, 878, "struct CVALUE* "), "12var.nc", 730, 879)), "12var.nc", 730, 880);
                type=parent_var->mType;
                __right_value0 = (void*)0;
                __dec_obj97=come_value->c_value,
                come_value->c_value=(char* )come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var->mCValueName), "12var.nc", 734, 882);
                __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 734, 881);
                __right_value0 = (void*)0;
                __dec_obj98=come_value->type,
                come_value->type=(struct sType* )come_increment_ref_count(sType_clone(type), "12var.nc", 735, 884);
                come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 735, 883);
                come_value->var=parent_var;
                add_come_last_code(info,"%s",come_value->c_value);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "12var.nc", 740, 885));
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 742, 886);
                neo_current_frame = fr.prev;
                return __result_obj__0;
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 744, 887);
            }
        }
    }
    var_=get_variable_from_table(info->lv_table,self->name);
    if(var_==((void*)0)) {
        var_=get_variable_from_table(info->gv_table,self->name);
        if(var_==((void*)0)) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(self->name,"12var.nc",753))))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 753, 888));
            if(fun) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                come_value_73=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 756, 889, "struct CVALUE* "), "12var.nc", 756, 890)), "12var.nc", 756, 891);
                __right_value0 = (void*)0;
                __dec_obj99=come_value_73->c_value,
                come_value_73->c_value=(char* )come_increment_ref_count(xsprintf("%s",fun->mName), "12var.nc", 758, 893);
                __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 758, 892);
                __dec_obj100=come_value_73->type,
                come_value_73->type=(struct sType* )come_increment_ref_count(fun->mLambdaType, "12var.nc", 759, 895);
                come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 759, 894);
                come_value_73->var=((void*)0);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_73, "12var.nc", 762, 896));
                                __result_obj__0 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value_73, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 764, 897);
                neo_current_frame = fr.prev;
                return __result_obj__0;
                come_call_finalizer(CVALUE_finalize, come_value_73, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 788, 898);
            }
            else {
                if(var_==((void*)0)) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    come_value_74=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 770, 899, "struct CVALUE* "), "12var.nc", 770, 900)), "12var.nc", 770, 901);
                    __right_value0 = (void*)0;
                    __dec_obj101=come_value_74->c_value,
                    come_value_74->c_value=(char* )come_increment_ref_count(xsprintf("%s",self->name), "12var.nc", 772, 903);
                    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 772, 902);
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj102=come_value_74->type,
                    come_value_74->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "12var.nc", 773, 904, "struct sType* "), "12var.nc", 773, 905),(char*)come_increment_ref_count(xsprintf("void"), "12var.nc", 773, 906),(_Bool)0,info,(_Bool)0,0), "12var.nc", 773, 908);
                    come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 773, 907);
                    come_value_74->type->mPointerNum=1;
                    come_value_74->var=((void*)0);
                    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_74, "12var.nc", 777, 909));
                    add_come_last_code(info,"%s;\n",come_value_74->c_value);
                                        __result_obj__0 = (_Bool)1;
                    come_call_finalizer(CVALUE_finalize, come_value_74, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 781, 910);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                    come_call_finalizer(CVALUE_finalize, come_value_74, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 787, 911);
                }
                else {
                    err_msg(info,"var not found(%s)(Z) at loading variable",self->name);
                                        neo_current_frame = fr.prev;
                    return (_Bool)1;
                }
            }
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_75=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 791, 912, "struct CVALUE* "), "12var.nc", 791, 913)), "12var.nc", 791, 914);
    __right_value0 = (void*)0;
    __dec_obj103=come_value_75->c_value,
    come_value_75->c_value=(char* )come_increment_ref_count(xsprintf("%s",var_->mCValueName), "12var.nc", 792, 916);
    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 792, 915);
    __right_value0 = (void*)0;
    __dec_obj104=come_value_75->type,
    come_value_75->type=(struct sType* )come_increment_ref_count(sType_clone(var_->mType), "12var.nc", 793, 918);
    come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 793, 917);
    come_value_75->var=var_;
    if(list$1sNode$ph_length(come_value_75->type->mArrayNum)>0) {
        if(info->in_typeof) {
            __right_value0 = (void*)0;
            original_load_var_type=(struct sType* )come_increment_ref_count(sType_clone(come_value_75->type), "12var.nc", 798, 919);
            __right_value0 = (void*)0;
            __dec_obj105=come_value_75->type->mOriginalLoadVarType,
            come_value_75->type->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(original_load_var_type), "12var.nc", 799, 921);
            come_call_finalizer(sType_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 799, 920);
            come_call_finalizer(sType_finalize, original_load_var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 823, 922);
        }
        else if(info->in_refference) {
            __right_value0 = (void*)0;
            original_load_var_type_76=(struct sType* )come_increment_ref_count(sType_clone(come_value_75->type), "12var.nc", 802, 923);
            __dec_obj106=come_value_75->type->mOriginalLoadVarType,
            come_value_75->type->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(original_load_var_type_76, "12var.nc", 803, 925);
            come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 803, 924);
            come_value_75->type->mArrayPointerNum++;
            come_call_finalizer(sType_finalize, original_load_var_type_76, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 823, 926);
        }
        else {
            __right_value0 = (void*)0;
            original_load_var_type_77=(struct sType* )come_increment_ref_count(sType_clone(come_value_75->type), "12var.nc", 809, 927);
            __dec_obj107=come_value_75->type->mOriginalLoadVarType,
            come_value_75->type->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(original_load_var_type_77, "12var.nc", 810, 929);
            come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 810, 928);
            list$1sNode$ph_delete(come_value_75->type->mArrayNum,0,1);
            if(come_value_75->type->mPointerNum>0) {
                come_value_75->type->mPointerNum++;
            }
            else {
                come_value_75->type->mArrayPointerNum++;
            }
            come_call_finalizer(sType_finalize, original_load_var_type_77, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 823, 934);
        }
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_75, "12var.nc", 825, 935));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_75, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 827, 936);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLoadNode_finalize(struct sLoadNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLoadNode_finalize", 2, 868));
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
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
        list$1sNode$ph_reset(self);
    }
    else if(head==0) {
        it=self->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1933, 931);
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
        it_78=self->head;
        i_79=0;
        while(it_78!=((void*)0)) {
            if(i_79==head) {
                self->tail=it_78->prev;
                self->tail->next=((void*)0);
            }
            if(i_79>=head) {
                prev_it_80=it_78;
                it_78=it_78->next;
                i_79++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_80, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1963, 932);
                self->len--;
            }
            else {
                it_78=it_78->next;
                i_79++;
            }
        }
    }
    else {
        it_81=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_82=0;
        while(it_81!=((void*)0)) {
            if(i_82==head) {
                head_prev_it=it_81->prev;
            }
            if(i_82==tail) {
                tail_it=it_81;
            }
            if(i_82>=head&&i_82<tail) {
                prev_it_83=it_81;
                it_81=it_81->next;
                i_82++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_83, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1996, 933);
                self->len--;
            }
            else {
                it_81=it_81->next;
                i_82++;
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

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_reset"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1855, 930);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
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
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 833, 940, "struct sNode");
    _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value2=sLoadNode_initialize((struct sLoadNode* )come_increment_ref_count((struct sLoadNode *)come_calloc(1, sizeof(struct sLoadNode )*(1), "12var.nc", 833, 937, "struct sLoadNode* "), "12var.nc", 833, 938),(char* )come_increment_ref_count(__builtin_string(var_name,"12var.nc",833), "12var.nc", 833, 939),info))), "12var.nc", 833, 941);
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
    node=(struct sNode*)come_increment_ref_count(_inf_value2, "12var.nc", 833, 951);
    come_call_finalizer(sLoadNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 833, 952);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "12var.nc", 835, 953);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 835, 954):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 835, 955):(void*)0);
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
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLoadNode* )come_increment_ref_count((struct sLoadNode *)come_calloc(1, sizeof(struct sLoadNode )*(1), "sLoadNode_clone", 5, 942, "struct sLoadNode* "), "sLoadNode_clone", 5, 943);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj108=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLoadNode_clone", 7, 944, "char* "), "sLoadNode_clone", 7, 946);
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0, "sLoadNode_clone", 7, 945);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj109=result->name,
        result->name=(char* )come_increment_ref_count((char* )come_memdup(self->name, "sLoadNode_clone", 9, 947, "char* "), "sLoadNode_clone", 9, 949);
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "sLoadNode_clone", 9, 948);
    }
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
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sFunLoadNode*)come_increment_ref_count(self, "12var.nc", 842, 956),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 842, 957);
    __right_value0 = (void*)0;
    __dec_obj110=self->name,
    self->name=(char* )come_increment_ref_count(__builtin_string(name,"12var.nc",844), "12var.nc", 844, 959);
    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 844, 958);
        __result_obj__0 = (struct sFunLoadNode*)come_increment_ref_count(self, "12var.nc", 847, 960);
    come_call_finalizer(sFunLoadNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12var.nc}", 847, 963);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 847, 964));
    neo_current_frame = fr.prev;
    come_call_finalizer(sFunLoadNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12var.nc}", 847, 965);
    return __result_obj__0;
}

char*  sFunLoadNode_kind(struct sFunLoadNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunLoadNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sFunLoadNode","12var.nc",849))), "12var.nc", 849, 966);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 849, 967));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12var.nc", 849, 968));
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
    fun=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(self->name,"12var.nc",854))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 854, 969));
    if(fun==((void*)0)) {
        err_msg(info,"fun not found(%s) at loading variable",self->name);
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "12var.nc", 861, 970, "struct CVALUE* "), "12var.nc", 861, 971)), "12var.nc", 861, 972);
        __right_value0 = (void*)0;
        __dec_obj111=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s",fun->mName), "12var.nc", 863, 974);
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 863, 973);
        __dec_obj112=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(fun->mLambdaType, "12var.nc", 864, 976);
        come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 864, 975);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "12var.nc", 867, 977));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 870, 978);
    }
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunLoadNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFunLoadNode_finalize", 2, 961));
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
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
    struct list$1sVar$ph* _o2_saved_4;
    struct sVar*  it  ;
    char*  __dec_obj115  ;
    char*  __dec_obj116  ;
    char*  __dec_obj117  ;
    char*  __dec_obj118  ;
    char*  __dec_obj119  ;
    char*  __dec_obj120  ;
    self=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "12var.nc", 876, 979, "struct sVar* "), "12var.nc", 876, 980);
    self->no_output_come_code=info->no_output_come_code;
    __right_value0 = (void*)0;
    __dec_obj113=self->mName,
    self->mName=(char* )come_increment_ref_count(__builtin_string(name,"12var.nc",880), "12var.nc", 880, 982);
    __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 880, 981);
    __right_value0 = (void*)0;
    __dec_obj114=self->mType,
    self->mType=(struct sType* )come_increment_ref_count(sType_clone(type), "12var.nc", 881, 984);
    come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 881, 983);
    same_name=(_Bool)0;
    for(_o2_saved_4=(struct list$1sVar$ph*)come_increment_ref_count(info->come_fun->mAllVar, "12var.nc", 885, 985),it=list$1sVar$ph_begin(_o2_saved_4)    ;!list$1sVar$ph_end(_o2_saved_4);it=list$1sVar$ph_next(_o2_saved_4)){
        if(string_operator_equals(it->mCValueName,name)) {
            same_name=(_Bool)1;
        }
    }
    if(function_param) {
        __right_value0 = (void*)0;
        __dec_obj115=self->mCValueName,
        self->mCValueName=(char* )come_increment_ref_count(__builtin_string(name,"12var.nc",894), "12var.nc", 894, 987);
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 894, 986);
    }
    else if(type->mRegister) {
        __right_value0 = (void*)0;
        __dec_obj116=self->mCValueName,
        self->mCValueName=(char* )come_increment_ref_count(__builtin_string(name,"12var.nc",897), "12var.nc", 897, 989);
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 897, 988);
    }
    else if(!same_name) {
        __right_value0 = (void*)0;
        __dec_obj117=self->mCValueName,
        self->mCValueName=(char* )come_increment_ref_count(__builtin_string(name,"12var.nc",900), "12var.nc", 900, 991);
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 900, 990);
    }
    else {
        static int n=0;
        __right_value0 = (void*)0;
        __dec_obj118=self->mCValueName,
        self->mCValueName=(char* )come_increment_ref_count(xsprintf("%s_%d",name,n++), "12var.nc", 904, 993);
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 904, 992);
    }
    self->mAllocaValue=(_Bool)0;
    self->mNoFree=(_Bool)0;
    if(info->come_fun) {
        __right_value0 = (void*)0;
        __dec_obj119=self->mFunName,
        self->mFunName=(char* )come_increment_ref_count((char* )come_memdup(info->come_fun->mName, "12var.nc", 910, 994, "char* "), "12var.nc", 910, 996);
        __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 910, 995);
    }
    else {
        __dec_obj120=self->mFunName,
        self->mFunName=((void*)0);
        __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 913, 997);
    }
    if(to_function_table) {
        __right_value0 = (void*)0;
        map$2char$phsVar$ph_insert(info->come_fun->mBlock->mVarTable->mVars,(char* )come_increment_ref_count(__builtin_string(name,"12var.nc",918), "12var.nc", 918, 1037),(struct sVar* )come_increment_ref_count(self, "12var.nc", 918, 1038),(_Bool)0);
    }
    else {
        __right_value0 = (void*)0;
        map$2char$phsVar$ph_insert(info->lv_table->mVars,(char* )come_increment_ref_count(__builtin_string(name,"12var.nc",921), "12var.nc", 921, 1039),(struct sVar* )come_increment_ref_count(self, "12var.nc", 921, 1040),(_Bool)0);
    }
    if(info->come_fun) {
        list$1sVar$ph_add(info->come_fun->mAllVar,(struct sVar* )come_increment_ref_count(self, "12var.nc", 925, 1055));
    }
    come_call_finalizer(sVar_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 929, 1056);
    come_call_finalizer(list$1sVar$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 929, 1057);
    neo_current_frame = fr.prev;
}

static struct sVar*  list$1sVar$ph_begin(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_begin"; neo_current_frame = &fr;
    struct sVar*  result  ;
    struct sVar*  __result_obj__0  ;
    struct sVar*  result_84  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sVar* ));
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
    memset(&result_84,0,sizeof(struct sVar* ));
        __result_obj__0 = result_84;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_end"; neo_current_frame = &fr;
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
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sVar* ));
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
    memset(&result_85,0,sizeof(struct sVar* ));
        __result_obj__0 = result_85;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3347, 998));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3347, 999);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                if(1) {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3363, 1014));
                    self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3364, 1015);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3371, 1016);
                    self->items[it]=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3372, 1017);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe2(self);
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(1) {
                self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3394, 1018);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3400, 1019);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(it2=list$1char$ph_begin(self->key_list)    ;!list$1char$ph_end(self->key_list);it2=list$1char$ph_next(self->key_list)){
        if((!by_pointer&&string_equals(it2,key))||(by_pointer&&it2==key)) {
            same_key_exist=(_Bool)1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3420, 1034));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3423, 1035));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3423, 1036);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_rehash"; neo_current_frame = &fr;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct sVar**  items  ;
    _Bool* item_existance;
    int len;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    unsigned int hash;
    int n;
    struct sVar*  default_value_88  ;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "/usr/local/include/neo-c.h", 3271, 1000, "char** "))), "/usr/local/include/neo-c.h", 3271, 1001);
    __right_value0 = (void*)0;
    items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(size)), "/usr/local/include/neo-c.h", 3272, 1002, "struct sVar** "))), "/usr/local/include/neo-c.h", 3272, 1003);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 3273, 1004, "_Bool*"))), "/usr/local/include/neo-c.h", 3273, 1005);
    len=0;
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar* ));
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3280, 1006),(_Bool)0), "/usr/local/include/neo-c.h", 3280, 1007);
        hash=string_get_hash_key(((char* )it))%size;
        n=hash;
        while((_Bool)1) {
            if(item_existance[n]) {
                n++;
                if(n>=size) {
                    n=0;
                }
                else if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe2(self);
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                memset(&default_value_88,0,sizeof(struct sVar* ));
                __right_value0 = (void*)0;
                items[n]=((struct sVar* )(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value_88, "/usr/local/include/neo-c.h", 3303, 1008),(_Bool)0)));
                len++;
                come_call_finalizer(sVar_finalize, default_value_88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3306, 1009);
                break;
                come_call_finalizer(sVar_finalize, default_value_88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3308, 1010);
            }
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3311, 1011);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3311, 1012);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3312, 1013));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_86  ;
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
    memset(&result_86,0,sizeof(char* ));
        __result_obj__0 = result_86;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_87  ;
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
    memset(&result_87,0,sizeof(char* ));
        __result_obj__0 = result_87;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj121  ;
    struct list_item$1char$ph* litem_89;
    char*  __dec_obj122  ;
    struct list_item$1char$ph* litem_90;
    char*  __dec_obj123  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1614, 1020));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1618, 1021, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1618, 1022);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj121=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1622, 1024);
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1622, 1023);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_89=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1628, 1025, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1628, 1026);
        litem_89->prev=self->head;
        litem_89->next=((void*)0);
        __dec_obj122=litem_89->item,
        litem_89->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1632, 1028);
        __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1632, 1027);
        self->tail=litem_89;
        self->head->next=litem_89;
    }
    else {
        __right_value0 = (void*)0;
        litem_90=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1638, 1029, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1638, 1030);
        litem_90->prev=self->tail;
        litem_90->next=((void*)0);
        __dec_obj123=litem_90->item,
        litem_90->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1642, 1032);
        __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1642, 1031);
        self->tail->next=litem_90;
        self->tail=litem_90;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1650, 1033));
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
    struct list_item$1sVar$ph* litem_91;
    struct sVar*  __dec_obj125  ;
    struct list_item$1sVar$ph* litem_92;
    struct sVar*  __dec_obj126  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1530, 1041);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 1533, 1042, "struct list_item$1sVar$ph*"))), "/usr/local/include/neo-c.h", 1533, 1043);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj124=litem->item,
        litem->item=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1537, 1045);
        come_call_finalizer(sVar_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1537, 1044);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_91=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 1543, 1046, "struct list_item$1sVar$ph*"))), "/usr/local/include/neo-c.h", 1543, 1047);
        litem_91->prev=self->head;
        litem_91->next=((void*)0);
        __dec_obj125=litem_91->item,
        litem_91->item=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1547, 1049);
        come_call_finalizer(sVar_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1547, 1048);
        self->tail=litem_91;
        self->head->next=litem_91;
    }
    else {
        __right_value0 = (void*)0;
        litem_92=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 1553, 1050, "struct list_item$1sVar$ph*"))), "/usr/local/include/neo-c.h", 1553, 1051);
        litem_92->prev=self->tail;
        litem_92->next=((void*)0);
        __dec_obj126=litem_92->item,
        litem_92->item=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1557, 1053);
        come_call_finalizer(sVar_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1557, 1052);
        self->tail->next=litem_92;
        self->tail=litem_92;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1565, 1054);
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
    self=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "12var.nc", 931, 1058, "struct sVar* "), "12var.nc", 931, 1059);
    __right_value0 = (void*)0;
    __dec_obj127=self->mName,
    self->mName=(char* )come_increment_ref_count(__builtin_string(name,"12var.nc",933), "12var.nc", 933, 1061);
    __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 933, 1060);
    __right_value0 = (void*)0;
    __dec_obj128=self->mType,
    self->mType=(struct sType* )come_increment_ref_count(sType_clone(type), "12var.nc", 934, 1063);
    come_call_finalizer(sType_finalize, __dec_obj128,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 934, 1062);
    self->mGlobal=(_Bool)1;
    __right_value0 = (void*)0;
    __dec_obj129=self->mCValueName,
    self->mCValueName=(char* )come_increment_ref_count(__builtin_string(name,"12var.nc",938), "12var.nc", 938, 1065);
    __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 938, 1064);
    self->mAllocaValue=(_Bool)0;
    self->mNoFree=(_Bool)0;
    __right_value0 = (void*)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char* )come_increment_ref_count(__builtin_string(name,"12var.nc",943), "12var.nc", 943, 1066),(struct sVar* )come_increment_ref_count(self, "12var.nc", 943, 1067),(_Bool)0);
    come_call_finalizer(sVar_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 946, 1068);
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
    self=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "12var.nc", 948, 1069, "struct sVar* "), "12var.nc", 948, 1070);
    __right_value0 = (void*)0;
    __dec_obj130=self->mName,
    self->mName=(char* )come_increment_ref_count(__builtin_string(name,"12var.nc",950), "12var.nc", 950, 1072);
    __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 950, 1071);
    __right_value0 = (void*)0;
    __dec_obj131=self->mType,
    self->mType=(struct sType* )come_increment_ref_count(sType_clone(type), "12var.nc", 951, 1074);
    come_call_finalizer(sType_finalize, __dec_obj131,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 951, 1073);
    self->mGlobal=(_Bool)1;
    __right_value0 = (void*)0;
    __dec_obj132=self->mCValueName,
    self->mCValueName=(char* )come_increment_ref_count(__builtin_string(c_value,"12var.nc",955), "12var.nc", 955, 1076);
    __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 955, 1075);
    self->mAllocaValue=(_Bool)0;
    self->mNoFree=(_Bool)0;
    __right_value0 = (void*)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char* )come_increment_ref_count(__builtin_string(name,"12var.nc",960), "12var.nc", 960, 1077),(struct sVar* )come_increment_ref_count(self, "12var.nc", 960, 1078),(_Bool)0);
    come_call_finalizer(sVar_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 963, 1079);
    neo_current_frame = fr.prev;
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
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var2
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    struct tuple2$2sType$phchar$ph* multiple_assign_var3
;    struct sType*  type_93  =0;
    char*  name_94  =0;
    _Bool no_comma;
    _Bool no_output_come_code_95;
    struct sNode* exp;
    _Bool attr_define;
    char* p_96;
    int sline_97;
    _Bool no_output_come_code_98;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var4
;    struct sType*  type_99  =0;
    char*  name_100  =0;
    _Bool err_101=0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sFun*  fun  ;
    char*  buf2  ;
    struct list$1char$ph* multiple_assign;
    struct list$1char$ph* __dec_obj133;
    char*  buf3  ;
    _Bool no_comma_102;
    struct sNode* right_value;
    struct sNode* __dec_obj134;
    struct sNode* _inf_value3;
    struct sStoreNode* _inf_obj_value3;
    void* __right_value3 = (void*)0;
    struct sNode* node;
    struct sNode* __result_obj__0;
    struct sNode* _inf_value4;
    struct sNewChannel* _inf_obj_value4;
    struct sNode* node_103;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare_104;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var5
;    struct sType*  base_type  =0;
    char*  name_105  =0;
    _Bool err_106=0;
    struct tuple2$2sType$phchar$ph* multiple_assign_var6
;    struct sType*  type2  =0;
    char*  var_name  =0;
    _Bool no_comma_107;
    struct sNode* exp_108;
    _Bool no_comma_111;
    struct sNode* exp_112;
    struct tuple2$2sType$phchar$ph* multiple_assign_var7
;    struct sType*  type2_113  =0;
    char*  var_name_114  =0;
    _Bool no_comma_115;
    struct sNode* exp_116;
    _Bool no_comma_117;
    struct sNode* exp_118;
    struct sNode* right_node;
    char*  var_name2  ;
    struct sNode* _inf_value5;
    struct sStoreNode* _inf_obj_value5;
    struct sNode* node_119;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var8
;    struct sType*  type_120  =0;
    char*  name_121  =0;
    _Bool err_122=0;
    char*  __dec_obj142  ;
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
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var9
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
    sline_real=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag=is_type_name(buf,info);
    multiple_declare=(_Bool)0;
    if(is_type_name_flag&&!info->in_offsetof) {
        no_output_come_code=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        p=info->p->p;
        sline=info->sline;
        info->p->p=head;
        info->sline=head_sline;
        if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
            skip_spaces_and_lf(info);
            multiple_assign_var2=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type=(struct sType* )come_increment_ref_count(multiple_assign_var2->v1, "12var.nc", 984, 1080);
            name=(char* )come_increment_ref_count(multiple_assign_var2->v2, "12var.nc", 984, 1081);
            err=multiple_assign_var2->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 984, 1084);
            skip_spaces_and_lf(info);
            if(err) {
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                multiple_assign_var3=((struct tuple2$2sType$phchar$ph*)(__right_value0=parse_variable_name_on_multiple_declare(type,(_Bool)1,info)));
                type_93=(struct sType* )come_increment_ref_count(multiple_assign_var3->v1, "12var.nc", 989, 1085);
                name_94=(char* )come_increment_ref_count(multiple_assign_var3->v2, "12var.nc", 989, 1086);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 989, 1089);
                if(span$1char$p_operator_derefference(info->p)==61&&*(info->p->p+1)!=61&&*(info->p->p+1)!=62&&!info->no_assign) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    if(span$1char$p_operator_derefference(info->p)==123) {
                        __right_value0 = (void*)0;
                        ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 996, 1090));
                    }
                    else {
                        no_comma=info->no_comma;
                        no_output_come_code_95=info->no_output_come_code;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        __right_value0 = (void*)0;
                        exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "12var.nc", 1005, 1091);
                        info->no_comma=no_comma;
                        info->no_output_come_code=no_output_come_code_95;
                        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1010, 1092):(void*)0);
                    }
                }
                if(!is_type_name(name_94,info)&&span$1char$p_operator_derefference(info->p)==44) {
                    multiple_declare=(_Bool)1;
                }
                come_call_finalizer(sType_finalize, type_93, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1016, 1093);
                (name_94 = come_decrement_ref_count(name_94, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1016, 1094));
            }
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1018, 1095);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1018, 1096));
        }
        info->p->p=p;
        info->sline=sline;
        info->no_output_come_code=no_output_come_code;
    }
    attr_define=(_Bool)0;
    if(is_type_name_flag&&info->defining_class&&!info->in_offsetof) {
        p_96=info->p->p;
        sline_97=info->sline;
        no_output_come_code_98=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        info->p->p=head;
        info->sline=head_sline;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        multiple_assign_var4=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_99=(struct sType* )come_increment_ref_count(multiple_assign_var4->v1, "12var.nc", 1034, 1097);
        name_100=(char* )come_increment_ref_count(multiple_assign_var4->v2, "12var.nc", 1034, 1098);
        err_101=multiple_assign_var4->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1034, 1099);
        skip_spaces_and_lf(info);
        if(err_101&&parsecmp("self",info)) {
            attr_define=(_Bool)1;
        }
        info->p->p=p_96;
        info->sline=sline_97;
        info->no_output_come_code=no_output_come_code_98;
        come_call_finalizer(sType_finalize, type_99, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1046, 1100);
        (name_100 = come_decrement_ref_count(name_100, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1046, 1101));
    }
    skip_spaces_and_lf(info);
    __right_value0 = (void*)0;
    fun=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(buf,"12var.nc",1047))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 1047, 1102));
    if((!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")||charp_operator_equals(buf,"__auto_type")) {
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        buf2=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "12var.nc", 1052, 1103);
        skip_spaces_and_lf(info);
        multiple_assign=((void*)0);
        if(span$1char$p_operator_derefference(info->p)==44) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj133=multiple_assign,
            multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "12var.nc", 1058, 1104, "struct list$1char$ph*"), "12var.nc", 1058, 1105)), "12var.nc", 1058, 1107);
            come_call_finalizer(list$1char$ph_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc", 1058, 1106);
            __right_value0 = (void*)0;
            list$1char$ph_push_back(multiple_assign,(char* )come_increment_ref_count((char* )come_memdup(buf2, "12var.nc", 1059, 1108, "char* "), "12var.nc", 1059, 1109));
            while(span$1char$p_operator_derefference(info->p)==44) {
                info->p->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                buf3=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "12var.nc", 1065, 1110);
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                list$1char$ph_push_back(multiple_assign,(char* )come_increment_ref_count((char* )come_memdup(buf3, "12var.nc", 1068, 1111, "char* "), "12var.nc", 1068, 1112));
                (buf3 = come_decrement_ref_count(buf3, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1070, 1113));
            }
        }
        skip_spaces_and_lf(info);
        if(span$1char$p_operator_derefference(info->p)==61&&*(info->p->p+1)!=61&&*(info->p->p+1)!=62&&!info->no_assign) {
            info->p->p++;
            skip_spaces_and_lf(info);
            no_comma_102=info->no_comma;
            info->no_comma=(_Bool)1;
            __right_value0 = (void*)0;
            right_value=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "12var.nc", 1079, 1114);
            info->no_comma=no_comma_102;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __dec_obj134=right_value,
            right_value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value, "12var.nc", 1083, 1115),info), "12var.nc", 1083, 1117);
            (__dec_obj134 ? __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0, (void*)0, "12var.nc", 1083, 1116) :0);
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1086, 1122, "struct sNode");
            _inf_obj_value3=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value2=sStoreNode_initialize((struct sStoreNode* )come_increment_ref_count((struct sStoreNode *)come_calloc(1, sizeof(struct sStoreNode )*(1), "12var.nc", 1086, 1118, "struct sStoreNode* "), "12var.nc", 1086, 1119),(char* )come_increment_ref_count(__builtin_string(buf2,"12var.nc",1086), "12var.nc", 1086, 1120),multiple_assign,((void*)0),((void*)0),(_Bool)1,right_value,info,(char*)come_increment_ref_count(xsprintf(""), "12var.nc", 1086, 1121),(_Bool)0))), "12var.nc", 1086, 1123);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value3, "12var.nc", 1086, 1124);
            come_call_finalizer(sStoreNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1086, 1125);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "12var.nc", 1088, 1126);
            ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1088, 1127):(void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1088, 1128):(void*)0);
            (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1088, 1129));
            come_call_finalizer(list$1char$ph$p_finalize, multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1088, 1130);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1088, 1131):(void*)0);
            return __result_obj__0;
            ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1094, 1132):(void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1094, 1133):(void*)0);
        }
        else {
            err_msg(info,"var requires a right value(%c)",span$1char$p_operator_derefference(info->p));
            exit(1);
        }
        (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1339, 1134));
        come_call_finalizer(list$1char$ph$p_finalize, multiple_assign, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1339, 1135);
    }
    else if(gComePthread&&charp_operator_equals(buf,"__channel__")) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1096, 1138, "struct sNode");
        _inf_obj_value4=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value1=sNewChannel_initialize((struct sNewChannel* )come_increment_ref_count((struct sNewChannel *)come_calloc(1, sizeof(struct sNewChannel )*(1), "12var.nc", 1096, 1136, "struct sNewChannel* "), "12var.nc", 1096, 1137),info))), "12var.nc", 1096, 1139);
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
        node_103=(struct sNode*)come_increment_ref_count(_inf_value4, "12var.nc", 1096, 1146);
        come_call_finalizer(sNewChannel_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1096, 1147);
        info->sline_real=sline_real;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_103, "12var.nc", 1098, 1148);
        ((node_103) ? node_103 = come_decrement_ref_count(node_103, ((struct sNode*)node_103)->finalize, ((struct sNode*)node_103)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1098, 1149):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1098, 1150):(void*)0);
        return __result_obj__0;
        ((node_103) ? node_103 = come_decrement_ref_count(node_103, ((struct sNode*)node_103)->finalize, ((struct sNode*)node_103)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1339, 1151):(void*)0);
    }
    else if(multiple_declare) {
        info->p->p=head;
        info->sline=head_sline;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        multiple_declare_104=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "12var.nc", 1104, 1152, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"), "12var.nc", 1104, 1153)), "12var.nc", 1104, 1154);
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        multiple_assign_var5=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type=(struct sType* )come_increment_ref_count(multiple_assign_var5->v1, "12var.nc", 1107, 1155);
        name_105=(char* )come_increment_ref_count(multiple_assign_var5->v2, "12var.nc", 1107, 1156);
        err_106=multiple_assign_var5->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1107, 1157);
        skip_spaces_and_lf(info);
        if(!err_106) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value0=parse_variable_name_on_multiple_declare(base_type,(_Bool)1,info)));
        type2=(struct sType* )come_increment_ref_count(multiple_assign_var6->v1, "12var.nc", 1116, 1158);
        var_name=(char* )come_increment_ref_count(multiple_assign_var6->v2, "12var.nc", 1116, 1159);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1116, 1160);
        skip_spaces_and_lf(info);
        if(span$1char$p_operator_derefference(info->p)==61&&*(info->p->p+1)!=61) {
            info->p->p++;
            skip_spaces_and_lf(info);
            if(type2->mClass->mStruct&&list$1sNode$ph_length(type2->mArrayNum)==0) {
                info->array_initializer=(_Bool)1;
                no_comma_107=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                exp_108=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "12var.nc", 1127, 1161);
                info->no_comma=no_comma_107;
                info->array_initializer=(_Bool)0;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_104,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "12var.nc", 1131, 1176, "struct tuple3$3sType$phchar$phsNode$ph"), "12var.nc", 1131, 1189),(struct sType* )come_increment_ref_count(type2, "12var.nc", 1131, 1190),(char* )come_increment_ref_count(var_name, "12var.nc", 1131, 1191),(struct sNode*)come_increment_ref_count(exp_108, "12var.nc", 1131, 1192)), "12var.nc", 1131, 1193));
                ((exp_108) ? exp_108 = come_decrement_ref_count(exp_108, ((struct sNode*)exp_108)->finalize, ((struct sNode*)exp_108)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1143, 1194):(void*)0);
            }
            else {
                info->array_initializer=(_Bool)1;
                no_comma_111=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                exp_112=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "12var.nc", 1137, 1195);
                info->no_comma=no_comma_111;
                info->array_initializer=(_Bool)0;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_104,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "12var.nc", 1141, 1196, "struct tuple3$3sType$phchar$phsNode$ph"), "12var.nc", 1141, 1197),(struct sType* )come_increment_ref_count(type2, "12var.nc", 1141, 1198),(char* )come_increment_ref_count(var_name, "12var.nc", 1141, 1199),(struct sNode*)come_increment_ref_count(exp_112, "12var.nc", 1141, 1200)), "12var.nc", 1141, 1201));
                ((exp_112) ? exp_112 = come_decrement_ref_count(exp_112, ((struct sNode*)exp_112)->finalize, ((struct sNode*)exp_112)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1143, 1202):(void*)0);
            }
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_104,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "12var.nc", 1145, 1203, "struct tuple3$3sType$phchar$phsNode$ph"), "12var.nc", 1145, 1204),(struct sType* )come_increment_ref_count(type2, "12var.nc", 1145, 1205),(char* )come_increment_ref_count(var_name, "12var.nc", 1145, 1206),(struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "12var.nc", 1145, 1207)), "12var.nc", 1145, 1208));
        }
        while(span$1char$p_operator_derefference(info->p)==44) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            multiple_assign_var7=((struct tuple2$2sType$phchar$ph*)(__right_value0=parse_variable_name_on_multiple_declare(base_type,(_Bool)0,info)));
            type2_113=(struct sType* )come_increment_ref_count(multiple_assign_var7->v1, "12var.nc", 1152, 1209);
            var_name_114=(char* )come_increment_ref_count(multiple_assign_var7->v2, "12var.nc", 1152, 1210);
            come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1152, 1211);
            if(span$1char$p_operator_derefference(info->p)==61&&*(info->p->p+1)!=61) {
                info->p->p++;
                skip_spaces_and_lf(info);
                if(type2_113->mClass->mStruct&&list$1sNode$ph_length(type2_113->mArrayNum)==0) {
                    info->array_initializer=(_Bool)1;
                    no_comma_115=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __right_value0 = (void*)0;
                    exp_116=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "12var.nc", 1162, 1212);
                    info->no_comma=no_comma_115;
                    info->array_initializer=(_Bool)0;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_104,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "12var.nc", 1166, 1213, "struct tuple3$3sType$phchar$phsNode$ph"), "12var.nc", 1166, 1214),(struct sType* )come_increment_ref_count(type2_113, "12var.nc", 1166, 1215),(char* )come_increment_ref_count(var_name_114, "12var.nc", 1166, 1216),(struct sNode*)come_increment_ref_count(exp_116, "12var.nc", 1166, 1217)), "12var.nc", 1166, 1218));
                    ((exp_116) ? exp_116 = come_decrement_ref_count(exp_116, ((struct sNode*)exp_116)->finalize, ((struct sNode*)exp_116)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1180, 1219):(void*)0);
                }
                else {
                    no_comma_117=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    __right_value0 = (void*)0;
                    exp_118=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "12var.nc", 1173, 1220);
                    info->no_comma=no_comma_117;
                    info->array_initializer=(_Bool)0;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_104,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "12var.nc", 1178, 1221, "struct tuple3$3sType$phchar$phsNode$ph"), "12var.nc", 1178, 1222),(struct sType* )come_increment_ref_count(type2_113, "12var.nc", 1178, 1223),(char* )come_increment_ref_count(var_name_114, "12var.nc", 1178, 1224),(struct sNode*)come_increment_ref_count(exp_118, "12var.nc", 1178, 1225)), "12var.nc", 1178, 1226));
                    ((exp_118) ? exp_118 = come_decrement_ref_count(exp_118, ((struct sNode*)exp_118)->finalize, ((struct sNode*)exp_118)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1180, 1227):(void*)0);
                }
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_104,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "12var.nc", 1182, 1228, "struct tuple3$3sType$phchar$phsNode$ph"), "12var.nc", 1182, 1229),(struct sType* )come_increment_ref_count(type2_113, "12var.nc", 1182, 1230),(char* )come_increment_ref_count(var_name_114, "12var.nc", 1182, 1231),(struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "12var.nc", 1182, 1232)), "12var.nc", 1182, 1233));
            }
            come_call_finalizer(sType_finalize, type2_113, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1186, 1234);
            (var_name_114 = come_decrement_ref_count(var_name_114, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1186, 1235));
        }
        right_node=((void*)0);
        __right_value0 = (void*)0;
        var_name2=(char* )come_increment_ref_count(__builtin_string("","12var.nc",1187), "12var.nc", 1187, 1236);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1189, 1241, "struct sNode");
        _inf_obj_value5=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value2=sStoreNode_initialize((struct sStoreNode* )come_increment_ref_count((struct sStoreNode *)come_calloc(1, sizeof(struct sStoreNode )*(1), "12var.nc", 1189, 1237, "struct sStoreNode* "), "12var.nc", 1189, 1238),(char* )come_increment_ref_count(__builtin_string(buf,"12var.nc",1189), "12var.nc", 1189, 1239),((void*)0),multiple_declare_104,base_type,(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""), "12var.nc", 1189, 1240),(_Bool)0))), "12var.nc", 1189, 1242);
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
        node_119=(struct sNode*)come_increment_ref_count(_inf_value5, "12var.nc", 1189, 1243);
        come_call_finalizer(sStoreNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1189, 1244);
        info->sline_real=sline_real;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_119, "12var.nc", 1191, 1245);
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare_104, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1191, 1246);
        come_call_finalizer(sType_finalize, base_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1191, 1247);
        (name_105 = come_decrement_ref_count(name_105, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1191, 1248));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1191, 1249);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1191, 1250));
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1191, 1251):(void*)0);
        (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1191, 1252));
        ((node_119) ? node_119 = come_decrement_ref_count(node_119, ((struct sNode*)node_119)->finalize, ((struct sNode*)node_119)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1191, 1253):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1191, 1254):(void*)0);
        return __result_obj__0;
        come_call_finalizer(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, multiple_declare_104, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1339, 1255);
        come_call_finalizer(sType_finalize, base_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1339, 1256);
        (name_105 = come_decrement_ref_count(name_105, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1339, 1257));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1339, 1258);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1339, 1259));
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1339, 1260):(void*)0);
        (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1339, 1261));
        ((node_119) ? node_119 = come_decrement_ref_count(node_119, ((struct sNode*)node_119)->finalize, ((struct sNode*)node_119)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1339, 1262):(void*)0);
    }
    else if(attr_define) {
        info->p->p=head;
        info->sline=head_sline;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        multiple_assign_var8=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_120=(struct sType* )come_increment_ref_count(multiple_assign_var8->v1, "12var.nc", 1199, 1263);
        name_121=(char* )come_increment_ref_count(multiple_assign_var8->v2, "12var.nc", 1199, 1264);
        err_122=multiple_assign_var8->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1199, 1265);
        skip_spaces_and_lf(info);
        if(!err_122) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p->p+=strlen("self.");
        __right_value0 = (void*)0;
        __dec_obj142=name_121,
        name_121=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "12var.nc", 1209, 1267);
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 1209, 1266);
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsType$ph$ph_add(info->defining_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "12var.nc", 1212, 1284, "struct tuple2$2char$phsType$ph"), "12var.nc", 1212, 1294),(char* )come_increment_ref_count(name_121, "12var.nc", 1212, 1295),(struct sType* )come_increment_ref_count(type_120, "12var.nc", 1212, 1296)), "12var.nc", 1212, 1297));
        if(span$1char$p_operator_derefference(info->p)==61&&*(info->p->p+1)!=61&&*(info->p->p+1)!=62) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1219, 1301, "struct sNode");
            _inf_obj_value6=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value2=sLoadNode_initialize((struct sLoadNode* )come_increment_ref_count((struct sLoadNode *)come_calloc(1, sizeof(struct sLoadNode )*(1), "12var.nc", 1219, 1298, "struct sLoadNode* "), "12var.nc", 1219, 1299),(char* )come_increment_ref_count(__builtin_string("self","12var.nc",1219), "12var.nc", 1219, 1300),info))), "12var.nc", 1219, 1302);
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
            self_node=(struct sNode*)come_increment_ref_count(_inf_value6, "12var.nc", 1219, 1303);
            come_call_finalizer(sLoadNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1219, 1304);
            __right_value0 = (void*)0;
            right_node_125=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "12var.nc", 1221, 1305);
            __right_value0 = (void*)0;
            node_126=(struct sNode*)come_increment_ref_count(store_field((struct sNode*)come_increment_ref_count(self_node, "12var.nc", 1223, 1306),(struct sNode*)come_increment_ref_count(right_node_125, "12var.nc", 1223, 1307),(char* )come_increment_ref_count(name_121, "12var.nc", 1223, 1308),info), "12var.nc", 1223, 1309);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_126, "12var.nc", 1225, 1310);
            ((self_node) ? self_node = come_decrement_ref_count(self_node, ((struct sNode*)self_node)->finalize, ((struct sNode*)self_node)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1225, 1311):(void*)0);
            ((right_node_125) ? right_node_125 = come_decrement_ref_count(right_node_125, ((struct sNode*)right_node_125)->finalize, ((struct sNode*)right_node_125)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1225, 1312):(void*)0);
            ((node_126) ? node_126 = come_decrement_ref_count(node_126, ((struct sNode*)node_126)->finalize, ((struct sNode*)node_126)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1225, 1313):(void*)0);
            come_call_finalizer(sType_finalize, type_120, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1225, 1314);
            (name_121 = come_decrement_ref_count(name_121, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1225, 1315));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1225, 1316):(void*)0);
            return __result_obj__0;
            ((self_node) ? self_node = come_decrement_ref_count(self_node, ((struct sNode*)self_node)->finalize, ((struct sNode*)self_node)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1231, 1317):(void*)0);
            ((right_node_125) ? right_node_125 = come_decrement_ref_count(right_node_125, ((struct sNode*)right_node_125)->finalize, ((struct sNode*)right_node_125)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1231, 1318):(void*)0);
            ((node_126) ? node_126 = come_decrement_ref_count(node_126, ((struct sNode*)node_126)->finalize, ((struct sNode*)node_126)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1231, 1319):(void*)0);
        }
        else {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_null_node(info))), "12var.nc", 1229, 1320);
            come_call_finalizer(sType_finalize, type_120, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1229, 1321);
            (name_121 = come_decrement_ref_count(name_121, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1229, 1322));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "12var.nc", 1229, 1323):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1229, 1324):(void*)0);
            return __result_obj__0;
        }
        come_call_finalizer(sType_finalize, type_120, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1339, 1325);
        (name_121 = come_decrement_ref_count(name_121, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1339, 1326));
    }
    else if(!is_type_name_flag&&span$1char$p_operator_derefference(info->p)==61&&*(info->p->p+1)!=61&&*(info->p->p+1)!=62&&!info->no_assign) {
        info->p->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        right_value_127=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "12var.nc", 1236, 1327);
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __dec_obj148=right_value_127,
        right_value_127=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_127, "12var.nc", 1239, 1328),info), "12var.nc", 1239, 1330);
        (__dec_obj148 ? __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0, (void*)0, "12var.nc", 1239, 1329) :0);
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1243, 1335, "struct sNode");
        _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value2=sStoreNode_initialize((struct sStoreNode* )come_increment_ref_count((struct sStoreNode *)come_calloc(1, sizeof(struct sStoreNode )*(1), "12var.nc", 1243, 1331, "struct sStoreNode* "), "12var.nc", 1243, 1332),(char* )come_increment_ref_count(__builtin_string(buf,"12var.nc",1243), "12var.nc", 1243, 1333),((void*)0),((void*)0),((void*)0),(_Bool)0,right_value_127,info,(char*)come_increment_ref_count(xsprintf(""), "12var.nc", 1243, 1334),(_Bool)0))), "12var.nc", 1243, 1336);
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
        node_128=(struct sNode*)come_increment_ref_count(_inf_value7, "12var.nc", 1243, 1337);
        come_call_finalizer(sStoreNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1243, 1338);
        info->sline_real=sline_real;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_128, "12var.nc", 1245, 1339);
        ((right_value_127) ? right_value_127 = come_decrement_ref_count(right_value_127, ((struct sNode*)right_value_127)->finalize, ((struct sNode*)right_value_127)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1245, 1340):(void*)0);
        ((node_128) ? node_128 = come_decrement_ref_count(node_128, ((struct sNode*)node_128)->finalize, ((struct sNode*)node_128)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1245, 1341):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1245, 1342):(void*)0);
        return __result_obj__0;
        ((right_value_127) ? right_value_127 = come_decrement_ref_count(right_value_127, ((struct sNode*)right_value_127)->finalize, ((struct sNode*)right_value_127)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1339, 1343):(void*)0);
        ((node_128) ? node_128 = come_decrement_ref_count(node_128, ((struct sNode*)node_128)->finalize, ((struct sNode*)node_128)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1339, 1344):(void*)0);
    }
    else if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X0=(!is_type_name_flag||((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(buf,"12var.nc",1247))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12var.nc", 1247, 1345));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1247, 1346);
_conditional_value_X0;})) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1248, 1350, "struct sNode");
        _inf_obj_value8=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value2=sLoadNode_initialize((struct sLoadNode* )come_increment_ref_count((struct sLoadNode *)come_calloc(1, sizeof(struct sLoadNode )*(1), "12var.nc", 1248, 1347, "struct sLoadNode* "), "12var.nc", 1248, 1348),(char* )come_increment_ref_count(__builtin_string(buf,"12var.nc",1248), "12var.nc", 1248, 1349),info))), "12var.nc", 1248, 1351);
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
        node_129=(struct sNode*)come_increment_ref_count(_inf_value8, "12var.nc", 1248, 1352);
        come_call_finalizer(sLoadNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1248, 1353);
        __right_value0 = (void*)0;
        __dec_obj149=node_129,
        node_129=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_129, "12var.nc", 1250, 1354),info), "12var.nc", 1250, 1356);
        (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0, (void*)0, "12var.nc", 1250, 1355) :0);
        info->sline_real=sline_real;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_129, "12var.nc", 1254, 1357);
        ((node_129) ? node_129 = come_decrement_ref_count(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1254, 1358):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1254, 1359):(void*)0);
        return __result_obj__0;
        ((node_129) ? node_129 = come_decrement_ref_count(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1339, 1360):(void*)0);
    }
    else if(!is_type_name_flag) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1257, 1364, "struct sNode");
        _inf_obj_value9=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value2=sLoadNode_initialize((struct sLoadNode* )come_increment_ref_count((struct sLoadNode *)come_calloc(1, sizeof(struct sLoadNode )*(1), "12var.nc", 1257, 1361, "struct sLoadNode* "), "12var.nc", 1257, 1362),(char* )come_increment_ref_count(__builtin_string(buf,"12var.nc",1257), "12var.nc", 1257, 1363),info))), "12var.nc", 1257, 1365);
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
        node_130=(struct sNode*)come_increment_ref_count(_inf_value9, "12var.nc", 1257, 1366);
        come_call_finalizer(sLoadNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1257, 1367);
        __right_value0 = (void*)0;
        __dec_obj150=node_130,
        node_130=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_130, "12var.nc", 1259, 1368),info), "12var.nc", 1259, 1370);
        (__dec_obj150 ? __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0, (void*)0, "12var.nc", 1259, 1369) :0);
        info->sline_real=sline_real;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_130, "12var.nc", 1262, 1371);
        ((node_130) ? node_130 = come_decrement_ref_count(node_130, ((struct sNode*)node_130)->finalize, ((struct sNode*)node_130)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1262, 1372):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1262, 1373):(void*)0);
        return __result_obj__0;
        ((node_130) ? node_130 = come_decrement_ref_count(node_130, ((struct sNode*)node_130)->finalize, ((struct sNode*)node_130)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1339, 1374):(void*)0);
    }
    else {
        info->p->p=head;
        info->sline=head_sline;
        if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
            __right_value0 = (void*)0;
            __dec_obj151=word,
            word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "12var.nc", 1271, 1376);
            __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 1271, 1375);
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj152=word,
            word=(char* )come_increment_ref_count(__builtin_string("","12var.nc",1274), "12var.nc", 1274, 1378);
            __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0, "12var.nc", 1274, 1377);
        }
        is_type_name_flag_131=is_type_name(word,info);
        info->p->p=head;
        info->sline=head_sline;
        if(is_type_name_flag_131) {
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            multiple_assign_var9=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_132=(struct sType* )come_increment_ref_count(multiple_assign_var9->v1, "12var.nc", 1284, 1379);
            name_133=(char* )come_increment_ref_count(multiple_assign_var9->v2, "12var.nc", 1284, 1380);
            err_134=multiple_assign_var9->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1284, 1381);
            skip_spaces_and_lf(info);
            if(!err_134) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==61&&*(info->p->p+1)!=61&&*(info->p->p+1)!=62&&info->no_assign) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1294, 1385, "struct sNode");
                _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value1=sLoadNode_initialize((struct sLoadNode* )come_increment_ref_count((struct sLoadNode *)come_calloc(1, sizeof(struct sLoadNode )*(1), "12var.nc", 1294, 1382, "struct sLoadNode* "), "12var.nc", 1294, 1383),(char* )come_increment_ref_count(name_133, "12var.nc", 1294, 1384),info))), "12var.nc", 1294, 1386);
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
                node_135=(struct sNode*)come_increment_ref_count(_inf_value10, "12var.nc", 1294, 1387);
                come_call_finalizer(sLoadNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1294, 1388);
                info->sline_real=sline_real;
                                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_135, "12var.nc", 1297, 1389);
                ((node_135) ? node_135 = come_decrement_ref_count(node_135, ((struct sNode*)node_135)->finalize, ((struct sNode*)node_135)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1297, 1390):(void*)0);
                come_call_finalizer(sType_finalize, type_132, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1297, 1391);
                (name_133 = come_decrement_ref_count(name_133, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1297, 1392));
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1297, 1393));
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1297, 1394):(void*)0);
                return __result_obj__0;
                ((node_135) ? node_135 = come_decrement_ref_count(node_135, ((struct sNode*)node_135)->finalize, ((struct sNode*)node_135)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1336, 1395):(void*)0);
            }
            else if(span$1char$p_operator_derefference(info->p)==61&&*(info->p->p+1)!=61&&*(info->p->p+1)!=62&&!info->no_assign) {
                info->p->p++;
                skip_spaces_and_lf(info);
                right_value_136=((void*)0);
                if((type_132->mClass->mStruct||type_132->mClass->mUnion)&&list$1sNode$ph_length(type_132->mArrayNum)==0) {
                    info->array_initializer=(_Bool)1;
                    no_comma_137=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __right_value0 = (void*)0;
                    __dec_obj153=right_value_136,
                    right_value_136=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "12var.nc", 1308, 1397);
                    (__dec_obj153 ? __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0, (void*)0, "12var.nc", 1308, 1396) :0);
                    info->no_comma=no_comma_137;
                    info->array_initializer=(_Bool)0;
                }
                else if(list$1sNode$ph_length(type_132->mArrayNum)>0||type_132->mArrayPointerType) {
                    info->array_initializer=(_Bool)1;
                    skip_spaces_and_lf(info);
                    __right_value0 = (void*)0;
                    __dec_obj154=right_value_136,
                    right_value_136=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "12var.nc", 1315, 1399);
                    (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0, (void*)0, "12var.nc", 1315, 1398) :0);
                    skip_spaces_and_lf(info);
                    info->array_initializer=(_Bool)0;
                }
                else {
                    skip_spaces_and_lf(info);
                    __right_value0 = (void*)0;
                    __dec_obj155=right_value_136,
                    right_value_136=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "12var.nc", 1321, 1401);
                    (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0, (void*)0, "12var.nc", 1321, 1400) :0);
                    skip_spaces_and_lf(info);
                }
                __right_value0 = (void*)0;
                __dec_obj156=right_value_136,
                right_value_136=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_136, "12var.nc", 1325, 1402),info), "12var.nc", 1325, 1404);
                (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0, (void*)0, "12var.nc", 1325, 1403) :0);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1327, 1409, "struct sNode");
                _inf_obj_value11=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value1=sStoreNode_initialize((struct sStoreNode* )come_increment_ref_count((struct sStoreNode *)come_calloc(1, sizeof(struct sStoreNode )*(1), "12var.nc", 1327, 1405, "struct sStoreNode* "), "12var.nc", 1327, 1406),(char* )come_increment_ref_count(name_133, "12var.nc", 1327, 1407),((void*)0),((void*)0),type_132,(_Bool)1,right_value_136,info,(char*)come_increment_ref_count(xsprintf(""), "12var.nc", 1327, 1408),(_Bool)0))), "12var.nc", 1327, 1410);
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
                node_138=(struct sNode*)come_increment_ref_count(_inf_value11, "12var.nc", 1327, 1411);
                come_call_finalizer(sStoreNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1327, 1412);
                info->sline_real=sline_real;
                                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_138, "12var.nc", 1329, 1413);
                ((right_value_136) ? right_value_136 = come_decrement_ref_count(right_value_136, ((struct sNode*)right_value_136)->finalize, ((struct sNode*)right_value_136)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1329, 1414):(void*)0);
                ((node_138) ? node_138 = come_decrement_ref_count(node_138, ((struct sNode*)node_138)->finalize, ((struct sNode*)node_138)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1329, 1415):(void*)0);
                come_call_finalizer(sType_finalize, type_132, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1329, 1416);
                (name_133 = come_decrement_ref_count(name_133, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1329, 1417));
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1329, 1418));
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1329, 1419):(void*)0);
                return __result_obj__0;
                ((right_value_136) ? right_value_136 = come_decrement_ref_count(right_value_136, ((struct sNode*)right_value_136)->finalize, ((struct sNode*)right_value_136)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1336, 1420):(void*)0);
                ((node_138) ? node_138 = come_decrement_ref_count(node_138, ((struct sNode*)node_138)->finalize, ((struct sNode*)node_138)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1336, 1421):(void*)0);
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1332, 1426, "struct sNode");
                _inf_obj_value12=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value1=sStoreNode_initialize((struct sStoreNode* )come_increment_ref_count((struct sStoreNode *)come_calloc(1, sizeof(struct sStoreNode )*(1), "12var.nc", 1332, 1422, "struct sStoreNode* "), "12var.nc", 1332, 1423),(char* )come_increment_ref_count(name_133, "12var.nc", 1332, 1424),((void*)0),((void*)0),type_132,(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""), "12var.nc", 1332, 1425),(_Bool)0))), "12var.nc", 1332, 1427);
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
                node_139=(struct sNode*)come_increment_ref_count(_inf_value12, "12var.nc", 1332, 1428);
                come_call_finalizer(sStoreNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1332, 1429);
                info->sline_real=sline_real;
                                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_139, "12var.nc", 1334, 1430);
                ((node_139) ? node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1334, 1431):(void*)0);
                come_call_finalizer(sType_finalize, type_132, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1334, 1432);
                (name_133 = come_decrement_ref_count(name_133, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1334, 1433));
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1334, 1434));
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1334, 1435):(void*)0);
                return __result_obj__0;
                ((node_139) ? node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1336, 1436):(void*)0);
            }
            come_call_finalizer(sType_finalize, type_132, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12var.nc}", 1337, 1437);
            (name_133 = come_decrement_ref_count(name_133, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1337, 1438));
        }
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "12var.nc", 1339, 1439));
    }
    err_msg(info,"unexpected word(%s)(1)",buf);
    exit(2);
    neo_current_frame = fr.prev;
}

static char span$1char$p$p_operator_derefference(struct span$1char$p* self)
{
    char* p;
    if(self==((void*)0)) {
        puts("null pointer exception. self is null");
        stackframe();
        exit(2);
    }
    if(self->local) {
        if(self->stacktop<neo_current_frame->stacktop) {
            puts("refferenced stack object is vanished");
            stackframe2(self);
            exit(127);
        }
    }
    if(self->heap) {
        if(!come_is_alive(self->memory)) {
            puts("refferenced heap object is vanished");
            stackframe2(self);
            exit(127);
        }
    }
    p=self->p;
    if(sizeof(char)>self->len) {
        puts("invalid span. len is few");
        stackframe2(self);
        exit(2);
    }
    if(self->p>=(char*)self->memory+self->len) {
        puts("out of range of span(3)");
        stackframe2(self);
        exit(1);
    }
    if(self->p<(char*)self->memory) {
        puts("out of range of span(4)");
        stackframe2(self);
        exit(1);
    }
        return *p;
}

static char span$1char$p_operator_derefference(struct span$1char$p* self)
{
    char* p;
    if(self==((void*)0)) {
        puts("null pointer exception. self is null");
        stackframe();
        exit(2);
    }
    if(self->local) {
        if(self->stacktop<neo_current_frame->stacktop) {
            puts("refferenced stack object is vanished");
            stackframe2(self);
            exit(127);
        }
    }
    if(self->heap) {
        if(!come_is_alive(self->memory)) {
            puts("refferenced heap object is vanished");
            stackframe2(self);
            exit(127);
        }
    }
    p=self->p;
    if(sizeof(char)>self->len) {
        puts("invalid span. len is few");
        stackframe2(self);
        exit(2);
    }
    if(self->p>=(char*)self->memory+self->len) {
        puts("out of range of span(3)");
        stackframe2(self);
        exit(1);
    }
    if(self->p<(char*)self->memory) {
        puts("out of range of span(4)");
        stackframe2(self);
        exit(1);
    }
        return *p;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 1082);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 1083));
    }
                neo_current_frame = fr.prev;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sType$phchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2sType$phchar$ph$p_finalize}", 2, 1087);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2sType$phchar$ph$p_finalize", 3, 1088));
    }
                    neo_current_frame = fr.prev;
}

static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewChannel_clone"; neo_current_frame = &fr;
    struct sNewChannel* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNewChannel*  result  ;
    char*  __dec_obj135  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNewChannel* )come_increment_ref_count((struct sNewChannel *)come_calloc(1, sizeof(struct sNewChannel )*(1), "sNewChannel_clone", 5, 1140, "struct sNewChannel* "), "sNewChannel_clone", 5, 1141);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj135=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNewChannel_clone", 7, 1142, "char* "), "sNewChannel_clone", 7, 1144);
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0, "sNewChannel_clone", 7, 1143);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sNewChannel_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sNewChannel_clone}", 9, 1145);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back"; neo_current_frame = &fr;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem;
    struct tuple3$3sType$phchar$phsNode$ph* __dec_obj136;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_109;
    struct tuple3$3sType$phchar$phsNode$ph* __dec_obj137;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_110;
    struct tuple3$3sType$phchar$phsNode$ph* __dec_obj138;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1614, 1162);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1618, 1163, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1618, 1164);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj136=litem->item,
        litem->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1622, 1166);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj136,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1622, 1165);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_109=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1628, 1167, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1628, 1168);
        litem_109->prev=self->head;
        litem_109->next=((void*)0);
        __dec_obj137=litem_109->item,
        litem_109->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1632, 1170);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj137,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1632, 1169);
        self->tail=litem_109;
        self->head->next=litem_109;
    }
    else {
        __right_value0 = (void*)0;
        litem_110=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1638, 1171, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1638, 1172);
        litem_110->prev=self->tail;
        litem_110->next=((void*)0);
        __dec_obj138=litem_110->item,
        litem_110->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1642, 1174);
        come_call_finalizer(tuple3$3sType$phchar$phsNode$ph_finalize, __dec_obj138,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1642, 1173);
        self->tail->next=litem_110;
        self->tail=litem_110;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1650, 1175);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType*  v1  , char*  v2  , struct sNode* v3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$phsNode$ph_initialize"; neo_current_frame = &fr;
    struct sType*  __dec_obj139  ;
    char*  __dec_obj140  ;
    struct sNode* __dec_obj141;
    struct tuple3$3sType$phchar$phsNode$ph* __result_obj__0;
    __dec_obj139=self->v1,
    self->v1=(struct sType* )come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3987, 1178);
    come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3987, 1177);
    __dec_obj140=self->v2,
    self->v2=(char* )come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3988, 1180);
    __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3988, 1179);
    __dec_obj141=self->v3,
    self->v3=(struct sNode*)come_increment_ref_count(v3, "/usr/local/include/neo-c.h", 3989, 1182);
    (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3989, 1181) :0);
        __result_obj__0 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3991, 1183);
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3991, 1184);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3991, 1185);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3991, 1186));
    ((v3) ? v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 3991, 1187):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3sType$phchar$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3991, 1188);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem;
    struct tuple2$2char$phsType$ph* __dec_obj143;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_123;
    struct tuple2$2char$phsType$ph* __dec_obj144;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_124;
    struct tuple2$2char$phsType$ph* __dec_obj145;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1530, 1270);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/neo-c.h", 1533, 1271, "struct list_item$1tuple2$2char$phsType$ph$ph*"))), "/usr/local/include/neo-c.h", 1533, 1272);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj143=litem->item,
        litem->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1537, 1274);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1537, 1273);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_123=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/neo-c.h", 1543, 1275, "struct list_item$1tuple2$2char$phsType$ph$ph*"))), "/usr/local/include/neo-c.h", 1543, 1276);
        litem_123->prev=self->head;
        litem_123->next=((void*)0);
        __dec_obj144=litem_123->item,
        litem_123->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1547, 1278);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj144,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1547, 1277);
        self->tail=litem_123;
        self->head->next=litem_123;
    }
    else {
        __right_value0 = (void*)0;
        litem_124=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "/usr/local/include/neo-c.h", 1553, 1279, "struct list_item$1tuple2$2char$phsType$ph$ph*"))), "/usr/local/include/neo-c.h", 1553, 1280);
        litem_124->prev=self->tail;
        litem_124->next=((void*)0);
        __dec_obj145=litem_124->item,
        litem_124->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1557, 1282);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj145,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1557, 1281);
        self->tail->next=litem_124;
        self->tail=litem_124;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1565, 1283);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 1268));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 1269);
    }
            neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char*  v1  , struct sType*  v2  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj146  ;
    struct sType*  __dec_obj147  ;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    __dec_obj146=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3912, 1286);
    __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3912, 1285);
    __dec_obj147=self->v2,
    self->v2=(struct sType* )come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3913, 1288);
    come_call_finalizer(sType_finalize, __dec_obj147,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3913, 1287);
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3915, 1289);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3915, 1290);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3915, 1291));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3915, 1292);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3915, 1293);
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
    skip_spaces_and_lf(info);
    if(strncmp(info->p->p,"<-",strlen("<-"))==0) {
        info->p->p+=strlen("<-");
        skip_spaces_and_lf(info);
        exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "12var.nc", 1353, 1440);
        skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1356, 1444, "struct sNode");
        _inf_obj_value13=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value1=sReadChannelNode_initialize((struct sReadChannelNode* )come_increment_ref_count((struct sReadChannelNode *)come_calloc(1, sizeof(struct sReadChannelNode )*(1), "12var.nc", 1356, 1441, "struct sReadChannelNode* "), "12var.nc", 1356, 1442),(struct sNode*)come_increment_ref_count(exp, "12var.nc", 1356, 1443),info))), "12var.nc", 1356, 1445);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)), "12var.nc", 1356, 1454);
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1356, 1455):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1356, 1456):(void*)0);
        come_call_finalizer(sReadChannelNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1356, 1457);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "12var.nc", 1356, 1458):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1356, 1459):(void*)0);
        return __result_obj__0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1362, 1460):(void*)0);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj159=node,
        node=(struct sNode*)come_increment_ref_count(expression_node_v1(info), "12var.nc", 1359, 1462);
        (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0, (void*)0, "12var.nc", 1359, 1461) :0);
    }
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "12var.nc", 1362, 1463);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1362, 1464):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1362, 1465):(void*)0);
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
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sReadChannelNode* )come_increment_ref_count((struct sReadChannelNode *)come_calloc(1, sizeof(struct sReadChannelNode )*(1), "sReadChannelNode_clone", 5, 1446, "struct sReadChannelNode* "), "sReadChannelNode_clone", 5, 1447);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj157=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sReadChannelNode_clone", 7, 1448, "char* "), "sReadChannelNode_clone", 7, 1450);
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0, (void*)0, "sReadChannelNode_clone", 7, 1449);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj158=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sReadChannelNode_clone", 9, 1452);
        (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0, (void*)0, "sReadChannelNode_clone", 9, 1451) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sReadChannelNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sReadChannelNode_clone}", 10, 1453);
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
    if(!node->terminated(node->_protocol_obj)&&strncmp(info->p->p,"<-",strlen("<-"))==0) {
        info->p->p+=2;
        skip_spaces_and_lf(info);
        right_value=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "12var.nc", 1371, 1466);
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __dec_obj160=right_value,
        right_value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value, "12var.nc", 1374, 1467),info), "12var.nc", 1374, 1469);
        (__dec_obj160 ? __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0, (void*)0, "12var.nc", 1374, 1468) :0);
        skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12var.nc", 1378, 1474, "struct sNode");
        _inf_obj_value14=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value1=sWriteChannelNode_initialize((struct sWriteChannelNode* )come_increment_ref_count((struct sWriteChannelNode *)come_calloc(1, sizeof(struct sWriteChannelNode )*(1), "12var.nc", 1378, 1470, "struct sWriteChannelNode* "), "12var.nc", 1378, 1471),(struct sNode*)come_increment_ref_count(node, "12var.nc", 1378, 1472),(struct sNode*)come_increment_ref_count(right_value, "12var.nc", 1378, 1473),info))), "12var.nc", 1378, 1475);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)), "12var.nc", 1378, 1486);
        ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1378, 1487):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1378, 1488):(void*)0);
        come_call_finalizer(sWriteChannelNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "12var.nc}", 1378, 1489);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "12var.nc", 1378, 1490):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1378, 1491):(void*)0);
        return __result_obj__0;
        ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1381, 1492):(void*)0);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=post_position_operator((struct sNode*)come_increment_ref_count(node, "12var.nc", 1381, 1493),info))), "12var.nc", 1381, 1494);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "12var.nc", 1381, 1495):(void*)0);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "12var.nc", 1381, 1496):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "12var.nc", 1381, 1497):(void*)0);
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
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sWriteChannelNode* )come_increment_ref_count((struct sWriteChannelNode *)come_calloc(1, sizeof(struct sWriteChannelNode )*(1), "sWriteChannelNode_clone", 5, 1476, "struct sWriteChannelNode* "), "sWriteChannelNode_clone", 5, 1477);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj161=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sWriteChannelNode_clone", 7, 1478, "char* "), "sWriteChannelNode_clone", 7, 1480);
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0, (void*)0, "sWriteChannelNode_clone", 7, 1479);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj162=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sWriteChannelNode_clone", 9, 1482);
        (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0, (void*)0, "sWriteChannelNode_clone", 9, 1481) :0);
    }
    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj163=result->right_value,
        result->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value), "sWriteChannelNode_clone", 10, 1484);
        (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0, (void*)0, "sWriteChannelNode_clone", 10, 1483) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sWriteChannelNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sWriteChannelNode_clone}", 11, 1485);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

