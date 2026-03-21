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

typedef __builtin_va_list  va_list  ;

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
    int _flags2;
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
    unsigned long  __pad5  ;
    int _mode;
    char _unused2[15*sizeof(int)-4*sizeof(void*)-sizeof(unsigned long )];
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
    unsigned int __g_refs[2];
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
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

struct sPlusPlusNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
    _Bool mQuote;
};

struct sMinusMinusNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
    _Bool mQuote;
};

struct sPlusEqualNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sMinusEqualNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sMultEqualNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sDivEqualNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sModEqualNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLShifEqualNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sRShiftEqualNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sXorEqualNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrEqualNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndEqualNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sExpEqualNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
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
int __isoc99_fscanf(struct _IO_FILE* __restrict  __stream  , const char* __restrict __format, ...);
int __isoc99_scanf(const char* __restrict __format, ...);
int __isoc99_sscanf(const char* __restrict __s, const char* __restrict __format, ...);
int vfscanf(struct _IO_FILE* __restrict  __s  , const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__scanf__, 2, 0))) ;
int vscanf(const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__scanf__, 1, 0))) ;
int vsscanf(const char* __restrict __s, const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__scanf__, 2, 0)));
int __isoc99_vfscanf(struct _IO_FILE* __restrict  __s  , const char* __restrict __format, __builtin_va_list  __arg  );
int __isoc99_vscanf(const char* __restrict __format, __builtin_va_list  __arg  );
int __isoc99_vsscanf(const char* __restrict __s, const char* __restrict __format, __builtin_va_list  __arg  );
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
void abort() __attribute__ ((__noreturn__));
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
void __assert_fail(const char* __assertion, const char* __file, unsigned int __line, const char* __function) __attribute__ ((__noreturn__));
void __assert_perror_fail(int __errnum, const char* __file, unsigned int __line, const char* __function) __attribute__ ((__noreturn__));
void __assert(const char* __assertion, const char* __file, int __line) __attribute__ ((__noreturn__));
int*  wcscpy(int* __restrict  __dest  , const int* __restrict  __src  );
int*  wcsncpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
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
long  int wcstol_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long  int wcstoul_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
long long int wcstoll_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long long int wcstoull_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
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
int __isoc99_fwscanf(struct _IO_FILE* __restrict  __stream  , const int* __restrict  __format  , ...);
int __isoc99_wscanf(const int* __restrict  __format  , ...);
int __isoc99_swscanf(const int* __restrict  __s  , const int* __restrict  __format  , ...);
int vfwscanf(struct _IO_FILE* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int vwscanf(const int* __restrict  __format  , __builtin_va_list  __arg  );
int vswscanf(const int* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int __isoc99_vfwscanf(struct _IO_FILE* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int __isoc99_vwscanf(const int* __restrict  __format  , __builtin_va_list  __arg  );
int __isoc99_vswscanf(const int* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
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
_Bool operator_overload_fun_store_derefference(struct sType*  type  , struct sNode* left_node, struct sNode* right_node, struct CVALUE*  left_value  , struct CVALUE*  right_value  , struct sInfo*  info  );
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2);
struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo*  info  );
char*  sPlusPlusNode_kind(struct sPlusPlusNode* self);
_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sNode* sNode_clone(struct sNode* self);
static void sPlusPlusNode_finalize(struct sPlusPlusNode* self);
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
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo*  info  );
char*  sMinusMinusNode_kind(struct sMinusMinusNode* self);
_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo*  info  );
static void sMinusMinusNode_finalize(struct sMinusMinusNode* self);
struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sPlusEqualNode_kind(struct sPlusEqualNode* self);
_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo*  info  );
static void sPlusEqualNode_finalize(struct sPlusEqualNode* self);
struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sMinusEqualNode_kind(struct sMinusEqualNode* self);
_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo*  info  );
static void sMinusEqualNode_finalize(struct sMinusEqualNode* self);
struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sMultEqualNode_kind(struct sMultEqualNode* self);
_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo*  info  );
static void sMultEqualNode_finalize(struct sMultEqualNode* self);
struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sDivEqualNode_kind(struct sDivEqualNode* self);
_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo*  info  );
static void sDivEqualNode_finalize(struct sDivEqualNode* self);
struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sModEqualNode_kind(struct sModEqualNode* self);
_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo*  info  );
static void sModEqualNode_finalize(struct sModEqualNode* self);
struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sLShifEqualNode_kind(struct sLShifEqualNode* self);
_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo*  info  );
static void sLShifEqualNode_finalize(struct sLShifEqualNode* self);
struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sRShiftEqualNode_kind(struct sRShiftEqualNode* self);
_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo*  info  );
static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self);
struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sXorEqualNode_kind(struct sXorEqualNode* self);
_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo*  info  );
static void sXorEqualNode_finalize(struct sXorEqualNode* self);
struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sOrEqualNode_kind(struct sOrEqualNode* self);
_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo*  info  );
static void sOrEqualNode_finalize(struct sOrEqualNode* self);
struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sAndEqualNode_kind(struct sAndEqualNode* self);
_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo*  info  );
static void sAndEqualNode_finalize(struct sAndEqualNode* self);
struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sExpEqualNode_kind(struct sExpEqualNode* self);
_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo*  info  );
static void sExpEqualNode_finalize(struct sExpEqualNode* self);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo*  info  );
static char span$1char$p$p_operator_derefference(struct span$1char$p* self);
static char span$1char$p_operator_derefference(struct span$1char$p* self);
static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self);
static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self);
static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self);
static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self);
static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self);
static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self);
static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self);
static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self);
static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self);
static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self);
static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self);
static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self);
static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self);
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
_Bool operator_overload_fun_store_derefference(struct sType*  type  , struct sNode* left_node, struct sNode* right_node, struct CVALUE*  left_value  , struct CVALUE*  right_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "operator_overload_fun_store_derefference"; neo_current_frame = &fr;
    struct sType*  type2  ;
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
    _Bool __result_obj__0;
    memset(&type2, 0, sizeof(type2));
    if(type->mNoSolvedGenericsType) {
        type2=type->mNoSolvedGenericsType;
    }
    else {
        type2=type;
    }
    const char* fun_name="operator_store_derefference";
    multiple_assign_var1=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value0=get_method(fun_name,type2,info,(_Bool)0)));
    fun_name2=(char* )come_increment_ref_count(multiple_assign_var1->v1, "26eq.nc", 14, 1);
    operator_fun=multiple_assign_var1->v2;
    generics_fun=multiple_assign_var1->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 14, 3);
    result=(_Bool)0;
    if(operator_fun) {
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
        obj=(struct sNode*)come_increment_ref_count(left_node, "26eq.nc", 34, 4);
        __right_value0 = (void*)0;
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "26eq.nc", 35, 5, "struct list$1tuple2$2char$phsNode$ph$ph*"), "26eq.nc", 35, 13)), "26eq.nc", 35, 14);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "26eq.nc", 37, 29, "struct tuple2$2char$phsNode$ph"), "26eq.nc", 37, 39),(char* )come_increment_ref_count((char* )((void*)0), "26eq.nc", 37, 40),(struct sNode*)come_increment_ref_count(left_node, "26eq.nc", 37, 41)), "26eq.nc", 37, 42));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "26eq.nc", 38, 43, "struct tuple2$2char$phsNode$ph"), "26eq.nc", 38, 44),(char* )come_increment_ref_count((char* )((void*)0), "26eq.nc", 38, 45),(struct sNode*)come_increment_ref_count(right_node, "26eq.nc", 38, 46)), "26eq.nc", 38, 47));
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(create_method_call(fun_name,(struct sNode*)come_increment_ref_count(obj, "26eq.nc", 40, 48),params,((void*)0),0,((void*)0),info,(_Bool)0), "26eq.nc", 40, 49);
        Value=node_compile(node,info);
        if(Value) {
            result=(_Bool)1;
        }
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 47, 50):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 47, 51);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 47, 52):(void*)0);
    }
        __result_obj__0 = result;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 47, 53):(void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 47, 54):(void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "26eq.nc", 47, 55));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3char$phsFun$psGenericsFun$p$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3char$phsFun$psGenericsFun$p$p_finalize", 2, 2));
    }
        neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 6);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 11);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 12);
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 10);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 9);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph$p_finalize", 2, 7));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph$p_finalize", 3, 8):(void*)0);
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
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 15);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1534, 16, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1534, 17);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj1=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 19);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 18);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1544, 20, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1544, 21);
        litem_1->prev=self->head;
        litem_1->next=((void*)0);
        __dec_obj2=litem_1->item,
        litem_1->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 23);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 22);
        self->tail=litem_1;
        self->head->next=litem_1;
    }
    else {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1554, 24, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1554, 25);
        litem_2->prev=self->tail;
        litem_2->next=((void*)0);
        __dec_obj3=litem_2->item,
        litem_2->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 27);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 26);
        self->tail->next=litem_2;
        self->tail=litem_2;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 28);
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
    self->v1=(char* )come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3913, 31);
    __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3913, 30);
    __dec_obj5=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3914, 33);
    (__dec_obj5 ? __dec_obj5 = come_decrement_ref_count(__dec_obj5, ((struct sNode*)__dec_obj5)->finalize, ((struct sNode*)__dec_obj5)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3914, 32) :0);
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3916, 34);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3916, 35);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3916, 36));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 3916, 37):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3916, 38);
    return __result_obj__0;
}

struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusPlusNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj6;
    struct sPlusPlusNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sPlusPlusNode*)come_increment_ref_count(self, "26eq.nc", 54, 56),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 54, 58);
    __right_value0 = (void*)0;
    __dec_obj6=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "26eq.nc", 56, 67);
    (__dec_obj6 ? __dec_obj6 = come_decrement_ref_count(__dec_obj6, ((struct sNode*)__dec_obj6)->finalize, ((struct sNode*)__dec_obj6)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 56, 66) :0);
    self->mQuote=quote;
        __result_obj__0 = (struct sPlusPlusNode*)come_increment_ref_count(self, "26eq.nc", 60, 68);
    come_call_finalizer(sPlusPlusNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 60, 71);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 60, 72):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sPlusPlusNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 60, 73);
    return __result_obj__0;
}

char*  sPlusPlusNode_kind(struct sPlusPlusNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusPlusNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sPlusPlusNode","26eq.nc",62))), "26eq.nc", 62, 74);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "26eq.nc", 62, 75));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "26eq.nc", 62, 76));
    return __result_obj__0;
}

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusPlusNode_compile"; neo_current_frame = &fr;
    struct sNode* left;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj7  ;
    struct sType*  __dec_obj42  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left=(struct sNode*)come_increment_ref_count(self->mLeft, "26eq.nc", 67, 77);
    Value=node_compile(left,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 70, 78):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 73, 79);
    if(reject_ref_optional_unary_operator("operator_plus_plus",left_value,info)) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 76, 80):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 76, 118);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    type=(struct sType* )come_increment_ref_count(left_value->type, "26eq.nc", 79, 119);
    const char* fun_name="operator_plus_plus";
    if(self->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun_self(type,fun_name,(struct sNode*)come_increment_ref_count(left, "26eq.nc", 88, 120),left_value,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "26eq.nc", 92, 121, "struct CVALUE* "), "26eq.nc", 92, 122)), "26eq.nc", 92, 123);
        __right_value0 = (void*)0;
        __dec_obj7=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s++",left_value->c_value), "26eq.nc", 94, 125);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "26eq.nc", 94, 124);
        __right_value0 = (void*)0;
        __dec_obj42=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "26eq.nc", 95, 297);
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc", 95, 296);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "26eq.nc", 98, 312));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 103, 313);
    }
        __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 103, 314):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 103, 315);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 103, 316);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 57));
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 59);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 60):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 61, "struct sNode*"), "sNode_clone", 5, 62);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 63);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 64):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 65):(void*)0);
    return __result_obj__0;
}

static void sPlusPlusNode_finalize(struct sPlusPlusNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusPlusNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sPlusPlusNode_finalize", 2, 69));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sPlusPlusNode_finalize", 3, 70):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 81));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 114);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 115));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 116));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 117));
    }
            neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 82);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 83);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 86);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 87);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 88):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 89):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 90));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 91));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 92));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 93));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 94));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 95));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 96));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 97));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 100);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 101);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 103);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 104);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 105);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 106));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 107);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 110);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 111);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 112):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 113);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 85);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 84);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 99);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 98):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 102);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 109);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 108));
    }
            neo_current_frame = fr.prev;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj8  ;
    struct sType*  __dec_obj9  ;
    struct list$1sType$ph* __dec_obj13;
    struct sType*  __dec_obj14  ;
    struct sNode* __dec_obj15;
    struct sNode* __dec_obj16;
    char*  __dec_obj17  ;
    char*  __dec_obj18  ;
    char*  __dec_obj19  ;
    char*  __dec_obj20  ;
    char*  __dec_obj21  ;
    char*  __dec_obj22  ;
    char*  __dec_obj23  ;
    char*  __dec_obj24  ;
    struct list$1sNode$ph* __dec_obj28;
    struct list$1sNode$ph* __dec_obj29;
    struct list$1int$* __dec_obj30;
    struct list$1int$* __dec_obj31;
    struct sType*  __dec_obj32  ;
    char*  __dec_obj33  ;
    struct list$1sType$ph* __dec_obj34;
    struct list$1char$ph* __dec_obj38;
    struct sType*  __dec_obj39  ;
    struct sNode* __dec_obj40;
    struct list$1sNode$ph* __dec_obj41;
    if(self==(void*)0) {
                __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0, "sType_clone", 4, 126);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 4, 127);
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 128, "struct sType* "), "sType_clone", 5, 129);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 131);
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 130);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 133);
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 132);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 163);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 162);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 165);
        come_call_finalizer(sType_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 164);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj15=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 167);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 166) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj16=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 169);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 168) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj17=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 170, "char* "), "sType_clone", 14, 172);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 171);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj18=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 173, "char* "), "sType_clone", 15, 175);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 174);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj19=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 176, "char* "), "sType_clone", 16, 178);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 177);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj20=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 179, "char* "), "sType_clone", 17, 181);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 180);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj21=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 182, "char* "), "sType_clone", 18, 184);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 183);
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
        __dec_obj22=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 185, "char* "), "sType_clone", 49, 187);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 186);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 188, "char* "), "sType_clone", 51, 190);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 189);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 191, "char* "), "sType_clone", 54, 193);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 192);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj28=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 223);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 222);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj29=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 225);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 224);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj30=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 245);
        come_call_finalizer(list$1int$_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 244);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj31=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 247);
        come_call_finalizer(list$1int$_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 246);
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
        __dec_obj32=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 249);
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 248);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 250, "char* "), "sType_clone", 67, 252);
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 251);
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
        __dec_obj34=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 254);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 253);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj38=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 286);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 285);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj39=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 288);
        come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 287);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj40=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 290);
        (__dec_obj40 ? __dec_obj40 = come_decrement_ref_count(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 289) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj41=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 292);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 291);
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "sType_clone", 77, 293);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 294);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 295);
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 134);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 135);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1513, 136, "struct list$1sType$ph*"), "/usr/local/include/neo-c.h", 1513, 140)), "/usr/local/include/neo-c.h", 1513, 141);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1518, 156));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1521, 157));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 158);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 159);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 160);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 137);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 138);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 139);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj10  ;
    struct list_item$1sType$ph* litem_3;
    struct sType*  __dec_obj11  ;
    struct list_item$1sType$ph* litem_4;
    struct sType*  __dec_obj12  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 142);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1534, 143, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1534, 144);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj10=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 146);
        come_call_finalizer(sType_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 145);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1544, 147, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1544, 148);
        litem_3->prev=self->head;
        litem_3->next=((void*)0);
        __dec_obj11=litem_3->item,
        litem_3->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 150);
        come_call_finalizer(sType_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 149);
        self->tail=litem_3;
        self->head->next=litem_3;
    }
    else {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1554, 151, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1554, 152);
        litem_4->prev=self->tail;
        litem_4->next=((void*)0);
        __dec_obj12=litem_4->item,
        litem_4->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 154);
        come_call_finalizer(sType_finalize, __dec_obj12,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 153);
        self->tail->next=litem_4;
        self->tail=litem_4;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 155);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 161);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 194);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 195);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1513, 196, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1513, 200)), "/usr/local/include/neo-c.h", 1513, 201);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1518, 216));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1521, 217));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 218);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 219);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 220);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 197);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 198);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 199);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj25;
    struct list_item$1sNode$ph* litem_5;
    struct sNode* __dec_obj26;
    struct list_item$1sNode$ph* litem_6;
    struct sNode* __dec_obj27;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1531, 202):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1534, 203, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1534, 204);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj25=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 206);
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 205) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1544, 207, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1544, 208);
        litem_5->prev=self->head;
        litem_5->next=((void*)0);
        __dec_obj26=litem_5->item,
        litem_5->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 210);
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 209) :0);
        self->tail=litem_5;
        self->head->next=litem_5;
    }
    else {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1554, 211, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1554, 212);
        litem_6->prev=self->tail;
        litem_6->next=((void*)0);
        __dec_obj27=litem_6->item,
        litem_6->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 214);
        (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 213) :0);
        self->tail->next=litem_6;
        self->tail=litem_6;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1566, 215):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 221);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 226);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 227);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1513, 228, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1513, 232)), "/usr/local/include/neo-c.h", 1513, 233);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 240);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 241);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 242);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 229);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 230);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 231);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_7;
    struct list_item$1int$* litem_8;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1534, 234, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1534, 235);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1544, 236, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1544, 237);
        litem_7->prev=self->head;
        litem_7->next=((void*)0);
        litem_7->item=item;
        self->tail=litem_7;
        self->head->next=litem_7;
    }
    else {
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1554, 238, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1554, 239);
        litem_8->prev=self->tail;
        litem_8->next=((void*)0);
        litem_8->item=item;
        self->tail->next=litem_8;
        self->tail=litem_8;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 243);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 255);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 256);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1513, 257, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1513, 261)), "/usr/local/include/neo-c.h", 1513, 262);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1518, 277, "char* "), "/usr/local/include/neo-c.h", 1518, 278));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1521, 279, "char* "), "/usr/local/include/neo-c.h", 1521, 280));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 281);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 282);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 283);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 258);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 259);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 260);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj35  ;
    struct list_item$1char$ph* litem_9;
    char*  __dec_obj36  ;
    struct list_item$1char$ph* litem_10;
    char*  __dec_obj37  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1531, 263));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1534, 264, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1534, 265);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj35=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 267);
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 266);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1544, 268, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1544, 269);
        litem_9->prev=self->head;
        litem_9->next=((void*)0);
        __dec_obj36=litem_9->item,
        litem_9->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 271);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 270);
        self->tail=litem_9;
        self->head->next=litem_9;
    }
    else {
        __right_value0 = (void*)0;
        litem_10=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1554, 272, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1554, 273);
        litem_10->prev=self->tail;
        litem_10->next=((void*)0);
        __dec_obj37=litem_10->item,
        litem_10->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 275);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 274);
        self->tail->next=litem_10;
        self->tail=litem_10;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1566, 276));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 284);
    }
            neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj43  ;
    struct list_item$1CVALUE$ph* litem_11;
    struct CVALUE*  __dec_obj44  ;
    struct list_item$1CVALUE$ph* litem_12;
    struct CVALUE*  __dec_obj45  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1615, 298);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1619, 299, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1619, 300);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj43=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 302);
        come_call_finalizer(CVALUE_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1623, 301);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_11=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1629, 303, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1629, 304);
        litem_11->prev=self->head;
        litem_11->next=((void*)0);
        __dec_obj44=litem_11->item,
        litem_11->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 306);
        come_call_finalizer(CVALUE_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1633, 305);
        self->tail=litem_11;
        self->head->next=litem_11;
    }
    else {
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1639, 307, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1639, 308);
        litem_12->prev=self->tail;
        litem_12->next=((void*)0);
        __dec_obj45=litem_12->item,
        litem_12->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 310);
        come_call_finalizer(CVALUE_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1643, 309);
        self->tail->next=litem_12;
        self->tail=litem_12;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1651, 311);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusMinusNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj46;
    struct sMinusMinusNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sMinusMinusNode*)come_increment_ref_count(self, "26eq.nc", 111, 317),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 111, 318);
    __right_value0 = (void*)0;
    __dec_obj46=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "26eq.nc", 113, 320);
    (__dec_obj46 ? __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 113, 319) :0);
    self->mQuote=quote;
        __result_obj__0 = (struct sMinusMinusNode*)come_increment_ref_count(self, "26eq.nc", 117, 321);
    come_call_finalizer(sMinusMinusNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 117, 324);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 117, 325):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sMinusMinusNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 117, 326);
    return __result_obj__0;
}

char*  sMinusMinusNode_kind(struct sMinusMinusNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusMinusNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sMinusMinusNode","26eq.nc",119))), "26eq.nc", 119, 327);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "26eq.nc", 119, 328));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "26eq.nc", 119, 329));
    return __result_obj__0;
}

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusMinusNode_compile"; neo_current_frame = &fr;
    struct sNode* left;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj47  ;
    struct sType*  __dec_obj48  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left=(struct sNode*)come_increment_ref_count(self->mLeft, "26eq.nc", 124, 330);
    Value=node_compile(left,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 127, 331):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 130, 332);
    if(reject_ref_optional_unary_operator("operator_minus_minus",left_value,info)) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 133, 333):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 133, 334);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    type=(struct sType* )come_increment_ref_count(left_value->type, "26eq.nc", 136, 335);
    const char* fun_name="operator_minus_minus";
    if(self->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun_self(type,fun_name,(struct sNode*)come_increment_ref_count(left, "26eq.nc", 145, 336),left_value,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "26eq.nc", 149, 337, "struct CVALUE* "), "26eq.nc", 149, 338)), "26eq.nc", 149, 339);
        __right_value0 = (void*)0;
        __dec_obj47=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s--",left_value->c_value), "26eq.nc", 151, 341);
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0, "26eq.nc", 151, 340);
        __right_value0 = (void*)0;
        __dec_obj48=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "26eq.nc", 152, 343);
        come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc", 152, 342);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "26eq.nc", 155, 344));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 160, 345);
    }
        __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 160, 346):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 160, 347);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 160, 348);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sMinusMinusNode_finalize(struct sMinusMinusNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusMinusNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sMinusMinusNode_finalize", 2, 322));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sMinusMinusNode_finalize", 3, 323):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusEqualNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj49;
    struct sNode* __dec_obj50;
    struct sPlusEqualNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sPlusEqualNode*)come_increment_ref_count(self, "26eq.nc", 168, 349),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 168, 350);
    __right_value0 = (void*)0;
    __dec_obj49=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "26eq.nc", 170, 352);
    (__dec_obj49 ? __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 170, 351) :0);
    __right_value0 = (void*)0;
    __dec_obj50=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "26eq.nc", 171, 354);
    (__dec_obj50 ? __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 171, 353) :0);
    self->mQuote=quote;
        __result_obj__0 = (struct sPlusEqualNode*)come_increment_ref_count(self, "26eq.nc", 175, 355);
    come_call_finalizer(sPlusEqualNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 175, 359);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 175, 360):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 175, 361):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sPlusEqualNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 175, 362);
    return __result_obj__0;
}

char*  sPlusEqualNode_kind(struct sPlusEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusEqualNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sPlusEqualNode","26eq.nc",177))), "26eq.nc", 177, 363);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "26eq.nc", 177, 364));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "26eq.nc", 177, 365));
    return __result_obj__0;
}

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusEqualNode_compile"; neo_current_frame = &fr;
    struct sNode* left;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right;
    _Bool Value_13;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj51  ;
    struct sType*  __dec_obj52  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left=(struct sNode*)come_increment_ref_count(self->mLeft, "26eq.nc", 182, 366);
    Value=node_compile(left,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 185, 367):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 188, 368);
    right=(struct sNode*)come_increment_ref_count(self->mRight, "26eq.nc", 190, 369);
    Value_13=node_compile(right,info);
    if(!Value_13) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 193, 370):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 193, 371);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 193, 372):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 196, 373);
    type=(struct sType* )come_increment_ref_count(left_value->type, "26eq.nc", 198, 374);
    const char* fun_name="operator_plus_equal";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left, "26eq.nc", 206, 375),(struct sNode*)come_increment_ref_count(right, "26eq.nc", 206, 376),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "26eq.nc", 210, 377, "struct CVALUE* "), "26eq.nc", 210, 378)), "26eq.nc", 210, 379);
        __right_value0 = (void*)0;
        __dec_obj51=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s+=%s",left_value->c_value,right_value->c_value), "26eq.nc", 212, 381);
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0, "26eq.nc", 212, 380);
        __right_value0 = (void*)0;
        __dec_obj52=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "26eq.nc", 213, 383);
        come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc", 213, 382);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "26eq.nc", 216, 384));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 221, 385);
    }
        __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 221, 386):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 221, 387);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 221, 388):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 221, 389);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 221, 390);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sPlusEqualNode_finalize(struct sPlusEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusEqualNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sPlusEqualNode_finalize", 2, 356));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sPlusEqualNode_finalize", 3, 357):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sPlusEqualNode_finalize", 4, 358):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusEqualNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj53;
    struct sNode* __dec_obj54;
    struct sMinusEqualNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sMinusEqualNode*)come_increment_ref_count(self, "26eq.nc", 229, 391),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 229, 392);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj53=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "26eq.nc", 233, 394);
    (__dec_obj53 ? __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 233, 393) :0);
    __right_value0 = (void*)0;
    __dec_obj54=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "26eq.nc", 234, 396);
    (__dec_obj54 ? __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 234, 395) :0);
        __result_obj__0 = (struct sMinusEqualNode*)come_increment_ref_count(self, "26eq.nc", 237, 397);
    come_call_finalizer(sMinusEqualNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 237, 401);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 237, 402):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 237, 403):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sMinusEqualNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 237, 404);
    return __result_obj__0;
}

char*  sMinusEqualNode_kind(struct sMinusEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusEqualNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sMinusEqualNode","26eq.nc",239))), "26eq.nc", 239, 405);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "26eq.nc", 239, 406));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "26eq.nc", 239, 407));
    return __result_obj__0;
}

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusEqualNode_compile"; neo_current_frame = &fr;
    struct sNode* left;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right;
    _Bool Value_14;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj55  ;
    struct sType*  __dec_obj56  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left=(struct sNode*)come_increment_ref_count(self->mLeft, "26eq.nc", 244, 408);
    Value=node_compile(left,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 247, 409):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 250, 410);
    right=(struct sNode*)come_increment_ref_count(self->mRight, "26eq.nc", 252, 411);
    Value_14=node_compile(right,info);
    if(!Value_14) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 255, 412):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 255, 413);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 255, 414):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 258, 415);
    type=(struct sType* )come_increment_ref_count(left_value->type, "26eq.nc", 260, 416);
    const char* fun_name="operator_minus_equal";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left, "26eq.nc", 268, 417),(struct sNode*)come_increment_ref_count(right, "26eq.nc", 268, 418),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "26eq.nc", 272, 419, "struct CVALUE* "), "26eq.nc", 272, 420)), "26eq.nc", 272, 421);
        __right_value0 = (void*)0;
        __dec_obj55=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s-=%s",left_value->c_value,right_value->c_value), "26eq.nc", 274, 423);
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "26eq.nc", 274, 422);
        __right_value0 = (void*)0;
        __dec_obj56=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "26eq.nc", 275, 425);
        come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc", 275, 424);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "26eq.nc", 278, 426));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 283, 427);
    }
        __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 283, 428):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 283, 429);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 283, 430):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 283, 431);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 283, 432);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sMinusEqualNode_finalize(struct sMinusEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusEqualNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sMinusEqualNode_finalize", 2, 398));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sMinusEqualNode_finalize", 3, 399):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sMinusEqualNode_finalize", 4, 400):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMultEqualNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj57;
    struct sNode* __dec_obj58;
    struct sMultEqualNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sMultEqualNode*)come_increment_ref_count(self, "26eq.nc", 291, 433),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 291, 434);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj57=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "26eq.nc", 295, 436);
    (__dec_obj57 ? __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 295, 435) :0);
    __right_value0 = (void*)0;
    __dec_obj58=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "26eq.nc", 296, 438);
    (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 296, 437) :0);
        __result_obj__0 = (struct sMultEqualNode*)come_increment_ref_count(self, "26eq.nc", 299, 439);
    come_call_finalizer(sMultEqualNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 299, 443);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 299, 444):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 299, 445):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sMultEqualNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 299, 446);
    return __result_obj__0;
}

char*  sMultEqualNode_kind(struct sMultEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMultEqualNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sMultEqualNode","26eq.nc",301))), "26eq.nc", 301, 447);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "26eq.nc", 301, 448));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "26eq.nc", 301, 449));
    return __result_obj__0;
}

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMultEqualNode_compile"; neo_current_frame = &fr;
    struct sNode* left;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right;
    _Bool Value_15;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj59  ;
    struct sType*  __dec_obj60  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left=(struct sNode*)come_increment_ref_count(self->mLeft, "26eq.nc", 306, 450);
    Value=node_compile(left,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 309, 451):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 312, 452);
    right=(struct sNode*)come_increment_ref_count(self->mRight, "26eq.nc", 314, 453);
    Value_15=node_compile(right,info);
    if(!Value_15) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 317, 454):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 317, 455);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 317, 456):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 320, 457);
    type=(struct sType* )come_increment_ref_count(left_value->type, "26eq.nc", 322, 458);
    const char* fun_name="operator_mult_equal";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left, "26eq.nc", 330, 459),(struct sNode*)come_increment_ref_count(right, "26eq.nc", 330, 460),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "26eq.nc", 334, 461, "struct CVALUE* "), "26eq.nc", 334, 462)), "26eq.nc", 334, 463);
        __right_value0 = (void*)0;
        __dec_obj59=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s*=%s",left_value->c_value,right_value->c_value), "26eq.nc", 336, 465);
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "26eq.nc", 336, 464);
        __right_value0 = (void*)0;
        __dec_obj60=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "26eq.nc", 337, 467);
        come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc", 337, 466);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "26eq.nc", 340, 468));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 345, 469);
    }
        __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 345, 470):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 345, 471);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 345, 472):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 345, 473);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 345, 474);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sMultEqualNode_finalize(struct sMultEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMultEqualNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sMultEqualNode_finalize", 2, 440));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sMultEqualNode_finalize", 3, 441):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sMultEqualNode_finalize", 4, 442):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDivEqualNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj61;
    struct sNode* __dec_obj62;
    struct sDivEqualNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDivEqualNode*)come_increment_ref_count(self, "26eq.nc", 353, 475),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 353, 476);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj61=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "26eq.nc", 357, 478);
    (__dec_obj61 ? __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 357, 477) :0);
    __right_value0 = (void*)0;
    __dec_obj62=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "26eq.nc", 358, 480);
    (__dec_obj62 ? __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 358, 479) :0);
        __result_obj__0 = (struct sDivEqualNode*)come_increment_ref_count(self, "26eq.nc", 361, 481);
    come_call_finalizer(sDivEqualNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 361, 485);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 361, 486):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 361, 487):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDivEqualNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 361, 488);
    return __result_obj__0;
}

char*  sDivEqualNode_kind(struct sDivEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDivEqualNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDivEqualNode","26eq.nc",363))), "26eq.nc", 363, 489);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "26eq.nc", 363, 490));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "26eq.nc", 363, 491));
    return __result_obj__0;
}

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDivEqualNode_compile"; neo_current_frame = &fr;
    struct sNode* left;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right;
    _Bool Value_16;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj63  ;
    struct sType*  __dec_obj64  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left=(struct sNode*)come_increment_ref_count(self->mLeft, "26eq.nc", 368, 492);
    Value=node_compile(left,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 371, 493):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 374, 494);
    right=(struct sNode*)come_increment_ref_count(self->mRight, "26eq.nc", 376, 495);
    Value_16=node_compile(right,info);
    if(!Value_16) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 379, 496):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 379, 497);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 379, 498):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 382, 499);
    type=(struct sType* )come_increment_ref_count(left_value->type, "26eq.nc", 384, 500);
    const char* fun_name="operator_div_equal";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left, "26eq.nc", 392, 501),(struct sNode*)come_increment_ref_count(right, "26eq.nc", 392, 502),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "26eq.nc", 396, 503, "struct CVALUE* "), "26eq.nc", 396, 504)), "26eq.nc", 396, 505);
        __right_value0 = (void*)0;
        __dec_obj63=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s/=%s",left_value->c_value,right_value->c_value), "26eq.nc", 398, 507);
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0, "26eq.nc", 398, 506);
        __right_value0 = (void*)0;
        __dec_obj64=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "26eq.nc", 399, 509);
        come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc", 399, 508);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "26eq.nc", 402, 510));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 407, 511);
    }
        __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 407, 512):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 407, 513);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 407, 514):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 407, 515);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 407, 516);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDivEqualNode_finalize(struct sDivEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDivEqualNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDivEqualNode_finalize", 2, 482));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sDivEqualNode_finalize", 3, 483):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sDivEqualNode_finalize", 4, 484):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModEqualNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj65;
    struct sNode* __dec_obj66;
    struct sModEqualNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sModEqualNode*)come_increment_ref_count(self, "26eq.nc", 415, 517),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 415, 518);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj65=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "26eq.nc", 419, 520);
    (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 419, 519) :0);
    __right_value0 = (void*)0;
    __dec_obj66=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "26eq.nc", 420, 522);
    (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 420, 521) :0);
        __result_obj__0 = (struct sModEqualNode*)come_increment_ref_count(self, "26eq.nc", 423, 523);
    come_call_finalizer(sModEqualNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 423, 527);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 423, 528):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 423, 529):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sModEqualNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 423, 530);
    return __result_obj__0;
}

char*  sModEqualNode_kind(struct sModEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModEqualNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sModEqualNode","26eq.nc",425))), "26eq.nc", 425, 531);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "26eq.nc", 425, 532));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "26eq.nc", 425, 533));
    return __result_obj__0;
}

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModEqualNode_compile"; neo_current_frame = &fr;
    struct sNode* left;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right;
    _Bool Value_17;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj67  ;
    struct sType*  __dec_obj68  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left=(struct sNode*)come_increment_ref_count(self->mLeft, "26eq.nc", 430, 534);
    Value=node_compile(left,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 433, 535):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 436, 536);
    right=(struct sNode*)come_increment_ref_count(self->mRight, "26eq.nc", 438, 537);
    Value_17=node_compile(right,info);
    if(!Value_17) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 441, 538):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 441, 539);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 441, 540):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 444, 541);
    type=(struct sType* )come_increment_ref_count(left_value->type, "26eq.nc", 446, 542);
    const char* fun_name="operator_mod_equal";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left, "26eq.nc", 454, 543),(struct sNode*)come_increment_ref_count(right, "26eq.nc", 454, 544),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "26eq.nc", 458, 545, "struct CVALUE* "), "26eq.nc", 458, 546)), "26eq.nc", 458, 547);
        __right_value0 = (void*)0;
        __dec_obj67=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s%%=%s",left_value->c_value,right_value->c_value), "26eq.nc", 460, 549);
        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0, "26eq.nc", 460, 548);
        __right_value0 = (void*)0;
        __dec_obj68=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "26eq.nc", 461, 551);
        come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc", 461, 550);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "26eq.nc", 464, 552));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 469, 553);
    }
        __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 469, 554):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 469, 555);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 469, 556):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 469, 557);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 469, 558);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sModEqualNode_finalize(struct sModEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModEqualNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sModEqualNode_finalize", 2, 524));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sModEqualNode_finalize", 3, 525):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sModEqualNode_finalize", 4, 526):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLShifEqualNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj69;
    struct sNode* __dec_obj70;
    struct sLShifEqualNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLShifEqualNode*)come_increment_ref_count(self, "26eq.nc", 477, 559),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 477, 560);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj69=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "26eq.nc", 481, 562);
    (__dec_obj69 ? __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 481, 561) :0);
    __right_value0 = (void*)0;
    __dec_obj70=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "26eq.nc", 482, 564);
    (__dec_obj70 ? __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 482, 563) :0);
        __result_obj__0 = (struct sLShifEqualNode*)come_increment_ref_count(self, "26eq.nc", 485, 565);
    come_call_finalizer(sLShifEqualNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 485, 569);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 485, 570):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 485, 571):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLShifEqualNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 485, 572);
    return __result_obj__0;
}

char*  sLShifEqualNode_kind(struct sLShifEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLShifEqualNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLShifEqualNode","26eq.nc",487))), "26eq.nc", 487, 573);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "26eq.nc", 487, 574));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "26eq.nc", 487, 575));
    return __result_obj__0;
}

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLShifEqualNode_compile"; neo_current_frame = &fr;
    struct sNode* left;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right;
    _Bool Value_18;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj71  ;
    struct sType*  __dec_obj72  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left=(struct sNode*)come_increment_ref_count(self->mLeft, "26eq.nc", 492, 576);
    Value=node_compile(left,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 495, 577):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 498, 578);
    right=(struct sNode*)come_increment_ref_count(self->mRight, "26eq.nc", 500, 579);
    Value_18=node_compile(right,info);
    if(!Value_18) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 503, 580):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 503, 581);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 503, 582):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 506, 583);
    type=(struct sType* )come_increment_ref_count(left_value->type, "26eq.nc", 508, 584);
    const char* fun_name="operator_lshift_equal";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left, "26eq.nc", 516, 585),(struct sNode*)come_increment_ref_count(right, "26eq.nc", 516, 586),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "26eq.nc", 520, 587, "struct CVALUE* "), "26eq.nc", 520, 588)), "26eq.nc", 520, 589);
        __right_value0 = (void*)0;
        __dec_obj71=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s<<=%s",left_value->c_value,right_value->c_value), "26eq.nc", 522, 591);
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0, "26eq.nc", 522, 590);
        __right_value0 = (void*)0;
        __dec_obj72=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "26eq.nc", 523, 593);
        come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc", 523, 592);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "26eq.nc", 526, 594));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 531, 595);
    }
        __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 531, 596):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 531, 597);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 531, 598):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 531, 599);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 531, 600);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLShifEqualNode_finalize(struct sLShifEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLShifEqualNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLShifEqualNode_finalize", 2, 566));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sLShifEqualNode_finalize", 3, 567):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sLShifEqualNode_finalize", 4, 568):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftEqualNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj73;
    struct sNode* __dec_obj74;
    struct sRShiftEqualNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sRShiftEqualNode*)come_increment_ref_count(self, "26eq.nc", 539, 601),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 539, 602);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj73=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "26eq.nc", 543, 604);
    (__dec_obj73 ? __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 543, 603) :0);
    __right_value0 = (void*)0;
    __dec_obj74=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "26eq.nc", 544, 606);
    (__dec_obj74 ? __dec_obj74 = come_decrement_ref_count(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 544, 605) :0);
        __result_obj__0 = (struct sRShiftEqualNode*)come_increment_ref_count(self, "26eq.nc", 547, 607);
    come_call_finalizer(sRShiftEqualNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 547, 611);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 547, 612):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 547, 613):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sRShiftEqualNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 547, 614);
    return __result_obj__0;
}

char*  sRShiftEqualNode_kind(struct sRShiftEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftEqualNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sRShiftEqualNode","26eq.nc",549))), "26eq.nc", 549, 615);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "26eq.nc", 549, 616));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "26eq.nc", 549, 617));
    return __result_obj__0;
}

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftEqualNode_compile"; neo_current_frame = &fr;
    struct sNode* left;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right;
    _Bool Value_19;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj75  ;
    struct sType*  __dec_obj76  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left=(struct sNode*)come_increment_ref_count(self->mLeft, "26eq.nc", 554, 618);
    Value=node_compile(left,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 557, 619):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 560, 620);
    right=(struct sNode*)come_increment_ref_count(self->mRight, "26eq.nc", 562, 621);
    Value_19=node_compile(right,info);
    if(!Value_19) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 565, 622):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 565, 623);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 565, 624):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 568, 625);
    type=(struct sType* )come_increment_ref_count(left_value->type, "26eq.nc", 570, 626);
    const char* fun_name="operator_rshift_equal";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left, "26eq.nc", 578, 627),(struct sNode*)come_increment_ref_count(right, "26eq.nc", 578, 628),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "26eq.nc", 582, 629, "struct CVALUE* "), "26eq.nc", 582, 630)), "26eq.nc", 582, 631);
        __right_value0 = (void*)0;
        __dec_obj75=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s>>=%s",left_value->c_value,right_value->c_value), "26eq.nc", 584, 633);
        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0, "26eq.nc", 584, 632);
        __right_value0 = (void*)0;
        __dec_obj76=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "26eq.nc", 585, 635);
        come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc", 585, 634);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "26eq.nc", 588, 636));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 593, 637);
    }
        __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 593, 638):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 593, 639);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 593, 640):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 593, 641);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 593, 642);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftEqualNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sRShiftEqualNode_finalize", 2, 608));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sRShiftEqualNode_finalize", 3, 609):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sRShiftEqualNode_finalize", 4, 610):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sXorEqualNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj77;
    struct sNode* __dec_obj78;
    struct sXorEqualNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sXorEqualNode*)come_increment_ref_count(self, "26eq.nc", 601, 643),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 601, 644);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj77=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "26eq.nc", 605, 646);
    (__dec_obj77 ? __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 605, 645) :0);
    __right_value0 = (void*)0;
    __dec_obj78=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "26eq.nc", 606, 648);
    (__dec_obj78 ? __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 606, 647) :0);
        __result_obj__0 = (struct sXorEqualNode*)come_increment_ref_count(self, "26eq.nc", 609, 649);
    come_call_finalizer(sXorEqualNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 609, 653);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 609, 654):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 609, 655):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sXorEqualNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 609, 656);
    return __result_obj__0;
}

char*  sXorEqualNode_kind(struct sXorEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sXorEqualNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sXorEqualNode","26eq.nc",611))), "26eq.nc", 611, 657);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "26eq.nc", 611, 658));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "26eq.nc", 611, 659));
    return __result_obj__0;
}

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sXorEqualNode_compile"; neo_current_frame = &fr;
    struct sNode* left;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right;
    _Bool Value_20;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj79  ;
    struct sType*  __dec_obj80  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left=(struct sNode*)come_increment_ref_count(self->mLeft, "26eq.nc", 616, 660);
    Value=node_compile(left,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 619, 661):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 622, 662);
    right=(struct sNode*)come_increment_ref_count(self->mRight, "26eq.nc", 624, 663);
    Value_20=node_compile(right,info);
    if(!Value_20) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 627, 664):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 627, 665);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 627, 666):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 630, 667);
    type=(struct sType* )come_increment_ref_count(left_value->type, "26eq.nc", 632, 668);
    const char* fun_name="operator_xor_equal";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left, "26eq.nc", 640, 669),(struct sNode*)come_increment_ref_count(right, "26eq.nc", 640, 670),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "26eq.nc", 644, 671, "struct CVALUE* "), "26eq.nc", 644, 672)), "26eq.nc", 644, 673);
        __right_value0 = (void*)0;
        __dec_obj79=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s^=%s",left_value->c_value,right_value->c_value), "26eq.nc", 646, 675);
        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0, "26eq.nc", 646, 674);
        __right_value0 = (void*)0;
        __dec_obj80=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "26eq.nc", 647, 677);
        come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc", 647, 676);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "26eq.nc", 650, 678));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 655, 679);
    }
        __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 655, 680):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 655, 681);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 655, 682):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 655, 683);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 655, 684);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sXorEqualNode_finalize(struct sXorEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sXorEqualNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sXorEqualNode_finalize", 2, 650));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sXorEqualNode_finalize", 3, 651):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sXorEqualNode_finalize", 4, 652):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrEqualNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj81;
    struct sNode* __dec_obj82;
    struct sOrEqualNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sOrEqualNode*)come_increment_ref_count(self, "26eq.nc", 663, 685),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 663, 686);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj81=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "26eq.nc", 667, 688);
    (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 667, 687) :0);
    __right_value0 = (void*)0;
    __dec_obj82=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "26eq.nc", 668, 690);
    (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 668, 689) :0);
        __result_obj__0 = (struct sOrEqualNode*)come_increment_ref_count(self, "26eq.nc", 671, 691);
    come_call_finalizer(sOrEqualNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 671, 695);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 671, 696):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 671, 697):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sOrEqualNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 671, 698);
    return __result_obj__0;
}

char*  sOrEqualNode_kind(struct sOrEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrEqualNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sOrEqualNode","26eq.nc",673))), "26eq.nc", 673, 699);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "26eq.nc", 673, 700));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "26eq.nc", 673, 701));
    return __result_obj__0;
}

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrEqualNode_compile"; neo_current_frame = &fr;
    struct sNode* left;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right;
    _Bool Value_21;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj83  ;
    struct sType*  __dec_obj84  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left=(struct sNode*)come_increment_ref_count(self->mLeft, "26eq.nc", 678, 702);
    Value=node_compile(left,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 681, 703):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 684, 704);
    right=(struct sNode*)come_increment_ref_count(self->mRight, "26eq.nc", 686, 705);
    Value_21=node_compile(right,info);
    if(!Value_21) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 689, 706):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 689, 707);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 689, 708):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 692, 709);
    type=(struct sType* )come_increment_ref_count(left_value->type, "26eq.nc", 694, 710);
    const char* fun_name="operator_or_equal";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left, "26eq.nc", 702, 711),(struct sNode*)come_increment_ref_count(right, "26eq.nc", 702, 712),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "26eq.nc", 706, 713, "struct CVALUE* "), "26eq.nc", 706, 714)), "26eq.nc", 706, 715);
        __right_value0 = (void*)0;
        __dec_obj83=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s|=%s",left_value->c_value,right_value->c_value), "26eq.nc", 708, 717);
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0, "26eq.nc", 708, 716);
        __right_value0 = (void*)0;
        __dec_obj84=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "26eq.nc", 709, 719);
        come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc", 709, 718);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "26eq.nc", 712, 720));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 717, 721);
    }
        __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 717, 722):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 717, 723);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 717, 724):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 717, 725);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 717, 726);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sOrEqualNode_finalize(struct sOrEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrEqualNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sOrEqualNode_finalize", 2, 692));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sOrEqualNode_finalize", 3, 693):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sOrEqualNode_finalize", 4, 694):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndEqualNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj85;
    struct sNode* __dec_obj86;
    struct sAndEqualNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAndEqualNode*)come_increment_ref_count(self, "26eq.nc", 725, 727),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 725, 728);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj85=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "26eq.nc", 729, 730);
    (__dec_obj85 ? __dec_obj85 = come_decrement_ref_count(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 729, 729) :0);
    __right_value0 = (void*)0;
    __dec_obj86=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "26eq.nc", 730, 732);
    (__dec_obj86 ? __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 730, 731) :0);
        __result_obj__0 = (struct sAndEqualNode*)come_increment_ref_count(self, "26eq.nc", 733, 733);
    come_call_finalizer(sAndEqualNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 733, 737);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 733, 738):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 733, 739):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAndEqualNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 733, 740);
    return __result_obj__0;
}

char*  sAndEqualNode_kind(struct sAndEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndEqualNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAndEqualNode","26eq.nc",735))), "26eq.nc", 735, 741);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "26eq.nc", 735, 742));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "26eq.nc", 735, 743));
    return __result_obj__0;
}

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndEqualNode_compile"; neo_current_frame = &fr;
    struct sNode* left;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right;
    _Bool Value_22;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj87  ;
    struct sType*  __dec_obj88  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left=(struct sNode*)come_increment_ref_count(self->mLeft, "26eq.nc", 740, 744);
    Value=node_compile(left,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 743, 745):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 746, 746);
    right=(struct sNode*)come_increment_ref_count(self->mRight, "26eq.nc", 748, 747);
    Value_22=node_compile(right,info);
    if(!Value_22) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 751, 748):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 751, 749);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 751, 750):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 754, 751);
    type=(struct sType* )come_increment_ref_count(left_value->type, "26eq.nc", 756, 752);
    const char* fun_name="operator_and_equal";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left, "26eq.nc", 764, 753),(struct sNode*)come_increment_ref_count(right, "26eq.nc", 764, 754),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "26eq.nc", 768, 755, "struct CVALUE* "), "26eq.nc", 768, 756)), "26eq.nc", 768, 757);
        __right_value0 = (void*)0;
        __dec_obj87=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s&=%s",left_value->c_value,right_value->c_value), "26eq.nc", 770, 759);
        __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0, "26eq.nc", 770, 758);
        __right_value0 = (void*)0;
        __dec_obj88=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "26eq.nc", 771, 761);
        come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc", 771, 760);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "26eq.nc", 774, 762));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 779, 763);
    }
        __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 779, 764):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 779, 765);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 779, 766):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 779, 767);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 779, 768);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAndEqualNode_finalize(struct sAndEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndEqualNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAndEqualNode_finalize", 2, 734));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sAndEqualNode_finalize", 3, 735):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sAndEqualNode_finalize", 4, 736):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sExpEqualNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj89;
    struct sNode* __dec_obj90;
    struct sExpEqualNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sExpEqualNode*)come_increment_ref_count(self, "26eq.nc", 787, 769),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 787, 770);
    self->mQuote=quote;
    __right_value0 = (void*)0;
    __dec_obj89=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "26eq.nc", 791, 772);
    (__dec_obj89 ? __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 791, 771) :0);
    __right_value0 = (void*)0;
    __dec_obj90=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "26eq.nc", 792, 774);
    (__dec_obj90 ? __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0, (void*)0, "26eq.nc", 792, 773) :0);
        __result_obj__0 = (struct sExpEqualNode*)come_increment_ref_count(self, "26eq.nc", 795, 775);
    come_call_finalizer(sExpEqualNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 795, 779);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 795, 780):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 795, 781):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sExpEqualNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "26eq.nc}", 795, 782);
    return __result_obj__0;
}

char*  sExpEqualNode_kind(struct sExpEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sExpEqualNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sExpEqualNode","26eq.nc",797))), "26eq.nc", 797, 783);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "26eq.nc", 797, 784));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "26eq.nc", 797, 785));
    return __result_obj__0;
}

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sExpEqualNode_compile"; neo_current_frame = &fr;
    struct sNode* left;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right;
    _Bool Value_23;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    _Bool _conditional_value_X0;
    struct sNode* left2;
    _Bool no_output_come_code;
    _Bool compile_result;
    struct CVALUE*  left_value2  ;
    struct CVALUE*  come_value  ;
    char*  __dec_obj91  ;
    struct sType*  __dec_obj92  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left=(struct sNode*)come_increment_ref_count(self->mLeft, "26eq.nc", 802, 786);
    Value=node_compile(left,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 805, 787):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 808, 788);
    right=(struct sNode*)come_increment_ref_count(self->mRight, "26eq.nc", 810, 789);
    Value_23=node_compile(right,info);
    if(!Value_23) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 813, 790):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 813, 791);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 813, 792):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 816, 793);
    type=(struct sType* )come_increment_ref_count(left_value->type, "26eq.nc", 818, 794);
    const char* fun_name="operator_exp_equal";
    if(self->mQuote) {
        calling_fun=reject_ref_optional_binary_operator(fun_name,left_value,right_value,info);
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left, "26eq.nc", 826, 795),(struct sNode*)come_increment_ref_count(right, "26eq.nc", 826, 796),left_value,right_value,(_Bool)0,info);
        if(__right_value0 = (void*)0,
({(_conditional_value_X0=(!calling_fun&&string_operator_equals(((char* )(__right_value1=left->kind(left->_protocol_obj))),"sDerefferenceNode")));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "26eq.nc", 828, 797));
_conditional_value_X0;})) {
            __right_value0 = (void*)0;
            left2=(struct sNode*)come_increment_ref_count(sNode_clone(left->left_value(left->_protocol_obj)), "26eq.nc", 829, 798);
            no_output_come_code=info->no_output_come_code;
            info->no_output_come_code=(_Bool)1;
            compile_result=node_compile(left2,info);
            info->no_output_come_code=no_output_come_code;
            if(!compile_result) {
                                __result_obj__0 = (_Bool)0;
                ((left2) ? left2 = come_decrement_ref_count(left2, ((struct sNode*)left2)->finalize, ((struct sNode*)left2)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 837, 799):(void*)0);
                ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 837, 800):(void*)0);
                come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 837, 801);
                ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 837, 802):(void*)0);
                come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 837, 803);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 837, 804);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            left_value2=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "26eq.nc", 840, 805);
            calling_fun=operator_overload_fun_store_derefference(left_value2->type,(struct sNode*)come_increment_ref_count(left2, "26eq.nc", 842, 806),(struct sNode*)come_increment_ref_count(right, "26eq.nc", 842, 807),left_value2,right_value,info);
            ((left2) ? left2 = come_decrement_ref_count(left2, ((struct sNode*)left2)->finalize, ((struct sNode*)left2)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 844, 808):(void*)0);
            come_call_finalizer(CVALUE_finalize, left_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 844, 809);
        }
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "26eq.nc", 847, 810, "struct CVALUE* "), "26eq.nc", 847, 811)), "26eq.nc", 847, 812);
        __right_value0 = (void*)0;
        __dec_obj91=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",left_value->c_value,right_value->c_value), "26eq.nc", 849, 814);
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0, "26eq.nc", 849, 813);
        __right_value0 = (void*)0;
        __dec_obj92=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "26eq.nc", 850, 816);
        come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc", 850, 815);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "26eq.nc", 853, 817));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 858, 818);
    }
        __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 858, 819):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 858, 820);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 858, 821):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 858, 822);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "26eq.nc}", 858, 823);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sExpEqualNode_finalize(struct sExpEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sExpEqualNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sExpEqualNode_finalize", 2, 776));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sExpEqualNode_finalize", 3, 777):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sExpEqualNode_finalize", 4, 778):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "post_position_operator_v19"; neo_current_frame = &fr;
    _Bool quote;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sPlusPlusNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _Bool quote_24;
    struct sNode* _inf_value2;
    struct sMinusMinusNode* _inf_obj_value2;
    _Bool quote_25;
    struct sNode* right_node;
    struct sNode* _inf_value3;
    struct sPlusEqualNode* _inf_obj_value3;
    _Bool quote_26;
    struct sNode* right_node_27;
    struct sNode* _inf_value4;
    struct sMinusEqualNode* _inf_obj_value4;
    _Bool quote_28;
    struct sNode* right_node_29;
    struct sNode* _inf_value5;
    struct sMultEqualNode* _inf_obj_value5;
    _Bool quote_30;
    struct sNode* right_node_31;
    struct sNode* _inf_value6;
    struct sDivEqualNode* _inf_obj_value6;
    _Bool quote_32;
    struct sNode* right_node_33;
    struct sNode* _inf_value7;
    struct sModEqualNode* _inf_obj_value7;
    _Bool quote_34;
    struct sNode* right_node_35;
    struct sNode* _inf_value8;
    struct sLShifEqualNode* _inf_obj_value8;
    _Bool quote_36;
    struct sNode* right_node_37;
    struct sNode* _inf_value9;
    struct sRShiftEqualNode* _inf_obj_value9;
    _Bool quote_38;
    struct sNode* right_node_39;
    struct sNode* _inf_value10;
    struct sXorEqualNode* _inf_obj_value10;
    _Bool quote_40;
    struct sNode* right_node_41;
    struct sNode* _inf_value11;
    struct sAndEqualNode* _inf_obj_value11;
    _Bool quote_42;
    struct sNode* right_node_43;
    struct sNode* _inf_value12;
    struct sOrEqualNode* _inf_obj_value12;
    _Bool quote_44;
    struct sNode* right_node_45;
    struct sNode* _inf_value13;
    struct sExpEqualNode* _inf_obj_value13;
    memset(&quote, 0, sizeof(quote));
    memset(&quote_24, 0, sizeof(quote_24));
    memset(&quote_25, 0, sizeof(quote_25));
    memset(&quote_26, 0, sizeof(quote_26));
    memset(&quote_28, 0, sizeof(quote_28));
    memset(&quote_30, 0, sizeof(quote_30));
    memset(&quote_32, 0, sizeof(quote_32));
    memset(&quote_34, 0, sizeof(quote_34));
    memset(&quote_36, 0, sizeof(quote_36));
    memset(&quote_38, 0, sizeof(quote_38));
    memset(&quote_40, 0, sizeof(quote_40));
    memset(&quote_42, 0, sizeof(quote_42));
    memset(&quote_44, 0, sizeof(quote_44));
    if(!node->terminated(node->_protocol_obj)&&((span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==43&&*(info->p->p+2)==43)||(span$1char$p_operator_derefference(info->p)==43&&*(info->p->p+1)==43))) {
        if(span$1char$p_operator_derefference(info->p)==92) {
            info->p->p+=3;
            skip_spaces_and_lf(info);
            quote=(_Bool)1;
        }
        else {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            quote=(_Bool)0;
        }
                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "26eq.nc", 877, 827, "struct sNode");
        _inf_obj_value1=(struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(__right_value1=sPlusPlusNode_initialize((struct sPlusPlusNode* )come_increment_ref_count((struct sPlusPlusNode *)come_calloc(1, sizeof(struct sPlusPlusNode )*(1), "26eq.nc", 877, 824, "struct sPlusPlusNode* "), "26eq.nc", 877, 825),(struct sNode*)come_increment_ref_count(node, "26eq.nc", 877, 826),quote,info))), "26eq.nc", 877, 828);
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sPlusPlusNode_finalize;
        _inf_value1->clone=(void*)sPlusPlusNode_clone;
        _inf_value1->compile=(void*)sPlusPlusNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sPlusPlusNode_kind;
        _inf_value1->left_value=(void*)sNodeBase_left_value;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "26eq.nc", 877, 837);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 877, 838):(void*)0);
        come_call_finalizer(sPlusPlusNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 877, 839);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "26eq.nc", 877, 840):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "26eq.nc", 877, 841):(void*)0);
        return __result_obj__0;
    }
    else if(!node->terminated(node->_protocol_obj)&&((span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==45&&*(info->p->p+2)==45)||(span$1char$p_operator_derefference(info->p)==45&&*(info->p->p+1)==45))) {
        if(span$1char$p_operator_derefference(info->p)==92) {
            info->p->p+=3;
            skip_spaces_and_lf(info);
            quote_24=(_Bool)1;
        }
        else {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            quote_24=(_Bool)0;
        }
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "26eq.nc", 892, 845, "struct sNode");
        _inf_obj_value2=(struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(__right_value1=sMinusMinusNode_initialize((struct sMinusMinusNode* )come_increment_ref_count((struct sMinusMinusNode *)come_calloc(1, sizeof(struct sMinusMinusNode )*(1), "26eq.nc", 892, 842, "struct sMinusMinusNode* "), "26eq.nc", 892, 843),(struct sNode*)come_increment_ref_count(node, "26eq.nc", 892, 844),quote_24,info))), "26eq.nc", 892, 846);
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sMinusMinusNode_finalize;
        _inf_value2->clone=(void*)sMinusMinusNode_clone;
        _inf_value2->compile=(void*)sMinusMinusNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sNodeBase_terminated;
        _inf_value2->kind=(void*)sMinusMinusNode_kind;
        _inf_value2->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)), "26eq.nc", 892, 855);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 892, 856):(void*)0);
        come_call_finalizer(sMinusMinusNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 892, 857);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "26eq.nc", 892, 858):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "26eq.nc", 892, 859):(void*)0);
        return __result_obj__0;
    }
    else if(info->no_assign) {
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=post_position_operator_v7((struct sNode*)come_increment_ref_count(node, "26eq.nc", 895, 860),info))), "26eq.nc", 895, 861);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 895, 862):(void*)0);
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "26eq.nc", 895, 863):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "26eq.nc", 895, 864):(void*)0);
        return __result_obj__0;
    }
    else if(!node->terminated(node->_protocol_obj)&&((span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==43&&*(info->p->p+2)==61)||(span$1char$p_operator_derefference(info->p)==43&&*(info->p->p+1)==61))) {
        if(span$1char$p_operator_derefference(info->p)==92) {
            info->p->p+=3;
            skip_spaces_and_lf(info);
            quote_25=(_Bool)1;
        }
        else {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            quote_25=(_Bool)0;
        }
        __right_value0 = (void*)0;
        right_node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "26eq.nc", 911, 865);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "26eq.nc", 913, 870, "struct sNode");
        _inf_obj_value3=(struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(__right_value1=sPlusEqualNode_initialize((struct sPlusEqualNode* )come_increment_ref_count((struct sPlusEqualNode *)come_calloc(1, sizeof(struct sPlusEqualNode )*(1), "26eq.nc", 913, 866, "struct sPlusEqualNode* "), "26eq.nc", 913, 867),(struct sNode*)come_increment_ref_count(node, "26eq.nc", 913, 868),(struct sNode*)come_increment_ref_count(right_node, "26eq.nc", 913, 869),quote_25,info))), "26eq.nc", 913, 871);
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sPlusEqualNode_finalize;
        _inf_value3->clone=(void*)sPlusEqualNode_clone;
        _inf_value3->compile=(void*)sPlusEqualNode_compile;
        _inf_value3->sline=(void*)sNodeBase_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sNodeBase_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sPlusEqualNode_kind;
        _inf_value3->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)), "26eq.nc", 913, 882);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 913, 883):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 913, 884):(void*)0);
        come_call_finalizer(sPlusEqualNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 913, 885);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "26eq.nc", 913, 886):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "26eq.nc", 913, 887):(void*)0);
        return __result_obj__0;
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1094, 888):(void*)0);
    }
    else if(!node->terminated(node->_protocol_obj)&&((span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==45&&*(info->p->p+2)==61)||(span$1char$p_operator_derefference(info->p)==45&&*(info->p->p+1)==61))) {
        if(span$1char$p_operator_derefference(info->p)==92) {
            info->p->p+=3;
            skip_spaces_and_lf(info);
            quote_26=(_Bool)1;
        }
        else {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            quote_26=(_Bool)0;
        }
        __right_value0 = (void*)0;
        right_node_27=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "26eq.nc", 929, 889);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "26eq.nc", 931, 894, "struct sNode");
        _inf_obj_value4=(struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(__right_value1=sMinusEqualNode_initialize((struct sMinusEqualNode* )come_increment_ref_count((struct sMinusEqualNode *)come_calloc(1, sizeof(struct sMinusEqualNode )*(1), "26eq.nc", 931, 890, "struct sMinusEqualNode* "), "26eq.nc", 931, 891),(struct sNode*)come_increment_ref_count(node, "26eq.nc", 931, 892),(struct sNode*)come_increment_ref_count(right_node_27, "26eq.nc", 931, 893),quote_26,info))), "26eq.nc", 931, 895);
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sMinusEqualNode_finalize;
        _inf_value4->clone=(void*)sMinusEqualNode_clone;
        _inf_value4->compile=(void*)sMinusEqualNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sMinusEqualNode_kind;
        _inf_value4->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value4)), "26eq.nc", 931, 906);
        ((right_node_27) ? right_node_27 = come_decrement_ref_count(right_node_27, ((struct sNode*)right_node_27)->finalize, ((struct sNode*)right_node_27)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 931, 907):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 931, 908):(void*)0);
        come_call_finalizer(sMinusEqualNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 931, 909);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "26eq.nc", 931, 910):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "26eq.nc", 931, 911):(void*)0);
        return __result_obj__0;
        ((right_node_27) ? right_node_27 = come_decrement_ref_count(right_node_27, ((struct sNode*)right_node_27)->finalize, ((struct sNode*)right_node_27)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1094, 912):(void*)0);
    }
    else if(!node->terminated(node->_protocol_obj)&&((span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==42&&*(info->p->p+2)==61)||(span$1char$p_operator_derefference(info->p)==42&&*(info->p->p+1)==61))) {
        if(span$1char$p_operator_derefference(info->p)==92) {
            info->p->p+=3;
            skip_spaces_and_lf(info);
            quote_28=(_Bool)1;
        }
        else {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            quote_28=(_Bool)0;
        }
        __right_value0 = (void*)0;
        right_node_29=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "26eq.nc", 947, 913);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "26eq.nc", 949, 918, "struct sNode");
        _inf_obj_value5=(struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(__right_value1=sMultEqualNode_initialize((struct sMultEqualNode* )come_increment_ref_count((struct sMultEqualNode *)come_calloc(1, sizeof(struct sMultEqualNode )*(1), "26eq.nc", 949, 914, "struct sMultEqualNode* "), "26eq.nc", 949, 915),(struct sNode*)come_increment_ref_count(node, "26eq.nc", 949, 916),(struct sNode*)come_increment_ref_count(right_node_29, "26eq.nc", 949, 917),quote_28,info))), "26eq.nc", 949, 919);
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sMultEqualNode_finalize;
        _inf_value5->clone=(void*)sMultEqualNode_clone;
        _inf_value5->compile=(void*)sMultEqualNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sMultEqualNode_kind;
        _inf_value5->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value5)), "26eq.nc", 949, 930);
        ((right_node_29) ? right_node_29 = come_decrement_ref_count(right_node_29, ((struct sNode*)right_node_29)->finalize, ((struct sNode*)right_node_29)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 949, 931):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 949, 932):(void*)0);
        come_call_finalizer(sMultEqualNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 949, 933);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "26eq.nc", 949, 934):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "26eq.nc", 949, 935):(void*)0);
        return __result_obj__0;
        ((right_node_29) ? right_node_29 = come_decrement_ref_count(right_node_29, ((struct sNode*)right_node_29)->finalize, ((struct sNode*)right_node_29)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1094, 936):(void*)0);
    }
    else if(!node->terminated(node->_protocol_obj)&&((span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==47&&*(info->p->p+2)==61)||(span$1char$p_operator_derefference(info->p)==47&&*(info->p->p+1)==61))) {
        if(span$1char$p_operator_derefference(info->p)==92) {
            info->p->p+=3;
            skip_spaces_and_lf(info);
            quote_30=(_Bool)1;
        }
        else {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            quote_30=(_Bool)0;
        }
        __right_value0 = (void*)0;
        right_node_31=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "26eq.nc", 965, 937);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "26eq.nc", 967, 942, "struct sNode");
        _inf_obj_value6=(struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(__right_value1=sDivEqualNode_initialize((struct sDivEqualNode* )come_increment_ref_count((struct sDivEqualNode *)come_calloc(1, sizeof(struct sDivEqualNode )*(1), "26eq.nc", 967, 938, "struct sDivEqualNode* "), "26eq.nc", 967, 939),(struct sNode*)come_increment_ref_count(node, "26eq.nc", 967, 940),(struct sNode*)come_increment_ref_count(right_node_31, "26eq.nc", 967, 941),quote_30,info))), "26eq.nc", 967, 943);
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sDivEqualNode_finalize;
        _inf_value6->clone=(void*)sDivEqualNode_clone;
        _inf_value6->compile=(void*)sDivEqualNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sDivEqualNode_kind;
        _inf_value6->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)), "26eq.nc", 967, 954);
        ((right_node_31) ? right_node_31 = come_decrement_ref_count(right_node_31, ((struct sNode*)right_node_31)->finalize, ((struct sNode*)right_node_31)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 967, 955):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 967, 956):(void*)0);
        come_call_finalizer(sDivEqualNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 967, 957);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "26eq.nc", 967, 958):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "26eq.nc", 967, 959):(void*)0);
        return __result_obj__0;
        ((right_node_31) ? right_node_31 = come_decrement_ref_count(right_node_31, ((struct sNode*)right_node_31)->finalize, ((struct sNode*)right_node_31)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1094, 960):(void*)0);
    }
    else if(!node->terminated(node->_protocol_obj)&&((span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==37&&*(info->p->p+2)==61)||(span$1char$p_operator_derefference(info->p)==37&&*(info->p->p+1)==61))) {
        if(span$1char$p_operator_derefference(info->p)==92) {
            info->p->p+=3;
            skip_spaces_and_lf(info);
            quote_32=(_Bool)1;
        }
        else {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            quote_32=(_Bool)0;
        }
        __right_value0 = (void*)0;
        right_node_33=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "26eq.nc", 984, 961);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "26eq.nc", 986, 966, "struct sNode");
        _inf_obj_value7=(struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(__right_value1=sModEqualNode_initialize((struct sModEqualNode* )come_increment_ref_count((struct sModEqualNode *)come_calloc(1, sizeof(struct sModEqualNode )*(1), "26eq.nc", 986, 962, "struct sModEqualNode* "), "26eq.nc", 986, 963),(struct sNode*)come_increment_ref_count(node, "26eq.nc", 986, 964),(struct sNode*)come_increment_ref_count(right_node_33, "26eq.nc", 986, 965),quote_32,info))), "26eq.nc", 986, 967);
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sModEqualNode_finalize;
        _inf_value7->clone=(void*)sModEqualNode_clone;
        _inf_value7->compile=(void*)sModEqualNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sModEqualNode_kind;
        _inf_value7->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value7)), "26eq.nc", 986, 978);
        ((right_node_33) ? right_node_33 = come_decrement_ref_count(right_node_33, ((struct sNode*)right_node_33)->finalize, ((struct sNode*)right_node_33)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 986, 979):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 986, 980):(void*)0);
        come_call_finalizer(sModEqualNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 986, 981);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "26eq.nc", 986, 982):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "26eq.nc", 986, 983):(void*)0);
        return __result_obj__0;
        ((right_node_33) ? right_node_33 = come_decrement_ref_count(right_node_33, ((struct sNode*)right_node_33)->finalize, ((struct sNode*)right_node_33)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1094, 984):(void*)0);
    }
    else if(!node->terminated(node->_protocol_obj)&&((span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==60&&*(info->p->p+2)==60&&*(info->p->p+3)==61)||(span$1char$p_operator_derefference(info->p)==60&&*(info->p->p+1)==60&&*(info->p->p+2)==61))) {
        if(span$1char$p_operator_derefference(info->p)==92) {
            info->p->p+=4;
            skip_spaces_and_lf(info);
            quote_34=(_Bool)1;
        }
        else {
            info->p->p+=3;
            skip_spaces_and_lf(info);
            quote_34=(_Bool)0;
        }
        __right_value0 = (void*)0;
        right_node_35=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "26eq.nc", 1002, 985);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "26eq.nc", 1004, 990, "struct sNode");
        _inf_obj_value8=(struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(__right_value1=sLShifEqualNode_initialize((struct sLShifEqualNode* )come_increment_ref_count((struct sLShifEqualNode *)come_calloc(1, sizeof(struct sLShifEqualNode )*(1), "26eq.nc", 1004, 986, "struct sLShifEqualNode* "), "26eq.nc", 1004, 987),(struct sNode*)come_increment_ref_count(node, "26eq.nc", 1004, 988),(struct sNode*)come_increment_ref_count(right_node_35, "26eq.nc", 1004, 989),quote_34,info))), "26eq.nc", 1004, 991);
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sLShifEqualNode_finalize;
        _inf_value8->clone=(void*)sLShifEqualNode_clone;
        _inf_value8->compile=(void*)sLShifEqualNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sLShifEqualNode_kind;
        _inf_value8->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)), "26eq.nc", 1004, 1002);
        ((right_node_35) ? right_node_35 = come_decrement_ref_count(right_node_35, ((struct sNode*)right_node_35)->finalize, ((struct sNode*)right_node_35)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1004, 1003):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1004, 1004):(void*)0);
        come_call_finalizer(sLShifEqualNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 1004, 1005);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "26eq.nc", 1004, 1006):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "26eq.nc", 1004, 1007):(void*)0);
        return __result_obj__0;
        ((right_node_35) ? right_node_35 = come_decrement_ref_count(right_node_35, ((struct sNode*)right_node_35)->finalize, ((struct sNode*)right_node_35)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1094, 1008):(void*)0);
    }
    else if(!node->terminated(node->_protocol_obj)&&((span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==62&&*(info->p->p+2)==62&&*(info->p->p+3)==61)||(span$1char$p_operator_derefference(info->p)==62&&*(info->p->p+1)==62&&*(info->p->p+2)==61))) {
        if(span$1char$p_operator_derefference(info->p)==92) {
            info->p->p+=4;
            skip_spaces_and_lf(info);
            quote_36=(_Bool)1;
        }
        else {
            info->p->p+=3;
            skip_spaces_and_lf(info);
            quote_36=(_Bool)0;
        }
        __right_value0 = (void*)0;
        right_node_37=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "26eq.nc", 1020, 1009);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "26eq.nc", 1022, 1014, "struct sNode");
        _inf_obj_value9=(struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(__right_value1=sRShiftEqualNode_initialize((struct sRShiftEqualNode* )come_increment_ref_count((struct sRShiftEqualNode *)come_calloc(1, sizeof(struct sRShiftEqualNode )*(1), "26eq.nc", 1022, 1010, "struct sRShiftEqualNode* "), "26eq.nc", 1022, 1011),(struct sNode*)come_increment_ref_count(node, "26eq.nc", 1022, 1012),(struct sNode*)come_increment_ref_count(right_node_37, "26eq.nc", 1022, 1013),quote_36,info))), "26eq.nc", 1022, 1015);
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sRShiftEqualNode_finalize;
        _inf_value9->clone=(void*)sRShiftEqualNode_clone;
        _inf_value9->compile=(void*)sRShiftEqualNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sRShiftEqualNode_kind;
        _inf_value9->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)), "26eq.nc", 1022, 1026);
        ((right_node_37) ? right_node_37 = come_decrement_ref_count(right_node_37, ((struct sNode*)right_node_37)->finalize, ((struct sNode*)right_node_37)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1022, 1027):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1022, 1028):(void*)0);
        come_call_finalizer(sRShiftEqualNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 1022, 1029);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "26eq.nc", 1022, 1030):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "26eq.nc", 1022, 1031):(void*)0);
        return __result_obj__0;
        ((right_node_37) ? right_node_37 = come_decrement_ref_count(right_node_37, ((struct sNode*)right_node_37)->finalize, ((struct sNode*)right_node_37)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1094, 1032):(void*)0);
    }
    else if(!node->terminated(node->_protocol_obj)&&((span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==94&&*(info->p->p+2)==61)||(span$1char$p_operator_derefference(info->p)==94&&*(info->p->p+1)==61))) {
        if(span$1char$p_operator_derefference(info->p)==92) {
            info->p->p+=3;
            skip_spaces_and_lf(info);
            quote_38=(_Bool)1;
        }
        else {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            quote_38=(_Bool)0;
        }
        __right_value0 = (void*)0;
        right_node_39=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "26eq.nc", 1038, 1033);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "26eq.nc", 1040, 1038, "struct sNode");
        _inf_obj_value10=(struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(__right_value1=sXorEqualNode_initialize((struct sXorEqualNode* )come_increment_ref_count((struct sXorEqualNode *)come_calloc(1, sizeof(struct sXorEqualNode )*(1), "26eq.nc", 1040, 1034, "struct sXorEqualNode* "), "26eq.nc", 1040, 1035),(struct sNode*)come_increment_ref_count(node, "26eq.nc", 1040, 1036),(struct sNode*)come_increment_ref_count(right_node_39, "26eq.nc", 1040, 1037),quote_38,info))), "26eq.nc", 1040, 1039);
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sXorEqualNode_finalize;
        _inf_value10->clone=(void*)sXorEqualNode_clone;
        _inf_value10->compile=(void*)sXorEqualNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sXorEqualNode_kind;
        _inf_value10->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)), "26eq.nc", 1040, 1050);
        ((right_node_39) ? right_node_39 = come_decrement_ref_count(right_node_39, ((struct sNode*)right_node_39)->finalize, ((struct sNode*)right_node_39)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1040, 1051):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1040, 1052):(void*)0);
        come_call_finalizer(sXorEqualNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 1040, 1053);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "26eq.nc", 1040, 1054):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "26eq.nc", 1040, 1055):(void*)0);
        return __result_obj__0;
        ((right_node_39) ? right_node_39 = come_decrement_ref_count(right_node_39, ((struct sNode*)right_node_39)->finalize, ((struct sNode*)right_node_39)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1094, 1056):(void*)0);
    }
    else if(!node->terminated(node->_protocol_obj)&&((span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==38&&*(info->p->p+2)==61)||(span$1char$p_operator_derefference(info->p)==38&&*(info->p->p+1)==61))) {
        if(span$1char$p_operator_derefference(info->p)==92) {
            info->p->p+=3;
            skip_spaces_and_lf(info);
            quote_40=(_Bool)1;
        }
        else {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            quote_40=(_Bool)0;
        }
        __right_value0 = (void*)0;
        right_node_41=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "26eq.nc", 1055, 1057);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "26eq.nc", 1057, 1062, "struct sNode");
        _inf_obj_value11=(struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(__right_value1=sAndEqualNode_initialize((struct sAndEqualNode* )come_increment_ref_count((struct sAndEqualNode *)come_calloc(1, sizeof(struct sAndEqualNode )*(1), "26eq.nc", 1057, 1058, "struct sAndEqualNode* "), "26eq.nc", 1057, 1059),(struct sNode*)come_increment_ref_count(node, "26eq.nc", 1057, 1060),(struct sNode*)come_increment_ref_count(right_node_41, "26eq.nc", 1057, 1061),quote_40,info))), "26eq.nc", 1057, 1063);
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sAndEqualNode_finalize;
        _inf_value11->clone=(void*)sAndEqualNode_clone;
        _inf_value11->compile=(void*)sAndEqualNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sAndEqualNode_kind;
        _inf_value11->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)), "26eq.nc", 1057, 1074);
        ((right_node_41) ? right_node_41 = come_decrement_ref_count(right_node_41, ((struct sNode*)right_node_41)->finalize, ((struct sNode*)right_node_41)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1057, 1075):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1057, 1076):(void*)0);
        come_call_finalizer(sAndEqualNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 1057, 1077);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "26eq.nc", 1057, 1078):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "26eq.nc", 1057, 1079):(void*)0);
        return __result_obj__0;
        ((right_node_41) ? right_node_41 = come_decrement_ref_count(right_node_41, ((struct sNode*)right_node_41)->finalize, ((struct sNode*)right_node_41)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1094, 1080):(void*)0);
    }
    else if(!node->terminated(node->_protocol_obj)&&((span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==124&&*(info->p->p+2)==61)||(span$1char$p_operator_derefference(info->p)==124&&*(info->p->p+1)==61))) {
        if(span$1char$p_operator_derefference(info->p)==92) {
            info->p->p+=3;
            skip_spaces_and_lf(info);
            quote_42=(_Bool)1;
        }
        else {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            quote_42=(_Bool)0;
        }
        __right_value0 = (void*)0;
        right_node_43=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "26eq.nc", 1072, 1081);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "26eq.nc", 1074, 1086, "struct sNode");
        _inf_obj_value12=(struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(__right_value1=sOrEqualNode_initialize((struct sOrEqualNode* )come_increment_ref_count((struct sOrEqualNode *)come_calloc(1, sizeof(struct sOrEqualNode )*(1), "26eq.nc", 1074, 1082, "struct sOrEqualNode* "), "26eq.nc", 1074, 1083),(struct sNode*)come_increment_ref_count(node, "26eq.nc", 1074, 1084),(struct sNode*)come_increment_ref_count(right_node_43, "26eq.nc", 1074, 1085),quote_42,info))), "26eq.nc", 1074, 1087);
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sOrEqualNode_finalize;
        _inf_value12->clone=(void*)sOrEqualNode_clone;
        _inf_value12->compile=(void*)sOrEqualNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sOrEqualNode_kind;
        _inf_value12->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)), "26eq.nc", 1074, 1098);
        ((right_node_43) ? right_node_43 = come_decrement_ref_count(right_node_43, ((struct sNode*)right_node_43)->finalize, ((struct sNode*)right_node_43)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1074, 1099):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1074, 1100):(void*)0);
        come_call_finalizer(sOrEqualNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 1074, 1101);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "26eq.nc", 1074, 1102):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "26eq.nc", 1074, 1103):(void*)0);
        return __result_obj__0;
        ((right_node_43) ? right_node_43 = come_decrement_ref_count(right_node_43, ((struct sNode*)right_node_43)->finalize, ((struct sNode*)right_node_43)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1094, 1104):(void*)0);
    }
    else if(!node->terminated(node->_protocol_obj)&&((span$1char$p_operator_derefference(info->p)==92&&*(info->p->p+1)==61&&*(info->p->p+2)!=61&&*(info->p->p+2)!=62)||(span$1char$p_operator_derefference(info->p)==61&&*(info->p->p+1)!=61&&*(info->p->p+1)!=62))) {
        if(span$1char$p_operator_derefference(info->p)==92) {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            quote_44=(_Bool)1;
        }
        else {
            info->p->p++;
            skip_spaces_and_lf(info);
            quote_44=(_Bool)0;
        }
        __right_value0 = (void*)0;
        right_node_45=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "26eq.nc", 1089, 1105);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "26eq.nc", 1091, 1110, "struct sNode");
        _inf_obj_value13=(struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(__right_value1=sExpEqualNode_initialize((struct sExpEqualNode* )come_increment_ref_count((struct sExpEqualNode *)come_calloc(1, sizeof(struct sExpEqualNode )*(1), "26eq.nc", 1091, 1106, "struct sExpEqualNode* "), "26eq.nc", 1091, 1107),(struct sNode*)come_increment_ref_count(node, "26eq.nc", 1091, 1108),(struct sNode*)come_increment_ref_count(right_node_45, "26eq.nc", 1091, 1109),quote_44,info))), "26eq.nc", 1091, 1111);
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sExpEqualNode_finalize;
        _inf_value13->clone=(void*)sExpEqualNode_clone;
        _inf_value13->compile=(void*)sExpEqualNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sExpEqualNode_kind;
        _inf_value13->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)), "26eq.nc", 1091, 1122);
        ((right_node_45) ? right_node_45 = come_decrement_ref_count(right_node_45, ((struct sNode*)right_node_45)->finalize, ((struct sNode*)right_node_45)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1091, 1123):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1091, 1124):(void*)0);
        come_call_finalizer(sExpEqualNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "26eq.nc}", 1091, 1125);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "26eq.nc", 1091, 1126):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "26eq.nc", 1091, 1127):(void*)0);
        return __result_obj__0;
        ((right_node_45) ? right_node_45 = come_decrement_ref_count(right_node_45, ((struct sNode*)right_node_45)->finalize, ((struct sNode*)right_node_45)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1094, 1128):(void*)0);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=post_position_operator_v7((struct sNode*)come_increment_ref_count(node, "26eq.nc", 1094, 1129),info))), "26eq.nc", 1094, 1130);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "26eq.nc", 1094, 1131):(void*)0);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "26eq.nc", 1094, 1132):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "26eq.nc", 1094, 1133):(void*)0);
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

static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusPlusNode_clone"; neo_current_frame = &fr;
    struct sPlusPlusNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sPlusPlusNode*  result  ;
    char*  __dec_obj93  ;
    struct sNode* __dec_obj94;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sPlusPlusNode* )come_increment_ref_count((struct sPlusPlusNode *)come_calloc(1, sizeof(struct sPlusPlusNode )*(1), "sPlusPlusNode_clone", 5, 829, "struct sPlusPlusNode* "), "sPlusPlusNode_clone", 5, 830);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj93=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sPlusPlusNode_clone", 7, 831, "char* "), "sPlusPlusNode_clone", 7, 833);
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0, "sPlusPlusNode_clone", 7, 832);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj94=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sPlusPlusNode_clone", 9, 835);
        (__dec_obj94 ? __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0, (void*)0, "sPlusPlusNode_clone", 9, 834) :0);
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
        __result_obj__0 = result;
    come_call_finalizer(sPlusPlusNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sPlusPlusNode_clone}", 11, 836);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusMinusNode_clone"; neo_current_frame = &fr;
    struct sMinusMinusNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sMinusMinusNode*  result  ;
    char*  __dec_obj95  ;
    struct sNode* __dec_obj96;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sMinusMinusNode* )come_increment_ref_count((struct sMinusMinusNode *)come_calloc(1, sizeof(struct sMinusMinusNode )*(1), "sMinusMinusNode_clone", 5, 847, "struct sMinusMinusNode* "), "sMinusMinusNode_clone", 5, 848);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj95=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sMinusMinusNode_clone", 7, 849, "char* "), "sMinusMinusNode_clone", 7, 851);
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0, "sMinusMinusNode_clone", 7, 850);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj96=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sMinusMinusNode_clone", 9, 853);
        (__dec_obj96 ? __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0, (void*)0, "sMinusMinusNode_clone", 9, 852) :0);
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
        __result_obj__0 = result;
    come_call_finalizer(sMinusMinusNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sMinusMinusNode_clone}", 11, 854);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusEqualNode_clone"; neo_current_frame = &fr;
    struct sPlusEqualNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sPlusEqualNode*  result  ;
    char*  __dec_obj97  ;
    struct sNode* __dec_obj98;
    struct sNode* __dec_obj99;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sPlusEqualNode* )come_increment_ref_count((struct sPlusEqualNode *)come_calloc(1, sizeof(struct sPlusEqualNode )*(1), "sPlusEqualNode_clone", 5, 872, "struct sPlusEqualNode* "), "sPlusEqualNode_clone", 5, 873);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj97=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sPlusEqualNode_clone", 7, 874, "char* "), "sPlusEqualNode_clone", 7, 876);
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "sPlusEqualNode_clone", 7, 875);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj98=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sPlusEqualNode_clone", 9, 878);
        (__dec_obj98 ? __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0, (void*)0, "sPlusEqualNode_clone", 9, 877) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj99=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sPlusEqualNode_clone", 10, 880);
        (__dec_obj99 ? __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0, (void*)0, "sPlusEqualNode_clone", 10, 879) :0);
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
        __result_obj__0 = result;
    come_call_finalizer(sPlusEqualNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sPlusEqualNode_clone}", 12, 881);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusEqualNode_clone"; neo_current_frame = &fr;
    struct sMinusEqualNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sMinusEqualNode*  result  ;
    char*  __dec_obj100  ;
    struct sNode* __dec_obj101;
    struct sNode* __dec_obj102;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sMinusEqualNode* )come_increment_ref_count((struct sMinusEqualNode *)come_calloc(1, sizeof(struct sMinusEqualNode )*(1), "sMinusEqualNode_clone", 5, 896, "struct sMinusEqualNode* "), "sMinusEqualNode_clone", 5, 897);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj100=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sMinusEqualNode_clone", 7, 898, "char* "), "sMinusEqualNode_clone", 7, 900);
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0, "sMinusEqualNode_clone", 7, 899);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj101=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sMinusEqualNode_clone", 10, 902);
        (__dec_obj101 ? __dec_obj101 = come_decrement_ref_count(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0, (void*)0, "sMinusEqualNode_clone", 10, 901) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj102=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sMinusEqualNode_clone", 11, 904);
        (__dec_obj102 ? __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0, (void*)0, "sMinusEqualNode_clone", 11, 903) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sMinusEqualNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sMinusEqualNode_clone}", 12, 905);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMultEqualNode_clone"; neo_current_frame = &fr;
    struct sMultEqualNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sMultEqualNode*  result  ;
    char*  __dec_obj103  ;
    struct sNode* __dec_obj104;
    struct sNode* __dec_obj105;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sMultEqualNode* )come_increment_ref_count((struct sMultEqualNode *)come_calloc(1, sizeof(struct sMultEqualNode )*(1), "sMultEqualNode_clone", 5, 920, "struct sMultEqualNode* "), "sMultEqualNode_clone", 5, 921);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj103=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sMultEqualNode_clone", 7, 922, "char* "), "sMultEqualNode_clone", 7, 924);
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0, "sMultEqualNode_clone", 7, 923);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj104=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sMultEqualNode_clone", 10, 926);
        (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0, (void*)0, "sMultEqualNode_clone", 10, 925) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj105=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sMultEqualNode_clone", 11, 928);
        (__dec_obj105 ? __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0, (void*)0, "sMultEqualNode_clone", 11, 927) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sMultEqualNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sMultEqualNode_clone}", 12, 929);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDivEqualNode_clone"; neo_current_frame = &fr;
    struct sDivEqualNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDivEqualNode*  result  ;
    char*  __dec_obj106  ;
    struct sNode* __dec_obj107;
    struct sNode* __dec_obj108;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDivEqualNode* )come_increment_ref_count((struct sDivEqualNode *)come_calloc(1, sizeof(struct sDivEqualNode )*(1), "sDivEqualNode_clone", 5, 944, "struct sDivEqualNode* "), "sDivEqualNode_clone", 5, 945);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj106=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDivEqualNode_clone", 7, 946, "char* "), "sDivEqualNode_clone", 7, 948);
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0, "sDivEqualNode_clone", 7, 947);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj107=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sDivEqualNode_clone", 10, 950);
        (__dec_obj107 ? __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0, (void*)0, "sDivEqualNode_clone", 10, 949) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj108=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sDivEqualNode_clone", 11, 952);
        (__dec_obj108 ? __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0, (void*)0, "sDivEqualNode_clone", 11, 951) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sDivEqualNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDivEqualNode_clone}", 12, 953);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModEqualNode_clone"; neo_current_frame = &fr;
    struct sModEqualNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sModEqualNode*  result  ;
    char*  __dec_obj109  ;
    struct sNode* __dec_obj110;
    struct sNode* __dec_obj111;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sModEqualNode* )come_increment_ref_count((struct sModEqualNode *)come_calloc(1, sizeof(struct sModEqualNode )*(1), "sModEqualNode_clone", 5, 968, "struct sModEqualNode* "), "sModEqualNode_clone", 5, 969);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj109=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sModEqualNode_clone", 7, 970, "char* "), "sModEqualNode_clone", 7, 972);
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "sModEqualNode_clone", 7, 971);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj110=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sModEqualNode_clone", 10, 974);
        (__dec_obj110 ? __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0, (void*)0, "sModEqualNode_clone", 10, 973) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj111=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sModEqualNode_clone", 11, 976);
        (__dec_obj111 ? __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0, (void*)0, "sModEqualNode_clone", 11, 975) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sModEqualNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sModEqualNode_clone}", 12, 977);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLShifEqualNode_clone"; neo_current_frame = &fr;
    struct sLShifEqualNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLShifEqualNode*  result  ;
    char*  __dec_obj112  ;
    struct sNode* __dec_obj113;
    struct sNode* __dec_obj114;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLShifEqualNode* )come_increment_ref_count((struct sLShifEqualNode *)come_calloc(1, sizeof(struct sLShifEqualNode )*(1), "sLShifEqualNode_clone", 5, 992, "struct sLShifEqualNode* "), "sLShifEqualNode_clone", 5, 993);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj112=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLShifEqualNode_clone", 7, 994, "char* "), "sLShifEqualNode_clone", 7, 996);
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0, "sLShifEqualNode_clone", 7, 995);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj113=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sLShifEqualNode_clone", 10, 998);
        (__dec_obj113 ? __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0, (void*)0, "sLShifEqualNode_clone", 10, 997) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj114=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sLShifEqualNode_clone", 11, 1000);
        (__dec_obj114 ? __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0, (void*)0, "sLShifEqualNode_clone", 11, 999) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sLShifEqualNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLShifEqualNode_clone}", 12, 1001);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftEqualNode_clone"; neo_current_frame = &fr;
    struct sRShiftEqualNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sRShiftEqualNode*  result  ;
    char*  __dec_obj115  ;
    struct sNode* __dec_obj116;
    struct sNode* __dec_obj117;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sRShiftEqualNode* )come_increment_ref_count((struct sRShiftEqualNode *)come_calloc(1, sizeof(struct sRShiftEqualNode )*(1), "sRShiftEqualNode_clone", 5, 1016, "struct sRShiftEqualNode* "), "sRShiftEqualNode_clone", 5, 1017);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj115=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sRShiftEqualNode_clone", 7, 1018, "char* "), "sRShiftEqualNode_clone", 7, 1020);
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0, "sRShiftEqualNode_clone", 7, 1019);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj116=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sRShiftEqualNode_clone", 10, 1022);
        (__dec_obj116 ? __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0, (void*)0, "sRShiftEqualNode_clone", 10, 1021) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj117=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sRShiftEqualNode_clone", 11, 1024);
        (__dec_obj117 ? __dec_obj117 = come_decrement_ref_count(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0, (void*)0, "sRShiftEqualNode_clone", 11, 1023) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sRShiftEqualNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sRShiftEqualNode_clone}", 12, 1025);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sXorEqualNode_clone"; neo_current_frame = &fr;
    struct sXorEqualNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sXorEqualNode*  result  ;
    char*  __dec_obj118  ;
    struct sNode* __dec_obj119;
    struct sNode* __dec_obj120;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sXorEqualNode* )come_increment_ref_count((struct sXorEqualNode *)come_calloc(1, sizeof(struct sXorEqualNode )*(1), "sXorEqualNode_clone", 5, 1040, "struct sXorEqualNode* "), "sXorEqualNode_clone", 5, 1041);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj118=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sXorEqualNode_clone", 7, 1042, "char* "), "sXorEqualNode_clone", 7, 1044);
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0, "sXorEqualNode_clone", 7, 1043);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj119=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sXorEqualNode_clone", 10, 1046);
        (__dec_obj119 ? __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0, (void*)0, "sXorEqualNode_clone", 10, 1045) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj120=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sXorEqualNode_clone", 11, 1048);
        (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0, (void*)0, "sXorEqualNode_clone", 11, 1047) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sXorEqualNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sXorEqualNode_clone}", 12, 1049);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndEqualNode_clone"; neo_current_frame = &fr;
    struct sAndEqualNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAndEqualNode*  result  ;
    char*  __dec_obj121  ;
    struct sNode* __dec_obj122;
    struct sNode* __dec_obj123;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAndEqualNode* )come_increment_ref_count((struct sAndEqualNode *)come_calloc(1, sizeof(struct sAndEqualNode )*(1), "sAndEqualNode_clone", 5, 1064, "struct sAndEqualNode* "), "sAndEqualNode_clone", 5, 1065);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj121=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAndEqualNode_clone", 7, 1066, "char* "), "sAndEqualNode_clone", 7, 1068);
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0, "sAndEqualNode_clone", 7, 1067);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj122=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sAndEqualNode_clone", 10, 1070);
        (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0, (void*)0, "sAndEqualNode_clone", 10, 1069) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj123=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sAndEqualNode_clone", 11, 1072);
        (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0, (void*)0, "sAndEqualNode_clone", 11, 1071) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sAndEqualNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAndEqualNode_clone}", 12, 1073);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrEqualNode_clone"; neo_current_frame = &fr;
    struct sOrEqualNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOrEqualNode*  result  ;
    char*  __dec_obj124  ;
    struct sNode* __dec_obj125;
    struct sNode* __dec_obj126;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sOrEqualNode* )come_increment_ref_count((struct sOrEqualNode *)come_calloc(1, sizeof(struct sOrEqualNode )*(1), "sOrEqualNode_clone", 5, 1088, "struct sOrEqualNode* "), "sOrEqualNode_clone", 5, 1089);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj124=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sOrEqualNode_clone", 7, 1090, "char* "), "sOrEqualNode_clone", 7, 1092);
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0, "sOrEqualNode_clone", 7, 1091);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj125=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sOrEqualNode_clone", 10, 1094);
        (__dec_obj125 ? __dec_obj125 = come_decrement_ref_count(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0, (void*)0, "sOrEqualNode_clone", 10, 1093) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj126=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sOrEqualNode_clone", 11, 1096);
        (__dec_obj126 ? __dec_obj126 = come_decrement_ref_count(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0, (void*)0, "sOrEqualNode_clone", 11, 1095) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sOrEqualNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sOrEqualNode_clone}", 12, 1097);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sExpEqualNode_clone"; neo_current_frame = &fr;
    struct sExpEqualNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sExpEqualNode*  result  ;
    char*  __dec_obj127  ;
    struct sNode* __dec_obj128;
    struct sNode* __dec_obj129;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sExpEqualNode* )come_increment_ref_count((struct sExpEqualNode *)come_calloc(1, sizeof(struct sExpEqualNode )*(1), "sExpEqualNode_clone", 5, 1112, "struct sExpEqualNode* "), "sExpEqualNode_clone", 5, 1113);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj127=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sExpEqualNode_clone", 7, 1114, "char* "), "sExpEqualNode_clone", 7, 1116);
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0, "sExpEqualNode_clone", 7, 1115);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj128=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sExpEqualNode_clone", 10, 1118);
        (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0, (void*)0, "sExpEqualNode_clone", 10, 1117) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj129=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sExpEqualNode_clone", 11, 1120);
        (__dec_obj129 ? __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0, (void*)0, "sExpEqualNode_clone", 11, 1119) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sExpEqualNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sExpEqualNode_clone}", 12, 1121);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

