// source head
typedef long int size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short int __int16_t;
typedef unsigned short int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long int __int64_t;
typedef unsigned long int __uint64_t;
typedef char __int_least8_t;
typedef unsigned char __uint_least8_t;
typedef short int __int_least16_t;
typedef unsigned short int __uint_least16_t;
typedef int __int_least32_t;
typedef unsigned int __uint_least32_t;
typedef long int __int_least64_t;
typedef unsigned long int __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
struct anonymous_typeX1
{
    int __val[2];
};
typedef struct anonymous_typeX1 __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void* __timer_t;
typedef int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef long int __loff_t;
typedef char* __caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
union anonymous_typeZ4
{
unsigned int __wch;
char __wchb[4];
};
struct anonymous_typeX2
{
    int __count;
    union anonymous_typeZ4 __value;
};
typedef struct anonymous_typeX2 __mbstate_t;
struct _G_fpos_t
{
    long int __pos;
    struct anonymous_typeX2 __state;
};
typedef struct _G_fpos_t __fpos_t;
struct _G_fpos64_t
{
    long int __pos;
    struct anonymous_typeX2 __state;
};
typedef struct _G_fpos64_t __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
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
    struct _IO_marker* _markers;
    struct _IO_FILE* _chain;
    int _fileno;
    int _flags2;
    long int _old_offset;
    unsigned short int _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    void* _lock;
    long int _offset;
    struct _IO_codecvt* _codecvt;
    struct _IO_wide_data* _wide_data;
    struct _IO_FILE* _freeres_list;
    void* _freeres_buf;
    long int __pad5;
    int _mode;
    char _unused2[15*sizeof(int)-4*sizeof(void*)-sizeof(long int)];
};
typedef long int (*cookie_read_function_t)(void*,char*,long int);
typedef long int (*cookie_write_function_t)(void*,const char*,long int);
typedef int (*cookie_seek_function_t)(void*,long int*,int);
typedef int (*cookie_close_function_t)(void*);
struct _IO_cookie_io_functions_t
{
    long int (*read)(void*,char*,long int);
    long int (*write)(void*,const char*,long int);
    int (*seek)(void*,long int*,int);
    int (*close)(void*);
};
typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;
typedef __builtin_va_list va_list;
typedef long int off_t;
typedef long int off64_t;
typedef long int ssize_t;
typedef struct _G_fpos_t fpos_t;
typedef struct _G_fpos64_t fpos64_t;
extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef long double _Float128;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
struct obstack;
typedef unsigned int wchar_t;
struct anonymous_typeX5
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX5 div_t;
struct anonymous_typeX6
{
    long int quot;
    long int rem;
};
typedef struct anonymous_typeX6 ldiv_t;
struct anonymous_typeX7
{
    long long int quot;
    long long int rem;
};
typedef struct anonymous_typeX7 lldiv_t;
struct __locale_struct
{
    struct __locale_data* __locales[13];
    const unsigned short int* __ctype_b;
    const int* __ctype_tolower;
    const int* __ctype_toupper;
    const char* __names[13];
};
typedef struct __locale_struct* __locale_t;
typedef struct __locale_struct* locale_t;
typedef unsigned char u_char;
typedef unsigned short int u_short;
typedef unsigned int u_int;
typedef unsigned long int u_long;
typedef long int quad_t;
typedef unsigned long int u_quad_t;
typedef struct anonymous_typeX1 fsid_t;
typedef long int loff_t;
typedef unsigned long int ino_t;
typedef unsigned long int ino64_t;
typedef unsigned long int dev_t;
typedef unsigned int gid_t;
typedef unsigned int mode_t;
typedef unsigned int nlink_t;
typedef unsigned int uid_t;
typedef int pid_t;
typedef unsigned int id_t;
typedef int daddr_t;
typedef char* caddr_t;
typedef int key_t;
typedef long int clock_t;
typedef int clockid_t;
typedef long int time_t;
typedef void* timer_t;
typedef unsigned int useconds_t;
typedef long int suseconds_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long int int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long int u_int64_t;
typedef int register_t;
struct anonymous_typeX8
{
    unsigned long int __val[(1024/(8*sizeof(unsigned long int)))];
};
typedef struct anonymous_typeX8 __sigset_t;
typedef struct anonymous_typeX8 sigset_t;
struct timeval
{
    long int tv_sec;
    long int tv_usec;
};
struct timespec
{
    long int tv_sec;
    long int tv_nsec;
};
typedef long int __fd_mask;
struct anonymous_typeX9
{
    long int fds_bits[1024/(8*(int)sizeof(long int))];
};
typedef struct anonymous_typeX9 fd_set;
typedef long int fd_mask;
typedef int blksize_t;
typedef long int blkcnt_t;
typedef unsigned long int fsblkcnt_t;
typedef unsigned long int fsfilcnt_t;
typedef long int blkcnt64_t;
typedef unsigned long int fsblkcnt64_t;
typedef unsigned long int fsfilcnt64_t;
struct anonymous_typeX11
{
    unsigned int __low;
    unsigned int __high;
};
union anonymous_typeZ10
{
unsigned long long int __value64;
struct anonymous_typeX11 __value32;
};
typedef union anonymous_typeZ10 __atomic_wide_counter;
struct __pthread_internal_list
{
    struct __pthread_internal_list* __prev;
    struct __pthread_internal_list* __next;
};
typedef struct __pthread_internal_list __pthread_list_t;
struct __pthread_internal_slist
{
    struct __pthread_internal_slist* __next;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
struct __pthread_mutex_s
{
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    int __spins;
    struct __pthread_internal_list __list;
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
    unsigned long int __pad1;
    unsigned long int __pad2;
    unsigned int __flags;
};
struct __pthread_cond_s
{
    union anonymous_typeZ10 __wseq;
    union anonymous_typeZ10 __g1_start;
    unsigned int __g_refs[2];
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
};
typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;
struct anonymous_typeX12
{
    int __data;
};
typedef struct anonymous_typeX12 __once_flag;
typedef unsigned long int pthread_t;
union anonymous_typeZ13
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ13 pthread_mutexattr_t;
union anonymous_typeZ14
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ14 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
{
char __size[64];
long int __align;
};
typedef union pthread_attr_t pthread_attr_t;
union anonymous_typeZ15
{
struct __pthread_mutex_s __data;
char __size[48];
long int __align;
};
typedef union anonymous_typeZ15 pthread_mutex_t;
union anonymous_typeZ16
{
struct __pthread_cond_s __data;
char __size[48];
long long int __align;
};
typedef union anonymous_typeZ16 pthread_cond_t;
union anonymous_typeZ17
{
struct __pthread_rwlock_arch_t __data;
char __size[56];
long int __align;
};
typedef union anonymous_typeZ17 pthread_rwlock_t;
union anonymous_typeZ18
{
char __size[8];
long int __align;
};
typedef union anonymous_typeZ18 pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
union anonymous_typeZ19
{
char __size[32];
long int __align;
};
typedef union anonymous_typeZ19 pthread_barrier_t;
union anonymous_typeZ20
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ20 pthread_barrierattr_t;
struct random_data
{
    int* fptr;
    int* rptr;
    int* state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int* end_ptr;
};
struct drand48_data
{
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};
typedef int (*__compar_fn_t)(const void*,const void*);
typedef int (*comparison_fn_t)(const void*,const void*);
typedef int (*__compar_d_fn_t)(const void*,const void*,void*);
typedef void* any;
typedef char* string;
extern _Bool gComeGCLib;
struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};
struct list$1voidp
{
    struct list_item$1voidp* head;
    struct list_item$1voidp* tail;
    int len;
    struct list_item$1voidp* it;
};
struct buffer
{
    char* buf;
    int len;
    int size;
};
struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};
struct smart_pointer$1short
{
    struct buffer* memory;
    short short* p;
};
struct smart_pointer$1int
{
    struct buffer* memory;
    int* p;
};
struct smart_pointer$1long
{
    struct buffer* memory;
    long* p;
};
struct smart_pointer$1float
{
    struct buffer* memory;
    float* p;
};
struct smart_pointer$1double
{
    struct buffer* memory;
    double* p;
};
struct list_item$1char
{
    char item;
    struct list_item$1char* prev;
    struct list_item$1char* next;
};
struct list$1char
{
    struct list_item$1char* head;
    struct list_item$1char* tail;
    int len;
    struct list_item$1char* it;
};
struct list_item$1short
{
    short short item;
    struct list_item$1short* prev;
    struct list_item$1short* next;
};
struct list$1short
{
    struct list_item$1short* head;
    struct list_item$1short* tail;
    int len;
    struct list_item$1short* it;
};
struct list_item$1int
{
    int item;
    struct list_item$1int* prev;
    struct list_item$1int* next;
};
struct list$1int
{
    struct list_item$1int* head;
    struct list_item$1int* tail;
    int len;
    struct list_item$1int* it;
};
struct list_item$1long
{
    long item;
    struct list_item$1long* prev;
    struct list_item$1long* next;
};
struct list$1long
{
    struct list_item$1long* head;
    struct list_item$1long* tail;
    int len;
    struct list_item$1long* it;
};
struct list_item$1float
{
    float item;
    struct list_item$1float* prev;
    struct list_item$1float* next;
};
struct list$1float
{
    struct list_item$1float* head;
    struct list_item$1float* tail;
    int len;
    struct list_item$1float* it;
};
struct list_item$1double
{
    double item;
    struct list_item$1double* prev;
    struct list_item$1double* next;
};
struct list$1double
{
    struct list_item$1double* head;
    struct list_item$1double* tail;
    int len;
    struct list_item$1double* it;
};
struct list_item$1charph
{
    char* item;
    struct list_item$1charph* prev;
    struct list_item$1charph* next;
};
struct list$1charph
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
};
struct integer
{
    long value;
};
extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
struct sType;
struct sClass;
struct tuple2$2charphsTypeph
{
    char* v1;
    struct sType* v2;
};
struct list_item$1tuple2$2charphsTypephph
{
    struct tuple2$2charphsTypeph* item;
    struct list_item$1tuple2$2charphsTypephph* prev;
    struct list_item$1tuple2$2charphsTypephph* next;
};
struct list$1tuple2$2charphsTypephph
{
    struct list_item$1tuple2$2charphsTypephph* head;
    struct list_item$1tuple2$2charphsTypephph* tail;
    int len;
    struct list_item$1tuple2$2charphsTypephph* it;
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
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2charphsTypephph* mFields;
    _Bool mOutputed;
    _Bool mOutputed2;
    char* mDeclareSName;
    _Bool mNobodyStruct;
    char* mParentClassName;
};
struct sInfo;
struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
};
struct sNodeBase
{
    int sline;
    char* sname;
};
struct list_item$1sTypeph
{
    struct sType* item;
    struct list_item$1sTypeph* prev;
    struct list_item$1sTypeph* next;
};
struct list$1sTypeph
{
    struct list_item$1sTypeph* head;
    struct list_item$1sTypeph* tail;
    int len;
    struct list_item$1sTypeph* it;
};
struct tuple1$1sTypeph
{
    struct sType* v1;
};
struct list_item$1sNodeph
{
    struct sNode* item;
    struct list_item$1sNodeph* prev;
    struct list_item$1sNodeph* next;
};
struct list$1sNodeph
{
    struct list_item$1sNodeph* head;
    struct list_item$1sNodeph* tail;
    int len;
    struct list_item$1sNodeph* it;
};
struct sType
{
    struct sClass* mClass;
    struct list$1sTypeph* mMultipleTypes;
    struct tuple1$1sTypeph* mNoSolvedGenericsType;
    struct tuple1$1sTypeph* mOriginalLoadVarType;
    char* mGenericsName;
    struct list$1sTypeph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct tuple1$1sTypeph* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mRecord;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mImmutable;
    _Bool mHeap;
    _Bool mDummyHeap;
    _Bool mDelegate;
    _Bool mShare;
    _Bool mClone;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mRefference;
    _Bool mException;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mNoArrayPointerNum;
    struct sNode* mSizeNum;
    unsigned int mDynamicArrayNum;
    unsigned int mTypeOfExpression;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mComeMemCore;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
};
struct sVar;
struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
};
struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    int mBlockLevel;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mFunctionParam;
    _Bool mNoFree;
    char* mFunName;
};
struct sVarTable;
struct sBlock;
struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    _Bool mExternal;
    _Bool mVarArgs;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    char* mComeHeader;
    _Bool mCloner;
    char* mDeclareSName;
};
struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    struct list$1charph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    char* mGenericsSName;
    int mGenericsSLine;
};
struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    char* mLastCode3;
    struct buffer* mHeader;
};
struct sVarTable;
struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};
struct list$1charp
{
    struct list_item$1charp* head;
    struct list_item$1charp* tail;
    int len;
    struct list_item$1charp* it;
};
struct map$2charphsVarph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct sVarTable
{
    struct map$2charphsVarph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};
struct sBlock
{
    struct list$1sNodeph* mNodes;
    struct sVarTable* mVarTable;
};
struct sRightValueObject
{
    struct sType* mType;
    char* mVarName;
    char* mFunName;
    _Bool mFreed;
    int mID;
    int mBlockLevel;
};
struct sClassModule
{
    char* mName;
    char* mText;
    struct list$1charph* mParams;
    char* mSName;
    int mSLine;
};
struct map$2charphsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsGenericsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsClassph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsClassModuleph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsTypeph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct list_item$1sRightValueObjectph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObjectph* prev;
    struct list_item$1sRightValueObjectph* next;
};
struct list$1sRightValueObjectph
{
    struct list_item$1sRightValueObjectph* head;
    struct list_item$1sRightValueObjectph* tail;
    int len;
    struct list_item$1sRightValueObjectph* it;
};
struct list_item$1CVALUEph
{
    struct CVALUE* item;
    struct list_item$1CVALUEph* prev;
    struct list_item$1CVALUEph* next;
};
struct list$1CVALUEph
{
    struct list_item$1CVALUEph* head;
    struct list_item$1CVALUEph* tail;
    int len;
    struct list_item$1CVALUEph* it;
};
struct map$2charphcharph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct sInfo
{
    char* p;
    char* head;
    struct buffer* original_source;
    struct buffer* source;
    char* sname;
    char* base_sname;
    int sline;
    int err_num;
    char* err_line;
    char* clang_option;
    char* cpp_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    struct sFun* come_fun;
    char* come_fun_name;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2charphsFunph* funcs;
    struct map$2charphsGenericsFunph* generics_funcs;
    struct map$2charphsClassph* classes;
    struct map$2charphsClassModuleph* modules;
    struct map$2charphsTypeph* types;
    struct map$2charphsClassph* generics_classes;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObjectph* right_value_objects;
    struct sType* generics_type;
    struct list$1sTypeph* method_generics_types;
    struct list$1CVALUEph* stack;
    struct sType* come_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool no_comma;
    _Bool no_assign;
    _Bool last_statment_is_return;
    struct list$1charph* generics_type_names;
    struct list$1charph* method_generics_type_names;
    struct sType* impl_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    struct list$1sTypeph* param_types;
    struct list$1charph* param_names;
    _Bool define_struct;
    _Bool in_typedef;
    _Bool in_loop;
    char* output_file_name;
    struct sVarTable* current_loop_vtable;
    _Bool verbose;
    _Bool output_header_file;
    int num_current_stack;
    int num_source_files;
    int max_source_files;
    _Bool without_semicolon;
    _Bool writing_source_file_position;
    struct sType* function_result_type;
    _Bool in_class;
    struct map$2charphcharph* module_params;
};
struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
};
struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};
struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

int remove(const char* __filename);

int rename(const char* __old, const char* __new);

int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);

int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);

int fclose(struct _IO_FILE* __stream);

struct _IO_FILE* tmpfile();

struct _IO_FILE* tmpfile64();

char* tmpnam(char anonymous_var_nameX1[20]);

char* tmpnam_r(char __s[20]);

char* tempnam(const char* __dir, const char* __pfx);

int fflush(struct _IO_FILE* __stream);

int fflush_unlocked(struct _IO_FILE* __stream);

int fcloseall();

struct _IO_FILE* fopen(const char* __filename, const char* __modes);

struct _IO_FILE* freopen(const char* __filename, const char* __modes, struct _IO_FILE* __stream);

struct _IO_FILE* fopen64(const char* __filename, const char* __modes);

struct _IO_FILE* freopen64(const char* __filename, const char* __modes, struct _IO_FILE* __stream);

struct _IO_FILE* fdopen(int __fd, const char* __modes);

struct _IO_FILE* fopencookie(void* __magic_cookie, const char* __modes, struct _IO_cookie_io_functions_t __io_funcs);

struct _IO_FILE* fmemopen(void* __s, long int __len, const char* __modes);

struct _IO_FILE* open_memstream(char** __bufloc, long int* __sizeloc);

void setbuf(struct _IO_FILE* __stream, char* __buf);

int setvbuf(struct _IO_FILE* __stream, char* __buf, int __modes, long int __n);

void setbuffer(struct _IO_FILE* __stream, char* __buf, long int __size);

void setlinebuf(struct _IO_FILE* __stream);

int fprintf(struct _IO_FILE* __stream, const char* __format, ...);

int printf(const char* __format, ...);

int sprintf(char* __s, const char* __format, ...);

int vfprintf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int vprintf(const char* __format, va_list __arg);

int vsprintf(char* __s, const char* __format, va_list __arg);

int snprintf(char* __s, long int __maxlen, const char* __format, ...);

int vsnprintf(char* __s, long int __maxlen, const char* __format, va_list __arg);

int vasprintf(char** __ptr, const char* __f, va_list __arg);

int __asprintf(char** __ptr, const char* __fmt, ...);

int asprintf(char** __ptr, const char* __fmt, ...);

int vdprintf(int __fd, const char* __fmt, va_list __arg);

int dprintf(int __fd, const char* __fmt, ...);

int fscanf(struct _IO_FILE* __stream, const char* __format, ...);

int scanf(const char* __format, ...);

int sscanf(const char* __s, const char* __format, ...);

int __isoc23_fscanf(struct _IO_FILE* __stream, const char* __format, ...);

int __isoc23_scanf(const char* __format, ...);

int __isoc23_sscanf(const char* __s, const char* __format, ...);

int vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int vscanf(const char* __format, va_list __arg);

int vsscanf(const char* __s, const char* __format, va_list __arg);

int __isoc23_vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int __isoc23_vscanf(const char* __format, va_list __arg);

int __isoc23_vsscanf(const char* __s, const char* __format, va_list __arg);

int fgetc(struct _IO_FILE* __stream);

int getc(struct _IO_FILE* __stream);

int getchar();

int getc_unlocked(struct _IO_FILE* __stream);

int getchar_unlocked();

int fgetc_unlocked(struct _IO_FILE* __stream);

int fputc(int __c, struct _IO_FILE* __stream);

int putc(int __c, struct _IO_FILE* __stream);

int putchar(int __c);

int fputc_unlocked(int __c, struct _IO_FILE* __stream);

int putc_unlocked(int __c, struct _IO_FILE* __stream);

int putchar_unlocked(int __c);

int getw(struct _IO_FILE* __stream);

int putw(int __w, struct _IO_FILE* __stream);

char* fgets(char* __s, int __n, struct _IO_FILE* __stream);

char* fgets_unlocked(char* __s, int __n, struct _IO_FILE* __stream);

long int __getdelim(char** __lineptr, long int* __n, int __delimiter, struct _IO_FILE* __stream);

long int getdelim(char** __lineptr, long int* __n, int __delimiter, struct _IO_FILE* __stream);

long int getline(char** __lineptr, long int* __n, struct _IO_FILE* __stream);

int fputs(const char* __s, struct _IO_FILE* __stream);

int puts(const char* __s);

int ungetc(int __c, struct _IO_FILE* __stream);

long int fread(void* __ptr, long int __size, long int __n, struct _IO_FILE* __stream);

long int fwrite(const void* __ptr, long int __size, long int __n, struct _IO_FILE* __s);

int fputs_unlocked(const char* __s, struct _IO_FILE* __stream);

long int fread_unlocked(void* __ptr, long int __size, long int __n, struct _IO_FILE* __stream);

long int fwrite_unlocked(const void* __ptr, long int __size, long int __n, struct _IO_FILE* __stream);

int fseek(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftell(struct _IO_FILE* __stream);

void rewind(struct _IO_FILE* __stream);

int fseeko(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftello(struct _IO_FILE* __stream);

int fgetpos(struct _IO_FILE* __stream, struct _G_fpos_t* __pos);

int fsetpos(struct _IO_FILE* __stream, const struct _G_fpos_t* __pos);

int fseeko64(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftello64(struct _IO_FILE* __stream);

int fgetpos64(struct _IO_FILE* __stream, struct _G_fpos64_t* __pos);

int fsetpos64(struct _IO_FILE* __stream, const struct _G_fpos64_t* __pos);

void clearerr(struct _IO_FILE* __stream);

int feof(struct _IO_FILE* __stream);

int ferror(struct _IO_FILE* __stream);

void clearerr_unlocked(struct _IO_FILE* __stream);

int feof_unlocked(struct _IO_FILE* __stream);

int ferror_unlocked(struct _IO_FILE* __stream);

void perror(const char* __s);

int fileno(struct _IO_FILE* __stream);

int fileno_unlocked(struct _IO_FILE* __stream);

int pclose(struct _IO_FILE* __stream);

struct _IO_FILE* popen(const char* __command, const char* __modes);

char* ctermid(char* __s);

char* cuserid(char* __s);

int obstack_printf(struct obstack* __obstack, const char* __format, ...);

int obstack_vprintf(struct obstack* __obstack, const char* __format, va_list __args);

void flockfile(struct _IO_FILE* __stream);

int ftrylockfile(struct _IO_FILE* __stream);

void funlockfile(struct _IO_FILE* __stream);

int __uflow(struct _IO_FILE* anonymous_var_nameX2);

int __overflow(struct _IO_FILE* anonymous_var_nameX3, int anonymous_var_nameX4);

long int __ctype_get_mb_cur_max();

double atof(const char* __nptr);

int atoi(const char* __nptr);

long int atol(const char* __nptr);

long long int atoll(const char* __nptr);

double strtod(const char* __nptr, char** __endptr);

float strtof(const char* __nptr, char** __endptr);

long double strtold(const char* __nptr, char** __endptr);

float strtof32(const char* __nptr, char** __endptr);

double strtof64(const char* __nptr, char** __endptr);

long double strtof128(const char* __nptr, char** __endptr);

double strtof32x(const char* __nptr, char** __endptr);

long double strtof64x(const char* __nptr, char** __endptr);

long int strtol(const char* __nptr, char** __endptr, int __base);

unsigned long int strtoul(const char* __nptr, char** __endptr, int __base);

long long int strtoq(const char* __nptr, char** __endptr, int __base);

unsigned long long int strtouq(const char* __nptr, char** __endptr, int __base);

long long int strtoll(const char* __nptr, char** __endptr, int __base);

unsigned long long int strtoull(const char* __nptr, char** __endptr, int __base);

long int __isoc23_strtol(const char* __nptr, char** __endptr, int __base);

unsigned long int __isoc23_strtoul(const char* __nptr, char** __endptr, int __base);

long long int __isoc23_strtoll(const char* __nptr, char** __endptr, int __base);

unsigned long long int __isoc23_strtoull(const char* __nptr, char** __endptr, int __base);

int strfromd(char* __dest, long int __size, const char* __format, double __f);

int strfromf(char* __dest, long int __size, const char* __format, float __f);

int strfroml(char* __dest, long int __size, const char* __format, long double __f);

int strfromf32(char* __dest, long int __size, const char* __format, float __f);

int strfromf64(char* __dest, long int __size, const char* __format, double __f);

int strfromf128(char* __dest, long int __size, const char* __format, long double __f);

int strfromf32x(char* __dest, long int __size, const char* __format, double __f);

int strfromf64x(char* __dest, long int __size, const char* __format, long double __f);

long int strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned long int strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

long long int strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned long long int strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

long int __isoc23_strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned long int __isoc23_strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

long long int __isoc23_strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned long long int __isoc23_strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

double strtod_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

float strtof_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtold_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

float strtof32_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

double strtof64_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtof128_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

double strtof32x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtof64x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

char* l64a(long int __n);

long int a64l(const char* __s);

int select(int __nfds, struct anonymous_typeX9* __readfds, struct anonymous_typeX9* __writefds, struct anonymous_typeX9* __exceptfds, struct timeval* __timeout);

int pselect(int __nfds, struct anonymous_typeX9* __readfds, struct anonymous_typeX9* __writefds, struct anonymous_typeX9* __exceptfds, const struct timespec* __timeout, const struct anonymous_typeX8* __sigmask);

long int random();

void srandom(unsigned int __seed);

char* initstate(unsigned int __seed, char* __statebuf, long int __statelen);

char* setstate(char* __statebuf);

int random_r(struct random_data* __buf, int* __result);

int srandom_r(unsigned int __seed, struct random_data* __buf);

int initstate_r(unsigned int __seed, char* __statebuf, long int __statelen, struct random_data* __buf);

int setstate_r(char* __statebuf, struct random_data* __buf);

int rand();

void srand(unsigned int __seed);

int rand_r(unsigned int* __seed);

double drand48();

double erand48(unsigned short int __xsubi[3]);

long int lrand48();

long int nrand48(unsigned short int __xsubi[3]);

long int mrand48();

long int jrand48(unsigned short int __xsubi[3]);

void srand48(long int __seedval);

unsigned short int* seed48(unsigned short int __seed16v[3]);

void lcong48(unsigned short int __param[7]);

int drand48_r(struct drand48_data* __buffer, double* __result);

int erand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, double* __result);

int lrand48_r(struct drand48_data* __buffer, long int* __result);

int nrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long int* __result);

int mrand48_r(struct drand48_data* __buffer, long int* __result);

int jrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long int* __result);

int srand48_r(long int __seedval, struct drand48_data* __buffer);

int seed48_r(unsigned short int __seed16v[3], struct drand48_data* __buffer);

int lcong48_r(unsigned short int __param[7], struct drand48_data* __buffer);

unsigned int arc4random();

void arc4random_buf(void* __buf, long int __size);

unsigned int arc4random_uniform(unsigned int __upper_bound);

void* malloc(long int __size);

void* calloc(long int __nmemb, long int __size);

void* realloc(void* __ptr, long int __size);

void free(void* __ptr);

void* reallocarray(void* __ptr, long int __nmemb, long int __size);

void* alloca(long int __size);

void* valloc(long int __size);

int posix_memalign(void** __memptr, long int __alignment, long int __size);

void* aligned_alloc(long int __alignment, long int __size);

void abort();

int atexit(void (*__func)());

int at_quick_exit(void (*__func)());

int on_exit(void (*__func)(int,void*), void* __arg);

void exit(int __status);

void quick_exit(int __status);

void _Exit(int __status);

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

char* canonicalize_file_name(const char* __name);

char* realpath(const char* __name, char* __resolved);

void* bsearch(const void* __key, const void* __base, long int __nmemb, long int __size, int (*__compar)(const void*,const void*));

void qsort(void* __base, long int __nmemb, long int __size, int (*__compar)(const void*,const void*));

void qsort_r(void* __base, long int __nmemb, long int __size, int (*__compar)(const void*,const void*,void*), void* __arg);

int abs(int __x);

long int labs(long int __x);

long long int llabs(long long int __x);

struct anonymous_typeX5 div(int __numer, int __denom);

struct anonymous_typeX6 ldiv(long int __numer, long int __denom);

struct anonymous_typeX7 lldiv(long long int __numer, long long int __denom);

char* ecvt(double __value, int __ndigit, int* __decpt, int* __sign);

char* fcvt(double __value, int __ndigit, int* __decpt, int* __sign);

char* gcvt(double __value, int __ndigit, char* __buf);

char* qecvt(long double __value, int __ndigit, int* __decpt, int* __sign);

char* qfcvt(long double __value, int __ndigit, int* __decpt, int* __sign);

char* qgcvt(long double __value, int __ndigit, char* __buf);

int ecvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int fcvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int qecvt_r(long double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int qfcvt_r(long double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long int __len);

int mblen(const char* __s, long int __n);

int mbtowc(unsigned int* __pwc, const char* __s, long int __n);

int wctomb(char* __s, unsigned int __wchar);

long int mbstowcs(unsigned int* __pwcs, const char* __s, long int __n);

long int wcstombs(char* __s, const unsigned int* __pwcs, long int __n);

int rpmatch(const char* __response);

int getsubopt(char** __optionp, char** __tokens, char** __valuep);

int posix_openpt(int __oflag);

int grantpt(int __fd);

int unlockpt(int __fd);

char* ptsname(int __fd);

int ptsname_r(int __fd, char* __buf, long int __buflen);

int getpt();

int getloadavg(double* __loadavg, int __nelem);

void* memcpy(void* __dest, const void* __src, long int __n);

void* memmove(void* __dest, const void* __src, long int __n);

void* memccpy(void* __dest, const void* __src, int __c, long int __n);

void* memset(void* __s, int __c, long int __n);

int memcmp(const void* __s1, const void* __s2, long int __n);

int __memcmpeq(const void* __s1, const void* __s2, long int __n);

void* memchr(const void* __s, int __c, long int __n);

void* rawmemchr(const void* __s, int __c);

void* memrchr(const void* __s, int __c, long int __n);

char* strcpy(char* __dest, const char* __src);

char* strncpy(char* __dest, const char* __src, long int __n);

char* strcat(char* __dest, const char* __src);

char* strncat(char* __dest, const char* __src, long int __n);

int strcmp(const char* __s1, const char* __s2);

int strncmp(const char* __s1, const char* __s2, long int __n);

int strcoll(const char* __s1, const char* __s2);

long int strxfrm(char* __dest, const char* __src, long int __n);

int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct* __l);

long int strxfrm_l(char* __dest, const char* __src, long int __n, struct __locale_struct* __l);

char* strdup(const char* __s);

char* strndup(const char* __string, long int __n);

char* strchr(const char* __s, int __c);

char* strrchr(const char* __s, int __c);

char* strchrnul(const char* __s, int __c);

long int strcspn(const char* __s, const char* __reject);

long int strspn(const char* __s, const char* __accept);

char* strpbrk(const char* __s, const char* __accept);

char* strstr(const char* __haystack, const char* __needle);

char* strtok(char* __s, const char* __delim);

char* __strtok_r(char* __s, const char* __delim, char** __save_ptr);

char* strtok_r(char* __s, const char* __delim, char** __save_ptr);

char* strcasestr(const char* __haystack, const char* __needle);

void* memmem(const void* __haystack, long int __haystacklen, const void* __needle, long int __needlelen);

void* __mempcpy(void* __dest, const void* __src, long int __n);

void* mempcpy(void* __dest, const void* __src, long int __n);

long int strlen(const char* __s);

long int strnlen(const char* __string, long int __maxlen);

char* strerror(int __errnum);

char* strerror_r(int __errnum, char* __buf, long int __buflen);

const char* strerrordesc_np(int __err);

const char* strerrorname_np(int __err);

char* strerror_l(int __errnum, struct __locale_struct* __l);

int bcmp(const void* __s1, const void* __s2, long int __n);

void bcopy(const void* __src, void* __dest, long int __n);

void bzero(void* __s, long int __n);

char* index(const char* __s, int __c);

char* rindex(const char* __s, int __c);

int ffs(int __i);

int ffsl(long int __l);

int ffsll(long long int __ll);

int strcasecmp(const char* __s1, const char* __s2);

int strncasecmp(const char* __s1, const char* __s2, long int __n);

int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct* __loc);

int strncasecmp_l(const char* __s1, const char* __s2, long int __n, struct __locale_struct* __loc);

void explicit_bzero(void* __s, long int __n);

char* strsep(char** __stringp, const char* __delim);

char* strsignal(int __sig);

const char* sigabbrev_np(int __sig);

const char* sigdescr_np(int __sig);

char* __stpcpy(char* __dest, const char* __src);

char* stpcpy(char* __dest, const char* __src);

char* __stpncpy(char* __dest, const char* __src, long int __n);

char* stpncpy(char* __dest, const char* __src, long int __n);

long int strlcpy(char* __dest, const char* __src, long int __n);

long int strlcat(char* __dest, const char* __src, long int __n);

int strverscmp(const char* __s1, const char* __s2);

char* strfry(char* __string);

void* memfrob(void* __s, long int __n);

char* basename(const char* __filename);

void come_push_stackframe(char* sname, int sline, int id);

void come_pop_stackframe();

void stackframe();

void come_save_stackframe(char* sname, int sline);

void* come_null_check(void* mem, char* sname, int sline, int id);

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));

_Bool bool_value(_Bool self, void* parent, void (*block)(void*));

int int_expect(int self, void* parent, void (*block)(void*));

int int_catch(int self, void* parent, void (*block)(void*));

int int_value(int self, void* parent, void (*block)(void*));

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

void xassert(char* msg, _Bool test);

void* come_calloc(long int count, long int size, char* sname, int sline, char* class_name);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void* come_dynamic_typeof(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);

void come_free_object(void* mem);

void come_free(void* mem);

void* come_memdup(void* block, char* sname, int sline, char* class_name);

char* __builtin_string(char* str);

struct buffer* buffer_initialize(struct buffer* self);

void buffer_finalize(struct buffer* self);

void buffer_force_finalize(struct buffer* self);

struct buffer* buffer_clone(struct buffer* self);

int buffer_length(struct buffer* self);

void buffer_reset(struct buffer* self);

void buffer_trim(struct buffer* self, int len);

struct buffer* buffer_append(struct buffer* self, char* mem, long int size);

struct buffer* buffer_append_char(struct buffer* self, char c);

struct buffer* buffer_append_str(struct buffer* self, char* str);

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);

struct buffer* buffer_append_int(struct buffer* self, int value);

struct buffer* buffer_append_long(struct buffer* self, long value);

struct buffer* buffer_append_short(struct buffer* self, short short value);

struct buffer* buffer_alignment(struct buffer* self);

int buffer_compare(struct buffer* left, struct buffer* right);

struct buffer* string_to_buffer(char* self);

struct buffer* charp_to_buffer(char* self);

char* buffer_to_string(struct buffer* self);

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size);
static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size);
static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size);
static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size);
static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static void list_item$1charp_finalize(struct list_item$1char* self);
static void list$1charp_finalize(struct list$1char* self);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short short item);
static void list_item$1shortp_finalize(struct list_item$1short* self);
static void list$1shortp_finalize(struct list$1short* self);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static void list_item$1intp_finalize(struct list_item$1int* self);
static void list$1intp_finalize(struct list$1int* self);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static void list_item$1longp_finalize(struct list_item$1long* self);
static void list$1longp_finalize(struct list$1long* self);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static void list_item$1floatp_finalize(struct list_item$1float* self);
static void list$1floatp_finalize(struct list$1float* self);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static void list_item$1doublep_finalize(struct list_item$1double* self);
static void list$1doublep_finalize(struct list$1double* self);
_Bool bool_equals(_Bool self, _Bool right);

_Bool char_equals(char self, char right);

_Bool int_equals(int self, int right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool size_t_equals(long self, long right);

_Bool float_equals(float self, float right);

_Bool double_equals(double self, double right);

_Bool charp_equals(char* self, char* right);

_Bool string_equals(char* self, char* right);

_Bool string_operator_equals(char* self, char* right);

_Bool charp_operator_equals(char* self, char* right);

_Bool string_operator_not_equals(char* self, char* right);

_Bool charp_operator_not_equals(char* self, char* right);

char* charp_operator_add(char* self, char* right);

char* string_operator_add(char* self, char* right);

char* charp_operator_mult(char* self, int right);

char* string_operator_mult(char* self, int right);

unsigned int bool_get_hash_key(_Bool value);

unsigned int char_get_hash_key(char value);

unsigned int short_get_hash_key(short short value);

unsigned int int_get_hash_key(int value);

unsigned int long_get_hash_key(long value);

unsigned int size_t_get_hash_key(long value);

unsigned int float_get_hash_key(float value);

unsigned int double_get_hash_key(double value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

_Bool bool_clone(char self);

char char_clone(char self);

short int short_clone(short short self);

int int_clone(int self);

long int long_clone(long self);

long int size_t_clone(long self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswascii(unsigned int c);

_Bool xiswalpha(unsigned int c);

_Bool xiswblank(unsigned int c);

_Bool xiswdigit(unsigned int c);

_Bool xiswalnum(unsigned int c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

_Bool xisalpha(char c);

int string_length(char* str);

int charp_length(char* str);

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

char* string_operator_load_range_element(char* str, int head, int tail);

char* charp_operator_load_range_element(char* str, int head, int tail);

char* charp_reverse(char* str);

char* string_reverse(char* str);

char* xsprintf(char* msg, ...);

char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* string_split_char(char* self, char c);

struct list$1charph* charp_split_char(char* self, char c);

char* xrealpath(char* path);

char* xbasename(char* path);

char* xextname(char* path);

char* xdirname(char* path);

char* xnoextname(char* path);

char* bool_to_string(_Bool self);

char* char_to_string(char self);

char* short_to_string(short short self);

char* int_to_string(int self);

char* long_to_string(long self);

char* size_t_to_string(long int self);

char* float_to_string(float self);

char* double_to_string(double self);

char* string_to_string(char* self);

char* charp_to_string(char* self);

int bool_compare(_Bool left, _Bool right);

int char_compare(char left, char right);

int short_compare(short short left, short short right);

int int_compare(int left, int right);

int long_compare(long left, long right);

int float_compare(float left, float right);

int double_compare(float left, float right);

int size_t_compare(long left, long right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

int FILE_write(struct _IO_FILE* f, char* str);

char* FILE_read(struct _IO_FILE* f);

int FILE_fclose(struct _IO_FILE* f);

int* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

struct list$1charph* FILE_readlines(struct _IO_FILE* f);

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

int string_write(char* self, char* file_name, _Bool append);

int charp_write(char* self, char* file_name, _Bool append);

char* charp_read(char* file_name);

char* string_read(char* file_name);

char* charp_puts(char* self);

char* string_puts(char* self);

int int_printf(int self, char* msg);

char* string_printf(char* self, ...);

char* charp_printf(char* self, ...);

char* charp_print(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

struct integer* integer_initialize(struct integer* self, long value);

struct integer* char_to_integer(char self);

struct integer* short_to_integer(short short self);

struct integer* int_to_integer(int self);

struct integer* long_to_integer(long self);

int integer_to_int(struct integer* self);

_Bool integer_equals(struct integer* self, struct integer* right);

int integer_compare(struct integer* self, struct integer* right);

_Bool integer_operator_equals(struct integer* self, struct integer* right);

_Bool integer_operator_not_equals(struct integer* self, struct integer* right);

struct integer* integer_operator_add(struct integer* left, struct integer* right);

struct integer* integer_operator_sub(struct integer* left, struct integer* right);

struct integer* integer_operator_mult(struct integer* left, struct integer* right);

struct integer* integer_operator_div(struct integer* left, struct integer* right);

struct integer* integer_operator_mod(struct integer* left, struct integer* right);

struct integer* integer_operator_lshift(struct integer* left, struct integer* right);

struct integer* integer_operator_rshift(struct integer* left, struct integer* right);

struct integer* integer_operator_gteq(struct integer* left, struct integer* right);

struct integer* integer_operator_lteq(struct integer* left, struct integer* right);

struct integer* integer_operator_lt(struct integer* left, struct integer* right);

struct integer* integer_operator_gt(struct integer* left, struct integer* right);

struct integer* integer_operator_and(struct integer* left, struct integer* right);

struct integer* integer_operator_xor(struct integer* left, struct integer* right);

struct integer* integer_operator_or(struct integer* left, struct integer* right);

struct integer* integer_operator_andand(struct integer* left, struct integer* right);

struct integer* integer_operator_oror(struct integer* left, struct integer* right);

int come_main_v1(int argc, char** argv);

_Bool node_compile(struct sNode* node, struct sInfo* info);

int come_main_v2(int argc, char** argv);

void err_msg(struct sInfo* info, char* msg, ...);

int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

char* make_come_type_name_string(struct sType* type, struct sInfo* info);

char* make_come_type_name_string_no_solved(struct sType* type, struct sInfo* info);

char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

char* header_function(struct sFun* fun, struct sInfo* info);

int transpile_v3(struct sInfo* info);

_Bool output_source_file_v3(struct sInfo* info);

void show_type(struct sType* type, struct sInfo* info);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

void add_last_code_to_source(struct sInfo* info);

void add_come_code_at_function_head(struct sInfo* info, char* code, ...);

void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...);

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

void add_come_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code2(struct sInfo* info, const char* msg, ...);

void add_come_last_code3(struct sInfo* info, const char* msg, ...);

void add_last_code_to_source_with_comma(struct sInfo* info);

void dec_stack_ptr(int value, struct sInfo* info);

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

void transpiler_clear_last_code(struct sInfo* info);

_Bool output_header_file(struct sInfo* info);

struct sType* solve_method_generics(struct sType* type, struct sInfo* info);

_Bool existance_free_right_value_objects(struct sInfo* info);

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);

_Bool create_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

struct sVar* get_variable_from_table(struct sVarTable* table, char* name);

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

void free_objects_on_break(struct sInfo* info);

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);

void free_right_value_objects(struct sInfo* info, _Bool comma);

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);

_Bool is_right_values(int right_value_num, struct sInfo* info);

int get_right_value_id_from_obj(char* obj);

void remove_object_from_right_values(int right_value_num, struct sInfo* info);

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_);

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

_Bool strmemcmp(char* p, char* p2);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

char* parse_attribute(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

char* backtrace_parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

int expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last);

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);

void arrange_stack(struct sInfo* info, int top);

struct sNode* parse_function(struct sInfo* info);

struct sNode* expression_v5(struct sInfo* info);

struct sNode* statment(struct sInfo* info);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

struct sNode* expression_node_v97(struct sInfo* info);

int transpile_v5(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* expression_node_v96(struct sInfo* info);

struct sNode* parse_tuple(struct sInfo* info);

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);

struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);

struct sNode* expression_v13(struct sInfo* info);

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_struct(char* type_name, struct sInfo* info);

char* get_none_generics_name(char* class_name);

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

void output_struct(struct sClass* klass, struct sInfo* info);

struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_union(char* type_name, struct sInfo* info);

struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_enum(char* type_name, struct sInfo* info);

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool compiletime_get_exception_value(struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

struct sModule* sModule_initialize(struct sModule* self);

static void sModule_finalize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
void sVarTable_finalize(struct sVarTable* self);

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);

static void sClassModule_finalize(struct sClassModule* self);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void sFun_finalize(struct sFun* self);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);

// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx){
void* __result_obj__;
unsigned short int __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    __result1__ = ((unsigned short int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
    return __result1__;
}
static inline unsigned int __bswap_32(unsigned int __bsx){
void* __result_obj__;
unsigned int __result2__;
memset(&__result_obj__, 0, sizeof(void*));
    __result2__ = ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
    return __result2__;
}
static inline unsigned long int __bswap_64(unsigned long int __bsx){
void* __result_obj__;
unsigned long int __result3__;
memset(&__result_obj__, 0, sizeof(void*));
    __result3__ = ((((__bsx)&18374686479671623680)>>56)|(((__bsx)&71776119061217280)>>40)|(((__bsx)&280375465082880)>>24)|(((__bsx)&1095216660480)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
    return __result3__;
}
static inline unsigned short int __uint16_identity(unsigned short int __x){
void* __result_obj__;
unsigned short int __result4__;
memset(&__result_obj__, 0, sizeof(void*));
    __result4__ = __x;
    return __result4__;
}
static inline unsigned int __uint32_identity(unsigned int __x){
void* __result_obj__;
unsigned int __result5__;
memset(&__result_obj__, 0, sizeof(void*));
    __result5__ = __x;
    return __result5__;
}
static inline unsigned long int __uint64_identity(unsigned long int __x){
void* __result_obj__;
unsigned long int __result6__;
memset(&__result_obj__, 0, sizeof(void*));
    __result6__ = __x;
    return __result6__;
}
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __result7__;
memset(&__result_obj__, 0, sizeof(void*));
    perror(msg);
    stackframe();
    exit(4);
    __result7__ = (_Bool)0;
    return __result7__;
}
static inline struct buffer* charpa_to_buffer(char* self, long int len){
void* __result_obj__;
void* right_value0;
void* right_value1;
struct buffer* result_0;
struct buffer* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
right_value1 = (void*)0;
memset(&result_0, 0, sizeof(struct buffer*));
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1897, "buffer"))))))));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_0,self,sizeof(char)*len);
    __result8__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* shortpa_to_buffer(short short* self, long int len){
void* __result_obj__;
void* right_value2;
void* right_value3;
struct buffer* result_1;
struct buffer* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
right_value3 = (void*)0;
memset(&result_1, 0, sizeof(struct buffer*));
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1904, "buffer"))))))));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    __result9__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* intpa_to_buffer(int* self, long int len){
void* __result_obj__;
void* right_value4;
void* right_value5;
struct buffer* result_2;
struct buffer* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
right_value5 = (void*)0;
memset(&result_2, 0, sizeof(struct buffer*));
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1911, "buffer"))))))));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    __result10__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* longpa_to_buffer(long* self, long int len){
void* __result_obj__;
void* right_value6;
void* right_value7;
struct buffer* result_3;
struct buffer* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
right_value7 = (void*)0;
memset(&result_3, 0, sizeof(struct buffer*));
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1918, "buffer"))))))));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    __result11__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* floatpa_to_buffer(float* self, long int len){
void* __result_obj__;
void* right_value8;
void* right_value9;
struct buffer* result_4;
struct buffer* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
right_value9 = (void*)0;
memset(&result_4, 0, sizeof(struct buffer*));
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1925, "buffer"))))))));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    __result12__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result12__;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* doublepa_to_buffer(double* self, long int len){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* result_5;
struct buffer* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct buffer*));
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1932, "buffer"))))))));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    __result13__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result13__;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* right_value12;
struct smart_pointer$1char* result_6;
void* right_value13;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
right_value13 = (void*)0;
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1948, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_6->p=result_6->memory->buf;
    __result14__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result14__;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* right_value14;
struct smart_pointer$1char* result_7;
void* right_value15;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
right_value15 = (void*)0;
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1958, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_7->p=(char*)result_7->memory->buf;
    __result15__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result15__;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* right_value16;
struct smart_pointer$1short* result_8;
void* right_value17;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
right_value17 = (void*)0;
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1968, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_8->p=(short short*)result_8->memory->buf;
    __result16__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result16__;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* right_value18;
struct smart_pointer$1int* result_9;
void* right_value19;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
right_value19 = (void*)0;
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1978, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_9->p=(int*)result_9->memory->buf;
    __result17__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result17__;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* right_value20;
struct smart_pointer$1long* result_10;
void* right_value21;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
right_value21 = (void*)0;
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1988, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_10->p=(long*)result_10->memory->buf;
    __result18__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result18__;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1char* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    __result20__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2159, "smart_pointer$1char")))),self,len)));
    come_call_finalizer3(right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1short* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    __result22__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2164, "smart_pointer$1short")))),self,len)));
    come_call_finalizer3(right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result22__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1int* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    __result24__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2169, "smart_pointer$1int")))),self,len)));
    come_call_finalizer3(right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, long int len){
void* __result_obj__;
void* right_value34;
void* right_value37;
struct smart_pointer$1long* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
right_value37 = (void*)0;
    __result26__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2174, "smart_pointer$1long")))),self,len)));
    come_call_finalizer3(right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result26__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, long int len){
void* __result_obj__;
void* right_value38;
void* right_value41;
struct smart_pointer$1float* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value41 = (void*)0;
    __result28__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2179, "smart_pointer$1float")))),self,len)));
    come_call_finalizer3(right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result28__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, long int len){
void* __result_obj__;
void* right_value42;
void* right_value45;
struct smart_pointer$1double* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
right_value45 = (void*)0;
    __result30__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2184, "smart_pointer$1double")))),self,len)));
    come_call_finalizer3(right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result30__;
}
static inline struct list$1char* charpa_to_list(char* self, long int len){
void* __result_obj__;
void* right_value46;
void* right_value50;
struct list$1char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
right_value50 = (void*)0;
    __result33__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2189, "list$1char")))),len,self)));
    come_call_finalizer3(right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result33__;
}
static inline struct list$1short* shortpa_to_list(short short* self, long int len){
void* __result_obj__;
void* right_value51;
void* right_value55;
struct list$1short* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value55 = (void*)0;
    __result36__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2194, "list$1short")))),len,self)));
    come_call_finalizer3(right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result36__;
}
static inline struct list$1int* intpa_to_list(int* self, long int len){
void* __result_obj__;
void* right_value56;
void* right_value60;
struct list$1int* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
right_value60 = (void*)0;
    __result39__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2199, "list$1int")))),len,self)));
    come_call_finalizer3(right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result39__;
}
static inline struct list$1long* longpa_to_list(long* self, long int len){
void* __result_obj__;
void* right_value61;
void* right_value65;
struct list$1long* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value65 = (void*)0;
    __result42__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2204, "list$1long")))),len,self)));
    come_call_finalizer3(right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline struct list$1float* floatpa_to_list(float* self, long int len){
void* __result_obj__;
void* right_value66;
void* right_value70;
struct list$1float* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value70 = (void*)0;
    __result45__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2209, "list$1float")))),len,self)));
    come_call_finalizer3(right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result45__;
}
static inline struct list$1double* doublepa_to_list(double* self, long int len){
void* __result_obj__;
void* right_value71;
void* right_value75;
struct list$1double* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value75 = (void*)0;
    __result48__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2214, "list$1double")))),len,self)));
    come_call_finalizer3(right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result48__;
}
static inline long int charpa_length(char* self, long int len){
void* __result_obj__;
long int __result49__;
memset(&__result_obj__, 0, sizeof(void*));
    __result49__ = len;
    return __result49__;
}
static inline long int shortpa_length(short short* self, long int len){
void* __result_obj__;
long int __result50__;
memset(&__result_obj__, 0, sizeof(void*));
    __result50__ = len;
    return __result50__;
}
static inline long int intpa_length(int* self, long int len){
void* __result_obj__;
long int __result51__;
memset(&__result_obj__, 0, sizeof(void*));
    __result51__ = len;
    return __result51__;
}
static inline long int longpa_length(long* self, long int len){
void* __result_obj__;
long int __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    __result52__ = len;
    return __result52__;
}
static inline long int floatpa_length(float* self, long int len){
void* __result_obj__;
long int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    __result53__ = len;
    return __result53__;
}
static inline long int doublepa_length(double* self, long int len){
void* __result_obj__;
long int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    __result54__ = len;
    return __result54__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value76;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    __result55__ = __result_obj__ = ((char*)(right_value76=xsprintf(msg,self)));
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result55__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value77;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
    __result56__ = __result_obj__ = ((char*)(right_value77=xsprintf(msg,self)));
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result56__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value78;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
    __result57__ = __result_obj__ = ((char*)(right_value78=xsprintf(msg,self)));
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result57__;
}

// body function














static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
void* right_value23;
void* right_value24;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(char)*size);
        self->p=(char*)self->memory->buf;
        __result19__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result19__;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(short short)*size);
        self->p=(short short*)self->memory->buf;
        __result21__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value31;
void* right_value32;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(int)*size);
        self->p=(int*)self->memory->buf;
        __result23__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value35;
void* right_value36;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(long)*size);
        self->p=(long*)self->memory->buf;
        __result25__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result25__;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value39;
void* right_value40;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
right_value40 = (void*)0;
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(float)*size);
        self->p=(float*)self->memory->buf;
        __result27__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result27__;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional5=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional5) {
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
void* right_value43;
void* right_value44;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
right_value44 = (void*)0;
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(double)*size);
        self->p=(double*)self->memory->buf;
        __result29__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result29__;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional6=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional6) {
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            list$1char_push_back(self,values[i_11]);
        }
        __result32__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result32__;
        come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__;
_Bool _if_conditional7;
void* right_value47;
struct list_item$1char* litem_12;
_Bool _if_conditional8;
void* right_value48;
struct list_item$1char* litem_13;
void* right_value49;
struct list_item$1char* litem_14;
struct list$1char* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
memset(&litem_12, 0, sizeof(struct list_item$1char*));
right_value48 = (void*)0;
memset(&litem_13, 0, sizeof(struct list_item$1char*));
right_value49 = (void*)0;
memset(&litem_14, 0, sizeof(struct list_item$1char*));
                if(_if_conditional7=self->len==0,                _if_conditional7) {
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 217, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_12->prev=((void*)0);
                    litem_12->next=((void*)0);
                    litem_12->item=item;
                    self->tail=litem_12;
                    self->head=litem_12;
                }
                else {
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 227, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_13->prev=self->head;
                        litem_13->next=((void*)0);
                        litem_13->item=item;
                        self->tail=litem_13;
                        self->head->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 237, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_14->prev=self->tail;
                        litem_14->next=((void*)0);
                        litem_14->item=item;
                        self->tail->next=litem_14;
                        self->tail=litem_14;
                    }
                }
                self->len++;
                __result31__ = __result_obj__ = self;
                return __result31__;
}

static void list_item$1charp_finalize(struct list_item$1char* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1charp_finalize(struct list$1char* self){
void* __result_obj__;
struct list_item$1char* it_15;
_Bool _while_condtional1;
struct list_item$1char* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_15, 0, sizeof(struct list_item$1char*));
memset(&prev_it_16, 0, sizeof(struct list_item$1char*));
            it_15=self->head;
            while(_while_condtional1=it_15!=((void*)0),            _while_condtional1) {
                prev_it_16=it_15;
                it_15=it_15->next;
                come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            list$1short_push_back(self,values[i_17]);
        }
        __result35__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result35__;
        come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__;
_Bool _if_conditional9;
void* right_value52;
struct list_item$1short* litem_18;
_Bool _if_conditional10;
void* right_value53;
struct list_item$1short* litem_19;
void* right_value54;
struct list_item$1short* litem_20;
struct list$1short* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1short*));
right_value53 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1short*));
right_value54 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1short*));
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 217, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_18->prev=((void*)0);
                    litem_18->next=((void*)0);
                    litem_18->item=item;
                    self->tail=litem_18;
                    self->head=litem_18;
                }
                else {
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 227, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_19->prev=self->head;
                        litem_19->next=((void*)0);
                        litem_19->item=item;
                        self->tail=litem_19;
                        self->head->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 237, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_20->prev=self->tail;
                        litem_20->next=((void*)0);
                        litem_20->item=item;
                        self->tail->next=litem_20;
                        self->tail=litem_20;
                    }
                }
                self->len++;
                __result34__ = __result_obj__ = self;
                return __result34__;
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1shortp_finalize(struct list$1short* self){
void* __result_obj__;
struct list_item$1short* it_21;
_Bool _while_condtional2;
struct list_item$1short* prev_it_22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_21, 0, sizeof(struct list_item$1short*));
memset(&prev_it_22, 0, sizeof(struct list_item$1short*));
            it_21=self->head;
            while(_while_condtional2=it_21!=((void*)0),            _while_condtional2) {
                prev_it_22=it_21;
                it_21=it_21->next;
                come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            list$1int_push_back(self,values[i_23]);
        }
        __result38__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result38__;
        come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__;
_Bool _if_conditional11;
void* right_value57;
struct list_item$1int* litem_24;
_Bool _if_conditional12;
void* right_value58;
struct list_item$1int* litem_25;
void* right_value59;
struct list_item$1int* litem_26;
struct list$1int* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1int*));
right_value58 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1int*));
right_value59 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1int*));
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 217, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_24->prev=((void*)0);
                    litem_24->next=((void*)0);
                    litem_24->item=item;
                    self->tail=litem_24;
                    self->head=litem_24;
                }
                else {
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 227, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_25->prev=self->head;
                        litem_25->next=((void*)0);
                        litem_25->item=item;
                        self->tail=litem_25;
                        self->head->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 237, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_26->prev=self->tail;
                        litem_26->next=((void*)0);
                        litem_26->item=item;
                        self->tail->next=litem_26;
                        self->tail=litem_26;
                    }
                }
                self->len++;
                __result37__ = __result_obj__ = self;
                return __result37__;
}

static void list_item$1intp_finalize(struct list_item$1int* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1intp_finalize(struct list$1int* self){
void* __result_obj__;
struct list_item$1int* it_27;
_Bool _while_condtional3;
struct list_item$1int* prev_it_28;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_27, 0, sizeof(struct list_item$1int*));
memset(&prev_it_28, 0, sizeof(struct list_item$1int*));
            it_27=self->head;
            while(_while_condtional3=it_27!=((void*)0),            _while_condtional3) {
                prev_it_28=it_27;
                it_27=it_27->next;
                come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            list$1long_push_back(self,values[i_29]);
        }
        __result41__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result41__;
        come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__;
_Bool _if_conditional13;
void* right_value62;
struct list_item$1long* litem_30;
_Bool _if_conditional14;
void* right_value63;
struct list_item$1long* litem_31;
void* right_value64;
struct list_item$1long* litem_32;
struct list$1long* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1long*));
right_value63 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1long*));
right_value64 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1long*));
                if(_if_conditional13=self->len==0,                _if_conditional13) {
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 217, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_30->prev=((void*)0);
                    litem_30->next=((void*)0);
                    litem_30->item=item;
                    self->tail=litem_30;
                    self->head=litem_30;
                }
                else {
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 227, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_31->prev=self->head;
                        litem_31->next=((void*)0);
                        litem_31->item=item;
                        self->tail=litem_31;
                        self->head->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 237, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_32->prev=self->tail;
                        litem_32->next=((void*)0);
                        litem_32->item=item;
                        self->tail->next=litem_32;
                        self->tail=litem_32;
                    }
                }
                self->len++;
                __result40__ = __result_obj__ = self;
                return __result40__;
}

static void list_item$1longp_finalize(struct list_item$1long* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1longp_finalize(struct list$1long* self){
void* __result_obj__;
struct list_item$1long* it_33;
_Bool _while_condtional4;
struct list_item$1long* prev_it_34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_33, 0, sizeof(struct list_item$1long*));
memset(&prev_it_34, 0, sizeof(struct list_item$1long*));
            it_33=self->head;
            while(_while_condtional4=it_33!=((void*)0),            _while_condtional4) {
                prev_it_34=it_33;
                it_33=it_33->next;
                come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            list$1float_push_back(self,values[i_35]);
        }
        __result44__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result44__;
        come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__;
_Bool _if_conditional15;
void* right_value67;
struct list_item$1float* litem_36;
_Bool _if_conditional16;
void* right_value68;
struct list_item$1float* litem_37;
void* right_value69;
struct list_item$1float* litem_38;
struct list$1float* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1float*));
right_value68 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1float*));
right_value69 = (void*)0;
memset(&litem_38, 0, sizeof(struct list_item$1float*));
                if(_if_conditional15=self->len==0,                _if_conditional15) {
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 217, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_36->prev=((void*)0);
                    litem_36->next=((void*)0);
                    litem_36->item=item;
                    self->tail=litem_36;
                    self->head=litem_36;
                }
                else {
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 227, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->head;
                        litem_37->next=((void*)0);
                        litem_37->item=item;
                        self->tail=litem_37;
                        self->head->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 237, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_38->prev=self->tail;
                        litem_38->next=((void*)0);
                        litem_38->item=item;
                        self->tail->next=litem_38;
                        self->tail=litem_38;
                    }
                }
                self->len++;
                __result43__ = __result_obj__ = self;
                return __result43__;
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1floatp_finalize(struct list$1float* self){
void* __result_obj__;
struct list_item$1float* it_39;
_Bool _while_condtional5;
struct list_item$1float* prev_it_40;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_39, 0, sizeof(struct list_item$1float*));
memset(&prev_it_40, 0, sizeof(struct list_item$1float*));
            it_39=self->head;
            while(_while_condtional5=it_39!=((void*)0),            _while_condtional5) {
                prev_it_40=it_39;
                it_39=it_39->next;
                come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            list$1double_push_back(self,values[i_41]);
        }
        __result47__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result47__;
        come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__;
_Bool _if_conditional17;
void* right_value72;
struct list_item$1double* litem_42;
_Bool _if_conditional18;
void* right_value73;
struct list_item$1double* litem_43;
void* right_value74;
struct list_item$1double* litem_44;
struct list$1double* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1double*));
right_value73 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1double*));
right_value74 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1double*));
                if(_if_conditional17=self->len==0,                _if_conditional17) {
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 217, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_42->prev=((void*)0);
                    litem_42->next=((void*)0);
                    litem_42->item=item;
                    self->tail=litem_42;
                    self->head=litem_42;
                }
                else {
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 227, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_43->prev=self->head;
                        litem_43->next=((void*)0);
                        litem_43->item=item;
                        self->tail=litem_43;
                        self->head->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 237, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_44->prev=self->tail;
                        litem_44->next=((void*)0);
                        litem_44->item=item;
                        self->tail->next=litem_44;
                        self->tail=litem_44;
                    }
                }
                self->len++;
                __result46__ = __result_obj__ = self;
                return __result46__;
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1doublep_finalize(struct list$1double* self){
void* __result_obj__;
struct list_item$1double* it_45;
_Bool _while_condtional6;
struct list_item$1double* prev_it_46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_45, 0, sizeof(struct list_item$1double*));
memset(&prev_it_46, 0, sizeof(struct list_item$1double*));
            it_45=self->head;
            while(_while_condtional6=it_45!=((void*)0),            _while_condtional6) {
                prev_it_46=it_45;
                it_45=it_45->next;
                come_call_finalizer3(prev_it_46,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
            }
}










struct sModule* sModule_initialize(struct sModule* self){
void* __result_obj__;
void* right_value79;
void* right_value80;
struct buffer* __dec_obj12;
void* right_value81;
void* right_value82;
struct buffer* __dec_obj13;
char* __dec_obj14;
char* __dec_obj15;
void* right_value83;
void* right_value84;
struct buffer* __dec_obj16;
struct sModule* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
    __dec_obj12=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value80=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value79=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 5, "buffer"))))))));
    come_call_finalizer3(__dec_obj12,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value79,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value80,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj13=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value82=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value81=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 6, "buffer"))))))));
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value81,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value82,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj14=self->mLastCode;
    self->mLastCode=((void*)0);
    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj15=self->mLastCode2;
    self->mLastCode2=((void*)0);
    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj16=self->mHeader;
    self->mHeader=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value84=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value83=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 9, "buffer"))))))));
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value83,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value84,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __result58__ = __result_obj__ = self;
    come_call_finalizer3(self,sModule_finalize, 0, 0, 1, 0, (void*)0);
    return __result58__;
    come_call_finalizer3(self,sModule_finalize, 0, 0, 1, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
void* __result_obj__;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional19=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional19) {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional20=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional20) {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional21=self!=((void*)0)&&self->mLastCode!=((void*)0),        _if_conditional21) {
            self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional22=self!=((void*)0)&&self->mLastCode2!=((void*)0),        _if_conditional22) {
            self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional23=self!=((void*)0)&&self->mLastCode3!=((void*)0),        _if_conditional23) {
            self->mLastCode3 = come_decrement_ref_count2(self->mLastCode3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional24=self!=((void*)0)&&self->mHeader!=((void*)0),        _if_conditional24) {
            come_call_finalizer3(self->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __result_obj__;
void* right_value85;
void* right_value91;
struct map$2charphsVarph* __dec_obj18;
static int id_60=0;
struct sVarTable* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
right_value91 = (void*)0;
    __dec_obj18=self->mVars;
    self->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value91=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value85=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "02constructors.c", 16, "map$2charphsVarph"))))))));
    come_call_finalizer3(__dec_obj18,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value85,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value91,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
    self->mGlobal=global;
    self->mParent=parent;
    self->mID=++id_60;
    __result61__ = __result_obj__ = self;
    come_call_finalizer3(self,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    return __result61__;
    come_call_finalizer3(self,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value86;
void* right_value87;
void* right_value88;
int i_53;
void* right_value89;
void* right_value90;
struct list$1charp* __dec_obj17;
struct map$2charphsVarph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value88 = (void*)0;
memset(&i_53, 0, sizeof(int));
right_value89 = (void*)0;
right_value90 = (void*)0;
        self->keys=(char**)come_increment_ref_count(((char**)(right_value86=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
        right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value87=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./neo-c.h", 1063, "sVar*%"))));
        come_call_finalizer3(right_value87,sVar_finalize, 0, 1, 0, 0, __result_obj__);
        self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value88=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_53=0;        i_53<128;        i_53++        ){
            self->item_existance[i_53]=(_Bool)0;
        }
        self->size=128;
        self->len=0;
        __dec_obj17=self->key_list;
        self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value90=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value89=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
        come_call_finalizer3(__dec_obj17,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value89,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value90,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
        self->it=0;
        __result60__ = __result_obj__ = self;
        come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result60__;
        come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional25=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional25) {
                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional26=self!=((void*)0)&&self->mCValueName!=((void*)0),            _if_conditional26) {
                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional27=self!=((void*)0)&&self->mType!=((void*)0),            _if_conditional27) {
                come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional45=self!=((void*)0)&&self->mFunName!=((void*)0),            _if_conditional45) {
                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional28;
_Bool _if_conditional30;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional28=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                    _if_conditional28) {
                        come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional30=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional30) {
                        come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional32=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional32) {
                        come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional33=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional33) {
                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional34=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional34) {
                        come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional35=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional35) {
                        come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional37=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional37) {
                        come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional38=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional38) {
                        come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional40=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional40) {
                        come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional41=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional41) {
                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional42=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional42) {
                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional43=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional43) {
                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional44=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional44) {
                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_47;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_47, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_48, 0, sizeof(struct list_item$1sTypeph*));
                            it_47=self->head;
                            while(_while_condtional7=it_47!=((void*)0),                            _while_condtional7) {
                                prev_it_48=it_47;
                                it_47=it_47->next;
                                come_call_finalizer3(prev_it_48,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional29=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional29) {
                                        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_49;
_Bool _while_condtional8;
struct list_item$1sNodeph* prev_it_50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_49, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_50, 0, sizeof(struct list_item$1sNodeph*));
                            it_49=self->head;
                            while(_while_condtional8=it_49!=((void*)0),                            _while_condtional8) {
                                prev_it_50=it_49;
                                it_49=it_49->next;
                                come_call_finalizer3(prev_it_50,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional36=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional36) {
                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_51;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_51, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_52, 0, sizeof(struct list_item$1charph*));
                            it_51=self->head;
                            while(_while_condtional9=it_51!=((void*)0),                            _while_condtional9) {
                                prev_it_52=it_51;
                                it_51=it_51->next;
                                come_call_finalizer3(prev_it_52,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional39;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional39=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional39) {
                                        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result59__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
            return __result59__;
            come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_54;
_Bool _while_condtional10;
struct list_item$1charp* prev_it_55;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_54, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_55, 0, sizeof(struct list_item$1charp*));
                it_54=self->head;
                while(_while_condtional10=it_54!=((void*)0),                _while_condtional10) {
                    prev_it_55=it_54;
                    it_54=it_54->next;
                    come_call_finalizer3(prev_it_55,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_56;
_Bool _if_conditional46;
_Bool _if_conditional47;
int i_57;
_Bool _if_conditional48;
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_56, 0, sizeof(int));
memset(&i_57, 0, sizeof(int));
            for(            i_56=0;            i_56<self->size;            i_56++            ){
                if(_if_conditional46=self->item_existance[i_56],                _if_conditional46) {
                    if(_if_conditional47=1,                    _if_conditional47) {
                        come_call_finalizer3(self->items[i_56],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_57=0;            i_57<self->size;            i_57++            ){
                if(_if_conditional48=self->item_existance[i_57],                _if_conditional48) {
                    if(_if_conditional49=1,                    _if_conditional49) {
                        self->keys[i_57] = come_decrement_ref_count2(self->keys[i_57], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_58;
_Bool _if_conditional50;
_Bool _if_conditional51;
int i_59;
_Bool _if_conditional52;
_Bool _if_conditional53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_58, 0, sizeof(int));
memset(&i_59, 0, sizeof(int));
        for(        i_58=0;        i_58<self->size;        i_58++        ){
            if(_if_conditional50=self->item_existance[i_58],            _if_conditional50) {
                if(_if_conditional51=1,                _if_conditional51) {
                    come_call_finalizer3(self->items[i_58],sVar_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->items);
        for(        i_59=0;        i_59<self->size;        i_59++        ){
            if(_if_conditional52=self->item_existance[i_59],            _if_conditional52) {
                if(_if_conditional53=1,                _if_conditional53) {
                    self->keys[i_59] = come_decrement_ref_count2(self->keys[i_59], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->keys);
        come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void sVarTable_finalize(struct sVarTable* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    come_call_finalizer3(self->mVars,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
void* __result_obj__;
int pointer_num_61;
char* p_62;
_Bool _while_condtional11;
_Bool _if_conditional54;
_Bool _while_condtional12;
void* right_value92;
void* right_value93;
char* name2_63;
struct sClass* klass_69;
struct sClass* generics_class_70;
_Bool _if_conditional66;
_Bool _if_conditional67;
void* right_value94;
struct sClass* klass2_71;
void* right_value95;
char* __dec_obj19;
void* right_value96;
char* __dec_obj20;
void* right_value103;
void* right_value104;
void* right_value105;
void* right_value106;
struct tuple1$1sTypeph* __dec_obj22;
void* right_value107;
void* right_value108;
struct list$1sTypeph* __dec_obj23;
void* right_value109;
void* right_value110;
struct tuple1$1sTypeph* __dec_obj24;
void* right_value111;
void* right_value112;
struct list$1sTypeph* __dec_obj25;
void* right_value113;
void* right_value114;
struct list$1sNodeph* __dec_obj26;
void* right_value115;
void* right_value116;
struct list$1sTypeph* __dec_obj27;
void* right_value117;
void* right_value118;
struct list$1charph* __dec_obj28;
struct tuple1$1sTypeph* __dec_obj29;
struct sNode* __dec_obj30;
void* right_value119;
char* __dec_obj31;
struct sType* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&pointer_num_61, 0, sizeof(int));
memset(&p_62, 0, sizeof(char*));
right_value92 = (void*)0;
right_value93 = (void*)0;
memset(&name2_63, 0, sizeof(char*));
memset(&klass_69, 0, sizeof(struct sClass*));
memset(&generics_class_70, 0, sizeof(struct sClass*));
right_value94 = (void*)0;
memset(&klass2_71, 0, sizeof(struct sClass*));
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
    pointer_num_61=0;
    p_62=name;
    while(_while_condtional11=*p_62,    _while_condtional11) {
        if(_if_conditional54=xisalpha(*p_62),        _if_conditional54) {
            p_62++;
        }
        else {
            break;
        }
    }
    while(_while_condtional12=*p_62==42,    _while_condtional12) {
        pointer_num_61++;
        p_62++;
    }
    name2_63=(char*)come_increment_ref_count(((char*)(right_value93=string_substring(((char*)(right_value92=__builtin_string(name))),0,-pointer_num_61-1))));
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_69=map$2charphsClassphp_operator_load_element(info->classes,name2_63);
    generics_class_70=map$2charphsClassphp_operator_load_element(info->generics_classes,name2_63);
    if(_if_conditional66=klass_69==((void*)0)&&generics_class_70==((void*)0),    _if_conditional66) {
        printf("%s %d: class not found(%s)(1)\n",info->sname,info->sline,name2_63);
    }
    if(klass_69) {
        self->mClass=klass_69;
    }
    else {
        klass2_71=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value94=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02constructors.c", 60, "sClass"))));
        come_call_finalizer3(right_value94,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj19=klass2_71->mName;
        klass2_71->mName=(char*)come_increment_ref_count(((char*)(right_value95=__builtin_string(name))));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj20=klass2_71->mDeclareSName;
        klass2_71->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value96=__builtin_string(info->sname))));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value103=__builtin_string(name)))),(struct sClass*)come_increment_ref_count(klass2_71));
        right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self->mClass=map$2charphsClassphp_operator_load_element(info->classes,((char*)(right_value104=__builtin_string(name))));
        right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(klass2_71,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj22=self->mNoSolvedGenericsType;
    self->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value106=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value105=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02constructors.c", 69, "tuple1$1sTypeph")))),((void*)0)))));
    come_call_finalizer3(__dec_obj22,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value105,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value106,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj23=self->mMultipleTypes;
    self->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value108=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value107=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02constructors.c", 70, "list$1sTypeph"))))))));
    come_call_finalizer3(__dec_obj23,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value107,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value108,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj24=self->mOriginalLoadVarType;
    self->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value110=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value109=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02constructors.c", 71, "tuple1$1sTypeph")))),((void*)0)))));
    come_call_finalizer3(__dec_obj24,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value109,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value110,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj25=self->mGenericsTypes;
    self->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value112=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value111=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02constructors.c", 72, "list$1sTypeph"))))))));
    come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value111,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value112,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj26=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value114=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value113=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "02constructors.c", 73, "list$1sNodeph"))))))));
    come_call_finalizer3(__dec_obj26,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value113,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value114,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    self->mOmitArrayNum=(_Bool)0;
    __dec_obj27=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value116=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value115=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "02constructors.c", 75, "list$1sTypeph"))))))));
    come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value115,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value116,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj28=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value118=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value117=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02constructors.c", 76, "list$1charph"))))))));
    come_call_finalizer3(__dec_obj28,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value117,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value118,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    self->mVarArgs=(_Bool)0;
    __dec_obj29=self->mResultType;
    self->mResultType=((void*)0);
    come_call_finalizer3(__dec_obj29,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    self->mUnsigned=(_Bool)0;
    self->mConstant=(_Bool)0;
    self->mRegister=(_Bool)0;
    self->mVolatile=(_Bool)0;
    self->mStatic=(_Bool)0;
    self->mRestrict=(_Bool)0;
    self->mImmutable=(_Bool)0;
    self->mLongLong=(_Bool)0;
    self->mHeap=heap;
    self->mDummyHeap=(_Bool)0;
    self->mNoHeap=(_Bool)0;
    self->mRefference=(_Bool)0;
    self->mPointerNum=pointer_num_61;
    self->mNoArrayPointerNum=0;
    __dec_obj30=self->mSizeNum;
    self->mSizeNum=((void*)0);
    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
    self->mDynamicArrayNum=0;
    self->mTypeOfExpression=0;
    __dec_obj31=self->mOriginalTypeName;
    self->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(""))));
    __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mOriginalPointerNum=0;
    self->mFunctionParam=(_Bool)0;
    __result94__ = __result_obj__ = self;
    come_call_finalizer3(self,sType_finalize, 0, 0, 1, 0, (void*)0);
    name2_63 = come_decrement_ref_count2(name2_63, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result94__;
    come_call_finalizer3(self,sType_finalize, 0, 0, 1, 0, (void*)0);
    name2_63 = come_decrement_ref_count2(name2_63, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_64;
unsigned int hash_65;
unsigned int it_66;
_Bool _while_condtional13;
_Bool _if_conditional55;
_Bool _if_conditional56;
struct sClass* __result62__;
_Bool _if_conditional64;
_Bool _if_conditional65;
struct sClass* __result63__;
struct sClass* __result64__;
struct sClass* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_64, 0, sizeof(struct sClass*));
memset(&hash_65, 0, sizeof(unsigned int));
memset(&it_66, 0, sizeof(unsigned int));
        memset(&default_value_64,0,sizeof(struct sClass*));
        hash_65=string_get_hash_key(((char*)key))%self->size;
        it_66=hash_65;
        while(_while_condtional13=(_Bool)1,        _while_condtional13) {
            if(_if_conditional55=self->item_existance[it_66],            _if_conditional55) {
                if(_if_conditional56=string_equals(self->keys[it_66],key),                _if_conditional56) {
                    __result62__ = __result_obj__ = self->items[it_66];
                    come_call_finalizer3(default_value_64,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    return __result62__;
                }
                it_66++;
                if(_if_conditional64=it_66>=self->size,                _if_conditional64) {
                    it_66=0;
                }
                else {
                    if(_if_conditional65=it_66==hash_65,                    _if_conditional65) {
                        __result63__ = __result_obj__ = default_value_64;
                        come_call_finalizer3(default_value_64,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result63__;
                    }
                }
            }
            else {
                __result64__ = __result_obj__ = default_value_64;
                come_call_finalizer3(default_value_64,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result64__;
            }
        }
        __result65__ = __result_obj__ = default_value_64;
        come_call_finalizer3(default_value_64,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result65__;
        come_call_finalizer3(default_value_64,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional62;
_Bool _if_conditional63;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional57=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional57) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional58=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional58) {
                            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional62=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional62) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional63=self!=((void*)0)&&self->mParentClassName!=((void*)0),                        _if_conditional63) {
                            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_67;
_Bool _while_condtional14;
struct list_item$1tuple2$2charphsTypephph* prev_it_68;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_67, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_68, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_67=self->head;
                                while(_while_condtional14=it_67!=((void*)0),                                _while_condtional14) {
                                    prev_it_68=it_67;
                                    it_67=it_67->next;
                                    come_call_finalizer3(prev_it_68,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional59;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional59=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional59) {
                                            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional60;
_Bool _if_conditional61;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional60=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional60) {
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional61=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional61) {
                                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional68;
unsigned int hash_89;
unsigned int it_90;
_Bool _while_condtional17;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool same_key_exist_107;
char* it2_110;
_Bool _if_conditional111;
_Bool _if_conditional112;
struct map$2charphsClassph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(unsigned int));
memset(&same_key_exist_107, 0, sizeof(_Bool));
memset(&it2_110, 0, sizeof(char*));
            if(_if_conditional68=self->len*10>=self->size,            _if_conditional68) {
                map$2charphsClassph_rehash(self);
            }
            hash_89=string_get_hash_key(key)%self->size;
            it_90=hash_89;
            while(_while_condtional17=(_Bool)1,            _while_condtional17) {
                if(_if_conditional80=self->item_existance[it_90],                _if_conditional80) {
                    if(_if_conditional81=string_equals(self->keys[it_90],key),                    _if_conditional81) {
                        if(_if_conditional82=1,                        _if_conditional82) {
                            list$1charp_remove(self->key_list,self->keys[it_90]);
                            self->keys[it_90] = come_decrement_ref_count2(self->keys[it_90], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_90]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_90]);
                            self->keys[it_90]=key;
                        }
                        if(_if_conditional102=1,                        _if_conditional102) {
                            come_call_finalizer3(self->items[it_90],sClass_finalize, 0, 0, 0, 0, (void*)0);
                            self->items[it_90]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_90]=item;
                        }
                        break;
                    }
                    it_90++;
                    if(_if_conditional103=it_90>=self->size,                    _if_conditional103) {
                        it_90=0;
                    }
                    else {
                        if(_if_conditional104=it_90==hash_89,                        _if_conditional104) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_90]=(_Bool)1;
                    if(_if_conditional105=1,                    _if_conditional105) {
                        self->keys[it_90]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_90]=key;
                    }
                    if(_if_conditional106=1,                    _if_conditional106) {
                        self->items[it_90]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_90]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_107=(_Bool)0;
            for(            it2_110=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_110=list$1charp_next(self->key_list)            ){
                if(_if_conditional111=string_equals(it2_110,key),                _if_conditional111) {
                    same_key_exist_107=(_Bool)1;
                }
            }
            if(_if_conditional112=!same_key_exist_107,            _if_conditional112) {
                list$1charp_push_back(self->key_list,key);
            }
            __result89__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result89__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_72;
void* right_value97;
char** keys_73;
void* right_value98;
struct sClass** items_74;
void* right_value99;
_Bool* item_existance_75;
int len_76;
char* it_79;
struct sClass* default_value_82;
struct sClass* it2_85;
unsigned int hash_86;
int n_87;
_Bool _while_condtional16;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
struct sClass* default_value_88;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_72, 0, sizeof(int));
right_value97 = (void*)0;
memset(&keys_73, 0, sizeof(char**));
right_value98 = (void*)0;
memset(&items_74, 0, sizeof(struct sClass**));
right_value99 = (void*)0;
memset(&item_existance_75, 0, sizeof(_Bool*));
memset(&len_76, 0, sizeof(int));
memset(&it_79, 0, sizeof(char*));
memset(&default_value_82, 0, sizeof(struct sClass*));
memset(&it2_85, 0, sizeof(struct sClass*));
memset(&hash_86, 0, sizeof(unsigned int));
memset(&n_87, 0, sizeof(int));
memset(&default_value_88, 0, sizeof(struct sClass*));
                    size_72=self->size*10;
                    keys_73=(char**)come_increment_ref_count(((char**)(right_value97=(char**)come_calloc(1, sizeof(char*)*(1*(size_72)), "./neo-c.h", 1313, "char*%"))));
                    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_74=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value98=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_72)), "./neo-c.h", 1314, "sClass*%"))));
                    come_call_finalizer3(right_value98,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    item_existance_75=(_Bool*)come_increment_ref_count(((_Bool*)(right_value99=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_72)), "./neo-c.h", 1315, "bool"))));
                    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_76=0;
                    for(                    it_79=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_79=map$2charphsClassph_next(self)                    ){
                        memset(&default_value_82,0,sizeof(struct sClass*));
                        it2_85=map$2charphsClassph_at(self,it_79,default_value_82);
                        hash_86=string_get_hash_key(it_79)%size_72;
                        n_87=hash_86;
                        while(_while_condtional16=(_Bool)1,                        _while_condtional16) {
                            if(_if_conditional77=item_existance_75[n_87],                            _if_conditional77) {
                                n_87++;
                                if(_if_conditional78=n_87>=size_72,                                _if_conditional78) {
                                    n_87=0;
                                }
                                else {
                                    if(_if_conditional79=n_87==hash_86,                                    _if_conditional79) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_75[n_87]=(_Bool)1;
                                keys_73[n_87]=it_79;
                                items_74[n_87]=map$2charphsClassph_at(self,it_79,default_value_88);
                                len_76++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_73;
                    self->items=items_74;
                    self->item_existance=item_existance_75;
                    self->size=size_72;
                    self->len=len_76;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional69;
char* result_77;
char* __result66__;
_Bool _if_conditional70;
char* __result67__;
char* result_78;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_77, 0, sizeof(char*));
memset(&result_78, 0, sizeof(char*));
                        if(_if_conditional69=self==((void*)0),                        _if_conditional69) {
                            memset(&result_77,0,sizeof(char*));
                            __result66__ = __result_obj__ = result_77;
                            return __result66__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result67__ = __result_obj__ = self->key_list->it->item;
                            return __result67__;
                        }
                        memset(&result_78,0,sizeof(char*));
                        __result68__ = __result_obj__ = result_78;
                        return __result68__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result69__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result69__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional71;
char* result_80;
char* __result70__;
_Bool _if_conditional72;
char* __result71__;
char* result_81;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_80, 0, sizeof(char*));
memset(&result_81, 0, sizeof(char*));
                        if(_if_conditional71=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional71) {
                            memset(&result_80,0,sizeof(char*));
                            __result70__ = __result_obj__ = result_80;
                            return __result70__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result71__ = __result_obj__ = self->key_list->it->item;
                            return __result71__;
                        }
                        memset(&result_81,0,sizeof(char*));
                        __result72__ = __result_obj__ = result_81;
                        return __result72__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_83;
unsigned int it_84;
_Bool _while_condtional15;
_Bool _if_conditional73;
_Bool _if_conditional74;
struct sClass* __result73__;
_Bool _if_conditional75;
_Bool _if_conditional76;
struct sClass* __result74__;
struct sClass* __result75__;
struct sClass* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_83, 0, sizeof(unsigned int));
memset(&it_84, 0, sizeof(unsigned int));
                            hash_83=string_get_hash_key(((char*)key))%self->size;
                            it_84=hash_83;
                            while(_while_condtional15=(_Bool)1,                            _while_condtional15) {
                                if(_if_conditional73=self->item_existance[it_84],                                _if_conditional73) {
                                    if(_if_conditional74=string_equals(self->keys[it_84],key),                                    _if_conditional74) {
                                        __result73__ = __result_obj__ = self->items[it_84];
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result73__;
                                    }
                                    it_84++;
                                    if(_if_conditional75=it_84>=self->size,                                    _if_conditional75) {
                                        it_84=0;
                                    }
                                    else {
                                        if(_if_conditional76=it_84==hash_83,                                        _if_conditional76) {
                                            __result74__ = __result_obj__ = default_value;
                                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result74__;
                                        }
                                    }
                                }
                                else {
                                    __result75__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result75__;
                                }
                            }
                            __result76__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                            return __result76__;
                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_91;
struct list_item$1charp* it_92;
_Bool _while_condtional18;
_Bool _if_conditional83;
struct list$1charp* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_91, 0, sizeof(int));
memset(&it_92, 0, sizeof(struct list_item$1charp*));
                                it2_91=0;
                                it_92=self->head;
                                while(_while_condtional18=it_92!=((void*)0),                                _while_condtional18) {
                                    if(_if_conditional83=string_equals(it_92->item,item),                                    _if_conditional83) {
                                        list$1charp_delete(self,it2_91,it2_91+1);
                                        break;
                                    }
                                    it2_91++;
                                    it_92=it_92->next;
                                }
                                __result80__ = __result_obj__ = self;
                                return __result80__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
int tmp_93;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
struct list$1charp* __result77__;
_Bool _if_conditional90;
_Bool _if_conditional91;
struct list_item$1charp* it_96;
int i_97;
_Bool _while_condtional20;
_Bool _if_conditional92;
struct list_item$1charp* prev_it_98;
_Bool _if_conditional93;
_Bool _if_conditional94;
struct list_item$1charp* it_99;
int i_100;
_Bool _while_condtional21;
_Bool _if_conditional95;
_Bool _if_conditional96;
struct list_item$1charp* prev_it_101;
struct list_item$1charp* it_102;
struct list_item$1charp* head_prev_it_103;
struct list_item$1charp* tail_it_104;
int i_105;
_Bool _while_condtional22;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
struct list_item$1charp* prev_it_106;
_Bool _if_conditional100;
_Bool _if_conditional101;
struct list$1charp* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_93, 0, sizeof(int));
memset(&it_96, 0, sizeof(struct list_item$1charp*));
memset(&i_97, 0, sizeof(int));
memset(&prev_it_98, 0, sizeof(struct list_item$1charp*));
memset(&it_99, 0, sizeof(struct list_item$1charp*));
memset(&i_100, 0, sizeof(int));
memset(&prev_it_101, 0, sizeof(struct list_item$1charp*));
memset(&it_102, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_103, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_104, 0, sizeof(struct list_item$1charp*));
memset(&i_105, 0, sizeof(int));
memset(&prev_it_106, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional84=head<0,                                            _if_conditional84) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional85=tail<0,                                            _if_conditional85) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional86=head>tail,                                            _if_conditional86) {
                                                tmp_93=tail;
                                                tail=head;
                                                head=tmp_93;
                                            }
                                            if(_if_conditional87=head<0,                                            _if_conditional87) {
                                                head=0;
                                            }
                                            if(_if_conditional88=tail>self->len,                                            _if_conditional88) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional89=head==tail,                                            _if_conditional89) {
                                                __result77__ = __result_obj__ = self;
                                                return __result77__;
                                            }
                                            if(_if_conditional90=head==0&&tail==self->len,                                            _if_conditional90) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional91=head==0,                                                _if_conditional91) {
                                                    it_96=self->head;
                                                    i_97=0;
                                                    while(_while_condtional20=it_96!=((void*)0),                                                    _while_condtional20) {
                                                        if(_if_conditional92=i_97<tail,                                                        _if_conditional92) {
                                                            prev_it_98=it_96;
                                                            it_96=it_96->next;
                                                            i_97++;
                                                            come_call_finalizer3(prev_it_98,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional93=i_97==tail,                                                            _if_conditional93) {
                                                                self->head=it_96;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_96=it_96->next;
                                                                i_97++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional94=tail==self->len,                                                    _if_conditional94) {
                                                        it_99=self->head;
                                                        i_100=0;
                                                        while(_while_condtional21=it_99!=((void*)0),                                                        _while_condtional21) {
                                                            if(_if_conditional95=i_100==head,                                                            _if_conditional95) {
                                                                self->tail=it_99->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional96=i_100>=head,                                                            _if_conditional96) {
                                                                prev_it_101=it_99;
                                                                it_99=it_99->next;
                                                                i_100++;
                                                                come_call_finalizer3(prev_it_101,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_99=it_99->next;
                                                                i_100++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_102=self->head;
                                                        head_prev_it_103=((void*)0);
                                                        tail_it_104=((void*)0);
                                                        i_105=0;
                                                        while(_while_condtional22=it_102!=((void*)0),                                                        _while_condtional22) {
                                                            if(_if_conditional97=i_105==head,                                                            _if_conditional97) {
                                                                head_prev_it_103=it_102->prev;
                                                            }
                                                            if(_if_conditional98=i_105==tail,                                                            _if_conditional98) {
                                                                tail_it_104=it_102;
                                                            }
                                                            if(_if_conditional99=i_105>=head&&i_105<tail,                                                            _if_conditional99) {
                                                                prev_it_106=it_102;
                                                                it_102=it_102->next;
                                                                i_105++;
                                                                come_call_finalizer3(prev_it_106,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_102=it_102->next;
                                                                i_105++;
                                                            }
                                                        }
                                                        if(_if_conditional100=head_prev_it_103!=((void*)0),                                                        _if_conditional100) {
                                                            head_prev_it_103->next=tail_it_104;
                                                        }
                                                        if(_if_conditional101=tail_it_104!=((void*)0),                                                        _if_conditional101) {
                                                            tail_it_104->prev=head_prev_it_103;
                                                        }
                                                    }
                                                }
                                            }
                                            __result79__ = __result_obj__ = self;
                                            return __result79__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_94;
_Bool _while_condtional19;
struct list_item$1charp* prev_it_95;
struct list$1charp* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_94, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_95, 0, sizeof(struct list_item$1charp*));
                                                    it_94=self->head;
                                                    while(_while_condtional19=it_94!=((void*)0),                                                    _while_condtional19) {
                                                        prev_it_95=it_94;
                                                        it_94=it_94->next;
                                                        come_call_finalizer3(prev_it_95,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result78__ = __result_obj__ = self;
                                                    return __result78__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional107;
char* result_108;
char* __result81__;
_Bool _if_conditional108;
char* __result82__;
char* result_109;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_108, 0, sizeof(char*));
memset(&result_109, 0, sizeof(char*));
                if(_if_conditional107=self==((void*)0),                _if_conditional107) {
                    memset(&result_108,0,sizeof(char*));
                    __result81__ = __result_obj__ = result_108;
                    return __result81__;
                }
                self->it=self->head;
                if(self->it) {
                    __result82__ = __result_obj__ = self->it->item;
                    return __result82__;
                }
                memset(&result_109,0,sizeof(char*));
                __result83__ = __result_obj__ = result_109;
                return __result83__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
                __result84__ = self==((void*)0)||self->it==((void*)0);
                return __result84__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional109;
char* result_111;
char* __result85__;
_Bool _if_conditional110;
char* __result86__;
char* result_112;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_111, 0, sizeof(char*));
memset(&result_112, 0, sizeof(char*));
                if(_if_conditional109=self==((void*)0)||self->it==((void*)0),                _if_conditional109) {
                    memset(&result_111,0,sizeof(char*));
                    __result85__ = __result_obj__ = result_111;
                    return __result85__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result86__ = __result_obj__ = self->it->item;
                    return __result86__;
                }
                memset(&result_112,0,sizeof(char*));
                __result87__ = __result_obj__ = result_112;
                return __result87__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional113;
void* right_value100;
struct list_item$1charp* litem_113;
_Bool _if_conditional114;
void* right_value101;
struct list_item$1charp* litem_114;
void* right_value102;
struct list_item$1charp* litem_115;
struct list$1charp* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1charp*));
right_value101 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1charp*));
right_value102 = (void*)0;
memset(&litem_115, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional113=self->len==0,                    _if_conditional113) {
                        litem_113=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value100=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                        come_call_finalizer3(right_value100,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_113->prev=((void*)0);
                        litem_113->next=((void*)0);
                        litem_113->item=item;
                        self->tail=litem_113;
                        self->head=litem_113;
                    }
                    else {
                        if(_if_conditional114=self->len==1,                        _if_conditional114) {
                            litem_114=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value101=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                            come_call_finalizer3(right_value101,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_114->prev=self->head;
                            litem_114->next=((void*)0);
                            litem_114->item=item;
                            self->tail=litem_114;
                            self->head->next=litem_114;
                        }
                        else {
                            litem_115=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value102=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                            come_call_finalizer3(right_value102,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_115->prev=self->tail;
                            litem_115->next=((void*)0);
                            litem_115->item=item;
                            self->tail->next=litem_115;
                            self->tail=litem_115;
                        }
                    }
                    self->len++;
                    __result88__ = __result_obj__ = self;
                    return __result88__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj21;
struct tuple1$1sTypeph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj21=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj21,sType_finalize, 0, 0, 0, 0, (void*)0);
        __result90__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result90__;
        come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result91__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        return __result91__;
        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_116;
_Bool _while_condtional23;
struct list_item$1sTypeph* prev_it_117;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_116, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_117, 0, sizeof(struct list_item$1sTypeph*));
        it_116=self->head;
        while(_while_condtional23=it_116!=((void*)0),        _while_condtional23) {
            prev_it_117=it_116;
            it_116=it_116->next;
            come_call_finalizer3(prev_it_117,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result92__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
        return __result92__;
        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_118;
_Bool _while_condtional24;
struct list_item$1sNodeph* prev_it_119;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_118, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_119, 0, sizeof(struct list_item$1sNodeph*));
        it_118=self->head;
        while(_while_condtional24=it_118!=((void*)0),        _while_condtional24) {
            prev_it_119=it_118;
            it_118=it_118->next;
            come_call_finalizer3(prev_it_119,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result93__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result93__;
        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_120;
_Bool _while_condtional25;
struct list_item$1charph* prev_it_121;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_120, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_121, 0, sizeof(struct list_item$1charph*));
        it_120=self->head;
        while(_while_condtional25=it_120!=((void*)0),        _while_condtional25) {
            prev_it_121=it_120;
            it_120=it_120->next;
            come_call_finalizer3(prev_it_121,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional117;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional117=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional117) {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info){
void* __result_obj__;
void* right_value120;
char* __dec_obj32;
void* right_value121;
void* right_value122;
struct list$1tuple2$2charphsTypephph* __dec_obj33;
void* right_value123;
char* __dec_obj34;
struct sClass* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
    self->mNumber=number;
    self->mStruct=struct_;
    self->mUnion=union_;
    self->mGenerics=generics;
    self->mMethodGenerics=method_generics;
    self->mEnum=(_Bool)0;
    self->mProtocol=protocol_;
    self->mFloat=float_;
    self->mEnum=enum_;
    __dec_obj32=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value120=__builtin_string(name))));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mGenericsNum=generics_num;
    self->mMethodGenericsNum=method_generics_num;
    __dec_obj33=self->mFields;
    self->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value122=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value121=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "02constructors.c", 124, "list$1tuple2$2charphsTypephph"))))))));
    come_call_finalizer3(__dec_obj33,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value121,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value122,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj34=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value123=__builtin_string(info->sname))));
    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result96__ = __result_obj__ = self;
    come_call_finalizer3(self,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result96__;
    come_call_finalizer3(self,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result95__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result95__;
        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_122;
_Bool _while_condtional26;
struct list_item$1tuple2$2charphsTypephph* prev_it_123;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_122, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_123, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        it_122=self->head;
        while(_while_condtional26=it_122!=((void*)0),        _while_condtional26) {
            prev_it_123=it_122;
            it_122=it_122->next;
            come_call_finalizer3(prev_it_123,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value124;
char* __dec_obj35;
void* right_value125;
char* __dec_obj36;
void* right_value126;
void* right_value127;
struct list$1charph* __dec_obj37;
void* right_value128;
char* __dec_obj38;
struct sClassModule* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
    __dec_obj35=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value124=charp_clone(name))));
    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj36=self->mText;
    self->mText=(char*)come_increment_ref_count(((char*)(right_value125=string_clone(text))));
    __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj37=self->mParams;
    self->mParams=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value127=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value126=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02constructors.c", 135, "list$1charph"))))))));
    come_call_finalizer3(__dec_obj37,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value126,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value127,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj38=self->mSName;
    self->mSName=(char*)come_increment_ref_count(((char*)(right_value128=__builtin_string(sname))));
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mSLine=sline;
    __result97__ = __result_obj__ = self;
    come_call_finalizer3(self,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    text = come_decrement_ref_count2(text, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    sname = come_decrement_ref_count2(sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result97__;
    come_call_finalizer3(self,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    text = come_decrement_ref_count2(text, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    sname = come_decrement_ref_count2(sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sClassModule_finalize(struct sClassModule* self){
void* __result_obj__;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional118=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional118) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional119=self!=((void*)0)&&self->mText!=((void*)0),        _if_conditional119) {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional120=self!=((void*)0)&&self->mParams!=((void*)0),        _if_conditional120) {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional121=self!=((void*)0)&&self->mSName!=((void*)0),        _if_conditional121) {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info){
void* __result_obj__;
char* __dec_obj39;
struct sType* __dec_obj40;
struct list$1sTypeph* __dec_obj41;
struct list$1charph* __dec_obj42;
struct list$1charph* __dec_obj43;
void* right_value129;
void* right_value130;
struct sType* __dec_obj44;
struct list$1sTypeph* o2_saved_124;
struct sType* it_127;
void* right_value169;
struct list$1charph* o2_saved_151;
char* it_154;
void* right_value173;
void* right_value174;
void* right_value175;
struct tuple1$1sTypeph* __dec_obj74;
void* right_value176;
void* right_value177;
struct buffer* __dec_obj75;
void* right_value178;
void* right_value179;
struct buffer* __dec_obj76;
void* right_value180;
void* right_value181;
struct buffer* __dec_obj77;
void* right_value182;
void* right_value183;
struct buffer* __dec_obj78;
void* right_value196;
struct sBlock* __dec_obj83;
char* __dec_obj84;
void* right_value197;
char* __dec_obj85;
struct sFun* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&o2_saved_124, 0, sizeof(struct list$1sTypeph*));
memset(&it_127, 0, sizeof(struct sType*));
right_value169 = (void*)0;
memset(&o2_saved_151, 0, sizeof(struct list$1charph*));
memset(&it_154, 0, sizeof(char*));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
    __dec_obj39=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj40=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj41=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj41,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj42=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj42,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj43=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj43,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mExternal=external;
    self->mVarArgs=var_args;
    self->mStatic=static_;
    __dec_obj44=self->mLambdaType;
    self->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value129=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02constructors.c", 153, "sType")))),"lambda",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value129,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value130,sType_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_124=(struct list$1sTypeph*)come_increment_ref_count((param_types)),it_127=list$1sTypeph_begin((o2_saved_124));    !list$1sTypeph_end((o2_saved_124));    it_127=list$1sTypeph_next((o2_saved_124))    ){
        list$1sTypeph_push_back(self->mLambdaType->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=sType_clone(it_127)))));
        come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer3(o2_saved_124,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_151=(struct list$1charph*)come_increment_ref_count((param_names)),it_154=list$1charph_begin((o2_saved_151));    !list$1charph_end((o2_saved_151));    it_154=list$1charph_next((o2_saved_151))    ){
        list$1charph_push_back(self->mLambdaType->mParamNames,(char*)come_increment_ref_count(((char*)(right_value173=string_clone(it_154)))));
        right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer3(o2_saved_151,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj74=self->mLambdaType->mResultType;
    self->mLambdaType->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value175=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value174=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "02constructors.c", 163, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type)))));
    come_call_finalizer3(__dec_obj74,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value174,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value175,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    self->mLambdaType->mVarArgs=var_args;
    __dec_obj75=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value177=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value176=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 166, "buffer"))))))));
    come_call_finalizer3(__dec_obj75,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value176,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value177,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj76=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value179=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value178=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 167, "buffer"))))))));
    come_call_finalizer3(__dec_obj76,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value178,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value179,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj77=self->mSourceHead2;
    self->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value181=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value180=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 168, "buffer"))))))));
    come_call_finalizer3(__dec_obj77,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value180,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value181,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj78=self->mSourceDefer;
    self->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value183=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value182=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02constructors.c", 169, "buffer"))))))));
    come_call_finalizer3(__dec_obj78,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value182,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value183,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj83=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value196=sBlock_clone(block))));
    come_call_finalizer3(__dec_obj83,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value196,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj84=self->mComeHeader;
    self->mComeHeader=(char*)come_increment_ref_count(come_header);
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj85=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string(declare_sname))));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result147__ = __result_obj__ = self;
    come_call_finalizer3(self,sFun_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(block,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_header = come_decrement_ref_count2(come_header, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    declare_sname = come_decrement_ref_count2(declare_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result147__;
    come_call_finalizer3(self,sFun_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(block,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_header = come_decrement_ref_count2(come_header, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    declare_sname = come_decrement_ref_count2(declare_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional122;
struct sType* result_125;
struct sType* __result98__;
_Bool _if_conditional123;
struct sType* __result99__;
struct sType* result_126;
struct sType* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_125, 0, sizeof(struct sType*));
memset(&result_126, 0, sizeof(struct sType*));
        if(_if_conditional122=self==((void*)0),        _if_conditional122) {
            memset(&result_125,0,sizeof(struct sType*));
            __result98__ = __result_obj__ = result_125;
            return __result98__;
        }
        self->it=self->head;
        if(self->it) {
            __result99__ = __result_obj__ = self->it->item;
            return __result99__;
        }
        memset(&result_126,0,sizeof(struct sType*));
        __result100__ = __result_obj__ = result_126;
        return __result100__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
        __result101__ = self==((void*)0)||self->it==((void*)0);
        return __result101__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional124;
struct sType* result_128;
struct sType* __result102__;
_Bool _if_conditional125;
struct sType* __result103__;
struct sType* result_129;
struct sType* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_128, 0, sizeof(struct sType*));
memset(&result_129, 0, sizeof(struct sType*));
        if(_if_conditional124=self==((void*)0)||self->it==((void*)0),        _if_conditional124) {
            memset(&result_128,0,sizeof(struct sType*));
            __result102__ = __result_obj__ = result_128;
            return __result102__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result103__ = __result_obj__ = self->it->item;
            return __result103__;
        }
        memset(&result_129,0,sizeof(struct sType*));
        __result104__ = __result_obj__ = result_129;
        return __result104__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional126;
void* right_value131;
struct list_item$1sTypeph* litem_130;
struct sType* __dec_obj45;
_Bool _if_conditional127;
void* right_value132;
struct list_item$1sTypeph* litem_131;
struct sType* __dec_obj46;
void* right_value133;
struct list_item$1sTypeph* litem_132;
struct sType* __dec_obj47;
struct list$1sTypeph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
memset(&litem_130, 0, sizeof(struct list_item$1sTypeph*));
right_value132 = (void*)0;
memset(&litem_131, 0, sizeof(struct list_item$1sTypeph*));
right_value133 = (void*)0;
memset(&litem_132, 0, sizeof(struct list_item$1sTypeph*));
            if(_if_conditional126=self->len==0,            _if_conditional126) {
                litem_130=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value131=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 217, "list_item$1sTypeph"))));
                come_call_finalizer3(right_value131,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_130->prev=((void*)0);
                litem_130->next=((void*)0);
                __dec_obj45=litem_130->item;
                litem_130->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_130;
                self->head=litem_130;
            }
            else {
                if(_if_conditional127=self->len==1,                _if_conditional127) {
                    litem_131=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value132=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 227, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value132,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_131->prev=self->head;
                    litem_131->next=((void*)0);
                    __dec_obj46=litem_131->item;
                    litem_131->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_131;
                    self->head->next=litem_131;
                }
                else {
                    litem_132=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value133=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 237, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value133,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_132->prev=self->tail;
                    litem_132->next=((void*)0);
                    __dec_obj47=litem_132->item;
                    litem_132->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_132;
                    self->tail=litem_132;
                }
            }
            self->len++;
            __result105__ = __result_obj__ = self;
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result105__;
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional128;
struct sType* __result106__;
void* right_value134;
struct sType* result_133;
_Bool _if_conditional129;
_Bool _if_conditional130;
void* right_value141;
struct list$1sTypeph* __dec_obj51;
_Bool _if_conditional134;
void* right_value144;
struct tuple1$1sTypeph* __dec_obj53;
_Bool _if_conditional138;
void* right_value145;
struct tuple1$1sTypeph* __dec_obj54;
_Bool _if_conditional139;
void* right_value146;
char* __dec_obj55;
_Bool _if_conditional140;
void* right_value147;
struct list$1sTypeph* __dec_obj56;
_Bool _if_conditional141;
void* right_value155;
struct list$1sNodeph* __dec_obj60;
_Bool _if_conditional154;
_Bool _if_conditional155;
void* right_value156;
struct list$1sTypeph* __dec_obj61;
_Bool _if_conditional156;
void* right_value163;
struct list$1charph* __dec_obj65;
_Bool _if_conditional160;
void* right_value164;
struct tuple1$1sTypeph* __dec_obj66;
_Bool _if_conditional161;
_Bool _if_conditional162;
void* right_value165;
struct sNode* __dec_obj67;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value166;
struct sNode* __dec_obj68;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value167;
char* __dec_obj69;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value168;
char* __dec_obj70;
_Bool _if_conditional201;
struct sType* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
memset(&result_133, 0, sizeof(struct sType*));
right_value141 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
            if(_if_conditional128=self==(void*)0,            _if_conditional128) {
                __result106__ = __result_obj__ = (void*)0;
                return __result106__;
            }
            result_133=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value134,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional129=self!=((void*)0),            _if_conditional129) {
                result_133->mClass=self->mClass;
            }
            if(_if_conditional130=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional130) {
                __dec_obj51=result_133->mMultipleTypes;
                result_133->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value141=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer3(__dec_obj51,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value141,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional134=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional134) {
                __dec_obj53=result_133->mNoSolvedGenericsType;
                result_133->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value144=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj53,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value144,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional138=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional138) {
                __dec_obj54=result_133->mOriginalLoadVarType;
                result_133->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value145=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value145,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional139=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional139) {
                __dec_obj55=result_133->mGenericsName;
                result_133->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value146=string_clone(self->mGenericsName))));
                __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional140=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional140) {
                __dec_obj56=result_133->mGenericsTypes;
                result_133->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value147=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer3(__dec_obj56,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value147,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional141=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional141) {
                __dec_obj60=result_133->mArrayNum;
                result_133->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value155=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj60,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value155,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional154=self!=((void*)0),            _if_conditional154) {
                result_133->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional155=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional155) {
                __dec_obj61=result_133->mParamTypes;
                result_133->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value156=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer3(__dec_obj61,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value156,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional156=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional156) {
                __dec_obj65=result_133->mParamNames;
                result_133->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value163=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj65,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value163,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional160=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional160) {
                __dec_obj66=result_133->mResultType;
                result_133->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value164=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj66,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value164,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional161=self!=((void*)0),            _if_conditional161) {
                result_133->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional162=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional162) {
                __dec_obj67=result_133->mAlignas;
                result_133->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value165=sNode_clone(self->mAlignas))));
                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value165) { right_value165 = come_decrement_ref_count2(right_value165, ((struct sNode*)right_value165)->finalize, ((struct sNode*)right_value165)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional163=self!=((void*)0),            _if_conditional163) {
                result_133->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional164=self!=((void*)0),            _if_conditional164) {
                result_133->mShort=self->mShort;
            }
            if(_if_conditional165=self!=((void*)0),            _if_conditional165) {
                result_133->mLong=self->mLong;
            }
            if(_if_conditional166=self!=((void*)0),            _if_conditional166) {
                result_133->mLongLong=self->mLongLong;
            }
            if(_if_conditional167=self!=((void*)0),            _if_conditional167) {
                result_133->mConstant=self->mConstant;
            }
            if(_if_conditional168=self!=((void*)0),            _if_conditional168) {
                result_133->mRegister=self->mRegister;
            }
            if(_if_conditional169=self!=((void*)0),            _if_conditional169) {
                result_133->mVolatile=self->mVolatile;
            }
            if(_if_conditional170=self!=((void*)0),            _if_conditional170) {
                result_133->mStatic=self->mStatic;
            }
            if(_if_conditional171=self!=((void*)0),            _if_conditional171) {
                result_133->mRecord=self->mRecord;
            }
            if(_if_conditional172=self!=((void*)0),            _if_conditional172) {
                result_133->mExtern=self->mExtern;
            }
            if(_if_conditional173=self!=((void*)0),            _if_conditional173) {
                result_133->mRestrict=self->mRestrict;
            }
            if(_if_conditional174=self!=((void*)0),            _if_conditional174) {
                result_133->mImmutable=self->mImmutable;
            }
            if(_if_conditional175=self!=((void*)0),            _if_conditional175) {
                result_133->mHeap=self->mHeap;
            }
            if(_if_conditional176=self!=((void*)0),            _if_conditional176) {
                result_133->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional177=self!=((void*)0),            _if_conditional177) {
                result_133->mDelegate=self->mDelegate;
            }
            if(_if_conditional178=self!=((void*)0),            _if_conditional178) {
                result_133->mShare=self->mShare;
            }
            if(_if_conditional179=self!=((void*)0),            _if_conditional179) {
                result_133->mClone=self->mClone;
            }
            if(_if_conditional180=self!=((void*)0),            _if_conditional180) {
                result_133->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional181=self!=((void*)0),            _if_conditional181) {
                result_133->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional182=self!=((void*)0),            _if_conditional182) {
                result_133->mRefference=self->mRefference;
            }
            if(_if_conditional183=self!=((void*)0),            _if_conditional183) {
                result_133->mException=self->mException;
            }
            if(_if_conditional184=self!=((void*)0),            _if_conditional184) {
                result_133->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional185=self!=((void*)0),            _if_conditional185) {
                result_133->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional186=self!=((void*)0),            _if_conditional186) {
                result_133->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional187=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional187) {
                __dec_obj68=result_133->mSizeNum;
                result_133->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value166=sNode_clone(self->mSizeNum))));
                if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value166) { right_value166 = come_decrement_ref_count2(right_value166, ((struct sNode*)right_value166)->finalize, ((struct sNode*)right_value166)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional188=self!=((void*)0),            _if_conditional188) {
                result_133->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional189=self!=((void*)0),            _if_conditional189) {
                result_133->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional190=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional190) {
                __dec_obj69=result_133->mOriginalTypeName;
                result_133->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value167=string_clone(self->mOriginalTypeName))));
                __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional191=self!=((void*)0),            _if_conditional191) {
                result_133->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional192=self!=((void*)0),            _if_conditional192) {
                result_133->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional193=self!=((void*)0),            _if_conditional193) {
                result_133->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional194=self!=((void*)0),            _if_conditional194) {
                result_133->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional195=self!=((void*)0),            _if_conditional195) {
                result_133->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional196=self!=((void*)0),            _if_conditional196) {
                result_133->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional197=self!=((void*)0),            _if_conditional197) {
                result_133->mInline=self->mInline;
            }
            if(_if_conditional198=self!=((void*)0),            _if_conditional198) {
                result_133->mNullValue=self->mNullValue;
            }
            if(_if_conditional199=self!=((void*)0),            _if_conditional199) {
                result_133->mGuardValue=self->mGuardValue;
            }
            if(_if_conditional200=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional200) {
                __dec_obj70=result_133->mAsmName;
                result_133->mAsmName=(char*)come_increment_ref_count(((char*)(right_value168=string_clone(self->mAsmName))));
                __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional201=self!=((void*)0),            _if_conditional201) {
                result_133->mArrayPointerType=self->mArrayPointerType;
            }
            __result120__ = __result_obj__ = result_133;
            come_call_finalizer3(result_133,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result120__;
            come_call_finalizer3(result_133,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional131;
struct list$1sTypeph* __result107__;
void* right_value135;
void* right_value136;
struct list$1sTypeph* result_134;
struct list_item$1sTypeph* it_135;
_Bool _while_condtional27;
void* right_value140;
struct list$1sTypeph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&result_134, 0, sizeof(struct list$1sTypeph*));
memset(&it_135, 0, sizeof(struct list_item$1sTypeph*));
right_value140 = (void*)0;
                    if(_if_conditional131=self==((void*)0),                    _if_conditional131) {
                        __result107__ = __result_obj__ = ((void*)0);
                        return __result107__;
                    }
                    result_134=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value136=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value135=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                    come_call_finalizer3(right_value135,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value136,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_135=self->head;
                    while(_while_condtional27=it_135!=((void*)0),                    _while_condtional27) {
                        list$1sTypeph_add(result_134,(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_clone(it_135->item)))));
                        come_call_finalizer3(right_value140,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        it_135=it_135->next;
                    }
                    __result109__ = __result_obj__ = result_134;
                    come_call_finalizer3(result_134,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result109__;
                    come_call_finalizer3(result_134,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional132;
void* right_value137;
struct list_item$1sTypeph* litem_136;
struct sType* __dec_obj48;
_Bool _if_conditional133;
void* right_value138;
struct list_item$1sTypeph* litem_137;
struct sType* __dec_obj49;
void* right_value139;
struct list_item$1sTypeph* litem_138;
struct sType* __dec_obj50;
struct list$1sTypeph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
memset(&litem_136, 0, sizeof(struct list_item$1sTypeph*));
right_value138 = (void*)0;
memset(&litem_137, 0, sizeof(struct list_item$1sTypeph*));
right_value139 = (void*)0;
memset(&litem_138, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional132=self->len==0,                            _if_conditional132) {
                                litem_136=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value137=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value137,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_136->prev=((void*)0);
                                litem_136->next=((void*)0);
                                __dec_obj48=litem_136->item;
                                litem_136->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_136;
                                self->head=litem_136;
                            }
                            else {
                                if(_if_conditional133=self->len==1,                                _if_conditional133) {
                                    litem_137=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value138=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value138,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_137->prev=self->head;
                                    litem_137->next=((void*)0);
                                    __dec_obj49=litem_137->item;
                                    litem_137->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_137;
                                    self->head->next=litem_137;
                                }
                                else {
                                    litem_138=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value139=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value139,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_138->prev=self->tail;
                                    litem_138->next=((void*)0);
                                    __dec_obj50=litem_138->item;
                                    litem_138->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_138;
                                    self->tail=litem_138;
                                }
                            }
                            self->len++;
                            __result108__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result108__;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional135;
struct tuple1$1sTypeph* __result110__;
void* right_value142;
struct tuple1$1sTypeph* result_139;
_Bool _if_conditional137;
void* right_value143;
struct sType* __dec_obj52;
struct tuple1$1sTypeph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
memset(&result_139, 0, sizeof(struct tuple1$1sTypeph*));
right_value143 = (void*)0;
                    if(_if_conditional135=self==(void*)0,                    _if_conditional135) {
                        __result110__ = __result_obj__ = (void*)0;
                        return __result110__;
                    }
                    result_139=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value142=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value142,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional137=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional137) {
                        __dec_obj52=result_139->v1;
                        result_139->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value143,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    __result111__ = __result_obj__ = result_139;
                    come_call_finalizer3(result_139,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result111__;
                    come_call_finalizer3(result_139,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional136;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional136=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional136) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional142;
struct list$1sNodeph* __result112__;
void* right_value148;
void* right_value149;
struct list$1sNodeph* result_140;
struct list_item$1sNodeph* it_141;
_Bool _while_condtional28;
void* right_value154;
struct list$1sNodeph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&result_140, 0, sizeof(struct list$1sNodeph*));
memset(&it_141, 0, sizeof(struct list_item$1sNodeph*));
right_value154 = (void*)0;
                    if(_if_conditional142=self==((void*)0),                    _if_conditional142) {
                        __result112__ = __result_obj__ = ((void*)0);
                        return __result112__;
                    }
                    result_140=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value149=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value148=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                    come_call_finalizer3(right_value148,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value149,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_141=self->head;
                    while(_while_condtional28=it_141!=((void*)0),                    _while_condtional28) {
                        list$1sNodeph_add(result_140,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value154=sNode_clone(it_141->item)))));
                        if(right_value154) { right_value154 = come_decrement_ref_count2(right_value154, ((struct sNode*)right_value154)->finalize, ((struct sNode*)right_value154)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_141=it_141->next;
                    }
                    __result116__ = __result_obj__ = result_140;
                    come_call_finalizer3(result_140,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result116__;
                    come_call_finalizer3(result_140,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional143;
void* right_value150;
struct list_item$1sNodeph* litem_142;
struct sNode* __dec_obj57;
_Bool _if_conditional144;
void* right_value151;
struct list_item$1sNodeph* litem_143;
struct sNode* __dec_obj58;
void* right_value152;
struct list_item$1sNodeph* litem_144;
struct sNode* __dec_obj59;
struct list$1sNodeph* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
memset(&litem_142, 0, sizeof(struct list_item$1sNodeph*));
right_value151 = (void*)0;
memset(&litem_143, 0, sizeof(struct list_item$1sNodeph*));
right_value152 = (void*)0;
memset(&litem_144, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional143=self->len==0,                            _if_conditional143) {
                                litem_142=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value150=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value150,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_142->prev=((void*)0);
                                litem_142->next=((void*)0);
                                __dec_obj57=litem_142->item;
                                litem_142->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_142;
                                self->head=litem_142;
                            }
                            else {
                                if(_if_conditional144=self->len==1,                                _if_conditional144) {
                                    litem_143=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value151=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value151,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_143->prev=self->head;
                                    litem_143->next=((void*)0);
                                    __dec_obj58=litem_143->item;
                                    litem_143->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_143;
                                    self->head->next=litem_143;
                                }
                                else {
                                    litem_144=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value152=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value152,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_144->prev=self->tail;
                                    litem_144->next=((void*)0);
                                    __dec_obj59=litem_144->item;
                                    litem_144->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_144;
                                    self->tail=litem_144;
                                }
                            }
                            self->len++;
                            __result113__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result113__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional145;
struct sNode* __result114__;
void* right_value153;
struct sNode* result_145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct sNode* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value153 = (void*)0;
memset(&result_145, 0, sizeof(struct sNode*));
                            if(_if_conditional145=self==(void*)0,                            _if_conditional145) {
                                __result114__ = __result_obj__ = (void*)0;
                                return __result114__;
                            }
                            result_145=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value153=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value153) { right_value153 = come_decrement_ref_count2(right_value153, ((struct sNode*)right_value153)->finalize, ((struct sNode*)right_value153)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional146=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional146) {
                                result_145->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional147=self!=((void*)0),                            _if_conditional147) {
                                result_145->finalize=self->finalize;
                            }
                            if(_if_conditional148=self!=((void*)0),                            _if_conditional148) {
                                result_145->clone=self->clone;
                            }
                            if(_if_conditional149=self!=((void*)0),                            _if_conditional149) {
                                result_145->compile=self->compile;
                            }
                            if(_if_conditional150=self!=((void*)0),                            _if_conditional150) {
                                result_145->sline=self->sline;
                            }
                            if(_if_conditional151=self!=((void*)0),                            _if_conditional151) {
                                result_145->sname=self->sname;
                            }
                            if(_if_conditional152=self!=((void*)0),                            _if_conditional152) {
                                result_145->terminated=self->terminated;
                            }
                            if(_if_conditional153=self!=((void*)0),                            _if_conditional153) {
                                result_145->kind=self->kind;
                            }
                            __result115__ = __result_obj__ = result_145;
                            if(result_145) { result_145 = come_decrement_ref_count2(result_145, ((struct sNode*)result_145)->finalize, ((struct sNode*)result_145)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result115__;
                            if(result_145) { result_145 = come_decrement_ref_count2(result_145, ((struct sNode*)result_145)->finalize, ((struct sNode*)result_145)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional157;
struct list$1charph* __result117__;
void* right_value157;
void* right_value158;
struct list$1charph* result_146;
struct list_item$1charph* it_147;
_Bool _while_condtional29;
void* right_value162;
struct list$1charph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&result_146, 0, sizeof(struct list$1charph*));
memset(&it_147, 0, sizeof(struct list_item$1charph*));
right_value162 = (void*)0;
                    if(_if_conditional157=self==((void*)0),                    _if_conditional157) {
                        __result117__ = __result_obj__ = ((void*)0);
                        return __result117__;
                    }
                    result_146=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value158=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value157=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                    come_call_finalizer3(right_value157,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value158,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_147=self->head;
                    while(_while_condtional29=it_147!=((void*)0),                    _while_condtional29) {
                        list$1charph_add(result_146,(char*)come_increment_ref_count(((char*)(right_value162=string_clone(it_147->item)))));
                        right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_147=it_147->next;
                    }
                    __result119__ = __result_obj__ = result_146;
                    come_call_finalizer3(result_146,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result119__;
                    come_call_finalizer3(result_146,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional158;
void* right_value159;
struct list_item$1charph* litem_148;
char* __dec_obj62;
_Bool _if_conditional159;
void* right_value160;
struct list_item$1charph* litem_149;
char* __dec_obj63;
void* right_value161;
struct list_item$1charph* litem_150;
char* __dec_obj64;
struct list$1charph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
memset(&litem_148, 0, sizeof(struct list_item$1charph*));
right_value160 = (void*)0;
memset(&litem_149, 0, sizeof(struct list_item$1charph*));
right_value161 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional158=self->len==0,                            _if_conditional158) {
                                litem_148=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value159=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                                come_call_finalizer3(right_value159,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_148->prev=((void*)0);
                                litem_148->next=((void*)0);
                                __dec_obj62=litem_148->item;
                                litem_148->item=(char*)come_increment_ref_count(item);
                                __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_148;
                                self->head=litem_148;
                            }
                            else {
                                if(_if_conditional159=self->len==1,                                _if_conditional159) {
                                    litem_149=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value160=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                    come_call_finalizer3(right_value160,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_149->prev=self->head;
                                    litem_149->next=((void*)0);
                                    __dec_obj63=litem_149->item;
                                    litem_149->item=(char*)come_increment_ref_count(item);
                                    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_149;
                                    self->head->next=litem_149;
                                }
                                else {
                                    litem_150=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value161=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                    come_call_finalizer3(right_value161,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_150->prev=self->tail;
                                    litem_150->next=((void*)0);
                                    __dec_obj64=litem_150->item;
                                    litem_150->item=(char*)come_increment_ref_count(item);
                                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_150;
                                    self->tail=litem_150;
                                }
                            }
                            self->len++;
                            __result118__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result118__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional202;
char* result_152;
char* __result121__;
_Bool _if_conditional203;
char* __result122__;
char* result_153;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_152, 0, sizeof(char*));
memset(&result_153, 0, sizeof(char*));
        if(_if_conditional202=self==((void*)0),        _if_conditional202) {
            memset(&result_152,0,sizeof(char*));
            __result121__ = __result_obj__ = result_152;
            return __result121__;
        }
        self->it=self->head;
        if(self->it) {
            __result122__ = __result_obj__ = self->it->item;
            return __result122__;
        }
        memset(&result_153,0,sizeof(char*));
        __result123__ = __result_obj__ = result_153;
        return __result123__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
        __result124__ = self==((void*)0)||self->it==((void*)0);
        return __result124__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional204;
char* result_155;
char* __result125__;
_Bool _if_conditional205;
char* __result126__;
char* result_156;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_155, 0, sizeof(char*));
memset(&result_156, 0, sizeof(char*));
        if(_if_conditional204=self==((void*)0)||self->it==((void*)0),        _if_conditional204) {
            memset(&result_155,0,sizeof(char*));
            __result125__ = __result_obj__ = result_155;
            return __result125__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result126__ = __result_obj__ = self->it->item;
            return __result126__;
        }
        memset(&result_156,0,sizeof(char*));
        __result127__ = __result_obj__ = result_156;
        return __result127__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional206;
void* right_value170;
struct list_item$1charph* litem_157;
char* __dec_obj71;
_Bool _if_conditional207;
void* right_value171;
struct list_item$1charph* litem_158;
char* __dec_obj72;
void* right_value172;
struct list_item$1charph* litem_159;
char* __dec_obj73;
struct list$1charph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1charph*));
right_value171 = (void*)0;
memset(&litem_158, 0, sizeof(struct list_item$1charph*));
right_value172 = (void*)0;
memset(&litem_159, 0, sizeof(struct list_item$1charph*));
            if(_if_conditional206=self->len==0,            _if_conditional206) {
                litem_157=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value170=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 217, "list_item$1charph"))));
                come_call_finalizer3(right_value170,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_157->prev=((void*)0);
                litem_157->next=((void*)0);
                __dec_obj71=litem_157->item;
                litem_157->item=(char*)come_increment_ref_count(item);
                __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                self->tail=litem_157;
                self->head=litem_157;
            }
            else {
                if(_if_conditional207=self->len==1,                _if_conditional207) {
                    litem_158=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value171=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph"))));
                    come_call_finalizer3(right_value171,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_158->prev=self->head;
                    litem_158->next=((void*)0);
                    __dec_obj72=litem_158->item;
                    litem_158->item=(char*)come_increment_ref_count(item);
                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_158;
                    self->head->next=litem_158;
                }
                else {
                    litem_159=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value172=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph"))));
                    come_call_finalizer3(right_value172,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_159->prev=self->tail;
                    litem_159->next=((void*)0);
                    __dec_obj73=litem_159->item;
                    litem_159->item=(char*)come_increment_ref_count(item);
                    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail->next=litem_159;
                    self->tail=litem_159;
                }
            }
            self->len++;
            __result128__ = __result_obj__ = self;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result128__;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional208;
struct sBlock* __result129__;
void* right_value184;
struct sBlock* result_160;
_Bool _if_conditional211;
void* right_value185;
struct list$1sNodeph* __dec_obj79;
_Bool _if_conditional212;
void* right_value195;
struct sVarTable* __dec_obj82;
struct sBlock* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
memset(&result_160, 0, sizeof(struct sBlock*));
right_value185 = (void*)0;
right_value195 = (void*)0;
        if(_if_conditional208=self==(void*)0,        _if_conditional208) {
            __result129__ = __result_obj__ = (void*)0;
            return __result129__;
        }
        result_160=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value184=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
        come_call_finalizer3(right_value184,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional211=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional211) {
            __dec_obj79=result_160->mNodes;
            result_160->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value185=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer3(__dec_obj79,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value185,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional212=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional212) {
            __dec_obj82=result_160->mVarTable;
            result_160->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value195=sVarTable_clone(self->mVarTable))));
            come_call_finalizer3(__dec_obj82,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value195,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __result146__ = __result_obj__ = result_160;
        come_call_finalizer3(result_160,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result146__;
        come_call_finalizer3(result_160,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional209;
_Bool _if_conditional210;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional209=self!=((void*)0)&&self->mNodes!=((void*)0),            _if_conditional209) {
                come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional210=self!=((void*)0)&&self->mVarTable!=((void*)0),            _if_conditional210) {
                come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional213;
struct sVarTable* __result130__;
void* right_value186;
struct sVarTable* result_161;
_Bool _if_conditional214;
void* right_value194;
struct map$2charphsVarph* __dec_obj81;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
struct sVarTable* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
memset(&result_161, 0, sizeof(struct sVarTable*));
right_value194 = (void*)0;
                if(_if_conditional213=self==(void*)0,                _if_conditional213) {
                    __result130__ = __result_obj__ = (void*)0;
                    return __result130__;
                }
                result_161=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value186=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                come_call_finalizer3(right_value186,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional214=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional214) {
                    __dec_obj81=result_161->mVars;
                    result_161->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value194=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer3(__dec_obj81,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value194,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional238=self!=((void*)0),                _if_conditional238) {
                    result_161->mGlobal=self->mGlobal;
                }
                if(_if_conditional239=self!=((void*)0),                _if_conditional239) {
                    result_161->mParent=self->mParent;
                }
                if(_if_conditional240=self!=((void*)0),                _if_conditional240) {
                    result_161->mID=self->mID;
                }
                __result145__ = __result_obj__ = result_161;
                come_call_finalizer3(result_161,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
                return __result145__;
                come_call_finalizer3(result_161,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional215;
struct map$2charphsVarph* __result131__;
void* right_value187;
void* right_value188;
struct map$2charphsVarph* result_162;
void* right_value189;
void* right_value190;
struct list$1charp* __dec_obj80;
char* it_165;
struct sVar* default_value_168;
struct sVar* it2_171;
struct map$2charphsVarph* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value187 = (void*)0;
right_value188 = (void*)0;
memset(&result_162, 0, sizeof(struct map$2charphsVarph*));
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&it_165, 0, sizeof(char*));
memset(&default_value_168, 0, sizeof(struct sVar*));
memset(&it2_171, 0, sizeof(struct sVar*));
                        if(_if_conditional215=self==((void*)0),                        _if_conditional215) {
                            __result131__ = __result_obj__ = ((void*)0);
                            return __result131__;
                        }
                        result_162=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value188=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value187=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1156, "map$2charphsVarph"))))))));
                        come_call_finalizer3(right_value187,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value188,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        __dec_obj80=result_162->key_list;
                        result_162->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value190=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value189=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1158, "list$1charp"))))))));
                        come_call_finalizer3(__dec_obj80,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value189,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value190,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        for(                        it_165=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_165=map$2charphsVarph_next(self)                        ){
                            memset(&default_value_168,0,sizeof(struct sVar*));
                            it2_171=map$2charphsVarph_at(self,it_165,default_value_168);
                            map$2charphsVarph_insert2(result_162,it_165,it2_171);
                        }
                        __result144__ = __result_obj__ = result_162;
                        come_call_finalizer3(result_162,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result144__;
                        come_call_finalizer3(result_162,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional216;
char* result_163;
char* __result132__;
_Bool _if_conditional217;
char* __result133__;
char* result_164;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_163, 0, sizeof(char*));
memset(&result_164, 0, sizeof(char*));
                            if(_if_conditional216=self==((void*)0),                            _if_conditional216) {
                                memset(&result_163,0,sizeof(char*));
                                __result132__ = __result_obj__ = result_163;
                                return __result132__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result133__ = __result_obj__ = self->key_list->it->item;
                                return __result133__;
                            }
                            memset(&result_164,0,sizeof(char*));
                            __result134__ = __result_obj__ = result_164;
                            return __result134__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result135__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result135__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional218;
char* result_166;
char* __result136__;
_Bool _if_conditional219;
char* __result137__;
char* result_167;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_166, 0, sizeof(char*));
memset(&result_167, 0, sizeof(char*));
                            if(_if_conditional218=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional218) {
                                memset(&result_166,0,sizeof(char*));
                                __result136__ = __result_obj__ = result_166;
                                return __result136__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result137__ = __result_obj__ = self->key_list->it->item;
                                return __result137__;
                            }
                            memset(&result_167,0,sizeof(char*));
                            __result138__ = __result_obj__ = result_167;
                            return __result138__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_169;
unsigned int it_170;
_Bool _while_condtional30;
_Bool _if_conditional220;
_Bool _if_conditional221;
struct sVar* __result139__;
_Bool _if_conditional222;
_Bool _if_conditional223;
struct sVar* __result140__;
struct sVar* __result141__;
struct sVar* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_169, 0, sizeof(unsigned int));
memset(&it_170, 0, sizeof(unsigned int));
                                hash_169=string_get_hash_key(((char*)key))%self->size;
                                it_170=hash_169;
                                while(_while_condtional30=(_Bool)1,                                _while_condtional30) {
                                    if(_if_conditional220=self->item_existance[it_170],                                    _if_conditional220) {
                                        if(_if_conditional221=string_equals(self->keys[it_170],key),                                        _if_conditional221) {
                                            __result139__ = __result_obj__ = self->items[it_170];
                                            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result139__;
                                        }
                                        it_170++;
                                        if(_if_conditional222=it_170>=self->size,                                        _if_conditional222) {
                                            it_170=0;
                                        }
                                        else {
                                            if(_if_conditional223=it_170==hash_169,                                            _if_conditional223) {
                                                __result140__ = __result_obj__ = default_value;
                                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result140__;
                                            }
                                        }
                                    }
                                    else {
                                        __result141__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result141__;
                                    }
                                }
                                __result142__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result142__;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional224;
unsigned int hash_183;
int it_184;
_Bool _while_condtional32;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool same_key_exist_185;
char* it2_186;
_Bool _if_conditional236;
_Bool _if_conditional237;
struct map$2charphsVarph* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_183, 0, sizeof(unsigned int));
memset(&it_184, 0, sizeof(int));
memset(&same_key_exist_185, 0, sizeof(_Bool));
memset(&it2_186, 0, sizeof(char*));
                                if(_if_conditional224=self->len*2>=self->size,                                _if_conditional224) {
                                    map$2charphsVarph_rehash(self);
                                }
                                hash_183=string_get_hash_key(key)%self->size;
                                it_184=hash_183;
                                while(_while_condtional32=(_Bool)1,                                _while_condtional32) {
                                    if(_if_conditional228=self->item_existance[it_184],                                    _if_conditional228) {
                                        if(_if_conditional229=string_equals(self->keys[it_184],key),                                        _if_conditional229) {
                                            if(_if_conditional230=1,                                            _if_conditional230) {
                                                self->keys[it_184] = come_decrement_ref_count2(self->keys[it_184], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                list$1charp_remove(self->key_list,self->keys[it_184]);
                                                self->keys[it_184]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                list$1charp_remove(self->key_list,self->keys[it_184]);
                                                self->keys[it_184]=key;
                                            }
                                            if(_if_conditional231=1,                                            _if_conditional231) {
                                                come_call_finalizer3(self->items[it_184],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                self->items[it_184]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_184]=item;
                                            }
                                            break;
                                        }
                                        it_184++;
                                        if(_if_conditional232=it_184>=self->size,                                        _if_conditional232) {
                                            it_184=0;
                                        }
                                        else {
                                            if(_if_conditional233=it_184==hash_183,                                            _if_conditional233) {
                                                printf("unexpected error in map.insert\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        self->item_existance[it_184]=(_Bool)1;
                                        if(_if_conditional234=1,                                        _if_conditional234) {
                                            self->keys[it_184]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            self->keys[it_184]=key;
                                        }
                                        if(_if_conditional235=1,                                        _if_conditional235) {
                                            self->items[it_184]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            self->items[it_184]=item;
                                        }
                                        self->len++;
                                        break;
                                    }
                                }
                                same_key_exist_185=(_Bool)0;
                                for(                                it2_186=list$1charp_begin(self->key_list);                                !list$1charp_end(self->key_list);                                it2_186=list$1charp_next(self->key_list)                                ){
                                    if(_if_conditional236=string_equals(it2_186,key),                                    _if_conditional236) {
                                        same_key_exist_185=(_Bool)1;
                                    }
                                }
                                if(_if_conditional237=!same_key_exist_185,                                _if_conditional237) {
                                    list$1charp_push_back(self->key_list,key);
                                }
                                __result143__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result143__;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_172;
void* right_value191;
char** keys_173;
void* right_value192;
struct sVar** items_174;
void* right_value193;
_Bool* item_existance_175;
int len_176;
char* it_177;
struct sVar* default_value_178;
struct sVar* it2_179;
unsigned int hash_180;
int n_181;
_Bool _while_condtional31;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
struct sVar* default_value_182;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_172, 0, sizeof(int));
right_value191 = (void*)0;
memset(&keys_173, 0, sizeof(char**));
right_value192 = (void*)0;
memset(&items_174, 0, sizeof(struct sVar**));
right_value193 = (void*)0;
memset(&item_existance_175, 0, sizeof(_Bool*));
memset(&len_176, 0, sizeof(int));
memset(&it_177, 0, sizeof(char*));
memset(&default_value_178, 0, sizeof(struct sVar*));
memset(&it2_179, 0, sizeof(struct sVar*));
memset(&hash_180, 0, sizeof(unsigned int));
memset(&n_181, 0, sizeof(int));
memset(&default_value_182, 0, sizeof(struct sVar*));
                                        size_172=self->size*10;
                                        keys_173=(char**)come_increment_ref_count(((char**)(right_value191=(char**)come_calloc(1, sizeof(char*)*(1*(size_172)), "./neo-c.h", 1313, "char*%"))));
                                        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        items_174=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value192=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_172)), "./neo-c.h", 1314, "sVar*%"))));
                                        come_call_finalizer3(right_value192,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                                        item_existance_175=(_Bool*)come_increment_ref_count(((_Bool*)(right_value193=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_172)), "./neo-c.h", 1315, "bool"))));
                                        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        len_176=0;
                                        for(                                        it_177=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_177=map$2charphsVarph_next(self)                                        ){
                                            memset(&default_value_178,0,sizeof(struct sVar*));
                                            it2_179=map$2charphsVarph_at(self,it_177,default_value_178);
                                            hash_180=string_get_hash_key(it_177)%size_172;
                                            n_181=hash_180;
                                            while(_while_condtional31=(_Bool)1,                                            _while_condtional31) {
                                                if(_if_conditional225=item_existance_175[n_181],                                                _if_conditional225) {
                                                    n_181++;
                                                    if(_if_conditional226=n_181>=size_172,                                                    _if_conditional226) {
                                                        n_181=0;
                                                    }
                                                    else {
                                                        if(_if_conditional227=n_181==hash_180,                                                        _if_conditional227) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    item_existance_175[n_181]=(_Bool)1;
                                                    keys_173[n_181]=it_177;
                                                    items_174[n_181]=map$2charphsVarph_at(self,it_177,default_value_182);
                                                    len_176++;
                                                    break;
                                                }
                                            }
                                        }
                                        come_free((char*)self->items);
                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_free((char*)self->keys);
                                        self->keys=keys_173;
                                        self->items=items_174;
                                        self->item_existance=item_existance_175;
                                        self->size=size_172;
                                        self->len=len_176;
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional241=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional241) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional242=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional242) {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional243=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional243) {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional244=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional244) {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional245=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional245) {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional246=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional246) {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional247=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional247) {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional248=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional248) {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional249=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional249) {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional250=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional250) {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional251=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional251) {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional252=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional252) {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional253=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional253) {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info){
void* __result_obj__;
int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    __result148__ = self->sline;
    return __result148__;
}

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info){
void* __result_obj__;
void* right_value198;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value198 = (void*)0;
    __result149__ = __result_obj__ = ((char*)(right_value198=__builtin_string(self->sname)));
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result149__;
}

