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
typedef long int intptr_t;
typedef unsigned int socklen_t;
extern char** __environ;
extern char** environ;
enum { _PC_LINK_MAX
,_PC_MAX_CANON
,_PC_MAX_INPUT
,_PC_NAME_MAX
,_PC_PATH_MAX
,_PC_PIPE_BUF
,_PC_CHOWN_RESTRICTED
,_PC_NO_TRUNC
,_PC_VDISABLE
,_PC_SYNC_IO
,_PC_ASYNC_IO
,_PC_PRIO_IO
,_PC_SOCK_MAXBUF
,_PC_FILESIZEBITS
,_PC_REC_INCR_XFER_SIZE
,_PC_REC_MAX_XFER_SIZE
,_PC_REC_MIN_XFER_SIZE
,_PC_REC_XFER_ALIGN
,_PC_ALLOC_SIZE_MIN
,_PC_SYMLINK_MAX
,_PC_2_SYMLINKS
};
enum { _SC_ARG_MAX
,_SC_CHILD_MAX
,_SC_CLK_TCK
,_SC_NGROUPS_MAX
,_SC_OPEN_MAX
,_SC_STREAM_MAX
,_SC_TZNAME_MAX
,_SC_JOB_CONTROL
,_SC_SAVED_IDS
,_SC_REALTIME_SIGNALS
,_SC_PRIORITY_SCHEDULING
,_SC_TIMERS
,_SC_ASYNCHRONOUS_IO
,_SC_PRIORITIZED_IO
,_SC_SYNCHRONIZED_IO
,_SC_FSYNC
,_SC_MAPPED_FILES
,_SC_MEMLOCK
,_SC_MEMLOCK_RANGE
,_SC_MEMORY_PROTECTION
,_SC_MESSAGE_PASSING
,_SC_SEMAPHORES
,_SC_SHARED_MEMORY_OBJECTS
,_SC_AIO_LISTIO_MAX
,_SC_AIO_MAX
,_SC_AIO_PRIO_DELTA_MAX
,_SC_DELAYTIMER_MAX
,_SC_MQ_OPEN_MAX
,_SC_MQ_PRIO_MAX
,_SC_VERSION
,_SC_PAGESIZE
,_SC_RTSIG_MAX
,_SC_SEM_NSEMS_MAX
,_SC_SEM_VALUE_MAX
,_SC_SIGQUEUE_MAX
,_SC_TIMER_MAX
,_SC_BC_BASE_MAX
,_SC_BC_DIM_MAX
,_SC_BC_SCALE_MAX
,_SC_BC_STRING_MAX
,_SC_COLL_WEIGHTS_MAX
,_SC_EQUIV_CLASS_MAX
,_SC_EXPR_NEST_MAX
,_SC_LINE_MAX
,_SC_RE_DUP_MAX
,_SC_CHARCLASS_NAME_MAX
,_SC_2_VERSION
,_SC_2_C_BIND
,_SC_2_C_DEV
,_SC_2_FORT_DEV
,_SC_2_FORT_RUN
,_SC_2_SW_DEV
,_SC_2_LOCALEDEF
,_SC_PII
,_SC_PII_XTI
,_SC_PII_SOCKET
,_SC_PII_INTERNET
,_SC_PII_OSI
,_SC_POLL
,_SC_SELECT
,_SC_UIO_MAXIOV
,_SC_IOV_MAX=60,
_SC_PII_INTERNET_STREAM
,_SC_PII_INTERNET_DGRAM
,_SC_PII_OSI_COTS
,_SC_PII_OSI_CLTS
,_SC_PII_OSI_M
,_SC_T_IOV_MAX
,_SC_THREADS
,_SC_THREAD_SAFE_FUNCTIONS
,_SC_GETGR_R_SIZE_MAX
,_SC_GETPW_R_SIZE_MAX
,_SC_LOGIN_NAME_MAX
,_SC_TTY_NAME_MAX
,_SC_THREAD_DESTRUCTOR_ITERATIONS
,_SC_THREAD_KEYS_MAX
,_SC_THREAD_STACK_MIN
,_SC_THREAD_THREADS_MAX
,_SC_THREAD_ATTR_STACKADDR
,_SC_THREAD_ATTR_STACKSIZE
,_SC_THREAD_PRIORITY_SCHEDULING
,_SC_THREAD_PRIO_INHERIT
,_SC_THREAD_PRIO_PROTECT
,_SC_THREAD_PROCESS_SHARED
,_SC_NPROCESSORS_CONF
,_SC_NPROCESSORS_ONLN
,_SC_PHYS_PAGES
,_SC_AVPHYS_PAGES
,_SC_ATEXIT_MAX
,_SC_PASS_MAX
,_SC_XOPEN_VERSION
,_SC_XOPEN_XCU_VERSION
,_SC_XOPEN_UNIX
,_SC_XOPEN_CRYPT
,_SC_XOPEN_ENH_I18N
,_SC_XOPEN_SHM
,_SC_2_CHAR_TERM
,_SC_2_C_VERSION
,_SC_2_UPE
,_SC_XOPEN_XPG2
,_SC_XOPEN_XPG3
,_SC_XOPEN_XPG4
,_SC_CHAR_BIT
,_SC_CHAR_MAX
,_SC_CHAR_MIN
,_SC_INT_MAX
,_SC_INT_MIN
,_SC_LONG_BIT
,_SC_WORD_BIT
,_SC_MB_LEN_MAX
,_SC_NZERO
,_SC_SSIZE_MAX
,_SC_SCHAR_MAX
,_SC_SCHAR_MIN
,_SC_SHRT_MAX
,_SC_SHRT_MIN
,_SC_UCHAR_MAX
,_SC_UINT_MAX
,_SC_ULONG_MAX
,_SC_USHRT_MAX
,_SC_NL_ARGMAX
,_SC_NL_LANGMAX
,_SC_NL_MSGMAX
,_SC_NL_NMAX
,_SC_NL_SETMAX
,_SC_NL_TEXTMAX
,_SC_XBS5_ILP32_OFF32
,_SC_XBS5_ILP32_OFFBIG
,_SC_XBS5_LP64_OFF64
,_SC_XBS5_LPBIG_OFFBIG
,_SC_XOPEN_LEGACY
,_SC_XOPEN_REALTIME
,_SC_XOPEN_REALTIME_THREADS
,_SC_ADVISORY_INFO
,_SC_BARRIERS
,_SC_BASE
,_SC_C_LANG_SUPPORT
,_SC_C_LANG_SUPPORT_R
,_SC_CLOCK_SELECTION
,_SC_CPUTIME
,_SC_THREAD_CPUTIME
,_SC_DEVICE_IO
,_SC_DEVICE_SPECIFIC
,_SC_DEVICE_SPECIFIC_R
,_SC_FD_MGMT
,_SC_FIFO
,_SC_PIPE
,_SC_FILE_ATTRIBUTES
,_SC_FILE_LOCKING
,_SC_FILE_SYSTEM
,_SC_MONOTONIC_CLOCK
,_SC_MULTI_PROCESS
,_SC_SINGLE_PROCESS
,_SC_NETWORKING
,_SC_READER_WRITER_LOCKS
,_SC_SPIN_LOCKS
,_SC_REGEXP
,_SC_REGEX_VERSION
,_SC_SHELL
,_SC_SIGNALS
,_SC_SPAWN
,_SC_SPORADIC_SERVER
,_SC_THREAD_SPORADIC_SERVER
,_SC_SYSTEM_DATABASE
,_SC_SYSTEM_DATABASE_R
,_SC_TIMEOUTS
,_SC_TYPED_MEMORY_OBJECTS
,_SC_USER_GROUPS
,_SC_USER_GROUPS_R
,_SC_2_PBS
,_SC_2_PBS_ACCOUNTING
,_SC_2_PBS_LOCATE
,_SC_2_PBS_MESSAGE
,_SC_2_PBS_TRACK
,_SC_SYMLOOP_MAX
,_SC_STREAMS
,_SC_2_PBS_CHECKPOINT
,_SC_V6_ILP32_OFF32
,_SC_V6_ILP32_OFFBIG
,_SC_V6_LP64_OFF64
,_SC_V6_LPBIG_OFFBIG
,_SC_HOST_NAME_MAX
,_SC_TRACE
,_SC_TRACE_EVENT_FILTER
,_SC_TRACE_INHERIT
,_SC_TRACE_LOG
,_SC_LEVEL1_ICACHE_SIZE
,_SC_LEVEL1_ICACHE_ASSOC
,_SC_LEVEL1_ICACHE_LINESIZE
,_SC_LEVEL1_DCACHE_SIZE
,_SC_LEVEL1_DCACHE_ASSOC
,_SC_LEVEL1_DCACHE_LINESIZE
,_SC_LEVEL2_CACHE_SIZE
,_SC_LEVEL2_CACHE_ASSOC
,_SC_LEVEL2_CACHE_LINESIZE
,_SC_LEVEL3_CACHE_SIZE
,_SC_LEVEL3_CACHE_ASSOC
,_SC_LEVEL3_CACHE_LINESIZE
,_SC_LEVEL4_CACHE_SIZE
,_SC_LEVEL4_CACHE_ASSOC
,_SC_LEVEL4_CACHE_LINESIZE
,_SC_IPV6=185+50,
_SC_RAW_SOCKETS
,_SC_V7_ILP32_OFF32
,_SC_V7_ILP32_OFFBIG
,_SC_V7_LP64_OFF64
,_SC_V7_LPBIG_OFFBIG
,_SC_SS_REPL_MAX
,_SC_TRACE_EVENT_NAME_MAX
,_SC_TRACE_NAME_MAX
,_SC_TRACE_SYS_MAX
,_SC_TRACE_USER_EVENT_MAX
,_SC_XOPEN_STREAMS
,_SC_THREAD_ROBUST_PRIO_INHERIT
,_SC_THREAD_ROBUST_PRIO_PROTECT
,_SC_MINSIGSTKSZ
,_SC_SIGSTKSZ
};
enum { _CS_PATH
,_CS_V6_WIDTH_RESTRICTED_ENVS
,_CS_GNU_LIBC_VERSION
,_CS_GNU_LIBPTHREAD_VERSION
,_CS_V5_WIDTH_RESTRICTED_ENVS
,_CS_V7_WIDTH_RESTRICTED_ENVS
,_CS_LFS_CFLAGS=1000,
_CS_LFS_LDFLAGS
,_CS_LFS_LIBS
,_CS_LFS_LINTFLAGS
,_CS_LFS64_CFLAGS
,_CS_LFS64_LDFLAGS
,_CS_LFS64_LIBS
,_CS_LFS64_LINTFLAGS
,_CS_XBS5_ILP32_OFF32_CFLAGS=1100,
_CS_XBS5_ILP32_OFF32_LDFLAGS
,_CS_XBS5_ILP32_OFF32_LIBS
,_CS_XBS5_ILP32_OFF32_LINTFLAGS
,_CS_XBS5_ILP32_OFFBIG_CFLAGS
,_CS_XBS5_ILP32_OFFBIG_LDFLAGS
,_CS_XBS5_ILP32_OFFBIG_LIBS
,_CS_XBS5_ILP32_OFFBIG_LINTFLAGS
,_CS_XBS5_LP64_OFF64_CFLAGS
,_CS_XBS5_LP64_OFF64_LDFLAGS
,_CS_XBS5_LP64_OFF64_LIBS
,_CS_XBS5_LP64_OFF64_LINTFLAGS
,_CS_XBS5_LPBIG_OFFBIG_CFLAGS
,_CS_XBS5_LPBIG_OFFBIG_LDFLAGS
,_CS_XBS5_LPBIG_OFFBIG_LIBS
,_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
,_CS_POSIX_V6_ILP32_OFF32_CFLAGS
,_CS_POSIX_V6_ILP32_OFF32_LDFLAGS
,_CS_POSIX_V6_ILP32_OFF32_LIBS
,_CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
,_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
,_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
,_CS_POSIX_V6_ILP32_OFFBIG_LIBS
,_CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
,_CS_POSIX_V6_LP64_OFF64_CFLAGS
,_CS_POSIX_V6_LP64_OFF64_LDFLAGS
,_CS_POSIX_V6_LP64_OFF64_LIBS
,_CS_POSIX_V6_LP64_OFF64_LINTFLAGS
,_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
,_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
,_CS_POSIX_V6_LPBIG_OFFBIG_LIBS
,_CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
,_CS_POSIX_V7_ILP32_OFF32_CFLAGS
,_CS_POSIX_V7_ILP32_OFF32_LDFLAGS
,_CS_POSIX_V7_ILP32_OFF32_LIBS
,_CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
,_CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
,_CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
,_CS_POSIX_V7_ILP32_OFFBIG_LIBS
,_CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
,_CS_POSIX_V7_LP64_OFF64_CFLAGS
,_CS_POSIX_V7_LP64_OFF64_LDFLAGS
,_CS_POSIX_V7_LP64_OFF64_LIBS
,_CS_POSIX_V7_LP64_OFF64_LINTFLAGS
,_CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
,_CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
,_CS_POSIX_V7_LPBIG_OFFBIG_LIBS
,_CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
,_CS_V6_ENV
,_CS_V7_ENV
};
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
struct stat
{
    unsigned long int st_dev;
    unsigned long int st_ino;
    unsigned int st_mode;
    unsigned int st_nlink;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned long int st_rdev;
    unsigned long int __pad1;
    long int st_size;
    int st_blksize;
    int __pad2;
    long int st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    int __glibc_reserved[2];
};
struct stat64
{
    unsigned long int st_dev;
    unsigned long int st_ino;
    unsigned int st_mode;
    unsigned int st_nlink;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned long int st_rdev;
    unsigned long int __pad1;
    long int st_size;
    int st_blksize;
    int __pad2;
    long int st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    int __glibc_reserved[2];
};
typedef char __s8;
typedef unsigned char __u8;
typedef short short __s16;
typedef unsigned short int __u16;
typedef int __s32;
typedef unsigned int __u32;
typedef long long __s64;
typedef unsigned long long __u64;
struct anonymous_typeX21
{
    unsigned long int fds_bits[1024/(8*sizeof(long))];
};
typedef struct anonymous_typeX21 __kernel_fd_set;
typedef void (*__kernel_sighandler_t)(int);
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;
typedef unsigned short int __kernel_old_uid_t;
typedef unsigned short int __kernel_old_gid_t;
typedef long __kernel_long_t;
typedef unsigned long int __kernel_ulong_t;
typedef unsigned long int __kernel_ino_t;
typedef unsigned int __kernel_mode_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;
typedef long __kernel_suseconds_t;
typedef int __kernel_daddr_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
typedef unsigned int __kernel_old_dev_t;
typedef unsigned long int __kernel_size_t;
typedef long __kernel_ssize_t;
typedef long __kernel_ptrdiff_t;
struct anonymous_typeX22
{
    int val[2];
};
typedef struct anonymous_typeX22 __kernel_fsid_t;
typedef long __kernel_off_t;
typedef long long __kernel_loff_t;
typedef long __kernel_old_time_t;
typedef long __kernel_time_t;
typedef long long __kernel_time64_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char* __kernel_caddr_t;
typedef unsigned short int __kernel_uid16_t;
typedef unsigned short int __kernel_gid16_t;
typedef __int128 __s128;
typedef unsigned __int128 __u128;
typedef unsigned short int __le16;
typedef unsigned short int __be16;
typedef unsigned int __le32;
typedef unsigned int __be32;
typedef unsigned long long __le64;
typedef unsigned long long __be64;
typedef unsigned short int __sum16;
typedef unsigned int __wsum;
typedef unsigned int __poll_t;
struct statx_timestamp
{
    long long tv_sec;
    unsigned int tv_nsec;
    int __reserved;
};
struct statx
{
    unsigned int stx_mask;
    unsigned int stx_blksize;
    unsigned long long stx_attributes;
    unsigned int stx_nlink;
    unsigned int stx_uid;
    unsigned int stx_gid;
    unsigned short int stx_mode;
    unsigned short int __spare0[1];
    unsigned long long stx_ino;
    unsigned long long stx_size;
    unsigned long long stx_blocks;
    unsigned long long stx_attributes_mask;
    struct statx_timestamp stx_atime;
    struct statx_timestamp stx_btime;
    struct statx_timestamp stx_ctime;
    struct statx_timestamp stx_mtime;
    unsigned int stx_rdev_major;
    unsigned int stx_rdev_minor;
    unsigned int stx_dev_major;
    unsigned int stx_dev_minor;
    unsigned long long stx_mnt_id;
    unsigned int stx_dio_mem_align;
    unsigned int stx_dio_offset_align;
    unsigned long long __spare3[12];
};
extern char* program_invocation_name;
extern char* program_invocation_short_name;
typedef int error_t;
_Bool gComeGC=(_Bool)0;
_Bool gComeC=(_Bool)0;
char* gProgramName=((void*)0);
_Bool gCommonHeader=(_Bool)0;
_Bool gComeMalloc=(_Bool)0;
_Bool gComeDebug=(_Bool)0;
_Bool gComeOriginalSourcePosition=(_Bool)1;
int gComeDebugStackFrameID=0;
struct __current_stack1__
{
    int* n_52;
    char** msg2_50;
    struct sInfo** info;
    char** msg;
};
struct __current_stack2__
{
    struct sInfo* info_300;
    struct buffer** clang_option_283;
    struct buffer** cpp_option_284;
    struct list$1charph** files_285;
    struct list$1charph** object_files_286;
    _Bool* output_object_file_287;
    _Bool* output_cpp_file_288;
    _Bool* output_source_file_flag_289;
    char** output_file_name_290;
    _Bool* verbose_291;
    _Bool* come_debug_292;
    _Bool* come_malloc_293;
    _Bool* come_str_294;
    int* argc;
    char*** argv;
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

int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);

int come_main_v1(int argc, char** argv);

struct sModule* sModule_initialize(struct sModule* self);

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);

void sVarTable_finalize(struct sVarTable* self);

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

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

int access(const char* __name, int __type);

int euidaccess(const char* __name, int __type);

int eaccess(const char* __name, int __type);

int execveat(int __fd, const char* __path, char** __argv, char** __envp, int __flags);

int faccessat(int __fd, const char* __file, int __type, int __flag);

long int lseek(int __fd, long int __offset, int __whence);

long int lseek64(int __fd, long int __offset, int __whence);

int close(int __fd);

void closefrom(int __lowfd);

long int read(int __fd, void* __buf, long int __nbytes);

long int write(int __fd, const void* __buf, long int __n);

long int pread(int __fd, void* __buf, long int __nbytes, long int __offset);

long int pwrite(int __fd, const void* __buf, long int __n, long int __offset);

long int pread64(int __fd, void* __buf, long int __nbytes, long int __offset);

long int pwrite64(int __fd, const void* __buf, long int __n, long int __offset);

int pipe(int __pipedes[2]);

int pipe2(int __pipedes[2], int __flags);

unsigned int alarm(unsigned int __seconds);

unsigned int sleep(unsigned int __seconds);

unsigned int ualarm(unsigned int __value, unsigned int __interval);

int usleep(unsigned int __useconds);

int pause();

int chown(const char* __file, unsigned int __owner, unsigned int __group);

int fchown(int __fd, unsigned int __owner, unsigned int __group);

int lchown(const char* __file, unsigned int __owner, unsigned int __group);

int fchownat(int __fd, const char* __file, unsigned int __owner, unsigned int __group, int __flag);

int chdir(const char* __path);

int fchdir(int __fd);

char* getcwd(char* __buf, long int __size);

char* get_current_dir_name();

char* getwd(char* __buf);

int dup(int __fd);

int dup2(int __fd, int __fd2);

int dup3(int __fd, int __fd2, int __flags);

int execve(const char* __path, char** __argv, char** __envp);

int fexecve(int __fd, char** __argv, char** __envp);

int execv(const char* __path, char** __argv);

int execle(const char* __path, const char* __arg, ...);

int execl(const char* __path, const char* __arg, ...);

int execvp(const char* __file, char** __argv);

int execlp(const char* __file, const char* __arg, ...);

int execvpe(const char* __file, char** __argv, char** __envp);

int nice(int __inc);

void _exit(int __status);

long int pathconf(const char* __path, int __name);

long int fpathconf(int __fd, int __name);

long int sysconf(int __name);

long int confstr(int __name, char* __buf, long int __len);

int getpid();

int getppid();

int getpgrp();

int __getpgid(int __pid);

int getpgid(int __pid);

int setpgid(int __pid, int __pgid);

int setpgrp();

int setsid();

int getsid(int __pid);

unsigned int getuid();

unsigned int geteuid();

unsigned int getgid();

unsigned int getegid();

int getgroups(int __size, unsigned int* __list);

int group_member(unsigned int __gid);

int setuid(unsigned int __uid);

int setreuid(unsigned int __ruid, unsigned int __euid);

int seteuid(unsigned int __uid);

int setgid(unsigned int __gid);

int setregid(unsigned int __rgid, unsigned int __egid);

int setegid(unsigned int __gid);

int getresuid(unsigned int* __ruid, unsigned int* __euid, unsigned int* __suid);

int getresgid(unsigned int* __rgid, unsigned int* __egid, unsigned int* __sgid);

int setresuid(unsigned int __ruid, unsigned int __euid, unsigned int __suid);

int setresgid(unsigned int __rgid, unsigned int __egid, unsigned int __sgid);

int fork();

int vfork();

int _Fork();

char* ttyname(int __fd);

int ttyname_r(int __fd, char* __buf, long int __buflen);

int isatty(int __fd);

int ttyslot();

int link(const char* __from, const char* __to);

int linkat(int __fromfd, const char* __from, int __tofd, const char* __to, int __flags);

int symlink(const char* __from, const char* __to);

long int readlink(const char* __path, char* __buf, long int __len);

int symlinkat(const char* __from, int __tofd, const char* __to);

long int readlinkat(int __fd, const char* __path, char* __buf, long int __len);

int unlink(const char* __name);

int unlinkat(int __fd, const char* __name, int __flag);

int rmdir(const char* __path);

int tcgetpgrp(int __fd);

int tcsetpgrp(int __fd, int __pgrp_id);

char* getlogin();

int getlogin_r(char* __name, long int __name_len);

int setlogin(const char* __name);

int getopt(int ___argc, char** ___argv, const char* __shortopts);

int gethostname(char* __name, long int __len);

int sethostname(const char* __name, long int __len);

int sethostid(long int __id);

int getdomainname(char* __name, long int __len);

int setdomainname(const char* __name, long int __len);

int vhangup();

int revoke(const char* __file);

int profil(unsigned short int* __sample_buffer, long int __size, long int __offset, unsigned int __scale);

int acct(const char* __name);

char* getusershell();

void endusershell();

void setusershell();

int daemon(int __nochdir, int __noclose);

int chroot(const char* __path);

char* getpass(const char* __prompt);

int fsync(int __fd);

int syncfs(int __fd);

long int gethostid();

void sync();

int getpagesize();

int getdtablesize();

int truncate(const char* __file, long int __length);

int truncate64(const char* __file, long int __length);

int ftruncate(int __fd, long int __length);

int ftruncate64(int __fd, long int __length);

int brk(void* __addr);

void* sbrk(long int __delta);

long int syscall(long int __sysno, ...);

int lockf(int __fd, int __cmd, long int __len);

int lockf64(int __fd, int __cmd, long int __len);

long int copy_file_range(int __infd, long int* __pinoff, int __outfd, long int* __poutoff, long int __length, unsigned int __flags);

int fdatasync(int __fildes);

char* crypt(const char* __key, const char* __salt);

void swab(const void* __from, void* __to, long int __n);

int getentropy(void* __buffer, long int __length);

int close_range(unsigned int __fd, unsigned int __max_fd, int __flags);

int gettid();

int stat(const char* __file, struct stat* __buf);

int fstat(int __fd, struct stat* __buf);

int stat64(const char* __file, struct stat64* __buf);

int fstat64(int __fd, struct stat64* __buf);

int fstatat(int __fd, const char* __file, struct stat* __buf, int __flag);

int fstatat64(int __fd, const char* __file, struct stat64* __buf, int __flag);

int lstat(const char* __file, struct stat* __buf);

int lstat64(const char* __file, struct stat64* __buf);

int chmod(const char* __file, unsigned int __mode);

int lchmod(const char* __file, unsigned int __mode);

int fchmod(int __fd, unsigned int __mode);

int fchmodat(int __fd, const char* __file, unsigned int __mode, int __flag);

unsigned int umask(unsigned int __mask);

unsigned int getumask();

int mkdir(const char* __path, unsigned int __mode);

int mkdirat(int __fd, const char* __path, unsigned int __mode);

int mknod(const char* __path, unsigned int __mode, unsigned long int __dev);

int mknodat(int __fd, const char* __path, unsigned int __mode, unsigned long int __dev);

int mkfifo(const char* __path, unsigned int __mode);

int mkfifoat(int __fd, const char* __path, unsigned int __mode);

int utimensat(int __fd, const char* __path, const struct timespec __times[2], int __flags);

int futimens(int __fd, const struct timespec __times[2]);

int statx(int __dirfd, const char* __path, int __flags, unsigned int __mask, struct statx* __buf);

int* __errno_location();

static void write_source_file_position_to_source(struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);

void err_msg(struct sInfo* info, char* msg, ...);

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1charph* list$1charph_map2(struct list$1charph* self, void* parent, char* (*block)(void*,char*));
char* method_block1_02transpilec(struct __current_stack1__* parent, char* it);

static char* list$1charph_join(struct list$1charph* self, char* sep);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static void va_list_finalize(va_list self);
int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

static void clear_tmp_file(struct sInfo* info);
static void clear_tmp_file_without_object_file(struct sInfo* info);
static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files);
static _Bool linker(struct sInfo* info, struct list$1charph* object_files);
_Bool new_project(int argc, char** argv);

_Bool run_project(int argc, char** argv);

_Bool make_header_project(int argc, char** argv);

_Bool compile_project(int argc, char** argv);

_Bool debug_run_project(int argc, char** argv);

_Bool clean_project(int argc, char** argv);

_Bool install_project(int argc, char** argv, char* prefix);

static void init_classes(struct sInfo* info);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
int come_main_v2(int argc, char** argv);

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void map$2charphsFunph_finalize(struct map$2charphsFunph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self);
static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self);
static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self);
static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self);
static void map$2charphsClassph_finalize(struct map$2charphsClassph* self);
static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self);
static void sClassModule_finalize(struct sClassModule* self);
static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self);
static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self);
static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self);
static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self);
static void sModule_finalize(struct sModule* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void sInfo_finalize(struct sInfo* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
void method_block2_02transpilec(struct __current_stack2__* parent);

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










static void write_source_file_position_to_source(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional19;
_Bool _if_conditional20;
void* right_value79;
void* right_value80;
void* right_value81;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
    if(gComeOriginalSourcePosition) {
        if(info->writing_source_file_position) {
            add_come_code(info,((char*)(right_value81=xsprintf("# \%s \"\%s\"\n",((char*)(right_value79=int_to_string(info->sline))),((char*)(right_value80=string_to_string(info->sname)))))));
            right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value82;
char* sname_47;
int sline_48;
void* right_value83;
void* right_value84;
char* __dec_obj12;
_Bool result_49;
void* right_value85;
char* __dec_obj13;
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&sname_47, 0, sizeof(char*));
memset(&sline_48, 0, sizeof(int));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_49, 0, sizeof(_Bool));
right_value85 = (void*)0;
    sname_47=(char*)come_increment_ref_count(((char*)(right_value82=__builtin_string(info->sname))));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_48=info->sline;
    __dec_obj12=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value84=__builtin_string(((char*)(right_value83=node->sname(node->_protocol_obj)))))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    info->sline=node->sline(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result_49=node->compile(node->_protocol_obj,info);
    __dec_obj13=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value85=__builtin_string(sname_47))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    info->sline=sline_48;
    __result58__ = result_49;
    sname_47 = come_decrement_ref_count2(sname_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result58__;
    sname_47 = come_decrement_ref_count2(sname_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void err_msg(struct sInfo* info, char* msg, ...){
void* __result_obj__;
_Bool _if_conditional21;
char* msg2_50;
va_list args_51;
_Bool _if_conditional22;
int n_52;
void* right_value86;
void* right_value87;
void* right_value93;
struct __current_stack1__ __current_stack1__;
void* right_value98;
void* right_value102;
void* right_value103;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_50, 0, sizeof(char*));
memset(&args_51, 0, sizeof(va_list));
memset(&n_52, 0, sizeof(int));
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value93 = (void*)0;
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
right_value98 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
    if(_if_conditional21=!info->no_output_err,    _if_conditional21) {
        __builtin_va_start(args_51,msg);
        vasprintf(&msg2_50,msg,args_51);
        __builtin_va_end(args_51);
        printf("%s %d: %s\n",info->sname,info->sline,msg2_50);
        info->err_num++;
        stackframe();
        if(info->come_fun) {
            n_52=info->sline-5;
            __current_stack1__.n_52 = &n_52;
            __current_stack1__.msg2_50 = &msg2_50;
            __current_stack1__.info = &info;
            __current_stack1__.msg = &msg;
            ((char*)(right_value103=string_puts(((char*)(right_value102=list$1charph_join(((struct list$1charph*)(right_value98=list$1charph_map2(((struct list$1charph*)(right_value93=list$1charph_sublist(((struct list$1charph*)(right_value87=string_split_char(((char*)(right_value86=buffer_to_string(info->original_source))),10))),n_52,n_52+10))),&__current_stack1__,(void*)method_block1_02transpilec))),"\n"))))));
            right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value87,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value93,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value98,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        free(msg2_50);
        come_call_finalizer3((&args_51),va_list_finalize, 1, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__;
void* right_value88;
void* right_value89;
struct list$1charph* result_55;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
struct list_item$1charph* it_56;
int i_57;
_Bool _while_condtional8;
_Bool _if_conditional28;
struct list$1charph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&result_55, 0, sizeof(struct list$1charph*));
memset(&it_56, 0, sizeof(struct list_item$1charph*));
memset(&i_57, 0, sizeof(int));
                result_55=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value89=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value88=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 633, "list$1charph"))))))));
                come_call_finalizer3(right_value88,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value89,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional24=begin<0,                _if_conditional24) {
                    begin+=self->len;
                }
                if(_if_conditional25=tail<0,                _if_conditional25) {
                    tail+=self->len+1;
                }
                if(_if_conditional26=begin<0,                _if_conditional26) {
                    begin=0;
                }
                if(_if_conditional27=tail>=self->len,                _if_conditional27) {
                    tail=self->len;
                }
                it_56=self->head;
                i_57=0;
                while(_while_condtional8=it_56!=((void*)0),                _while_condtional8) {
                    if(_if_conditional28=i_57>=begin&&i_57<tail,                    _if_conditional28) {
                        list$1charph_push_back(result_55,(char*)come_increment_ref_count(it_56->item));
                    }
                    it_56=it_56->next;
                    i_57++;
                }
                __result61__ = __result_obj__ = result_55;
                come_call_finalizer3(result_55,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result61__;
                come_call_finalizer3(result_55,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result59__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result59__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_53;
_Bool _while_condtional7;
struct list_item$1charph* prev_it_54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_53, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_54, 0, sizeof(struct list_item$1charph*));
                        it_53=self->head;
                        while(_while_condtional7=it_53!=((void*)0),                        _while_condtional7) {
                            prev_it_54=it_53;
                            it_53=it_53->next;
                            come_call_finalizer3(prev_it_54,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional23=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional23) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional29;
void* right_value90;
struct list_item$1charph* litem_58;
char* __dec_obj14;
_Bool _if_conditional30;
void* right_value91;
struct list_item$1charph* litem_59;
char* __dec_obj15;
void* right_value92;
struct list_item$1charph* litem_60;
char* __dec_obj16;
struct list$1charph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1charph*));
right_value91 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1charph*));
right_value92 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional29=self->len==0,                            _if_conditional29) {
                                litem_58=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value90=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 217, "list_item$1charph"))));
                                come_call_finalizer3(right_value90,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_58->prev=((void*)0);
                                litem_58->next=((void*)0);
                                __dec_obj14=litem_58->item;
                                litem_58->item=(char*)come_increment_ref_count(item);
                                __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_58;
                                self->head=litem_58;
                            }
                            else {
                                if(_if_conditional30=self->len==1,                                _if_conditional30) {
                                    litem_59=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value91=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph"))));
                                    come_call_finalizer3(right_value91,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_59->prev=self->head;
                                    litem_59->next=((void*)0);
                                    __dec_obj15=litem_59->item;
                                    litem_59->item=(char*)come_increment_ref_count(item);
                                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_59;
                                    self->head->next=litem_59;
                                }
                                else {
                                    litem_60=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value92=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph"))));
                                    come_call_finalizer3(right_value92,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_60->prev=self->tail;
                                    litem_60->next=((void*)0);
                                    __dec_obj16=litem_60->item;
                                    litem_60->item=(char*)come_increment_ref_count(item);
                                    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_60;
                                    self->tail=litem_60;
                                }
                            }
                            self->len++;
                            __result60__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result60__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_map2(struct list$1charph* self, void* parent, char* (*block)(void*,char*)){
void* __result_obj__;
void* right_value94;
void* right_value95;
struct list$1charph* result_61;
struct list_item$1charph* it_62;
_Bool _while_condtional9;
void* right_value96;
struct list$1charph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&result_61, 0, sizeof(struct list$1charph*));
memset(&it_62, 0, sizeof(struct list_item$1charph*));
right_value96 = (void*)0;
                result_61=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value95=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value94=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 927, "list$1charph"))))))));
                come_call_finalizer3(right_value94,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value95,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_62=self->head;
                while(_while_condtional9=it_62!=((void*)0),                _while_condtional9) {
                    list$1charph_push_back(result_61,(char*)come_increment_ref_count(((char*)(right_value96=block(parent,it_62->item)))));
                    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_62=it_62->next;
                }
                __result62__ = __result_obj__ = result_61;
                come_call_finalizer3(result_61,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result62__;
                come_call_finalizer3(result_61,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

char* method_block1_02transpilec(struct __current_stack1__* parent, char* it){
void* __result_obj__;
void* right_value97;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
                __result63__ = __result_obj__ = ((char*)(right_value97=xsprintf("%d %s",++(*(parent->n_52)),it)));
                right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result63__;
}

static char* list$1charph_join(struct list$1charph* self, char* sep){
void* __result_obj__;
void* right_value99;
void* right_value100;
struct buffer* buf_63;
int n_64;
char* it_67;
_Bool _if_conditional36;
void* right_value101;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&buf_63, 0, sizeof(struct buffer*));
memset(&n_64, 0, sizeof(int));
memset(&it_67, 0, sizeof(char*));
right_value101 = (void*)0;
                buf_63=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value100=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value99=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1022, "buffer"))))))));
                come_call_finalizer3(right_value99,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value100,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                n_64=0;
                for(                it_67=list$1charph_begin(self);                !list$1charph_end(self);                it_67=list$1charph_next(self)                ){
                    buffer_append_str(buf_63,it_67);
                    if(_if_conditional36=n_64<list$1charph_length(self)-1,                    _if_conditional36) {
                        buffer_append_str(buf_63,sep);
                    }
                    n_64++;
                }
                __result73__ = __result_obj__ = ((char*)(right_value101=buffer_to_string(buf_63)));
                come_call_finalizer3(buf_63,buffer_finalize, 0, 0, 0, 0, (void*)0);
                right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result73__;
                come_call_finalizer3(buf_63,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional31;
char* result_65;
char* __result64__;
_Bool _if_conditional32;
char* __result65__;
char* result_66;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_65, 0, sizeof(char*));
memset(&result_66, 0, sizeof(char*));
                    if(_if_conditional31=self==((void*)0),                    _if_conditional31) {
                        memset(&result_65,0,sizeof(char*));
                        __result64__ = __result_obj__ = result_65;
                        return __result64__;
                    }
                    self->it=self->head;
                    if(self->it) {
                        __result65__ = __result_obj__ = self->it->item;
                        return __result65__;
                    }
                    memset(&result_66,0,sizeof(char*));
                    __result66__ = __result_obj__ = result_66;
                    return __result66__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result67__ = self==((void*)0)||self->it==((void*)0);
                    return __result67__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional33;
char* result_68;
char* __result68__;
_Bool _if_conditional34;
char* __result69__;
char* result_69;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_68, 0, sizeof(char*));
memset(&result_69, 0, sizeof(char*));
                    if(_if_conditional33=self==((void*)0)||self->it==((void*)0),                    _if_conditional33) {
                        memset(&result_68,0,sizeof(char*));
                        __result68__ = __result_obj__ = result_68;
                        return __result68__;
                    }
                    self->it=self->it->next;
                    if(self->it) {
                        __result69__ = __result_obj__ = self->it->item;
                        return __result69__;
                    }
                    memset(&result_69,0,sizeof(char*));
                    __result70__ = __result_obj__ = result_69;
                    return __result70__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional35;
int __result71__;
int __result72__;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional35=self==((void*)0),                        _if_conditional35) {
                            __result71__ = 0;
                            return __result71__;
                        }
                        __result72__ = self->len;
                        return __result72__;
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int transpile_v2(struct sInfo* info){
void* __result_obj__;
int __result74__;
memset(&__result_obj__, 0, sizeof(void*));
    __result74__ = 0;
    return __result74__;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __result_obj__;
void* right_value104;
char* output_file_name_70;
void* right_value105;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
memset(&output_file_name_70, 0, sizeof(char*));
right_value105 = (void*)0;
    output_file_name_70=(char*)come_increment_ref_count(((char*)(right_value104=xsprintf("%s.c",info->sname))));
    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    string_write(((char*)(right_value105=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_70,(_Bool)0);
    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result75__ = (_Bool)1;
    output_file_name_70 = come_decrement_ref_count2(output_file_name_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result75__;
    output_file_name_70 = come_decrement_ref_count2(output_file_name_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file(struct sInfo* info){
void* __result_obj__;
char* input_file_name_71;
_Bool _if_conditional37;
void* right_value106;
void* right_value107;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_71, 0, sizeof(char*));
right_value106 = (void*)0;
right_value107 = (void*)0;
    input_file_name_71=(char*)come_increment_ref_count(info->sname);
    if(_if_conditional37=input_file_name_71!=((void*)0)&&string_operator_not_equals(input_file_name_71,""),    _if_conditional37) {
        system(((char*)(right_value107=xsprintf("rm -f \%s.*",((char*)(right_value106=string_to_string(input_file_name_71)))))));
        right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    input_file_name_71 = come_decrement_ref_count2(input_file_name_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file(struct sInfo* info){
void* __result_obj__;
char* input_file_name_72;
_Bool _if_conditional38;
void* right_value108;
void* right_value109;
void* right_value110;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_72, 0, sizeof(char*));
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
    input_file_name_72=(char*)come_increment_ref_count(info->sname);
    if(_if_conditional38=input_file_name_72!=((void*)0)&&string_operator_not_equals(input_file_name_72,""),    _if_conditional38) {
        system(((char*)(right_value110=xsprintf("rm -f \%s.i* \%s.c*",((char*)(right_value108=string_to_string(input_file_name_72))),((char*)(right_value109=string_to_string(input_file_name_72)))))));
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    input_file_name_72 = come_decrement_ref_count2(input_file_name_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info){
void* __result_obj__;
char* input_file_name_73;
_Bool _if_conditional39;
void* right_value111;
void* right_value112;
void* right_value113;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_73, 0, sizeof(char*));
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
    input_file_name_73=(char*)come_increment_ref_count(info->sname);
    if(_if_conditional39=input_file_name_73!=((void*)0)&&string_operator_not_equals(input_file_name_73,""),    _if_conditional39) {
        system(((char*)(right_value113=xsprintf("rm -f \%s.i* \%s.c.out",((char*)(right_value111=string_to_string(input_file_name_73))),((char*)(right_value112=string_to_string(input_file_name_73)))))));
        right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    input_file_name_73 = come_decrement_ref_count2(input_file_name_73, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool cpp(struct sInfo* info){
void* __result_obj__;
char* input_file_name_74;
char* output_file_name_75;
_Bool _if_conditional40;
void* right_value114;
char* __dec_obj17;
void* right_value115;
char* __dec_obj18;
void* right_value116;
char* cmd_76;
_Bool exist_common_h_77;
struct _IO_FILE* f_78;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
int rc_79;
_Bool _if_conditional45;
void* right_value117;
void* right_value118;
char* cmd2_80;
_Bool _if_conditional46;
int rc_81;
_Bool _if_conditional47;
void* right_value119;
char* command2_82;
_Bool _if_conditional48;
void* right_value120;
void* right_value121;
char* cmd3_83;
_Bool _if_conditional49;
int rc_84;
void* right_value122;
char* command2_85;
_Bool _if_conditional50;
_Bool _if_conditional51;
void* right_value123;
void* right_value124;
char* cmd4_86;
void* right_value125;
char* command_87;
_Bool _if_conditional52;
void* right_value126;
char* command2_88;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&input_file_name_74, 0, sizeof(char*));
memset(&output_file_name_75, 0, sizeof(char*));
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&cmd_76, 0, sizeof(char*));
memset(&exist_common_h_77, 0, sizeof(_Bool));
memset(&f_78, 0, sizeof(struct _IO_FILE*));
memset(&rc_79, 0, sizeof(int));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&cmd2_80, 0, sizeof(char*));
memset(&rc_81, 0, sizeof(int));
right_value119 = (void*)0;
memset(&command2_82, 0, sizeof(char*));
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&cmd3_83, 0, sizeof(char*));
memset(&rc_84, 0, sizeof(int));
right_value122 = (void*)0;
memset(&command2_85, 0, sizeof(char*));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&cmd4_86, 0, sizeof(char*));
right_value125 = (void*)0;
memset(&command_87, 0, sizeof(char*));
right_value126 = (void*)0;
memset(&command2_88, 0, sizeof(char*));
    input_file_name_74=(char*)come_increment_ref_count(info->sname);
    if(_if_conditional40=!info->output_header_file&&info->output_file_name,    _if_conditional40) {
        __dec_obj17=output_file_name_75;
        output_file_name_75=(char*)come_increment_ref_count(((char*)(right_value114=string_operator_add(info->output_file_name,".i"))));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj18=output_file_name_75;
        output_file_name_75=(char*)come_increment_ref_count(((char*)(right_value115=string_operator_add(info->sname,".i"))));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    cmd_76=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"))));
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    exist_common_h_77=(_Bool)0;
    {
        f_78=fopen("common.h","r");
        if(f_78) {
            exist_common_h_77=(_Bool)1;
        }
        if(_if_conditional42=string_operator_equals(info->output_file_name,"common.h"),        _if_conditional42) {
            exist_common_h_77=(_Bool)0;
        }
        if(f_78) {
            fclose(f_78);
        }
    }
    if(_if_conditional44=!gCommonHeader,    _if_conditional44) {
        exist_common_h_77=(_Bool)0;
    }
    rc_79=system(cmd_76);
    if(_if_conditional45=rc_79==0,    _if_conditional45) {
        cmd2_80=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("gcc -E -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_77?((char*)(right_value117=__builtin_string(" -include common.h "))):"",input_file_name_74,output_file_name_75,output_file_name_75))));
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(info->verbose) {
            puts(cmd2_80);
        }
        rc_81=system(cmd2_80);
        if(_if_conditional47=rc_81!=0,        _if_conditional47) {
            printf("failed to cpp(2) (%s)\n",cmd2_80);
            exit(5);
        }
        command2_82=(char*)come_increment_ref_count(((char*)(right_value119=xsprintf("grep error\\: %s.cpp.out",output_file_name_75))));
        right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(info->verbose) {
            puts(command2_82);
        }
        (void)system(command2_82);
        cmd2_80 = come_decrement_ref_count2(cmd2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_82 = come_decrement_ref_count2(command2_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        cmd3_83=(char*)come_increment_ref_count(((char*)(right_value121=xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_77?((char*)(right_value120=__builtin_string(" -include common.h "))):"",input_file_name_74,output_file_name_75,output_file_name_75))));
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(info->verbose) {
            puts(cmd3_83);
        }
        rc_84=system(cmd3_83);
        command2_85=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("grep error\\: %s.cpp.out",output_file_name_75))));
        right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(info->verbose) {
            puts(command2_85);
        }
        (void)system(command2_85);
        if(_if_conditional51=rc_84!=0,        _if_conditional51) {
            cmd4_86=(char*)come_increment_ref_count(((char*)(right_value124=xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -C %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_77?((char*)(right_value123=__builtin_string(" -include common.h "))):"",input_file_name_74,output_file_name_75,output_file_name_75))));
            right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            command_87=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_75,input_file_name_74,info->clang_option,input_file_name_74))));
            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(info->verbose) {
                puts(cmd4_86);
            }
            rc_84=system(cmd4_86);
            command2_88=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("grep error\\: %s.cpp.out",output_file_name_75))));
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(info->verbose) {
                puts(command2_88);
            }
            (void)system(command2_88);
            if(_if_conditional54=rc_84!=0,            _if_conditional54) {
                printf("failed to cpp(2) (%s)\n",cmd4_86);
                exit(5);
            }
            cmd4_86 = come_decrement_ref_count2(cmd4_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command_87 = come_decrement_ref_count2(command_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command2_88 = come_decrement_ref_count2(command2_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        cmd3_83 = come_decrement_ref_count2(cmd3_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_85 = come_decrement_ref_count2(command2_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result76__ = (_Bool)1;
    input_file_name_74 = come_decrement_ref_count2(input_file_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_75 = come_decrement_ref_count2(output_file_name_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_76 = come_decrement_ref_count2(cmd_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result76__;
    input_file_name_74 = come_decrement_ref_count2(input_file_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_75 = come_decrement_ref_count2(output_file_name_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_76 = come_decrement_ref_count2(cmd_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __result_obj__;
void* right_value127;
char* input_file_name_89;
char* output_file_name_90;
_Bool _if_conditional55;
void* right_value128;
char* __dec_obj19;
void* right_value129;
char* __dec_obj20;
void* right_value130;
char* command_91;
_Bool _if_conditional56;
int rc_92;
void* right_value131;
char* command2_93;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool __result77__;
_Bool _if_conditional59;
void* right_value132;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
memset(&input_file_name_89, 0, sizeof(char*));
memset(&output_file_name_90, 0, sizeof(char*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&command_91, 0, sizeof(char*));
memset(&rc_92, 0, sizeof(int));
right_value131 = (void*)0;
memset(&command2_93, 0, sizeof(char*));
right_value132 = (void*)0;
    input_file_name_89=(char*)come_increment_ref_count(((char*)(right_value127=string_operator_add(info->sname,".c"))));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    output_file_name_90=((void*)0);
    if(_if_conditional55=info->output_file_name&&output_object_file,    _if_conditional55) {
        __dec_obj19=output_file_name_90;
        output_file_name_90=(char*)come_increment_ref_count(((char*)(right_value128=__builtin_string(info->output_file_name))));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj20=output_file_name_90;
        output_file_name_90=(char*)come_increment_ref_count(((char*)(right_value129=string_operator_add(info->sname,".o"))));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    command_91=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_90,input_file_name_89,info->clang_option,input_file_name_89))));
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(info->verbose) {
        puts(command_91);
    }
    rc_92=system(command_91);
    command2_93=(char*)come_increment_ref_count(((char*)(right_value131=xsprintf("grep error\\: %s.out",input_file_name_89))));
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(info->verbose) {
        puts(command2_93);
    }
    (void)system(command2_93);
    if(_if_conditional58=rc_92!=0,    _if_conditional58) {
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        __result77__ = (_Bool)0;
        input_file_name_89 = come_decrement_ref_count2(input_file_name_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        output_file_name_90 = come_decrement_ref_count2(output_file_name_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command_91 = come_decrement_ref_count2(command_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_93 = come_decrement_ref_count2(command2_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result77__;
    }
    if(_if_conditional59=!output_object_file,    _if_conditional59) {
        list$1charph_push_back(object_files,(char*)come_increment_ref_count(((char*)(right_value132=__builtin_string(output_file_name_90)))));
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result78__ = (_Bool)1;
    input_file_name_89 = come_decrement_ref_count2(input_file_name_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_90 = come_decrement_ref_count2(output_file_name_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_91 = come_decrement_ref_count2(command_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_93 = come_decrement_ref_count2(command2_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result78__;
    input_file_name_89 = come_decrement_ref_count2(input_file_name_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_90 = come_decrement_ref_count2(output_file_name_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_91 = come_decrement_ref_count2(command_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_93 = come_decrement_ref_count2(command2_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
void* __result_obj__;
char* output_file_name_94;
_Bool _if_conditional60;
void* right_value133;
char* __dec_obj21;
void* right_value134;
char* __dec_obj22;
void* right_value135;
void* right_value136;
struct buffer* command_95;
void* right_value137;
struct list$1charph* o2_saved_96;
char* it_97;
void* right_value138;
_Bool _if_conditional61;
void* right_value139;
char* cmd_98;
int rc_99;
_Bool _if_conditional62;
void* right_value140;
_Bool _if_conditional63;
void* right_value141;
_Bool _if_conditional64;
void* right_value142;
void* right_value143;
_Bool _if_conditional65;
_Bool __result79__;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&output_file_name_94, 0, sizeof(char*));
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&command_95, 0, sizeof(struct buffer*));
right_value137 = (void*)0;
memset(&o2_saved_96, 0, sizeof(struct list$1charph*));
memset(&it_97, 0, sizeof(char*));
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&cmd_98, 0, sizeof(char*));
memset(&rc_99, 0, sizeof(int));
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
    output_file_name_94=((void*)0);
    if(info->output_file_name) {
        __dec_obj21=output_file_name_94;
        output_file_name_94=(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string(info->output_file_name))));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj22=output_file_name_94;
        output_file_name_94=(char*)come_increment_ref_count(((char*)(right_value134=xnoextname(info->sname))));
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    command_95=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value136=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value135=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 243, "buffer"))))))));
    come_call_finalizer3(right_value135,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value136,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(command_95,((char*)(right_value137=xsprintf("clang -o %s -L%s/lib -L%s/lib ",output_file_name_94,getenv("HOME"),"/usr/local/"))));
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    o2_saved_96=(object_files),it_97=list$1charph_begin((o2_saved_96));    !list$1charph_end((o2_saved_96));    it_97=list$1charph_next((o2_saved_96))    ){
        buffer_append_str(command_95,((char*)(right_value138=xsprintf("%s ",it_97))));
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(gComeGC) {
        buffer_append_str(command_95,"-L/usr/local/lib -lneo-c-gc ");
    }
    else {
        buffer_append_str(command_95,"-L/usr/local/lib -lneo-c ");
    }
    cmd_98=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    rc_99=system(cmd_98);
    if(_if_conditional62=rc_99==0,    _if_conditional62) {
        buffer_append_str(command_95," -L/opt/homebrew/opt/pcre/lib ");
    }
    buffer_append_str(command_95,((char*)(right_value140=xsprintf(" %s ",info->clang_option))));
    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(gComeGC) {
        buffer_append_str(command_95,((char*)(right_value141=xsprintf(" -L/opt/homebrew/opt/boehmgc/lib -lgc "))));
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(info->verbose) {
        puts(((char*)(right_value142=buffer_to_string(command_95))));
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    rc_99=system(((char*)(right_value143=buffer_to_string(command_95))));
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional65=rc_99!=0,    _if_conditional65) {
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        __result79__ = (_Bool)0;
        output_file_name_94 = come_decrement_ref_count2(output_file_name_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(command_95,buffer_finalize, 0, 0, 0, 0, (void*)0);
        cmd_98 = come_decrement_ref_count2(cmd_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result79__;
    }
    __result80__ = (_Bool)1;
    output_file_name_94 = come_decrement_ref_count2(output_file_name_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(command_95,buffer_finalize, 0, 0, 0, 0, (void*)0);
    cmd_98 = come_decrement_ref_count2(cmd_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result80__;
    output_file_name_94 = come_decrement_ref_count2(output_file_name_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(command_95,buffer_finalize, 0, 0, 0, 0, (void*)0);
    cmd_98 = come_decrement_ref_count2(cmd_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool new_project(int argc, char** argv){
void* __result_obj__;
void* right_value144;
char* project_name_100;
void* right_value145;
void* right_value146;
void* right_value147;
char* project_name_debug_101;
void* right_value148;
char* cc_102;
void* right_value149;
char* install_103;
void* right_value150;
char* libs_104;
void* right_value151;
char* os_105;
void* right_value152;
char* prefix_106;
void* right_value153;
char* cflags_107;
void* right_value154;
char* cflags_debug_108;
_Bool _or_conditional1;
_Bool __exception_result_var_b1;
void* right_value155;
void* right_value156;
void* right_value157;
void* right_value158;
void* right_value159;
void* right_value160;
void* right_value161;
void* right_value162;
void* right_value163;
void* right_value164;
void* right_value165;
void* right_value166;
void* right_value167;
void* right_value168;
void* right_value169;
void* right_value170;
void* right_value171;
void* right_value172;
void* right_value173;
void* right_value174;
void* right_value175;
void* right_value176;
void* right_value177;
void* right_value178;
void* right_value179;
void* right_value180;
void* right_value181;
void* right_value182;
void* right_value183;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
memset(&project_name_100, 0, sizeof(char*));
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&project_name_debug_101, 0, sizeof(char*));
right_value148 = (void*)0;
memset(&cc_102, 0, sizeof(char*));
right_value149 = (void*)0;
memset(&install_103, 0, sizeof(char*));
right_value150 = (void*)0;
memset(&libs_104, 0, sizeof(char*));
right_value151 = (void*)0;
memset(&os_105, 0, sizeof(char*));
right_value152 = (void*)0;
memset(&prefix_106, 0, sizeof(char*));
right_value153 = (void*)0;
memset(&cflags_107, 0, sizeof(char*));
right_value154 = (void*)0;
memset(&cflags_debug_108, 0, sizeof(char*));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
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
    project_name_100=(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string(argv[2]))));
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    project_name_debug_101=(char*)come_increment_ref_count(((char*)(right_value147=string_operator_add(((char*)(right_value145=__builtin_string(argv[2]))),((char*)(right_value146=__builtin_string("-debug")))))));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    cc_102=(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string("neo-c"))));
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    install_103=(char*)come_increment_ref_count(((char*)(right_value149=__builtin_string("install"))));
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    libs_104=(char*)come_increment_ref_count(((char*)(right_value150=__builtin_string("-lpcre"))));
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    os_105=(char*)come_increment_ref_count(((char*)(right_value151=__builtin_string("linux"))));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    prefix_106=(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string("/usr/local/"))));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    cflags_107=(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string(" -common-header -O2 "))));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    cflags_debug_108=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(" -common-header -gdwarf-4 -cg "))));
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_or_conditional1=mkdir(project_name_100,(256|128|64)|((256|128|64)>>3)|((256>>3)>>3)|((64>>3)>>3)),    _or_conditional1 != 0) {
        (come_push_stackframe("02transpile.c", 292, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    charp_write(((char*)(right_value181=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tneo-c header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(right_value155=string_to_string(prefix_106))),((char*)(right_value156=string_to_string(project_name_100))),((char*)(right_value157=string_to_string(project_name_100))),((char*)(right_value158=string_to_string(project_name_100))),((char*)(right_value159=string_to_string(project_name_100))),((char*)(right_value160=string_to_string(cc_102))),((char*)(right_value161=string_to_string(install_103))),((char*)(right_value162=string_to_string(cflags_107))),((char*)(right_value163=string_to_string(cflags_debug_108))),((char*)(right_value164=string_to_string(libs_104))),((char*)(right_value165=string_to_string(os_105))),((char*)(right_value166=string_to_string(prefix_106))),((char*)(right_value167=string_to_string(project_name_100))),((char*)(right_value168=string_to_string(project_name_debug_101))),((char*)(right_value169=string_to_string(project_name_100))),((char*)(right_value170=string_to_string(project_name_100))),((char*)(right_value171=string_to_string(project_name_100))),((char*)(right_value172=string_to_string(project_name_100))),((char*)(right_value173=string_to_string(project_name_debug_101))),((char*)(right_value174=string_to_string(project_name_100))),((char*)(right_value175=string_to_string(project_name_100))),((char*)(right_value176=string_to_string(project_name_100))),((char*)(right_value177=string_to_string(project_name_100))),((char*)(right_value178=string_to_string(project_name_100))),((char*)(right_value179=string_to_string(project_name_debug_101))),((char*)(right_value180=string_to_string(project_name_debug_101)))))),((char*)(right_value183=xsprintf("\%s/Makefile",((char*)(right_value182=string_to_string(project_name_100)))))),(_Bool)0);
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result81__ = (_Bool)1;
    project_name_100 = come_decrement_ref_count2(project_name_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_101 = come_decrement_ref_count2(project_name_debug_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_102 = come_decrement_ref_count2(cc_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_103 = come_decrement_ref_count2(install_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_104 = come_decrement_ref_count2(libs_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_105 = come_decrement_ref_count2(os_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_106 = come_decrement_ref_count2(prefix_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_107 = come_decrement_ref_count2(cflags_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_108 = come_decrement_ref_count2(cflags_debug_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result81__;
    project_name_100 = come_decrement_ref_count2(project_name_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_101 = come_decrement_ref_count2(project_name_debug_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_102 = come_decrement_ref_count2(cc_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_103 = come_decrement_ref_count2(install_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_104 = come_decrement_ref_count2(libs_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_105 = come_decrement_ref_count2(os_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_106 = come_decrement_ref_count2(prefix_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_107 = come_decrement_ref_count2(cflags_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_108 = come_decrement_ref_count2(cflags_debug_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool run_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional2;
_Bool __exception_result_var_b2;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional2=system("make run"),    _or_conditional2 != 0) {
        (come_push_stackframe("02transpile.c", 393, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
    }
    __result82__ = (_Bool)1;
    return __result82__;
}

_Bool make_header_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional3;
_Bool __exception_result_var_b3;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional3=system("make header"),    _or_conditional3 != 0) {
        (come_push_stackframe("02transpile.c", 400, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    __result83__ = (_Bool)1;
    return __result83__;
}

_Bool compile_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional4;
_Bool __exception_result_var_b4;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional4=system("make compile"),    _or_conditional4 != 0) {
        (come_push_stackframe("02transpile.c", 407, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    __result84__ = (_Bool)1;
    return __result84__;
}

_Bool debug_run_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional5;
_Bool __exception_result_var_b5;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional5=system("make debug"),    _or_conditional5 != 0) {
        (come_push_stackframe("02transpile.c", 414, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
    }
    __result85__ = (_Bool)1;
    return __result85__;
}

_Bool clean_project(int argc, char** argv){
void* __result_obj__;
_Bool _or_conditional6;
_Bool __exception_result_var_b6;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_or_conditional6=system("make clean"),    _or_conditional6 != 0) {
        (come_push_stackframe("02transpile.c", 421, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
    }
    __result86__ = (_Bool)1;
    return __result86__;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __result_obj__;
void* right_value184;
void* right_value185;
_Bool _or_conditional7;
_Bool __exception_result_var_b7;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
right_value185 = (void*)0;
    if(_or_conditional7=system(((char*)(right_value185=xsprintf("make install DESTDIR=\%s",((char*)(right_value184=charp_to_string(prefix))))))),    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _or_conditional7 != 0) {
        (come_push_stackframe("02transpile.c", 428, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
    }
    __result87__ = (_Bool)1;
    return __result87__;
}

static void init_classes(struct sInfo* info){
void* __result_obj__;
void* right_value192;
void* right_value193;
void* right_value194;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
void* right_value203;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
void* right_value210;
void* right_value211;
void* right_value212;
void* right_value213;
void* right_value214;
void* right_value215;
void* right_value216;
void* right_value217;
void* right_value218;
void* right_value219;
void* right_value220;
void* right_value221;
void* right_value222;
void* right_value223;
void* right_value224;
void* right_value225;
void* right_value226;
void* right_value227;
int i_159;
void* right_value228;
char* generics_type_160;
void* right_value229;
void* right_value230;
int i_161;
void* right_value231;
char* generics_type_162;
void* right_value232;
void* right_value233;
int rc_164;
_Bool _if_conditional136;
void* right_value234;
void* right_value235;
void* right_value236;
void* right_value237;
char* type_name_165;
void* right_value238;
void* right_value239;
struct sType* type_166;
void* right_value240;
char* __dec_obj23;
void* right_value244;
void* right_value245;
void* right_value246;
struct sClass* klass_188;
void* right_value250;
void* right_value251;
void* right_value252;
void* right_value253;
void* right_value254;
void* right_value255;
void* right_value256;
void* right_value257;
void* right_value258;
void* right_value259;
void* right_value260;
void* right_value261;
void* right_value262;
void* right_value263;
void* right_value264;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
void* right_value269;
void* right_value270;
void* right_value271;
void* right_value272;
void* right_value273;
void* right_value274;
void* right_value275;
void* right_value329;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&i_159, 0, sizeof(int));
right_value228 = (void*)0;
memset(&generics_type_160, 0, sizeof(char*));
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&i_161, 0, sizeof(int));
right_value231 = (void*)0;
memset(&generics_type_162, 0, sizeof(char*));
right_value232 = (void*)0;
right_value233 = (void*)0;
memset(&rc_164, 0, sizeof(int));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&type_name_165, 0, sizeof(char*));
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&type_166, 0, sizeof(struct sType*));
right_value240 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
memset(&klass_188, 0, sizeof(struct sClass*));
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value329 = (void*)0;
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string("int")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value194=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value193=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 435, "sClass")))),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value193,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value194,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string("short")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value197=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value196=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 436, "sClass")))),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value196,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value197,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string("long")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value200=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value199=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 437, "sClass")))),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value199,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value200,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string("char")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value203=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value202=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 438, "sClass")))),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value202,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value203,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string("bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value206=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value205=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 439, "sClass")))),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value205,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value206,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string("_Bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value209=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value208=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 440, "sClass")))),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value208,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value209,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value210=__builtin_string("void")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value212=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value211=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 441, "sClass")))),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value211,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value212,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string("float")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value215=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value214=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 442, "sClass")))),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value214,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value215,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string("double")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value218=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value217=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 443, "sClass")))),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value217,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value218,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string("lambda")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value221=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value220=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 444, "sClass")))),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value220,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value221,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value222=__builtin_string("__uint128_t")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value224=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value223=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 445, "sClass")))),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value223,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value224,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string("__int128")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value227=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value226=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 446, "sClass")))),"__int128",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value226,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value227,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_159=0;    i_159<12;    i_159++    ){
        generics_type_160=(char*)come_increment_ref_count(((char*)(right_value228=xsprintf("generics_type%d",i_159))));
        right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_160),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value230=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value229=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 449, "sClass")))),generics_type_160,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_159,-1,(_Bool)0,info)))));
        come_call_finalizer3(right_value229,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value230,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        generics_type_160 = come_decrement_ref_count2(generics_type_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    for(    i_161=0;    i_161<7;    i_161++    ){
        generics_type_162=(char*)come_increment_ref_count(((char*)(right_value231=xsprintf("mgenerics_type%d",i_161))));
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_162),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value233=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value232=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 453, "sClass")))),generics_type_162,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_161,(_Bool)0,info)))));
        come_call_finalizer3(right_value232,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value233,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        generics_type_162 = come_decrement_ref_count2(generics_type_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    char cmd_163[1024];
    memset(&cmd_163, 0, sizeof(char)    *(1024)    );
    snprintf(cmd_163,1024,"which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");
    rc_164=system(cmd_163);
    if(_if_conditional136=rc_164==0,    _if_conditional136) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value234=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value236=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value235=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 461, "sClass")))),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value235,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value236,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        type_name_165=(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string("__builtin_va_list"))));
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_166=(struct sType*)come_increment_ref_count(((struct sType*)(right_value239=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value238=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 465, "sType")))),"__builtin_va_list",(_Bool)0,info))));
        come_call_finalizer3(right_value238,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value239,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj23=type_166->mOriginalTypeName;
        type_166->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value240=__builtin_string("__builtin_va_list"))));
        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value244=__builtin_string(type_name_165)))),(struct sType*)come_increment_ref_count(type_166));
        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_name_165 = come_decrement_ref_count2(type_name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_166,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_188=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value246=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value245=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 473, "sClass")))),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer3(right_value245,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value246,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_188->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value254=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value253=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 475, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value250=__builtin_string("v1")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value251=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 475, "sType")))),"char*",(_Bool)0,info)))))))));
        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value251,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value252,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value254,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_188->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value259=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value258=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 476, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value255=__builtin_string("v2")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value256=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 476, "sType")))),"char*",(_Bool)0,info)))))))));
        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value256,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value257,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value259,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_188->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value264=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value263=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 477, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string("v3")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value262=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value261=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 477, "sType")))),"char*",(_Bool)0,info)))))))));
        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value261,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value262,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value264,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_188->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value269=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value268=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 478, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string("v4")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value267=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value266=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 478, "sType")))),"int",(_Bool)0,info)))))))));
        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value266,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value267,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value269,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_188->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value274=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value273=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 479, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string("v5")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 479, "sType")))),"int",(_Bool)0,info)))))))));
        right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value271,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value272,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value274,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value275=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value329=sClass_clone(klass_188)))));
        right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value329,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(klass_188,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional66;
unsigned int hash_132;
unsigned int it_133;
_Bool _while_condtional15;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool same_key_exist_150;
char* it2_153;
_Bool _if_conditional132;
_Bool _if_conditional133;
struct map$2charphsClassph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_132, 0, sizeof(unsigned int));
memset(&it_133, 0, sizeof(unsigned int));
memset(&same_key_exist_150, 0, sizeof(_Bool));
memset(&it2_153, 0, sizeof(char*));
        if(_if_conditional66=self->len*10>=self->size,        _if_conditional66) {
            map$2charphsClassph_rehash(self);
        }
        hash_132=string_get_hash_key(key)%self->size;
        it_133=hash_132;
        while(_while_condtional15=(_Bool)1,        _while_condtional15) {
            if(_if_conditional101=self->item_existance[it_133],            _if_conditional101) {
                if(_if_conditional102=string_equals(self->keys[it_133],key),                _if_conditional102) {
                    if(_if_conditional103=1,                    _if_conditional103) {
                        list$1charp_remove(self->key_list,self->keys[it_133]);
                        self->keys[it_133] = come_decrement_ref_count2(self->keys[it_133], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_133]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_133]);
                        self->keys[it_133]=key;
                    }
                    if(_if_conditional123=1,                    _if_conditional123) {
                        come_call_finalizer3(self->items[it_133],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        self->items[it_133]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_133]=item;
                    }
                    break;
                }
                it_133++;
                if(_if_conditional124=it_133>=self->size,                _if_conditional124) {
                    it_133=0;
                }
                else {
                    if(_if_conditional125=it_133==hash_132,                    _if_conditional125) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_133]=(_Bool)1;
                if(_if_conditional126=1,                _if_conditional126) {
                    self->keys[it_133]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_133]=key;
                }
                if(_if_conditional127=1,                _if_conditional127) {
                    self->items[it_133]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_133]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_150=(_Bool)0;
        for(        it2_153=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_153=list$1charp_next(self->key_list)        ){
            if(_if_conditional132=string_equals(it2_153,key),            _if_conditional132) {
                same_key_exist_150=(_Bool)1;
            }
        }
        if(_if_conditional133=!same_key_exist_150,        _if_conditional133) {
            list$1charp_push_back(self->key_list,key);
        }
        __result111__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result111__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_109;
void* right_value186;
char** keys_110;
void* right_value187;
struct sClass** items_111;
void* right_value188;
_Bool* item_existance_118;
int len_119;
char* it_122;
struct sClass* default_value_125;
struct sClass* it2_128;
unsigned int hash_129;
int n_130;
_Bool _while_condtional14;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
struct sClass* default_value_131;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_109, 0, sizeof(int));
right_value186 = (void*)0;
memset(&keys_110, 0, sizeof(char**));
right_value187 = (void*)0;
memset(&items_111, 0, sizeof(struct sClass**));
right_value188 = (void*)0;
memset(&item_existance_118, 0, sizeof(_Bool*));
memset(&len_119, 0, sizeof(int));
memset(&it_122, 0, sizeof(char*));
memset(&default_value_125, 0, sizeof(struct sClass*));
memset(&it2_128, 0, sizeof(struct sClass*));
memset(&hash_129, 0, sizeof(unsigned int));
memset(&n_130, 0, sizeof(int));
memset(&default_value_131, 0, sizeof(struct sClass*));
                size_109=self->size*10;
                keys_110=(char**)come_increment_ref_count(((char**)(right_value186=(char**)come_calloc(1, sizeof(char*)*(1*(size_109)), "./neo-c.h", 1313, "char*%"))));
                right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_111=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value187=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_109)), "./neo-c.h", 1314, "sClass*%"))));
                come_call_finalizer3(right_value187,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                item_existance_118=(_Bool*)come_increment_ref_count(((_Bool*)(right_value188=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_109)), "./neo-c.h", 1315, "bool"))));
                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_119=0;
                for(                it_122=map$2charphsClassph_begin(self);                !map$2charphsClassph_end(self);                it_122=map$2charphsClassph_next(self)                ){
                    memset(&default_value_125,0,sizeof(struct sClass*));
                    it2_128=map$2charphsClassph_at(self,it_122,default_value_125);
                    hash_129=string_get_hash_key(it_122)%size_109;
                    n_130=hash_129;
                    while(_while_condtional14=(_Bool)1,                    _while_condtional14) {
                        if(_if_conditional98=item_existance_118[n_130],                        _if_conditional98) {
                            n_130++;
                            if(_if_conditional99=n_130>=size_109,                            _if_conditional99) {
                                n_130=0;
                            }
                            else {
                                if(_if_conditional100=n_130==hash_129,                                _if_conditional100) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_118[n_130]=(_Bool)1;
                            keys_110[n_130]=it_122;
                            items_111[n_130]=map$2charphsClassph_at(self,it_122,default_value_131);
                            len_119++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_110;
                self->items=items_111;
                self->item_existance=item_existance_118;
                self->size=size_109;
                self->len=len_119;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional88;
_Bool _if_conditional89;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional67=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional67) {
                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional68=self!=((void*)0)&&self->mFields!=((void*)0),                    _if_conditional68) {
                        come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional88=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                    _if_conditional88) {
                        self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional89=self!=((void*)0)&&self->mParentClassName!=((void*)0),                    _if_conditional89) {
                        self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_112;
_Bool _while_condtional10;
struct list_item$1tuple2$2charphsTypephph* prev_it_113;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_112, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_113, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            it_112=self->head;
                            while(_while_condtional10=it_112!=((void*)0),                            _while_condtional10) {
                                prev_it_113=it_112;
                                it_112=it_112->next;
                                come_call_finalizer3(prev_it_113,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional69;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional69=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional69) {
                                        come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional72;
_Bool _if_conditional74;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional72=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                                    _if_conditional72) {
                                                        come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional74=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                                    _if_conditional74) {
                                                        come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional76=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                                    _if_conditional76) {
                                                        come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional77=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                                    _if_conditional77) {
                                                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional78=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                                    _if_conditional78) {
                                                        come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional79=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                                    _if_conditional79) {
                                                        come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional81=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                                    _if_conditional81) {
                                                        come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional82=self!=((void*)0)&&self->mParamNames!=((void*)0),                                                    _if_conditional82) {
                                                        come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional83=self!=((void*)0)&&self->mResultType!=((void*)0),                                                    _if_conditional83) {
                                                        come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional84=self!=((void*)0)&&self->mAlignas!=((void*)0),                                                    _if_conditional84) {
                                                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    if(_if_conditional85=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                                    _if_conditional85) {
                                                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    if(_if_conditional86=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                                    _if_conditional86) {
                                                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional87=self!=((void*)0)&&self->mAsmName!=((void*)0),                                                    _if_conditional87) {
                                                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_114;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_115;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_114, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_115, 0, sizeof(struct list_item$1sTypeph*));
                                                            it_114=self->head;
                                                            while(_while_condtional11=it_114!=((void*)0),                                                            _while_condtional11) {
                                                                prev_it_115=it_114;
                                                                it_114=it_114->next;
                                                                come_call_finalizer3(prev_it_115,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional73;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    if(_if_conditional73=self!=((void*)0)&&self->item!=((void*)0),                                                                    _if_conditional73) {
                                                                        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional75;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional75=self!=((void*)0)&&self->v1!=((void*)0),                                                            _if_conditional75) {
                                                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_116;
_Bool _while_condtional12;
struct list_item$1sNodeph* prev_it_117;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_116, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_117, 0, sizeof(struct list_item$1sNodeph*));
                                                            it_116=self->head;
                                                            while(_while_condtional12=it_116!=((void*)0),                                                            _while_condtional12) {
                                                                prev_it_117=it_116;
                                                                it_116=it_116->next;
                                                                come_call_finalizer3(prev_it_117,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional80;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    if(_if_conditional80=self!=((void*)0)&&self->item!=((void*)0),                                                                    _if_conditional80) {
                                                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional90;
char* result_120;
char* __result88__;
_Bool _if_conditional91;
char* __result89__;
char* result_121;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_120, 0, sizeof(char*));
memset(&result_121, 0, sizeof(char*));
                    if(_if_conditional90=self==((void*)0),                    _if_conditional90) {
                        memset(&result_120,0,sizeof(char*));
                        __result88__ = __result_obj__ = result_120;
                        return __result88__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result89__ = __result_obj__ = self->key_list->it->item;
                        return __result89__;
                    }
                    memset(&result_121,0,sizeof(char*));
                    __result90__ = __result_obj__ = result_121;
                    return __result90__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result91__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result91__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional92;
char* result_123;
char* __result92__;
_Bool _if_conditional93;
char* __result93__;
char* result_124;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_123, 0, sizeof(char*));
memset(&result_124, 0, sizeof(char*));
                    if(_if_conditional92=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional92) {
                        memset(&result_123,0,sizeof(char*));
                        __result92__ = __result_obj__ = result_123;
                        return __result92__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result93__ = __result_obj__ = self->key_list->it->item;
                        return __result93__;
                    }
                    memset(&result_124,0,sizeof(char*));
                    __result94__ = __result_obj__ = result_124;
                    return __result94__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_126;
unsigned int it_127;
_Bool _while_condtional13;
_Bool _if_conditional94;
_Bool _if_conditional95;
struct sClass* __result95__;
_Bool _if_conditional96;
_Bool _if_conditional97;
struct sClass* __result96__;
struct sClass* __result97__;
struct sClass* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_126, 0, sizeof(unsigned int));
memset(&it_127, 0, sizeof(unsigned int));
                        hash_126=string_get_hash_key(((char*)key))%self->size;
                        it_127=hash_126;
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            if(_if_conditional94=self->item_existance[it_127],                            _if_conditional94) {
                                if(_if_conditional95=string_equals(self->keys[it_127],key),                                _if_conditional95) {
                                    __result95__ = __result_obj__ = self->items[it_127];
                                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result95__;
                                }
                                it_127++;
                                if(_if_conditional96=it_127>=self->size,                                _if_conditional96) {
                                    it_127=0;
                                }
                                else {
                                    if(_if_conditional97=it_127==hash_126,                                    _if_conditional97) {
                                        __result96__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result96__;
                                    }
                                }
                            }
                            else {
                                __result97__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                return __result97__;
                            }
                        }
                        __result98__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result98__;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_134;
struct list_item$1charp* it_135;
_Bool _while_condtional16;
_Bool _if_conditional104;
struct list$1charp* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_134, 0, sizeof(int));
memset(&it_135, 0, sizeof(struct list_item$1charp*));
                            it2_134=0;
                            it_135=self->head;
                            while(_while_condtional16=it_135!=((void*)0),                            _while_condtional16) {
                                if(_if_conditional104=string_equals(it_135->item,item),                                _if_conditional104) {
                                    list$1charp_delete(self,it2_134,it2_134+1);
                                    break;
                                }
                                it2_134++;
                                it_135=it_135->next;
                            }
                            __result102__ = __result_obj__ = self;
                            return __result102__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
int tmp_136;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
struct list$1charp* __result99__;
_Bool _if_conditional111;
_Bool _if_conditional112;
struct list_item$1charp* it_139;
int i_140;
_Bool _while_condtional18;
_Bool _if_conditional113;
struct list_item$1charp* prev_it_141;
_Bool _if_conditional114;
_Bool _if_conditional115;
struct list_item$1charp* it_142;
int i_143;
_Bool _while_condtional19;
_Bool _if_conditional116;
_Bool _if_conditional117;
struct list_item$1charp* prev_it_144;
struct list_item$1charp* it_145;
struct list_item$1charp* head_prev_it_146;
struct list_item$1charp* tail_it_147;
int i_148;
_Bool _while_condtional20;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
struct list_item$1charp* prev_it_149;
_Bool _if_conditional121;
_Bool _if_conditional122;
struct list$1charp* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_136, 0, sizeof(int));
memset(&it_139, 0, sizeof(struct list_item$1charp*));
memset(&i_140, 0, sizeof(int));
memset(&prev_it_141, 0, sizeof(struct list_item$1charp*));
memset(&it_142, 0, sizeof(struct list_item$1charp*));
memset(&i_143, 0, sizeof(int));
memset(&prev_it_144, 0, sizeof(struct list_item$1charp*));
memset(&it_145, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_146, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_147, 0, sizeof(struct list_item$1charp*));
memset(&i_148, 0, sizeof(int));
memset(&prev_it_149, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional105=head<0,                                        _if_conditional105) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional106=tail<0,                                        _if_conditional106) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional107=head>tail,                                        _if_conditional107) {
                                            tmp_136=tail;
                                            tail=head;
                                            head=tmp_136;
                                        }
                                        if(_if_conditional108=head<0,                                        _if_conditional108) {
                                            head=0;
                                        }
                                        if(_if_conditional109=tail>self->len,                                        _if_conditional109) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional110=head==tail,                                        _if_conditional110) {
                                            __result99__ = __result_obj__ = self;
                                            return __result99__;
                                        }
                                        if(_if_conditional111=head==0&&tail==self->len,                                        _if_conditional111) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional112=head==0,                                            _if_conditional112) {
                                                it_139=self->head;
                                                i_140=0;
                                                while(_while_condtional18=it_139!=((void*)0),                                                _while_condtional18) {
                                                    if(_if_conditional113=i_140<tail,                                                    _if_conditional113) {
                                                        prev_it_141=it_139;
                                                        it_139=it_139->next;
                                                        i_140++;
                                                        come_call_finalizer3(prev_it_141,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional114=i_140==tail,                                                        _if_conditional114) {
                                                            self->head=it_139;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_139=it_139->next;
                                                            i_140++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional115=tail==self->len,                                                _if_conditional115) {
                                                    it_142=self->head;
                                                    i_143=0;
                                                    while(_while_condtional19=it_142!=((void*)0),                                                    _while_condtional19) {
                                                        if(_if_conditional116=i_143==head,                                                        _if_conditional116) {
                                                            self->tail=it_142->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional117=i_143>=head,                                                        _if_conditional117) {
                                                            prev_it_144=it_142;
                                                            it_142=it_142->next;
                                                            i_143++;
                                                            come_call_finalizer3(prev_it_144,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_142=it_142->next;
                                                            i_143++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_145=self->head;
                                                    head_prev_it_146=((void*)0);
                                                    tail_it_147=((void*)0);
                                                    i_148=0;
                                                    while(_while_condtional20=it_145!=((void*)0),                                                    _while_condtional20) {
                                                        if(_if_conditional118=i_148==head,                                                        _if_conditional118) {
                                                            head_prev_it_146=it_145->prev;
                                                        }
                                                        if(_if_conditional119=i_148==tail,                                                        _if_conditional119) {
                                                            tail_it_147=it_145;
                                                        }
                                                        if(_if_conditional120=i_148>=head&&i_148<tail,                                                        _if_conditional120) {
                                                            prev_it_149=it_145;
                                                            it_145=it_145->next;
                                                            i_148++;
                                                            come_call_finalizer3(prev_it_149,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_145=it_145->next;
                                                            i_148++;
                                                        }
                                                    }
                                                    if(_if_conditional121=head_prev_it_146!=((void*)0),                                                    _if_conditional121) {
                                                        head_prev_it_146->next=tail_it_147;
                                                    }
                                                    if(_if_conditional122=tail_it_147!=((void*)0),                                                    _if_conditional122) {
                                                        tail_it_147->prev=head_prev_it_146;
                                                    }
                                                }
                                            }
                                        }
                                        __result101__ = __result_obj__ = self;
                                        return __result101__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_137;
_Bool _while_condtional17;
struct list_item$1charp* prev_it_138;
struct list$1charp* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_137, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_138, 0, sizeof(struct list_item$1charp*));
                                                it_137=self->head;
                                                while(_while_condtional17=it_137!=((void*)0),                                                _while_condtional17) {
                                                    prev_it_138=it_137;
                                                    it_137=it_137->next;
                                                    come_call_finalizer3(prev_it_138,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result100__ = __result_obj__ = self;
                                                return __result100__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional128;
char* result_151;
char* __result103__;
_Bool _if_conditional129;
char* __result104__;
char* result_152;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_151, 0, sizeof(char*));
memset(&result_152, 0, sizeof(char*));
            if(_if_conditional128=self==((void*)0),            _if_conditional128) {
                memset(&result_151,0,sizeof(char*));
                __result103__ = __result_obj__ = result_151;
                return __result103__;
            }
            self->it=self->head;
            if(self->it) {
                __result104__ = __result_obj__ = self->it->item;
                return __result104__;
            }
            memset(&result_152,0,sizeof(char*));
            __result105__ = __result_obj__ = result_152;
            return __result105__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
            __result106__ = self==((void*)0)||self->it==((void*)0);
            return __result106__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional130;
char* result_154;
char* __result107__;
_Bool _if_conditional131;
char* __result108__;
char* result_155;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_154, 0, sizeof(char*));
memset(&result_155, 0, sizeof(char*));
            if(_if_conditional130=self==((void*)0)||self->it==((void*)0),            _if_conditional130) {
                memset(&result_154,0,sizeof(char*));
                __result107__ = __result_obj__ = result_154;
                return __result107__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result108__ = __result_obj__ = self->it->item;
                return __result108__;
            }
            memset(&result_155,0,sizeof(char*));
            __result109__ = __result_obj__ = result_155;
            return __result109__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional134;
void* right_value189;
struct list_item$1charp* litem_156;
_Bool _if_conditional135;
void* right_value190;
struct list_item$1charp* litem_157;
void* right_value191;
struct list_item$1charp* litem_158;
struct list$1charp* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1charp*));
right_value190 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1charp*));
right_value191 = (void*)0;
memset(&litem_158, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional134=self->len==0,                _if_conditional134) {
                    litem_156=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value189=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                    come_call_finalizer3(right_value189,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_156->prev=((void*)0);
                    litem_156->next=((void*)0);
                    litem_156->item=item;
                    self->tail=litem_156;
                    self->head=litem_156;
                }
                else {
                    if(_if_conditional135=self->len==1,                    _if_conditional135) {
                        litem_157=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value190=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                        come_call_finalizer3(right_value190,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_157->prev=self->head;
                        litem_157->next=((void*)0);
                        litem_157->item=item;
                        self->tail=litem_157;
                        self->head->next=litem_157;
                    }
                    else {
                        litem_158=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value191=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                        come_call_finalizer3(right_value191,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_158->prev=self->tail;
                        litem_158->next=((void*)0);
                        litem_158->item=item;
                        self->tail->next=litem_158;
                        self->tail=litem_158;
                    }
                }
                self->len++;
                __result110__ = __result_obj__ = self;
                return __result110__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional137;
unsigned int hash_184;
unsigned int it_185;
_Bool _while_condtional23;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool same_key_exist_186;
char* it2_187;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct map$2charphsTypeph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_184, 0, sizeof(unsigned int));
memset(&it_185, 0, sizeof(unsigned int));
memset(&same_key_exist_186, 0, sizeof(_Bool));
memset(&it2_187, 0, sizeof(char*));
            if(_if_conditional137=self->len*10>=self->size,            _if_conditional137) {
                map$2charphsTypeph_rehash(self);
            }
            hash_184=string_get_hash_key(key)%self->size;
            it_185=hash_184;
            while(_while_condtional23=(_Bool)1,            _while_condtional23) {
                if(_if_conditional149=self->item_existance[it_185],                _if_conditional149) {
                    if(_if_conditional150=string_equals(self->keys[it_185],key),                    _if_conditional150) {
                        if(_if_conditional151=1,                        _if_conditional151) {
                            list$1charp_remove(self->key_list,self->keys[it_185]);
                            self->keys[it_185] = come_decrement_ref_count2(self->keys[it_185], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_185]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_185]);
                            self->keys[it_185]=key;
                        }
                        if(_if_conditional152=1,                        _if_conditional152) {
                            come_call_finalizer3(self->items[it_185],sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->items[it_185]=(struct sType*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_185]=item;
                        }
                        break;
                    }
                    it_185++;
                    if(_if_conditional153=it_185>=self->size,                    _if_conditional153) {
                        it_185=0;
                    }
                    else {
                        if(_if_conditional154=it_185==hash_184,                        _if_conditional154) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_185]=(_Bool)1;
                    if(_if_conditional155=1,                    _if_conditional155) {
                        self->keys[it_185]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_185]=key;
                    }
                    if(_if_conditional156=1,                    _if_conditional156) {
                        self->items[it_185]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_185]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_186=(_Bool)0;
            for(            it2_187=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_187=list$1charp_next(self->key_list)            ){
                if(_if_conditional157=string_equals(it2_187,key),                _if_conditional157) {
                    same_key_exist_186=(_Bool)1;
                }
            }
            if(_if_conditional158=!same_key_exist_186,            _if_conditional158) {
                list$1charp_push_back(self->key_list,key);
            }
            __result123__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result123__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_167;
void* right_value241;
char** keys_168;
void* right_value242;
struct sType** items_169;
void* right_value243;
_Bool* item_existance_170;
int len_171;
char* it_174;
struct sType* default_value_177;
struct sType* it2_180;
unsigned int hash_181;
int n_182;
_Bool _while_condtional22;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct sType* default_value_183;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_167, 0, sizeof(int));
right_value241 = (void*)0;
memset(&keys_168, 0, sizeof(char**));
right_value242 = (void*)0;
memset(&items_169, 0, sizeof(struct sType**));
right_value243 = (void*)0;
memset(&item_existance_170, 0, sizeof(_Bool*));
memset(&len_171, 0, sizeof(int));
memset(&it_174, 0, sizeof(char*));
memset(&default_value_177, 0, sizeof(struct sType*));
memset(&it2_180, 0, sizeof(struct sType*));
memset(&hash_181, 0, sizeof(unsigned int));
memset(&n_182, 0, sizeof(int));
memset(&default_value_183, 0, sizeof(struct sType*));
                    size_167=self->size*10;
                    keys_168=(char**)come_increment_ref_count(((char**)(right_value241=(char**)come_calloc(1, sizeof(char*)*(1*(size_167)), "./neo-c.h", 1313, "char*%"))));
                    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_169=(struct sType**)come_increment_ref_count(((struct sType**)(right_value242=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_167)), "./neo-c.h", 1314, "sType*%"))));
                    come_call_finalizer3(right_value242,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    item_existance_170=(_Bool*)come_increment_ref_count(((_Bool*)(right_value243=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_167)), "./neo-c.h", 1315, "bool"))));
                    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_171=0;
                    for(                    it_174=map$2charphsTypeph_begin(self);                    !map$2charphsTypeph_end(self);                    it_174=map$2charphsTypeph_next(self)                    ){
                        memset(&default_value_177,0,sizeof(struct sType*));
                        it2_180=map$2charphsTypeph_at(self,it_174,default_value_177);
                        hash_181=string_get_hash_key(it_174)%size_167;
                        n_182=hash_181;
                        while(_while_condtional22=(_Bool)1,                        _while_condtional22) {
                            if(_if_conditional146=item_existance_170[n_182],                            _if_conditional146) {
                                n_182++;
                                if(_if_conditional147=n_182>=size_167,                                _if_conditional147) {
                                    n_182=0;
                                }
                                else {
                                    if(_if_conditional148=n_182==hash_181,                                    _if_conditional148) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_170[n_182]=(_Bool)1;
                                keys_168[n_182]=it_174;
                                items_169[n_182]=map$2charphsTypeph_at(self,it_174,default_value_183);
                                len_171++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_168;
                    self->items=items_169;
                    self->item_existance=item_existance_170;
                    self->size=size_167;
                    self->len=len_171;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional138;
char* result_172;
char* __result112__;
_Bool _if_conditional139;
char* __result113__;
char* result_173;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_172, 0, sizeof(char*));
memset(&result_173, 0, sizeof(char*));
                        if(_if_conditional138=self==((void*)0),                        _if_conditional138) {
                            memset(&result_172,0,sizeof(char*));
                            __result112__ = __result_obj__ = result_172;
                            return __result112__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result113__ = __result_obj__ = self->key_list->it->item;
                            return __result113__;
                        }
                        memset(&result_173,0,sizeof(char*));
                        __result114__ = __result_obj__ = result_173;
                        return __result114__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result115__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result115__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional140;
char* result_175;
char* __result116__;
_Bool _if_conditional141;
char* __result117__;
char* result_176;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_175, 0, sizeof(char*));
memset(&result_176, 0, sizeof(char*));
                        if(_if_conditional140=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional140) {
                            memset(&result_175,0,sizeof(char*));
                            __result116__ = __result_obj__ = result_175;
                            return __result116__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result117__ = __result_obj__ = self->key_list->it->item;
                            return __result117__;
                        }
                        memset(&result_176,0,sizeof(char*));
                        __result118__ = __result_obj__ = result_176;
                        return __result118__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_178;
unsigned int it_179;
_Bool _while_condtional21;
_Bool _if_conditional142;
_Bool _if_conditional143;
struct sType* __result119__;
_Bool _if_conditional144;
_Bool _if_conditional145;
struct sType* __result120__;
struct sType* __result121__;
struct sType* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_178, 0, sizeof(unsigned int));
memset(&it_179, 0, sizeof(unsigned int));
                            hash_178=string_get_hash_key(((char*)key))%self->size;
                            it_179=hash_178;
                            while(_while_condtional21=(_Bool)1,                            _while_condtional21) {
                                if(_if_conditional142=self->item_existance[it_179],                                _if_conditional142) {
                                    if(_if_conditional143=string_equals(self->keys[it_179],key),                                    _if_conditional143) {
                                        __result119__ = __result_obj__ = self->items[it_179];
                                        come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result119__;
                                    }
                                    it_179++;
                                    if(_if_conditional144=it_179>=self->size,                                    _if_conditional144) {
                                        it_179=0;
                                    }
                                    else {
                                        if(_if_conditional145=it_179==hash_178,                                        _if_conditional145) {
                                            __result120__ = __result_obj__ = default_value;
                                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result120__;
                                        }
                                    }
                                }
                                else {
                                    __result121__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result121__;
                                }
                            }
                            __result122__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result122__;
                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional159;
void* right_value247;
struct list_item$1tuple2$2charphsTypephph* litem_189;
struct tuple2$2charphsTypeph* __dec_obj24;
_Bool _if_conditional162;
void* right_value248;
struct list_item$1tuple2$2charphsTypephph* litem_190;
struct tuple2$2charphsTypeph* __dec_obj25;
void* right_value249;
struct list_item$1tuple2$2charphsTypephph* litem_191;
struct tuple2$2charphsTypeph* __dec_obj26;
struct list$1tuple2$2charphsTypephph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value247 = (void*)0;
memset(&litem_189, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value248 = (void*)0;
memset(&litem_190, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value249 = (void*)0;
memset(&litem_191, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            if(_if_conditional159=self->len==0,            _if_conditional159) {
                litem_189=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value247=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 217, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer3(right_value247,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_189->prev=((void*)0);
                litem_189->next=((void*)0);
                __dec_obj24=litem_189->item;
                litem_189->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj24,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_189;
                self->head=litem_189;
            }
            else {
                if(_if_conditional162=self->len==1,                _if_conditional162) {
                    litem_190=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value248=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 227, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value248,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_190->prev=self->head;
                    litem_190->next=((void*)0);
                    __dec_obj25=litem_190->item;
                    litem_190->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj25,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_190;
                    self->head->next=litem_190;
                }
                else {
                    litem_191=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value249=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 237, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value249,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_191->prev=self->tail;
                    litem_191->next=((void*)0);
                    __dec_obj26=litem_191->item;
                    litem_191->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj26,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_191;
                    self->tail=litem_191;
                }
            }
            self->len++;
            __result124__ = __result_obj__ = self;
            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result124__;
            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj27;
struct sType* __dec_obj28;
struct tuple2$2charphsTypeph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj27=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj28=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 0, 0, (void*)0);
            __result125__ = __result_obj__ = self;
            come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result125__;
            come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional167;
struct sClass* __result126__;
void* right_value276;
struct sClass* result_192;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value277;
char* __dec_obj29;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value326;
struct list$1tuple2$2charphsTypephph* __dec_obj60;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
void* right_value327;
char* __dec_obj61;
_Bool _if_conditional275;
_Bool _if_conditional276;
void* right_value328;
char* __dec_obj62;
struct sClass* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
memset(&result_192, 0, sizeof(struct sClass*));
right_value277 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
            if(_if_conditional167=self==(void*)0,            _if_conditional167) {
                __result126__ = __result_obj__ = (void*)0;
                return __result126__;
            }
            result_192=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value276=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
            come_call_finalizer3(right_value276,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional168=self!=((void*)0),            _if_conditional168) {
                result_192->mStruct=self->mStruct;
            }
            if(_if_conditional169=self!=((void*)0),            _if_conditional169) {
                result_192->mFloat=self->mFloat;
            }
            if(_if_conditional170=self!=((void*)0),            _if_conditional170) {
                result_192->mUnion=self->mUnion;
            }
            if(_if_conditional171=self!=((void*)0),            _if_conditional171) {
                result_192->mGenerics=self->mGenerics;
            }
            if(_if_conditional172=self!=((void*)0),            _if_conditional172) {
                result_192->mMethodGenerics=self->mMethodGenerics;
            }
            if(_if_conditional173=self!=((void*)0),            _if_conditional173) {
                result_192->mEnum=self->mEnum;
            }
            if(_if_conditional174=self!=((void*)0),            _if_conditional174) {
                result_192->mProtocol=self->mProtocol;
            }
            if(_if_conditional175=self!=((void*)0),            _if_conditional175) {
                result_192->mNumber=self->mNumber;
            }
            if(_if_conditional176=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional176) {
                __dec_obj29=result_192->mName;
                result_192->mName=(char*)come_increment_ref_count(((char*)(right_value277=string_clone(self->mName))));
                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional177=self!=((void*)0),            _if_conditional177) {
                result_192->mGenericsNum=self->mGenericsNum;
            }
            if(_if_conditional178=self!=((void*)0),            _if_conditional178) {
                result_192->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            if(_if_conditional179=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional179) {
                __dec_obj60=result_192->mFields;
                result_192->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value326=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                come_call_finalizer3(__dec_obj60,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value326,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional272=self!=((void*)0),            _if_conditional272) {
                result_192->mOutputed=self->mOutputed;
            }
            if(_if_conditional273=self!=((void*)0),            _if_conditional273) {
                result_192->mOutputed2=self->mOutputed2;
            }
            if(_if_conditional274=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional274) {
                __dec_obj61=result_192->mDeclareSName;
                result_192->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value327=string_clone(self->mDeclareSName))));
                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional275=self!=((void*)0),            _if_conditional275) {
                result_192->mNobodyStruct=self->mNobodyStruct;
            }
            if(_if_conditional276=self!=((void*)0)&&self->mParentClassName!=((void*)0),            _if_conditional276) {
                __dec_obj62=result_192->mParentClassName;
                result_192->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value328=string_clone(self->mParentClassName))));
                __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result154__ = __result_obj__ = result_192;
            come_call_finalizer3(result_192,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result154__;
            come_call_finalizer3(result_192,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional180;
struct list$1tuple2$2charphsTypephph* __result127__;
void* right_value278;
void* right_value279;
struct list$1tuple2$2charphsTypephph* result_193;
struct list_item$1tuple2$2charphsTypephph* it_194;
_Bool _while_condtional24;
void* right_value325;
struct list$1tuple2$2charphsTypephph* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
right_value279 = (void*)0;
memset(&result_193, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_194, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value325 = (void*)0;
                    if(_if_conditional180=self==((void*)0),                    _if_conditional180) {
                        __result127__ = __result_obj__ = ((void*)0);
                        return __result127__;
                    }
                    result_193=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value279=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value278=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 133, "list$1tuple2$2charphsTypephph"))))))));
                    come_call_finalizer3(right_value278,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value279,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_194=self->head;
                    while(_while_condtional24=it_194!=((void*)0),                    _while_condtional24) {
                        list$1tuple2$2charphsTypephph_add(result_193,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value325=tuple2$2charphsTypephp_clone(it_194->item)))));
                        come_call_finalizer3(right_value325,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        it_194=it_194->next;
                    }
                    __result153__ = __result_obj__ = result_193;
                    come_call_finalizer3(result_193,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result153__;
                    come_call_finalizer3(result_193,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result128__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result128__;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional181;
void* right_value280;
struct list_item$1tuple2$2charphsTypephph* litem_195;
struct tuple2$2charphsTypeph* __dec_obj30;
_Bool _if_conditional184;
void* right_value281;
struct list_item$1tuple2$2charphsTypephph* litem_196;
struct tuple2$2charphsTypeph* __dec_obj31;
void* right_value282;
struct list_item$1tuple2$2charphsTypephph* litem_197;
struct tuple2$2charphsTypeph* __dec_obj32;
struct list$1tuple2$2charphsTypephph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value280 = (void*)0;
memset(&litem_195, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value281 = (void*)0;
memset(&litem_196, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value282 = (void*)0;
memset(&litem_197, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            if(_if_conditional181=self->len==0,                            _if_conditional181) {
                                litem_195=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value280=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 147, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value280,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_195->prev=((void*)0);
                                litem_195->next=((void*)0);
                                __dec_obj30=litem_195->item;
                                litem_195->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj30,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_195;
                                self->head=litem_195;
                            }
                            else {
                                if(_if_conditional184=self->len==1,                                _if_conditional184) {
                                    litem_196=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value281=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 157, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value281,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_196->prev=self->head;
                                    litem_196->next=((void*)0);
                                    __dec_obj31=litem_196->item;
                                    litem_196->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj31,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_196;
                                    self->head->next=litem_196;
                                }
                                else {
                                    litem_197=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value282=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 167, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value282,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_197->prev=self->tail;
                                    litem_197->next=((void*)0);
                                    __dec_obj32=litem_197->item;
                                    litem_197->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj32,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_197;
                                    self->tail=litem_197;
                                }
                            }
                            self->len++;
                            __result129__ = __result_obj__ = self;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result129__;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional187;
_Bool _if_conditional188;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional187=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional187) {
                                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional188=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional188) {
                                            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional189;
struct tuple2$2charphsTypeph* __result130__;
void* right_value283;
struct tuple2$2charphsTypeph* result_198;
_Bool _if_conditional192;
void* right_value284;
char* __dec_obj33;
_Bool _if_conditional193;
void* right_value324;
struct sType* __dec_obj59;
struct tuple2$2charphsTypeph* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value283 = (void*)0;
memset(&result_198, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value284 = (void*)0;
right_value324 = (void*)0;
                            if(_if_conditional189=self==(void*)0,                            _if_conditional189) {
                                __result130__ = __result_obj__ = (void*)0;
                                return __result130__;
                            }
                            result_198=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value283=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                            come_call_finalizer3(right_value283,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional192=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional192) {
                                __dec_obj33=result_198->v1;
                                result_198->v1=(char*)come_increment_ref_count(((char*)(right_value284=string_clone(self->v1))));
                                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional193=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional193) {
                                __dec_obj59=result_198->v2;
                                result_198->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_clone(self->v2))));
                                come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value324,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                            __result152__ = __result_obj__ = result_198;
                            come_call_finalizer3(result_198,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
                            return __result152__;
                            come_call_finalizer3(result_198,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional190;
_Bool _if_conditional191;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional190=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional190) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional191=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional191) {
                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional194;
struct sType* __result131__;
void* right_value285;
struct sType* result_199;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value292;
struct list$1sTypeph* __dec_obj37;
_Bool _if_conditional200;
void* right_value295;
struct tuple1$1sTypeph* __dec_obj39;
_Bool _if_conditional204;
void* right_value298;
struct tuple1$1sTypeph* __dec_obj41;
_Bool _if_conditional207;
void* right_value299;
char* __dec_obj42;
_Bool _if_conditional208;
void* right_value300;
struct list$1sTypeph* __dec_obj43;
_Bool _if_conditional209;
void* right_value308;
struct list$1sNodeph* __dec_obj47;
_Bool _if_conditional222;
_Bool _if_conditional223;
void* right_value309;
struct list$1sTypeph* __dec_obj48;
_Bool _if_conditional224;
void* right_value316;
struct list$1charph* __dec_obj52;
_Bool _if_conditional228;
void* right_value319;
struct tuple1$1sTypeph* __dec_obj54;
_Bool _if_conditional231;
_Bool _if_conditional232;
void* right_value320;
struct sNode* __dec_obj55;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
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
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
void* right_value321;
struct sNode* __dec_obj56;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
void* right_value322;
char* __dec_obj57;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
void* right_value323;
char* __dec_obj58;
_Bool _if_conditional271;
struct sType* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value285 = (void*)0;
memset(&result_199, 0, sizeof(struct sType*));
right_value292 = (void*)0;
right_value295 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value316 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
                                    if(_if_conditional194=self==(void*)0,                                    _if_conditional194) {
                                        __result131__ = __result_obj__ = (void*)0;
                                        return __result131__;
                                    }
                                    result_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value285=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                                    come_call_finalizer3(right_value285,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional195=self!=((void*)0),                                    _if_conditional195) {
                                        result_199->mClass=self->mClass;
                                    }
                                    if(_if_conditional196=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                    _if_conditional196) {
                                        __dec_obj37=result_199->mMultipleTypes;
                                        result_199->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value292=list$1sTypeph_clone(self->mMultipleTypes))));
                                        come_call_finalizer3(__dec_obj37,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value292,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional200=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                    _if_conditional200) {
                                        __dec_obj39=result_199->mNoSolvedGenericsType;
                                        result_199->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value295=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                        come_call_finalizer3(__dec_obj39,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value295,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional204=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                    _if_conditional204) {
                                        __dec_obj41=result_199->mOriginalLoadVarType;
                                        result_199->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value298=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value298,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional207=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                    _if_conditional207) {
                                        __dec_obj42=result_199->mGenericsName;
                                        result_199->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value299=string_clone(self->mGenericsName))));
                                        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional208=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                    _if_conditional208) {
                                        __dec_obj43=result_199->mGenericsTypes;
                                        result_199->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value300=list$1sTypeph_clone(self->mGenericsTypes))));
                                        come_call_finalizer3(__dec_obj43,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value300,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional209=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                    _if_conditional209) {
                                        __dec_obj47=result_199->mArrayNum;
                                        result_199->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value308=list$1sNodeph_clone(self->mArrayNum))));
                                        come_call_finalizer3(__dec_obj47,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value308,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional222=self!=((void*)0),                                    _if_conditional222) {
                                        result_199->mOmitArrayNum=self->mOmitArrayNum;
                                    }
                                    if(_if_conditional223=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional223) {
                                        __dec_obj48=result_199->mParamTypes;
                                        result_199->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value309=list$1sTypeph_clone(self->mParamTypes))));
                                        come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value309,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional224=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional224) {
                                        __dec_obj52=result_199->mParamNames;
                                        result_199->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value316=list$1charph_clone(self->mParamNames))));
                                        come_call_finalizer3(__dec_obj52,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value316,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional228=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional228) {
                                        __dec_obj54=result_199->mResultType;
                                        result_199->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value319=tuple1$1sTypephp_clone(self->mResultType))));
                                        come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value319,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional231=self!=((void*)0),                                    _if_conditional231) {
                                        result_199->mVarArgs=self->mVarArgs;
                                    }
                                    if(_if_conditional232=self!=((void*)0)&&self->mAlignas!=((void*)0),                                    _if_conditional232) {
                                        __dec_obj55=result_199->mAlignas;
                                        result_199->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value320=sNode_clone(self->mAlignas))));
                                        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value320) { right_value320 = come_decrement_ref_count2(right_value320, ((struct sNode*)right_value320)->finalize, ((struct sNode*)right_value320)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional233=self!=((void*)0),                                    _if_conditional233) {
                                        result_199->mUnsigned=self->mUnsigned;
                                    }
                                    if(_if_conditional234=self!=((void*)0),                                    _if_conditional234) {
                                        result_199->mShort=self->mShort;
                                    }
                                    if(_if_conditional235=self!=((void*)0),                                    _if_conditional235) {
                                        result_199->mLong=self->mLong;
                                    }
                                    if(_if_conditional236=self!=((void*)0),                                    _if_conditional236) {
                                        result_199->mLongLong=self->mLongLong;
                                    }
                                    if(_if_conditional237=self!=((void*)0),                                    _if_conditional237) {
                                        result_199->mConstant=self->mConstant;
                                    }
                                    if(_if_conditional238=self!=((void*)0),                                    _if_conditional238) {
                                        result_199->mRegister=self->mRegister;
                                    }
                                    if(_if_conditional239=self!=((void*)0),                                    _if_conditional239) {
                                        result_199->mVolatile=self->mVolatile;
                                    }
                                    if(_if_conditional240=self!=((void*)0),                                    _if_conditional240) {
                                        result_199->mStatic=self->mStatic;
                                    }
                                    if(_if_conditional241=self!=((void*)0),                                    _if_conditional241) {
                                        result_199->mRecord=self->mRecord;
                                    }
                                    if(_if_conditional242=self!=((void*)0),                                    _if_conditional242) {
                                        result_199->mExtern=self->mExtern;
                                    }
                                    if(_if_conditional243=self!=((void*)0),                                    _if_conditional243) {
                                        result_199->mRestrict=self->mRestrict;
                                    }
                                    if(_if_conditional244=self!=((void*)0),                                    _if_conditional244) {
                                        result_199->mImmutable=self->mImmutable;
                                    }
                                    if(_if_conditional245=self!=((void*)0),                                    _if_conditional245) {
                                        result_199->mHeap=self->mHeap;
                                    }
                                    if(_if_conditional246=self!=((void*)0),                                    _if_conditional246) {
                                        result_199->mDummyHeap=self->mDummyHeap;
                                    }
                                    if(_if_conditional247=self!=((void*)0),                                    _if_conditional247) {
                                        result_199->mDelegate=self->mDelegate;
                                    }
                                    if(_if_conditional248=self!=((void*)0),                                    _if_conditional248) {
                                        result_199->mShare=self->mShare;
                                    }
                                    if(_if_conditional249=self!=((void*)0),                                    _if_conditional249) {
                                        result_199->mClone=self->mClone;
                                    }
                                    if(_if_conditional250=self!=((void*)0),                                    _if_conditional250) {
                                        result_199->mNoHeap=self->mNoHeap;
                                    }
                                    if(_if_conditional251=self!=((void*)0),                                    _if_conditional251) {
                                        result_199->mNoCallingDestructor=self->mNoCallingDestructor;
                                    }
                                    if(_if_conditional252=self!=((void*)0),                                    _if_conditional252) {
                                        result_199->mRefference=self->mRefference;
                                    }
                                    if(_if_conditional253=self!=((void*)0),                                    _if_conditional253) {
                                        result_199->mException=self->mException;
                                    }
                                    if(_if_conditional254=self!=((void*)0),                                    _if_conditional254) {
                                        result_199->mPointerNum=self->mPointerNum;
                                    }
                                    if(_if_conditional255=self!=((void*)0),                                    _if_conditional255) {
                                        result_199->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                    }
                                    if(_if_conditional256=self!=((void*)0),                                    _if_conditional256) {
                                        result_199->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                    }
                                    if(_if_conditional257=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                    _if_conditional257) {
                                        __dec_obj56=result_199->mSizeNum;
                                        result_199->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value321=sNode_clone(self->mSizeNum))));
                                        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value321) { right_value321 = come_decrement_ref_count2(right_value321, ((struct sNode*)right_value321)->finalize, ((struct sNode*)right_value321)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional258=self!=((void*)0),                                    _if_conditional258) {
                                        result_199->mDynamicArrayNum=self->mDynamicArrayNum;
                                    }
                                    if(_if_conditional259=self!=((void*)0),                                    _if_conditional259) {
                                        result_199->mTypeOfExpression=self->mTypeOfExpression;
                                    }
                                    if(_if_conditional260=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                    _if_conditional260) {
                                        __dec_obj57=result_199->mOriginalTypeName;
                                        result_199->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value322=string_clone(self->mOriginalTypeName))));
                                        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional261=self!=((void*)0),                                    _if_conditional261) {
                                        result_199->mOriginalPointerNum=self->mOriginalPointerNum;
                                    }
                                    if(_if_conditional262=self!=((void*)0),                                    _if_conditional262) {
                                        result_199->mFunctionParam=self->mFunctionParam;
                                    }
                                    if(_if_conditional263=self!=((void*)0),                                    _if_conditional263) {
                                        result_199->mAllocaValue=self->mAllocaValue;
                                    }
                                    if(_if_conditional264=self!=((void*)0),                                    _if_conditional264) {
                                        result_199->mGenericsStruct=self->mGenericsStruct;
                                    }
                                    if(_if_conditional265=self!=((void*)0),                                    _if_conditional265) {
                                        result_199->mSolvedGenericsName=self->mSolvedGenericsName;
                                    }
                                    if(_if_conditional266=self!=((void*)0),                                    _if_conditional266) {
                                        result_199->mComeMemCore=self->mComeMemCore;
                                    }
                                    if(_if_conditional267=self!=((void*)0),                                    _if_conditional267) {
                                        result_199->mInline=self->mInline;
                                    }
                                    if(_if_conditional268=self!=((void*)0),                                    _if_conditional268) {
                                        result_199->mNullValue=self->mNullValue;
                                    }
                                    if(_if_conditional269=self!=((void*)0),                                    _if_conditional269) {
                                        result_199->mGuardValue=self->mGuardValue;
                                    }
                                    if(_if_conditional270=self!=((void*)0)&&self->mAsmName!=((void*)0),                                    _if_conditional270) {
                                        __dec_obj58=result_199->mAsmName;
                                        result_199->mAsmName=(char*)come_increment_ref_count(((char*)(right_value323=string_clone(self->mAsmName))));
                                        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional271=self!=((void*)0),                                    _if_conditional271) {
                                        result_199->mArrayPointerType=self->mArrayPointerType;
                                    }
                                    __result151__ = __result_obj__ = result_199;
                                    come_call_finalizer3(result_199,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result151__;
                                    come_call_finalizer3(result_199,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional197;
struct list$1sTypeph* __result132__;
void* right_value286;
void* right_value287;
struct list$1sTypeph* result_200;
struct list_item$1sTypeph* it_201;
_Bool _while_condtional25;
void* right_value291;
struct list$1sTypeph* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value286 = (void*)0;
right_value287 = (void*)0;
memset(&result_200, 0, sizeof(struct list$1sTypeph*));
memset(&it_201, 0, sizeof(struct list_item$1sTypeph*));
right_value291 = (void*)0;
                                            if(_if_conditional197=self==((void*)0),                                            _if_conditional197) {
                                                __result132__ = __result_obj__ = ((void*)0);
                                                return __result132__;
                                            }
                                            result_200=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value287=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value286=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                                            come_call_finalizer3(right_value286,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value287,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_201=self->head;
                                            while(_while_condtional25=it_201!=((void*)0),                                            _while_condtional25) {
                                                list$1sTypeph_add(result_200,(struct sType*)come_increment_ref_count(((struct sType*)(right_value291=sType_clone(it_201->item)))));
                                                come_call_finalizer3(right_value291,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                it_201=it_201->next;
                                            }
                                            __result135__ = __result_obj__ = result_200;
                                            come_call_finalizer3(result_200,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result135__;
                                            come_call_finalizer3(result_200,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result133__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result133__;
                                                come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional198;
void* right_value288;
struct list_item$1sTypeph* litem_202;
struct sType* __dec_obj34;
_Bool _if_conditional199;
void* right_value289;
struct list_item$1sTypeph* litem_203;
struct sType* __dec_obj35;
void* right_value290;
struct list_item$1sTypeph* litem_204;
struct sType* __dec_obj36;
struct list$1sTypeph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value288 = (void*)0;
memset(&litem_202, 0, sizeof(struct list_item$1sTypeph*));
right_value289 = (void*)0;
memset(&litem_203, 0, sizeof(struct list_item$1sTypeph*));
right_value290 = (void*)0;
memset(&litem_204, 0, sizeof(struct list_item$1sTypeph*));
                                                    if(_if_conditional198=self->len==0,                                                    _if_conditional198) {
                                                        litem_202=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value288=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                                                        come_call_finalizer3(right_value288,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        litem_202->prev=((void*)0);
                                                        litem_202->next=((void*)0);
                                                        __dec_obj34=litem_202->item;
                                                        litem_202->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        self->tail=litem_202;
                                                        self->head=litem_202;
                                                    }
                                                    else {
                                                        if(_if_conditional199=self->len==1,                                                        _if_conditional199) {
                                                            litem_203=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value289=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(right_value289,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_203->prev=self->head;
                                                            litem_203->next=((void*)0);
                                                            __dec_obj35=litem_203->item;
                                                            litem_203->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->tail=litem_203;
                                                            self->head->next=litem_203;
                                                        }
                                                        else {
                                                            litem_204=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value290=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(right_value290,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_204->prev=self->tail;
                                                            litem_204->next=((void*)0);
                                                            __dec_obj36=litem_204->item;
                                                            litem_204->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->tail->next=litem_204;
                                                            self->tail=litem_204;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result134__ = __result_obj__ = self;
                                                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result134__;
                                                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_205;
_Bool _while_condtional26;
struct list_item$1sTypeph* prev_it_206;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_205, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_206, 0, sizeof(struct list_item$1sTypeph*));
                                            it_205=self->head;
                                            while(_while_condtional26=it_205!=((void*)0),                                            _while_condtional26) {
                                                prev_it_206=it_205;
                                                it_205=it_205->next;
                                                come_call_finalizer3(prev_it_206,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional202;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional202=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional202) {
                                                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional210;
struct list$1sNodeph* __result140__;
void* right_value301;
void* right_value302;
struct list$1sNodeph* result_209;
struct list_item$1sNodeph* it_210;
_Bool _while_condtional27;
void* right_value307;
struct list$1sNodeph* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&result_209, 0, sizeof(struct list$1sNodeph*));
memset(&it_210, 0, sizeof(struct list_item$1sNodeph*));
right_value307 = (void*)0;
                                            if(_if_conditional210=self==((void*)0),                                            _if_conditional210) {
                                                __result140__ = __result_obj__ = ((void*)0);
                                                return __result140__;
                                            }
                                            result_209=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value302=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value301=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                                            come_call_finalizer3(right_value301,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value302,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_210=self->head;
                                            while(_while_condtional27=it_210!=((void*)0),                                            _while_condtional27) {
                                                list$1sNodeph_add(result_209,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=sNode_clone(it_210->item)))));
                                                if(right_value307) { right_value307 = come_decrement_ref_count2(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                it_210=it_210->next;
                                            }
                                            __result145__ = __result_obj__ = result_209;
                                            come_call_finalizer3(result_209,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result145__;
                                            come_call_finalizer3(result_209,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result141__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result141__;
                                                come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional211;
void* right_value303;
struct list_item$1sNodeph* litem_211;
struct sNode* __dec_obj44;
_Bool _if_conditional212;
void* right_value304;
struct list_item$1sNodeph* litem_212;
struct sNode* __dec_obj45;
void* right_value305;
struct list_item$1sNodeph* litem_213;
struct sNode* __dec_obj46;
struct list$1sNodeph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value303 = (void*)0;
memset(&litem_211, 0, sizeof(struct list_item$1sNodeph*));
right_value304 = (void*)0;
memset(&litem_212, 0, sizeof(struct list_item$1sNodeph*));
right_value305 = (void*)0;
memset(&litem_213, 0, sizeof(struct list_item$1sNodeph*));
                                                    if(_if_conditional211=self->len==0,                                                    _if_conditional211) {
                                                        litem_211=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value303=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                                                        come_call_finalizer3(right_value303,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        litem_211->prev=((void*)0);
                                                        litem_211->next=((void*)0);
                                                        __dec_obj44=litem_211->item;
                                                        litem_211->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
                                                        self->tail=litem_211;
                                                        self->head=litem_211;
                                                    }
                                                    else {
                                                        if(_if_conditional212=self->len==1,                                                        _if_conditional212) {
                                                            litem_212=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value304=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(right_value304,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_212->prev=self->head;
                                                            litem_212->next=((void*)0);
                                                            __dec_obj45=litem_212->item;
                                                            litem_212->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
                                                            self->tail=litem_212;
                                                            self->head->next=litem_212;
                                                        }
                                                        else {
                                                            litem_213=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value305=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(right_value305,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_213->prev=self->tail;
                                                            litem_213->next=((void*)0);
                                                            __dec_obj46=litem_213->item;
                                                            litem_213->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
                                                            self->tail->next=litem_213;
                                                            self->tail=litem_213;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result142__ = __result_obj__ = self;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result142__;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional213;
struct sNode* __result143__;
void* right_value306;
struct sNode* result_214;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
struct sNode* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value306 = (void*)0;
memset(&result_214, 0, sizeof(struct sNode*));
                                                    if(_if_conditional213=self==(void*)0,                                                    _if_conditional213) {
                                                        __result143__ = __result_obj__ = (void*)0;
                                                        return __result143__;
                                                    }
                                                    result_214=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value306=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                                    if(right_value306) { right_value306 = come_decrement_ref_count2(right_value306, ((struct sNode*)right_value306)->finalize, ((struct sNode*)right_value306)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    if(_if_conditional214=self!=((void*)0)&&self->clone!=((void*)0),                                                    _if_conditional214) {
                                                        result_214->_protocol_obj=self->clone(self->_protocol_obj);
                                                    }
                                                    if(_if_conditional215=self!=((void*)0),                                                    _if_conditional215) {
                                                        result_214->finalize=self->finalize;
                                                    }
                                                    if(_if_conditional216=self!=((void*)0),                                                    _if_conditional216) {
                                                        result_214->clone=self->clone;
                                                    }
                                                    if(_if_conditional217=self!=((void*)0),                                                    _if_conditional217) {
                                                        result_214->compile=self->compile;
                                                    }
                                                    if(_if_conditional218=self!=((void*)0),                                                    _if_conditional218) {
                                                        result_214->sline=self->sline;
                                                    }
                                                    if(_if_conditional219=self!=((void*)0),                                                    _if_conditional219) {
                                                        result_214->sname=self->sname;
                                                    }
                                                    if(_if_conditional220=self!=((void*)0),                                                    _if_conditional220) {
                                                        result_214->terminated=self->terminated;
                                                    }
                                                    if(_if_conditional221=self!=((void*)0),                                                    _if_conditional221) {
                                                        result_214->kind=self->kind;
                                                    }
                                                    __result144__ = __result_obj__ = result_214;
                                                    if(result_214) { result_214 = come_decrement_ref_count2(result_214, ((struct sNode*)result_214)->finalize, ((struct sNode*)result_214)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result144__;
                                                    if(result_214) { result_214 = come_decrement_ref_count2(result_214, ((struct sNode*)result_214)->finalize, ((struct sNode*)result_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_215;
_Bool _while_condtional28;
struct list_item$1sNodeph* prev_it_216;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_215, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_216, 0, sizeof(struct list_item$1sNodeph*));
                                            it_215=self->head;
                                            while(_while_condtional28=it_215!=((void*)0),                                            _while_condtional28) {
                                                prev_it_216=it_215;
                                                it_215=it_215->next;
                                                come_call_finalizer3(prev_it_216,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional225;
struct list$1charph* __result146__;
void* right_value310;
void* right_value311;
struct list$1charph* result_217;
struct list_item$1charph* it_218;
_Bool _while_condtional29;
void* right_value315;
struct list$1charph* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&result_217, 0, sizeof(struct list$1charph*));
memset(&it_218, 0, sizeof(struct list_item$1charph*));
right_value315 = (void*)0;
                                            if(_if_conditional225=self==((void*)0),                                            _if_conditional225) {
                                                __result146__ = __result_obj__ = ((void*)0);
                                                return __result146__;
                                            }
                                            result_217=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value311=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value310=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                                            come_call_finalizer3(right_value310,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value311,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_218=self->head;
                                            while(_while_condtional29=it_218!=((void*)0),                                            _while_condtional29) {
                                                list$1charph_add(result_217,(char*)come_increment_ref_count(((char*)(right_value315=string_clone(it_218->item)))));
                                                right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                it_218=it_218->next;
                                            }
                                            __result148__ = __result_obj__ = result_217;
                                            come_call_finalizer3(result_217,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result148__;
                                            come_call_finalizer3(result_217,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional226;
void* right_value312;
struct list_item$1charph* litem_219;
char* __dec_obj49;
_Bool _if_conditional227;
void* right_value313;
struct list_item$1charph* litem_220;
char* __dec_obj50;
void* right_value314;
struct list_item$1charph* litem_221;
char* __dec_obj51;
struct list$1charph* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value312 = (void*)0;
memset(&litem_219, 0, sizeof(struct list_item$1charph*));
right_value313 = (void*)0;
memset(&litem_220, 0, sizeof(struct list_item$1charph*));
right_value314 = (void*)0;
memset(&litem_221, 0, sizeof(struct list_item$1charph*));
                                                    if(_if_conditional226=self->len==0,                                                    _if_conditional226) {
                                                        litem_219=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value312=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                                                        come_call_finalizer3(right_value312,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        litem_219->prev=((void*)0);
                                                        litem_219->next=((void*)0);
                                                        __dec_obj49=litem_219->item;
                                                        litem_219->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        self->tail=litem_219;
                                                        self->head=litem_219;
                                                    }
                                                    else {
                                                        if(_if_conditional227=self->len==1,                                                        _if_conditional227) {
                                                            litem_220=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value313=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                                            come_call_finalizer3(right_value313,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_220->prev=self->head;
                                                            litem_220->next=((void*)0);
                                                            __dec_obj50=litem_220->item;
                                                            litem_220->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            self->tail=litem_220;
                                                            self->head->next=litem_220;
                                                        }
                                                        else {
                                                            litem_221=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value314=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                                            come_call_finalizer3(right_value314,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_221->prev=self->tail;
                                                            litem_221->next=((void*)0);
                                                            __dec_obj51=litem_221->item;
                                                            litem_221->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            self->tail->next=litem_221;
                                                            self->tail=litem_221;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result147__ = __result_obj__ = self;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                    return __result147__;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_222;
_Bool _while_condtional30;
struct list_item$1charph* prev_it_223;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_222, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_223, 0, sizeof(struct list_item$1charph*));
                                            it_222=self->head;
                                            while(_while_condtional30=it_222!=((void*)0),                                            _while_condtional30) {
                                                prev_it_223=it_222;
                                                it_222=it_222->next;
                                                come_call_finalizer3(prev_it_223,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional229;
struct tuple1$1sTypeph* __result149__;
void* right_value317;
struct tuple1$1sTypeph* result_224;
_Bool _if_conditional230;
void* right_value318;
struct sType* __dec_obj53;
struct tuple1$1sTypeph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value317 = (void*)0;
memset(&result_224, 0, sizeof(struct tuple1$1sTypeph*));
right_value318 = (void*)0;
                                            if(_if_conditional229=self==(void*)0,                                            _if_conditional229) {
                                                __result149__ = __result_obj__ = (void*)0;
                                                return __result149__;
                                            }
                                            result_224=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value317=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                                            come_call_finalizer3(right_value317,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional230=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional230) {
                                                __dec_obj53=result_224->v1;
                                                result_224->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=sType_clone(self->v1))));
                                                come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(right_value318,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                            }
                                            __result150__ = __result_obj__ = result_224;
                                            come_call_finalizer3(result_224,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result150__;
                                            come_call_finalizer3(result_224,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_225;
_Bool _while_condtional31;
struct list_item$1tuple2$2charphsTypephph* prev_it_226;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_225, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_226, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    it_225=self->head;
                    while(_while_condtional31=it_225!=((void*)0),                    _while_condtional31) {
                        prev_it_226=it_225;
                        it_225=it_225->next;
                        come_call_finalizer3(prev_it_226,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

int come_main_v2(int argc, char** argv){
void* __result_obj__;
_Bool _if_conditional277;
void* right_value330;
void* right_value331;
struct buffer* clang_option_227;
void* right_value332;
void* right_value333;
struct buffer* cpp_option_228;
void* right_value334;
void* right_value335;
struct list$1charph* files_229;
void* right_value336;
void* right_value337;
struct list$1charph* object_files_230;
_Bool output_object_file_231;
_Bool output_cpp_file_232;
_Bool output_source_file_flag_233;
void* right_value338;
char* output_file_name_234;
_Bool verbose_235;
_Bool prohibit_common_header_236;
_Bool come_debug_237;
_Bool come_malloc_238;
_Bool come_str_239;
int i_240;
_Bool _if_conditional278;
void* right_value339;
char* __dec_obj63;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
void* right_value340;
_Bool _if_conditional286;
void* right_value341;
void* right_value342;
void* right_value343;
_Bool _if_conditional287;
void* right_value344;
void* right_value345;
void* right_value346;
void* right_value347;
_Bool _if_conditional288;
_Bool _if_conditional289;
void* right_value348;
void* right_value349;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
void* right_value350;
_Bool _if_conditional295;
void* right_value351;
void* right_value352;
_Bool _if_conditional296;
_Bool _if_conditional297;
struct _IO_FILE* f_241;
_Bool _and_conditional1;
_Bool __exception_result_var_b8;
_Bool _or_conditional8;
_Bool __exception_result_var_b9;
void* right_value353;
char* tmp_file_242;
void* right_value354;
void* right_value355;
void* right_value356;
void* right_value357;
struct sInfo info_243;
void* right_value358;
char* __dec_obj64;
void* right_value359;
char* __dec_obj65;
void* right_value360;
char* __dec_obj66;
void* right_value361;
char* __dec_obj67;
void* right_value362;
void* right_value368;
struct map$2charphsFunph* __dec_obj69;
void* right_value369;
void* right_value375;
struct map$2charphsGenericsFunph* __dec_obj71;
void* right_value376;
void* right_value382;
struct map$2charphsClassph* __dec_obj73;
void* right_value383;
void* right_value389;
struct map$2charphsClassModuleph* __dec_obj75;
void* right_value390;
void* right_value396;
struct map$2charphsTypeph* __dec_obj77;
void* right_value397;
void* right_value398;
struct sModule* __dec_obj78;
void* right_value399;
void* right_value400;
struct list$1sRightValueObjectph* __dec_obj79;
void* right_value401;
void* right_value402;
struct list$1CVALUEph* __dec_obj80;
void* right_value403;
void* right_value404;
struct sVarTable* __dec_obj81;
void* right_value405;
void* right_value406;
struct sVarTable* lv_table_279;
void* right_value407;
void* right_value408;
struct list$1charph* __dec_obj82;
void* right_value409;
void* right_value410;
struct list$1charph* __dec_obj83;
void* right_value411;
void* right_value412;
struct map$2charphsClassph* __dec_obj84;
static int n_280=0;
void* right_value413;
char* __dec_obj85;
_Bool _if_conditional380;
void* right_value414;
void* right_value415;
void* right_value416;
struct buffer* __dec_obj86;
void* right_value417;
void* right_value418;
void* right_value419;
struct buffer* __dec_obj87;
_Bool _if_conditional381;
_Bool _if_conditional382;
void* right_value420;
void* right_value421;
_Bool _if_conditional415;
_Bool _if_conditional416;
int __result163__;
_Bool _if_conditional417;
_Bool _if_conditional418;
int __result164__;
_Bool _if_conditional419;
_Bool _if_conditional420;
int __result165__;
_Bool _if_conditional421;
_Bool _if_conditional422;
int __result166__;
_Bool _if_conditional423;
_Bool _if_conditional424;
int __result167__;
_Bool _if_conditional425;
_Bool _if_conditional426;
int __result168__;
_Bool _if_conditional427;
_Bool _if_conditional428;
_Bool _if_conditional429;
int __result169__;
_Bool _if_conditional430;
_Bool _if_conditional431;
int __result170__;
void* right_value422;
void* right_value423;
struct buffer* clang_option_283;
void* right_value424;
void* right_value425;
struct buffer* cpp_option_284;
void* right_value426;
void* right_value427;
struct list$1charph* files_285;
void* right_value428;
void* right_value429;
struct list$1charph* object_files_286;
_Bool output_object_file_287;
_Bool output_cpp_file_288;
_Bool output_source_file_flag_289;
char* output_file_name_290;
_Bool verbose_291;
_Bool come_debug_292;
_Bool come_malloc_293;
_Bool come_str_294;
int i_295;
_Bool _if_conditional432;
void* right_value430;
char* __dec_obj88;
_Bool _if_conditional433;
_Bool _if_conditional434;
_Bool _if_conditional435;
_Bool _if_conditional436;
_Bool _if_conditional437;
_Bool _if_conditional438;
void* right_value431;
_Bool _if_conditional439;
void* right_value432;
void* right_value433;
void* right_value434;
_Bool _if_conditional440;
void* right_value435;
void* right_value436;
void* right_value437;
void* right_value438;
_Bool _if_conditional441;
_Bool _if_conditional442;
_Bool _if_conditional443;
void* right_value439;
void* right_value440;
_Bool _if_conditional444;
_Bool _if_conditional445;
_Bool _if_conditional446;
_Bool _if_conditional447;
_Bool _if_conditional448;
void* right_value441;
_Bool _if_conditional449;
void* right_value442;
void* right_value443;
void* right_value444;
_Bool _if_conditional450;
_Bool _if_conditional451;
struct list$1charph* o2_saved_296;
char* it_297;
struct sInfo info_298;
void* right_value445;
char* __dec_obj89;
void* right_value446;
char* __dec_obj90;
void* right_value447;
char* __dec_obj91;
void* right_value448;
void* right_value449;
struct map$2charphsFunph* __dec_obj92;
void* right_value450;
void* right_value451;
struct map$2charphsGenericsFunph* __dec_obj93;
void* right_value452;
void* right_value453;
struct map$2charphsClassph* __dec_obj94;
void* right_value454;
void* right_value455;
struct map$2charphsClassModuleph* __dec_obj95;
void* right_value456;
void* right_value457;
struct map$2charphsTypeph* __dec_obj96;
void* right_value458;
void* right_value459;
struct sModule* __dec_obj97;
void* right_value460;
void* right_value461;
struct list$1sRightValueObjectph* __dec_obj98;
void* right_value462;
void* right_value463;
struct list$1CVALUEph* __dec_obj99;
void* right_value464;
void* right_value465;
struct sVarTable* __dec_obj100;
void* right_value466;
void* right_value467;
struct sVarTable* lv_table_299;
void* right_value468;
void* right_value469;
struct list$1charph* __dec_obj101;
void* right_value470;
void* right_value471;
struct list$1charph* __dec_obj102;
void* right_value472;
void* right_value473;
struct map$2charphsClassph* __dec_obj103;
_Bool _if_conditional452;
void* right_value474;
void* right_value475;
void* right_value476;
struct buffer* __dec_obj104;
void* right_value477;
void* right_value478;
void* right_value479;
struct buffer* __dec_obj105;
_Bool _if_conditional453;
void* right_value480;
char* __dec_obj106;
char* __dec_obj107;
_Bool _if_conditional454;
_Bool _if_conditional455;
_Bool _if_conditional456;
_Bool _if_conditional457;
_Bool _if_conditional458;
_Bool _if_conditional459;
_Bool _if_conditional460;
struct sInfo info_300;
void* right_value481;
char* __dec_obj108;
void* right_value482;
char* __dec_obj109;
_Bool _if_conditional463;
void* right_value483;
char* __dec_obj110;
char* __dec_obj111;
struct __current_stack2__ __current_stack2__;
_Bool _if_conditional464;
int __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value330 = (void*)0;
right_value331 = (void*)0;
memset(&clang_option_227, 0, sizeof(struct buffer*));
right_value332 = (void*)0;
right_value333 = (void*)0;
memset(&cpp_option_228, 0, sizeof(struct buffer*));
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&files_229, 0, sizeof(struct list$1charph*));
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&object_files_230, 0, sizeof(struct list$1charph*));
memset(&output_object_file_231, 0, sizeof(_Bool));
memset(&output_cpp_file_232, 0, sizeof(_Bool));
memset(&output_source_file_flag_233, 0, sizeof(_Bool));
right_value338 = (void*)0;
memset(&output_file_name_234, 0, sizeof(char*));
memset(&verbose_235, 0, sizeof(_Bool));
memset(&prohibit_common_header_236, 0, sizeof(_Bool));
memset(&come_debug_237, 0, sizeof(_Bool));
memset(&come_malloc_238, 0, sizeof(_Bool));
memset(&come_str_239, 0, sizeof(_Bool));
memset(&i_240, 0, sizeof(int));
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
memset(&f_241, 0, sizeof(struct _IO_FILE*));
right_value353 = (void*)0;
memset(&tmp_file_242, 0, sizeof(char*));
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
memset(&info_243, 0, sizeof(struct sInfo));
right_value358 = (void*)0;
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value406 = (void*)0;
memset(&lv_table_279, 0, sizeof(struct sVarTable*));
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value411 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
right_value414 = (void*)0;
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value420 = (void*)0;
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
memset(&clang_option_283, 0, sizeof(struct buffer*));
right_value424 = (void*)0;
right_value425 = (void*)0;
memset(&cpp_option_284, 0, sizeof(struct buffer*));
right_value426 = (void*)0;
right_value427 = (void*)0;
memset(&files_285, 0, sizeof(struct list$1charph*));
right_value428 = (void*)0;
right_value429 = (void*)0;
memset(&object_files_286, 0, sizeof(struct list$1charph*));
memset(&output_object_file_287, 0, sizeof(_Bool));
memset(&output_cpp_file_288, 0, sizeof(_Bool));
memset(&output_source_file_flag_289, 0, sizeof(_Bool));
memset(&output_file_name_290, 0, sizeof(char*));
memset(&verbose_291, 0, sizeof(_Bool));
memset(&come_debug_292, 0, sizeof(_Bool));
memset(&come_malloc_293, 0, sizeof(_Bool));
memset(&come_str_294, 0, sizeof(_Bool));
memset(&i_295, 0, sizeof(int));
right_value430 = (void*)0;
right_value431 = (void*)0;
right_value432 = (void*)0;
right_value433 = (void*)0;
right_value434 = (void*)0;
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value437 = (void*)0;
right_value438 = (void*)0;
right_value439 = (void*)0;
right_value440 = (void*)0;
right_value441 = (void*)0;
right_value442 = (void*)0;
right_value443 = (void*)0;
right_value444 = (void*)0;
memset(&o2_saved_296, 0, sizeof(struct list$1charph*));
memset(&it_297, 0, sizeof(char*));
memset(&info_298, 0, sizeof(struct sInfo));
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value447 = (void*)0;
right_value448 = (void*)0;
right_value449 = (void*)0;
right_value450 = (void*)0;
right_value451 = (void*)0;
right_value452 = (void*)0;
right_value453 = (void*)0;
right_value454 = (void*)0;
right_value455 = (void*)0;
right_value456 = (void*)0;
right_value457 = (void*)0;
right_value458 = (void*)0;
right_value459 = (void*)0;
right_value460 = (void*)0;
right_value461 = (void*)0;
right_value462 = (void*)0;
right_value463 = (void*)0;
right_value464 = (void*)0;
right_value465 = (void*)0;
right_value466 = (void*)0;
right_value467 = (void*)0;
memset(&lv_table_299, 0, sizeof(struct sVarTable*));
right_value468 = (void*)0;
right_value469 = (void*)0;
right_value470 = (void*)0;
right_value471 = (void*)0;
right_value472 = (void*)0;
right_value473 = (void*)0;
right_value474 = (void*)0;
right_value475 = (void*)0;
right_value476 = (void*)0;
right_value477 = (void*)0;
right_value478 = (void*)0;
right_value479 = (void*)0;
right_value480 = (void*)0;
memset(&info_300, 0, sizeof(struct sInfo));
right_value481 = (void*)0;
right_value482 = (void*)0;
right_value483 = (void*)0;
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    if(_if_conditional277=charp_operator_equals(argv[1],"header")&&argc>=3,    _if_conditional277) {
        gProgramName=argv[0];
        clang_option_227=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value331=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value330=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 490, "buffer"))))))));
        come_call_finalizer3(right_value330,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value331,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        cpp_option_228=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value333=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value332=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 491, "buffer"))))))));
        come_call_finalizer3(right_value332,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value333,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        files_229=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value335=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value334=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 492, "list$1charph"))))))));
        come_call_finalizer3(right_value334,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value335,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        object_files_230=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value337=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value336=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 493, "list$1charph"))))))));
        come_call_finalizer3(right_value336,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value337,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        output_object_file_231=(_Bool)0;
        output_cpp_file_232=(_Bool)0;
        output_source_file_flag_233=(_Bool)0;
        output_file_name_234=(char*)come_increment_ref_count(((char*)(right_value338=__builtin_string("common.h"))));
        right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        verbose_235=(_Bool)0;
        prohibit_common_header_236=(_Bool)0;
        come_debug_237=(_Bool)0;
        come_malloc_238=(_Bool)0;
        come_str_239=(_Bool)0;
        for(        i_240=2;        i_240<argc;        i_240++        ){
            if(_if_conditional278=charp_operator_equals(argv[i_240],"-o")&&i_240+1<argc,            _if_conditional278) {
                __dec_obj63=output_file_name_234;
                output_file_name_234=(char*)come_increment_ref_count(((char*)(right_value339=__builtin_string(argv[i_240+1]))));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                i_240++;
            }
            else {
                if(_if_conditional279=charp_operator_equals(argv[i_240],"-str"),                _if_conditional279) {
                    come_str_239=(_Bool)1;
                }
                else {
                    if(_if_conditional280=charp_operator_equals(argv[i_240],"-leak"),                    _if_conditional280) {
                        come_malloc_238=(_Bool)1;
                    }
                    else {
                        if(_if_conditional281=charp_operator_equals(argv[i_240],"-gc"),                        _if_conditional281) {
                            gComeGC=(_Bool)1;
                        }
                        else {
                            if(_if_conditional282=charp_operator_equals(argv[i_240],"-g"),                            _if_conditional282) {
                                buffer_append_str(clang_option_227,"-g ");
                            }
                            else {
                                if(_if_conditional283=charp_operator_equals(argv[i_240],"-cg"),                                _if_conditional283) {
                                    buffer_append_str(clang_option_227,"-g ");
                                    come_debug_237=(_Bool)1;
                                }
                                else {
                                    if(_if_conditional284=charp_operator_equals(argv[i_240],"-common-header"),                                    _if_conditional284) {
                                        gCommonHeader=(_Bool)1;
                                    }
                                    else {
                                        if(_if_conditional285=charp_operator_equals(argv[i_240],"-original-position"),                                        _if_conditional285) {
                                            gComeOriginalSourcePosition=(_Bool)0;
                                        }
                                        else {
                                            if(_if_conditional286=string_operator_equals(((char*)(right_value340=charp_operator_load_range_element(argv[i_240],0,2))),"-O"),                                            right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                            _if_conditional286) {
                                                buffer_append_str(clang_option_227,((char*)(right_value342=xsprintf(" \%s ",((char*)(right_value341=charp_to_string(argv[i_240])))))));
                                                right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                come_debug_237=(_Bool)0;
                                            }
                                            else {
                                                if(_if_conditional287=string_operator_equals(((char*)(right_value343=charp_operator_load_range_element(argv[i_240],0,2))),"-D"),                                                right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                _if_conditional287) {
                                                    buffer_append_str(cpp_option_228,((char*)(right_value345=xsprintf(" \%s ",((char*)(right_value344=charp_to_string(argv[i_240])))))));
                                                    right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    buffer_append_str(clang_option_227,((char*)(right_value347=xsprintf(" \%s ",((char*)(right_value346=charp_to_string(argv[i_240])))))));
                                                    right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    if(_if_conditional288=charp_operator_equals(argv[i_240],"-v"),                                                    _if_conditional288) {
                                                        buffer_append_str(clang_option_227,"-v ");
                                                        verbose_235=(_Bool)1;
                                                    }
                                                    else {
                                                        if(_if_conditional289=strlen(argv[i_240])>=2&&memcmp(argv[i_240],"-I",strlen("-I"))==0,                                                        _if_conditional289) {
                                                            buffer_append_str(cpp_option_228,((char*)(right_value349=charp_operator_add(" ",((char*)(right_value348=charp_operator_add(argv[i_240]," ")))))));
                                                            right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        else {
                                                            if(_if_conditional290=charp_operator_equals(argv[i_240],"-gdwarf-4"),                                                            _if_conditional290) {
                                                                buffer_append_str(clang_option_227,"-gdwarf-4 ");
                                                            }
                                                            else {
                                                                if(_if_conditional291=charp_operator_equals(argv[i_240],"-s")||charp_operator_equals(argv[i_240],"-S"),                                                                _if_conditional291) {
                                                                    output_source_file_flag_233=(_Bool)1;
                                                                    gComeOriginalSourcePosition=(_Bool)0;
                                                                }
                                                                else {
                                                                    if(_if_conditional292=charp_operator_equals(argv[i_240],"-c"),                                                                    _if_conditional292) {
                                                                        output_object_file_231=(_Bool)1;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional293=charp_operator_equals(argv[i_240],"-E"),                                                                        _if_conditional293) {
                                                                            output_cpp_file_232=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional294=argv[i_240][0]==45,                                                                            _if_conditional294) {
                                                                                buffer_append_str(clang_option_227,((char*)(right_value350=charp_operator_add(argv[i_240]," "))));
                                                                                right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                if(_if_conditional295=strlen(argv[i_240])>2&&memcmp(argv[i_240]+strlen(argv[i_240])-2,".o",2)==0,                                                                                _if_conditional295) {
                                                                                    list$1charph_push_back(object_files_230,(char*)come_increment_ref_count(((char*)(right_value351=__builtin_string(argv[i_240])))));
                                                                                    right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    list$1charph_push_back(files_229,(char*)come_increment_ref_count(((char*)(right_value352=__builtin_string(argv[i_240])))));
                                                                                    right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        gComeDebug=come_debug_237;
        gComeMalloc=come_malloc_238;
        if(come_str_239) {
            if(gComeGC) {
                buffer_append_str(clang_option_227," -lneo-c-str-gc -lpcre ");
            }
            else {
                buffer_append_str(clang_option_227," -lneo-c-str -lpcre ");
            }
        }
        if(_and_conditional1=f_241=fopen(output_file_name_234,"w"),        _and_conditional1 == 0) {
            (come_push_stackframe("02transpile.c", 581, 7),__exception_result_var_b8=die("fopen"), come_pop_stackframe(), __exception_result_var_b8);
        }
        fclose(f_241);
        if(_or_conditional8=truncate(output_file_name_234,0),        _or_conditional8 != 0) {
            (come_push_stackframe("02transpile.c", 584, 8),__exception_result_var_b9=die("truncate"), come_pop_stackframe(), __exception_result_var_b9);
        }
        tmp_file_242=(char*)come_increment_ref_count(((char*)(right_value353=__builtin_string("tmp-common-header"))));
        right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        system(((char*)(right_value357=xsprintf("cat \%s > \%s",((char*)(right_value355=string_to_string(((char*)(right_value354=list$1charph_join(files_229," ")))))),((char*)(right_value356=string_to_string(tmp_file_242)))))));
        right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memset(&info_243,0,sizeof(struct sInfo));
        __dec_obj64=info_243.base_sname;
        info_243.base_sname=(char*)come_increment_ref_count(((char*)(right_value358=__builtin_string(tmp_file_242))));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj65=info_243.sname;
        info_243.sname=(char*)come_increment_ref_count(((char*)(right_value359=__builtin_string(tmp_file_242))));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info_243.sline=1;
        info_243.err_num=0;
        __dec_obj66=info_243.clang_option;
        info_243.clang_option=(char*)come_increment_ref_count(((char*)(right_value360=buffer_to_string(clang_option_227))));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj67=info_243.cpp_option;
        info_243.cpp_option=(char*)come_increment_ref_count(((char*)(right_value361=buffer_to_string(cpp_option_228))));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info_243.no_output_err=(_Bool)0;
        __dec_obj69=info_243.funcs;
        info_243.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value368=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value362=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 601, "map$2charphsFunph"))))))));
        come_call_finalizer3(__dec_obj69,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value362,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value368,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj71=info_243.generics_funcs;
        info_243.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value375=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value369=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 602, "map$2charphsGenericsFunph"))))))));
        come_call_finalizer3(__dec_obj71,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value369,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value375,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj73=info_243.classes;
        info_243.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value382=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value376=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 603, "map$2charphsClassph"))))))));
        come_call_finalizer3(__dec_obj73,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value376,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value382,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj75=info_243.modules;
        info_243.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value389=map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value383=(struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 604, "map$2charphsClassModuleph"))))))));
        come_call_finalizer3(__dec_obj75,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value383,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value389,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj77=info_243.types;
        info_243.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value396=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value390=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 605, "map$2charphsTypeph"))))))));
        come_call_finalizer3(__dec_obj77,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value390,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value396,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj78=info_243.module;
        info_243.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value398=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value397=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 606, "sModule"))))))));
        come_call_finalizer3(__dec_obj78,sModule_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value397,sModule_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value398,sModule_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj79=info_243.right_value_objects;
        info_243.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value400=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value399=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 607, "list$1sRightValueObjectph"))))))));
        come_call_finalizer3(__dec_obj79,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value399,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value400,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj80=info_243.stack;
        info_243.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value402=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value401=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 608, "list$1CVALUEph"))))))));
        come_call_finalizer3(__dec_obj80,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value401,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value402,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj81=info_243.gv_table;
        info_243.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value404=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value403=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 609, "sVarTable")))),(_Bool)1,((void*)0)))));
        come_call_finalizer3(__dec_obj81,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value403,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value404,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        lv_table_279=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value406=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value405=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 610, "sVarTable")))),(_Bool)0,((void*)0)))));
        come_call_finalizer3(right_value405,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value406,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        info_243.lv_table=lv_table_279;
        __dec_obj82=info_243.generics_type_names;
        info_243.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value408=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value407=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 612, "list$1charph"))))))));
        come_call_finalizer3(__dec_obj82,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value407,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value408,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj83=info_243.method_generics_type_names;
        info_243.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value410=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value409=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 613, "list$1charph"))))))));
        come_call_finalizer3(__dec_obj83,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value409,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value410,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj84=info_243.generics_classes;
        info_243.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value412=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value411=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 614, "map$2charphsClassph"))))))));
        come_call_finalizer3(__dec_obj84,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value411,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value412,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
        info_243.verbose=verbose_235;
        info_243.output_header_file=(_Bool)1;
        info_243.num_source_files=n_280++;
        info_243.max_source_files=list$1charph_length(files_229);
        __dec_obj85=info_243.output_file_name;
        info_243.output_file_name=(char*)come_increment_ref_count(((char*)(right_value413=__builtin_string(output_file_name_234))));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        init_classes(&info_243);
        clear_tmp_file(&info_243);
        if(_if_conditional380=!cpp(&info_243),        _if_conditional380) {
            printf("%s %d: transpile failed\n",info_243.sname,info_243.sline);
            exit(2);
        }
        __dec_obj86=info_243.original_source;
        info_243.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value416=string_to_buffer(((char*)(right_value415=string_read(((char*)(right_value414=xsprintf("%s",tmp_file_242))))))))));
        come_call_finalizer3(__dec_obj86,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value414 = come_decrement_ref_count2(right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value416,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj87=info_243.source;
        info_243.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value419=string_to_buffer(((char*)(right_value418=string_read(((char*)(right_value417=xsprintf("%s.i",tmp_file_242))))))))));
        come_call_finalizer3(__dec_obj87,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value417 = come_decrement_ref_count2(right_value417, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value418 = come_decrement_ref_count2(right_value418, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value419,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        info_243.p=info_243.source->buf;
        info_243.head=info_243.source->buf;
        if(_if_conditional381=!output_cpp_file_232,        _if_conditional381) {
            transpile_v5(&info_243);
            if(_if_conditional382=!output_header_file(&info_243),            _if_conditional382) {
                printf("%s %d: output source file faield\n",info_243.sname,info_243.sline);
                exit(2);
            }
        }
        system(((char*)(right_value421=xsprintf("rm -rf \%s*",((char*)(right_value420=string_to_string(tmp_file_242)))))));
        right_value420 = come_decrement_ref_count2(right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(clang_option_227,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cpp_option_228,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(files_229,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(object_files_230,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        output_file_name_234 = come_decrement_ref_count2(output_file_name_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tmp_file_242 = come_decrement_ref_count2(tmp_file_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3((&info_243),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        come_call_finalizer3(lv_table_279,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional415=charp_operator_equals(argv[1],"new")&&argc==3,        _if_conditional415) {
            if(_if_conditional416=!new_project(argc,argv),            _if_conditional416) {
                __result163__ = (_Bool)0;
                return __result163__;
            }
        }
        else {
            if(_if_conditional417=charp_operator_equals(argv[1],"run")&&argc==2,            _if_conditional417) {
                if(_if_conditional418=!run_project(argc,argv),                _if_conditional418) {
                    __result164__ = (_Bool)0;
                    return __result164__;
                }
            }
            else {
                if(_if_conditional419=charp_operator_equals(argv[1],"header")&&argc==2,                _if_conditional419) {
                    if(_if_conditional420=!make_header_project(argc,argv),                    _if_conditional420) {
                        __result165__ = (_Bool)0;
                        return __result165__;
                    }
                }
                else {
                    if(_if_conditional421=charp_operator_equals(argv[1],"compile")&&argc==2,                    _if_conditional421) {
                        if(_if_conditional422=!compile_project(argc,argv),                        _if_conditional422) {
                            __result166__ = (_Bool)0;
                            return __result166__;
                        }
                    }
                    else {
                        if(_if_conditional423=charp_operator_equals(argv[1],"debug")&&argc==2,                        _if_conditional423) {
                            if(_if_conditional424=!debug_run_project(argc,argv),                            _if_conditional424) {
                                __result167__ = (_Bool)0;
                                return __result167__;
                            }
                        }
                        else {
                            if(_if_conditional425=charp_operator_equals(argv[1],"clean")&&argc==2,                            _if_conditional425) {
                                if(_if_conditional426=!clean_project(argc,argv),                                _if_conditional426) {
                                    __result168__ = (_Bool)0;
                                    return __result168__;
                                }
                            }
                            else {
                                if(_if_conditional427=charp_operator_equals(argv[1],"install")&&argc>=2,                                _if_conditional427) {
                                    if(_if_conditional428=argc==2,                                    _if_conditional428) {
                                        if(_if_conditional429=!install_project(argc,argv,"/usr/local"),                                        _if_conditional429) {
                                            __result169__ = (_Bool)0;
                                            return __result169__;
                                        }
                                    }
                                    else {
                                        if(_if_conditional430=argc>=3,                                        _if_conditional430) {
                                            if(_if_conditional431=!install_project(argc,argv,argv[2]),                                            _if_conditional431) {
                                                __result170__ = (_Bool)0;
                                                return __result170__;
                                            }
                                        }
                                    }
                                }
                                else {
                                    gProgramName=argv[0];
                                    clang_option_283=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value423=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value422=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 694, "buffer"))))))));
                                    come_call_finalizer3(right_value422,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value423,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    cpp_option_284=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value425=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value424=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 695, "buffer"))))))));
                                    come_call_finalizer3(right_value424,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value425,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    files_285=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value427=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value426=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 696, "list$1charph"))))))));
                                    come_call_finalizer3(right_value426,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value427,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    object_files_286=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value429=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value428=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 697, "list$1charph"))))))));
                                    come_call_finalizer3(right_value428,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value429,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    output_object_file_287=(_Bool)0;
                                    output_cpp_file_288=(_Bool)0;
                                    output_source_file_flag_289=(_Bool)0;
                                    output_file_name_290=((void*)0);
                                    verbose_291=(_Bool)0;
                                    come_debug_292=(_Bool)0;
                                    come_malloc_293=(_Bool)0;
                                    come_str_294=(_Bool)0;
                                    for(                                    i_295=1;                                    i_295<argc;                                    i_295++                                    ){
                                        if(_if_conditional432=charp_operator_equals(argv[i_295],"-o")&&i_295+1<argc,                                        _if_conditional432) {
                                            __dec_obj88=output_file_name_290;
                                            output_file_name_290=(char*)come_increment_ref_count(((char*)(right_value430=__builtin_string(argv[i_295+1]))));
                                            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value430 = come_decrement_ref_count2(right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            i_295++;
                                        }
                                        else {
                                            if(_if_conditional433=charp_operator_equals(argv[i_295],"-str"),                                            _if_conditional433) {
                                                come_str_294=(_Bool)1;
                                            }
                                            else {
                                                if(_if_conditional434=charp_operator_equals(argv[i_295],"-leak"),                                                _if_conditional434) {
                                                    come_malloc_293=(_Bool)1;
                                                }
                                                else {
                                                    if(_if_conditional435=charp_operator_equals(argv[i_295],"-gc"),                                                    _if_conditional435) {
                                                        gComeGC=(_Bool)1;
                                                    }
                                                    else {
                                                        if(_if_conditional436=charp_operator_equals(argv[i_295],"-cg"),                                                        _if_conditional436) {
                                                            come_debug_292=(_Bool)1;
                                                            buffer_append_str(clang_option_283,"-g ");
                                                        }
                                                        else {
                                                            if(_if_conditional437=charp_operator_equals(argv[i_295],"-common-header"),                                                            _if_conditional437) {
                                                                gCommonHeader=(_Bool)1;
                                                            }
                                                            else {
                                                                if(_if_conditional438=charp_operator_equals(argv[i_295],"-original-position"),                                                                _if_conditional438) {
                                                                    gComeOriginalSourcePosition=(_Bool)0;
                                                                }
                                                                else {
                                                                    if(_if_conditional439=string_operator_equals(((char*)(right_value431=charp_operator_load_range_element(argv[i_295],0,2))),"-O"),                                                                    right_value431 = come_decrement_ref_count2(right_value431, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                                    _if_conditional439) {
                                                                        buffer_append_str(clang_option_283,((char*)(right_value433=xsprintf(" \%s ",((char*)(right_value432=charp_to_string(argv[i_295])))))));
                                                                        right_value432 = come_decrement_ref_count2(right_value432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        right_value433 = come_decrement_ref_count2(right_value433, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        come_debug_292=(_Bool)0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional440=string_operator_equals(((char*)(right_value434=charp_operator_load_range_element(argv[i_295],0,2))),"-D"),                                                                        right_value434 = come_decrement_ref_count2(right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                                                        _if_conditional440) {
                                                                            buffer_append_str(cpp_option_284,((char*)(right_value436=xsprintf(" \%s ",((char*)(right_value435=charp_to_string(argv[i_295])))))));
                                                                            right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            right_value436 = come_decrement_ref_count2(right_value436, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            buffer_append_str(clang_option_283,((char*)(right_value438=xsprintf(" \%s ",((char*)(right_value437=charp_to_string(argv[i_295])))))));
                                                                            right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            right_value438 = come_decrement_ref_count2(right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            if(_if_conditional441=charp_operator_equals(argv[i_295],"-g"),                                                                            _if_conditional441) {
                                                                                buffer_append_str(clang_option_283,"-g ");
                                                                            }
                                                                            else {
                                                                                if(_if_conditional442=charp_operator_equals(argv[i_295],"-v"),                                                                                _if_conditional442) {
                                                                                    buffer_append_str(clang_option_283,"-v ");
                                                                                    verbose_291=(_Bool)1;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional443=strlen(argv[i_295])>=2&&memcmp(argv[i_295],"-I",strlen("-I"))==0,                                                                                    _if_conditional443) {
                                                                                        buffer_append_str(cpp_option_284,((char*)(right_value440=charp_operator_add(" ",((char*)(right_value439=charp_operator_add(argv[i_295]," ")))))));
                                                                                        right_value439 = come_decrement_ref_count2(right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        right_value440 = come_decrement_ref_count2(right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional444=charp_operator_equals(argv[i_295],"-gdwarf-4"),                                                                                        _if_conditional444) {
                                                                                            buffer_append_str(clang_option_283,"-gdwarf-4 ");
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional445=charp_operator_equals(argv[i_295],"-s")||charp_operator_equals(argv[i_295],"-S"),                                                                                            _if_conditional445) {
                                                                                                output_source_file_flag_289=(_Bool)1;
                                                                                                gComeOriginalSourcePosition=(_Bool)0;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional446=charp_operator_equals(argv[i_295],"-c"),                                                                                                _if_conditional446) {
                                                                                                    output_object_file_287=(_Bool)1;
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional447=charp_operator_equals(argv[i_295],"-E"),                                                                                                    _if_conditional447) {
                                                                                                        output_cpp_file_288=(_Bool)1;
                                                                                                    }
                                                                                                    else {
                                                                                                        if(_if_conditional448=argv[i_295][0]==45,                                                                                                        _if_conditional448) {
                                                                                                            buffer_append_str(clang_option_283,((char*)(right_value441=charp_operator_add(argv[i_295]," "))));
                                                                                                            right_value441 = come_decrement_ref_count2(right_value441, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                        }
                                                                                                        else {
                                                                                                            if(_if_conditional449=strlen(argv[i_295])>2&&memcmp(argv[i_295]+strlen(argv[i_295])-2,".o",2)==0,                                                                                                            _if_conditional449) {
                                                                                                                list$1charph_push_back(object_files_286,(char*)come_increment_ref_count(((char*)(right_value442=__builtin_string(argv[i_295])))));
                                                                                                                right_value442 = come_decrement_ref_count2(right_value442, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                            else {
                                                                                                                list$1charph_push_back(files_285,(char*)come_increment_ref_count(((char*)(right_value444=string_clone(((char*)(right_value443=__builtin_string(argv[i_295]))))))));
                                                                                                                right_value443 = come_decrement_ref_count2(right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                right_value444 = come_decrement_ref_count2(right_value444, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    gComeDebug=come_debug_292;
                                    gComeMalloc=come_malloc_293;
                                    if(come_str_294) {
                                        if(gComeGC) {
                                            buffer_append_str(clang_option_283," -lneo-c-str-gc -lpcre ");
                                        }
                                        else {
                                            buffer_append_str(clang_option_283," -lneo-c-str -lpcre ");
                                        }
                                    }
                                    for(                                    o2_saved_296=(struct list$1charph*)come_increment_ref_count((files_285)),it_297=list$1charph_begin((o2_saved_296));                                    !list$1charph_end((o2_saved_296));                                    it_297=list$1charph_next((o2_saved_296))                                    ){
                                        memset(&info_298,0,sizeof(struct sInfo));
                                        __dec_obj89=info_298.sname;
                                        info_298.sname=(char*)come_increment_ref_count(((char*)(right_value445=__builtin_string(it_297))));
                                        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value445 = come_decrement_ref_count2(right_value445, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        info_298.sline=1;
                                        info_298.err_num=0;
                                        __dec_obj90=info_298.clang_option;
                                        info_298.clang_option=(char*)come_increment_ref_count(((char*)(right_value446=buffer_to_string(clang_option_283))));
                                        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value446 = come_decrement_ref_count2(right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __dec_obj91=info_298.cpp_option;
                                        info_298.cpp_option=(char*)come_increment_ref_count(((char*)(right_value447=buffer_to_string(cpp_option_284))));
                                        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value447 = come_decrement_ref_count2(right_value447, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        info_298.no_output_err=(_Bool)0;
                                        __dec_obj92=info_298.funcs;
                                        info_298.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value449=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value448=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 795, "map$2charphsFunph"))))))));
                                        come_call_finalizer3(__dec_obj92,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value448,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value449,map$2charphsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj93=info_298.generics_funcs;
                                        info_298.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value451=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value450=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 796, "map$2charphsGenericsFunph"))))))));
                                        come_call_finalizer3(__dec_obj93,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value450,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value451,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj94=info_298.classes;
                                        info_298.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value453=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value452=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 797, "map$2charphsClassph"))))))));
                                        come_call_finalizer3(__dec_obj94,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value452,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value453,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj95=info_298.modules;
                                        info_298.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value455=map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(right_value454=(struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 798, "map$2charphsClassModuleph"))))))));
                                        come_call_finalizer3(__dec_obj95,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value454,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value455,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj96=info_298.types;
                                        info_298.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value457=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value456=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 799, "map$2charphsTypeph"))))))));
                                        come_call_finalizer3(__dec_obj96,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value456,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value457,map$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj97=info_298.module;
                                        info_298.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value459=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value458=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 800, "sModule"))))))));
                                        come_call_finalizer3(__dec_obj97,sModule_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value458,sModule_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value459,sModule_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj98=info_298.right_value_objects;
                                        info_298.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value461=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value460=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 801, "list$1sRightValueObjectph"))))))));
                                        come_call_finalizer3(__dec_obj98,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value460,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value461,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj99=info_298.stack;
                                        info_298.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value463=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value462=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 802, "list$1CVALUEph"))))))));
                                        come_call_finalizer3(__dec_obj99,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value462,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value463,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj100=info_298.gv_table;
                                        info_298.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value465=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value464=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 803, "sVarTable")))),(_Bool)1,((void*)0)))));
                                        come_call_finalizer3(__dec_obj100,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value464,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value465,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        lv_table_299=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value467=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value466=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 804, "sVarTable")))),(_Bool)0,((void*)0)))));
                                        come_call_finalizer3(right_value466,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value467,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                        info_298.lv_table=lv_table_299;
                                        __dec_obj101=info_298.generics_type_names;
                                        info_298.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value469=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value468=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 806, "list$1charph"))))))));
                                        come_call_finalizer3(__dec_obj101,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value468,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value469,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj102=info_298.method_generics_type_names;
                                        info_298.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value471=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value470=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 807, "list$1charph"))))))));
                                        come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value470,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value471,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj103=info_298.generics_classes;
                                        info_298.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value473=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value472=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 808, "map$2charphsClassph"))))))));
                                        come_call_finalizer3(__dec_obj103,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value472,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value473,map$2charphsClassphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        info_298.verbose=verbose_291;
                                        init_classes(&info_298);
                                        clear_tmp_file(&info_298);
                                        if(_if_conditional452=!cpp(&info_298),                                        _if_conditional452) {
                                            printf("%s %d: transpile failed\n",info_298.sname,info_298.sline);
                                            exit(2);
                                        }
                                        __dec_obj104=info_298.original_source;
                                        info_298.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value476=string_to_buffer(((char*)(right_value475=string_read(((char*)(right_value474=xsprintf("%s",it_297))))))))));
                                        come_call_finalizer3(__dec_obj104,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        right_value474 = come_decrement_ref_count2(right_value474, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value475 = come_decrement_ref_count2(right_value475, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value476,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj105=info_298.source;
                                        info_298.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value479=string_to_buffer(((char*)(right_value478=string_read(((char*)(right_value477=xsprintf("%s.i",it_297))))))))));
                                        come_call_finalizer3(__dec_obj105,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        right_value477 = come_decrement_ref_count2(right_value477, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value478 = come_decrement_ref_count2(right_value478, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value479,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        info_298.p=info_298.source->buf;
                                        info_298.head=info_298.source->buf;
                                        if(output_file_name_290) {
                                            __dec_obj106=info_298.output_file_name;
                                            info_298.output_file_name=(char*)come_increment_ref_count(((char*)(right_value480=__builtin_string(output_file_name_290))));
                                            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value480 = come_decrement_ref_count2(right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            __dec_obj107=info_298.output_file_name;
                                            info_298.output_file_name=((void*)0);
                                            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        if(_if_conditional454=!output_cpp_file_288,                                        _if_conditional454) {
                                            transpile_v5(&info_298);
                                            if(_if_conditional455=!output_source_file_v3(&info_298),                                            _if_conditional455) {
                                                printf("%s %d: output source file faield\n",info_298.sname,info_298.sline);
                                                exit(2);
                                            }
                                            if(_if_conditional456=info_298.err_num>0,                                            _if_conditional456) {
                                                printf("transpile error. err num %d\n",info_298.err_num);
                                                exit(2);
                                            }
                                            else {
                                                if(_if_conditional457=!compile(&info_298,output_object_file_287,object_files_286),                                                _if_conditional457) {
                                                    printf("%s %d: compile faield\n",info_298.sname,info_298.sline);
                                                    exit(27);
                                                }
                                            }
                                        }
                                        if(output_cpp_file_288) {
                                        }
                                        else {
                                            if(output_source_file_flag_289) {
                                                clear_tmp_file_without_object_file_and_ccfile(&info_298);
                                            }
                                            else {
                                                clear_tmp_file_without_object_file(&info_298);
                                            }
                                        }
                                        come_call_finalizer3((&info_298),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(lv_table_299,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer3(o2_saved_296,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    if(_if_conditional460=!output_object_file_287&&!output_cpp_file_288&&(list$1charph_length(files_285)>0||list$1charph_length(object_files_286)>0),                                    _if_conditional460) {
                                        memset(&info_300,0,sizeof(struct sInfo));
                                        __dec_obj108=info_300.sname;
                                        info_300.sname=(char*)come_increment_ref_count(((char*)(right_value481=string_clone(list$1charphp_operator_load_element(files_285,0)))));
                                        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value481 = come_decrement_ref_count2(right_value481, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __dec_obj109=info_300.clang_option;
                                        info_300.clang_option=(char*)come_increment_ref_count(((char*)(right_value482=buffer_to_string(clang_option_283))));
                                        __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value482 = come_decrement_ref_count2(right_value482, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        info_300.verbose=verbose_291;
                                        if(output_file_name_290) {
                                            __dec_obj110=info_300.output_file_name;
                                            info_300.output_file_name=(char*)come_increment_ref_count(((char*)(right_value483=__builtin_string(output_file_name_290))));
                                            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value483 = come_decrement_ref_count2(right_value483, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            __dec_obj111=info_300.output_file_name;
                                            info_300.output_file_name=((void*)0);
                                            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        __current_stack2__.info_300 = &info_300;
                                        __current_stack2__.clang_option_283 = &clang_option_283;
                                        __current_stack2__.cpp_option_284 = &cpp_option_284;
                                        __current_stack2__.files_285 = &files_285;
                                        __current_stack2__.object_files_286 = &object_files_286;
                                        __current_stack2__.output_object_file_287 = &output_object_file_287;
                                        __current_stack2__.output_cpp_file_288 = &output_cpp_file_288;
                                        __current_stack2__.output_source_file_flag_289 = &output_source_file_flag_289;
                                        __current_stack2__.output_file_name_290 = &output_file_name_290;
                                        __current_stack2__.verbose_291 = &verbose_291;
                                        __current_stack2__.come_debug_292 = &come_debug_292;
                                        __current_stack2__.come_malloc_293 = &come_malloc_293;
                                        __current_stack2__.come_str_294 = &come_str_294;
                                        __current_stack2__.argc = &argc;
                                        __current_stack2__.argv = &argv;
                                        bool_expect(linker(&info_300,object_files_286),&__current_stack2__,(void*)method_block2_02transpilec);
                                        if(_if_conditional464=!output_cpp_file_288&&!output_source_file_flag_289,                                        _if_conditional464) {
                                            clear_tmp_file(&info_300);
                                        }
                                        come_call_finalizer3((&info_300),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer3(clang_option_283,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(cpp_option_284,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(files_285,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(object_files_286,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    output_file_name_290 = come_decrement_ref_count2(output_file_name_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result173__ = 0;
    return __result173__;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__;
void* right_value363;
void* right_value364;
void* right_value365;
int i_244;
void* right_value366;
void* right_value367;
struct list$1charp* __dec_obj68;
struct map$2charphsFunph* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
memset(&i_244, 0, sizeof(int));
right_value366 = (void*)0;
right_value367 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value363=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
            right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value364=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(128)), "./neo-c.h", 1063, "sFun*%"))));
            come_call_finalizer3(right_value364,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value365=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
            right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_244=0;            i_244<128;            i_244++            ){
                self->item_existance[i_244]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj68=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value367=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value366=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj68,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value366,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value367,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result156__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result156__;
            come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional298=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional298) {
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional299=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional299) {
                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional300=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional300) {
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional301=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional301) {
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional302=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                _if_conditional302) {
                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional303=self!=((void*)0)&&self->mLambdaType!=((void*)0),                _if_conditional303) {
                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional304=self!=((void*)0)&&self->mBlock!=((void*)0),                _if_conditional304) {
                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional307=self!=((void*)0)&&self->mSource!=((void*)0),                _if_conditional307) {
                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional308=self!=((void*)0)&&self->mSourceHead!=((void*)0),                _if_conditional308) {
                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional309=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                _if_conditional309) {
                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional310=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                _if_conditional310) {
                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional311=self!=((void*)0)&&self->mComeHeader!=((void*)0),                _if_conditional311) {
                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional312=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional312) {
                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional305;
_Bool _if_conditional306;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional305=self!=((void*)0)&&self->mNodes!=((void*)0),                        _if_conditional305) {
                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional306=self!=((void*)0)&&self->mVarTable!=((void*)0),                        _if_conditional306) {
                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result155__ = __result_obj__ = self;
                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
                return __result155__;
                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_245;
_Bool _while_condtional32;
struct list_item$1charp* prev_it_246;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_245, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_246, 0, sizeof(struct list_item$1charp*));
                    it_245=self->head;
                    while(_while_condtional32=it_245!=((void*)0),                    _while_condtional32) {
                        prev_it_246=it_245;
                        it_245=it_245->next;
                        come_call_finalizer3(prev_it_246,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_247;
_Bool _if_conditional313;
_Bool _if_conditional314;
int i_248;
_Bool _if_conditional315;
_Bool _if_conditional316;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_247, 0, sizeof(int));
memset(&i_248, 0, sizeof(int));
                for(                i_247=0;                i_247<self->size;                i_247++                ){
                    if(_if_conditional313=self->item_existance[i_247],                    _if_conditional313) {
                        if(_if_conditional314=1,                        _if_conditional314) {
                            come_call_finalizer3(self->items[i_247],sFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_248=0;                i_248<self->size;                i_248++                ){
                    if(_if_conditional315=self->item_existance[i_248],                    _if_conditional315) {
                        if(_if_conditional316=1,                        _if_conditional316) {
                            self->keys[i_248] = come_decrement_ref_count2(self->keys[i_248], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_249;
_Bool _if_conditional317;
_Bool _if_conditional318;
int i_250;
_Bool _if_conditional319;
_Bool _if_conditional320;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_249, 0, sizeof(int));
memset(&i_250, 0, sizeof(int));
            for(            i_249=0;            i_249<self->size;            i_249++            ){
                if(_if_conditional317=self->item_existance[i_249],                _if_conditional317) {
                    if(_if_conditional318=1,                    _if_conditional318) {
                        come_call_finalizer3(self->items[i_249],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_250=0;            i_250<self->size;            i_250++            ){
                if(_if_conditional319=self->item_existance[i_250],                _if_conditional319) {
                    if(_if_conditional320=1,                    _if_conditional320) {
                        self->keys[i_250] = come_decrement_ref_count2(self->keys[i_250], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
void* right_value370;
void* right_value371;
void* right_value372;
int i_251;
void* right_value373;
void* right_value374;
struct list$1charp* __dec_obj70;
struct map$2charphsGenericsFunph* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
memset(&i_251, 0, sizeof(int));
right_value373 = (void*)0;
right_value374 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value370=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
            right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value371=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(128)), "./neo-c.h", 1063, "sGenericsFun*%"))));
            come_call_finalizer3(right_value371,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value372=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
            right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_251=0;            i_251<128;            i_251++            ){
                self->item_existance[i_251]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj70=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value374=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value373=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj70,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value373,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value374,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result157__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result157__;
            come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool _if_conditional330;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional321=self!=((void*)0)&&self->mImplType!=((void*)0),                _if_conditional321) {
                    come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional322=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                _if_conditional322) {
                    come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional323=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                _if_conditional323) {
                    come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional324=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional324) {
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional325=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional325) {
                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional326=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional326) {
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional327=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional327) {
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional328=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                _if_conditional328) {
                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional329=self!=((void*)0)&&self->mBlock!=((void*)0),                _if_conditional329) {
                    self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional330=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                _if_conditional330) {
                    self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int i_252;
_Bool _if_conditional331;
_Bool _if_conditional332;
int i_253;
_Bool _if_conditional333;
_Bool _if_conditional334;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_252, 0, sizeof(int));
memset(&i_253, 0, sizeof(int));
                for(                i_252=0;                i_252<self->size;                i_252++                ){
                    if(_if_conditional331=self->item_existance[i_252],                    _if_conditional331) {
                        if(_if_conditional332=1,                        _if_conditional332) {
                            come_call_finalizer3(self->items[i_252],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_253=0;                i_253<self->size;                i_253++                ){
                    if(_if_conditional333=self->item_existance[i_253],                    _if_conditional333) {
                        if(_if_conditional334=1,                        _if_conditional334) {
                            self->keys[i_253] = come_decrement_ref_count2(self->keys[i_253], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int i_254;
_Bool _if_conditional335;
_Bool _if_conditional336;
int i_255;
_Bool _if_conditional337;
_Bool _if_conditional338;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_254, 0, sizeof(int));
memset(&i_255, 0, sizeof(int));
            for(            i_254=0;            i_254<self->size;            i_254++            ){
                if(_if_conditional335=self->item_existance[i_254],                _if_conditional335) {
                    if(_if_conditional336=1,                    _if_conditional336) {
                        come_call_finalizer3(self->items[i_254],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_255=0;            i_255<self->size;            i_255++            ){
                if(_if_conditional337=self->item_existance[i_255],                _if_conditional337) {
                    if(_if_conditional338=1,                    _if_conditional338) {
                        self->keys[i_255] = come_decrement_ref_count2(self->keys[i_255], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__;
void* right_value377;
void* right_value378;
void* right_value379;
int i_256;
void* right_value380;
void* right_value381;
struct list$1charp* __dec_obj72;
struct map$2charphsClassph* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
memset(&i_256, 0, sizeof(int));
right_value380 = (void*)0;
right_value381 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value377=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
            right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value378=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(128)), "./neo-c.h", 1063, "sClass*%"))));
            come_call_finalizer3(right_value378,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value379=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
            right_value379 = come_decrement_ref_count2(right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_256=0;            i_256<128;            i_256++            ){
                self->item_existance[i_256]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj72=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value381=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value380=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj72,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value380,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value381,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result158__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result158__;
            come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
int i_257;
_Bool _if_conditional339;
_Bool _if_conditional340;
int i_258;
_Bool _if_conditional341;
_Bool _if_conditional342;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_257, 0, sizeof(int));
memset(&i_258, 0, sizeof(int));
                for(                i_257=0;                i_257<self->size;                i_257++                ){
                    if(_if_conditional339=self->item_existance[i_257],                    _if_conditional339) {
                        if(_if_conditional340=1,                        _if_conditional340) {
                            come_call_finalizer3(self->items[i_257],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_258=0;                i_258<self->size;                i_258++                ){
                    if(_if_conditional341=self->item_existance[i_258],                    _if_conditional341) {
                        if(_if_conditional342=1,                        _if_conditional342) {
                            self->keys[i_258] = come_decrement_ref_count2(self->keys[i_258], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
void* __result_obj__;
int i_259;
_Bool _if_conditional343;
_Bool _if_conditional344;
int i_260;
_Bool _if_conditional345;
_Bool _if_conditional346;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_259, 0, sizeof(int));
memset(&i_260, 0, sizeof(int));
            for(            i_259=0;            i_259<self->size;            i_259++            ){
                if(_if_conditional343=self->item_existance[i_259],                _if_conditional343) {
                    if(_if_conditional344=1,                    _if_conditional344) {
                        come_call_finalizer3(self->items[i_259],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_260=0;            i_260<self->size;            i_260++            ){
                if(_if_conditional345=self->item_existance[i_260],                _if_conditional345) {
                    if(_if_conditional346=1,                    _if_conditional346) {
                        self->keys[i_260] = come_decrement_ref_count2(self->keys[i_260], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
void* right_value384;
void* right_value385;
void* right_value386;
int i_261;
void* right_value387;
void* right_value388;
struct list$1charp* __dec_obj74;
struct map$2charphsClassModuleph* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
memset(&i_261, 0, sizeof(int));
right_value387 = (void*)0;
right_value388 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value384=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
            right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(right_value385=(struct sClassModule**)come_calloc(1, sizeof(struct sClassModule*)*(1*(128)), "./neo-c.h", 1063, "sClassModule*%"))));
            come_call_finalizer3(right_value385,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value386=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
            right_value386 = come_decrement_ref_count2(right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_261=0;            i_261<128;            i_261++            ){
                self->item_existance[i_261]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj74=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value388=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value387=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj74,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value387,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value388,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result159__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result159__;
            come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sClassModule_finalize(struct sClassModule* self){
void* __result_obj__;
_Bool _if_conditional347;
_Bool _if_conditional348;
_Bool _if_conditional349;
_Bool _if_conditional350;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional347=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional347) {
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional348=self!=((void*)0)&&self->mText!=((void*)0),                _if_conditional348) {
                    self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional349=self!=((void*)0)&&self->mParams!=((void*)0),                _if_conditional349) {
                    come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional350=self!=((void*)0)&&self->mSName!=((void*)0),                _if_conditional350) {
                    self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
int i_262;
_Bool _if_conditional351;
_Bool _if_conditional352;
int i_263;
_Bool _if_conditional353;
_Bool _if_conditional354;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_262, 0, sizeof(int));
memset(&i_263, 0, sizeof(int));
                for(                i_262=0;                i_262<self->size;                i_262++                ){
                    if(_if_conditional351=self->item_existance[i_262],                    _if_conditional351) {
                        if(_if_conditional352=1,                        _if_conditional352) {
                            come_call_finalizer3(self->items[i_262],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_263=0;                i_263<self->size;                i_263++                ){
                    if(_if_conditional353=self->item_existance[i_263],                    _if_conditional353) {
                        if(_if_conditional354=1,                        _if_conditional354) {
                            self->keys[i_263] = come_decrement_ref_count2(self->keys[i_263], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
int i_264;
_Bool _if_conditional355;
_Bool _if_conditional356;
int i_265;
_Bool _if_conditional357;
_Bool _if_conditional358;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_264, 0, sizeof(int));
memset(&i_265, 0, sizeof(int));
            for(            i_264=0;            i_264<self->size;            i_264++            ){
                if(_if_conditional355=self->item_existance[i_264],                _if_conditional355) {
                    if(_if_conditional356=1,                    _if_conditional356) {
                        come_call_finalizer3(self->items[i_264],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_265=0;            i_265<self->size;            i_265++            ){
                if(_if_conditional357=self->item_existance[i_265],                _if_conditional357) {
                    if(_if_conditional358=1,                    _if_conditional358) {
                        self->keys[i_265] = come_decrement_ref_count2(self->keys[i_265], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__;
void* right_value391;
void* right_value392;
void* right_value393;
int i_266;
void* right_value394;
void* right_value395;
struct list$1charp* __dec_obj76;
struct map$2charphsTypeph* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
memset(&i_266, 0, sizeof(int));
right_value394 = (void*)0;
right_value395 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value391=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
            right_value391 = come_decrement_ref_count2(right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct sType**)come_increment_ref_count(((struct sType**)(right_value392=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(128)), "./neo-c.h", 1063, "sType*%"))));
            come_call_finalizer3(right_value392,sType_finalize, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value393=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
            right_value393 = come_decrement_ref_count2(right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_266=0;            i_266<128;            i_266++            ){
                self->item_existance[i_266]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj76=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value395=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value394=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj76,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value394,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value395,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result160__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result160__;
            come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
int i_267;
_Bool _if_conditional359;
_Bool _if_conditional360;
int i_268;
_Bool _if_conditional361;
_Bool _if_conditional362;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_267, 0, sizeof(int));
memset(&i_268, 0, sizeof(int));
                for(                i_267=0;                i_267<self->size;                i_267++                ){
                    if(_if_conditional359=self->item_existance[i_267],                    _if_conditional359) {
                        if(_if_conditional360=1,                        _if_conditional360) {
                            come_call_finalizer3(self->items[i_267],sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_268=0;                i_268<self->size;                i_268++                ){
                    if(_if_conditional361=self->item_existance[i_268],                    _if_conditional361) {
                        if(_if_conditional362=1,                        _if_conditional362) {
                            self->keys[i_268] = come_decrement_ref_count2(self->keys[i_268], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
void* __result_obj__;
int i_269;
_Bool _if_conditional363;
_Bool _if_conditional364;
int i_270;
_Bool _if_conditional365;
_Bool _if_conditional366;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_269, 0, sizeof(int));
memset(&i_270, 0, sizeof(int));
            for(            i_269=0;            i_269<self->size;            i_269++            ){
                if(_if_conditional363=self->item_existance[i_269],                _if_conditional363) {
                    if(_if_conditional364=1,                    _if_conditional364) {
                        come_call_finalizer3(self->items[i_269],sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_270=0;            i_270<self->size;            i_270++            ){
                if(_if_conditional365=self->item_existance[i_270],                _if_conditional365) {
                    if(_if_conditional366=1,                    _if_conditional366) {
                        self->keys[i_270] = come_decrement_ref_count2(self->keys[i_270], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
void* __result_obj__;
_Bool _if_conditional367;
_Bool _if_conditional368;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
_Bool _if_conditional372;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional367=self!=((void*)0)&&self->mSourceHead!=((void*)0),            _if_conditional367) {
                come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional368=self!=((void*)0)&&self->mSource!=((void*)0),            _if_conditional368) {
                come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional369=self!=((void*)0)&&self->mLastCode!=((void*)0),            _if_conditional369) {
                self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional370=self!=((void*)0)&&self->mLastCode2!=((void*)0),            _if_conditional370) {
                self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional371=self!=((void*)0)&&self->mLastCode3!=((void*)0),            _if_conditional371) {
                self->mLastCode3 = come_decrement_ref_count2(self->mLastCode3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional372=self!=((void*)0)&&self->mHeader!=((void*)0),            _if_conditional372) {
                come_call_finalizer3(self->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result161__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result161__;
            come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_271;
_Bool _while_condtional33;
struct list_item$1sRightValueObjectph* prev_it_272;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_271, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_272, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_271=self->head;
                while(_while_condtional33=it_271!=((void*)0),                _while_condtional33) {
                    prev_it_272=it_271;
                    it_271=it_271->next;
                    come_call_finalizer3(prev_it_272,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional373;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional373=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional373) {
                            come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool _if_conditional376;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional374=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional374) {
                                    come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional375=self!=((void*)0)&&self->mVarName!=((void*)0),                                _if_conditional375) {
                                    self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional376=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional376) {
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_273;
_Bool _while_condtional34;
struct list_item$1sRightValueObjectph* prev_it_274;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_273, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_274, 0, sizeof(struct list_item$1sRightValueObjectph*));
            it_273=self->head;
            while(_while_condtional34=it_273!=((void*)0),            _while_condtional34) {
                prev_it_274=it_273;
                it_273=it_273->next;
                come_call_finalizer3(prev_it_274,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result162__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result162__;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_275;
_Bool _while_condtional35;
struct list_item$1CVALUEph* prev_it_276;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_275, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_276, 0, sizeof(struct list_item$1CVALUEph*));
                it_275=self->head;
                while(_while_condtional35=it_275!=((void*)0),                _while_condtional35) {
                    prev_it_276=it_275;
                    it_275=it_275->next;
                    come_call_finalizer3(prev_it_276,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional377;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional377=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional377) {
                            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional378;
_Bool _if_conditional379;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional378=self!=((void*)0)&&self->c_value!=((void*)0),                                _if_conditional378) {
                                    self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional379=self!=((void*)0)&&self->type!=((void*)0),                                _if_conditional379) {
                                    come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_277;
_Bool _while_condtional36;
struct list_item$1CVALUEph* prev_it_278;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_277, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_278, 0, sizeof(struct list_item$1CVALUEph*));
            it_277=self->head;
            while(_while_condtional36=it_277!=((void*)0),            _while_condtional36) {
                prev_it_278=it_277;
                it_277=it_277->next;
                come_call_finalizer3(prev_it_278,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void sInfo_finalize(struct sInfo* self){
void* __result_obj__;
_Bool _if_conditional383;
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
_Bool _if_conditional391;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
_Bool _if_conditional409;
_Bool _if_conditional410;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional383=self!=((void*)0)&&self->original_source!=((void*)0),            _if_conditional383) {
                come_call_finalizer3(self->original_source,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional384=self!=((void*)0)&&self->source!=((void*)0),            _if_conditional384) {
                come_call_finalizer3(self->source,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional385=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional385) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional386=self!=((void*)0)&&self->base_sname!=((void*)0),            _if_conditional386) {
                self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional387=self!=((void*)0)&&self->err_line!=((void*)0),            _if_conditional387) {
                self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional388=self!=((void*)0)&&self->clang_option!=((void*)0),            _if_conditional388) {
                self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional389=self!=((void*)0)&&self->cpp_option!=((void*)0),            _if_conditional389) {
                self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional390=self!=((void*)0)&&self->come_fun_name!=((void*)0),            _if_conditional390) {
                self->come_fun_name = come_decrement_ref_count2(self->come_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional391=self!=((void*)0)&&self->funcs!=((void*)0),            _if_conditional391) {
                come_call_finalizer3(self->funcs,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional392=self!=((void*)0)&&self->generics_funcs!=((void*)0),            _if_conditional392) {
                come_call_finalizer3(self->generics_funcs,map$2charphsGenericsFunphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional393=self!=((void*)0)&&self->classes!=((void*)0),            _if_conditional393) {
                come_call_finalizer3(self->classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional394=self!=((void*)0)&&self->modules!=((void*)0),            _if_conditional394) {
                come_call_finalizer3(self->modules,map$2charphsClassModulephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional395=self!=((void*)0)&&self->types!=((void*)0),            _if_conditional395) {
                come_call_finalizer3(self->types,map$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional396=self!=((void*)0)&&self->generics_classes!=((void*)0),            _if_conditional396) {
                come_call_finalizer3(self->generics_classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional397=self!=((void*)0)&&self->module!=((void*)0),            _if_conditional397) {
                come_call_finalizer3(self->module,sModule_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional398=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional398) {
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional399=self!=((void*)0)&&self->right_value_objects!=((void*)0),            _if_conditional399) {
                come_call_finalizer3(self->right_value_objects,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional400=self!=((void*)0)&&self->generics_type!=((void*)0),            _if_conditional400) {
                come_call_finalizer3(self->generics_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional401=self!=((void*)0)&&self->method_generics_types!=((void*)0),            _if_conditional401) {
                come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional402=self!=((void*)0)&&self->stack!=((void*)0),            _if_conditional402) {
                come_call_finalizer3(self->stack,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional403=self!=((void*)0)&&self->come_function_result_type!=((void*)0),            _if_conditional403) {
                come_call_finalizer3(self->come_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional404=self!=((void*)0)&&self->gv_table!=((void*)0),            _if_conditional404) {
                come_call_finalizer3(self->gv_table,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional405=self!=((void*)0)&&self->generics_type_names!=((void*)0),            _if_conditional405) {
                come_call_finalizer3(self->generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional406=self!=((void*)0)&&self->method_generics_type_names!=((void*)0),            _if_conditional406) {
                come_call_finalizer3(self->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional407=self!=((void*)0)&&self->impl_type!=((void*)0),            _if_conditional407) {
                come_call_finalizer3(self->impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional408=self!=((void*)0)&&self->output_file_name!=((void*)0),            _if_conditional408) {
                self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional409=self!=((void*)0)&&self->function_result_type!=((void*)0),            _if_conditional409) {
                come_call_finalizer3(self->function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional410=self!=((void*)0)&&self->module_params!=((void*)0),            _if_conditional410) {
                come_call_finalizer3(self->module_params,map$2charphcharphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
void* __result_obj__;
int i_281;
_Bool _if_conditional411;
_Bool _if_conditional412;
int i_282;
_Bool _if_conditional413;
_Bool _if_conditional414;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_281, 0, sizeof(int));
memset(&i_282, 0, sizeof(int));
                    for(                    i_281=0;                    i_281<self->size;                    i_281++                    ){
                        if(_if_conditional411=self->item_existance[i_281],                        _if_conditional411) {
                            if(_if_conditional412=1,                            _if_conditional412) {
                                self->items[i_281] = come_decrement_ref_count2(self->items[i_281], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_free((char*)self->items);
                    for(                    i_282=0;                    i_282<self->size;                    i_282++                    ){
                        if(_if_conditional413=self->item_existance[i_282],                        _if_conditional413) {
                            if(_if_conditional414=1,                            _if_conditional414) {
                                self->keys[i_282] = come_decrement_ref_count2(self->keys[i_282], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_free((char*)self->keys);
                    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional461;
struct list_item$1charph* it_301;
int i_302;
_Bool _while_condtional37;
_Bool _if_conditional462;
char* __result171__;
char* default_value_303;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_301, 0, sizeof(struct list_item$1charph*));
memset(&i_302, 0, sizeof(int));
memset(&default_value_303, 0, sizeof(char*));
                                            if(_if_conditional461=position<0,                                            _if_conditional461) {
                                                position+=self->len;
                                            }
                                            it_301=self->head;
                                            i_302=0;
                                            while(_while_condtional37=it_301!=((void*)0),                                            _while_condtional37) {
                                                if(_if_conditional462=position==i_302,                                                _if_conditional462) {
                                                    __result171__ = __result_obj__ = it_301->item;
                                                    return __result171__;
                                                }
                                                it_301=it_301->next;
                                                i_302++;
                                            }
                                            memset(&default_value_303,0,sizeof(char*));
                                            __result172__ = __result_obj__ = default_value_303;
                                            default_value_303 = come_decrement_ref_count2(default_value_303, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                            return __result172__;
                                            default_value_303 = come_decrement_ref_count2(default_value_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void method_block2_02transpilec(struct __current_stack2__* parent){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
                                            printf("%s %d: linker faield\n",(*(parent->info_300)).sname,(*(parent->info_300)).sline);
                                            exit(13);
}

