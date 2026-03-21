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

typedef unsigned long  int nfds_t;

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

struct pollfd
{
    int fd;
    short int events;
    short int revents;
};

struct sReturnNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sCSourceNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  contents  ;
};

struct sInlineAssembler
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  source  ;
    _Bool volatile_;
};

struct sLineNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sSNameNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sFuncNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sCallerFuncNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sCallerLineNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sCallerSNameNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sComeCallNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct buffer*  come_block  ;
    int come_block_sline;
};

struct span$1buffer$p
{
    char* memory;
    struct buffer*  p  ;
    unsigned long  len  ;
    _Bool local;
    _Bool heap;
    _Bool global;
    void* stacktop;
};

struct sComeJoinNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct list_item$1sBlock$ph
{
    struct sBlock*  item  ;
    struct list_item$1sBlock$ph* prev;
    struct list_item$1sBlock$ph* next;
};

struct list$1sBlock$ph
{
    struct list_item$1sBlock$ph* head;
    struct list_item$1sBlock$ph* tail;
    int len;
    struct list_item$1sBlock$ph* it;
};

struct sComePollNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1sNode$ph* vars;
    struct list$1sBlock$ph* blocks;
    struct sBlock*  else_block  ;
    int time_out;
};

struct sVarArgTypeName
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sInnerAttribute
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  attr  ;
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
struct sNode* expression_node_v99(struct sInfo*  info  );
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
int poll(struct pollfd*  __fds  , unsigned long  int  __nfds  , int __timeout);
int ppoll(struct pollfd*  __fds  , unsigned long  int  __nfds  , const struct timespec*  __timeout  , const struct anonymous_typeX7*  __ss  );
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, struct sInfo*  info  );
char*  sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sReturnNode_finalize(struct sReturnNode* self);
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
static struct sVar*  list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar*  list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static void sFun_finalize(struct sFun*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static void CVALUE_finalize(struct CVALUE*  self  );
struct sNode* create_return_node(struct sNode* value, struct sInfo*  info  );
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
struct sCSourceNode* sCSourceNode_initialize(struct sCSourceNode* self, char*  contents  , struct sInfo*  info  );
char*  sCSourceNode_kind(struct sCSourceNode* self);
_Bool sCSourceNode_compile(struct sCSourceNode* self, struct sInfo*  info  );
static void sCSourceNode_finalize(struct sCSourceNode* self);
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char*  source  , _Bool volatile_, struct sInfo*  info  );
char*  sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo*  info  );
static void sInlineAssembler_finalize(struct sInlineAssembler* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo*  info  );
char*  sLineNode_kind(struct sLineNode* self);
_Bool sLineNode_compile(struct sLineNode* self, struct sInfo*  info  );
static void sLineNode_finalize(struct sLineNode* self);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo*  info  );
char*  sSNameNode_kind(struct sSNameNode* self);
_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo*  info  );
static void sSNameNode_finalize(struct sSNameNode* self);
struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo*  info  );
char*  sFuncNode_kind(struct sFuncNode* self);
_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo*  info  );
static void sFuncNode_finalize(struct sFuncNode* self);
struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo*  info  );
char*  sCallerFuncNode_kind(struct sCallerFuncNode* self);
_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo*  info  );
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo*  info  );
_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo*  info  );
char*  sCallerLineNode_kind(struct sCallerLineNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo*  info  );
_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo*  info  );
char*  sCallerSNameNode_kind(struct sCallerSNameNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer*  come_block  , int come_block_sline, struct sInfo*  info  );
char*  sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo*  info  );
static void sComeCallNode_finalize(struct sComeCallNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct sType*  map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char*  key  , struct sType*  default_value  , _Bool by_pointer);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static void sClass_finalize(struct sClass*  self  );
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static struct span$1buffer$p* span$1buffer$p_initialize(struct span$1buffer$p* self, void* head, unsigned long  len  , _Bool local, _Bool heap, _Bool global, void* stacktop);
static void span$1buffer$p$p_finalize(struct span$1buffer$p* self);
static void span$1char$p$p_finalize(struct span$1char$p* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo*  info  );
char*  sComeJoinNode_kind(struct sComeJoinNode* self);
_Bool sComeJoinNode_terminated(struct sComeJoinNode* self);
_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo*  info  );
static void sComeJoinNode_finalize(struct sComeJoinNode* self);
struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock*  else_block  , int time_out, struct sInfo*  info  );
char*  sComePollNode_kind(struct sComePollNode* self);
_Bool sComePollNode_terminated(struct sComePollNode* self);
_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo*  info  );
static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self);
static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self);
static void sComePollNode_finalize(struct sComePollNode* self);
static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct sBlock*  list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
static struct sBlock*  list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType*  type  , struct sInfo*  info  );
char*  sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo*  info  );
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
struct sInnerAttribute* sInnerAttribute_initialize(struct sInnerAttribute* self, char*  attr  , struct sInfo*  info  );
char*  sInnerAttribute_kind(struct sInnerAttribute* self);
_Bool sInnerAttribute_compile(struct sInnerAttribute* self, struct sInfo*  info  );
static void sInnerAttribute_finalize(struct sInnerAttribute* self);
struct sNode* expression_node_v1(struct sInfo*  info  );
char*  parse_inner_attribute(struct sInfo*  info  );
struct sNode* expression_node_v98(struct sInfo*  info  );
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct sVar*  map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  );
static struct sVar*  map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  );
static struct sInnerAttribute* sInnerAttribute_clone(struct sInnerAttribute* self);
static struct sCSourceNode* sCSourceNode_clone(struct sCSourceNode* self);
static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self);
static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock*  item  );
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static struct sBlock*  sBlock_clone(struct sBlock*  self  );
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  );
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar*  map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  default_value  , _Bool by_pointer);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  item  , _Bool by_pointer);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static struct sVar*  sVar_clone(struct sVar*  self  );
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self);
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
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReturnNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj1;
    struct sReturnNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sReturnNode*)come_increment_ref_count(self, "50call4.nc", 11, 1),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 11, 3);
    __dec_obj1=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "50call4.nc", 13, 5);
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0,0, (void*)0, "50call4.nc", 13, 4) :0);
        __result_obj__0 = (struct sReturnNode*)come_increment_ref_count(self, "50call4.nc", 16, 6);
    come_call_finalizer(sReturnNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 16, 9);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 16, 10):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sReturnNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 16, 11);
    return __result_obj__0;
}

char*  sReturnNode_kind(struct sReturnNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReturnNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sReturnNode","50call4.nc",18))), "50call4.nc", 18, 12);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 18, 13));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 18, 14));
    return __result_obj__0;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReturnNode_compile"; neo_current_frame = &fr;
    struct sFun*  come_fun  ;
    void* __right_value0 = (void*)0;
    struct sType*  result_type  ;
    struct sType*  result_type2_  ;
    struct sType*  result_type2  ;
    struct sType*  result_type3  ;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  come_value  ;
    struct sType*  come_value_type_  ;
    struct sType*  come_value_type  ;
    struct sType*  __dec_obj36  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    char*  type_name  ;
    struct list$1sVar$ph* _o2_saved_3;
    struct sVar*  it  ;
    struct list$1sVar$ph* __dec_obj37;
    _Bool _conditional_value_X0;
    struct sFun*  come_fun_10  ;
    struct list$1sVar$ph* _o2_saved_4;
    struct sVar*  it_11  ;
    struct list$1sVar$ph* __dec_obj38;
    memset(&result_type3, 0, sizeof(result_type3));
    if(self->value) {
        come_fun=info->come_fun;
        add_come_code(info,((char* )(__right_value0=buffer_to_string(info->come_fun->mSourceEnd))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 26, 15));
        __right_value0 = (void*)0;
        result_type=(struct sType* )come_increment_ref_count(sType_clone(come_fun->mResultType), "50call4.nc", 28, 225);
        __right_value0 = (void*)0;
        result_type2_=(struct sType* )come_increment_ref_count(solve_generics(result_type,info->generics_type,info), "50call4.nc", 30, 226);
        __right_value0 = (void*)0;
        result_type2=(struct sType* )come_increment_ref_count(solve_method_generics(result_type2_,info), "50call4.nc", 31, 227);
        if(result_type2->mNoSolvedGenericsType) {
            result_type3=result_type2->mNoSolvedGenericsType;
        }
        else {
            result_type3=result_type2;
        }
        Value=node_compile(self->value,info);
        if(!Value) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 42, 228);
            come_call_finalizer(sType_finalize, result_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 42, 229);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 42, 230);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "50call4.nc", 45, 231);
        __right_value0 = (void*)0;
        come_value_type_=(struct sType* )come_increment_ref_count(solve_generics(come_value->type,info->generics_type,info), "50call4.nc", 47, 232);
        __right_value0 = (void*)0;
        come_value_type=(struct sType* )come_increment_ref_count(solve_method_generics(come_value_type_,info), "50call4.nc", 48, 233);
        __right_value0 = (void*)0;
        __dec_obj36=info->function_result_type,
        info->function_result_type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "50call4.nc", 50, 235);
        come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 50, 234);
        check_assign_type("result type",result_type2,come_value_type,come_value,info);
        if(gComeC) {
            add_come_code(info,"return %s;\n",come_value->c_value);
        }
        else if(string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun->mBlock,info,come_value->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            if(!gComeC&&!info->come_fun->mResultType->mNorecord) {
                add_come_code(info,"neo_current_frame = fr.prev;\n");
            }
            add_come_code(info,"return %s;\n",come_value->c_value);
        }
        else {
            if(!info->come_fun->mDefineReturnVar) {
                info->come_fun->mDefineReturnVar=(_Bool)1;
                __right_value0 = (void*)0;
                add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value2=make_define_var(result_type2,((char*)(__right_value1=xsprintf("__result_obj__\%s",((char* )(__right_value0=int_to_string(000)))))),info,(_Bool)0,(_Bool)0))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 67, 236));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 67, 237));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 67, 238));
            }
            if(!info->come_fun->mNoResultType) {
                if(result_type2->mHeap) {
                    __right_value0 = (void*)0;
                    type_name=(char* )come_increment_ref_count(make_type_name_string(result_type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "50call4.nc", 72, 239);
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    add_come_code(info,((char*)(__right_value1=xsprintf("__result_obj__\%s = (%%s)come_increment_ref_count(%%s, \"%%s\", %%d, %%d);\n",((char* )(__right_value0=int_to_string(000)))))),type_name,come_value->c_value,info->sname,info->sline,++info->id);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 73, 240));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 73, 241));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 78, 242));
                }
                else {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    add_come_code(info,((char*)(__right_value1=xsprintf("__result_obj__\%s = %%s;\n",((char* )(__right_value0=int_to_string(000)))))),come_value->c_value);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 76, 243));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 76, 244));
                }
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                add_come_code(info,((char*)(__right_value1=xsprintf("__result_obj__\%s = %%s;\n",((char* )(__right_value0=int_to_string(000)))))),come_value->c_value);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 80, 245));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 80, 246));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun->mBlock,info,come_value->var,(_Bool)0,come_value->mLoadField);
            free_right_value_objects(info);
            if(info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(info->match_it_var) {
                    for(_o2_saved_3=(struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var, "50call4.nc", 91, 247),it=list$1sVar$ph_begin(_o2_saved_3)                    ;!list$1sVar$ph_end(_o2_saved_3);it=list$1sVar$ph_next(_o2_saved_3)){
                        free_object(it->mType,it->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                    }
                    __dec_obj37=info->match_it_var,
                    info->match_it_var=((void*)0);
                    come_call_finalizer(list$1sVar$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 94, 254);
                    come_call_finalizer(list$1sVar$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 96, 256);
                }
            }
            if(!gComeC&&!info->come_fun->mResultType->mNorecord) {
                add_come_code(info,"neo_current_frame = fr.prev;\n");
            }
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X0=(!gComeC&&string_operator_equals(info->come_fun->mName,"main")&&((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_heap_final"))))))));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 102, 307));
            come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 102, 308);
_conditional_value_X0;})) {
                free_objects(info->gv_table,((void*)0),info,(_Bool)0);
                __right_value0 = (void*)0;
                add_come_code(info,((char* )(__right_value0=xsprintf("come_heap_final();\n"))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 104, 309));
            }
            if(result_type2->mHeap) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                free_object(result_type2,((char*)(__right_value1=xsprintf("__result_obj__\%s",((char* )(__right_value0=int_to_string(000)))))),(_Bool)0,(_Bool)1,info,(_Bool)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 108, 310));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 108, 311));
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            add_come_code(info,((char*)(__right_value1=xsprintf("return __result_obj__\%s;\n",((char* )(__right_value0=int_to_string(000)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 111, 312));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 111, 313));
        }
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 146, 314);
        come_call_finalizer(sType_finalize, result_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 146, 315);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 146, 316);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 146, 322);
        come_call_finalizer(sType_finalize, come_value_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 146, 323);
        come_call_finalizer(sType_finalize, come_value_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 146, 324);
    }
    else {
        come_fun_10=info->come_fun;
        __right_value0 = (void*)0;
        add_come_code(info,((char* )(__right_value0=buffer_to_string(info->come_fun->mSourceEnd))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 117, 325));
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_10->mBlock,info,((void*)0),(_Bool)0,(_Bool)0);
        free_right_value_objects(info);
        if(info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(info->match_it_var) {
                for(_o2_saved_4=(struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var, "50call4.nc", 127, 326),it_11=list$1sVar$ph_begin(_o2_saved_4)                ;!list$1sVar$ph_end(_o2_saved_4);it_11=list$1sVar$ph_next(_o2_saved_4)){
                    free_object(it_11->mType,it_11->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                }
                __dec_obj38=info->match_it_var,
                info->match_it_var=((void*)0);
                come_call_finalizer(list$1sVar$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 130, 327);
                come_call_finalizer(list$1sVar$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 132, 328);
            }
        }
        if(!gComeC&&!info->come_fun->mResultType->mNorecord) {
            add_come_code(info,"neo_current_frame = fr.prev;\n");
        }
        if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info,(_Bool)0);
            __right_value0 = (void*)0;
            add_come_code(info,((char* )(__right_value0=xsprintf("come_heap_final();\n"))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 140, 329));
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
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

static void sReturnNode_finalize(struct sReturnNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReturnNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sReturnNode_finalize", 2, 7));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sReturnNode_finalize", 3, 8):(void*)0);
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
                __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0, "sType_clone", 4, 16);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 4, 49);
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 50, "struct sType* "), "sType_clone", 5, 51);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj2=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 53);
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 52);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj3=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 55);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 54);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj7=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 85);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 84);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 87);
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 86);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 96);
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 95) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 98);
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 97) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 99, "char* "), "sType_clone", 14, 101);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 100);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 102, "char* "), "sType_clone", 15, 104);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 103);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 105, "char* "), "sType_clone", 16, 107);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 106);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 108, "char* "), "sType_clone", 17, 110);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 109);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj15=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 111, "char* "), "sType_clone", 18, 113);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 112);
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
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 114, "char* "), "sType_clone", 49, 116);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 115);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj17=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 117, "char* "), "sType_clone", 51, 119);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 118);
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
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 120, "char* "), "sType_clone", 54, 122);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 121);
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
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 152);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 151);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 154);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 153);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 174);
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 173);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 176);
        come_call_finalizer(list$1int$_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 175);
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
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 178);
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 177);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj27=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 179, "char* "), "sType_clone", 67, 181);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 180);
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
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 183);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 182);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 215);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 214);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 217);
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 216);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 219);
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 218) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj35=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 221);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 220);
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "sType_clone", 77, 222);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 223);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 224);
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 17);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 18);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 21);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 22);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 23):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 24):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 25));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 26));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 27));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 28));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 29));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 30));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 31));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 32));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 35);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 36);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 38);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 39);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 40);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 41));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 42);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 45);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 46);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 47):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 48);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 20);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 19);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 34);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 33):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 37);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 44);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 43));
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 56);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 57);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1513, 58, "struct list$1sType$ph*"), "/usr/local/include/neo-c.h", 1513, 62)), "/usr/local/include/neo-c.h", 1513, 63);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1518, 78));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1521, 79));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 80);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 81);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 82);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 59);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 60);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 61);
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
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 64);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1534, 65, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1534, 66);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 68);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 67);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1544, 69, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1544, 70);
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj5=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 72);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 71);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1554, 73, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1554, 74);
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj6=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 76);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 75);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 77);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 83);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 88);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 89):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 90, "struct sNode*"), "sNode_clone", 5, 91);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 92);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 93):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 94):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 123);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 124);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1513, 125, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1513, 129)), "/usr/local/include/neo-c.h", 1513, 130);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1518, 145));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1521, 146));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 147);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 148);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 149);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 126);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 127);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 128);
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
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1531, 131):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1534, 132, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1534, 133);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj19=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 135);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 134) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1544, 136, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1544, 137);
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj20=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 139);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 138) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1554, 140, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1554, 141);
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj21=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 143);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 142) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1566, 144):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 150);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 155);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 156);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1513, 157, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1513, 161)), "/usr/local/include/neo-c.h", 1513, 162);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 169);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 170);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 171);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 158);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 159);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 160);
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1534, 163, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1534, 164);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1544, 165, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1544, 166);
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1554, 167, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1554, 168);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 172);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 184);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 185);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1513, 186, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1513, 190)), "/usr/local/include/neo-c.h", 1513, 191);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1518, 206, "char* "), "/usr/local/include/neo-c.h", 1518, 207));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1521, 208, "char* "), "/usr/local/include/neo-c.h", 1521, 209));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 210);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 211);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 212);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 187);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 188);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 189);
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
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1531, 192));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1534, 193, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1534, 194);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj29=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 196);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 195);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1544, 197, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1544, 198);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj30=litem_6->item,
        litem_6->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 200);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 199);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1554, 201, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1554, 202);
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj31=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 204);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 203);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1566, 205));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 213);
    }
            neo_current_frame = fr.prev;
}

static struct sVar*  list$1sVar$ph_begin(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_begin"; neo_current_frame = &fr;
    struct sVar*  result  ;
    struct sVar*  __result_obj__0  ;
    struct sVar*  result_8  ;
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
    memset(&result_8,0,sizeof(struct sVar* ));
        __result_obj__0 = result_8;
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
    struct sVar*  result_9  ;
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
    memset(&result_9,0,sizeof(struct sVar* ));
        __result_obj__0 = result_9;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 253);
    }
                        neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 252);
    }
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 248));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 249));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 250);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 251));
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 255);
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 257);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 278);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 279);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 280);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 281);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 282);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 283);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 284);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 285);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 286);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 287);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 288);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 289);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 290);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 291);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 258));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 259);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 260);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 261);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 262);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 263);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 8, 264);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 267);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 268));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 269));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 270);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 271);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 272);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 273);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 274));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 275));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 276));
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 277));
    }
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 265);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 266);
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 292);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 293);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 294);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 295);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 296);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 297);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 298);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 299);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 300);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 301);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 302);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 303);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 304);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 305);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 306);
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 317));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 318);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 319));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 320));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 321));
    }
            neo_current_frame = fr.prev;
}

struct sNode* create_return_node(struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_return_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sReturnNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 154, 333, "struct sNode");
    _inf_obj_value1=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value1=sReturnNode_initialize((struct sReturnNode* )come_increment_ref_count((struct sReturnNode *)come_calloc(1, sizeof(struct sReturnNode )*(1), "50call4.nc", 154, 330, "struct sReturnNode* "), "50call4.nc", 154, 331),(struct sNode*)come_increment_ref_count(value, "50call4.nc", 154, 332),info))), "50call4.nc", 154, 334);
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sReturnNode_finalize;
    _inf_value1->clone=(void*)sReturnNode_clone;
    _inf_value1->compile=(void*)sReturnNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sReturnNode_kind;
    _inf_value1->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "50call4.nc", 154, 343);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 154, 344):(void*)0);
    come_call_finalizer(sReturnNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 154, 345);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 154, 346):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 154, 347):(void*)0);
    return __result_obj__0;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReturnNode_clone"; neo_current_frame = &fr;
    struct sReturnNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sReturnNode*  result  ;
    char*  __dec_obj39  ;
    struct sNode* __dec_obj40;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sReturnNode* )come_increment_ref_count((struct sReturnNode *)come_calloc(1, sizeof(struct sReturnNode )*(1), "sReturnNode_clone", 5, 335, "struct sReturnNode* "), "sReturnNode_clone", 5, 336);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj39=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sReturnNode_clone", 7, 337, "char* "), "sReturnNode_clone", 7, 339);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0, "sReturnNode_clone", 7, 338);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj40=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sReturnNode_clone", 9, 341);
        (__dec_obj40 ? __dec_obj40 = come_decrement_ref_count(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0, (void*)0, "sReturnNode_clone", 9, 340) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sReturnNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sReturnNode_clone}", 10, 342);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sCSourceNode* sCSourceNode_initialize(struct sCSourceNode* self, char*  contents  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj41  ;
    struct sCSourceNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCSourceNode*)come_increment_ref_count(self, "50call4.nc", 161, 348),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 161, 349);
    __dec_obj41=self->contents,
    self->contents=(char* )come_increment_ref_count(contents, "50call4.nc", 163, 351);
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 163, 350);
        __result_obj__0 = (struct sCSourceNode*)come_increment_ref_count(self, "50call4.nc", 166, 352);
    come_call_finalizer(sCSourceNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 166, 355);
    (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 166, 356));
    neo_current_frame = fr.prev;
    come_call_finalizer(sCSourceNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 166, 357);
    return __result_obj__0;
}

char*  sCSourceNode_kind(struct sCSourceNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCSourceNode","50call4.nc",168))), "50call4.nc", 168, 358);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 168, 359));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 168, 360));
    return __result_obj__0;
}

_Bool sCSourceNode_compile(struct sCSourceNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    add_come_last_code(info,"%s",((char* )(__right_value0=string_operator_load_range_element(self->contents,1,-2))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 173, 361));
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sCSourceNode_finalize(struct sCSourceNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCSourceNode_finalize", 2, 353));
    }
    if(self!=((void*)0)&&self->contents!=((void*)0)) {
        (self->contents = come_decrement_ref_count(self->contents, (void*)0, (void*)0, 0, 0, (void*)0, "sCSourceNode_finalize", 3, 354));
    }
        neo_current_frame = fr.prev;
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char*  source  , _Bool volatile_, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj42  ;
    struct sInlineAssembler* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sInlineAssembler*)come_increment_ref_count(self, "50call4.nc", 183, 362),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 183, 363);
    __dec_obj42=self->source,
    self->source=(char* )come_increment_ref_count(source, "50call4.nc", 185, 365);
    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 185, 364);
    self->volatile_=volatile_;
        __result_obj__0 = (struct sInlineAssembler*)come_increment_ref_count(self, "50call4.nc", 189, 366);
    come_call_finalizer(sInlineAssembler_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 189, 369);
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 189, 370));
    neo_current_frame = fr.prev;
    come_call_finalizer(sInlineAssembler_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 189, 371);
    return __result_obj__0;
}

char*  sInlineAssembler_kind(struct sInlineAssembler* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sInlineAssembler","50call4.nc",191))), "50call4.nc", 191, 372);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 191, 373));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 191, 374));
    return __result_obj__0;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_compile"; neo_current_frame = &fr;
    char*  source  ;
    _Bool volatile_;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value2 = (void*)0;
    char*  __dec_obj43  ;
    struct sType*  __dec_obj44  ;
    _Bool __result_obj__0;
    source=(char* )come_increment_ref_count(self->source, "50call4.nc", 196, 375);
    volatile_=self->volatile_;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 199, 376, "struct CVALUE* "), "50call4.nc", 199, 377)), "50call4.nc", 199, 378);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj43=come_value->c_value,
    come_value->c_value=(char*)come_increment_ref_count(xsprintf(" __asm \%s \%s",((char* )(__right_value0=charp_to_string(((volatile_)?("volatile"):(""))))),((char* )(__right_value1=string_to_string(source)))), "50call4.nc", 201, 380);
    __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 201, 379);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 201, 381));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 201, 382));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __dec_obj44=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "50call4.nc", 203, 383, "struct sType* "), "50call4.nc", 203, 384),(char*)come_increment_ref_count(xsprintf("void"), "50call4.nc", 203, 385),(_Bool)0,info,(_Bool)0,0), "50call4.nc", 203, 387);
    come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 203, 386);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 206, 402));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 210, 403));
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 210, 404);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sInlineAssembler_finalize", 2, 367));
    }
    if(self!=((void*)0)&&self->source!=((void*)0)) {
        (self->source = come_decrement_ref_count(self->source, (void*)0, (void*)0, 0, 0, (void*)0, "sInlineAssembler_finalize", 3, 368));
    }
        neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj45  ;
    struct list_item$1CVALUE$ph* litem_12;
    struct CVALUE*  __dec_obj46  ;
    struct list_item$1CVALUE$ph* litem_13;
    struct CVALUE*  __dec_obj47  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1615, 388);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1619, 389, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1619, 390);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj45=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 392);
        come_call_finalizer(CVALUE_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1623, 391);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1629, 393, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1629, 394);
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj46=litem_12->item,
        litem_12->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 396);
        come_call_finalizer(CVALUE_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1633, 395);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1639, 397, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1639, 398);
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj47=litem_13->item,
        litem_13->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 400);
        come_call_finalizer(CVALUE_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1643, 399);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1651, 401);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sLineNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLineNode*)come_increment_ref_count(self, "50call4.nc", 218, 405),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 218, 406);
        __result_obj__0 = (struct sLineNode*)come_increment_ref_count(self, "50call4.nc", 221, 407);
    come_call_finalizer(sLineNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 221, 409);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLineNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 221, 410);
    return __result_obj__0;
}

char*  sLineNode_kind(struct sLineNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLineNode","50call4.nc",223))), "50call4.nc", 223, 411);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 223, 412));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 223, 413));
    return __result_obj__0;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj48  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj49  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 228, 414, "struct CVALUE* "), "50call4.nc", 228, 415)), "50call4.nc", 228, 416);
    __right_value0 = (void*)0;
    __dec_obj48=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%d",info->sline), "50call4.nc", 230, 418);
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 230, 417);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj49=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "50call4.nc", 231, 419, "struct sType* "), "50call4.nc", 231, 420),(char*)come_increment_ref_count(xsprintf("int"), "50call4.nc", 231, 421),(_Bool)0,info,(_Bool)0,0), "50call4.nc", 231, 423);
    come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 231, 422);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 234, 424));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 238, 425);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLineNode_finalize(struct sLineNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLineNode_finalize", 2, 408));
    }
        neo_current_frame = fr.prev;
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sSNameNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSNameNode*)come_increment_ref_count(self, "50call4.nc", 246, 426),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 246, 427);
        __result_obj__0 = (struct sSNameNode*)come_increment_ref_count(self, "50call4.nc", 249, 428);
    come_call_finalizer(sSNameNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 249, 430);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSNameNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 249, 431);
    return __result_obj__0;
}

char*  sSNameNode_kind(struct sSNameNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSNameNode","50call4.nc",251))), "50call4.nc", 251, 432);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 251, 433));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 251, 434));
    return __result_obj__0;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj50  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj51  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 256, 435, "struct CVALUE* "), "50call4.nc", 256, 436)), "50call4.nc", 256, 437);
    __right_value0 = (void*)0;
    __dec_obj50=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",info->sname), "50call4.nc", 258, 439);
    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 258, 438);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj51=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "50call4.nc", 259, 440, "struct sType* "), "50call4.nc", 259, 441),(char*)come_increment_ref_count(xsprintf("char*"), "50call4.nc", 259, 442),(_Bool)0,info,(_Bool)0,0), "50call4.nc", 259, 444);
    come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 259, 443);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 262, 445));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 266, 446);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSNameNode_finalize(struct sSNameNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sSNameNode_finalize", 2, 429));
    }
        neo_current_frame = fr.prev;
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sFuncNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sFuncNode*)come_increment_ref_count(self, "50call4.nc", 274, 447),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 274, 448);
        __result_obj__0 = (struct sFuncNode*)come_increment_ref_count(self, "50call4.nc", 277, 449);
    come_call_finalizer(sFuncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 277, 451);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFuncNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 277, 452);
    return __result_obj__0;
}

char*  sFuncNode_kind(struct sFuncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sFuncNode","50call4.nc",279))), "50call4.nc", 279, 453);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 279, 454));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 279, 455));
    return __result_obj__0;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj52  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj53  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 284, 456, "struct CVALUE* "), "50call4.nc", 284, 457)), "50call4.nc", 284, 458);
    __right_value0 = (void*)0;
    __dec_obj52=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName), "50call4.nc", 286, 460);
    __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 286, 459);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj53=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "50call4.nc", 287, 461, "struct sType* "), "50call4.nc", 287, 462),(char*)come_increment_ref_count(xsprintf("char*"), "50call4.nc", 287, 463),(_Bool)0,info,(_Bool)0,0), "50call4.nc", 287, 465);
    come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 287, 464);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 290, 466));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 294, 467);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sFuncNode_finalize(struct sFuncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFuncNode_finalize", 2, 450));
    }
        neo_current_frame = fr.prev;
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCallerFuncNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCallerFuncNode*)come_increment_ref_count(self, "50call4.nc", 302, 468),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 302, 469);
        __result_obj__0 = (struct sCallerFuncNode*)come_increment_ref_count(self, "50call4.nc", 305, 470);
    come_call_finalizer(sCallerFuncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 305, 472);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCallerFuncNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 305, 473);
    return __result_obj__0;
}

char*  sCallerFuncNode_kind(struct sCallerFuncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCallerFuncNode","50call4.nc",307))), "50call4.nc", 307, 474);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 307, 475));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 307, 476));
    return __result_obj__0;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj54  ;
    char*  __dec_obj55  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj56  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 312, 477, "struct CVALUE* "), "50call4.nc", 312, 478)), "50call4.nc", 312, 479);
    if(info->caller_fun) {
        __right_value0 = (void*)0;
        __dec_obj54=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName), "50call4.nc", 315, 481);
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 315, 480);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj55=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"\""), "50call4.nc", 318, 483);
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 318, 482);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj56=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "50call4.nc", 320, 484, "struct sType* "), "50call4.nc", 320, 485),(char*)come_increment_ref_count(xsprintf("char*"), "50call4.nc", 320, 486),(_Bool)0,info,(_Bool)0,0), "50call4.nc", 320, 488);
    come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 320, 487);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 323, 489));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 327, 490);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCallerFuncNode_finalize", 2, 471));
    }
        neo_current_frame = fr.prev;
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCallerLineNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCallerLineNode*)come_increment_ref_count(self, "50call4.nc", 335, 491),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 335, 492);
        __result_obj__0 = (struct sCallerLineNode*)come_increment_ref_count(self, "50call4.nc", 338, 493);
    come_call_finalizer(sCallerLineNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 338, 495);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCallerLineNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 338, 496);
    return __result_obj__0;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj57  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj58  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 340, 497, "struct CVALUE* "), "50call4.nc", 340, 498)), "50call4.nc", 340, 499);
    __right_value0 = (void*)0;
    __dec_obj57=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%d",info->caller_line), "50call4.nc", 342, 501);
    __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 342, 500);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj58=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "50call4.nc", 343, 502, "struct sType* "), "50call4.nc", 343, 503),(char*)come_increment_ref_count(xsprintf("int"), "50call4.nc", 343, 504),(_Bool)0,info,(_Bool)0,0), "50call4.nc", 343, 506);
    come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 343, 505);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 346, 507));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 350, 508);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char*  sCallerLineNode_kind(struct sCallerLineNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCallerLineNode","50call4.nc",355))), "50call4.nc", 355, 509);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 355, 510));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 355, 511));
    return __result_obj__0;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCallerLineNode_finalize", 2, 494));
    }
        neo_current_frame = fr.prev;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCallerSNameNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCallerSNameNode*)come_increment_ref_count(self, "50call4.nc", 363, 512),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 363, 513);
        __result_obj__0 = (struct sCallerSNameNode*)come_increment_ref_count(self, "50call4.nc", 366, 514);
    come_call_finalizer(sCallerSNameNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 366, 516);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCallerSNameNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 366, 517);
    return __result_obj__0;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj59  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj60  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 368, 518, "struct CVALUE* "), "50call4.nc", 368, 519)), "50call4.nc", 368, 520);
    __right_value0 = (void*)0;
    __dec_obj59=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname), "50call4.nc", 370, 522);
    __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 370, 521);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj60=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "50call4.nc", 371, 523, "struct sType* "), "50call4.nc", 371, 524),(char*)come_increment_ref_count(xsprintf("char*"), "50call4.nc", 371, 525),(_Bool)0,info,(_Bool)0,0), "50call4.nc", 371, 527);
    come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 371, 526);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 374, 528));
    add_come_last_code(info,"%s",come_value->c_value);
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 378, 529);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char*  sCallerSNameNode_kind(struct sCallerSNameNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCallerSNameNode","50call4.nc",383))), "50call4.nc", 383, 530);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 383, 531));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 383, 532));
    return __result_obj__0;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCallerSNameNode_finalize", 2, 515));
    }
        neo_current_frame = fr.prev;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer*  come_block  , int come_block_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct buffer*  __dec_obj61  ;
    struct sComeCallNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sComeCallNode*)come_increment_ref_count(self, "50call4.nc", 390, 533),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 390, 534);
    __dec_obj61=self->come_block,
    self->come_block=(struct buffer* )come_increment_ref_count(come_block, "50call4.nc", 392, 536);
    come_call_finalizer(buffer_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 392, 535);
    self->come_block_sline=come_block_sline;
        __result_obj__0 = (struct sComeCallNode*)come_increment_ref_count(self, "50call4.nc", 396, 537);
    come_call_finalizer(sComeCallNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 396, 540);
    come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 396, 541);
    neo_current_frame = fr.prev;
    come_call_finalizer(sComeCallNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 396, 542);
    return __result_obj__0;
}

char*  sComeCallNode_kind(struct sComeCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sComeCallNode","50call4.nc",398))), "50call4.nc", 398, 543);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 398, 544));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 398, 545));
    return __result_obj__0;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_terminated"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_compile"; neo_current_frame = &fr;
    int come_block_sline;
    struct buffer*  come_block  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* come_params;
    char*  var_name  ;
    void* __right_value2 = (void*)0;
    struct sType*  type_  ;
    _Bool __result_obj__0;
    struct sNode* var_node;
    _Bool Value;
    struct CVALUE*  thread_var_value  ;
    struct CVALUE*  come_value  ;
    char*  __dec_obj62  ;
    struct sType*  __dec_obj63  ;
    struct sNode* null_node;
    _Bool Value_14;
    struct CVALUE*  __dec_obj64  ;
    struct sType*  type__15  ;
    struct sType*  __dec_obj65  ;
    struct sNode* _inf_value2;
    struct sCurrentNode* _inf_obj_value2;
    struct sNode* current_stack_frame_node;
    _Bool Value_16;
    struct CVALUE*  current_stack_frame_value  ;
    char*  fun_name  ;
    struct buffer*  come_block2  ;
    char*  class_name  ;
    struct sClass*  current_stack_frame_struct  ;
    struct buffer*  source3  ;
    char* p;
    char* head;
    int sline;
    struct buffer*  __dec_obj67  ;
    struct span$1char$p* __dec_obj68;
    struct sNode* node;
    _Bool in_method_block;
    _Bool Value_17;
    struct buffer*  __dec_obj69  ;
    struct span$1char$p* __dec_obj70;
    struct CVALUE*  fun_value  ;
    char*  __dec_obj71  ;
    struct sType*  __dec_obj72  ;
    struct buffer*  buf  ;
    char*  fun_name_20  ;
    int j;
    struct list$1CVALUE$ph* _o2_saved_5;
    struct CVALUE*  it  ;
    struct CVALUE*  come_value_23  ;
    char*  __dec_obj76  ;
    struct sType*  type  ;
    struct sType*  __dec_obj77  ;
    come_block_sline=self->come_block_sline;
    come_block=(struct buffer* )come_increment_ref_count(self->come_block, "50call4.nc", 409, 546);
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "50call4.nc", 411, 547, "struct list$1CVALUE$ph*"), "50call4.nc", 411, 553)), "50call4.nc", 411, 554);
    static int thread_num=0;
    thread_num++;
    __right_value0 = (void*)0;
    var_name=(char* )come_increment_ref_count(xsprintf("__thread_info%d",thread_num), "50call4.nc", 416, 555);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value1=map$2char$phsType$ph_at(info->types,((char*)(__right_value0=xsprintf("pthread_t"))),((void*)0),(_Bool)0)))), "50call4.nc", 418, 571);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 418, 572));
    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 418, 573);
    if(type_==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 422, 574);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 422, 575);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 422, 576));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 422, 577);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    var_node=(struct sNode*)come_increment_ref_count(store_var((char* )come_increment_ref_count(var_name, "50call4.nc", 425, 578),((void*)0),((void*)0),type_,(_Bool)1,((void*)0),info,(_Bool)0), "50call4.nc", 425, 579);
    Value=node_compile(var_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 428, 580);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 428, 581);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 428, 582));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 428, 583);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 428, 584):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    thread_var_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "50call4.nc", 431, 585);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 433, 586, "struct CVALUE* "), "50call4.nc", 433, 587)), "50call4.nc", 433, 588);
    __right_value0 = (void*)0;
    __dec_obj62=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("&%s",thread_var_value->c_value), "50call4.nc", 434, 590);
    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 434, 589);
    __dec_obj63=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(thread_var_value->type, "50call4.nc", 435, 592);
    come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 435, 591);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 438, 593));
    __right_value0 = (void*)0;
    null_node=(struct sNode*)come_increment_ref_count(create_null_node(info), "50call4.nc", 440, 594);
    Value_14=node_compile(null_node,info);
    if(!Value_14) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 443, 595);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 443, 596);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 443, 597));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 443, 598);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 443, 599):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 443, 600);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 443, 601);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 443, 602):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    __dec_obj64=come_value,
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "50call4.nc", 446, 604);
    come_call_finalizer(CVALUE_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 446, 603);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 448, 605);
    __right_value0 = (void*)0;
    type__15=(struct sType* )come_increment_ref_count(solve_generics(come_value->type,info->generics_type,info), "50call4.nc", 448, 606);
    __right_value0 = (void*)0;
    __dec_obj65=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__15,info), "50call4.nc", 449, 608);
    come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 449, 607);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 451, 609));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 453, 612, "struct sNode");
    _inf_obj_value2=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value1=sCurrentNode_initialize((struct sCurrentNode* )come_increment_ref_count((struct sCurrentNode *)come_calloc(1, sizeof(struct sCurrentNode )*(1), "50call4.nc", 453, 610, "struct sCurrentNode* "), "50call4.nc", 453, 611),info))), "50call4.nc", 453, 613);
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode_finalize;
    _inf_value2->clone=(void*)sCurrentNode_clone;
    _inf_value2->compile=(void*)sCurrentNode_compile;
    _inf_value2->sline=(void*)sCurrentNode_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode_kind;
    _inf_value2->left_value=(void*)sNodeBase_left_value;
    __right_value2 = (void*)0;
    current_stack_frame_node=(struct sNode*)come_increment_ref_count(_inf_value2, "50call4.nc", 453, 621);
    come_call_finalizer(sCurrentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 453, 622);
    Value_16=node_compile(current_stack_frame_node,info);
    if(!Value_16) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 456, 623);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 456, 624);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 456, 625));
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 456, 626):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 456, 627);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 456, 628);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 456, 629):(void*)0);
        come_call_finalizer(sType_finalize, type__15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 456, 630);
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 456, 631):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    current_stack_frame_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "50call4.nc", 459, 632);
    __right_value0 = (void*)0;
    fun_name=(char* )come_increment_ref_count(xsprintf("__thread_fun%d",thread_num), "50call4.nc", 461, 633);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_block2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "50call4.nc", 463, 634, "struct buffer* "), "50call4.nc", 463, 635)), "50call4.nc", 463, 636);
    __right_value0 = (void*)0;
    class_name=(char* )come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num), "50call4.nc", 465, 637);
    buffer_append_format(come_block2,"void* %s(%s* parent)\n",fun_name,class_name);
    __right_value0 = (void*)0;
    buffer_append_str(come_block2,((char* )(__right_value0=buffer_to_string(come_block))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 469, 638));
    current_stack_frame_struct=info->current_stack_frame_struct;
    __right_value0 = (void*)0;
    info->current_stack_frame_struct=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
    source3=(struct buffer* )come_increment_ref_count(info->source, "50call4.nc", 474, 677);
    p=info->p->p;
    head=info->head;
    sline=info->sline;
    __dec_obj67=info->source,
    info->source=(struct buffer* )come_increment_ref_count(come_block2, "50call4.nc", 479, 679);
    come_call_finalizer(buffer_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 479, 678);
    if(info->p==((void*)0)) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj68=info->p,
        info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "50call4.nc", 481, 680, "struct span$1buffer$p*"), "50call4.nc", 481, 684),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "50call4.nc", 481, 686);
        come_call_finalizer(span$1char$p$p_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 481, 685);
    }
    info->p->memory=info->source->buf;
    info->p->len=info->source->len+2;
    info->p->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline;
    __right_value0 = (void*)0;
    node=(struct sNode*)come_increment_ref_count(parse_function(info), "50call4.nc", 489, 687);
    in_method_block=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_17=node_compile(node,info);
    if(!Value_17) {
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 494, 688);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 494, 689);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 494, 690));
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 494, 691):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 494, 692);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 494, 693);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 494, 694):(void*)0);
        come_call_finalizer(sType_finalize, type__15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 494, 695);
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 494, 696):(void*)0);
        come_call_finalizer(CVALUE_finalize, current_stack_frame_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 494, 697);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 494, 698));
        come_call_finalizer(buffer_finalize, come_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 494, 699);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 494, 700));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 494, 701);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 494, 702):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    info->in_method_block=in_method_block;
    __dec_obj69=info->source,
    info->source=(struct buffer* )come_increment_ref_count(source3, "50call4.nc", 498, 704);
    come_call_finalizer(buffer_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 498, 703);
    if(info->p==((void*)0)) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj70=info->p,
        info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "50call4.nc", 500, 705, "struct span$1buffer$p*"), "50call4.nc", 500, 706),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "50call4.nc", 500, 708);
        come_call_finalizer(span$1char$p$p_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 500, 707);
    }
    info->p->memory=info->source->buf;
    info->p->len=info->source->len+2;
    info->p->p=info->source->buf;
    info->p->p=p;
    info->head=head;
    info->sline=sline;
    info->current_stack_frame_struct=current_stack_frame_struct;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    fun_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 511, 709, "struct CVALUE* "), "50call4.nc", 511, 710)), "50call4.nc", 511, 711);
    __right_value0 = (void*)0;
    __dec_obj71=fun_value->c_value,
    fun_value->c_value=(char* )come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name), "50call4.nc", 513, 713);
    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 513, 712);
    __dec_obj72=come_value->type,
    come_value->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 514, 714);
    come_value->var=((void*)0);
    list$1CVALUE$ph_add(come_params,(struct CVALUE* )come_increment_ref_count(fun_value, "50call4.nc", 517, 729));
    list$1CVALUE$ph_add(come_params,(struct CVALUE* )come_increment_ref_count(current_stack_frame_value, "50call4.nc", 519, 730));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "50call4.nc", 521, 731, "struct buffer* "), "50call4.nc", 521, 732)), "50call4.nc", 521, 733);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 523, 734));
    __right_value0 = (void*)0;
    fun_name_20=(char*)come_increment_ref_count(xsprintf("pthread_create"), "50call4.nc", 523, 735);
    buffer_append_str(buf,"(");
    buffer_append_str(buf,fun_name_20);
    buffer_append_str(buf,"(");
    j=0;
    for(_o2_saved_5=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params, "50call4.nc", 530, 736),it=list$1CVALUE$ph_begin(_o2_saved_5)    ;!list$1CVALUE$ph_end(_o2_saved_5);it=list$1CVALUE$ph_next(_o2_saved_5)){
        buffer_append_str(buf,it->c_value);
        if(j!=list$1CVALUE$ph_length(come_params)-1) {
            buffer_append_str(buf,",");
        }
        j++;
    }
    buffer_append_str(buf,")");
    buffer_append_str(buf,", ");
    buffer_append_str(buf,thread_var_value->c_value);
    buffer_append_str(buf,")");
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 544, 737);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_23=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 544, 738, "struct CVALUE* "), "50call4.nc", 544, 739)), "50call4.nc", 544, 740);
    __right_value0 = (void*)0;
    __dec_obj76=come_value_23->c_value,
    come_value_23->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "50call4.nc", 545, 742);
    __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 545, 741);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value1=map$2char$phsType$ph_at(info->types,((char*)(__right_value0=xsprintf("pthread_t"))),((void*)0),(_Bool)0)))), "50call4.nc", 547, 743);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 547, 744));
    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 547, 745);
    if(type==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
    }
    __dec_obj77=come_value_23->type,
    come_value_23->type=(struct sType* )come_increment_ref_count(type, "50call4.nc", 551, 747);
    come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 551, 746);
    come_value_23->var=((void*)0);
    add_come_last_code(info,"%s",come_value_23->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_23, "50call4.nc", 556, 748));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 558, 749);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 558, 750);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 558, 751));
    ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 558, 752):(void*)0);
    come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 558, 753);
    ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 558, 754):(void*)0);
    come_call_finalizer(sType_finalize, type__15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 558, 755);
    ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 558, 756):(void*)0);
    come_call_finalizer(CVALUE_finalize, current_stack_frame_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 558, 757);
    come_call_finalizer(buffer_finalize, come_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 558, 758);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 558, 759));
    come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 558, 760);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 558, 761):(void*)0);
    come_call_finalizer(CVALUE_finalize, fun_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 558, 762);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 558, 763);
    (fun_name_20 = come_decrement_ref_count(fun_name_20, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 558, 764));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 558, 765);
    come_call_finalizer(CVALUE_finalize, come_value_23, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 558, 766);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 558, 767);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sComeCallNode_finalize(struct sComeCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sComeCallNode_finalize", 2, 538));
    }
    if(self!=((void*)0)&&self->come_block!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sComeCallNode_finalize}", 3, 539);
    }
        neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_initialize"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1CVALUE$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 548);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 551);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 552);
    return __result_obj__0;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1CVALUE$ph* it;
    struct list_item$1CVALUE$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 550);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1CVALUE$ph$p_finalize}", 2, 549);
    }
            neo_current_frame = fr.prev;
}

static struct sType*  map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char*  key  , struct sType*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_at"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3141, 556);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 557);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 558);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sType* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3152, 559);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3152, 560);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3152, 561);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3161, 562);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 563);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 564);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3165, 565);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 566);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 567);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3169, 568);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 569);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 570);
    return __result_obj__0;
}

static void sCurrentNode_finalize(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCurrentNode_finalize", 2, 614));
    }
        neo_current_frame = fr.prev;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_clone"; neo_current_frame = &fr;
    struct sCurrentNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCurrentNode*  result  ;
    char*  __dec_obj66  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCurrentNode* )come_increment_ref_count((struct sCurrentNode *)come_calloc(1, sizeof(struct sCurrentNode )*(1), "sCurrentNode_clone", 5, 615, "struct sCurrentNode* "), "sCurrentNode_clone", 5, 616);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj66=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCurrentNode_clone", 7, 617, "char* "), "sCurrentNode_clone", 7, 619);
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0, "sCurrentNode_clone", 7, 618);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sCurrentNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCurrentNode_clone}", 9, 620);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sClass*  default_value  ;
    struct sClass*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClass* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 639);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 648);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 649);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 650);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 651);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 652);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 653);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 654);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 655);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 656);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 657);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 658);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 659);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 660);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 661);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 640));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 3, 645);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 646));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 647));
    }
            neo_current_frame = fr.prev;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 644);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 643);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 641));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 642);
    }
            neo_current_frame = fr.prev;
}

static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_operator_load_element"; neo_current_frame = &fr;
    struct sClass*  default_value  ;
    struct sClass*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClass* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 662);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 663);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 664);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 665);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 666);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 667);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 668);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 669);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 670);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 671);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 672);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 673);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 674);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 675);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 676);
    return __result_obj__0;
}

static struct span$1buffer$p* span$1buffer$p_initialize(struct span$1buffer$p* self, void* head, unsigned long  len  , _Bool local, _Bool heap, _Bool global, void* stacktop)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "span$1buffer$p_initialize"; neo_current_frame = &fr;
    struct span$1buffer$p* __result_obj__0;
    if(!1) {
        puts("invalid span");
        stackframe2(self);
        exit(2);
    }
    self->memory=(char*)head;
    self->p=(struct buffer* )head;
    self->len=len;
    self->local=local;
    self->heap=heap;
    self->global=global;
    self->stacktop=stacktop;
        __result_obj__0 = (struct span$1buffer$p*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1026, 681);
    come_call_finalizer(span$1buffer$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1026, 682);
    neo_current_frame = fr.prev;
    come_call_finalizer(span$1buffer$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1026, 683);
    return __result_obj__0;
}

static void span$1buffer$p$p_finalize(struct span$1buffer$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "span$1buffer$p$p_finalize"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void span$1char$p$p_finalize(struct span$1char$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "span$1char$p$p_finalize"; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_add"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj73  ;
    struct list_item$1CVALUE$ph* litem_18;
    struct CVALUE*  __dec_obj74  ;
    struct list_item$1CVALUE$ph* litem_19;
    struct CVALUE*  __dec_obj75  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 715);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1534, 716, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1534, 717);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj73=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 719);
        come_call_finalizer(CVALUE_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 718);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_18=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1544, 720, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1544, 721);
        litem_18->prev=self->head;
        litem_18->next=((void*)0);
        __dec_obj74=litem_18->item,
        litem_18->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 723);
        come_call_finalizer(CVALUE_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 722);
        self->tail=litem_18;
        self->head->next=litem_18;
    }
    else {
        __right_value0 = (void*)0;
        litem_19=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1554, 724, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1554, 725);
        litem_19->prev=self->tail;
        litem_19->next=((void*)0);
        __dec_obj75=litem_19->item,
        litem_19->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 727);
        come_call_finalizer(CVALUE_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 726);
        self->tail->next=litem_19;
        self->tail=litem_19;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 728);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_begin"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_21  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct CVALUE* ));
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
    memset(&result_21,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result_21;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_next"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_22  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct CVALUE* ));
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
    memset(&result_22,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result_22;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
            neo_current_frame = fr.prev;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj78;
    struct sComeJoinNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sComeJoinNode*)come_increment_ref_count(self, "50call4.nc", 565, 768),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 565, 769);
    __dec_obj78=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node, "50call4.nc", 567, 771);
    (__dec_obj78 ? __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0, (void*)0, "50call4.nc", 567, 770) :0);
        __result_obj__0 = (struct sComeJoinNode*)come_increment_ref_count(self, "50call4.nc", 570, 772);
    come_call_finalizer(sComeJoinNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 570, 775);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 570, 776):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sComeJoinNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 570, 777);
    return __result_obj__0;
}

char*  sComeJoinNode_kind(struct sComeJoinNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sComeJoinNode","50call4.nc",572))), "50call4.nc", 572, 778);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 572, 779));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 572, 780));
    return __result_obj__0;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_terminated"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    struct CVALUE*  come_value_24  ;
    char*  __dec_obj79  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj80  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "50call4.nc", 582, 781);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 585, 782):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "50call4.nc", 588, 783);
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "50call4.nc", 590, 784, "struct buffer* "), "50call4.nc", 590, 785)), "50call4.nc", 590, 786);
    buffer_append_str(buf,"pthread_join(");
    buffer_append_str(buf,come_value->c_value);
    buffer_append_str(buf,", 0)");
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 595, 787);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_24=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 595, 788, "struct CVALUE* "), "50call4.nc", 595, 789)), "50call4.nc", 595, 790);
    __right_value0 = (void*)0;
    __dec_obj79=come_value_24->c_value,
    come_value_24->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "50call4.nc", 596, 792);
    __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 596, 791);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj80=come_value_24->type,
    come_value_24->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "50call4.nc", 597, 793, "struct sType* "), "50call4.nc", 597, 794),(char*)come_increment_ref_count(xsprintf("void"), "50call4.nc", 597, 795),(_Bool)0,info,(_Bool)0,0), "50call4.nc", 597, 797);
    come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 597, 796);
    come_value_24->var=((void*)0);
    add_come_last_code(info,"%s",come_value_24->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_24, "50call4.nc", 602, 798));
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 604, 799):(void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 604, 800);
    come_call_finalizer(CVALUE_finalize, come_value_24, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 604, 801);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sComeJoinNode_finalize", 2, 773));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sComeJoinNode_finalize", 3, 774):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock*  else_block  , int time_out, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj81;
    struct list$1sBlock$ph* __dec_obj82;
    struct sBlock*  __dec_obj83  ;
    struct sComePollNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sComePollNode*)come_increment_ref_count(self, "50call4.nc", 612, 802),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 612, 803);
    __dec_obj81=self->vars,
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars, "50call4.nc", 614, 805);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 614, 804);
    __dec_obj82=self->blocks,
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks, "50call4.nc", 615, 809);
    come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 615, 808);
    __dec_obj83=self->else_block,
    self->else_block=(struct sBlock* )come_increment_ref_count(else_block, "50call4.nc", 616, 811);
    come_call_finalizer(sBlock_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 616, 810);
    self->time_out=time_out;
        __result_obj__0 = (struct sComePollNode*)come_increment_ref_count(self, "50call4.nc", 620, 812);
    come_call_finalizer(sComePollNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 620, 818);
    come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 620, 819);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 620, 820);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 620, 821);
    neo_current_frame = fr.prev;
    come_call_finalizer(sComePollNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 620, 822);
    return __result_obj__0;
}

char*  sComePollNode_kind(struct sComePollNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sComePollNode","50call4.nc",622))), "50call4.nc", 622, 823);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 622, 824));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 622, 825));
    return __result_obj__0;
}

_Bool sComePollNode_terminated(struct sComePollNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_terminated"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_compile"; neo_current_frame = &fr;
    struct list$1sNode$ph* vars;
    struct list$1sBlock$ph* blocks;
    int time_out;
    int n;
    struct list$1sNode$ph* _o2_saved_6;
    struct sNode* it;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    int n_27;
    struct list$1sNode$ph* _o2_saved_7;
    struct sNode* it_28;
    vars=(struct list$1sNode$ph*)come_increment_ref_count(self->vars, "50call4.nc", 632, 826);
    blocks=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks, "50call4.nc", 633, 827);
    time_out=self->time_out;
    static int var_num=0;
    var_num++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num,list$1sNode$ph_length(vars));
    n=0;
    for(_o2_saved_6=(struct list$1sNode$ph*)come_increment_ref_count(self->vars, "50call4.nc", 642, 828),it=list$1sNode$ph_begin(_o2_saved_6)    ;!list$1sNode$ph_end(_o2_saved_6);it=list$1sNode$ph_next(_o2_saved_6)){
        Value=node_compile(it,info);
        if(!Value) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 644, 829);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 644, 830);
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 644, 831);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "50call4.nc", 647, 832);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num,n,come_value->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num,n,0x001);
        n++;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 654, 833);
    }
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num,var_num,list$1sNode$ph_length(vars),time_out);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num);
    n_27=0;
    for(_o2_saved_7=(struct list$1sNode$ph*)come_increment_ref_count(self->vars, "50call4.nc", 658, 834),it_28=list$1sNode$ph_begin(_o2_saved_7)    ;!list$1sNode$ph_end(_o2_saved_7);it_28=list$1sNode$ph_next(_o2_saved_7)){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num,n_27,0x001);
        __right_value0 = (void*)0;
        transpile_block(((struct sBlock* )(__right_value0=list$1sBlock$ph_operator_load_element(blocks,n_27))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer(sBlock_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 660, 853);
        add_come_code(info,"}\n");
        n_27++;
    }
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 673, 854);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 673, 855);
    come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 673, 856);
    come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 673, 857);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sBlock$ph* it;
    struct list_item$1sBlock$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 807);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sBlock$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sBlock$ph$p_finalize}", 2, 806);
    }
            neo_current_frame = fr.prev;
}

static void sComePollNode_finalize(struct sComePollNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sComePollNode_finalize", 2, 813));
    }
    if(self!=((void*)0)&&self->vars!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->vars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sComePollNode_finalize}", 3, 814);
    }
    if(self!=((void*)0)&&self->blocks!=((void*)0)) {
        come_call_finalizer(list$1sBlock$ph$p_finalize, self->blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sComePollNode_finalize}", 4, 816);
    }
    if(self!=((void*)0)&&self->else_block!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sComePollNode_finalize}", 5, 817);
    }
        neo_current_frame = fr.prev;
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sBlock$ph* it;
    struct list_item$1sBlock$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 815);
    }
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

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_25;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
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
    memset(&result_25,0,sizeof(struct sNode*));
        __result_obj__0 = result_25;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_next"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_26;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
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
    memset(&result_26,0,sizeof(struct sNode*));
        __result_obj__0 = result_26;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sBlock*  list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sBlock*  default_value  ;
    struct sBlock*  __result_obj__0  ;
    struct list_item$1sBlock$ph* it;
    int i;
    struct sBlock*  default_value_29  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sBlock* ));
                __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 835);
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 836);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 837);
        return __result_obj__0;
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 838);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sBlock* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 839);
            neo_current_frame = fr.prev;
            come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 840);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_29,0,sizeof(struct sBlock* ));
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value_29, "/usr/local/include/neo-c.h", 2169, 841);
    come_call_finalizer(sBlock_finalize, default_value_29, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 842);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 843);
    return __result_obj__0;
}

static struct sBlock*  list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_operator_load_element"; neo_current_frame = &fr;
    struct sBlock*  default_value  ;
    struct sBlock*  __result_obj__0  ;
    struct list_item$1sBlock$ph* it;
    int i;
    struct sBlock*  default_value_30  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sBlock* ));
                __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 844);
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 845);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 846);
        return __result_obj__0;
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 847);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sBlock* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 848);
            neo_current_frame = fr.prev;
            come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 849);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_30,0,sizeof(struct sBlock* ));
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value_30, "/usr/local/include/neo-c.h", 2169, 850);
    come_call_finalizer(sBlock_finalize, default_value_30, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 851);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 852);
    return __result_obj__0;
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj84  ;
    struct sVarArgTypeName* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sVarArgTypeName*)come_increment_ref_count(self, "50call4.nc", 682, 858),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 682, 859);
    __right_value0 = (void*)0;
    __dec_obj84=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "50call4.nc", 684, 861);
    come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 684, 860);
        __result_obj__0 = (struct sVarArgTypeName*)come_increment_ref_count(self, "50call4.nc", 687, 862);
    come_call_finalizer(sVarArgTypeName_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 687, 865);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarArgTypeName_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 687, 866);
    return __result_obj__0;
}

char*  sVarArgTypeName_kind(struct sVarArgTypeName* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sVarArgTypeName","50call4.nc",689))), "50call4.nc", 689, 867);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 689, 868));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 689, 869));
    return __result_obj__0;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj85  ;
    struct sType*  __dec_obj86  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type, "50call4.nc", 694, 870);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "50call4.nc", 696, 871, "struct CVALUE* "), "50call4.nc", 696, 872)), "50call4.nc", 696, 873);
    __right_value0 = (void*)0;
    __dec_obj85=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "50call4.nc", 698, 875);
    __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 698, 874);
    __dec_obj86=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(type, "50call4.nc", 699, 877);
    come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 699, 876);
    come_value->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "50call4.nc", 702, 878));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 704, 879);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 704, 880);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sVarArgTypeName_finalize", 2, 863));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarArgTypeName_finalize}", 3, 864);
    }
        neo_current_frame = fr.prev;
}

struct sInnerAttribute* sInnerAttribute_initialize(struct sInnerAttribute* self, char*  attr  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj87  ;
    struct sInnerAttribute* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sInnerAttribute*)come_increment_ref_count(self, "50call4.nc", 712, 881),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 712, 882);
    __dec_obj87=self->attr,
    self->attr=(char* )come_increment_ref_count(attr, "50call4.nc", 714, 884);
    __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 714, 883);
        __result_obj__0 = (struct sInnerAttribute*)come_increment_ref_count(self, "50call4.nc", 717, 885);
    come_call_finalizer(sInnerAttribute_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 717, 888);
    (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 717, 889));
    neo_current_frame = fr.prev;
    come_call_finalizer(sInnerAttribute_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "50call4.nc}", 717, 890);
    return __result_obj__0;
}

char*  sInnerAttribute_kind(struct sInnerAttribute* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sInnerAttribute","50call4.nc",719))), "50call4.nc", 719, 891);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 719, 892));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 719, 893));
    return __result_obj__0;
}

_Bool sInnerAttribute_compile(struct sInnerAttribute* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_compile"; neo_current_frame = &fr;
    char*  attr  ;
    _Bool __result_obj__0;
    attr=(char* )come_increment_ref_count(self->attr, "50call4.nc", 724, 894);
    add_come_code(info,"__attribute__%s",attr);
        __result_obj__0 = (_Bool)1;
    (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 728, 895));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sInnerAttribute_finalize(struct sInnerAttribute* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sInnerAttribute_finalize", 2, 886));
    }
    if(self!=((void*)0)&&self->attr!=((void*)0)) {
        (self->attr = come_decrement_ref_count(self->attr, (void*)0, (void*)0, 0, 0, (void*)0, "sInnerAttribute_finalize", 3, 887));
    }
        neo_current_frame = fr.prev;
}

struct sNode* expression_node_v1(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expression_node_v1"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    skip_spaces_and_lf(info);
    err_msg(info,"invalid character(1)(%d)(%c)",*info->p->p,*info->p->p);
    exit(3);
        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "50call4.nc", 738, 896);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 738, 897):(void*)0);
    return __result_obj__0;
}

char*  parse_inner_attribute(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_inner_attribute"; neo_current_frame = &fr;
    char* head;
    _Bool in_dquort;
    int brace_num;
    char* tail;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  __result_obj__0  ;
    head=info->p->p;
    if(*info->p->p==40) {
        in_dquort=(_Bool)0;
        brace_num=0;
        while(*info->p->p) {
            if(*info->p->p==34) {
                info->p->p++;
                in_dquort=!in_dquort;
            }
            else if(in_dquort) {
                info->p->p++;
            }
            else if(*info->p->p==40) {
                info->p->p++;
                brace_num++;
            }
            else if(*info->p->p==41) {
                info->p->p++;
                brace_num--;
                if(brace_num==0) {
                    break;
                }
            }
            else {
                info->p->p++;
            }
        }
    }
    skip_spaces_and_lf(info);
    tail=info->p->p;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "50call4.nc", 776, 898, "struct buffer* "), "50call4.nc", 776, 899)), "50call4.nc", 776, 900);
    buffer_append(buf,head,tail-head);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "50call4.nc", 779, 901);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 779, 902);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 779, 903));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "50call4.nc", 779, 904));
    return __result_obj__0;
}

struct sNode* expression_node_v98(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expression_node_v98"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sReturnNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    struct sNode* value;
    struct sNode* __dec_obj88;
    struct sNode* _inf_value4;
    struct sReturnNode* _inf_obj_value4;
    int nest;
    struct sNode* node;
    struct sNode* node_31;
    struct sNode* node_32;
    char* head;
    int head_sline;
    int sline_real;
    char*  buf  ;
    _Bool is_type_name_;
    _Bool is_special_word;
    _Bool is_portable_symbol;
    _Bool define_function_pointer_flag;
    _Bool lambda_flag;
    char*  word2  ;
    _Bool fun_name_with_type_name;
    _Bool no_output_come_code;
    _Bool flag;
    char*  word2_33  ;
    _Bool call_method_generics_fun_call;
    char*  __dec_obj89  ;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    _Bool _conditional_value_X0;
    int nest_34;
    _Bool inline_asm;
    char*  __dec_obj90  ;
    char*  __dec_obj91  ;
    char*  __dec_obj92  ;
    struct sNode* node_35;
    _Bool no_comma;
    struct sNode* exp;
    struct sNode* exp2;
    char*  attr  ;
    struct sNode* _inf_value5;
    struct sInnerAttribute* _inf_obj_value5;
    char*  block_text  ;
    char*  contents  ;
    struct sNode* _inf_value6;
    struct sCSourceNode* _inf_obj_value6;
    struct sNode* node_36;
    struct sNode* node_37;
    struct buffer*  come_block  ;
    int come_block_sline;
    char* head_38;
    char* tail;
    struct buffer*  __dec_obj97  ;
    int len;
    char* mem;
    char* head_39;
    _Bool no_output_come_code_40;
    char* tail_41;
    struct buffer*  __dec_obj98  ;
    int len_42;
    char* mem_43;
    struct sNode* _inf_value7;
    struct sComeCallNode* _inf_obj_value7;
    struct sNode* node_44;
    struct sNode* node_45;
    struct sNode* _inf_value8;
    struct sComeJoinNode* _inf_obj_value8;
    int time_out;
    struct list$1sNode$ph* vars;
    struct list$1sBlock$ph* blocks;
    struct sBlock*  else_block  ;
    struct sBlock*  __dec_obj103  ;
    struct sNode* var_name;
    struct sBlock*  block  ;
    struct sNode* _inf_value9;
    struct sComePollNode* _inf_obj_value9;
    struct sNode* _inf_value10;
    struct sFuncNode* _inf_obj_value10;
    struct sNode* _inf_value11;
    struct sLineNode* _inf_obj_value11;
    struct sNode* _inf_value12;
    struct sSNameNode* _inf_obj_value12;
    struct sNode* _inf_value13;
    struct sCallerFuncNode* _inf_obj_value13;
    struct sNode* _inf_value14;
    struct sCallerLineNode* _inf_obj_value14;
    struct sNode* _inf_value15;
    struct sCallerSNameNode* _inf_obj_value15;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var1
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    struct sNode* _inf_value16;
    struct sVarArgTypeName* _inf_obj_value16;
    struct sNode* node_63;
    _Bool volatile_;
    struct buffer*  buf2  ;
    char*  word  ;
    _Bool dquort;
    int i;
    struct sNode* exp_64;
    _Bool Value;
    struct CVALUE*  come_value  ;
    int i_65;
    int i_66;
    int i_67;
    struct sNode* _inf_value17;
    struct sInlineAssembler* _inf_obj_value17;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var2
;    struct sType*  type_68  =0;
    char*  name_69  =0;
    _Bool err_70=0;
    char*  base_fun_name  ;
    char*  fun_name  ;
    struct sNode* node_71;
    struct buffer*  fun_name_72  ;
    char*  buf2_73  ;
    struct sNode* node_74;
    struct sNode* node_75;
    struct sNode* node_76;
    struct sNode* node_77;
    skip_spaces_and_lf(info);
    if(parsecmp("return",info)) {
        info->p->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(*info->p->p==59) {
                        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 791, 907, "struct sNode");
            _inf_obj_value3=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value1=sReturnNode_initialize((struct sReturnNode* )come_increment_ref_count((struct sReturnNode *)come_calloc(1, sizeof(struct sReturnNode )*(1), "50call4.nc", 791, 905, "struct sReturnNode* "), "50call4.nc", 791, 906),((void*)0),info))), "50call4.nc", 791, 908);
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sReturnNode_finalize;
            _inf_value3->clone=(void*)sReturnNode_clone;
            _inf_value3->compile=(void*)sReturnNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sReturnNode_kind;
            _inf_value3->left_value=(void*)sNodeBase_left_value;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)), "50call4.nc", 791, 909);
            come_call_finalizer(sReturnNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 791, 910);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 791, 911):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 791, 912):(void*)0);
            return __result_obj__0;
        }
        else {
            __right_value0 = (void*)0;
            value=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "50call4.nc", 794, 913);
            __right_value0 = (void*)0;
            __dec_obj88=value,
            value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value, "50call4.nc", 795, 914),info), "50call4.nc", 795, 916);
            (__dec_obj88 ? __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0, (void*)0, "50call4.nc", 795, 915) :0);
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 797, 920, "struct sNode");
            _inf_obj_value4=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value1=sReturnNode_initialize((struct sReturnNode* )come_increment_ref_count((struct sReturnNode *)come_calloc(1, sizeof(struct sReturnNode )*(1), "50call4.nc", 797, 917, "struct sReturnNode* "), "50call4.nc", 797, 918),(struct sNode*)come_increment_ref_count(value, "50call4.nc", 797, 919),info))), "50call4.nc", 797, 921);
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sReturnNode_finalize;
            _inf_value4->clone=(void*)sReturnNode_clone;
            _inf_value4->compile=(void*)sReturnNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sReturnNode_kind;
            _inf_value4->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value4)), "50call4.nc", 797, 922);
            ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 797, 923):(void*)0);
            come_call_finalizer(sReturnNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 797, 924);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 797, 925):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 797, 926):(void*)0);
            return __result_obj__0;
            ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 799, 927):(void*)0);
        }
    }
    else if(*info->p->p==47&&*(info->p->p+1)==42) {
        nest=0;
        while(1) {
            if(*info->p->p==47&&*(info->p->p+1)==42) {
                info->p->p+=2;
                nest++;
            }
            else if(*info->p->p==42&&*(info->p->p+1)==47) {
                info->p->p+=2;
                nest--;
                if(nest==0) {
                    break;
                }
            }
            else if(*info->p->p==10) {
                info->p->p++;
                info->sline++;
            }
            else {
                info->p->p++;
            }
        }
    }
    else if(*info->p->p==47&&*(info->p->p+1)==47) {
        info->p->p+=2;
        while(1) {
            if(*info->p->p==10) {
                info->p->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(*info->p->p==0) {
                break;
            }
            else {
                info->p->p++;
            }
        }
    }
    else if(!gComeC&&*info->p->p==116&&*(info->p->p+1)==40) {
        info->p->p+=2;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(parse_tuple(info,(_Bool)0), "50call4.nc", 845, 928);
        skip_spaces_and_lf(info);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "50call4.nc", 849, 929);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 849, 930):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 849, 931):(void*)0);
        return __result_obj__0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1348, 932):(void*)0);
    }
    else if(!gComeC&&*info->p->p==118&&*(info->p->p+1)==91) {
        info->p->p+=2;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_31=(struct sNode*)come_increment_ref_count(parse_vector(info), "50call4.nc", 855, 933);
        skip_spaces_and_lf(info);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_31, "50call4.nc", 859, 934);
        ((node_31) ? node_31 = come_decrement_ref_count(node_31, ((struct sNode*)node_31)->finalize, ((struct sNode*)node_31)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 859, 935):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 859, 936):(void*)0);
        return __result_obj__0;
        ((node_31) ? node_31 = come_decrement_ref_count(node_31, ((struct sNode*)node_31)->finalize, ((struct sNode*)node_31)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1348, 937):(void*)0);
    }
    else if(!gComeC&&(info->end-info->p->p)>=strlen("`it")&&memcmp(info->p->p,"`it",strlen("`it"))==0) {
        __right_value0 = (void*)0;
        node_32=(struct sNode*)come_increment_ref_count(parse_iterator_it(info), "50call4.nc", 863, 938);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_32, "50call4.nc", 865, 939);
        ((node_32) ? node_32 = come_decrement_ref_count(node_32, ((struct sNode*)node_32)->finalize, ((struct sNode*)node_32)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 865, 940):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 865, 941):(void*)0);
        return __result_obj__0;
        ((node_32) ? node_32 = come_decrement_ref_count(node_32, ((struct sNode*)node_32)->finalize, ((struct sNode*)node_32)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1348, 942):(void*)0);
    }
    else if((xisalpha(*info->p->p)||*info->p->p==95)&&!(((*info->p->p==76||*info->p->p==108||*info->p->p==115||*info->p->p==83||*info->p->p==98||*info->p->p==66||*info->p->p==104||*info->p->p==72||*info->p->p==117||*info->p->p==85)&&*(info->p->p+1)==34)||((*info->p->p==76||*info->p->p==117||*info->p->p==85)&&*(info->p->p+1)==39)||(*info->p->p==117&&*(info->p->p+1)==56&&*(info->p->p+2)==34))) {
        head=info->p->p;
        head_sline=info->sline;
        sline_real=info->sline_real;
        info->sline_real=info->sline;
        __right_value0 = (void*)0;
        buf=(char* )come_increment_ref_count(backtrace_parse_word(info), "50call4.nc", 873, 943);
        is_type_name_=is_type_name(buf,info);
        const char* is_special_word_array[25]={ "if", "while", "for", "switch", "return", "sizeof", "offsetof", "isheap", "ispointer", "__typeof__"
                                    , "dynamic_typeof", "typeof", "gc_inc", "gc_dec", "gc_dec_nofree", "case", "_Alignof"
                                    , "_Alignas", "__alignof__", "_Atomic", "borrow", "dupe", "clone", "__builtin_offsetof", "_Generic" };
        is_special_word=charpa_contained(is_special_word_array,25,buf);
        is_portable_symbol=is_portable_libc_symbol(buf);
        define_function_pointer_flag=(_Bool)0;
        if(!is_special_word&&*info->p->p==40&&*(info->p->p+1)!=42) {
            __right_value0 = (void*)0;
            ((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 886, 946);
            if(*info->p->p==40) {
                info->p->p++;
                skip_spaces_and_lf(info);
                if(*info->p->p==42) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag=(_Bool)1;
                }
            }
            info->p->p=head;
            info->sline=head_sline;
        }
        lambda_flag=(_Bool)0;
        if(!is_special_word&&is_type_name_) {
            info->p->p=head;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            ((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 910, 947);
            __right_value0 = (void*)0;
            word2=(char* )come_increment_ref_count(backtrace_parse_word(info), "50call4.nc", 911, 948);
            if(string_operator_equals(word2,"lambda")) {
                lambda_flag=(_Bool)1;
            }
            info->p->p=head;
            info->sline=head_sline;
            (word2 = come_decrement_ref_count(word2, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 921, 949));
        }
        fun_name_with_type_name=(_Bool)0;
        if(!is_special_word) {
            info->p->p=head;
            info->sline=head_sline;
            no_output_come_code=info->no_output_come_code;
            info->no_output_come_code=(_Bool)1;
            flag=(_Bool)0;
            while(xisalpha(*info->p->p)||*info->p->p==95) {
                flag=(_Bool)1;
                __right_value0 = (void*)0;
                word2_33=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "50call4.nc", 933, 950);
                (word2_33 = come_decrement_ref_count(word2_33, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 935, 951));
            }
            while(*info->p->p==42||*info->p->p==37) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            while(*info->p->p==91&&*(info->p->p+1)==93) {
                info->p->p+=2;
                skip_spaces_and_lf(info);
            }
            if(flag&&*info->p->p==58&&*(info->p->p+1)==58) {
                info->p->p+=2;
                skip_spaces_and_lf(info);
                if(xisalpha(*info->p->p)||*info->p->p==95) {
                    fun_name_with_type_name=(_Bool)1;
                }
            }
            info->no_output_come_code=no_output_come_code;
            info->p->p=head;
            info->sline=head_sline;
        }
        call_method_generics_fun_call=(_Bool)0;
        if(!is_special_word) {
            info->p->p=head;
            info->sline=head_sline;
            if(xisalpha(*info->p->p)||*info->p->p==95) {
                __right_value0 = (void*)0;
                __dec_obj89=buf,
                buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "50call4.nc", 964, 953);
                __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 964, 952);
            }
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X0=(!is_type_name(buf,info)&&((struct sVar* )(__right_value2=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char* )(__right_value1=__builtin_string(buf,"50call4.nc",967))))))==((void*)0)&&((struct sVar* )(__right_value5=map$2char$phsVar$ph_operator_load_element(info->gv_table->mVars,((char* )(__right_value4=__builtin_string(buf,"50call4.nc",967))))))==((void*)0)&&*info->p->p==60));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 967, 984));
            come_call_finalizer(sVar_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 967, 985);
            (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 967, 986));
            come_call_finalizer(sVar_finalize, __right_value5, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 967, 987);
_conditional_value_X0;})) {
                nest_34=0;
                while(*info->p->p) {
                    if(*info->p->p==60) {
                        info->p->p++;
                        nest_34++;
                    }
                    else if(*info->p->p==62) {
                        info->p->p++;
                        if(nest_34==0) {
                            break;
                        }
                    }
                    else if(*info->p->p==10||*info->p->p==59) {
                        break;
                    }
                    else {
                        info->p->p++;
                    }
                }
                if(*info->p->p==40) {
                    call_method_generics_fun_call=(_Bool)1;
                }
            }
            info->p->p=head;
            info->sline=head_sline;
        }
        inline_asm=(_Bool)0;
        if(!is_special_word) {
            info->p->p=head;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            __dec_obj90=buf,
            buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "50call4.nc", 1004, 989);
            __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 1004, 988);
            if(string_operator_equals(buf,"asm")||string_operator_equals(buf,"__asm")||string_operator_equals(buf,"__asm__")) {
                if(*info->p->p==40) {
                    inline_asm=(_Bool)1;
                }
                else if(xisalpha(*info->p->p)||*info->p->p==95) {
                    __right_value0 = (void*)0;
                    __dec_obj91=buf,
                    buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "50call4.nc", 1011, 991);
                    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 1011, 990);
                    if(*info->p->p==40) {
                        inline_asm=(_Bool)1;
                    }
                }
            }
            info->p->p=head;
            info->sline=head_sline;
        }
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __dec_obj92=buf,
        buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "50call4.nc", 1023, 993);
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0, "50call4.nc", 1023, 992);
        skip_spaces_and_lf(info);
        if(lambda_flag) {
            info->p->p=head;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            node_35=(struct sNode*)come_increment_ref_count(parse_function(info), "50call4.nc", 1030, 994);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_35, "50call4.nc", 1032, 995);
            ((node_35) ? node_35 = come_decrement_ref_count(node_35, ((struct sNode*)node_35)->finalize, ((struct sNode*)node_35)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1032, 996):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1032, 997));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1032, 998):(void*)0);
            return __result_obj__0;
            ((node_35) ? node_35 = come_decrement_ref_count(node_35, ((struct sNode*)node_35)->finalize, ((struct sNode*)node_35)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1343, 999):(void*)0);
        }
        else if((string_operator_equals(buf,"_Static_assert")||string_operator_equals(buf,"static_assert"))&&*info->p->p==40) {
            expected_next_character(40,info);
            no_comma=info->no_comma;
            info->no_comma=(_Bool)1;
            __right_value0 = (void*)0;
            exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "50call4.nc", 1040, 1000);
            info->no_comma=no_comma;
            expected_next_character(44,info);
            __right_value0 = (void*)0;
            exp2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "50call4.nc", 1044, 1001);
            expected_next_character(41,info);
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=static_assert_node((struct sNode*)come_increment_ref_count(exp, "50call4.nc", 1047, 1002),(struct sNode*)come_increment_ref_count(exp2, "50call4.nc", 1047, 1003),info))), "50call4.nc", 1047, 1004);
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1047, 1005):(void*)0);
            ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1047, 1006):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1047, 1007));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1047, 1008):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1047, 1009):(void*)0);
            return __result_obj__0;
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1343, 1010):(void*)0);
            ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1343, 1011):(void*)0);
        }
        else if(string_operator_equals(buf,"__attribute__")&&*info->p->p==40) {
            __right_value0 = (void*)0;
            attr=(char* )come_increment_ref_count(parse_inner_attribute(info), "50call4.nc", 1051, 1012);
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1052, 1016, "struct sNode");
            _inf_obj_value5=(struct sInnerAttribute*)come_increment_ref_count(((struct sInnerAttribute*)(__right_value1=sInnerAttribute_initialize((struct sInnerAttribute* )come_increment_ref_count((struct sInnerAttribute *)come_calloc(1, sizeof(struct sInnerAttribute )*(1), "50call4.nc", 1052, 1013, "struct sInnerAttribute* "), "50call4.nc", 1052, 1014),(char* )come_increment_ref_count(attr, "50call4.nc", 1052, 1015),info))), "50call4.nc", 1052, 1017);
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sInnerAttribute_finalize;
            _inf_value5->clone=(void*)sInnerAttribute_clone;
            _inf_value5->compile=(void*)sInnerAttribute_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sInnerAttribute_kind;
            _inf_value5->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value5)), "50call4.nc", 1052, 1027);
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1052, 1028));
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1052, 1029));
            come_call_finalizer(sInnerAttribute_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1052, 1030);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1052, 1031):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1052, 1032):(void*)0);
            return __result_obj__0;
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1343, 1033));
        }
        else if(string_operator_equals(buf,"__c__")&&*info->p->p==123) {
            __right_value0 = (void*)0;
            block_text=(char* )come_increment_ref_count(skip_block(info,(_Bool)0), "50call4.nc", 1056, 1034);
            contents=(char* )come_increment_ref_count(block_text, "50call4.nc", 1057, 1035);
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1058, 1039, "struct sNode");
            _inf_obj_value6=(struct sCSourceNode*)come_increment_ref_count(((struct sCSourceNode*)(__right_value1=sCSourceNode_initialize((struct sCSourceNode* )come_increment_ref_count((struct sCSourceNode *)come_calloc(1, sizeof(struct sCSourceNode )*(1), "50call4.nc", 1058, 1036, "struct sCSourceNode* "), "50call4.nc", 1058, 1037),(char* )come_increment_ref_count(contents, "50call4.nc", 1058, 1038),info))), "50call4.nc", 1058, 1040);
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sCSourceNode_finalize;
            _inf_value6->clone=(void*)sCSourceNode_clone;
            _inf_value6->compile=(void*)sCSourceNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sCSourceNode_kind;
            _inf_value6->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)), "50call4.nc", 1058, 1050);
            (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1058, 1051));
            (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1058, 1052));
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1058, 1053));
            come_call_finalizer(sCSourceNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1058, 1054);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1058, 1055):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1058, 1056):(void*)0);
            return __result_obj__0;
            (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1343, 1057));
            (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1343, 1058));
        }
        else if(string_operator_equals(buf,"extern")) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_function(info))), "50call4.nc", 1061, 1059);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1061, 1060));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1061, 1061):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1061, 1062):(void*)0);
            return __result_obj__0;
        }
        else if(!gComeC&&(string_operator_equals(buf,"string")||string_operator_equals(buf,"wstring"))&&*info->p->p==40) {
            __right_value0 = (void*)0;
            node_36=(struct sNode*)come_increment_ref_count(parse_function_call(buf,info,(_Bool)0), "50call4.nc", 1064, 1063);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_36, "50call4.nc", 1066, 1064);
            ((node_36) ? node_36 = come_decrement_ref_count(node_36, ((struct sNode*)node_36)->finalize, ((struct sNode*)node_36)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1066, 1065):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1066, 1066));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1066, 1067):(void*)0);
            return __result_obj__0;
            ((node_36) ? node_36 = come_decrement_ref_count(node_36, ((struct sNode*)node_36)->finalize, ((struct sNode*)node_36)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1343, 1068):(void*)0);
        }
        else if(is_special_word) {
            __right_value0 = (void*)0;
            node_37=(struct sNode*)come_increment_ref_count(string_node_v21(buf,head,head_sline,info), "50call4.nc", 1069, 1069);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_37, "50call4.nc", 1071, 1070);
            ((node_37) ? node_37 = come_decrement_ref_count(node_37, ((struct sNode*)node_37)->finalize, ((struct sNode*)node_37)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1071, 1071):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1071, 1072));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1071, 1073):(void*)0);
            return __result_obj__0;
            ((node_37) ? node_37 = come_decrement_ref_count(node_37, ((struct sNode*)node_37)->finalize, ((struct sNode*)node_37)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1343, 1074):(void*)0);
        }
        else if(gComePthread&&string_operator_equals(buf,"come")) {
            come_block=((void*)0);
            come_block_sline=0;
            if(*info->p->p==123) {
                head_38=info->p->p;
                come_block_sline=info->sline;
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 1080, 1075));
                tail=info->p->p;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __dec_obj97=come_block,
                come_block=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "50call4.nc", 1082, 1076, "struct buffer* "), "50call4.nc", 1082, 1077)), "50call4.nc", 1082, 1079);
                come_call_finalizer(buffer_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 1082, 1078);
                len=tail-head_38;
                __right_value0 = (void*)0;
                mem=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "50call4.nc", 1084, 1080, "char*"), "50call4.nc", 1084, 1081);
                memcpy(mem,head_38,len);
                mem[len]=0;
                buffer_append_str(come_block,mem);
                buffer_append_str(come_block,"\n");
                (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1110, 1082));
            }
            else {
                head_39=info->p->p;
                come_block_sline=info->sline;
                no_output_come_code_40=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                __right_value0 = (void*)0;
                ((struct sNode*)(__right_value0=expression_v13(info,(_Bool)0)));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1095, 1083):(void*)0);
                info->no_output_come_code=no_output_come_code_40;
                tail_41=info->p->p;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __dec_obj98=come_block,
                come_block=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "50call4.nc", 1098, 1084, "struct buffer* "), "50call4.nc", 1098, 1085)), "50call4.nc", 1098, 1087);
                come_call_finalizer(buffer_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 1098, 1086);
                len_42=tail_41-head_39;
                __right_value0 = (void*)0;
                mem_43=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_42+1)), "50call4.nc", 1100, 1088, "char*"), "50call4.nc", 1100, 1089);
                memcpy(mem_43,head_39,len_42);
                mem_43[len_42]=0;
                buffer_append_str(come_block,"{");
                buffer_append_str(come_block,mem_43);
                buffer_append_str(come_block,"; }");
                buffer_append_str(come_block,"return (void*)0;\n}");
                buffer_append_str(come_block,"\n");
                (mem_43 = come_decrement_ref_count(mem_43, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1110, 1090));
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1110, 1094, "struct sNode");
            _inf_obj_value7=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value1=sComeCallNode_initialize((struct sComeCallNode* )come_increment_ref_count((struct sComeCallNode *)come_calloc(1, sizeof(struct sComeCallNode )*(1), "50call4.nc", 1110, 1091, "struct sComeCallNode* "), "50call4.nc", 1110, 1092),(struct buffer* )come_increment_ref_count(come_block, "50call4.nc", 1110, 1093),come_block_sline,info))), "50call4.nc", 1110, 1095);
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sComeCallNode_finalize;
            _inf_value7->clone=(void*)sComeCallNode_clone;
            _inf_value7->compile=(void*)sComeCallNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sComeCallNode_terminated;
            _inf_value7->kind=(void*)sComeCallNode_kind;
            _inf_value7->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            node_44=(struct sNode*)come_increment_ref_count(_inf_value7, "50call4.nc", 1110, 1104);
            come_call_finalizer(sComeCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1110, 1105);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_44, "50call4.nc", 1112, 1106);
            come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1112, 1107);
            ((node_44) ? node_44 = come_decrement_ref_count(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1112, 1108):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1112, 1109));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1112, 1110):(void*)0);
            return __result_obj__0;
            come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1343, 1111);
            ((node_44) ? node_44 = come_decrement_ref_count(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1343, 1112):(void*)0);
        }
        else if(gComePthread&&string_operator_equals(buf,"come_join")&&*info->p->p==40) {
            expected_next_character(40,info);
            __right_value0 = (void*)0;
            node_45=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "50call4.nc", 1116, 1113);
            expected_next_character(41,info);
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1119, 1117, "struct sNode");
            _inf_obj_value8=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value1=sComeJoinNode_initialize((struct sComeJoinNode* )come_increment_ref_count((struct sComeJoinNode *)come_calloc(1, sizeof(struct sComeJoinNode )*(1), "50call4.nc", 1119, 1114, "struct sComeJoinNode* "), "50call4.nc", 1119, 1115),(struct sNode*)come_increment_ref_count(node_45, "50call4.nc", 1119, 1116),info))), "50call4.nc", 1119, 1118);
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sComeJoinNode_finalize;
            _inf_value8->clone=(void*)sComeJoinNode_clone;
            _inf_value8->compile=(void*)sComeJoinNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sComeJoinNode_terminated;
            _inf_value8->kind=(void*)sComeJoinNode_kind;
            _inf_value8->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)), "50call4.nc", 1119, 1127);
            ((node_45) ? node_45 = come_decrement_ref_count(node_45, ((struct sNode*)node_45)->finalize, ((struct sNode*)node_45)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1119, 1128):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1119, 1129));
            come_call_finalizer(sComeJoinNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1119, 1130);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1119, 1131):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1119, 1132):(void*)0);
            return __result_obj__0;
            ((node_45) ? node_45 = come_decrement_ref_count(node_45, ((struct sNode*)node_45)->finalize, ((struct sNode*)node_45)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1343, 1133):(void*)0);
        }
        else if(gComePthread&&string_operator_equals(buf,"come_poll")&&(*info->p->p==40||*info->p->p==123)) {
            time_out=1;
            if(*info->p->p==40) {
                info->p->p++;
                while(xisdigit(*info->p->p)) {
                    time_out=time_out*10+(*info->p->p-48);
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "50call4.nc", 1135, 1134, "struct list$1sNode$ph*"), "50call4.nc", 1135, 1135)), "50call4.nc", 1135, 1136);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "50call4.nc", 1136, 1137, "struct list$1sBlock$ph*"), "50call4.nc", 1136, 1141)), "50call4.nc", 1136, 1142);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            else_block=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "50call4.nc", 1137, 1143, "struct sBlock* "), "50call4.nc", 1137, 1144)), "50call4.nc", 1137, 1145);
            while(1) {
                if(((info->end-info->p->p)>=strlen("else"))&&memcmp(info->p->p,"else",strlen("else"))==0) {
                    info->p->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __right_value0 = (void*)0;
                    __dec_obj103=else_block,
                    else_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "50call4.nc", 1142, 1147);
                    come_call_finalizer(sBlock_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc", 1142, 1146);
                    if(*info->p->p==125) {
                        break;
                    }
                }
                else {
                    __right_value0 = (void*)0;
                    var_name=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "50call4.nc", 1148, 1148);
                    __right_value0 = (void*)0;
                    block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "50call4.nc", 1149, 1149);
                    list$1sNode$ph_add(vars,(struct sNode*)come_increment_ref_count(var_name, "50call4.nc", 1150, 1150));
                    list$1sBlock$ph_add(blocks,(struct sBlock* )come_increment_ref_count(block, "50call4.nc", 1151, 1165));
                    if(*info->p->p==125) {
                        ((var_name) ? var_name = come_decrement_ref_count(var_name, ((struct sNode*)var_name)->finalize, ((struct sNode*)var_name)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1153, 1166):(void*)0);
                        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1153, 1167);
                        break;
                    }
                    ((var_name) ? var_name = come_decrement_ref_count(var_name, ((struct sNode*)var_name)->finalize, ((struct sNode*)var_name)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1156, 1168):(void*)0);
                    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1156, 1169);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1160, 1175, "struct sNode");
            _inf_obj_value9=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value1=sComePollNode_initialize((struct sComePollNode* )come_increment_ref_count((struct sComePollNode *)come_calloc(1, sizeof(struct sComePollNode )*(1), "50call4.nc", 1160, 1170, "struct sComePollNode* "), "50call4.nc", 1160, 1171),(struct list$1sNode$ph*)come_increment_ref_count(vars, "50call4.nc", 1160, 1172),(struct list$1sBlock$ph*)come_increment_ref_count(blocks, "50call4.nc", 1160, 1173),(struct sBlock* )come_increment_ref_count(else_block, "50call4.nc", 1160, 1174),time_out,info))), "50call4.nc", 1160, 1176);
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sComePollNode_finalize;
            _inf_value9->clone=(void*)sComePollNode_clone;
            _inf_value9->compile=(void*)sComePollNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sComePollNode_terminated;
            _inf_value9->kind=(void*)sComePollNode_kind;
            _inf_value9->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)), "50call4.nc", 1160, 1352);
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1160, 1353);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1160, 1354);
            come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1160, 1355);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1160, 1356));
            come_call_finalizer(sComePollNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1160, 1357);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1160, 1358):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1160, 1359):(void*)0);
            return __result_obj__0;
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1343, 1360);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1343, 1361);
            come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1343, 1362);
        }
        else if(string_operator_equals(buf,"__func__")||string_operator_equals(buf,"__FUNCTION__")) {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1165, 1365, "struct sNode");
            _inf_obj_value10=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value1=sFuncNode_initialize((struct sFuncNode* )come_increment_ref_count((struct sFuncNode *)come_calloc(1, sizeof(struct sFuncNode )*(1), "50call4.nc", 1165, 1363, "struct sFuncNode* "), "50call4.nc", 1165, 1364),info))), "50call4.nc", 1165, 1366);
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFuncNode_finalize;
            _inf_value10->clone=(void*)sFuncNode_clone;
            _inf_value10->compile=(void*)sFuncNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFuncNode_kind;
            _inf_value10->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)), "50call4.nc", 1165, 1373);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1165, 1374));
            come_call_finalizer(sFuncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1165, 1375);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1165, 1376):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1165, 1377):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(buf,"__line__")||string_operator_equals(buf,"__LINE__")) {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1169, 1380, "struct sNode");
            _inf_obj_value11=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value1=sLineNode_initialize((struct sLineNode* )come_increment_ref_count((struct sLineNode *)come_calloc(1, sizeof(struct sLineNode )*(1), "50call4.nc", 1169, 1378, "struct sLineNode* "), "50call4.nc", 1169, 1379),info))), "50call4.nc", 1169, 1381);
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sLineNode_finalize;
            _inf_value11->clone=(void*)sLineNode_clone;
            _inf_value11->compile=(void*)sLineNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sLineNode_kind;
            _inf_value11->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)), "50call4.nc", 1169, 1388);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1169, 1389));
            come_call_finalizer(sLineNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1169, 1390);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1169, 1391):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1169, 1392):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(buf,"__sname__")) {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1173, 1395, "struct sNode");
            _inf_obj_value12=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value1=sSNameNode_initialize((struct sSNameNode* )come_increment_ref_count((struct sSNameNode *)come_calloc(1, sizeof(struct sSNameNode )*(1), "50call4.nc", 1173, 1393, "struct sSNameNode* "), "50call4.nc", 1173, 1394),info))), "50call4.nc", 1173, 1396);
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sSNameNode_finalize;
            _inf_value12->clone=(void*)sSNameNode_clone;
            _inf_value12->compile=(void*)sSNameNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sSNameNode_kind;
            _inf_value12->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)), "50call4.nc", 1173, 1403);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1173, 1404));
            come_call_finalizer(sSNameNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1173, 1405);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1173, 1406):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1173, 1407):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(buf,"__caller_func__")) {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1177, 1410, "struct sNode");
            _inf_obj_value13=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value1=sCallerFuncNode_initialize((struct sCallerFuncNode* )come_increment_ref_count((struct sCallerFuncNode *)come_calloc(1, sizeof(struct sCallerFuncNode )*(1), "50call4.nc", 1177, 1408, "struct sCallerFuncNode* "), "50call4.nc", 1177, 1409),info))), "50call4.nc", 1177, 1411);
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value13->clone=(void*)sCallerFuncNode_clone;
            _inf_value13->compile=(void*)sCallerFuncNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sCallerFuncNode_kind;
            _inf_value13->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)), "50call4.nc", 1177, 1418);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1177, 1419));
            come_call_finalizer(sCallerFuncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1177, 1420);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1177, 1421):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1177, 1422):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(buf,"__caller_line__")) {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1181, 1425, "struct sNode");
            _inf_obj_value14=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value1=sCallerLineNode_initialize((struct sCallerLineNode* )come_increment_ref_count((struct sCallerLineNode *)come_calloc(1, sizeof(struct sCallerLineNode )*(1), "50call4.nc", 1181, 1423, "struct sCallerLineNode* "), "50call4.nc", 1181, 1424),info))), "50call4.nc", 1181, 1426);
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sCallerLineNode_finalize;
            _inf_value14->clone=(void*)sCallerLineNode_clone;
            _inf_value14->compile=(void*)sCallerLineNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sCallerLineNode_kind;
            _inf_value14->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)), "50call4.nc", 1181, 1433);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1181, 1434));
            come_call_finalizer(sCallerLineNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1181, 1435);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1181, 1436):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1181, 1437):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(buf,"__caller_sname__")) {
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1185, 1440, "struct sNode");
            _inf_obj_value15=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value1=sCallerSNameNode_initialize((struct sCallerSNameNode* )come_increment_ref_count((struct sCallerSNameNode *)come_calloc(1, sizeof(struct sCallerSNameNode )*(1), "50call4.nc", 1185, 1438, "struct sCallerSNameNode* "), "50call4.nc", 1185, 1439),info))), "50call4.nc", 1185, 1441);
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value15->clone=(void*)sCallerSNameNode_clone;
            _inf_value15->compile=(void*)sCallerSNameNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sCallerSNameNode_kind;
            _inf_value15->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value15)), "50call4.nc", 1185, 1448);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1185, 1449));
            come_call_finalizer(sCallerSNameNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1185, 1450);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1185, 1451):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1185, 1452):(void*)0);
            return __result_obj__0;
        }
        else if(info->va_arg&&is_type_name(buf,info)) {
            info->p->p=head;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            multiple_assign_var1=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type=(struct sType* )come_increment_ref_count(multiple_assign_var1->v1, "50call4.nc", 1190, 1453);
            name=(char* )come_increment_ref_count(multiple_assign_var1->v2, "50call4.nc", 1190, 1454);
            err=multiple_assign_var1->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1190, 1455);
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1192, 1458, "struct sNode");
            _inf_obj_value16=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value1=sVarArgTypeName_initialize((struct sVarArgTypeName* )come_increment_ref_count((struct sVarArgTypeName *)come_calloc(1, sizeof(struct sVarArgTypeName )*(1), "50call4.nc", 1192, 1456, "struct sVarArgTypeName* "), "50call4.nc", 1192, 1457),type,info))), "50call4.nc", 1192, 1459);
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value16->clone=(void*)sVarArgTypeName_clone;
            _inf_value16->compile=(void*)sVarArgTypeName_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sVarArgTypeName_kind;
            _inf_value16->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value16)), "50call4.nc", 1192, 1468);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1192, 1469);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1192, 1470));
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1192, 1471));
            come_call_finalizer(sVarArgTypeName_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1192, 1472);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1192, 1473):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1192, 1474):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1343, 1475);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1343, 1476));
        }
        else if(string_operator_equals(buf,"sizeof")||string_operator_equals(buf,"_Alignof")||string_operator_equals(buf,"_Alignas")||string_operator_equals(buf,"__alignof__")||string_operator_equals(buf,"offsetof")||string_operator_equals(buf,"__builtin_offsetof")||string_operator_equals(buf,"_Generic")) {
            __right_value0 = (void*)0;
            node_63=(struct sNode*)come_increment_ref_count(string_node_v21(buf,head,head_sline,info), "50call4.nc", 1195, 1477);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_63, "50call4.nc", 1197, 1478);
            ((node_63) ? node_63 = come_decrement_ref_count(node_63, ((struct sNode*)node_63)->finalize, ((struct sNode*)node_63)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1197, 1479):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1197, 1480));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1197, 1481):(void*)0);
            return __result_obj__0;
            ((node_63) ? node_63 = come_decrement_ref_count(node_63, ((struct sNode*)node_63)->finalize, ((struct sNode*)node_63)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1343, 1482):(void*)0);
        }
        else if(inline_asm) {
            volatile_=(_Bool)0;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            buf2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "50call4.nc", 1201, 1483, "struct buffer* "), "50call4.nc", 1201, 1484)), "50call4.nc", 1201, 1485);
            if(*info->p->p!=40) {
                __right_value0 = (void*)0;
                word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "50call4.nc", 1204, 1486);
                if(string_operator_equals(word,"volatile")) {
                    volatile_=(_Bool)1;
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1210, 1487));
            }
            expected_next_character(40,info);
            buffer_append_str(buf2,"(\n");
            dquort=(_Bool)0;
            while((_Bool)1) {
                if(dquort) {
                    if(*info->p->p==92) {
                        buffer_append_char(buf2,*info->p->p);
                        info->p->p++;
                        if(*info->p->p==0) {
                            err_msg(info,"invalid source end");
                                                        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "50call4.nc", 1221, 1488);
                            come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1221, 1489);
                            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1221, 1490));
                            neo_current_frame = fr.prev;
                            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1221, 1491):(void*)0);
                            return __result_obj__0;
                        }
                        buffer_append_char(buf2,*info->p->p);
                        info->p->p++;
                    }
                    else if(*info->p->p==34) {
                        buffer_append_char(buf2,*info->p->p);
                        info->p->p++;
                        buffer_append_char(buf2,10);
                        skip_spaces_and_lf(info);
                        dquort=(_Bool)0;
                    }
                    else {
                        buffer_append_char(buf2,*info->p->p);
                        info->p->p++;
                    }
                }
                else if(*info->p->p==34) {
                    dquort=(_Bool)1;
                    for(i=0                    ;i<info->block_level+1;i++){
                        buffer_append_str(buf2,"    ");
                    }
                    buffer_append_char(buf2,*info->p->p);
                    info->p->p++;
                }
                else if(*info->p->p==40) {
                    buffer_append_char(buf2,40);
                    info->p->p++;
                    __right_value0 = (void*)0;
                    exp_64=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "50call4.nc", 1249, 1492);
                    Value=node_compile(exp_64,info);
                    if(!Value) {
                                                __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "50call4.nc", 1251, 1493);
                        ((exp_64) ? exp_64 = come_decrement_ref_count(exp_64, ((struct sNode*)exp_64)->finalize, ((struct sNode*)exp_64)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1251, 1494):(void*)0);
                        come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1251, 1495);
                        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1251, 1496));
                        neo_current_frame = fr.prev;
                        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1251, 1497):(void*)0);
                        return __result_obj__0;
                    }
                    __right_value0 = (void*)0;
                    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "50call4.nc", 1253, 1498);
                    buffer_append_str(buf2,come_value->c_value);
                    expected_next_character(41,info);
                    buffer_append_char(buf2,41);
                    ((exp_64) ? exp_64 = come_decrement_ref_count(exp_64, ((struct sNode*)exp_64)->finalize, ((struct sNode*)exp_64)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1297, 1499):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1297, 1500);
                }
                else if(*info->p->p==41) {
                    for(i_65=0                    ;i_65<info->block_level;i_65++){
                        buffer_append_str(buf2,"    ");
                    }
                    buffer_append_char(buf2,41);
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(*info->p->p==10) {
                    info->sline++;
                    buffer_append_char(buf2,*info->p->p);
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p->p==58) {
                    for(i_66=0                    ;i_66<info->block_level+1;i_66++){
                        buffer_append_str(buf2,"    ");
                    }
                    buffer_append_char(buf2,*info->p->p);
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p->p==44) {
                    for(i_67=0                    ;i_67<info->block_level+1;i_67++){
                        buffer_append_str(buf2,"    ");
                    }
                    buffer_append_char(buf2,*info->p->p);
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p->p==0) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    err_msg(info,"unexpected character(%c)",*info->p->p);
                    exit(2);
                }
            }
            skip_spaces_and_lf(info);
            info->sline_real=sline_real;
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "50call4.nc", 1301, 1504, "struct sNode");
            _inf_obj_value17=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value2=sInlineAssembler_initialize((struct sInlineAssembler* )come_increment_ref_count((struct sInlineAssembler *)come_calloc(1, sizeof(struct sInlineAssembler )*(1), "50call4.nc", 1301, 1501, "struct sInlineAssembler* "), "50call4.nc", 1301, 1502),(char* )come_increment_ref_count(buffer_to_string(buf2), "50call4.nc", 1301, 1503),volatile_,info))), "50call4.nc", 1301, 1505);
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sInlineAssembler_finalize;
            _inf_value17->clone=(void*)sInlineAssembler_clone;
            _inf_value17->compile=(void*)sInlineAssembler_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sInlineAssembler_kind;
            _inf_value17->left_value=(void*)sNodeBase_left_value;
            __right_value3 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value17)), "50call4.nc", 1301, 1515);
            come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1301, 1516);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1301, 1517));
            come_call_finalizer(sInlineAssembler_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1301, 1518);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1301, 1519):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1301, 1520):(void*)0);
            return __result_obj__0;
            come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1343, 1521);
        }
        else if(fun_name_with_type_name) {
            info->p->p=head;
            info->sline=head_sline;
            __right_value0 = (void*)0;
            multiple_assign_var2=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_68=(struct sType* )come_increment_ref_count(multiple_assign_var2->v1, "50call4.nc", 1306, 1522);
            name_69=(char* )come_increment_ref_count(multiple_assign_var2->v2, "50call4.nc", 1306, 1523);
            err_70=multiple_assign_var2->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "50call4.nc}", 1306, 1524);
            expected_next_character(58,info);
            expected_next_character(58,info);
            __right_value0 = (void*)0;
            base_fun_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "50call4.nc", 1309, 1525);
            __right_value0 = (void*)0;
            fun_name=(char* )come_increment_ref_count(create_method_name(type_68,(_Bool)0,base_fun_name,info,(_Bool)1), "50call4.nc", 1310, 1526);
            __right_value0 = (void*)0;
            node_71=(struct sNode*)come_increment_ref_count(parse_function_call(fun_name,info,(_Bool)0), "50call4.nc", 1311, 1527);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_71, "50call4.nc", 1313, 1528);
            come_call_finalizer(sType_finalize, type_68, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1313, 1529);
            (name_69 = come_decrement_ref_count(name_69, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1313, 1530));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1313, 1531));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1313, 1532));
            ((node_71) ? node_71 = come_decrement_ref_count(node_71, ((struct sNode*)node_71)->finalize, ((struct sNode*)node_71)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1313, 1533):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1313, 1534));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1313, 1535):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_68, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1343, 1536);
            (name_69 = come_decrement_ref_count(name_69, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1343, 1537));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1343, 1538));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1343, 1539));
            ((node_71) ? node_71 = come_decrement_ref_count(node_71, ((struct sNode*)node_71)->finalize, ((struct sNode*)node_71)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1343, 1540):(void*)0);
        }
        else if(*info->p->p==58&&*(info->p->p+1)==58) {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun_name_72=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "50call4.nc", 1318, 1541, "struct buffer* "), "50call4.nc", 1318, 1542)), "50call4.nc", 1318, 1543);
            buffer_append_str(fun_name_72,buf);
            buffer_append_str(fun_name_72,"_");
            __right_value0 = (void*)0;
            buf2_73=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "50call4.nc", 1321, 1544);
            buffer_append_str(fun_name_72,buf2_73);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            node_74=(struct sNode*)come_increment_ref_count(parse_function_call(((char* )(__right_value0=buffer_to_string(fun_name_72))),info,(_Bool)0), "50call4.nc", 1323, 1545);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "50call4.nc", 1323, 1546));
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_74, "50call4.nc", 1325, 1547);
            come_call_finalizer(buffer_finalize, fun_name_72, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1325, 1548);
            (buf2_73 = come_decrement_ref_count(buf2_73, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1325, 1549));
            ((node_74) ? node_74 = come_decrement_ref_count(node_74, ((struct sNode*)node_74)->finalize, ((struct sNode*)node_74)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1325, 1550):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1325, 1551));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1325, 1552):(void*)0);
            return __result_obj__0;
            come_call_finalizer(buffer_finalize, fun_name_72, (void*)0, (void*)0, 0, 0, 0, (void*)0, "50call4.nc}", 1343, 1553);
            (buf2_73 = come_decrement_ref_count(buf2_73, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1343, 1554));
            ((node_74) ? node_74 = come_decrement_ref_count(node_74, ((struct sNode*)node_74)->finalize, ((struct sNode*)node_74)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1343, 1555):(void*)0);
        }
        else if(call_method_generics_fun_call) {
            __right_value0 = (void*)0;
            node_75=(struct sNode*)come_increment_ref_count(parse_function_call(buf,info,(_Bool)0), "50call4.nc", 1328, 1556);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_75, "50call4.nc", 1330, 1557);
            ((node_75) ? node_75 = come_decrement_ref_count(node_75, ((struct sNode*)node_75)->finalize, ((struct sNode*)node_75)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1330, 1558):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1330, 1559));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1330, 1560):(void*)0);
            return __result_obj__0;
            ((node_75) ? node_75 = come_decrement_ref_count(node_75, ((struct sNode*)node_75)->finalize, ((struct sNode*)node_75)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1343, 1561):(void*)0);
        }
        else if(!is_special_word&&*info->p->p==40&&!is_type_name_||(is_portable_symbol&&*info->p->p==40)) {
            __right_value0 = (void*)0;
            node_76=(struct sNode*)come_increment_ref_count(parse_function_call(buf,info,(_Bool)0), "50call4.nc", 1334, 1562);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_76, "50call4.nc", 1336, 1563);
            ((node_76) ? node_76 = come_decrement_ref_count(node_76, ((struct sNode*)node_76)->finalize, ((struct sNode*)node_76)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1336, 1564):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1336, 1565));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1336, 1566):(void*)0);
            return __result_obj__0;
            ((node_76) ? node_76 = come_decrement_ref_count(node_76, ((struct sNode*)node_76)->finalize, ((struct sNode*)node_76)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1343, 1567):(void*)0);
        }
        else {
            __right_value0 = (void*)0;
            node_77=(struct sNode*)come_increment_ref_count(string_node_v21(buf,head,head_sline,info), "50call4.nc", 1339, 1568);
            info->sline_real=sline_real;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_77, "50call4.nc", 1341, 1569);
            ((node_77) ? node_77 = come_decrement_ref_count(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1341, 1570):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1341, 1571));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1341, 1572):(void*)0);
            return __result_obj__0;
            ((node_77) ? node_77 = come_decrement_ref_count(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 0,(void*)0, "50call4.nc", 1343, 1573):(void*)0);
        }
        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "50call4.nc", 1348, 1574));
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=expression_node_v97(info))), "50call4.nc", 1345, 1575);
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "50call4.nc", 1345, 1576):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1345, 1577):(void*)0);
        return __result_obj__0;
    }
    err_msg(info,"unexpected operator(%c)",*info->p->p);
    exit(2);
        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "50call4.nc", 1351, 1578);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "50call4.nc", 1351, 1579):(void*)0);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 944);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 945));
    }
                neo_current_frame = fr.prev;
}

static struct sVar*  map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sVar*  default_value  ;
    struct sVar*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sVar* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 954);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 955);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 956);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 957);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 958);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 959);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 960);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 961);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 962);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 963);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 964);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 965);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 966);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 967);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 968);
    return __result_obj__0;
}

static struct sVar*  map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_operator_load_element"; neo_current_frame = &fr;
    struct sVar*  default_value  ;
    struct sVar*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sVar* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 969);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 970);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 971);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 972);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 973);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 974);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 975);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 976);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 977);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 978);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 979);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 980);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 981);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 982);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 983);
    return __result_obj__0;
}

static struct sInnerAttribute* sInnerAttribute_clone(struct sInnerAttribute* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_clone"; neo_current_frame = &fr;
    struct sInnerAttribute* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sInnerAttribute*  result  ;
    char*  __dec_obj93  ;
    char*  __dec_obj94  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sInnerAttribute* )come_increment_ref_count((struct sInnerAttribute *)come_calloc(1, sizeof(struct sInnerAttribute )*(1), "sInnerAttribute_clone", 5, 1018, "struct sInnerAttribute* "), "sInnerAttribute_clone", 5, 1019);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj93=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sInnerAttribute_clone", 7, 1020, "char* "), "sInnerAttribute_clone", 7, 1022);
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0, "sInnerAttribute_clone", 7, 1021);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->attr!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj94=result->attr,
        result->attr=(char* )come_increment_ref_count((char* )come_memdup(self->attr, "sInnerAttribute_clone", 9, 1023, "char* "), "sInnerAttribute_clone", 9, 1025);
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0, "sInnerAttribute_clone", 9, 1024);
    }
        __result_obj__0 = result;
    come_call_finalizer(sInnerAttribute_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sInnerAttribute_clone}", 10, 1026);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCSourceNode* sCSourceNode_clone(struct sCSourceNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_clone"; neo_current_frame = &fr;
    struct sCSourceNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCSourceNode*  result  ;
    char*  __dec_obj95  ;
    char*  __dec_obj96  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCSourceNode* )come_increment_ref_count((struct sCSourceNode *)come_calloc(1, sizeof(struct sCSourceNode )*(1), "sCSourceNode_clone", 5, 1041, "struct sCSourceNode* "), "sCSourceNode_clone", 5, 1042);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj95=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCSourceNode_clone", 7, 1043, "char* "), "sCSourceNode_clone", 7, 1045);
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0, "sCSourceNode_clone", 7, 1044);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->contents!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj96=result->contents,
        result->contents=(char* )come_increment_ref_count((char* )come_memdup(self->contents, "sCSourceNode_clone", 9, 1046, "char* "), "sCSourceNode_clone", 9, 1048);
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0, "sCSourceNode_clone", 9, 1047);
    }
        __result_obj__0 = result;
    come_call_finalizer(sCSourceNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCSourceNode_clone}", 10, 1049);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_clone"; neo_current_frame = &fr;
    struct sComeCallNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sComeCallNode*  result  ;
    char*  __dec_obj99  ;
    struct buffer*  __dec_obj100  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sComeCallNode* )come_increment_ref_count((struct sComeCallNode *)come_calloc(1, sizeof(struct sComeCallNode )*(1), "sComeCallNode_clone", 5, 1096, "struct sComeCallNode* "), "sComeCallNode_clone", 5, 1097);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj99=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sComeCallNode_clone", 7, 1098, "char* "), "sComeCallNode_clone", 7, 1100);
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0, "sComeCallNode_clone", 7, 1099);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->come_block!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj100=result->come_block,
        result->come_block=(struct buffer* )come_increment_ref_count(buffer_clone(self->come_block), "sComeCallNode_clone", 9, 1102);
        come_call_finalizer(buffer_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sComeCallNode_clone", 9, 1101);
    }
    if(self!=((void*)0)) {
        result->come_block_sline=self->come_block_sline;
    }
        __result_obj__0 = result;
    come_call_finalizer(sComeCallNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sComeCallNode_clone}", 11, 1103);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_clone"; neo_current_frame = &fr;
    struct sComeJoinNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sComeJoinNode*  result  ;
    char*  __dec_obj101  ;
    struct sNode* __dec_obj102;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sComeJoinNode* )come_increment_ref_count((struct sComeJoinNode *)come_calloc(1, sizeof(struct sComeJoinNode )*(1), "sComeJoinNode_clone", 5, 1119, "struct sComeJoinNode* "), "sComeJoinNode_clone", 5, 1120);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj101=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sComeJoinNode_clone", 7, 1121, "char* "), "sComeJoinNode_clone", 7, 1123);
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0, "sComeJoinNode_clone", 7, 1122);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj102=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sComeJoinNode_clone", 9, 1125);
        (__dec_obj102 ? __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0, (void*)0, "sComeJoinNode_clone", 9, 1124) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sComeJoinNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sComeJoinNode_clone}", 10, 1126);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_initialize"; neo_current_frame = &fr;
    struct list$1sBlock$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sBlock$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 1138);
    come_call_finalizer(list$1sBlock$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 1139);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 1140);
    return __result_obj__0;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_add"; neo_current_frame = &fr;
    struct list$1sBlock$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sBlock$ph* litem;
    struct sBlock*  __dec_obj104  ;
    struct list_item$1sBlock$ph* litem_46;
    struct sBlock*  __dec_obj105  ;
    struct list_item$1sBlock$ph* litem_47;
    struct sBlock*  __dec_obj106  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 1151);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/neo-c.h", 1534, 1152, "struct list_item$1sBlock$ph*"))), "/usr/local/include/neo-c.h", 1534, 1153);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj104=litem->item,
        litem->item=(struct sBlock* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 1155);
        come_call_finalizer(sBlock_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 1154);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_46=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/neo-c.h", 1544, 1156, "struct list_item$1sBlock$ph*"))), "/usr/local/include/neo-c.h", 1544, 1157);
        litem_46->prev=self->head;
        litem_46->next=((void*)0);
        __dec_obj105=litem_46->item,
        litem_46->item=(struct sBlock* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 1159);
        come_call_finalizer(sBlock_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 1158);
        self->tail=litem_46;
        self->head->next=litem_46;
    }
    else {
        __right_value0 = (void*)0;
        litem_47=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/neo-c.h", 1554, 1160, "struct list_item$1sBlock$ph*"))), "/usr/local/include/neo-c.h", 1554, 1161);
        litem_47->prev=self->tail;
        litem_47->next=((void*)0);
        __dec_obj106=litem_47->item,
        litem_47->item=(struct sBlock* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 1163);
        come_call_finalizer(sBlock_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 1162);
        self->tail->next=litem_47;
        self->tail=litem_47;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 1164);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_clone"; neo_current_frame = &fr;
    struct sComePollNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sComePollNode*  result  ;
    char*  __dec_obj107  ;
    struct list$1sNode$ph* __dec_obj108;
    struct list$1sBlock$ph* __dec_obj121;
    struct sBlock*  __dec_obj122  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sComePollNode* )come_increment_ref_count((struct sComePollNode *)come_calloc(1, sizeof(struct sComePollNode )*(1), "sComePollNode_clone", 5, 1177, "struct sComePollNode* "), "sComePollNode_clone", 5, 1178);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj107=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sComePollNode_clone", 7, 1179, "char* "), "sComePollNode_clone", 7, 1181);
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0, "sComePollNode_clone", 7, 1180);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->vars!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj108=result->vars,
        result->vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->vars), "sComePollNode_clone", 9, 1183);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sComePollNode_clone", 9, 1182);
    }
    if(self!=((void*)0)&&self->blocks!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj121=result->blocks,
        result->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->blocks), "sComePollNode_clone", 10, 1348);
        come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sComePollNode_clone", 10, 1347);
    }
    if(self!=((void*)0)&&self->else_block!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj122=result->else_block,
        result->else_block=(struct sBlock* )come_increment_ref_count(sBlock_clone(self->else_block), "sComePollNode_clone", 11, 1350);
        come_call_finalizer(sBlock_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sComePollNode_clone", 11, 1349);
    }
    if(self!=((void*)0)) {
        result->time_out=self->time_out;
    }
        __result_obj__0 = result;
    come_call_finalizer(sComePollNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sComePollNode_clone}", 13, 1351);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph$p_clone"; neo_current_frame = &fr;
    struct list$1sBlock$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sBlock$ph* result;
    struct list_item$1sBlock$ph* it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sBlock$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 1184);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 1185);
        return __result_obj__0;
    }
    result=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "/usr/local/include/neo-c.h", 1513, 1186, "struct list$1sBlock$ph*"), "/usr/local/include/neo-c.h", 1513, 1187)), "/usr/local/include/neo-c.h", 1513, 1188);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sBlock$ph_add(result,(struct sBlock* )come_increment_ref_count(sBlock_clone(it->item), "/usr/local/include/neo-c.h", 1518, 1342));
        }
        else {
            __right_value0 = (void*)0;
            list$1sBlock$ph_add(result,(struct sBlock* )come_increment_ref_count(sBlock_clone(it->item), "/usr/local/include/neo-c.h", 1521, 1343));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sBlock$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 1344);
    come_call_finalizer(list$1sBlock$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 1345);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 1346);
    return __result_obj__0;
}

static struct sBlock*  sBlock_clone(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_clone"; neo_current_frame = &fr;
    struct sBlock*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sBlock*  result  ;
    struct list$1sNode$ph* __dec_obj109;
    struct sVarTable*  __dec_obj120  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct sBlock* )come_increment_ref_count((void*)0, "sBlock_clone", 4, 1189);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 4, 1190);
        return __result_obj__0;
    }
    result=(struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "sBlock_clone", 5, 1191, "struct sBlock* "), "sBlock_clone", 5, 1192);
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj109=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mNodes), "sBlock_clone", 6, 1204);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 6, 1203);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj120=result->mVarTable,
        result->mVarTable=(struct sVarTable* )come_increment_ref_count(sVarTable_clone(self->mVarTable), "sBlock_clone", 7, 1338);
        come_call_finalizer(sVarTable_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 7, 1337);
    }
    if(self!=((void*)0)) {
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(result, "sBlock_clone", 9, 1339);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 1340);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 1341);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_clone"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* result;
    struct list_item$1sNode$ph* it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 1193);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 1194);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1513, 1195, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1513, 1196)), "/usr/local/include/neo-c.h", 1513, 1197);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1518, 1198));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1521, 1199));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 1200);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 1201);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 1202);
    return __result_obj__0;
}

static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_clone"; neo_current_frame = &fr;
    struct sVarTable*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVarTable*  result  ;
    struct map$2char$phsVar$ph* __dec_obj119;
    if(self==(void*)0) {
                __result_obj__0 = (struct sVarTable* )come_increment_ref_count((void*)0, "sVarTable_clone", 4, 1205);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 4, 1206);
        return __result_obj__0;
    }
    result=(struct sVarTable* )come_increment_ref_count((struct sVarTable *)come_calloc(1, sizeof(struct sVarTable )*(1), "sVarTable_clone", 5, 1207, "struct sVarTable* "), "sVarTable_clone", 5, 1208);
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj119=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_clone(self->mVars), "sVarTable_clone", 6, 1333);
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarTable_clone", 6, 1332);
    }
    if(self!=((void*)0)) {
        result->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result->mParent=self->mParent;
    }
        __result_obj__0 = (struct sVarTable* )come_increment_ref_count(result, "sVarTable_clone", 9, 1334);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 1335);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 1336);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_clone"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* result;
    struct list$1char$ph* __dec_obj111;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 3073, 1209);
        neo_current_frame = fr.prev;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3073, 1214);
        return __result_obj__0;
    }
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/neo-c.h", 3076, 1215, "struct map$2char$phsVar$ph*"), "/usr/local/include/neo-c.h", 3076, 1229)), "/usr/local/include/neo-c.h", 3076, 1230);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj111=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 3078, 1231, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 3078, 1232)), "/usr/local/include/neo-c.h", 3078, 1234);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3078, 1233);
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar* ));
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3084, 1250),(_Bool)0), "/usr/local/include/neo-c.h", 3084, 1251);
        if(1&&1) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "/usr/local/include/neo-c.h", 3087, 1295, "char* "), "/usr/local/include/neo-c.h", 3087, 1296),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3087, 1315),(_Bool)0);
        }
        else if(1) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "/usr/local/include/neo-c.h", 3090, 1316, "char* "), "/usr/local/include/neo-c.h", 3090, 1317),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3090, 1318),(_Bool)0);
        }
        else if(1) {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "/usr/local/include/neo-c.h", 3093, 1319),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3093, 1320),(_Bool)0);
        }
        else {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "/usr/local/include/neo-c.h", 3096, 1321),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3096, 1322),(_Bool)0);
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3100, 1323);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3100, 1324);
    }
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 3100, 1325);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3100, 1326);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3100, 1327);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_48;
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3049, 1210);
            }
        }
    }
    come_free((char*)self->items);
    for(i_48=0    ;i_48<self->size;i_48++){
        if(self->item_existance[i_48]) {
            if(1) {
                (self->keys[i_48] = come_decrement_ref_count(self->keys[i_48], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3058, 1211));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3064, 1212);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3066, 1213));
            neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj110;
    struct map$2char$phsVar$ph* __result_obj__0;
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "/usr/local/include/neo-c.h", 2999, 1216, "char** "))), "/usr/local/include/neo-c.h", 2999, 1217);
    __right_value0 = (void*)0;
    self->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), "/usr/local/include/neo-c.h", 3000, 1218, "struct sVar** "))), "/usr/local/include/neo-c.h", 3000, 1219);
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/neo-c.h", 3001, 1220, "_Bool*"))), "/usr/local/include/neo-c.h", 3001, 1221);
    for(i=0    ;i<128;i++){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __right_value0 = (void*)0;
    __dec_obj110=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 3011, 1222, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 3011, 1223)), "/usr/local/include/neo-c.h", 3011, 1225);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3011, 1224);
    self->it=0;
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3015, 1226);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3015, 1227);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3015, 1228);
    return __result_obj__0;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_49  ;
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
    memset(&result_49,0,sizeof(char* ));
        __result_obj__0 = result_49;
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
    char*  result_50  ;
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
    memset(&result_50,0,sizeof(char* ));
        __result_obj__0 = result_50;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_at"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3141, 1235);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 1236);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 1237);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3152, 1238);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3152, 1239);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3152, 1240);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3161, 1241);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 1242);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 1243);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3165, 1244);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 1245);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 1246);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3169, 1247);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 1248);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 1249);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_put"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    unsigned int hash;
    int it;
    _Bool same_key_exist;
    char*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3430, 1252));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3430, 1253);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3445, 1268));
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3447, 1273);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3454, 1274);
                    self->items[it]=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3455, 1275);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3477, 1276);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3483, 1277);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3503, 1292));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3506, 1293));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3506, 1294);
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
    struct sVar*  default_value_51  ;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "/usr/local/include/neo-c.h", 3272, 1254, "char** "))), "/usr/local/include/neo-c.h", 3272, 1255);
    __right_value0 = (void*)0;
    items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(size)), "/usr/local/include/neo-c.h", 3273, 1256, "struct sVar** "))), "/usr/local/include/neo-c.h", 3273, 1257);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 3274, 1258, "_Bool*"))), "/usr/local/include/neo-c.h", 3274, 1259);
    len=0;
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar* ));
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3281, 1260),(_Bool)0), "/usr/local/include/neo-c.h", 3281, 1261);
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
                memset(&default_value_51,0,sizeof(struct sVar* ));
                __right_value0 = (void*)0;
                items[n]=((struct sVar* )(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value_51, "/usr/local/include/neo-c.h", 3304, 1262),(_Bool)0)));
                len++;
                come_call_finalizer(sVar_finalize, default_value_51, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3307, 1263);
                break;
                come_call_finalizer(sVar_finalize, default_value_51, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3309, 1264);
            }
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3312, 1265);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3312, 1266);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3313, 1267));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
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
    struct list_item$1char$ph* it_52;
    int i_53;
    struct list_item$1char$ph* prev_it_54;
    struct list_item$1char$ph* it_55;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_56;
    struct list_item$1char$ph* prev_it_57;
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1934, 1270);
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
        it_52=self->head;
        i_53=0;
        while(it_52!=((void*)0)) {
            if(i_53==head) {
                self->tail=it_52->prev;
                self->tail->next=((void*)0);
            }
            if(i_53>=head) {
                prev_it_54=it_52;
                it_52=it_52->next;
                i_53++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_54, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1964, 1271);
                self->len--;
            }
            else {
                it_52=it_52->next;
                i_53++;
            }
        }
    }
    else {
        it_55=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_56=0;
        while(it_55!=((void*)0)) {
            if(i_56==head) {
                head_prev_it=it_55->prev;
            }
            if(i_56==tail) {
                tail_it=it_55;
            }
            if(i_56>=head&&i_56<tail) {
                prev_it_57=it_55;
                it_55=it_55->next;
                i_56++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_57, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1997, 1272);
                self->len--;
            }
            else {
                it_55=it_55->next;
                i_56++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1856, 1269);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_58  ;
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
    memset(&result_58,0,sizeof(char* ));
        __result_obj__0 = result_58;
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
    char*  result_59  ;
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
    memset(&result_59,0,sizeof(char* ));
        __result_obj__0 = result_59;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj112  ;
    struct list_item$1char$ph* litem_60;
    char*  __dec_obj113  ;
    struct list_item$1char$ph* litem_61;
    char*  __dec_obj114  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1615, 1278));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1619, 1279, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1619, 1280);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj112=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 1282);
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1623, 1281);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_60=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1629, 1283, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1629, 1284);
        litem_60->prev=self->head;
        litem_60->next=((void*)0);
        __dec_obj113=litem_60->item,
        litem_60->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 1286);
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1633, 1285);
        self->tail=litem_60;
        self->head->next=litem_60;
    }
    else {
        __right_value0 = (void*)0;
        litem_61=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1639, 1287, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1639, 1288);
        litem_61->prev=self->tail;
        litem_61->next=((void*)0);
        __dec_obj114=litem_61->item,
        litem_61->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 1290);
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1643, 1289);
        self->tail->next=litem_61;
        self->tail=litem_61;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1651, 1291));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  sVar_clone(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_clone"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVar*  result  ;
    char*  __dec_obj115  ;
    char*  __dec_obj116  ;
    struct sType*  __dec_obj117  ;
    char*  __dec_obj118  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count((void*)0, "sVar_clone", 4, 1297);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 4, 1298);
        return __result_obj__0;
    }
    result=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "sVar_clone", 5, 1299, "struct sVar* "), "sVar_clone", 5, 1300);
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj115=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sVar_clone", 6, 1301, "char* "), "sVar_clone", 6, 1303);
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 6, 1302);
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj116=result->mCValueName,
        result->mCValueName=(char* )come_increment_ref_count((char* )come_memdup(self->mCValueName, "sVar_clone", 7, 1304, "char* "), "sVar_clone", 7, 1306);
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 7, 1305);
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj117=result->mType,
        result->mType=(struct sType* )come_increment_ref_count(sType_clone(self->mType), "sVar_clone", 8, 1308);
        come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_clone", 8, 1307);
    }
    if(self!=((void*)0)) {
        result->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result->mNoFree=self->mNoFree;
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj118=result->mFunName,
        result->mFunName=(char* )come_increment_ref_count((char* )come_memdup(self->mFunName, "sVar_clone", 12, 1309, "char* "), "sVar_clone", 12, 1311);
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 12, 1310);
    }
    if(self!=((void*)0)) {
        result->no_output_come_code=self->no_output_come_code;
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(result, "sVar_clone", 14, 1312);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 1313);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 1314);
    return __result_obj__0;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_62;
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3049, 1328);
            }
        }
    }
    come_free((char*)self->items);
    for(i_62=0    ;i_62<self->size;i_62++){
        if(self->item_existance[i_62]) {
            if(1) {
                (self->keys[i_62] = come_decrement_ref_count(self->keys[i_62], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3058, 1329));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3064, 1330);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3066, 1331));
            neo_current_frame = fr.prev;
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_clone"; neo_current_frame = &fr;
    struct sFuncNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFuncNode*  result  ;
    char*  __dec_obj123  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sFuncNode* )come_increment_ref_count((struct sFuncNode *)come_calloc(1, sizeof(struct sFuncNode )*(1), "sFuncNode_clone", 5, 1367, "struct sFuncNode* "), "sFuncNode_clone", 5, 1368);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj123=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sFuncNode_clone", 7, 1369, "char* "), "sFuncNode_clone", 7, 1371);
        __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0, "sFuncNode_clone", 7, 1370);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sFuncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFuncNode_clone}", 9, 1372);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_clone"; neo_current_frame = &fr;
    struct sLineNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLineNode*  result  ;
    char*  __dec_obj124  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLineNode* )come_increment_ref_count((struct sLineNode *)come_calloc(1, sizeof(struct sLineNode )*(1), "sLineNode_clone", 5, 1382, "struct sLineNode* "), "sLineNode_clone", 5, 1383);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj124=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLineNode_clone", 7, 1384, "char* "), "sLineNode_clone", 7, 1386);
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0, "sLineNode_clone", 7, 1385);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sLineNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLineNode_clone}", 9, 1387);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_clone"; neo_current_frame = &fr;
    struct sSNameNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSNameNode*  result  ;
    char*  __dec_obj125  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSNameNode* )come_increment_ref_count((struct sSNameNode *)come_calloc(1, sizeof(struct sSNameNode )*(1), "sSNameNode_clone", 5, 1397, "struct sSNameNode* "), "sSNameNode_clone", 5, 1398);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj125=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSNameNode_clone", 7, 1399, "char* "), "sSNameNode_clone", 7, 1401);
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0, "sSNameNode_clone", 7, 1400);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sSNameNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sSNameNode_clone}", 9, 1402);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_clone"; neo_current_frame = &fr;
    struct sCallerFuncNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCallerFuncNode*  result  ;
    char*  __dec_obj126  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCallerFuncNode* )come_increment_ref_count((struct sCallerFuncNode *)come_calloc(1, sizeof(struct sCallerFuncNode )*(1), "sCallerFuncNode_clone", 5, 1412, "struct sCallerFuncNode* "), "sCallerFuncNode_clone", 5, 1413);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj126=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCallerFuncNode_clone", 7, 1414, "char* "), "sCallerFuncNode_clone", 7, 1416);
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0, "sCallerFuncNode_clone", 7, 1415);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sCallerFuncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCallerFuncNode_clone}", 9, 1417);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_clone"; neo_current_frame = &fr;
    struct sCallerLineNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCallerLineNode*  result  ;
    char*  __dec_obj127  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCallerLineNode* )come_increment_ref_count((struct sCallerLineNode *)come_calloc(1, sizeof(struct sCallerLineNode )*(1), "sCallerLineNode_clone", 5, 1427, "struct sCallerLineNode* "), "sCallerLineNode_clone", 5, 1428);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj127=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCallerLineNode_clone", 7, 1429, "char* "), "sCallerLineNode_clone", 7, 1431);
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0, "sCallerLineNode_clone", 7, 1430);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sCallerLineNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCallerLineNode_clone}", 9, 1432);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_clone"; neo_current_frame = &fr;
    struct sCallerSNameNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCallerSNameNode*  result  ;
    char*  __dec_obj128  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCallerSNameNode* )come_increment_ref_count((struct sCallerSNameNode *)come_calloc(1, sizeof(struct sCallerSNameNode )*(1), "sCallerSNameNode_clone", 5, 1442, "struct sCallerSNameNode* "), "sCallerSNameNode_clone", 5, 1443);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj128=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCallerSNameNode_clone", 7, 1444, "char* "), "sCallerSNameNode_clone", 7, 1446);
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0, "sCallerSNameNode_clone", 7, 1445);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sCallerSNameNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCallerSNameNode_clone}", 9, 1447);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_clone"; neo_current_frame = &fr;
    struct sVarArgTypeName* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sVarArgTypeName*  result  ;
    char*  __dec_obj129  ;
    struct sType*  __dec_obj130  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sVarArgTypeName* )come_increment_ref_count((struct sVarArgTypeName *)come_calloc(1, sizeof(struct sVarArgTypeName )*(1), "sVarArgTypeName_clone", 5, 1460, "struct sVarArgTypeName* "), "sVarArgTypeName_clone", 5, 1461);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj129=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sVarArgTypeName_clone", 7, 1462, "char* "), "sVarArgTypeName_clone", 7, 1464);
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "sVarArgTypeName_clone", 7, 1463);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj130=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sVarArgTypeName_clone", 9, 1466);
        come_call_finalizer(sType_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarArgTypeName_clone", 9, 1465);
    }
        __result_obj__0 = result;
    come_call_finalizer(sVarArgTypeName_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarArgTypeName_clone}", 10, 1467);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_clone"; neo_current_frame = &fr;
    struct sInlineAssembler* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sInlineAssembler*  result  ;
    char*  __dec_obj131  ;
    char*  __dec_obj132  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sInlineAssembler* )come_increment_ref_count((struct sInlineAssembler *)come_calloc(1, sizeof(struct sInlineAssembler )*(1), "sInlineAssembler_clone", 5, 1506, "struct sInlineAssembler* "), "sInlineAssembler_clone", 5, 1507);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj131=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sInlineAssembler_clone", 7, 1508, "char* "), "sInlineAssembler_clone", 7, 1510);
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0, "sInlineAssembler_clone", 7, 1509);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->source!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj132=result->source,
        result->source=(char* )come_increment_ref_count((char* )come_memdup(self->source, "sInlineAssembler_clone", 9, 1511, "char* "), "sInlineAssembler_clone", 9, 1513);
        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0, "sInlineAssembler_clone", 9, 1512);
    }
    if(self!=((void*)0)) {
        result->volatile_=self->volatile_;
    }
        __result_obj__0 = result;
    come_call_finalizer(sInlineAssembler_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sInlineAssembler_clone}", 11, 1514);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

