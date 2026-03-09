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
struct sNode* post_op_v13(struct sNode* node, struct sInfo*  info  );
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
static char span$1char$p$p_operator_derefference(struct span$1char$p* self);
static char span$1char$p_operator_derefference(struct span$1char$p* self);
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_ref_or_optional_type_for_operator"; neo_current_frame = &fr;
    struct sType*  type2  ;
    char* class_name;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "reject_ref_optional_unary_operator"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "reject_ref_optional_binary_operator"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "operator_overload_fun"; neo_current_frame = &fr;
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
    if(reject_ref_optional_binary_operator(fun_name,left_value,right_value,info)) {
                __result_obj__0 = (_Bool)1;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 47, 1):(void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 47, 2):(void*)0);
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
    fun_name2=(char* )come_increment_ref_count(multiple_assign_var1->v1, "30op.nc", 68, 3);
    operator_fun=multiple_assign_var1->v2;
    generics_fun=multiple_assign_var1->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 68, 5);
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
        obj=(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 88, 6);
        __right_value0 = (void*)0;
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "30op.nc", 89, 7, "struct list$1tuple2$2char$phsNode$ph$ph*"), "30op.nc", 89, 15)), "30op.nc", 89, 16);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "30op.nc", 91, 31, "struct tuple2$2char$phsNode$ph"), "30op.nc", 91, 41),(char* )come_increment_ref_count((char* )((void*)0), "30op.nc", 91, 42),(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 91, 43)), "30op.nc", 91, 44));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "30op.nc", 92, 45, "struct tuple2$2char$phsNode$ph"), "30op.nc", 92, 46),(char* )come_increment_ref_count((char* )((void*)0), "30op.nc", 92, 47),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 92, 48)), "30op.nc", 92, 49));
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(create_method_call(fun_name,(struct sNode*)come_increment_ref_count(obj, "30op.nc", 94, 50),params,((void*)0),0,((void*)0),info,(_Bool)0), "30op.nc", 94, 51);
        Value=node_compile(node,info);
        if(Value) {
            result=(_Bool)1;
        }
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 101, 52):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 101, 53);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 101, 54):(void*)0);
    }
        __result_obj__0 = result;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 101, 55):(void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 101, 56):(void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "30op.nc", 101, 57));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3char$phsFun$psGenericsFun$p$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3char$phsFun$psGenericsFun$p$p_finalize", 2, 4));
    }
        neo_current_frame = fr.prev;
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

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1484, 8);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 13);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 14);
    return __result_obj__0;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 12);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 11);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj1;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_1;
    struct tuple2$2char$phsNode$ph* __dec_obj2;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_2;
    struct tuple2$2char$phsNode$ph* __dec_obj3;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1530, 17);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1533, 18, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1533, 19);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj1=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1537, 21);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1537, 20);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1543, 22, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1543, 23);
        litem_1->prev=self->head;
        litem_1->next=((void*)0);
        __dec_obj2=litem_1->item,
        litem_1->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1547, 25);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1547, 24);
        self->tail=litem_1;
        self->head->next=litem_1;
    }
    else {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1553, 26, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1553, 27);
        litem_2->prev=self->tail;
        litem_2->next=((void*)0);
        __dec_obj3=litem_2->item,
        litem_2->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1557, 29);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1557, 28);
        self->tail->next=litem_2;
        self->tail=litem_2;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1565, 30);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj4  ;
    struct sNode* __dec_obj5;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj4=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3912, 33);
    __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3912, 32);
    __dec_obj5=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3913, 35);
    (__dec_obj5 ? __dec_obj5 = come_decrement_ref_count(__dec_obj5, ((struct sNode*)__dec_obj5)->finalize, ((struct sNode*)__dec_obj5)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3913, 34) :0);
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3915, 36);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3915, 37);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3915, 38));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 3915, 39):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3915, 40);
    return __result_obj__0;
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNullNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNullNode*)come_increment_ref_count(self, "30op.nc", 108, 58),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 108, 60);
        __result_obj__0 = (struct sNullNode*)come_increment_ref_count(self, "30op.nc", 111, 61);
    come_call_finalizer(sNullNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 111, 63);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNullNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 111, 64);
    return __result_obj__0;
}

char*  sNullNode_kind(struct sNullNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNullNode","30op.nc",113))), "30op.nc", 113, 65);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 113, 66));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 113, 67));
    return __result_obj__0;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj6  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj7  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 118, 68, "struct CVALUE* "), "30op.nc", 118, 69)), "30op.nc", 118, 70);
    __right_value0 = (void*)0;
    __dec_obj6=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("((void*)0)"), "30op.nc", 120, 72);
    __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 120, 71);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj7=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "30op.nc", 121, 73, "struct sType* "), "30op.nc", 121, 74),(char*)come_increment_ref_count(xsprintf("void*"), "30op.nc", 121, 75),(_Bool)0,info,(_Bool)0,0), "30op.nc", 121, 109);
    come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 121, 108);
    come_value->var=((void*)0);
    come_value->mNullValue=(_Bool)1;
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 127, 129));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 129, 130);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 59));
    }
        neo_current_frame = fr.prev;
}

static void sNullNode_finalize(struct sNullNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNullNode_finalize", 2, 62));
    }
        neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 76);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 77);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 80);
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
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 94);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 95);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 97);
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
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 104);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 79);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 78);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 93);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 92):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 96);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 103);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 102));
    }
            neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj8  ;
    struct list_item$1CVALUE$ph* litem_3;
    struct CVALUE*  __dec_obj9  ;
    struct list_item$1CVALUE$ph* litem_4;
    struct CVALUE*  __dec_obj10  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1614, 115);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1618, 116, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1618, 117);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj8=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1622, 119);
        come_call_finalizer(CVALUE_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1622, 118);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1628, 120, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1628, 121);
        litem_3->prev=self->head;
        litem_3->next=((void*)0);
        __dec_obj9=litem_3->item,
        litem_3->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1632, 123);
        come_call_finalizer(CVALUE_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1632, 122);
        self->tail=litem_3;
        self->head->next=litem_3;
    }
    else {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1638, 124, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1638, 125);
        litem_4->prev=self->tail;
        litem_4->next=((void*)0);
        __dec_obj10=litem_4->item,
        litem_4->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1642, 127);
        come_call_finalizer(CVALUE_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1642, 126);
        self->tail->next=litem_4;
        self->tail=litem_4;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1650, 128);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_null_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sNullNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 135, 133, "struct sNode");
    _inf_obj_value1=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value1=sNullNode_initialize((struct sNullNode* )come_increment_ref_count((struct sNullNode *)come_calloc(1, sizeof(struct sNullNode )*(1), "30op.nc", 135, 131, "struct sNullNode* "), "30op.nc", 135, 132),info))), "30op.nc", 135, 134);
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
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "30op.nc", 135, 141);
    come_call_finalizer(sNullNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 135, 142);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "30op.nc", 135, 143):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 135, 144):(void*)0);
    return __result_obj__0;
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_clone"; neo_current_frame = &fr;
    struct sNullNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNullNode*  result  ;
    char*  __dec_obj11  ;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj12;
    struct sNode* __dec_obj13;
    struct sAddNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAddNode*)come_increment_ref_count(self, "30op.nc", 142, 145),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 142, 146);
    __right_value0 = (void*)0;
    __dec_obj12=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 144, 155);
    (__dec_obj12 ? __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0, (void*)0, "30op.nc", 144, 154) :0);
    __right_value0 = (void*)0;
    __dec_obj13=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 145, 157);
    (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0, (void*)0, "30op.nc", 145, 156) :0);
    self->mQuote=quote;
        __result_obj__0 = (struct sAddNode*)come_increment_ref_count(self, "30op.nc", 149, 158);
    come_call_finalizer(sAddNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 149, 162);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 149, 163):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 149, 164):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAddNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 149, 165);
    return __result_obj__0;
}

char*  sAddNode_kind(struct sAddNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAddNode","30op.nc",151))), "30op.nc", 151, 166);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 151, 167));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 151, 168));
    return __result_obj__0;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_compile"; neo_current_frame = &fr;
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
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "30op.nc", 157, 169);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 160, 170):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 163, 171);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "30op.nc", 165, 172);
    Value_5=node_compile(right_node,info);
    if(!Value_5) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 168, 173):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 168, 174);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 168, 175):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 171, 176);
    type=(struct sType* )come_increment_ref_count(left_value->type, "30op.nc", 173, 177);
    const char* fun_name="operator_add";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 181, 178),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 181, 179),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        left_is_string=string_operator_equals(left_value->type->mClass->mName,"char")&&left_value->type->mPointerNum==1&&(left_value->c_value&&left_value->c_value[0]==34);
        right_is_string=string_operator_equals(right_value->type->mClass->mName,"char")&&right_value->type->mPointerNum==1&&(right_value->c_value&&right_value->c_value[0]==34);
        left_is_arithmetic=left_value->type->mClass->mNumber||left_value->type->mClass->mFloat||left_value->type->mClass->mEnum;
        right_is_arithmetic=right_value->type->mClass->mNumber||right_value->type->mClass->mFloat||right_value->type->mClass->mEnum;
        if((left_is_arithmetic&&right_is_string)||(right_is_arithmetic&&left_is_string)) {
            err_msg(info,"invalid + between arithmetic type and string. use to_string() or string interpolation.");
                        __result_obj__0 = (_Bool)0;
            ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 195, 180):(void*)0);
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 195, 181);
            ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 195, 182):(void*)0);
            come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 195, 183);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 195, 184);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        result_type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "30op.nc", 198, 355);
        if(right_value->type->mPointerNum>0) {
            __right_value0 = (void*)0;
            __dec_obj48=result_type,
            result_type=(struct sType* )come_increment_ref_count(sType_clone(right_value->type), "30op.nc", 200, 357);
            come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 200, 356);
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 203, 358, "struct CVALUE* "), "30op.nc", 203, 359)), "30op.nc", 203, 360);
        __right_value0 = (void*)0;
        __dec_obj49=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s+%s",left_value->c_value,right_value->c_value), "30op.nc", 205, 362);
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 205, 361);
        __right_value0 = (void*)0;
        __dec_obj50=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "30op.nc", 206, 364);
        come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 206, 363);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 212, 365));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 215, 366);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 215, 367);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 215, 368):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 215, 369);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 215, 370):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 215, 371);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 215, 372);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sNode* sNode_clone(struct sNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNode_clone"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNode* result;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
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
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 222);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 221);
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
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 282);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 281);
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
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 304);
        come_call_finalizer(list$1int$_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 303);
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
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 345);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 344);
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_clone"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* result;
    struct list_item$1sType$ph* it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1510, 193);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1510, 194);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1512, 195, "struct list$1sType$ph*"), "/usr/local/include/neo-c.h", 1512, 199)), "/usr/local/include/neo-c.h", 1512, 200);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1517, 215));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1520, 216));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1526, 217);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1526, 218);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1526, 219);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1484, 196);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 197);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 198);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj16  ;
    struct list_item$1sType$ph* litem_6;
    struct sType*  __dec_obj17  ;
    struct list_item$1sType$ph* litem_7;
    struct sType*  __dec_obj18  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1530, 201);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1533, 202, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1533, 203);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj16=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1537, 205);
        come_call_finalizer(sType_finalize, __dec_obj16,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1537, 204);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1543, 206, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1543, 207);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj17=litem_6->item,
        litem_6->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1547, 209);
        come_call_finalizer(sType_finalize, __dec_obj17,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1547, 208);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1553, 210, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1553, 211);
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj18=litem_7->item,
        litem_7->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1557, 213);
        come_call_finalizer(sType_finalize, __dec_obj18,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1557, 212);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1565, 214);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 220);
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
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1510, 253);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1510, 254);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1512, 255, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1512, 259)), "/usr/local/include/neo-c.h", 1512, 260);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1517, 275));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1520, 276));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1526, 277);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1526, 278);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1526, 279);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1484, 256);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 257);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 258);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj31;
    struct list_item$1sNode$ph* litem_8;
    struct sNode* __dec_obj32;
    struct list_item$1sNode$ph* litem_9;
    struct sNode* __dec_obj33;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1530, 261):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1533, 262, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1533, 263);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj31=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1537, 265);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1537, 264) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1543, 266, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1543, 267);
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj32=litem_8->item,
        litem_8->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1547, 269);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1547, 268) :0);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1553, 270, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1553, 271);
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj33=litem_9->item,
        litem_9->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1557, 273);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1557, 272) :0);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1565, 274):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 280);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1510, 285);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1510, 286);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1512, 287, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1512, 291)), "/usr/local/include/neo-c.h", 1512, 292);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1526, 299);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1526, 300);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1526, 301);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1484, 288);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 289);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 290);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_10;
    struct list_item$1int$* litem_11;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1533, 293, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1533, 294);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_10=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1543, 295, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1543, 296);
        litem_10->prev=self->head;
        litem_10->next=((void*)0);
        litem_10->item=item;
        self->tail=litem_10;
        self->head->next=litem_10;
    }
    else {
        __right_value0 = (void*)0;
        litem_11=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1553, 297, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1553, 298);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 302);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1510, 314);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1510, 315);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1512, 316, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1512, 320)), "/usr/local/include/neo-c.h", 1512, 321);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1517, 336, "char* "), "/usr/local/include/neo-c.h", 1517, 337));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1520, 338, "char* "), "/usr/local/include/neo-c.h", 1520, 339));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1526, 340);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1526, 341);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1526, 342);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1484, 317);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 318);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1484, 319);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj41  ;
    struct list_item$1char$ph* litem_12;
    char*  __dec_obj42  ;
    struct list_item$1char$ph* litem_13;
    char*  __dec_obj43  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1530, 322));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1533, 323, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1533, 324);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj41=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1537, 326);
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1537, 325);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1543, 327, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1543, 328);
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj42=litem_12->item,
        litem_12->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1547, 330);
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1547, 329);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1553, 331, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1553, 332);
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj43=litem_13->item,
        litem_13->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1557, 334);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1557, 333);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1565, 335));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1505, 343);
    }
            neo_current_frame = fr.prev;
}

struct sNode* add_node(struct sNode* node, struct sNode* right, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value2;
    struct sAddNode* _inf_obj_value2;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 221, 377, "struct sNode");
    _inf_obj_value2=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value1=sAddNode_initialize((struct sAddNode* )come_increment_ref_count((struct sAddNode *)come_calloc(1, sizeof(struct sAddNode )*(1), "30op.nc", 221, 373, "struct sAddNode* "), "30op.nc", 221, 374),(struct sNode*)come_increment_ref_count(node, "30op.nc", 221, 375),(struct sNode*)come_increment_ref_count(right, "30op.nc", 221, 376),(_Bool)1,info))), "30op.nc", 221, 378);
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
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)), "30op.nc", 221, 389);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 221, 390):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 221, 391):(void*)0);
    come_call_finalizer(sAddNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 221, 392);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "30op.nc", 221, 393):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 221, 394):(void*)0);
    return __result_obj__0;
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_clone"; neo_current_frame = &fr;
    struct sAddNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAddNode*  result  ;
    char*  __dec_obj51  ;
    struct sNode* __dec_obj52;
    struct sNode* __dec_obj53;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj54;
    struct sNode* __dec_obj55;
    struct sSubNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSubNode*)come_increment_ref_count(self, "30op.nc", 228, 395),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 228, 396);
    __right_value0 = (void*)0;
    __dec_obj54=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 230, 398);
    (__dec_obj54 ? __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0, (void*)0, "30op.nc", 230, 397) :0);
    __right_value0 = (void*)0;
    __dec_obj55=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 231, 400);
    (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0, (void*)0, "30op.nc", 231, 399) :0);
    self->mQuote=quote;
        __result_obj__0 = (struct sSubNode*)come_increment_ref_count(self, "30op.nc", 235, 401);
    come_call_finalizer(sSubNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 235, 405);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 235, 406):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 235, 407):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSubNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 235, 408);
    return __result_obj__0;
}

char*  sSubNode_kind(struct sSubNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSubNode","30op.nc",237))), "30op.nc", 237, 409);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 237, 410));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 237, 411));
    return __result_obj__0;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_compile"; neo_current_frame = &fr;
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
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "30op.nc", 243, 412);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 246, 413):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 249, 414);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "30op.nc", 251, 415);
    Value_14=node_compile(right_node,info);
    if(!Value_14) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 254, 416):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 254, 417);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 254, 418):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 257, 419);
    type=(struct sType* )come_increment_ref_count(left_value->type, "30op.nc", 259, 420);
    const char* fun_name="operator_sub";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 267, 421),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 267, 422),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        result_type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "30op.nc", 271, 423);
        if(left_value->type->mPointerNum>0&&right_value->type->mPointerNum>0) {
            __right_value0 = (void*)0;
            __dec_obj56=result_type,
            result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "30op.nc", 273, 424, "struct sType* "), "30op.nc", 273, 425),(char*)come_increment_ref_count(xsprintf("long"), "30op.nc", 273, 426),(_Bool)0,info,(_Bool)0,0), "30op.nc", 273, 428);
            come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 273, 427);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 276, 429, "struct CVALUE* "), "30op.nc", 276, 430)), "30op.nc", 276, 431);
        __right_value0 = (void*)0;
        __dec_obj57=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s-%s",left_value->c_value,right_value->c_value), "30op.nc", 278, 433);
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 278, 432);
        __right_value0 = (void*)0;
        __dec_obj58=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "30op.nc", 279, 435);
        come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 279, 434);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 285, 436));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 288, 437);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 288, 438);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 288, 439):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 288, 440);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 288, 441):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 288, 442);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 288, 443);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSubNode_finalize(struct sSubNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj59;
    struct sNode* __dec_obj60;
    struct sMultNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sMultNode*)come_increment_ref_count(self, "30op.nc", 296, 444),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 296, 445);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj59=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 299, 447);
    (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0, (void*)0, "30op.nc", 299, 446) :0);
    __right_value0 = (void*)0;
    __dec_obj60=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 300, 449);
    (__dec_obj60 ? __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0, (void*)0, "30op.nc", 300, 448) :0);
        __result_obj__0 = (struct sMultNode*)come_increment_ref_count(self, "30op.nc", 303, 450);
    come_call_finalizer(sMultNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 303, 454);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 303, 455):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 303, 456):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sMultNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 303, 457);
    return __result_obj__0;
}

char*  sMultNode_kind(struct sMultNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sMultNode","30op.nc",305))), "30op.nc", 305, 458);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 305, 459));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 305, 460));
    return __result_obj__0;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_compile"; neo_current_frame = &fr;
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
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "30op.nc", 311, 461);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 314, 462):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 317, 463);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "30op.nc", 319, 464);
    Value_15=node_compile(right_node,info);
    if(!Value_15) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 322, 465):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 322, 466);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 322, 467):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 325, 468);
    type=(struct sType* )come_increment_ref_count(left_value->type, "30op.nc", 327, 469);
    const char* fun_name="operator_mult";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 335, 470),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 335, 471),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 339, 472, "struct CVALUE* "), "30op.nc", 339, 473)), "30op.nc", 339, 474);
        __right_value0 = (void*)0;
        __dec_obj61=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s*%s",left_value->c_value,right_value->c_value), "30op.nc", 341, 476);
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 341, 475);
        __right_value0 = (void*)0;
        __dec_obj62=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "30op.nc", 342, 478);
        come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 342, 477);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 348, 479));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 351, 480);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 351, 481):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 351, 482);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 351, 483):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 351, 484);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 351, 485);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sMultNode_finalize(struct sMultNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_finalize"; neo_current_frame = &fr;
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

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj63;
    struct sNode* __dec_obj64;
    struct sDivNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDivNode*)come_increment_ref_count(self, "30op.nc", 359, 486),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 359, 487);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj63=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 362, 489);
    (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0, (void*)0, "30op.nc", 362, 488) :0);
    __right_value0 = (void*)0;
    __dec_obj64=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 363, 491);
    (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0, (void*)0, "30op.nc", 363, 490) :0);
        __result_obj__0 = (struct sDivNode*)come_increment_ref_count(self, "30op.nc", 366, 492);
    come_call_finalizer(sDivNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 366, 496);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 366, 497):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 366, 498):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDivNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 366, 499);
    return __result_obj__0;
}

char*  sDivNode_kind(struct sDivNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDivNode","30op.nc",368))), "30op.nc", 368, 500);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 368, 501));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 368, 502));
    return __result_obj__0;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_compile"; neo_current_frame = &fr;
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
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "30op.nc", 374, 503);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 377, 504):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 380, 505);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "30op.nc", 382, 506);
    Value_16=node_compile(right_node,info);
    if(!Value_16) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 385, 507):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 385, 508);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 385, 509):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 388, 510);
    type=(struct sType* )come_increment_ref_count(left_value->type, "30op.nc", 390, 511);
    const char* fun_name="operator_div";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 398, 512),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 398, 513),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 402, 514, "struct CVALUE* "), "30op.nc", 402, 515)), "30op.nc", 402, 516);
        __right_value0 = (void*)0;
        __dec_obj65=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s/%s",left_value->c_value,right_value->c_value), "30op.nc", 404, 518);
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 404, 517);
        __right_value0 = (void*)0;
        __dec_obj66=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "30op.nc", 405, 520);
        come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 405, 519);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 411, 521));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 414, 522);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 414, 523):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 414, 524);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 414, 525):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 414, 526);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 414, 527);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDivNode_finalize(struct sDivNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDivNode_finalize", 2, 493));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sDivNode_finalize", 3, 494):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sDivNode_finalize", 4, 495):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj67;
    struct sNode* __dec_obj68;
    struct sModNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sModNode*)come_increment_ref_count(self, "30op.nc", 422, 528),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 422, 529);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj67=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 425, 531);
    (__dec_obj67 ? __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0, (void*)0, "30op.nc", 425, 530) :0);
    __right_value0 = (void*)0;
    __dec_obj68=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 426, 533);
    (__dec_obj68 ? __dec_obj68 = come_decrement_ref_count(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0, (void*)0, "30op.nc", 426, 532) :0);
        __result_obj__0 = (struct sModNode*)come_increment_ref_count(self, "30op.nc", 429, 534);
    come_call_finalizer(sModNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 429, 538);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 429, 539):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 429, 540):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sModNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 429, 541);
    return __result_obj__0;
}

char*  sModNode_kind(struct sModNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sModNode","30op.nc",431))), "30op.nc", 431, 542);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 431, 543));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 431, 544));
    return __result_obj__0;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_compile"; neo_current_frame = &fr;
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
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "30op.nc", 437, 545);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 440, 546):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 443, 547);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "30op.nc", 445, 548);
    Value_17=node_compile(right_node,info);
    if(!Value_17) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 448, 549):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 448, 550);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 448, 551):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 451, 552);
    type=(struct sType* )come_increment_ref_count(left_value->type, "30op.nc", 453, 553);
    const char* fun_name="operator_mod";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 461, 554),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 461, 555),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 465, 556, "struct CVALUE* "), "30op.nc", 465, 557)), "30op.nc", 465, 558);
        __right_value0 = (void*)0;
        __dec_obj69=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s%%%s",left_value->c_value,right_value->c_value), "30op.nc", 467, 560);
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 467, 559);
        __right_value0 = (void*)0;
        __dec_obj70=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "30op.nc", 468, 562);
        come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 468, 561);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 474, 563));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 477, 564);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 477, 565):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 477, 566);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 477, 567):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 477, 568);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 477, 569);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sModNode_finalize(struct sModNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sModNode_finalize", 2, 535));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sModNode_finalize", 3, 536):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sModNode_finalize", 4, 537):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj71;
    struct sNode* __dec_obj72;
    struct sLShiftNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLShiftNode*)come_increment_ref_count(self, "30op.nc", 485, 570),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 485, 571);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj71=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 489, 573);
    (__dec_obj71 ? __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0, (void*)0, "30op.nc", 489, 572) :0);
    __right_value0 = (void*)0;
    __dec_obj72=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 490, 575);
    (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0, (void*)0, "30op.nc", 490, 574) :0);
        __result_obj__0 = (struct sLShiftNode*)come_increment_ref_count(self, "30op.nc", 493, 576);
    come_call_finalizer(sLShiftNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 493, 580);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 493, 581):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 493, 582):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLShiftNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 493, 583);
    return __result_obj__0;
}

char*  sLShiftNode_kind(struct sLShiftNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLShiftNode","30op.nc",495))), "30op.nc", 495, 584);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 495, 585));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 495, 586));
    return __result_obj__0;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_compile"; neo_current_frame = &fr;
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
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "30op.nc", 501, 587);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 504, 588):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 507, 589);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "30op.nc", 509, 590);
    Value_18=node_compile(right_node,info);
    if(!Value_18) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 512, 591):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 512, 592);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 512, 593):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 515, 594);
    type=(struct sType* )come_increment_ref_count(left_value->type, "30op.nc", 517, 595);
    const char* fun_name="operator_lshift";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 525, 596),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 525, 597),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 529, 598, "struct CVALUE* "), "30op.nc", 529, 599)), "30op.nc", 529, 600);
        __right_value0 = (void*)0;
        __dec_obj73=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s<<%s",left_value->c_value,right_value->c_value), "30op.nc", 531, 602);
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 531, 601);
        __right_value0 = (void*)0;
        __dec_obj74=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "30op.nc", 532, 604);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 532, 603);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 538, 605));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 541, 606);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 541, 607):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 541, 608);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 541, 609):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 541, 610);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 541, 611);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLShiftNode_finalize(struct sLShiftNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLShiftNode_finalize", 2, 577));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sLShiftNode_finalize", 3, 578):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sLShiftNode_finalize", 4, 579):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj75;
    struct sNode* __dec_obj76;
    struct sRShiftNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sRShiftNode*)come_increment_ref_count(self, "30op.nc", 549, 612),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 549, 613);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj75=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 552, 615);
    (__dec_obj75 ? __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0, (void*)0, "30op.nc", 552, 614) :0);
    __right_value0 = (void*)0;
    __dec_obj76=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 553, 617);
    (__dec_obj76 ? __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0, (void*)0, "30op.nc", 553, 616) :0);
        __result_obj__0 = (struct sRShiftNode*)come_increment_ref_count(self, "30op.nc", 556, 618);
    come_call_finalizer(sRShiftNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 556, 622);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 556, 623):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 556, 624):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sRShiftNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 556, 625);
    return __result_obj__0;
}

char*  sRShiftNode_kind(struct sRShiftNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sRShiftNode","30op.nc",558))), "30op.nc", 558, 626);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 558, 627));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 558, 628));
    return __result_obj__0;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_compile"; neo_current_frame = &fr;
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
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "30op.nc", 564, 629);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 567, 630):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 570, 631);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "30op.nc", 572, 632);
    Value_19=node_compile(right_node,info);
    if(!Value_19) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 575, 633):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 575, 634);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 575, 635):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 578, 636);
    type=(struct sType* )come_increment_ref_count(left_value->type, "30op.nc", 580, 637);
    const char* fun_name="operator_rshift";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 588, 638),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 588, 639),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 592, 640, "struct CVALUE* "), "30op.nc", 592, 641)), "30op.nc", 592, 642);
        __right_value0 = (void*)0;
        __dec_obj77=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s>>%s",left_value->c_value,right_value->c_value), "30op.nc", 594, 644);
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 594, 643);
        __right_value0 = (void*)0;
        __dec_obj78=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "30op.nc", 595, 646);
        come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 595, 645);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 601, 647));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 604, 648);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 604, 649):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 604, 650);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 604, 651):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 604, 652);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 604, 653);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sRShiftNode_finalize(struct sRShiftNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sRShiftNode_finalize", 2, 619));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sRShiftNode_finalize", 3, 620):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sRShiftNode_finalize", 4, 621):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj79;
    struct sNode* __dec_obj80;
    struct sGtEqNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGtEqNode*)come_increment_ref_count(self, "30op.nc", 612, 654),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 612, 655);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj79=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 615, 657);
    (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0, (void*)0, "30op.nc", 615, 656) :0);
    __right_value0 = (void*)0;
    __dec_obj80=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 616, 659);
    (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0, (void*)0, "30op.nc", 616, 658) :0);
        __result_obj__0 = (struct sGtEqNode*)come_increment_ref_count(self, "30op.nc", 619, 660);
    come_call_finalizer(sGtEqNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 619, 664);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 619, 665):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 619, 666):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGtEqNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 619, 667);
    return __result_obj__0;
}

char*  sGtEqNode_kind(struct sGtEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGtEqNode","30op.nc",621))), "30op.nc", 621, 668);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 621, 669));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 621, 670));
    return __result_obj__0;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_compile"; neo_current_frame = &fr;
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
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "30op.nc", 627, 671);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 630, 672):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 633, 673);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "30op.nc", 635, 674);
    Value_20=node_compile(right_node,info);
    if(!Value_20) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 638, 675):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 638, 676);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 638, 677):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 641, 678);
    type=(struct sType* )come_increment_ref_count(left_value->type, "30op.nc", 643, 679);
    const char* fun_name="operator_gteq";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 651, 680),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 651, 681),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 655, 682, "struct CVALUE* "), "30op.nc", 655, 683)), "30op.nc", 655, 684);
        __right_value0 = (void*)0;
        __dec_obj81=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s>=%s",left_value->c_value,right_value->c_value), "30op.nc", 657, 686);
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 657, 685);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj82=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "30op.nc", 658, 687, "struct sType* "), "30op.nc", 658, 688),(char*)come_increment_ref_count(xsprintf("int"), "30op.nc", 658, 689),(_Bool)0,info,(_Bool)0,0), "30op.nc", 658, 691);
        come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 658, 690);
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 663, 692));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 666, 693);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 666, 694):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 666, 695);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 666, 696):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 666, 697);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 666, 698);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGtEqNode_finalize(struct sGtEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sGtEqNode_finalize", 2, 661));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sGtEqNode_finalize", 3, 662):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sGtEqNode_finalize", 4, 663):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj83;
    struct sNode* __dec_obj84;
    struct sLtEqNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLtEqNode*)come_increment_ref_count(self, "30op.nc", 674, 699),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 674, 700);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj83=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 677, 702);
    (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0, (void*)0, "30op.nc", 677, 701) :0);
    __right_value0 = (void*)0;
    __dec_obj84=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 678, 704);
    (__dec_obj84 ? __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0, (void*)0, "30op.nc", 678, 703) :0);
        __result_obj__0 = (struct sLtEqNode*)come_increment_ref_count(self, "30op.nc", 681, 705);
    come_call_finalizer(sLtEqNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 681, 709);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 681, 710):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 681, 711):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLtEqNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 681, 712);
    return __result_obj__0;
}

char*  sLtEqNode_kind(struct sLtEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLtEqNode","30op.nc",683))), "30op.nc", 683, 713);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 683, 714));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 683, 715));
    return __result_obj__0;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_compile"; neo_current_frame = &fr;
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
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "30op.nc", 689, 716);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 692, 717):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 695, 718);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "30op.nc", 697, 719);
    Value_21=node_compile(right_node,info);
    if(!Value_21) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 700, 720):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 700, 721);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 700, 722):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 703, 723);
    type=(struct sType* )come_increment_ref_count(left_value->type, "30op.nc", 705, 724);
    const char* fun_name="operator_lteq";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 713, 725),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 713, 726),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 717, 727, "struct CVALUE* "), "30op.nc", 717, 728)), "30op.nc", 717, 729);
        __right_value0 = (void*)0;
        __dec_obj85=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s<=%s",left_value->c_value,right_value->c_value), "30op.nc", 719, 731);
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 719, 730);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj86=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "30op.nc", 720, 732, "struct sType* "), "30op.nc", 720, 733),(char*)come_increment_ref_count(xsprintf("int"), "30op.nc", 720, 734),(_Bool)0,info,(_Bool)0,0), "30op.nc", 720, 736);
        come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 720, 735);
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 725, 737));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 728, 738);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 728, 739):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 728, 740);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 728, 741):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 728, 742);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 728, 743);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLtEqNode_finalize(struct sLtEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLtEqNode_finalize", 2, 706));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sLtEqNode_finalize", 3, 707):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sLtEqNode_finalize", 4, 708):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj87;
    struct sNode* __dec_obj88;
    struct sLtNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLtNode*)come_increment_ref_count(self, "30op.nc", 736, 744),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 736, 745);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj87=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 739, 747);
    (__dec_obj87 ? __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0, (void*)0, "30op.nc", 739, 746) :0);
    __right_value0 = (void*)0;
    __dec_obj88=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 740, 749);
    (__dec_obj88 ? __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0, (void*)0, "30op.nc", 740, 748) :0);
        __result_obj__0 = (struct sLtNode*)come_increment_ref_count(self, "30op.nc", 743, 750);
    come_call_finalizer(sLtNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 743, 754);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 743, 755):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 743, 756):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLtNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 743, 757);
    return __result_obj__0;
}

char*  sLtNode_kind(struct sLtNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLtNode","30op.nc",745))), "30op.nc", 745, 758);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 745, 759));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 745, 760));
    return __result_obj__0;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_compile"; neo_current_frame = &fr;
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
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "30op.nc", 751, 761);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 754, 762):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 757, 763);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "30op.nc", 759, 764);
    Value_22=node_compile(right_node,info);
    if(!Value_22) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 762, 765):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 762, 766);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 762, 767):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 765, 768);
    type=(struct sType* )come_increment_ref_count(left_value->type, "30op.nc", 767, 769);
    const char* fun_name="operator_lt";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 775, 770),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 775, 771),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 779, 772, "struct CVALUE* "), "30op.nc", 779, 773)), "30op.nc", 779, 774);
        __right_value0 = (void*)0;
        __dec_obj89=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s<%s",left_value->c_value,right_value->c_value), "30op.nc", 781, 776);
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 781, 775);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj90=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "30op.nc", 782, 777, "struct sType* "), "30op.nc", 782, 778),(char*)come_increment_ref_count(xsprintf("int"), "30op.nc", 782, 779),(_Bool)0,info,(_Bool)0,0), "30op.nc", 782, 781);
        come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 782, 780);
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 787, 782));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 790, 783);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 790, 784):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 790, 785);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 790, 786):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 790, 787);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 790, 788);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLtNode_finalize(struct sLtNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLtNode_finalize", 2, 751));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sLtNode_finalize", 3, 752):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sLtNode_finalize", 4, 753):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj91;
    struct sNode* __dec_obj92;
    struct sGtNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGtNode*)come_increment_ref_count(self, "30op.nc", 798, 789),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 798, 790);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj91=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 801, 792);
    (__dec_obj91 ? __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0, (void*)0, "30op.nc", 801, 791) :0);
    __right_value0 = (void*)0;
    __dec_obj92=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 802, 794);
    (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0, (void*)0, "30op.nc", 802, 793) :0);
        __result_obj__0 = (struct sGtNode*)come_increment_ref_count(self, "30op.nc", 805, 795);
    come_call_finalizer(sGtNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 805, 799);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 805, 800):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 805, 801):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGtNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 805, 802);
    return __result_obj__0;
}

char*  sGtNode_kind(struct sGtNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGtNode","30op.nc",807))), "30op.nc", 807, 803);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 807, 804));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 807, 805));
    return __result_obj__0;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_compile"; neo_current_frame = &fr;
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
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "30op.nc", 813, 806);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 816, 807):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 819, 808);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "30op.nc", 821, 809);
    Value_23=node_compile(right_node,info);
    if(!Value_23) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 824, 810):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 824, 811);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 824, 812):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 827, 813);
    type=(struct sType* )come_increment_ref_count(left_value->type, "30op.nc", 829, 814);
    const char* fun_name="operator_gt";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 837, 815),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 837, 816),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 841, 817, "struct CVALUE* "), "30op.nc", 841, 818)), "30op.nc", 841, 819);
        __right_value0 = (void*)0;
        __dec_obj93=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s>%s",left_value->c_value,right_value->c_value), "30op.nc", 843, 821);
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 843, 820);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj94=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "30op.nc", 844, 822, "struct sType* "), "30op.nc", 844, 823),(char*)come_increment_ref_count(xsprintf("int"), "30op.nc", 844, 824),(_Bool)0,info,(_Bool)0,0), "30op.nc", 844, 826);
        come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 844, 825);
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 849, 827));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 852, 828);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 852, 829):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 852, 830);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 852, 831):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 852, 832);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 852, 833);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGtNode_finalize(struct sGtNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sGtNode_finalize", 2, 796));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sGtNode_finalize", 3, 797):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sGtNode_finalize", 4, 798):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj95;
    struct sNode* __dec_obj96;
    struct sEqNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sEqNode*)come_increment_ref_count(self, "30op.nc", 860, 834),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 860, 835);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj95=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 863, 837);
    (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0, (void*)0, "30op.nc", 863, 836) :0);
    __right_value0 = (void*)0;
    __dec_obj96=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 864, 839);
    (__dec_obj96 ? __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0, (void*)0, "30op.nc", 864, 838) :0);
        __result_obj__0 = (struct sEqNode*)come_increment_ref_count(self, "30op.nc", 867, 840);
    come_call_finalizer(sEqNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 867, 844);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 867, 845):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 867, 846):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sEqNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 867, 847);
    return __result_obj__0;
}

char*  sEqNode_kind(struct sEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sEqNode","30op.nc",869))), "30op.nc", 869, 848);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 869, 849));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 869, 850));
    return __result_obj__0;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_compile"; neo_current_frame = &fr;
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
    left_node=self->mLeft;
    Value=node_compile(left_node,info);
    if(!Value) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 881, 851);
    right_node=self->mRight;
    Value_24=node_compile(right_node,info);
    if(!Value_24) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 886, 852);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 889, 853);
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 891, 854, "struct CVALUE* "), "30op.nc", 891, 855)), "30op.nc", 891, 856);
    __right_value0 = (void*)0;
    __dec_obj97=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s==%s",left_value->c_value,right_value->c_value), "30op.nc", 893, 858);
    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 893, 857);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj98=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "30op.nc", 894, 859, "struct sType* "), "30op.nc", 894, 860),(char*)come_increment_ref_count(xsprintf("int"), "30op.nc", 894, 861),(_Bool)0,info,(_Bool)0,0), "30op.nc", 894, 863);
    come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 894, 862);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 899, 864));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 901, 865);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 901, 866);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 901, 867);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sEqNode_finalize(struct sEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sEqNode_finalize", 2, 841));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sEqNode_finalize", 3, 842):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sEqNode_finalize", 4, 843):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj99;
    struct sNode* __dec_obj100;
    struct sNotEqNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNotEqNode*)come_increment_ref_count(self, "30op.nc", 909, 868),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 909, 869);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj99=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 912, 871);
    (__dec_obj99 ? __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0, (void*)0, "30op.nc", 912, 870) :0);
    __right_value0 = (void*)0;
    __dec_obj100=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 913, 873);
    (__dec_obj100 ? __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0, (void*)0, "30op.nc", 913, 872) :0);
        __result_obj__0 = (struct sNotEqNode*)come_increment_ref_count(self, "30op.nc", 916, 874);
    come_call_finalizer(sNotEqNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 916, 878);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 916, 879):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 916, 880):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNotEqNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 916, 881);
    return __result_obj__0;
}

char*  sNotEqNode_kind(struct sNotEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNotEqNode","30op.nc",918))), "30op.nc", 918, 882);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 918, 883));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 918, 884));
    return __result_obj__0;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_compile"; neo_current_frame = &fr;
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
    left_node=self->mLeft;
    Value=node_compile(left_node,info);
    if(!Value) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 930, 885);
    right_node=self->mRight;
    Value_25=node_compile(right_node,info);
    if(!Value_25) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 935, 886);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 938, 887);
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 940, 888, "struct CVALUE* "), "30op.nc", 940, 889)), "30op.nc", 940, 890);
    __right_value0 = (void*)0;
    __dec_obj101=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s!=%s",left_value->c_value,right_value->c_value), "30op.nc", 942, 892);
    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 942, 891);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj102=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "30op.nc", 943, 893, "struct sType* "), "30op.nc", 943, 894),(char*)come_increment_ref_count(xsprintf("int"), "30op.nc", 943, 895),(_Bool)0,info,(_Bool)0,0), "30op.nc", 943, 897);
    come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 943, 896);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 948, 898));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 950, 899);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 950, 900);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 950, 901);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNotEqNode_finalize(struct sNotEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNotEqNode_finalize", 2, 875));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sNotEqNode_finalize", 3, 876):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sNotEqNode_finalize", 4, 877):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj103;
    struct sNode* __dec_obj104;
    struct sEq2Node* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sEq2Node*)come_increment_ref_count(self, "30op.nc", 958, 902),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 958, 903);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj103=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 961, 905);
    (__dec_obj103 ? __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0, (void*)0, "30op.nc", 961, 904) :0);
    __right_value0 = (void*)0;
    __dec_obj104=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 962, 907);
    (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0, (void*)0, "30op.nc", 962, 906) :0);
        __result_obj__0 = (struct sEq2Node*)come_increment_ref_count(self, "30op.nc", 965, 908);
    come_call_finalizer(sEq2Node_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 965, 912);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 965, 913):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 965, 914):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sEq2Node_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 965, 915);
    return __result_obj__0;
}

char*  sEq2Node_kind(struct sEq2Node* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sEq2Node","30op.nc",967))), "30op.nc", 967, 916);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 967, 917));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 967, 918));
    return __result_obj__0;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_compile"; neo_current_frame = &fr;
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
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "30op.nc", 973, 919);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 976, 920):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 979, 921);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "30op.nc", 981, 922);
    Value_26=node_compile(right_node,info);
    if(!Value_26) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 984, 923):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 984, 924);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 984, 925):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 987, 926);
    type=(struct sType* )come_increment_ref_count(left_value->type, "30op.nc", 989, 927);
    const char* fun_name="operator_equals";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 997, 928),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 997, 929),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 1001, 930, "struct CVALUE* "), "30op.nc", 1001, 931)), "30op.nc", 1001, 932);
        __right_value0 = (void*)0;
        __dec_obj105=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s==%s",left_value->c_value,right_value->c_value), "30op.nc", 1003, 934);
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 1003, 933);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj106=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "30op.nc", 1004, 935, "struct sType* "), "30op.nc", 1004, 936),(char*)come_increment_ref_count(xsprintf("int"), "30op.nc", 1004, 937),(_Bool)0,info,(_Bool)0,0), "30op.nc", 1004, 939);
        come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 1004, 938);
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 1009, 940));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1012, 941);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1012, 942):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1012, 943);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1012, 944):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1012, 945);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1012, 946);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sEq2Node_finalize(struct sEq2Node* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sEq2Node_finalize", 2, 909));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sEq2Node_finalize", 3, 910):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sEq2Node_finalize", 4, 911):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj107;
    struct sNode* __dec_obj108;
    struct sNotEq2Node* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNotEq2Node*)come_increment_ref_count(self, "30op.nc", 1020, 947),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1020, 948);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj107=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 1023, 950);
    (__dec_obj107 ? __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1023, 949) :0);
    __right_value0 = (void*)0;
    __dec_obj108=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 1024, 952);
    (__dec_obj108 ? __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1024, 951) :0);
        __result_obj__0 = (struct sNotEq2Node*)come_increment_ref_count(self, "30op.nc", 1027, 953);
    come_call_finalizer(sNotEq2Node_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 1027, 957);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1027, 958):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1027, 959):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNotEq2Node_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 1027, 960);
    return __result_obj__0;
}

char*  sNotEq2Node_kind(struct sNotEq2Node* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNotEq2Node","30op.nc",1029))), "30op.nc", 1029, 961);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 1029, 962));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 1029, 963));
    return __result_obj__0;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_compile"; neo_current_frame = &fr;
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
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "30op.nc", 1035, 964);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1038, 965):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 1041, 966);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "30op.nc", 1043, 967);
    Value_27=node_compile(right_node,info);
    if(!Value_27) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1046, 968):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1046, 969);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1046, 970):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 1049, 971);
    type=(struct sType* )come_increment_ref_count(left_value->type, "30op.nc", 1051, 972);
    const char* fun_name="operator_not_equals";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 1059, 973),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 1059, 974),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 1063, 975, "struct CVALUE* "), "30op.nc", 1063, 976)), "30op.nc", 1063, 977);
        __right_value0 = (void*)0;
        __dec_obj109=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s!=%s",left_value->c_value,right_value->c_value), "30op.nc", 1065, 979);
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 1065, 978);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj110=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "30op.nc", 1066, 980, "struct sType* "), "30op.nc", 1066, 981),(char*)come_increment_ref_count(xsprintf("int"), "30op.nc", 1066, 982),(_Bool)0,info,(_Bool)0,0), "30op.nc", 1066, 984);
        come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 1066, 983);
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 1071, 985));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1074, 986);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1074, 987):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1074, 988);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1074, 989):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1074, 990);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1074, 991);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNotEq2Node_finalize", 2, 954));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sNotEq2Node_finalize", 3, 955):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sNotEq2Node_finalize", 4, 956):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj111;
    struct sNode* __dec_obj112;
    struct sAndNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAndNode*)come_increment_ref_count(self, "30op.nc", 1082, 992),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1082, 993);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj111=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 1085, 995);
    (__dec_obj111 ? __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1085, 994) :0);
    __right_value0 = (void*)0;
    __dec_obj112=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 1086, 997);
    (__dec_obj112 ? __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1086, 996) :0);
        __result_obj__0 = (struct sAndNode*)come_increment_ref_count(self, "30op.nc", 1089, 998);
    come_call_finalizer(sAndNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 1089, 1002);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1089, 1003):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1089, 1004):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAndNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 1089, 1005);
    return __result_obj__0;
}

char*  sAndNode_kind(struct sAndNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAndNode","30op.nc",1091))), "30op.nc", 1091, 1006);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 1091, 1007));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 1091, 1008));
    return __result_obj__0;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_compile"; neo_current_frame = &fr;
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
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "30op.nc", 1097, 1009);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1100, 1010):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 1103, 1011);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "30op.nc", 1105, 1012);
    Value_28=node_compile(right_node,info);
    if(!Value_28) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1108, 1013):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1108, 1014);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1108, 1015):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 1111, 1016);
    type=(struct sType* )come_increment_ref_count(left_value->type, "30op.nc", 1113, 1017);
    const char* fun_name="operator_and";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 1121, 1018),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 1121, 1019),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 1126, 1020, "struct CVALUE* "), "30op.nc", 1126, 1021)), "30op.nc", 1126, 1022);
        __right_value0 = (void*)0;
        __dec_obj113=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s&%s",left_value->c_value,right_value->c_value), "30op.nc", 1128, 1024);
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 1128, 1023);
        __right_value0 = (void*)0;
        __dec_obj114=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "30op.nc", 1129, 1026);
        come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 1129, 1025);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 1135, 1027));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1138, 1028);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1138, 1029):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1138, 1030);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1138, 1031):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1138, 1032);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1138, 1033);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAndNode_finalize(struct sAndNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAndNode_finalize", 2, 999));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sAndNode_finalize", 3, 1000):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sAndNode_finalize", 4, 1001):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj115;
    struct sNode* __dec_obj116;
    struct sXOrNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sXOrNode*)come_increment_ref_count(self, "30op.nc", 1146, 1034),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1146, 1035);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj115=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 1149, 1037);
    (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1149, 1036) :0);
    __right_value0 = (void*)0;
    __dec_obj116=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 1150, 1039);
    (__dec_obj116 ? __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1150, 1038) :0);
        __result_obj__0 = (struct sXOrNode*)come_increment_ref_count(self, "30op.nc", 1153, 1040);
    come_call_finalizer(sXOrNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 1153, 1044);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1153, 1045):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1153, 1046):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sXOrNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 1153, 1047);
    return __result_obj__0;
}

char*  sXOrNode_kind(struct sXOrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sXOrNode","30op.nc",1155))), "30op.nc", 1155, 1048);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 1155, 1049));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 1155, 1050));
    return __result_obj__0;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_compile"; neo_current_frame = &fr;
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
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "30op.nc", 1161, 1051);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1164, 1052):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 1167, 1053);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "30op.nc", 1169, 1054);
    Value_29=node_compile(right_node,info);
    if(!Value_29) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1172, 1055):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1172, 1056);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1172, 1057):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 1175, 1058);
    type=(struct sType* )come_increment_ref_count(left_value->type, "30op.nc", 1177, 1059);
    const char* fun_name="operator_xor";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 1185, 1060),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 1185, 1061),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 1189, 1062, "struct CVALUE* "), "30op.nc", 1189, 1063)), "30op.nc", 1189, 1064);
        __right_value0 = (void*)0;
        __dec_obj117=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s^%s",left_value->c_value,right_value->c_value), "30op.nc", 1191, 1066);
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 1191, 1065);
        __right_value0 = (void*)0;
        __dec_obj118=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "30op.nc", 1192, 1068);
        come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 1192, 1067);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 1198, 1069));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1201, 1070);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1201, 1071):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1201, 1072);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1201, 1073):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1201, 1074);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1201, 1075);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sXOrNode_finalize(struct sXOrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sXOrNode_finalize", 2, 1041));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sXOrNode_finalize", 3, 1042):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sXOrNode_finalize", 4, 1043):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj119;
    struct sNode* __dec_obj120;
    struct sOrNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sOrNode*)come_increment_ref_count(self, "30op.nc", 1209, 1076),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1209, 1077);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj119=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 1212, 1079);
    (__dec_obj119 ? __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1212, 1078) :0);
    __right_value0 = (void*)0;
    __dec_obj120=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 1213, 1081);
    (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1213, 1080) :0);
        __result_obj__0 = (struct sOrNode*)come_increment_ref_count(self, "30op.nc", 1216, 1082);
    come_call_finalizer(sOrNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 1216, 1086);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1216, 1087):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1216, 1088):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sOrNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 1216, 1089);
    return __result_obj__0;
}

char*  sOrNode_kind(struct sOrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sOrNode","30op.nc",1218))), "30op.nc", 1218, 1090);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 1218, 1091));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 1218, 1092));
    return __result_obj__0;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_compile"; neo_current_frame = &fr;
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
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "30op.nc", 1224, 1093);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1227, 1094):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 1230, 1095);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "30op.nc", 1232, 1096);
    Value_30=node_compile(right_node,info);
    if(!Value_30) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1235, 1097):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1235, 1098);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1235, 1099):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 1238, 1100);
    type=(struct sType* )come_increment_ref_count(left_value->type, "30op.nc", 1240, 1101);
    const char* fun_name="operator_or";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 1248, 1102),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 1248, 1103),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 1253, 1104, "struct CVALUE* "), "30op.nc", 1253, 1105)), "30op.nc", 1253, 1106);
        __right_value0 = (void*)0;
        __dec_obj121=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s|%s",left_value->c_value,right_value->c_value), "30op.nc", 1255, 1108);
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 1255, 1107);
        __right_value0 = (void*)0;
        __dec_obj122=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "30op.nc", 1256, 1110);
        come_call_finalizer(sType_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 1256, 1109);
        come_value->type->mHeap=(_Bool)0;
        come_value->var=((void*)0);
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 1262, 1111));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1265, 1112);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1265, 1113):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1265, 1114);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1265, 1115):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1265, 1116);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1265, 1117);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sOrNode_finalize(struct sOrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sOrNode_finalize", 2, 1083));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sOrNode_finalize", 3, 1084):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sOrNode_finalize", 4, 1085):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj123;
    struct sNode* __dec_obj124;
    struct sAndAndNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAndAndNode*)come_increment_ref_count(self, "30op.nc", 1273, 1118),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1273, 1119);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj123=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 1276, 1121);
    (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1276, 1120) :0);
    __right_value0 = (void*)0;
    __dec_obj124=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 1277, 1123);
    (__dec_obj124 ? __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1277, 1122) :0);
        __result_obj__0 = (struct sAndAndNode*)come_increment_ref_count(self, "30op.nc", 1280, 1124);
    come_call_finalizer(sAndAndNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 1280, 1128);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1280, 1129):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1280, 1130):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAndAndNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 1280, 1131);
    return __result_obj__0;
}

char*  sAndAndNode_kind(struct sAndAndNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAndAndNode","30op.nc",1282))), "30op.nc", 1282, 1132);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 1282, 1133));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 1282, 1134));
    return __result_obj__0;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_compile"; neo_current_frame = &fr;
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
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "30op.nc", 1288, 1135);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1291, 1136):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 1294, 1137);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "30op.nc", 1296, 1138);
    Value_31=node_compile(right_node,info);
    if(!Value_31) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1299, 1139):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1299, 1140);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1299, 1141):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 1302, 1142);
    type=(struct sType* )come_increment_ref_count(left_value->type, "30op.nc", 1304, 1143);
    const char* fun_name="operator_andand";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 1312, 1144),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 1312, 1145),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 1317, 1146, "struct CVALUE* "), "30op.nc", 1317, 1147)), "30op.nc", 1317, 1148);
        __right_value0 = (void*)0;
        __dec_obj125=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s&&%s",left_value->c_value,right_value->c_value), "30op.nc", 1319, 1150);
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 1319, 1149);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj126=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "30op.nc", 1320, 1151, "struct sType* "), "30op.nc", 1320, 1152),(char*)come_increment_ref_count(xsprintf("int"), "30op.nc", 1320, 1153),(_Bool)0,info,(_Bool)0,0), "30op.nc", 1320, 1155);
        come_call_finalizer(sType_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 1320, 1154);
        come_value->var=left_value->var;
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 1325, 1156));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1328, 1157);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1328, 1158):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1328, 1159);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1328, 1160):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1328, 1161);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1328, 1162);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAndAndNode_finalize(struct sAndAndNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAndAndNode_finalize", 2, 1125));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sAndAndNode_finalize", 3, 1126):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sAndAndNode_finalize", 4, 1127):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj127;
    struct sNode* __dec_obj128;
    struct sOrOrNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sOrOrNode*)come_increment_ref_count(self, "30op.nc", 1336, 1163),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1336, 1164);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj127=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 1339, 1166);
    (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1339, 1165) :0);
    __right_value0 = (void*)0;
    __dec_obj128=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 1340, 1168);
    (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1340, 1167) :0);
        __result_obj__0 = (struct sOrOrNode*)come_increment_ref_count(self, "30op.nc", 1343, 1169);
    come_call_finalizer(sOrOrNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 1343, 1173);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1343, 1174):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1343, 1175):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sOrOrNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 1343, 1176);
    return __result_obj__0;
}

char*  sOrOrNode_kind(struct sOrOrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sOrOrNode","30op.nc",1345))), "30op.nc", 1345, 1177);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 1345, 1178));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 1345, 1179));
    return __result_obj__0;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_compile"; neo_current_frame = &fr;
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
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(self->mLeft, "30op.nc", 1351, 1180);
    Value=node_compile(left_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1354, 1181):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 1357, 1182);
    right_node=(struct sNode*)come_increment_ref_count(self->mRight, "30op.nc", 1359, 1183);
    Value_32=node_compile(right_node,info);
    if(!Value_32) {
                __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1362, 1184):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1362, 1185);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1362, 1186):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 1365, 1187);
    type=(struct sType* )come_increment_ref_count(left_value->type, "30op.nc", 1367, 1188);
    const char* fun_name="operator_oror";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node, "30op.nc", 1375, 1189),(struct sNode*)come_increment_ref_count(right_node, "30op.nc", 1375, 1190),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 1379, 1191, "struct CVALUE* "), "30op.nc", 1379, 1192)), "30op.nc", 1379, 1193);
        __right_value0 = (void*)0;
        __dec_obj129=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s||%s",left_value->c_value,right_value->c_value), "30op.nc", 1381, 1195);
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 1381, 1194);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj130=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "30op.nc", 1382, 1196, "struct sType* "), "30op.nc", 1382, 1197),(char*)come_increment_ref_count(xsprintf("int"), "30op.nc", 1382, 1198),(_Bool)0,info,(_Bool)0,0), "30op.nc", 1382, 1200);
        come_call_finalizer(sType_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 1382, 1199);
        come_value->var=left_value->var;
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 1387, 1201));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1390, 1202);
    }
        __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1390, 1203):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1390, 1204);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1390, 1205):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1390, 1206);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1390, 1207);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sOrOrNode_finalize(struct sOrOrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sOrOrNode_finalize", 2, 1170));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sOrOrNode_finalize", 3, 1171):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sOrOrNode_finalize", 4, 1172):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj131;
    struct sNode* __dec_obj132;
    struct sCommaNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCommaNode*)come_increment_ref_count(self, "30op.nc", 1398, 1208),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1398, 1209);
    __right_value0 = (void*)0;
    __dec_obj131=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "30op.nc", 1400, 1211);
    (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1400, 1210) :0);
    __right_value0 = (void*)0;
    __dec_obj132=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "30op.nc", 1401, 1213);
    (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1401, 1212) :0);
        __result_obj__0 = (struct sCommaNode*)come_increment_ref_count(self, "30op.nc", 1404, 1214);
    come_call_finalizer(sCommaNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 1404, 1218);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1404, 1219):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1404, 1220):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCommaNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 1404, 1221);
    return __result_obj__0;
}

char*  sCommaNode_kind(struct sCommaNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCommaNode","30op.nc",1406))), "30op.nc", 1406, 1222);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 1406, 1223));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 1406, 1224));
    return __result_obj__0;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_compile"; neo_current_frame = &fr;
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
    left_node=self->mLeft;
    Value=node_compile(left_node,info);
    if(!Value) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 1418, 1225);
    right_node=self->mRight;
    Value_33=node_compile(right_node,info);
    if(!Value_33) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1423, 1226);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 1426, 1227);
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 1428, 1228, "struct CVALUE* "), "30op.nc", 1428, 1229)), "30op.nc", 1428, 1230);
    __right_value0 = (void*)0;
    __dec_obj133=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s,%s",left_value->c_value,right_value->c_value), "30op.nc", 1430, 1232);
    __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 1430, 1231);
    __right_value0 = (void*)0;
    __dec_obj134=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(right_value->type), "30op.nc", 1431, 1234);
    come_call_finalizer(sType_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 1431, 1233);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 1436, 1235));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1438, 1236);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1438, 1237);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1438, 1238);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCommaNode_finalize(struct sCommaNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCommaNode_finalize", 2, 1215));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sCommaNode_finalize", 3, 1216):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sCommaNode_finalize", 4, 1217):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj135;
    struct sNode* __dec_obj136;
    struct sNode* __dec_obj137;
    struct sConditionalNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sConditionalNode*)come_increment_ref_count(self, "30op.nc", 1446, 1239),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1446, 1240);
    __right_value0 = (void*)0;
    __dec_obj135=self->mValue1,
    self->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(value1), "30op.nc", 1448, 1242);
    (__dec_obj135 ? __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1448, 1241) :0);
    __right_value0 = (void*)0;
    __dec_obj136=self->mValue2,
    self->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(value2), "30op.nc", 1449, 1244);
    (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1449, 1243) :0);
    __right_value0 = (void*)0;
    __dec_obj137=self->mValue3,
    self->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(value3), "30op.nc", 1450, 1246);
    (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1450, 1245) :0);
        __result_obj__0 = (struct sConditionalNode*)come_increment_ref_count(self, "30op.nc", 1453, 1247);
    come_call_finalizer(sConditionalNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 1453, 1252);
    ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1453, 1253):(void*)0);
    ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1453, 1254):(void*)0);
    ((value3) ? value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1453, 1255):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sConditionalNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 1453, 1256);
    return __result_obj__0;
}

char*  sConditionalNode_kind(struct sConditionalNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sConditionalNode","30op.nc",1455))), "30op.nc", 1455, 1257);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 1455, 1258));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 1455, 1259));
    return __result_obj__0;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_compile"; neo_current_frame = &fr;
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
    in_conditional_operator=info->in_conditional_operator;
    info->in_conditional_operator=(_Bool)1;
    value1=self->mValue1;
    Value=node_compile(value1,info);
    if(!Value) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    value1_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 1470, 1260);
    value2=self->mValue2;
    Value_34=node_compile(value2,info);
    if(!Value_34) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, value1_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1475, 1261);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    value2_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 1478, 1262);
    value3=self->mValue3;
    Value_35=node_compile(value3,info);
    if(!Value_35) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, value1_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1483, 1263);
        come_call_finalizer(CVALUE_finalize, value2_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1483, 1264);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    value3_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "30op.nc", 1486, 1265);
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 1488, 1266, "struct CVALUE* "), "30op.nc", 1488, 1267)), "30op.nc", 1488, 1268);
    __right_value0 = (void*)0;
    __dec_obj138=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("((%s)?(%s):(%s))",value1_value->c_value,value2_value->c_value,value3_value->c_value), "30op.nc", 1490, 1270);
    __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 1490, 1269);
    __right_value0 = (void*)0;
    __dec_obj139=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(value2_value->type), "30op.nc", 1491, 1272);
    come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 1491, 1271);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 1496, 1273));
    info->in_conditional_operator=in_conditional_operator;
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, value1_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1500, 1274);
    come_call_finalizer(CVALUE_finalize, value2_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1500, 1275);
    come_call_finalizer(CVALUE_finalize, value3_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1500, 1276);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 1500, 1277);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sConditionalNode_finalize(struct sConditionalNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sConditionalNode_finalize", 2, 1248));
    }
    if(self!=((void*)0)&&self->mValue1!=((void*)0)) {
        ((self->mValue1) ? self->mValue1 = come_decrement_ref_count(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0,(void*)0, "sConditionalNode_finalize", 3, 1249):(void*)0);
    }
    if(self!=((void*)0)&&self->mValue2!=((void*)0)) {
        ((self->mValue2) ? self->mValue2 = come_decrement_ref_count(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0,(void*)0, "sConditionalNode_finalize", 4, 1250):(void*)0);
    }
    if(self!=((void*)0)&&self->mValue3!=((void*)0)) {
        ((self->mValue3) ? self->mValue3 = come_decrement_ref_count(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0,(void*)0, "sConditionalNode_finalize", 5, 1251):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "conditional_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sConditionalNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1506, 1283, "struct sNode");
    _inf_obj_value3=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value1=sConditionalNode_initialize((struct sConditionalNode* )come_increment_ref_count((struct sConditionalNode *)come_calloc(1, sizeof(struct sConditionalNode )*(1), "30op.nc", 1506, 1278, "struct sConditionalNode* "), "30op.nc", 1506, 1279),(struct sNode*)come_increment_ref_count(value1, "30op.nc", 1506, 1280),(struct sNode*)come_increment_ref_count(value2, "30op.nc", 1506, 1281),(struct sNode*)come_increment_ref_count(value3, "30op.nc", 1506, 1282),info))), "30op.nc", 1506, 1284);
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
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)), "30op.nc", 1506, 1297);
    ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1506, 1298):(void*)0);
    ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1506, 1299):(void*)0);
    ((value3) ? value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1506, 1300):(void*)0);
    come_call_finalizer(sConditionalNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1506, 1301);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "30op.nc", 1506, 1302):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 1506, 1303):(void*)0);
    return __result_obj__0;
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_clone"; neo_current_frame = &fr;
    struct sConditionalNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sConditionalNode*  result  ;
    char*  __dec_obj140  ;
    struct sNode* __dec_obj141;
    struct sNode* __dec_obj142;
    struct sNode* __dec_obj143;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sConditionalNode* )come_increment_ref_count((struct sConditionalNode *)come_calloc(1, sizeof(struct sConditionalNode )*(1), "sConditionalNode_clone", 5, 1285, "struct sConditionalNode* "), "sConditionalNode_clone", 5, 1286);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj140=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sConditionalNode_clone", 7, 1287, "char* "), "sConditionalNode_clone", 7, 1289);
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0, "sConditionalNode_clone", 7, 1288);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mValue1!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj141=result->mValue1,
        result->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue1), "sConditionalNode_clone", 9, 1291);
        (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0, (void*)0, "sConditionalNode_clone", 9, 1290) :0);
    }
    if(self!=((void*)0)&&self->mValue2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj142=result->mValue2,
        result->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue2), "sConditionalNode_clone", 10, 1293);
        (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0, (void*)0, "sConditionalNode_clone", 10, 1292) :0);
    }
    if(self!=((void*)0)&&self->mValue3!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj143=result->mValue3,
        result->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue3), "sConditionalNode_clone", 11, 1295);
        (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0, (void*)0, "sConditionalNode_clone", 11, 1294) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sConditionalNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sConditionalNode_clone}", 12, 1296);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* mult_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "mult_exp"; neo_current_frame = &fr;
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
    node=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "30op.nc", 1511, 1304);
    parse_sharp_v5(info);
    while(span$1char$p_operator_derefference(info->p)) {
        if(!node->terminated(node->_protocol_obj)&&span$1char$p_operator_derefference(info->p)==42&&*(info->p->p+1)!=61) {
            info->p->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==41) {
                err_msg(info,"invalid )");
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "30op.nc", 1524, 1305);
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1524, 1306):(void*)0);
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "30op.nc", 1524, 1307):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 1524, 1308):(void*)0);
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "30op.nc", 1526, 1309);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1530, 1314, "struct sNode");
            _inf_obj_value4=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value1=sMultNode_initialize((struct sMultNode* )come_increment_ref_count((struct sMultNode *)come_calloc(1, sizeof(struct sMultNode )*(1), "30op.nc", 1530, 1310, "struct sMultNode* "), "30op.nc", 1530, 1311),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1530, 1312),(struct sNode*)come_increment_ref_count(right, "30op.nc", 1530, 1313),(_Bool)0,info))), "30op.nc", 1530, 1315);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value4, "30op.nc", 1530, 1327);
            (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1530, 1326) :0);
            come_call_finalizer(sMultNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1530, 1328);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1590, 1329):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==47&&*(info->p->p+1)!=61&&*(info->p->p+1)!=42&&*(info->p->p-1)!=42) {
            info->p->p++;
            sline_real_36=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_37=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "30op.nc", 1538, 1330);
            info->sline_real=sline_real_36;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1541, 1335, "struct sNode");
            _inf_obj_value5=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value1=sDivNode_initialize((struct sDivNode* )come_increment_ref_count((struct sDivNode *)come_calloc(1, sizeof(struct sDivNode )*(1), "30op.nc", 1541, 1331, "struct sDivNode* "), "30op.nc", 1541, 1332),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1541, 1333),(struct sNode*)come_increment_ref_count(right_37, "30op.nc", 1541, 1334),(_Bool)0,info))), "30op.nc", 1541, 1336);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value5, "30op.nc", 1541, 1348);
            (__dec_obj151 ? __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1541, 1347) :0);
            come_call_finalizer(sDivNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1541, 1349);
            ((right_37) ? right_37 = come_decrement_ref_count(right_37, ((struct sNode*)right_37)->finalize, ((struct sNode*)right_37)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1590, 1350):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==37&&*(info->p->p+1)!=61) {
            info->p->p++;
            sline_real_38=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_39=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "30op.nc", 1549, 1351);
            info->sline_real=sline_real_38;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1552, 1356, "struct sNode");
            _inf_obj_value6=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value1=sModNode_initialize((struct sModNode* )come_increment_ref_count((struct sModNode *)come_calloc(1, sizeof(struct sModNode )*(1), "30op.nc", 1552, 1352, "struct sModNode* "), "30op.nc", 1552, 1353),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1552, 1354),(struct sNode*)come_increment_ref_count(right_39, "30op.nc", 1552, 1355),(_Bool)0,info))), "30op.nc", 1552, 1357);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value6, "30op.nc", 1552, 1369);
            (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1552, 1368) :0);
            come_call_finalizer(sModNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1552, 1370);
            ((right_39) ? right_39 = come_decrement_ref_count(right_39, ((struct sNode*)right_39)->finalize, ((struct sNode*)right_39)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1590, 1371):(void*)0);
        }
        else if(!node->terminated(node->_protocol_obj)&&span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==42&&*(info->p->p+2)!=61) {
            info->p->p+=2;
            sline_real_40=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_41=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "30op.nc", 1560, 1372);
            info->sline_real=sline_real_40;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1563, 1377, "struct sNode");
            _inf_obj_value7=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value1=sMultNode_initialize((struct sMultNode* )come_increment_ref_count((struct sMultNode *)come_calloc(1, sizeof(struct sMultNode )*(1), "30op.nc", 1563, 1373, "struct sMultNode* "), "30op.nc", 1563, 1374),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1563, 1375),(struct sNode*)come_increment_ref_count(right_41, "30op.nc", 1563, 1376),(_Bool)1,info))), "30op.nc", 1563, 1378);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value7, "30op.nc", 1563, 1380);
            (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1563, 1379) :0);
            come_call_finalizer(sMultNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1563, 1381);
            ((right_41) ? right_41 = come_decrement_ref_count(right_41, ((struct sNode*)right_41)->finalize, ((struct sNode*)right_41)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1590, 1382):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==47&&*(info->p->p+2)!=61) {
            info->p->p+=2;
            sline_real_42=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_43=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "30op.nc", 1571, 1383);
            info->sline_real=sline_real_42;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1574, 1388, "struct sNode");
            _inf_obj_value8=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value1=sDivNode_initialize((struct sDivNode* )come_increment_ref_count((struct sDivNode *)come_calloc(1, sizeof(struct sDivNode )*(1), "30op.nc", 1574, 1384, "struct sDivNode* "), "30op.nc", 1574, 1385),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1574, 1386),(struct sNode*)come_increment_ref_count(right_43, "30op.nc", 1574, 1387),(_Bool)1,info))), "30op.nc", 1574, 1389);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value8, "30op.nc", 1574, 1391);
            (__dec_obj157 ? __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1574, 1390) :0);
            come_call_finalizer(sDivNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1574, 1392);
            ((right_43) ? right_43 = come_decrement_ref_count(right_43, ((struct sNode*)right_43)->finalize, ((struct sNode*)right_43)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1590, 1393):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==37&&*(info->p->p+2)!=61) {
            info->p->p+=2;
            sline_real_44=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_45=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "30op.nc", 1582, 1394);
            info->sline_real=sline_real_44;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1585, 1399, "struct sNode");
            _inf_obj_value9=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value1=sModNode_initialize((struct sModNode* )come_increment_ref_count((struct sModNode *)come_calloc(1, sizeof(struct sModNode )*(1), "30op.nc", 1585, 1395, "struct sModNode* "), "30op.nc", 1585, 1396),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1585, 1397),(struct sNode*)come_increment_ref_count(right_45, "30op.nc", 1585, 1398),(_Bool)1,info))), "30op.nc", 1585, 1400);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value9, "30op.nc", 1585, 1402);
            (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1585, 1401) :0);
            come_call_finalizer(sModNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1585, 1403);
            ((right_45) ? right_45 = come_decrement_ref_count(right_45, ((struct sNode*)right_45)->finalize, ((struct sNode*)right_45)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1590, 1404):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "30op.nc", 1594, 1405);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 1594, 1406):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 1594, 1407):(void*)0);
    return __result_obj__0;
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

static struct sMultNode* sMultNode_clone(struct sMultNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_clone"; neo_current_frame = &fr;
    struct sMultNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sMultNode*  result  ;
    char*  __dec_obj144  ;
    struct sNode* __dec_obj145;
    struct sNode* __dec_obj146;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sMultNode* )come_increment_ref_count((struct sMultNode *)come_calloc(1, sizeof(struct sMultNode )*(1), "sMultNode_clone", 5, 1316, "struct sMultNode* "), "sMultNode_clone", 5, 1317);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj144=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sMultNode_clone", 7, 1318, "char* "), "sMultNode_clone", 7, 1320);
        __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0, (void*)0, "sMultNode_clone", 7, 1319);
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
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sMultNode_clone", 10, 1322);
        (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0, (void*)0, "sMultNode_clone", 10, 1321) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj146=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sMultNode_clone", 11, 1324);
        (__dec_obj146 ? __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0, (void*)0, "sMultNode_clone", 11, 1323) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sMultNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sMultNode_clone}", 12, 1325);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_clone"; neo_current_frame = &fr;
    struct sDivNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDivNode*  result  ;
    char*  __dec_obj148  ;
    struct sNode* __dec_obj149;
    struct sNode* __dec_obj150;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDivNode* )come_increment_ref_count((struct sDivNode *)come_calloc(1, sizeof(struct sDivNode )*(1), "sDivNode_clone", 5, 1337, "struct sDivNode* "), "sDivNode_clone", 5, 1338);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj148=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDivNode_clone", 7, 1339, "char* "), "sDivNode_clone", 7, 1341);
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0, "sDivNode_clone", 7, 1340);
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
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sDivNode_clone", 10, 1343);
        (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0, (void*)0, "sDivNode_clone", 10, 1342) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj150=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sDivNode_clone", 11, 1345);
        (__dec_obj150 ? __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0, (void*)0, "sDivNode_clone", 11, 1344) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sDivNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDivNode_clone}", 12, 1346);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sModNode* sModNode_clone(struct sModNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_clone"; neo_current_frame = &fr;
    struct sModNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sModNode*  result  ;
    char*  __dec_obj152  ;
    struct sNode* __dec_obj153;
    struct sNode* __dec_obj154;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sModNode* )come_increment_ref_count((struct sModNode *)come_calloc(1, sizeof(struct sModNode )*(1), "sModNode_clone", 5, 1358, "struct sModNode* "), "sModNode_clone", 5, 1359);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj152=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sModNode_clone", 7, 1360, "char* "), "sModNode_clone", 7, 1362);
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0, "sModNode_clone", 7, 1361);
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
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sModNode_clone", 10, 1364);
        (__dec_obj153 ? __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0, (void*)0, "sModNode_clone", 10, 1363) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj154=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sModNode_clone", 11, 1366);
        (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0, (void*)0, "sModNode_clone", 11, 1365) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sModNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sModNode_clone}", 12, 1367);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* add_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_exp"; neo_current_frame = &fr;
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
    node=(struct sNode*)come_increment_ref_count(mult_exp(info), "30op.nc", 1599, 1408);
    parse_sharp_v5(info);
    while(span$1char$p_operator_derefference(info->p)) {
        if(span$1char$p_operator_derefference(info->p)==43&&*(info->p->p+1)!=61&&*(info->p->p+1)!=43) {
            info->p->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(mult_exp(info), "30op.nc", 1611, 1409);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1614, 1414, "struct sNode");
            _inf_obj_value10=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value1=sAddNode_initialize((struct sAddNode* )come_increment_ref_count((struct sAddNode *)come_calloc(1, sizeof(struct sAddNode )*(1), "30op.nc", 1614, 1410, "struct sAddNode* "), "30op.nc", 1614, 1411),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1614, 1412),(struct sNode*)come_increment_ref_count(right, "30op.nc", 1614, 1413),(_Bool)0,info))), "30op.nc", 1614, 1415);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value10, "30op.nc", 1614, 1417);
            (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1614, 1416) :0);
            come_call_finalizer(sAddNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1614, 1418);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1655, 1419):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==45&&*(info->p->p+1)!=61&&*(info->p->p+1)!=45&&*(info->p->p+1)!=62) {
            info->p->p++;
            sline_real_46=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_47=(struct sNode*)come_increment_ref_count(mult_exp(info), "30op.nc", 1623, 1420);
            info->sline_real=sline_real_46;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1626, 1425, "struct sNode");
            _inf_obj_value11=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value1=sSubNode_initialize((struct sSubNode* )come_increment_ref_count((struct sSubNode *)come_calloc(1, sizeof(struct sSubNode )*(1), "30op.nc", 1626, 1421, "struct sSubNode* "), "30op.nc", 1626, 1422),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1626, 1423),(struct sNode*)come_increment_ref_count(right_47, "30op.nc", 1626, 1424),(_Bool)0,info))), "30op.nc", 1626, 1426);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value11, "30op.nc", 1626, 1438);
            (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1626, 1437) :0);
            come_call_finalizer(sSubNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1626, 1439);
            ((right_47) ? right_47 = come_decrement_ref_count(right_47, ((struct sNode*)right_47)->finalize, ((struct sNode*)right_47)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1655, 1440):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==43&&*(info->p->p+2)!=61&&*(info->p->p+2)!=43) {
            info->p->p+=2;
            sline_real_48=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_49=(struct sNode*)come_increment_ref_count(mult_exp(info), "30op.nc", 1635, 1441);
            info->sline_real=sline_real_48;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1638, 1446, "struct sNode");
            _inf_obj_value12=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value1=sAddNode_initialize((struct sAddNode* )come_increment_ref_count((struct sAddNode *)come_calloc(1, sizeof(struct sAddNode )*(1), "30op.nc", 1638, 1442, "struct sAddNode* "), "30op.nc", 1638, 1443),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1638, 1444),(struct sNode*)come_increment_ref_count(right_49, "30op.nc", 1638, 1445),(_Bool)1,info))), "30op.nc", 1638, 1447);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value12, "30op.nc", 1638, 1449);
            (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1638, 1448) :0);
            come_call_finalizer(sAddNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1638, 1450);
            ((right_49) ? right_49 = come_decrement_ref_count(right_49, ((struct sNode*)right_49)->finalize, ((struct sNode*)right_49)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1655, 1451):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==45&&*(info->p->p+2)!=61&&*(info->p->p+2)!=45&&*(info->p->p+2)!=62) {
            info->p->p+=2;
            sline_real_50=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_51=(struct sNode*)come_increment_ref_count(mult_exp(info), "30op.nc", 1647, 1452);
            info->sline_real=sline_real_50;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1650, 1457, "struct sNode");
            _inf_obj_value13=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value1=sSubNode_initialize((struct sSubNode* )come_increment_ref_count((struct sSubNode *)come_calloc(1, sizeof(struct sSubNode )*(1), "30op.nc", 1650, 1453, "struct sSubNode* "), "30op.nc", 1650, 1454),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1650, 1455),(struct sNode*)come_increment_ref_count(right_51, "30op.nc", 1650, 1456),(_Bool)1,info))), "30op.nc", 1650, 1458);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value13, "30op.nc", 1650, 1460);
            (__dec_obj165 ? __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1650, 1459) :0);
            come_call_finalizer(sSubNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1650, 1461);
            ((right_51) ? right_51 = come_decrement_ref_count(right_51, ((struct sNode*)right_51)->finalize, ((struct sNode*)right_51)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1655, 1462):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "30op.nc", 1659, 1463);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 1659, 1464):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 1659, 1465):(void*)0);
    return __result_obj__0;
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_clone"; neo_current_frame = &fr;
    struct sSubNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSubNode*  result  ;
    char*  __dec_obj160  ;
    struct sNode* __dec_obj161;
    struct sNode* __dec_obj162;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSubNode* )come_increment_ref_count((struct sSubNode *)come_calloc(1, sizeof(struct sSubNode )*(1), "sSubNode_clone", 5, 1427, "struct sSubNode* "), "sSubNode_clone", 5, 1428);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj160=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSubNode_clone", 7, 1429, "char* "), "sSubNode_clone", 7, 1431);
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0, (void*)0, "sSubNode_clone", 7, 1430);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj161=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sSubNode_clone", 9, 1433);
        (__dec_obj161 ? __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0, (void*)0, "sSubNode_clone", 9, 1432) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj162=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sSubNode_clone", 10, 1435);
        (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0, (void*)0, "sSubNode_clone", 10, 1434) :0);
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
        __result_obj__0 = result;
    come_call_finalizer(sSubNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sSubNode_clone}", 12, 1436);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* shift_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "shift_exp"; neo_current_frame = &fr;
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
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(add_exp(info), "30op.nc", 1666, 1466);
    parse_sharp_v5(info);
    while(span$1char$p_operator_derefference(info->p)) {
        if(span$1char$p_operator_derefference(info->p)==60&&*(info->p->p+1)==60&&*(info->p->p+2)!=61) {
            info->p->p+=2;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(add_exp(info), "30op.nc", 1677, 1467);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1680, 1472, "struct sNode");
            _inf_obj_value14=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value1=sLShiftNode_initialize((struct sLShiftNode* )come_increment_ref_count((struct sLShiftNode *)come_calloc(1, sizeof(struct sLShiftNode )*(1), "30op.nc", 1680, 1468, "struct sLShiftNode* "), "30op.nc", 1680, 1469),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1680, 1470),(struct sNode*)come_increment_ref_count(right, "30op.nc", 1680, 1471),(_Bool)0,info))), "30op.nc", 1680, 1473);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value14, "30op.nc", 1680, 1485);
            (__dec_obj169 ? __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1680, 1484) :0);
            come_call_finalizer(sLShiftNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1680, 1486);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1718, 1487):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==62&&*(info->p->p+1)==62&&*(info->p->p+2)!=61&&*(info->p->p+2)!=62) {
            info->p->p+=2;
            sline_real_52=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_53=(struct sNode*)come_increment_ref_count(add_exp(info), "30op.nc", 1688, 1488);
            info->sline_real=sline_real_52;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1691, 1493, "struct sNode");
            _inf_obj_value15=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value1=sRShiftNode_initialize((struct sRShiftNode* )come_increment_ref_count((struct sRShiftNode *)come_calloc(1, sizeof(struct sRShiftNode )*(1), "30op.nc", 1691, 1489, "struct sRShiftNode* "), "30op.nc", 1691, 1490),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1691, 1491),(struct sNode*)come_increment_ref_count(right_53, "30op.nc", 1691, 1492),(_Bool)0,info))), "30op.nc", 1691, 1494);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value15, "30op.nc", 1691, 1506);
            (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1691, 1505) :0);
            come_call_finalizer(sRShiftNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1691, 1507);
            ((right_53) ? right_53 = come_decrement_ref_count(right_53, ((struct sNode*)right_53)->finalize, ((struct sNode*)right_53)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1718, 1508):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==60&&*(info->p->p+2)==60&&*(info->p->p+3)!=61) {
            info->p->p+=3;
            sline_real_54=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_55=(struct sNode*)come_increment_ref_count(add_exp(info), "30op.nc", 1699, 1509);
            info->sline_real=sline_real_54;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1702, 1514, "struct sNode");
            _inf_obj_value16=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value1=sLShiftNode_initialize((struct sLShiftNode* )come_increment_ref_count((struct sLShiftNode *)come_calloc(1, sizeof(struct sLShiftNode )*(1), "30op.nc", 1702, 1510, "struct sLShiftNode* "), "30op.nc", 1702, 1511),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1702, 1512),(struct sNode*)come_increment_ref_count(right_55, "30op.nc", 1702, 1513),(_Bool)1,info))), "30op.nc", 1702, 1515);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value16, "30op.nc", 1702, 1517);
            (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1702, 1516) :0);
            come_call_finalizer(sLShiftNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1702, 1518);
            ((right_55) ? right_55 = come_decrement_ref_count(right_55, ((struct sNode*)right_55)->finalize, ((struct sNode*)right_55)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1718, 1519):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==62&&*(info->p->p+2)==62&&*(info->p->p+3)!=61&&*(info->p->p+3)!=62) {
            info->p->p+=3;
            sline_real_56=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_57=(struct sNode*)come_increment_ref_count(add_exp(info), "30op.nc", 1710, 1520);
            info->sline_real=sline_real_56;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1713, 1525, "struct sNode");
            _inf_obj_value17=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value1=sRShiftNode_initialize((struct sRShiftNode* )come_increment_ref_count((struct sRShiftNode *)come_calloc(1, sizeof(struct sRShiftNode )*(1), "30op.nc", 1713, 1521, "struct sRShiftNode* "), "30op.nc", 1713, 1522),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1713, 1523),(struct sNode*)come_increment_ref_count(right_57, "30op.nc", 1713, 1524),(_Bool)1,info))), "30op.nc", 1713, 1526);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value17, "30op.nc", 1713, 1528);
            (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1713, 1527) :0);
            come_call_finalizer(sRShiftNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1713, 1529);
            ((right_57) ? right_57 = come_decrement_ref_count(right_57, ((struct sNode*)right_57)->finalize, ((struct sNode*)right_57)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1718, 1530):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "30op.nc", 1722, 1531);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 1722, 1532):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 1722, 1533):(void*)0);
    return __result_obj__0;
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_clone"; neo_current_frame = &fr;
    struct sLShiftNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLShiftNode*  result  ;
    char*  __dec_obj166  ;
    struct sNode* __dec_obj167;
    struct sNode* __dec_obj168;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLShiftNode* )come_increment_ref_count((struct sLShiftNode *)come_calloc(1, sizeof(struct sLShiftNode )*(1), "sLShiftNode_clone", 5, 1474, "struct sLShiftNode* "), "sLShiftNode_clone", 5, 1475);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj166=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLShiftNode_clone", 7, 1476, "char* "), "sLShiftNode_clone", 7, 1478);
        __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0, (void*)0, "sLShiftNode_clone", 7, 1477);
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
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sLShiftNode_clone", 10, 1480);
        (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0, (void*)0, "sLShiftNode_clone", 10, 1479) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj168=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sLShiftNode_clone", 11, 1482);
        (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0, (void*)0, "sLShiftNode_clone", 11, 1481) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sLShiftNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLShiftNode_clone}", 12, 1483);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_clone"; neo_current_frame = &fr;
    struct sRShiftNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sRShiftNode*  result  ;
    char*  __dec_obj170  ;
    struct sNode* __dec_obj171;
    struct sNode* __dec_obj172;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sRShiftNode* )come_increment_ref_count((struct sRShiftNode *)come_calloc(1, sizeof(struct sRShiftNode )*(1), "sRShiftNode_clone", 5, 1495, "struct sRShiftNode* "), "sRShiftNode_clone", 5, 1496);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj170=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sRShiftNode_clone", 7, 1497, "char* "), "sRShiftNode_clone", 7, 1499);
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0, (void*)0, "sRShiftNode_clone", 7, 1498);
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
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sRShiftNode_clone", 10, 1501);
        (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0, (void*)0, "sRShiftNode_clone", 10, 1500) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj172=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sRShiftNode_clone", 11, 1503);
        (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0, (void*)0, "sRShiftNode_clone", 11, 1502) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sRShiftNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sRShiftNode_clone}", 12, 1504);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* comparison_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "comparison_exp"; neo_current_frame = &fr;
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
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(shift_exp(info), "30op.nc", 1729, 1534);
    parse_sharp_v5(info);
    while(span$1char$p_operator_derefference(info->p)) {
        if(span$1char$p_operator_derefference(info->p)==62&&*(info->p->p+1)==61) {
            info->p->p+=2;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(shift_exp(info), "30op.nc", 1740, 1535);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1743, 1540, "struct sNode");
            _inf_obj_value18=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value1=sGtEqNode_initialize((struct sGtEqNode* )come_increment_ref_count((struct sGtEqNode *)come_calloc(1, sizeof(struct sGtEqNode )*(1), "30op.nc", 1743, 1536, "struct sGtEqNode* "), "30op.nc", 1743, 1537),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1743, 1538),(struct sNode*)come_increment_ref_count(right, "30op.nc", 1743, 1539),(_Bool)0,info))), "30op.nc", 1743, 1541);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value18, "30op.nc", 1743, 1553);
            (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1743, 1552) :0);
            come_call_finalizer(sGtEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1743, 1554);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1825, 1555):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==60&&*(info->p->p+1)==61) {
            info->p->p+=2;
            sline_real_58=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_59=(struct sNode*)come_increment_ref_count(shift_exp(info), "30op.nc", 1751, 1556);
            info->sline_real=sline_real_58;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1754, 1561, "struct sNode");
            _inf_obj_value19=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value1=sLtEqNode_initialize((struct sLtEqNode* )come_increment_ref_count((struct sLtEqNode *)come_calloc(1, sizeof(struct sLtEqNode )*(1), "30op.nc", 1754, 1557, "struct sLtEqNode* "), "30op.nc", 1754, 1558),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1754, 1559),(struct sNode*)come_increment_ref_count(right_59, "30op.nc", 1754, 1560),(_Bool)0,info))), "30op.nc", 1754, 1562);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value19, "30op.nc", 1754, 1574);
            (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1754, 1573) :0);
            come_call_finalizer(sLtEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1754, 1575);
            ((right_59) ? right_59 = come_decrement_ref_count(right_59, ((struct sNode*)right_59)->finalize, ((struct sNode*)right_59)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1825, 1576):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==62&&*(info->p->p+1)!=62) {
            info->p->p++;
            sline_real_60=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_61=(struct sNode*)come_increment_ref_count(shift_exp(info), "30op.nc", 1762, 1577);
            info->sline_real=sline_real_60;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1765, 1582, "struct sNode");
            _inf_obj_value20=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value1=sGtNode_initialize((struct sGtNode* )come_increment_ref_count((struct sGtNode *)come_calloc(1, sizeof(struct sGtNode )*(1), "30op.nc", 1765, 1578, "struct sGtNode* "), "30op.nc", 1765, 1579),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1765, 1580),(struct sNode*)come_increment_ref_count(right_61, "30op.nc", 1765, 1581),(_Bool)0,info))), "30op.nc", 1765, 1583);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value20, "30op.nc", 1765, 1595);
            (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1765, 1594) :0);
            come_call_finalizer(sGtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1765, 1596);
            ((right_61) ? right_61 = come_decrement_ref_count(right_61, ((struct sNode*)right_61)->finalize, ((struct sNode*)right_61)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1825, 1597):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==60&&*(info->p->p+1)!=60&&*(info->p->p+1)!=45) {
            info->p->p++;
            sline_real_62=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_63=(struct sNode*)come_increment_ref_count(shift_exp(info), "30op.nc", 1773, 1598);
            info->sline_real=sline_real_62;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1776, 1603, "struct sNode");
            _inf_obj_value21=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value1=sLtNode_initialize((struct sLtNode* )come_increment_ref_count((struct sLtNode *)come_calloc(1, sizeof(struct sLtNode )*(1), "30op.nc", 1776, 1599, "struct sLtNode* "), "30op.nc", 1776, 1600),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1776, 1601),(struct sNode*)come_increment_ref_count(right_63, "30op.nc", 1776, 1602),(_Bool)0,info))), "30op.nc", 1776, 1604);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value21, "30op.nc", 1776, 1616);
            (__dec_obj191 ? __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1776, 1615) :0);
            come_call_finalizer(sLtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1776, 1617);
            ((right_63) ? right_63 = come_decrement_ref_count(right_63, ((struct sNode*)right_63)->finalize, ((struct sNode*)right_63)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1825, 1618):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==62&&*(info->p->p+2)==61) {
            info->p->p+=3;
            sline_real_64=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_65=(struct sNode*)come_increment_ref_count(shift_exp(info), "30op.nc", 1784, 1619);
            info->sline_real=sline_real_64;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1787, 1624, "struct sNode");
            _inf_obj_value22=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value1=sGtEqNode_initialize((struct sGtEqNode* )come_increment_ref_count((struct sGtEqNode *)come_calloc(1, sizeof(struct sGtEqNode )*(1), "30op.nc", 1787, 1620, "struct sGtEqNode* "), "30op.nc", 1787, 1621),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1787, 1622),(struct sNode*)come_increment_ref_count(right_65, "30op.nc", 1787, 1623),(_Bool)1,info))), "30op.nc", 1787, 1625);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value22, "30op.nc", 1787, 1627);
            (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1787, 1626) :0);
            come_call_finalizer(sGtEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1787, 1628);
            ((right_65) ? right_65 = come_decrement_ref_count(right_65, ((struct sNode*)right_65)->finalize, ((struct sNode*)right_65)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1825, 1629):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==60&&*(info->p->p+2)==61) {
            info->p->p+=3;
            sline_real_66=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_67=(struct sNode*)come_increment_ref_count(shift_exp(info), "30op.nc", 1795, 1630);
            info->sline_real=sline_real_66;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1798, 1635, "struct sNode");
            _inf_obj_value23=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value1=sLtEqNode_initialize((struct sLtEqNode* )come_increment_ref_count((struct sLtEqNode *)come_calloc(1, sizeof(struct sLtEqNode )*(1), "30op.nc", 1798, 1631, "struct sLtEqNode* "), "30op.nc", 1798, 1632),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1798, 1633),(struct sNode*)come_increment_ref_count(right_67, "30op.nc", 1798, 1634),(_Bool)1,info))), "30op.nc", 1798, 1636);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value23, "30op.nc", 1798, 1638);
            (__dec_obj193 ? __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1798, 1637) :0);
            come_call_finalizer(sLtEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1798, 1639);
            ((right_67) ? right_67 = come_decrement_ref_count(right_67, ((struct sNode*)right_67)->finalize, ((struct sNode*)right_67)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1825, 1640):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==62&&*(info->p->p+2)!=62) {
            info->p->p+=2;
            sline_real_68=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_69=(struct sNode*)come_increment_ref_count(shift_exp(info), "30op.nc", 1806, 1641);
            info->sline_real=sline_real_68;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1809, 1646, "struct sNode");
            _inf_obj_value24=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value1=sGtNode_initialize((struct sGtNode* )come_increment_ref_count((struct sGtNode *)come_calloc(1, sizeof(struct sGtNode )*(1), "30op.nc", 1809, 1642, "struct sGtNode* "), "30op.nc", 1809, 1643),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1809, 1644),(struct sNode*)come_increment_ref_count(right_69, "30op.nc", 1809, 1645),(_Bool)1,info))), "30op.nc", 1809, 1647);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value24, "30op.nc", 1809, 1649);
            (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1809, 1648) :0);
            come_call_finalizer(sGtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1809, 1650);
            ((right_69) ? right_69 = come_decrement_ref_count(right_69, ((struct sNode*)right_69)->finalize, ((struct sNode*)right_69)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1825, 1651):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==60&&*(info->p->p+2)!=60&&*(info->p->p+2)!=45) {
            info->p->p+=2;
            sline_real_70=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_71=(struct sNode*)come_increment_ref_count(shift_exp(info), "30op.nc", 1817, 1652);
            info->sline_real=sline_real_70;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1820, 1657, "struct sNode");
            _inf_obj_value25=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value1=sLtNode_initialize((struct sLtNode* )come_increment_ref_count((struct sLtNode *)come_calloc(1, sizeof(struct sLtNode )*(1), "30op.nc", 1820, 1653, "struct sLtNode* "), "30op.nc", 1820, 1654),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1820, 1655),(struct sNode*)come_increment_ref_count(right_71, "30op.nc", 1820, 1656),(_Bool)1,info))), "30op.nc", 1820, 1658);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value25, "30op.nc", 1820, 1660);
            (__dec_obj195 ? __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1820, 1659) :0);
            come_call_finalizer(sLtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1820, 1661);
            ((right_71) ? right_71 = come_decrement_ref_count(right_71, ((struct sNode*)right_71)->finalize, ((struct sNode*)right_71)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1825, 1662):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "30op.nc", 1829, 1663);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 1829, 1664):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 1829, 1665):(void*)0);
    return __result_obj__0;
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_clone"; neo_current_frame = &fr;
    struct sGtEqNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGtEqNode*  result  ;
    char*  __dec_obj176  ;
    struct sNode* __dec_obj177;
    struct sNode* __dec_obj178;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGtEqNode* )come_increment_ref_count((struct sGtEqNode *)come_calloc(1, sizeof(struct sGtEqNode )*(1), "sGtEqNode_clone", 5, 1542, "struct sGtEqNode* "), "sGtEqNode_clone", 5, 1543);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj176=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGtEqNode_clone", 7, 1544, "char* "), "sGtEqNode_clone", 7, 1546);
        __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0, (void*)0, "sGtEqNode_clone", 7, 1545);
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
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sGtEqNode_clone", 10, 1548);
        (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0, (void*)0, "sGtEqNode_clone", 10, 1547) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj178=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sGtEqNode_clone", 11, 1550);
        (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0, (void*)0, "sGtEqNode_clone", 11, 1549) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sGtEqNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sGtEqNode_clone}", 12, 1551);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_clone"; neo_current_frame = &fr;
    struct sLtEqNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLtEqNode*  result  ;
    char*  __dec_obj180  ;
    struct sNode* __dec_obj181;
    struct sNode* __dec_obj182;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLtEqNode* )come_increment_ref_count((struct sLtEqNode *)come_calloc(1, sizeof(struct sLtEqNode )*(1), "sLtEqNode_clone", 5, 1563, "struct sLtEqNode* "), "sLtEqNode_clone", 5, 1564);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj180=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLtEqNode_clone", 7, 1565, "char* "), "sLtEqNode_clone", 7, 1567);
        __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0,0, (void*)0, "sLtEqNode_clone", 7, 1566);
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
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sLtEqNode_clone", 10, 1569);
        (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0, (void*)0, "sLtEqNode_clone", 10, 1568) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj182=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sLtEqNode_clone", 11, 1571);
        (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0, (void*)0, "sLtEqNode_clone", 11, 1570) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sLtEqNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLtEqNode_clone}", 12, 1572);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_clone"; neo_current_frame = &fr;
    struct sGtNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGtNode*  result  ;
    char*  __dec_obj184  ;
    struct sNode* __dec_obj185;
    struct sNode* __dec_obj186;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGtNode* )come_increment_ref_count((struct sGtNode *)come_calloc(1, sizeof(struct sGtNode )*(1), "sGtNode_clone", 5, 1584, "struct sGtNode* "), "sGtNode_clone", 5, 1585);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj184=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGtNode_clone", 7, 1586, "char* "), "sGtNode_clone", 7, 1588);
        __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0,0, (void*)0, "sGtNode_clone", 7, 1587);
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
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sGtNode_clone", 10, 1590);
        (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0, (void*)0, "sGtNode_clone", 10, 1589) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj186=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sGtNode_clone", 11, 1592);
        (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0, (void*)0, "sGtNode_clone", 11, 1591) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sGtNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sGtNode_clone}", 12, 1593);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_clone"; neo_current_frame = &fr;
    struct sLtNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLtNode*  result  ;
    char*  __dec_obj188  ;
    struct sNode* __dec_obj189;
    struct sNode* __dec_obj190;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLtNode* )come_increment_ref_count((struct sLtNode *)come_calloc(1, sizeof(struct sLtNode )*(1), "sLtNode_clone", 5, 1605, "struct sLtNode* "), "sLtNode_clone", 5, 1606);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj188=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLtNode_clone", 7, 1607, "char* "), "sLtNode_clone", 7, 1609);
        __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0, (void*)0, "sLtNode_clone", 7, 1608);
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
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sLtNode_clone", 10, 1611);
        (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0, (void*)0, "sLtNode_clone", 10, 1610) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj190=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sLtNode_clone", 11, 1613);
        (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0, (void*)0, "sLtNode_clone", 11, 1612) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sLtNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLtNode_clone}", 12, 1614);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* eq_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "eq_exp"; neo_current_frame = &fr;
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
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(comparison_exp(info), "30op.nc", 1836, 1666);
    parse_sharp_v5(info);
    while(span$1char$p_operator_derefference(info->p)) {
        if(span$1char$p_operator_derefference(info->p)==61&&*(info->p->p+1)==61&&*(info->p->p+2)==61) {
            info->p->p+=3;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(comparison_exp(info), "30op.nc", 1847, 1667);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1850, 1672, "struct sNode");
            _inf_obj_value26=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value1=sEq2Node_initialize((struct sEq2Node* )come_increment_ref_count((struct sEq2Node *)come_calloc(1, sizeof(struct sEq2Node )*(1), "30op.nc", 1850, 1668, "struct sEq2Node* "), "30op.nc", 1850, 1669),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1850, 1670),(struct sNode*)come_increment_ref_count(right, "30op.nc", 1850, 1671),(_Bool)0,info))), "30op.nc", 1850, 1673);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value26, "30op.nc", 1850, 1685);
            (__dec_obj199 ? __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1850, 1684) :0);
            come_call_finalizer(sEq2Node_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1850, 1686);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1932, 1687):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==61&&*(info->p->p+1)==61) {
            info->p->p+=2;
            sline_real_72=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_73=(struct sNode*)come_increment_ref_count(comparison_exp(info), "30op.nc", 1858, 1688);
            info->sline_real=sline_real_72;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1861, 1693, "struct sNode");
            _inf_obj_value27=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value1=sEqNode_initialize((struct sEqNode* )come_increment_ref_count((struct sEqNode *)come_calloc(1, sizeof(struct sEqNode )*(1), "30op.nc", 1861, 1689, "struct sEqNode* "), "30op.nc", 1861, 1690),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1861, 1691),(struct sNode*)come_increment_ref_count(right_73, "30op.nc", 1861, 1692),(_Bool)0,info))), "30op.nc", 1861, 1694);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value27, "30op.nc", 1861, 1706);
            (__dec_obj203 ? __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1861, 1705) :0);
            come_call_finalizer(sEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1861, 1707);
            ((right_73) ? right_73 = come_decrement_ref_count(right_73, ((struct sNode*)right_73)->finalize, ((struct sNode*)right_73)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1932, 1708):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==33&&*(info->p->p+1)==61&&*(info->p->p+2)==61) {
            info->p->p+=3;
            sline_real_74=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_75=(struct sNode*)come_increment_ref_count(comparison_exp(info), "30op.nc", 1869, 1709);
            info->sline_real=sline_real_74;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1872, 1714, "struct sNode");
            _inf_obj_value28=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value1=sNotEq2Node_initialize((struct sNotEq2Node* )come_increment_ref_count((struct sNotEq2Node *)come_calloc(1, sizeof(struct sNotEq2Node )*(1), "30op.nc", 1872, 1710, "struct sNotEq2Node* "), "30op.nc", 1872, 1711),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1872, 1712),(struct sNode*)come_increment_ref_count(right_75, "30op.nc", 1872, 1713),(_Bool)0,info))), "30op.nc", 1872, 1715);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value28, "30op.nc", 1872, 1727);
            (__dec_obj207 ? __dec_obj207 = come_decrement_ref_count(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1872, 1726) :0);
            come_call_finalizer(sNotEq2Node_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1872, 1728);
            ((right_75) ? right_75 = come_decrement_ref_count(right_75, ((struct sNode*)right_75)->finalize, ((struct sNode*)right_75)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1932, 1729):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==33&&*(info->p->p+1)==61) {
            info->p->p+=2;
            sline_real_76=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_77=(struct sNode*)come_increment_ref_count(comparison_exp(info), "30op.nc", 1880, 1730);
            info->sline_real=sline_real_76;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1883, 1735, "struct sNode");
            _inf_obj_value29=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value1=sNotEqNode_initialize((struct sNotEqNode* )come_increment_ref_count((struct sNotEqNode *)come_calloc(1, sizeof(struct sNotEqNode )*(1), "30op.nc", 1883, 1731, "struct sNotEqNode* "), "30op.nc", 1883, 1732),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1883, 1733),(struct sNode*)come_increment_ref_count(right_77, "30op.nc", 1883, 1734),(_Bool)0,info))), "30op.nc", 1883, 1736);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value29, "30op.nc", 1883, 1748);
            (__dec_obj211 ? __dec_obj211 = come_decrement_ref_count(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1883, 1747) :0);
            come_call_finalizer(sNotEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1883, 1749);
            ((right_77) ? right_77 = come_decrement_ref_count(right_77, ((struct sNode*)right_77)->finalize, ((struct sNode*)right_77)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1932, 1750):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==61&&*(info->p->p+2)==61&&*(info->p->p+3)==61) {
            info->p->p+=4;
            sline_real_78=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_79=(struct sNode*)come_increment_ref_count(comparison_exp(info), "30op.nc", 1891, 1751);
            info->sline_real=sline_real_78;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1894, 1756, "struct sNode");
            _inf_obj_value30=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value1=sEq2Node_initialize((struct sEq2Node* )come_increment_ref_count((struct sEq2Node *)come_calloc(1, sizeof(struct sEq2Node )*(1), "30op.nc", 1894, 1752, "struct sEq2Node* "), "30op.nc", 1894, 1753),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1894, 1754),(struct sNode*)come_increment_ref_count(right_79, "30op.nc", 1894, 1755),(_Bool)1,info))), "30op.nc", 1894, 1757);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value30, "30op.nc", 1894, 1759);
            (__dec_obj212 ? __dec_obj212 = come_decrement_ref_count(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1894, 1758) :0);
            come_call_finalizer(sEq2Node_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1894, 1760);
            ((right_79) ? right_79 = come_decrement_ref_count(right_79, ((struct sNode*)right_79)->finalize, ((struct sNode*)right_79)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1932, 1761):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==61&&*(info->p->p+2)==61) {
            info->p->p+=3;
            sline_real_80=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_81=(struct sNode*)come_increment_ref_count(comparison_exp(info), "30op.nc", 1902, 1762);
            info->sline_real=sline_real_80;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1905, 1767, "struct sNode");
            _inf_obj_value31=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value1=sEqNode_initialize((struct sEqNode* )come_increment_ref_count((struct sEqNode *)come_calloc(1, sizeof(struct sEqNode )*(1), "30op.nc", 1905, 1763, "struct sEqNode* "), "30op.nc", 1905, 1764),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1905, 1765),(struct sNode*)come_increment_ref_count(right_81, "30op.nc", 1905, 1766),(_Bool)1,info))), "30op.nc", 1905, 1768);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value31, "30op.nc", 1905, 1770);
            (__dec_obj213 ? __dec_obj213 = come_decrement_ref_count(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1905, 1769) :0);
            come_call_finalizer(sEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1905, 1771);
            ((right_81) ? right_81 = come_decrement_ref_count(right_81, ((struct sNode*)right_81)->finalize, ((struct sNode*)right_81)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1932, 1772):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==33&&*(info->p->p+2)==61&&*(info->p->p+3)==61) {
            info->p->p+=4;
            sline_real_82=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_83=(struct sNode*)come_increment_ref_count(comparison_exp(info), "30op.nc", 1913, 1773);
            info->sline_real=sline_real_82;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1916, 1778, "struct sNode");
            _inf_obj_value32=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value1=sNotEq2Node_initialize((struct sNotEq2Node* )come_increment_ref_count((struct sNotEq2Node *)come_calloc(1, sizeof(struct sNotEq2Node )*(1), "30op.nc", 1916, 1774, "struct sNotEq2Node* "), "30op.nc", 1916, 1775),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1916, 1776),(struct sNode*)come_increment_ref_count(right_83, "30op.nc", 1916, 1777),(_Bool)1,info))), "30op.nc", 1916, 1779);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value32, "30op.nc", 1916, 1781);
            (__dec_obj214 ? __dec_obj214 = come_decrement_ref_count(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1916, 1780) :0);
            come_call_finalizer(sNotEq2Node_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1916, 1782);
            ((right_83) ? right_83 = come_decrement_ref_count(right_83, ((struct sNode*)right_83)->finalize, ((struct sNode*)right_83)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1932, 1783):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==33&&*(info->p->p+2)==61) {
            info->p->p+=3;
            sline_real_84=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_85=(struct sNode*)come_increment_ref_count(comparison_exp(info), "30op.nc", 1924, 1784);
            info->sline_real=sline_real_84;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1927, 1789, "struct sNode");
            _inf_obj_value33=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value1=sNotEqNode_initialize((struct sNotEqNode* )come_increment_ref_count((struct sNotEqNode *)come_calloc(1, sizeof(struct sNotEqNode )*(1), "30op.nc", 1927, 1785, "struct sNotEqNode* "), "30op.nc", 1927, 1786),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1927, 1787),(struct sNode*)come_increment_ref_count(right_85, "30op.nc", 1927, 1788),(_Bool)1,info))), "30op.nc", 1927, 1790);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value33, "30op.nc", 1927, 1792);
            (__dec_obj215 ? __dec_obj215 = come_decrement_ref_count(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1927, 1791) :0);
            come_call_finalizer(sNotEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1927, 1793);
            ((right_85) ? right_85 = come_decrement_ref_count(right_85, ((struct sNode*)right_85)->finalize, ((struct sNode*)right_85)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1932, 1794):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "30op.nc", 1936, 1795);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 1936, 1796):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 1936, 1797):(void*)0);
    return __result_obj__0;
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_clone"; neo_current_frame = &fr;
    struct sEq2Node* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sEq2Node*  result  ;
    char*  __dec_obj196  ;
    struct sNode* __dec_obj197;
    struct sNode* __dec_obj198;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sEq2Node* )come_increment_ref_count((struct sEq2Node *)come_calloc(1, sizeof(struct sEq2Node )*(1), "sEq2Node_clone", 5, 1674, "struct sEq2Node* "), "sEq2Node_clone", 5, 1675);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj196=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sEq2Node_clone", 7, 1676, "char* "), "sEq2Node_clone", 7, 1678);
        __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0,0, (void*)0, "sEq2Node_clone", 7, 1677);
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
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sEq2Node_clone", 10, 1680);
        (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0, (void*)0, "sEq2Node_clone", 10, 1679) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj198=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sEq2Node_clone", 11, 1682);
        (__dec_obj198 ? __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0, (void*)0, "sEq2Node_clone", 11, 1681) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sEq2Node_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sEq2Node_clone}", 12, 1683);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_clone"; neo_current_frame = &fr;
    struct sEqNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sEqNode*  result  ;
    char*  __dec_obj200  ;
    struct sNode* __dec_obj201;
    struct sNode* __dec_obj202;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sEqNode* )come_increment_ref_count((struct sEqNode *)come_calloc(1, sizeof(struct sEqNode )*(1), "sEqNode_clone", 5, 1695, "struct sEqNode* "), "sEqNode_clone", 5, 1696);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj200=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sEqNode_clone", 7, 1697, "char* "), "sEqNode_clone", 7, 1699);
        __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0,0, (void*)0, "sEqNode_clone", 7, 1698);
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
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sEqNode_clone", 10, 1701);
        (__dec_obj201 ? __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0, (void*)0, "sEqNode_clone", 10, 1700) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj202=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sEqNode_clone", 11, 1703);
        (__dec_obj202 ? __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0, (void*)0, "sEqNode_clone", 11, 1702) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sEqNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sEqNode_clone}", 12, 1704);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_clone"; neo_current_frame = &fr;
    struct sNotEq2Node* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNotEq2Node*  result  ;
    char*  __dec_obj204  ;
    struct sNode* __dec_obj205;
    struct sNode* __dec_obj206;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNotEq2Node* )come_increment_ref_count((struct sNotEq2Node *)come_calloc(1, sizeof(struct sNotEq2Node )*(1), "sNotEq2Node_clone", 5, 1716, "struct sNotEq2Node* "), "sNotEq2Node_clone", 5, 1717);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj204=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNotEq2Node_clone", 7, 1718, "char* "), "sNotEq2Node_clone", 7, 1720);
        __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0,0, (void*)0, "sNotEq2Node_clone", 7, 1719);
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
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sNotEq2Node_clone", 10, 1722);
        (__dec_obj205 ? __dec_obj205 = come_decrement_ref_count(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0, (void*)0, "sNotEq2Node_clone", 10, 1721) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj206=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sNotEq2Node_clone", 11, 1724);
        (__dec_obj206 ? __dec_obj206 = come_decrement_ref_count(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0, (void*)0, "sNotEq2Node_clone", 11, 1723) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sNotEq2Node_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sNotEq2Node_clone}", 12, 1725);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_clone"; neo_current_frame = &fr;
    struct sNotEqNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNotEqNode*  result  ;
    char*  __dec_obj208  ;
    struct sNode* __dec_obj209;
    struct sNode* __dec_obj210;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNotEqNode* )come_increment_ref_count((struct sNotEqNode *)come_calloc(1, sizeof(struct sNotEqNode )*(1), "sNotEqNode_clone", 5, 1737, "struct sNotEqNode* "), "sNotEqNode_clone", 5, 1738);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj208=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNotEqNode_clone", 7, 1739, "char* "), "sNotEqNode_clone", 7, 1741);
        __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0,0, (void*)0, "sNotEqNode_clone", 7, 1740);
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
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sNotEqNode_clone", 10, 1743);
        (__dec_obj209 ? __dec_obj209 = come_decrement_ref_count(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0, (void*)0, "sNotEqNode_clone", 10, 1742) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj210=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sNotEqNode_clone", 11, 1745);
        (__dec_obj210 ? __dec_obj210 = come_decrement_ref_count(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0, (void*)0, "sNotEqNode_clone", 11, 1744) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sNotEqNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sNotEqNode_clone}", 12, 1746);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* and_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "and_exp"; neo_current_frame = &fr;
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
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(eq_exp(info), "30op.nc", 1943, 1798);
    skip_spaces_and_lf(info);
    while(span$1char$p_operator_derefference(info->p)) {
        if(!node->terminated(node->_protocol_obj)&&span$1char$p_operator_derefference(info->p)==38&&*(info->p->p+1)!=38&&*(info->p->p+1)!=61) {
            info->p->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(eq_exp(info), "30op.nc", 1954, 1799);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1957, 1804, "struct sNode");
            _inf_obj_value34=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value1=sAndNode_initialize((struct sAndNode* )come_increment_ref_count((struct sAndNode *)come_calloc(1, sizeof(struct sAndNode )*(1), "30op.nc", 1957, 1800, "struct sAndNode* "), "30op.nc", 1957, 1801),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1957, 1802),(struct sNode*)come_increment_ref_count(right, "30op.nc", 1957, 1803),(_Bool)0,info))), "30op.nc", 1957, 1805);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value34, "30op.nc", 1957, 1817);
            (__dec_obj219 ? __dec_obj219 = come_decrement_ref_count(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1957, 1816) :0);
            come_call_finalizer(sAndNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1957, 1818);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1973, 1819):(void*)0);
        }
        else if(!node->terminated(node->_protocol_obj)&&span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==38&&*(info->p->p+2)!=38&&*(info->p->p+2)!=61) {
            info->p->p+=2;
            sline_real_86=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_87=(struct sNode*)come_increment_ref_count(eq_exp(info), "30op.nc", 1965, 1820);
            info->sline_real=sline_real_86;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1968, 1825, "struct sNode");
            _inf_obj_value35=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value1=sAndNode_initialize((struct sAndNode* )come_increment_ref_count((struct sAndNode *)come_calloc(1, sizeof(struct sAndNode )*(1), "30op.nc", 1968, 1821, "struct sAndNode* "), "30op.nc", 1968, 1822),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1968, 1823),(struct sNode*)come_increment_ref_count(right_87, "30op.nc", 1968, 1824),(_Bool)1,info))), "30op.nc", 1968, 1826);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value35, "30op.nc", 1968, 1828);
            (__dec_obj220 ? __dec_obj220 = come_decrement_ref_count(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1968, 1827) :0);
            come_call_finalizer(sAndNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1968, 1829);
            ((right_87) ? right_87 = come_decrement_ref_count(right_87, ((struct sNode*)right_87)->finalize, ((struct sNode*)right_87)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 1973, 1830):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "30op.nc", 1977, 1831);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 1977, 1832):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 1977, 1833):(void*)0);
    return __result_obj__0;
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_clone"; neo_current_frame = &fr;
    struct sAndNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAndNode*  result  ;
    char*  __dec_obj216  ;
    struct sNode* __dec_obj217;
    struct sNode* __dec_obj218;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAndNode* )come_increment_ref_count((struct sAndNode *)come_calloc(1, sizeof(struct sAndNode )*(1), "sAndNode_clone", 5, 1806, "struct sAndNode* "), "sAndNode_clone", 5, 1807);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj216=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAndNode_clone", 7, 1808, "char* "), "sAndNode_clone", 7, 1810);
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0,0, (void*)0, "sAndNode_clone", 7, 1809);
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
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sAndNode_clone", 10, 1812);
        (__dec_obj217 ? __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0, (void*)0, "sAndNode_clone", 10, 1811) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj218=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sAndNode_clone", 11, 1814);
        (__dec_obj218 ? __dec_obj218 = come_decrement_ref_count(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0, (void*)0, "sAndNode_clone", 11, 1813) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sAndNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAndNode_clone}", 12, 1815);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* xor_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xor_exp"; neo_current_frame = &fr;
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
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(and_exp(info), "30op.nc", 1984, 1834);
    skip_spaces_and_lf(info);
    while(span$1char$p_operator_derefference(info->p)) {
        if(span$1char$p_operator_derefference(info->p)==94&&*(info->p->p+1)!=61) {
            info->p->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(and_exp(info), "30op.nc", 1995, 1835);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 1998, 1840, "struct sNode");
            _inf_obj_value36=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value1=sXOrNode_initialize((struct sXOrNode* )come_increment_ref_count((struct sXOrNode *)come_calloc(1, sizeof(struct sXOrNode )*(1), "30op.nc", 1998, 1836, "struct sXOrNode* "), "30op.nc", 1998, 1837),(struct sNode*)come_increment_ref_count(node, "30op.nc", 1998, 1838),(struct sNode*)come_increment_ref_count(right, "30op.nc", 1998, 1839),(_Bool)0,info))), "30op.nc", 1998, 1841);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value36, "30op.nc", 1998, 1853);
            (__dec_obj224 ? __dec_obj224 = come_decrement_ref_count(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0, (void*)0, "30op.nc", 1998, 1852) :0);
            come_call_finalizer(sXOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 1998, 1854);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 2014, 1855):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==94&&*(info->p->p+2)!=61) {
            info->p->p+=2;
            sline_real_88=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_89=(struct sNode*)come_increment_ref_count(and_exp(info), "30op.nc", 2006, 1856);
            info->sline_real=sline_real_88;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 2009, 1861, "struct sNode");
            _inf_obj_value37=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value1=sXOrNode_initialize((struct sXOrNode* )come_increment_ref_count((struct sXOrNode *)come_calloc(1, sizeof(struct sXOrNode )*(1), "30op.nc", 2009, 1857, "struct sXOrNode* "), "30op.nc", 2009, 1858),(struct sNode*)come_increment_ref_count(node, "30op.nc", 2009, 1859),(struct sNode*)come_increment_ref_count(right_89, "30op.nc", 2009, 1860),(_Bool)1,info))), "30op.nc", 2009, 1862);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value37, "30op.nc", 2009, 1864);
            (__dec_obj225 ? __dec_obj225 = come_decrement_ref_count(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0, (void*)0, "30op.nc", 2009, 1863) :0);
            come_call_finalizer(sXOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 2009, 1865);
            ((right_89) ? right_89 = come_decrement_ref_count(right_89, ((struct sNode*)right_89)->finalize, ((struct sNode*)right_89)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 2014, 1866):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "30op.nc", 2018, 1867);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 2018, 1868):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 2018, 1869):(void*)0);
    return __result_obj__0;
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_clone"; neo_current_frame = &fr;
    struct sXOrNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sXOrNode*  result  ;
    char*  __dec_obj221  ;
    struct sNode* __dec_obj222;
    struct sNode* __dec_obj223;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sXOrNode* )come_increment_ref_count((struct sXOrNode *)come_calloc(1, sizeof(struct sXOrNode )*(1), "sXOrNode_clone", 5, 1842, "struct sXOrNode* "), "sXOrNode_clone", 5, 1843);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj221=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sXOrNode_clone", 7, 1844, "char* "), "sXOrNode_clone", 7, 1846);
        __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0,0, (void*)0, "sXOrNode_clone", 7, 1845);
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
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sXOrNode_clone", 10, 1848);
        (__dec_obj222 ? __dec_obj222 = come_decrement_ref_count(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0, (void*)0, "sXOrNode_clone", 10, 1847) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj223=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sXOrNode_clone", 11, 1850);
        (__dec_obj223 ? __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0, (void*)0, "sXOrNode_clone", 11, 1849) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sXOrNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sXOrNode_clone}", 12, 1851);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* or_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "or_exp"; neo_current_frame = &fr;
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
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(xor_exp(info), "30op.nc", 2025, 1870);
    skip_spaces_and_lf(info);
    while(span$1char$p_operator_derefference(info->p)) {
        if(span$1char$p_operator_derefference(info->p)==124&&*(info->p->p+1)!=61&&*(info->p->p+1)!=124) {
            info->p->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(xor_exp(info), "30op.nc", 2036, 1871);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 2039, 1876, "struct sNode");
            _inf_obj_value38=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value1=sOrNode_initialize((struct sOrNode* )come_increment_ref_count((struct sOrNode *)come_calloc(1, sizeof(struct sOrNode )*(1), "30op.nc", 2039, 1872, "struct sOrNode* "), "30op.nc", 2039, 1873),(struct sNode*)come_increment_ref_count(node, "30op.nc", 2039, 1874),(struct sNode*)come_increment_ref_count(right, "30op.nc", 2039, 1875),(_Bool)0,info))), "30op.nc", 2039, 1877);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value38, "30op.nc", 2039, 1889);
            (__dec_obj229 ? __dec_obj229 = come_decrement_ref_count(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0, (void*)0, "30op.nc", 2039, 1888) :0);
            come_call_finalizer(sOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 2039, 1890);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 2055, 1891):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==124&&*(info->p->p+2)!=61&&*(info->p->p+2)!=124) {
            info->p->p+=2;
            sline_real_90=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_91=(struct sNode*)come_increment_ref_count(xor_exp(info), "30op.nc", 2047, 1892);
            info->sline_real=sline_real_90;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 2050, 1897, "struct sNode");
            _inf_obj_value39=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value1=sOrNode_initialize((struct sOrNode* )come_increment_ref_count((struct sOrNode *)come_calloc(1, sizeof(struct sOrNode )*(1), "30op.nc", 2050, 1893, "struct sOrNode* "), "30op.nc", 2050, 1894),(struct sNode*)come_increment_ref_count(node, "30op.nc", 2050, 1895),(struct sNode*)come_increment_ref_count(right_91, "30op.nc", 2050, 1896),(_Bool)1,info))), "30op.nc", 2050, 1898);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value39, "30op.nc", 2050, 1900);
            (__dec_obj230 ? __dec_obj230 = come_decrement_ref_count(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0, (void*)0, "30op.nc", 2050, 1899) :0);
            come_call_finalizer(sOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 2050, 1901);
            ((right_91) ? right_91 = come_decrement_ref_count(right_91, ((struct sNode*)right_91)->finalize, ((struct sNode*)right_91)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 2055, 1902):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "30op.nc", 2059, 1903);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 2059, 1904):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 2059, 1905):(void*)0);
    return __result_obj__0;
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_clone"; neo_current_frame = &fr;
    struct sOrNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOrNode*  result  ;
    char*  __dec_obj226  ;
    struct sNode* __dec_obj227;
    struct sNode* __dec_obj228;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sOrNode* )come_increment_ref_count((struct sOrNode *)come_calloc(1, sizeof(struct sOrNode )*(1), "sOrNode_clone", 5, 1878, "struct sOrNode* "), "sOrNode_clone", 5, 1879);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj226=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sOrNode_clone", 7, 1880, "char* "), "sOrNode_clone", 7, 1882);
        __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0,0, (void*)0, "sOrNode_clone", 7, 1881);
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
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sOrNode_clone", 10, 1884);
        (__dec_obj227 ? __dec_obj227 = come_decrement_ref_count(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0, (void*)0, "sOrNode_clone", 10, 1883) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj228=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sOrNode_clone", 11, 1886);
        (__dec_obj228 ? __dec_obj228 = come_decrement_ref_count(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0, (void*)0, "sOrNode_clone", 11, 1885) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sOrNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sOrNode_clone}", 12, 1887);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* andand_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "andand_exp"; neo_current_frame = &fr;
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
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(or_exp(info), "30op.nc", 2066, 1906);
    skip_spaces_and_lf(info);
    while(span$1char$p_operator_derefference(info->p)) {
        if(span$1char$p_operator_derefference(info->p)==38&&*(info->p->p+1)==38) {
            info->p->p+=2;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(or_exp(info), "30op.nc", 2077, 1907);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 2080, 1912, "struct sNode");
            _inf_obj_value40=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value1=sAndAndNode_initialize((struct sAndAndNode* )come_increment_ref_count((struct sAndAndNode *)come_calloc(1, sizeof(struct sAndAndNode )*(1), "30op.nc", 2080, 1908, "struct sAndAndNode* "), "30op.nc", 2080, 1909),(struct sNode*)come_increment_ref_count(node, "30op.nc", 2080, 1910),(struct sNode*)come_increment_ref_count(right, "30op.nc", 2080, 1911),(_Bool)0,info))), "30op.nc", 2080, 1913);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value40, "30op.nc", 2080, 1925);
            (__dec_obj234 ? __dec_obj234 = come_decrement_ref_count(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0, (void*)0, "30op.nc", 2080, 1924) :0);
            come_call_finalizer(sAndAndNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 2080, 1926);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 2096, 1927):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==38&&*(info->p->p+2)==38) {
            info->p->p+=3;
            sline_real_92=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_93=(struct sNode*)come_increment_ref_count(or_exp(info), "30op.nc", 2088, 1928);
            info->sline_real=sline_real_92;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 2091, 1933, "struct sNode");
            _inf_obj_value41=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value1=sAndAndNode_initialize((struct sAndAndNode* )come_increment_ref_count((struct sAndAndNode *)come_calloc(1, sizeof(struct sAndAndNode )*(1), "30op.nc", 2091, 1929, "struct sAndAndNode* "), "30op.nc", 2091, 1930),(struct sNode*)come_increment_ref_count(node, "30op.nc", 2091, 1931),(struct sNode*)come_increment_ref_count(right_93, "30op.nc", 2091, 1932),(_Bool)1,info))), "30op.nc", 2091, 1934);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value41, "30op.nc", 2091, 1936);
            (__dec_obj235 ? __dec_obj235 = come_decrement_ref_count(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0, (void*)0, "30op.nc", 2091, 1935) :0);
            come_call_finalizer(sAndAndNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 2091, 1937);
            ((right_93) ? right_93 = come_decrement_ref_count(right_93, ((struct sNode*)right_93)->finalize, ((struct sNode*)right_93)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 2096, 1938):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "30op.nc", 2100, 1939);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 2100, 1940):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 2100, 1941):(void*)0);
    return __result_obj__0;
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_clone"; neo_current_frame = &fr;
    struct sAndAndNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAndAndNode*  result  ;
    char*  __dec_obj231  ;
    struct sNode* __dec_obj232;
    struct sNode* __dec_obj233;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAndAndNode* )come_increment_ref_count((struct sAndAndNode *)come_calloc(1, sizeof(struct sAndAndNode )*(1), "sAndAndNode_clone", 5, 1914, "struct sAndAndNode* "), "sAndAndNode_clone", 5, 1915);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj231=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAndAndNode_clone", 7, 1916, "char* "), "sAndAndNode_clone", 7, 1918);
        __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0,0, (void*)0, "sAndAndNode_clone", 7, 1917);
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
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sAndAndNode_clone", 10, 1920);
        (__dec_obj232 ? __dec_obj232 = come_decrement_ref_count(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0, (void*)0, "sAndAndNode_clone", 10, 1919) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj233=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sAndAndNode_clone", 11, 1922);
        (__dec_obj233 ? __dec_obj233 = come_decrement_ref_count(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0, (void*)0, "sAndAndNode_clone", 11, 1921) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sAndAndNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAndAndNode_clone}", 12, 1923);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* oror_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "oror_exp"; neo_current_frame = &fr;
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
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(andand_exp(info), "30op.nc", 2107, 1942);
    skip_spaces_and_lf(info);
    while(span$1char$p_operator_derefference(info->p)) {
        if(span$1char$p_operator_derefference(info->p)==124&&*(info->p->p+1)==124) {
            info->p->p+=2;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(struct sNode*)come_increment_ref_count(andand_exp(info), "30op.nc", 2118, 1943);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 2121, 1948, "struct sNode");
            _inf_obj_value42=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value1=sOrOrNode_initialize((struct sOrOrNode* )come_increment_ref_count((struct sOrOrNode *)come_calloc(1, sizeof(struct sOrOrNode )*(1), "30op.nc", 2121, 1944, "struct sOrOrNode* "), "30op.nc", 2121, 1945),(struct sNode*)come_increment_ref_count(node, "30op.nc", 2121, 1946),(struct sNode*)come_increment_ref_count(right, "30op.nc", 2121, 1947),(_Bool)0,info))), "30op.nc", 2121, 1949);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value42, "30op.nc", 2121, 1961);
            (__dec_obj239 ? __dec_obj239 = come_decrement_ref_count(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0, (void*)0, "30op.nc", 2121, 1960) :0);
            come_call_finalizer(sOrOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 2121, 1962);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 2137, 1963):(void*)0);
        }
        else if(span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==124&&*(info->p->p+2)==124) {
            info->p->p+=3;
            sline_real_94=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_95=(struct sNode*)come_increment_ref_count(andand_exp(info), "30op.nc", 2129, 1964);
            info->sline_real=sline_real_94;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 2132, 1969, "struct sNode");
            _inf_obj_value43=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value1=sOrOrNode_initialize((struct sOrOrNode* )come_increment_ref_count((struct sOrOrNode *)come_calloc(1, sizeof(struct sOrOrNode )*(1), "30op.nc", 2132, 1965, "struct sOrOrNode* "), "30op.nc", 2132, 1966),(struct sNode*)come_increment_ref_count(node, "30op.nc", 2132, 1967),(struct sNode*)come_increment_ref_count(right_95, "30op.nc", 2132, 1968),(_Bool)1,info))), "30op.nc", 2132, 1970);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value43, "30op.nc", 2132, 1972);
            (__dec_obj240 ? __dec_obj240 = come_decrement_ref_count(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0, (void*)0, "30op.nc", 2132, 1971) :0);
            come_call_finalizer(sOrOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 2132, 1973);
            ((right_95) ? right_95 = come_decrement_ref_count(right_95, ((struct sNode*)right_95)->finalize, ((struct sNode*)right_95)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 2137, 1974):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "30op.nc", 2141, 1975);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 2141, 1976):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 2141, 1977):(void*)0);
    return __result_obj__0;
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_clone"; neo_current_frame = &fr;
    struct sOrOrNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOrOrNode*  result  ;
    char*  __dec_obj236  ;
    struct sNode* __dec_obj237;
    struct sNode* __dec_obj238;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sOrOrNode* )come_increment_ref_count((struct sOrOrNode *)come_calloc(1, sizeof(struct sOrOrNode )*(1), "sOrOrNode_clone", 5, 1950, "struct sOrOrNode* "), "sOrOrNode_clone", 5, 1951);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj236=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sOrOrNode_clone", 7, 1952, "char* "), "sOrOrNode_clone", 7, 1954);
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0,0, (void*)0, "sOrOrNode_clone", 7, 1953);
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
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sOrOrNode_clone", 10, 1956);
        (__dec_obj237 ? __dec_obj237 = come_decrement_ref_count(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0, (void*)0, "sOrOrNode_clone", 10, 1955) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj238=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sOrOrNode_clone", 11, 1958);
        (__dec_obj238 ? __dec_obj238 = come_decrement_ref_count(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0,0, (void*)0, "sOrOrNode_clone", 11, 1957) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sOrOrNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sOrOrNode_clone}", 12, 1959);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_comma_exp(struct sNode* node, struct sNode* node2, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_comma_exp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value44;
    struct sCommaNode* _inf_obj_value44;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 2146, 1982, "struct sNode");
    _inf_obj_value44=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value1=sCommaNode_initialize((struct sCommaNode* )come_increment_ref_count((struct sCommaNode *)come_calloc(1, sizeof(struct sCommaNode )*(1), "30op.nc", 2146, 1978, "struct sCommaNode* "), "30op.nc", 2146, 1979),(struct sNode*)come_increment_ref_count(node, "30op.nc", 2146, 1980),(struct sNode*)come_increment_ref_count(node2, "30op.nc", 2146, 1981),info))), "30op.nc", 2146, 1983);
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
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value44)), "30op.nc", 2146, 1994);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 2146, 1995):(void*)0);
    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 2146, 1996):(void*)0);
    come_call_finalizer(sCommaNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 2146, 1997);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "30op.nc", 2146, 1998):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 2146, 1999):(void*)0);
    return __result_obj__0;
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_clone"; neo_current_frame = &fr;
    struct sCommaNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCommaNode*  result  ;
    char*  __dec_obj241  ;
    struct sNode* __dec_obj242;
    struct sNode* __dec_obj243;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCommaNode* )come_increment_ref_count((struct sCommaNode *)come_calloc(1, sizeof(struct sCommaNode )*(1), "sCommaNode_clone", 5, 1984, "struct sCommaNode* "), "sCommaNode_clone", 5, 1985);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj241=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCommaNode_clone", 7, 1986, "char* "), "sCommaNode_clone", 7, 1988);
        __dec_obj241 = come_decrement_ref_count(__dec_obj241, (void*)0, (void*)0, 0,0, (void*)0, "sCommaNode_clone", 7, 1987);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj242=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sCommaNode_clone", 9, 1990);
        (__dec_obj242 ? __dec_obj242 = come_decrement_ref_count(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0, (void*)0, "sCommaNode_clone", 9, 1989) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj243=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sCommaNode_clone", 10, 1992);
        (__dec_obj243 ? __dec_obj243 = come_decrement_ref_count(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0, (void*)0, "sCommaNode_clone", 10, 1991) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sCommaNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCommaNode_clone}", 11, 1993);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* comma_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "comma_exp"; neo_current_frame = &fr;
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
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(oror_exp(info), "30op.nc", 2153, 2000);
    skip_spaces_and_lf(info);
    while(span$1char$p_operator_derefference(info->p)) {
        if(!info->no_comma&&span$1char$p_operator_derefference(info->p)==44) {
            info->p->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            node2=(struct sNode*)come_increment_ref_count(comma_exp(info), "30op.nc", 2164, 2001);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 2167, 2006, "struct sNode");
            _inf_obj_value45=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value1=sCommaNode_initialize((struct sCommaNode* )come_increment_ref_count((struct sCommaNode *)come_calloc(1, sizeof(struct sCommaNode )*(1), "30op.nc", 2167, 2002, "struct sCommaNode* "), "30op.nc", 2167, 2003),(struct sNode*)come_increment_ref_count(node, "30op.nc", 2167, 2004),(struct sNode*)come_increment_ref_count(node2, "30op.nc", 2167, 2005),info))), "30op.nc", 2167, 2007);
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
            node=(struct sNode*)come_increment_ref_count(_inf_value45, "30op.nc", 2167, 2009);
            (__dec_obj244 ? __dec_obj244 = come_decrement_ref_count(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0, (void*)0, "30op.nc", 2167, 2008) :0);
            come_call_finalizer(sCommaNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 2167, 2010);
            ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 2172, 2011):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "30op.nc", 2176, 2012);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 2176, 2013):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 2176, 2014):(void*)0);
    return __result_obj__0;
}

struct sNode* conditional_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "conditional_exp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* value1;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value46;
    struct sNullNode* _inf_obj_value46;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj245;
    _Bool no_label;
    struct sNode* __dec_obj246;
    struct sNode* value2;
    struct sNode* _inf_value47;
    struct sConditionalNode* _inf_obj_value47;
    struct sNode* __dec_obj247;
    struct sNode* __result_obj__0;
    memset(&value1, 0, sizeof(value1));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(comma_exp(info), "30op.nc", 2183, 2015);
    skip_spaces_and_lf(info);
    while(span$1char$p_operator_derefference(info->p)) {
        if(span$1char$p_operator_derefference(info->p)==63) {
            info->p->p++;
            sline_real=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==58) {
                __right_value0 = (void*)0;
                _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 2196, 2018, "struct sNode");
                _inf_obj_value46=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value1=sNullNode_initialize((struct sNullNode* )come_increment_ref_count((struct sNullNode *)come_calloc(1, sizeof(struct sNullNode )*(1), "30op.nc", 2196, 2016, "struct sNullNode* "), "30op.nc", 2196, 2017),info))), "30op.nc", 2196, 2019);
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
                __dec_obj245=value1,
                value1=(struct sNode*)come_increment_ref_count(_inf_value46, "30op.nc", 2196, 2021);
                (__dec_obj245 ? __dec_obj245 = come_decrement_ref_count(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0, (void*)0, "30op.nc", 2196, 2020) :0);
                come_call_finalizer(sNullNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 2196, 2022);
            }
            else {
                no_label=info->no_label;
                info->no_label=(_Bool)1;
                __right_value0 = (void*)0;
                __dec_obj246=value1,
                value1=(struct sNode*)come_increment_ref_count(conditional_exp(info), "30op.nc", 2201, 2024);
                (__dec_obj246 ? __dec_obj246 = come_decrement_ref_count(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0, (void*)0, "30op.nc", 2201, 2023) :0);
                info->no_label=no_label;
            }
            expected_next_character(58,info);
            __right_value0 = (void*)0;
            value2=(struct sNode*)come_increment_ref_count(conditional_exp(info), "30op.nc", 2208, 2025);
            skip_spaces_and_lf(info);
            info->sline_real=sline_real;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 2213, 2031, "struct sNode");
            _inf_obj_value47=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value1=sConditionalNode_initialize((struct sConditionalNode* )come_increment_ref_count((struct sConditionalNode *)come_calloc(1, sizeof(struct sConditionalNode )*(1), "30op.nc", 2213, 2026, "struct sConditionalNode* "), "30op.nc", 2213, 2027),(struct sNode*)come_increment_ref_count(node, "30op.nc", 2213, 2028),(struct sNode*)come_increment_ref_count(value1, "30op.nc", 2213, 2029),(struct sNode*)come_increment_ref_count(value2, "30op.nc", 2213, 2030),info))), "30op.nc", 2213, 2032);
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
            __dec_obj247=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value47, "30op.nc", 2213, 2034);
            (__dec_obj247 ? __dec_obj247 = come_decrement_ref_count(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0, (void*)0, "30op.nc", 2213, 2033) :0);
            come_call_finalizer(sConditionalNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 2213, 2035);
            ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 2218, 2036):(void*)0);
            ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 2218, 2037):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "30op.nc", 2222, 2038);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 2222, 2039):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 2222, 2040):(void*)0);
    return __result_obj__0;
}

struct sTypeNode* sTypeNode_initialize(struct sTypeNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj248  ;
    struct sTypeNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTypeNode*)come_increment_ref_count(self, "30op.nc", 2229, 2041),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 2229, 2042);
    __right_value0 = (void*)0;
    __dec_obj248=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "30op.nc", 2231, 2044);
    come_call_finalizer(sType_finalize, __dec_obj248,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 2231, 2043);
        __result_obj__0 = (struct sTypeNode*)come_increment_ref_count(self, "30op.nc", 2234, 2045);
    come_call_finalizer(sTypeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 2234, 2048);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTypeNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "30op.nc}", 2234, 2049);
    return __result_obj__0;
}

char*  sTypeNode_kind(struct sTypeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTypeNode","30op.nc",2236))), "30op.nc", 2236, 2050);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "30op.nc", 2236, 2051));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "30op.nc", 2236, 2052));
    return __result_obj__0;
}

_Bool sTypeNode_compile(struct sTypeNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj249  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj250  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "30op.nc", 2241, 2053, "struct CVALUE* "), "30op.nc", 2241, 2054)), "30op.nc", 2241, 2055);
    __right_value0 = (void*)0;
    __dec_obj249=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(make_type_name_string(self->type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "30op.nc", 2243, 2057);
    __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0,0, (void*)0, "30op.nc", 2243, 2056);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj250=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "30op.nc", 2244, 2058, "struct sType* "), "30op.nc", 2244, 2059),(char*)come_increment_ref_count(xsprintf("__typename"), "30op.nc", 2244, 2060),(_Bool)0,info,(_Bool)0,0), "30op.nc", 2244, 2062);
    come_call_finalizer(sType_finalize, __dec_obj250,(void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc", 2244, 2061);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "30op.nc", 2247, 2063));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 2249, 2064);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sTypeNode_finalize(struct sTypeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sTypeNode_finalize", 2, 2046));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sTypeNode_finalize}", 3, 2047);
    }
        neo_current_frame = fr.prev;
}

struct sNode* expression_v13(struct sInfo*  info  , _Bool type_name_exp)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expression_v13"; neo_current_frame = &fr;
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
    struct sNode* __dec_obj253;
    struct sNode* __dec_obj254;
    struct sNode* __dec_obj255;
    struct sNode* __result_obj__0;
    node=((void*)0);
    skip_spaces_and_lf(info);
    if(span$1char$p_operator_derefference(info->p)==92) {
        info->p->p++;
    }
    if(type_name_exp&&(span$1char$p_operator_derefference(info->p)==95||xisalpha(span$1char$p_operator_derefference(info->p)))) {
        p=info->p->p;
        sline=info->sline;
        word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "30op.nc", 2267, 2065);
        fun_call=span$1char$p_operator_derefference(info->p)==40;
        info->p->p=p;
        info->sline=sline;
        if(is_type_name(word,info)&&!fun_call) {
            __right_value0 = (void*)0;
            multiple_assign_var2=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type1=(struct sType* )come_increment_ref_count(multiple_assign_var2->v1, "30op.nc", 2275, 2066);
            name=(char* )come_increment_ref_count(multiple_assign_var2->v2, "30op.nc", 2275, 2067);
            err=multiple_assign_var2->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 2275, 2070);
            __right_value0 = (void*)0;
            type2_=(struct sType* )come_increment_ref_count(solve_generics(type1,info->generics_type,info), "30op.nc", 2276, 2071);
            __right_value0 = (void*)0;
            type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "30op.nc", 2277, 2072);
            __right_value0 = (void*)0;
            _inf_value48=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 2279, 2075, "struct sNode");
            _inf_obj_value48=(struct sTypeNode*)come_increment_ref_count(((struct sTypeNode*)(__right_value1=sTypeNode_initialize((struct sTypeNode* )come_increment_ref_count((struct sTypeNode *)come_calloc(1, sizeof(struct sTypeNode )*(1), "30op.nc", 2279, 2073, "struct sTypeNode* "), "30op.nc", 2279, 2074),type2,info))), "30op.nc", 2279, 2076);
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
            __dec_obj253=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value48, "30op.nc", 2279, 2086);
            (__dec_obj253 ? __dec_obj253 = come_decrement_ref_count(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0, (void*)0, "30op.nc", 2279, 2085) :0);
            come_call_finalizer(sTypeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 2279, 2087);
            come_call_finalizer(sType_finalize, type1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 2284, 2088);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "30op.nc", 2284, 2089));
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 2284, 2090);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "30op.nc}", 2284, 2091);
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj254=node,
            node=(struct sNode*)come_increment_ref_count(conditional_exp(info), "30op.nc", 2282, 2093);
            (__dec_obj254 ? __dec_obj254 = come_decrement_ref_count(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,0, (void*)0, "30op.nc", 2282, 2092) :0);
        }
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "30op.nc", 2289, 2094));
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj255=node,
        node=(struct sNode*)come_increment_ref_count(conditional_exp(info), "30op.nc", 2286, 2096);
        (__dec_obj255 ? __dec_obj255 = come_decrement_ref_count(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0, (void*)0, "30op.nc", 2286, 2095) :0);
    }
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "30op.nc", 2289, 2097);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 2289, 2098):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 2289, 2099):(void*)0);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 2068);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 2069));
    }
                neo_current_frame = fr.prev;
}

static struct sTypeNode* sTypeNode_clone(struct sTypeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_clone"; neo_current_frame = &fr;
    struct sTypeNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sTypeNode*  result  ;
    char*  __dec_obj251  ;
    struct sType*  __dec_obj252  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sTypeNode* )come_increment_ref_count((struct sTypeNode *)come_calloc(1, sizeof(struct sTypeNode )*(1), "sTypeNode_clone", 5, 2077, "struct sTypeNode* "), "sTypeNode_clone", 5, 2078);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj251=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sTypeNode_clone", 7, 2079, "char* "), "sTypeNode_clone", 7, 2081);
        __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0,0, (void*)0, "sTypeNode_clone", 7, 2080);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj252=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sTypeNode_clone", 9, 2083);
        come_call_finalizer(sType_finalize, __dec_obj252,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sTypeNode_clone", 9, 2082);
    }
        __result_obj__0 = result;
    come_call_finalizer(sTypeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sTypeNode_clone}", 10, 2084);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_node_v13"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value49;
    struct sNullNode* _inf_obj_value49;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    if(!gComeC&&charp_operator_equals(buf,"null")) {
                _inf_value49=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 2295, 2102, "struct sNode");
        _inf_obj_value49=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value1=sNullNode_initialize((struct sNullNode* )come_increment_ref_count((struct sNullNode *)come_calloc(1, sizeof(struct sNullNode )*(1), "30op.nc", 2295, 2100, "struct sNullNode* "), "30op.nc", 2295, 2101),info))), "30op.nc", 2295, 2103);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value49)), "30op.nc", 2295, 2104);
        come_call_finalizer(sNullNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 2295, 2105);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "30op.nc", 2295, 2106):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 2295, 2107):(void*)0);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=string_node_v12(buf,head,head_sline,info))), "30op.nc", 2298, 2108);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "30op.nc", 2298, 2109):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 2298, 2110):(void*)0);
    return __result_obj__0;
}

struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_less"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value50;
    struct sLtNode* _inf_obj_value50;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value50=(struct sNode*)come_calloc(1, sizeof(struct sNode), "30op.nc", 2303, 2115, "struct sNode");
    _inf_obj_value50=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value1=sLtNode_initialize((struct sLtNode* )come_increment_ref_count((struct sLtNode *)come_calloc(1, sizeof(struct sLtNode )*(1), "30op.nc", 2303, 2111, "struct sLtNode* "), "30op.nc", 2303, 2112),(struct sNode*)come_increment_ref_count(node, "30op.nc", 2303, 2113),(struct sNode*)come_increment_ref_count(right, "30op.nc", 2303, 2114),(_Bool)0,info))), "30op.nc", 2303, 2116);
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
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value50)), "30op.nc", 2303, 2117);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 2303, 2118):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "30op.nc", 2303, 2119):(void*)0);
    come_call_finalizer(sLtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "30op.nc}", 2303, 2120);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "30op.nc", 2303, 2121):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "30op.nc", 2303, 2122):(void*)0);
    return __result_obj__0;
}

