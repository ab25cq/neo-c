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

int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);

int come_main_v1(int argc, char** argv);

_Bool node_compile(struct sNode* node, struct sInfo* info);

int come_main_v2(int argc, char** argv);

void err_msg(struct sInfo* info, char* msg, ...);

int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

struct sModule* sModule_initialize(struct sModule* self);

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);

void sVarTable_finalize(struct sVarTable* self);

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

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

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
void show_type(struct sType* type, struct sInfo* info);

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
struct sType* get_no_solved_type(struct sType* type);

static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
char* make_come_type_name_string_no_solved(struct sType* type, struct sInfo* info);

char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

char* output_function(struct sFun* fun, struct sInfo* info);

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
char* header_function(struct sFun* fun, struct sInfo* info);

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);

void add_come_code(struct sInfo* info, const char* msg, ...);

static void va_list_finalize(va_list self);
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...);

int transpile_v3(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunph_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunph_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self);
static char* map$2charphsFunph_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
_Bool output_source_file_v3(struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void list$1charpp_finalize(struct list$1charp* self);
_Bool output_header_file(struct sInfo* info);

void add_come_code_at_function_head(struct sInfo* info, char* code, ...);

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);

void add_last_code_to_source(struct sInfo* info);

void add_last_code_to_source_with_comma(struct sInfo* info);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code2(struct sInfo* info, const char* msg, ...);

void add_come_last_code3(struct sInfo* info, const char* msg, ...);

void dec_stack_ptr(int value, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail);
static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
void transpiler_clear_last_code(struct sInfo* info);

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










char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info){
void* __result_obj__;
void* right_value79;
void* right_value80;
struct buffer* buf_47;
char* class_name_48;
_Bool _if_conditional19;
_Bool _if_conditional20;
void* right_value81;
char* __result58__;
void* right_value82;
struct CVALUE* come_value_49;
void* right_value83;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
void* right_value84;
char* result_type_str_56;
int j_57;
struct list$1sTypeph* o2_saved_58;
struct sType* it_61;
void* right_value85;
char* param_type_str_64;
_Bool _if_conditional67;
_Bool _if_conditional68;
void* right_value86;
char* __result68__;
_Bool _if_conditional69;
int i_65;
_Bool _if_conditional71;
_Bool _if_conditional72;
void* right_value87;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&buf_47, 0, sizeof(struct buffer*));
memset(&class_name_48, 0, sizeof(char*));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&come_value_49, 0, sizeof(struct CVALUE*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_type_str_56, 0, sizeof(char*));
memset(&j_57, 0, sizeof(int));
memset(&o2_saved_58, 0, sizeof(struct list$1sTypeph*));
memset(&it_61, 0, sizeof(struct sType*));
right_value85 = (void*)0;
memset(&param_type_str_64, 0, sizeof(char*));
right_value86 = (void*)0;
memset(&i_65, 0, sizeof(int));
right_value87 = (void*)0;
    buf_47=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value80=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value79=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 5, "buffer"))))))));
    come_call_finalizer3(right_value79,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value80,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    class_name_48=type->mClass->mName;
    if(type->mAlignas) {
        if(_if_conditional20=!node_compile(type->mAlignas,info),        _if_conditional20) {
            printf("_Alignas error\n");
            __result58__ = __result_obj__ = ((char*)(right_value81=__builtin_string("")));
            come_call_finalizer3(buf_47,buffer_finalize, 0, 0, 0, 0, (void*)0);
            right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result58__;
        }
        come_value_49=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value82=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value82,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        buffer_append_str(buf_47,((char*)(right_value83=xsprintf("_Alignas(%s) ",come_value_49->c_value))));
        right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(come_value_49,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional40=type->mStatic&&!type->mClass->mStruct&&!type->mClass->mUnion,    _if_conditional40) {
        buffer_append_str(buf_47,"static ");
    }
    if(type->mConstant) {
        buffer_append_str(buf_47,"const ");
    }
    if(type->mUnsigned) {
        buffer_append_str(buf_47,"unsigned ");
    }
    if(type->mShort) {
        buffer_append_str(buf_47,"short ");
    }
    if(_if_conditional44=string_operator_equals(type->mOriginalTypeName,"va_list"),    _if_conditional44) {
        buffer_append_str(buf_47,"va_list");
    }
    else {
        if(_if_conditional45=string_operator_equals(type->mOriginalTypeName,"__builtin_va_list"),        _if_conditional45) {
            buffer_append_str(buf_47,"__builtin_va_list");
        }
        else {
            if(_if_conditional46=charp_operator_equals(class_name_48,"__builtin_va_list"),            _if_conditional46) {
                if(in_header) {
                    buffer_append_str(buf_47,class_name_48);
                }
                else {
                    buffer_append_str(buf_47,"va_list");
                }
            }
            else {
                if(type->mClass->mStruct) {
                    buffer_append_str(buf_47,"struct ");
                    buffer_append_str(buf_47,class_name_48);
                }
                else {
                    if(type->mClass->mUnion) {
                        buffer_append_str(buf_47,"union ");
                        buffer_append_str(buf_47,class_name_48);
                    }
                    else {
                        if(type->mClass->mEnum) {
                            buffer_append_str(buf_47,"enum ");
                            buffer_append_str(buf_47,class_name_48);
                        }
                        else {
                            if(type->mLongLong) {
                                if(_if_conditional52=charp_operator_equals(class_name_48,"int"),                                _if_conditional52) {
                                    buffer_append_str(buf_47,"long long int");
                                }
                                else {
                                    if(_if_conditional53=charp_operator_equals(class_name_48,"long"),                                    _if_conditional53) {
                                        buffer_append_str(buf_47,"long long");
                                    }
                                }
                            }
                            else {
                                if(type->mLong) {
                                    if(_if_conditional55=charp_operator_equals(class_name_48,"int"),                                    _if_conditional55) {
                                        buffer_append_str(buf_47,"long int");
                                    }
                                    else {
                                        if(_if_conditional56=charp_operator_equals(class_name_48,"long"),                                        _if_conditional56) {
                                            buffer_append_str(buf_47,"long long");
                                        }
                                        else {
                                            if(_if_conditional57=charp_operator_equals(class_name_48,"double"),                                            _if_conditional57) {
                                                buffer_append_str(buf_47,"long double");
                                            }
                                        }
                                    }
                                }
                                else {
                                    if(_if_conditional58=charp_operator_equals(class_name_48,"long"),                                    _if_conditional58) {
                                        buffer_append_str(buf_47,"long");
                                    }
                                    else {
                                        if(_if_conditional59=charp_operator_equals(class_name_48,"__uint128_t"),                                        _if_conditional59) {
                                            buffer_append_str(buf_47,"__uint128_t");
                                        }
                                        else {
                                            if(_if_conditional60=charp_operator_equals(class_name_48,"bool"),                                            _if_conditional60) {
                                                buffer_append_str(buf_47,"_Bool");
                                            }
                                            else {
                                                if(_if_conditional61=charp_operator_equals(class_name_48,"lambda"),                                                _if_conditional61) {
                                                    result_type_str_56=(char*)come_increment_ref_count(((char*)(right_value84=make_type_name_string(type->mResultType->v1,in_header,(_Bool)0,(_Bool)0,info))));
                                                    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    buffer_append_str(buf_47,result_type_str_56);
                                                    buffer_append_str(buf_47," (*)(");
                                                    j_57=0;
                                                    for(                                                    o2_saved_58=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_61=list$1sTypeph_begin((o2_saved_58));                                                    !list$1sTypeph_end((o2_saved_58));                                                    it_61=list$1sTypeph_next((o2_saved_58))                                                    ){
                                                        param_type_str_64=(char*)come_increment_ref_count(((char*)(right_value85=make_type_name_string(it_61,in_header,(_Bool)0,(_Bool)0,info))));
                                                        right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        buffer_append_str(buf_47,param_type_str_64);
                                                        if(_if_conditional67=j_57!=list$1sTypeph_length(type->mParamTypes)-1,                                                        _if_conditional67) {
                                                            buffer_append_str(buf_47,",");
                                                        }
                                                        j_57++;
                                                        param_type_str_64 = come_decrement_ref_count2(param_type_str_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    come_call_finalizer3(o2_saved_58,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    buffer_append_str(buf_47,")");
                                                    result_type_str_56 = come_decrement_ref_count2(result_type_str_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                else {
                                                    if(_if_conditional68=class_name_48==((void*)0),                                                    _if_conditional68) {
                                                        err_msg(info,"class name is null");
                                                        __result68__ = __result_obj__ = ((char*)(right_value86=__builtin_string("")));
                                                        come_call_finalizer3(buf_47,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        return __result68__;
                                                    }
                                                    buffer_append_str(buf_47,class_name_48);
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
    if(_if_conditional69=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_48,"lambda")&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional69) {
        for(        i_65=0;        i_65<type->mPointerNum;        i_65++        ){
            buffer_append_str(buf_47,"*");
        }
    }
    if(_if_conditional71=array_cast_pointer&&list$1sNodeph_length(type->mArrayNum)>0&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional71) {
        buffer_append_str(buf_47,"*");
    }
    if(type->mRestrict) {
        buffer_append_str(buf_47,"restrict");
    }
    __result71__ = __result_obj__ = ((char*)(right_value87=buffer_to_string(buf_47)));
    come_call_finalizer3(buf_47,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result71__;
    come_call_finalizer3(buf_47,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional21;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional21=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional21) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional22=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional22) {
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional23;
_Bool _if_conditional25;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional23=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                    _if_conditional23) {
                        come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional25=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional25) {
                        come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional27=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional27) {
                        come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional28=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional28) {
                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional29=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional29) {
                        come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional30=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional30) {
                        come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional32=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional32) {
                        come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional33=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional33) {
                        come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional35=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional35) {
                        come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional36=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional36) {
                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional37=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional37) {
                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional38=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional38) {
                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional39=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional39) {
                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_50;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_50, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_51, 0, sizeof(struct list_item$1sTypeph*));
                            it_50=self->head;
                            while(_while_condtional7=it_50!=((void*)0),                            _while_condtional7) {
                                prev_it_51=it_50;
                                it_50=it_50->next;
                                come_call_finalizer3(prev_it_51,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional24=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional24) {
                                        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional26) {
                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_52;
_Bool _while_condtional8;
struct list_item$1sNodeph* prev_it_53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_52, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_53, 0, sizeof(struct list_item$1sNodeph*));
                            it_52=self->head;
                            while(_while_condtional8=it_52!=((void*)0),                            _while_condtional8) {
                                prev_it_53=it_52;
                                it_52=it_52->next;
                                come_call_finalizer3(prev_it_53,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional31) {
                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_54;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_55;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_54, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_55, 0, sizeof(struct list_item$1charph*));
                            it_54=self->head;
                            while(_while_condtional9=it_54!=((void*)0),                            _while_condtional9) {
                                prev_it_55=it_54;
                                it_54=it_54->next;
                                come_call_finalizer3(prev_it_55,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional34=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional34) {
                                        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional62;
struct sType* result_59;
struct sType* __result59__;
_Bool _if_conditional63;
struct sType* __result60__;
struct sType* result_60;
struct sType* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_59, 0, sizeof(struct sType*));
memset(&result_60, 0, sizeof(struct sType*));
                                                        if(_if_conditional62=self==((void*)0),                                                        _if_conditional62) {
                                                            memset(&result_59,0,sizeof(struct sType*));
                                                            __result59__ = __result_obj__ = result_59;
                                                            return __result59__;
                                                        }
                                                        self->it=self->head;
                                                        if(self->it) {
                                                            __result60__ = __result_obj__ = self->it->item;
                                                            return __result60__;
                                                        }
                                                        memset(&result_60,0,sizeof(struct sType*));
                                                        __result61__ = __result_obj__ = result_60;
                                                        return __result61__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
                                                        __result62__ = self==((void*)0)||self->it==((void*)0);
                                                        return __result62__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional64;
struct sType* result_62;
struct sType* __result63__;
_Bool _if_conditional65;
struct sType* __result64__;
struct sType* result_63;
struct sType* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_62, 0, sizeof(struct sType*));
memset(&result_63, 0, sizeof(struct sType*));
                                                        if(_if_conditional64=self==((void*)0)||self->it==((void*)0),                                                        _if_conditional64) {
                                                            memset(&result_62,0,sizeof(struct sType*));
                                                            __result63__ = __result_obj__ = result_62;
                                                            return __result63__;
                                                        }
                                                        self->it=self->it->next;
                                                        if(self->it) {
                                                            __result64__ = __result_obj__ = self->it->item;
                                                            return __result64__;
                                                        }
                                                        memset(&result_63,0,sizeof(struct sType*));
                                                        __result65__ = __result_obj__ = result_63;
                                                        return __result65__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional66;
int __result66__;
int __result67__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional66=self==((void*)0),                                                            _if_conditional66) {
                                                                __result66__ = 0;
                                                                return __result66__;
                                                            }
                                                            __result67__ = self->len;
                                                            return __result67__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional70;
int __result69__;
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional70=self==((void*)0),        _if_conditional70) {
            __result69__ = 0;
            return __result69__;
        }
        __result70__ = self->len;
        return __result70__;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value88;
void* right_value89;
struct buffer* buf_66;
char* class_name_67;
_Bool _if_conditional73;
int i_68;
struct sType* gtype_72;
void* right_value90;
_Bool _if_conditional76;
_Bool _if_conditional77;
int i_73;
_Bool _if_conditional78;
int i_74;
_Bool _if_conditional79;
void* right_value91;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&buf_66, 0, sizeof(struct buffer*));
memset(&class_name_67, 0, sizeof(char*));
memset(&i_68, 0, sizeof(int));
memset(&gtype_72, 0, sizeof(struct sType*));
right_value90 = (void*)0;
memset(&i_73, 0, sizeof(int));
memset(&i_74, 0, sizeof(int));
right_value91 = (void*)0;
    buf_66=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value89=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value88=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 137, "buffer"))))))));
    come_call_finalizer3(right_value88,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value89,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    class_name_67=type->mClass->mName;
    buffer_append_str(buf_66,class_name_67);
    if(_if_conditional73=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional73) {
        buffer_append_str(buf_66,"<");
        for(        i_68=0;        i_68<list$1sTypeph_length(type->mGenericsTypes);        i_68++        ){
            gtype_72=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_68), "03output_code.c", 146, 0));
            buffer_append_str(buf_66,((char*)(right_value90=make_come_type_name_string(gtype_72,info))));
            right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional76=i_68!=list$1sTypeph_length(type->mGenericsTypes)-1,            _if_conditional76) {
                buffer_append_str(buf_66,",");
            }
        }
        buffer_append_str(buf_66,">");
    }
    if(_if_conditional77=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_67,"lambda"),    _if_conditional77) {
        for(        i_73=0;        i_73<type->mPointerNum;        i_73++        ){
            buffer_append_str(buf_66,"*");
        }
    }
    if(_if_conditional78=list$1sNodeph_length(type->mArrayNum)>0,    _if_conditional78) {
        for(        i_74=0;        i_74<list$1sNodeph_length(type->mArrayNum);        i_74++        ){
            buffer_append_str(buf_66,"[]");
        }
    }
    if(type->mHeap) {
        buffer_append_str(buf_66,"%");
    }
    __result74__ = __result_obj__ = ((char*)(right_value91=buffer_to_string(buf_66)));
    come_call_finalizer3(buf_66,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result74__;
    come_call_finalizer3(buf_66,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional74;
struct list_item$1sTypeph* it_69;
int i_70;
_Bool _while_condtional10;
_Bool _if_conditional75;
struct sType* __result72__;
struct sType* default_value_71;
struct sType* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_69, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_70, 0, sizeof(int));
memset(&default_value_71, 0, sizeof(struct sType*));
                if(_if_conditional74=position<0,                _if_conditional74) {
                    position+=self->len;
                }
                it_69=self->head;
                i_70=0;
                while(_while_condtional10=it_69!=((void*)0),                _while_condtional10) {
                    if(_if_conditional75=position==i_70,                    _if_conditional75) {
                        __result72__ = __result_obj__ = it_69->item;
                        return __result72__;
                    }
                    it_69=it_69->next;
                    i_70++;
                }
                memset(&default_value_71,0,sizeof(struct sType*));
                __result73__ = __result_obj__ = default_value_71;
                come_call_finalizer3(default_value_71,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result73__;
                come_call_finalizer3(default_value_71,sType_finalize, 0, 0, 0, 0, (void*)0);
}

void show_type(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value92;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
    puts(((char*)(right_value92=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
}

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __result_obj__;
void* right_value93;
void* right_value94;
struct buffer* buf_75;
_Bool _if_conditional80;
void* right_value95;
char* __result75__;
_Bool _if_conditional81;
void* right_value96;
int i_76;
struct list$1sTypeph* o2_saved_77;
struct sType* it_78;
void* right_value97;
_Bool _if_conditional82;
void* right_value98;
void* right_value99;
char* __result76__;
void* right_value100;
void* right_value101;
int i_79;
struct list$1sTypeph* o2_saved_80;
struct sType* it_81;
void* right_value102;
_Bool _if_conditional83;
void* right_value103;
char* __result77__;
void* right_value104;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&buf_75, 0, sizeof(struct buffer*));
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&i_76, 0, sizeof(int));
memset(&o2_saved_77, 0, sizeof(struct list$1sTypeph*));
memset(&it_78, 0, sizeof(struct sType*));
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
memset(&i_79, 0, sizeof(int));
memset(&o2_saved_80, 0, sizeof(struct list$1sTypeph*));
memset(&it_81, 0, sizeof(struct sType*));
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
    buf_75=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value94=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value93=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 184, "buffer"))))))));
    come_call_finalizer3(right_value93,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value94,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional80=type->mResultType==((void*)0),    _if_conditional80) {
        err_msg(info,"invalid lambda type");
        __result75__ = __result_obj__ = ((char*)(right_value95=__builtin_string("")));
        come_call_finalizer3(buf_75,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result75__;
    }
    if(_if_conditional81=type->mResultType->v1&&string_operator_equals(type->mResultType->v1->mClass->mName,"lambda"),    _if_conditional81) {
        buffer_append_str(buf_75,((char*)(right_value96=xsprintf("(*%s)(",var_name))));
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        i_76=0;
        for(        o2_saved_77=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_78=list$1sTypeph_begin((o2_saved_77));        !list$1sTypeph_end((o2_saved_77));        it_78=list$1sTypeph_next((o2_saved_77))        ){
            buffer_append_str(buf_75,((char*)(right_value97=make_type_name_string(it_78,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional82=i_76!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional82) {
                buffer_append_str(buf_75,",");
            }
            i_76++;
        }
        come_call_finalizer3(o2_saved_77,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_75,")");
        __result76__ = __result_obj__ = ((char*)(right_value99=make_lambda_type_name_string(type->mResultType->v1,((char*)(right_value98=buffer_to_string(buf_75))),info)));
        come_call_finalizer3(buf_75,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result76__;
    }
    else {
        buffer_append_str(buf_75,((char*)(right_value101=xsprintf("%s (*%s)(",((char*)(right_value100=make_type_name_string(type->mResultType->v1,(_Bool)0,(_Bool)0,(_Bool)0,info))),var_name))));
        right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        i_79=0;
        for(        o2_saved_80=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_81=list$1sTypeph_begin((o2_saved_80));        !list$1sTypeph_end((o2_saved_80));        it_81=list$1sTypeph_next((o2_saved_80))        ){
            buffer_append_str(buf_75,((char*)(right_value102=make_type_name_string(it_81,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional83=i_79!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional83) {
                buffer_append_str(buf_75,",");
            }
            i_79++;
        }
        come_call_finalizer3(o2_saved_80,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_75,")");
        __result77__ = __result_obj__ = ((char*)(right_value103=buffer_to_string(buf_75)));
        come_call_finalizer3(buf_75,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result77__;
    }
    __result78__ = __result_obj__ = ((char*)(right_value104=buffer_to_string(buf_75)));
    come_call_finalizer3(buf_75,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
    come_call_finalizer3(buf_75,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __result_obj__;
void* right_value105;
void* right_value106;
struct buffer* buf_82;
_Bool _if_conditional84;
void* right_value107;
char* str_83;
_Bool _if_conditional85;
void* right_value108;
char* str_84;
_Bool _if_conditional86;
_Bool _if_conditional87;
void* right_value109;
char* __result79__;
void* right_value110;
struct CVALUE* come_value_85;
void* right_value111;
char* type_str_86;
void* right_value112;
void* right_value113;
_Bool _if_conditional88;
void* right_value114;
_Bool _if_conditional89;
void* right_value115;
_Bool _if_conditional90;
void* right_value116;
char* type_str_87;
_Bool _if_conditional91;
void* right_value117;
_Bool _if_conditional92;
void* right_value118;
char* type_str_88;
_Bool _if_conditional93;
_Bool _if_conditional94;
struct list$1sNodeph* o2_saved_89;
struct sNode* it_92;
_Bool _if_conditional99;
void* right_value119;
char* __result87__;
void* right_value120;
struct CVALUE* cvalue_95;
void* right_value121;
_Bool _if_conditional100;
void* right_value122;
void* right_value123;
char* type_str_96;
_Bool _if_conditional101;
void* right_value124;
char* __result88__;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
void* right_value125;
void* right_value126;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
right_value106 = (void*)0;
memset(&buf_82, 0, sizeof(struct buffer*));
right_value107 = (void*)0;
memset(&str_83, 0, sizeof(char*));
right_value108 = (void*)0;
memset(&str_84, 0, sizeof(char*));
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&come_value_85, 0, sizeof(struct CVALUE*));
right_value111 = (void*)0;
memset(&type_str_86, 0, sizeof(char*));
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&type_str_87, 0, sizeof(char*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&type_str_88, 0, sizeof(char*));
memset(&o2_saved_89, 0, sizeof(struct list$1sNodeph*));
memset(&it_92, 0, sizeof(struct sNode*));
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&cvalue_95, 0, sizeof(struct CVALUE*));
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
memset(&type_str_96, 0, sizeof(char*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
    buf_82=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value106=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value105=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 233, "buffer"))))))));
    come_call_finalizer3(right_value105,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value106,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional84=string_operator_equals(type->mClass->mName,"lambda")&&type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),    _if_conditional84) {
        str_83=(char*)come_increment_ref_count(((char*)(right_value107=header_lambda(type,(char*)come_increment_ref_count(type->mAsmName),info))));
        right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_82,str_83);
        str_83 = come_decrement_ref_count2(str_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional85=string_operator_equals(type->mClass->mName,"lambda"),        _if_conditional85) {
            str_84=(char*)come_increment_ref_count(((char*)(right_value108=make_lambda_type_name_string(type,name,info))));
            right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_82,str_84);
            str_84 = come_decrement_ref_count2(str_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional86=type->mSizeNum!=((void*)0),            _if_conditional86) {
                if(_if_conditional87=!node_compile(type->mSizeNum,info),                _if_conditional87) {
                    err_msg(info,"invalid bit field number");
                    __result79__ = __result_obj__ = ((char*)(right_value109=__builtin_string("")));
                    come_call_finalizer3(buf_82,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    return __result79__;
                }
                come_value_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value110=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value110,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                type_str_86=(char*)come_increment_ref_count(((char*)(right_value111=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(buf_82,((char*)(right_value112=xsprintf("%s ",type_str_86))));
                right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(buf_82,((char*)(right_value113=xsprintf("%s:%s",name,come_value_85->c_value))));
                right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional88=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional88) {
                    buffer_append_str(buf_82,((char*)(right_value114=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional89=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional89) {
                    buffer_append_str(buf_82,((char*)(right_value115=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer3(come_value_85,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                type_str_86 = come_decrement_ref_count2(type_str_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(type->mOmitArrayNum) {
                    type_str_87=(char*)come_increment_ref_count(((char*)(right_value116=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(buf_82,type_str_87);
                    buffer_append_str(buf_82," ");
                    buffer_append_str(buf_82,name);
                    buffer_append_str(buf_82,"[]");
                    if(_if_conditional91=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                    _if_conditional91) {
                        buffer_append_str(buf_82,((char*)(right_value117=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    type_str_87 = come_decrement_ref_count2(type_str_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional92=list$1sNodeph_length(type->mArrayNum)>0,                    _if_conditional92) {
                        type_str_88=(char*)come_increment_ref_count(((char*)(right_value118=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        buffer_append_str(buf_82,type_str_88);
                        buffer_append_str(buf_82," ");
                        if(_if_conditional93=type->mNoArrayPointerNum>0,                        _if_conditional93) {
                            buffer_append_str(buf_82,"(*");
                        }
                        buffer_append_str(buf_82,name);
                        if(_if_conditional94=type->mNoArrayPointerNum>0,                        _if_conditional94) {
                            buffer_append_str(buf_82,")");
                        }
                        for(                        o2_saved_89=(struct list$1sNodeph*)come_increment_ref_count((type->mArrayNum)),it_92=list$1sNodeph_begin((o2_saved_89));                        !list$1sNodeph_end((o2_saved_89));                        it_92=list$1sNodeph_next((o2_saved_89))                        ){
                            if(_if_conditional99=!node_compile(it_92,info),                            _if_conditional99) {
                                err_msg(info,"invalid array number");
                                __result87__ = __result_obj__ = ((char*)(right_value119=__builtin_string("")));
                                come_call_finalizer3(o2_saved_89,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                type_str_88 = come_decrement_ref_count2(type_str_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_82,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                return __result87__;
                            }
                            cvalue_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value120=get_value_from_stack(-1,info))));
                            come_call_finalizer3(right_value120,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                            dec_stack_ptr(1,info);
                            buffer_append_str(buf_82,((char*)(right_value121=xsprintf("[%s]",cvalue_95->c_value))));
                            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(cvalue_95,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_89,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        if(_if_conditional100=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional100) {
                            buffer_append_str(buf_82,((char*)(right_value122=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        type_str_88 = come_decrement_ref_count2(type_str_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        type_str_96=(char*)come_increment_ref_count(((char*)(right_value123=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                        right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional101=string_operator_equals(type_str_96,""),                        _if_conditional101) {
                            __result88__ = __result_obj__ = ((char*)(right_value124=__builtin_string("")));
                            type_str_96 = come_decrement_ref_count2(type_str_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(buf_82,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            return __result88__;
                        }
                        buffer_append_str(buf_82,type_str_96);
                        buffer_append_str(buf_82," ");
                        if(_if_conditional102=type->mNoArrayPointerNum>0,                        _if_conditional102) {
                            buffer_append_str(buf_82,"(*");
                        }
                        buffer_append_str(buf_82,name);
                        if(_if_conditional103=type->mNoArrayPointerNum>0,                        _if_conditional103) {
                            buffer_append_str(buf_82,")");
                        }
                        if(_if_conditional104=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional104) {
                            buffer_append_str(buf_82,((char*)(right_value125=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        type_str_96 = come_decrement_ref_count2(type_str_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    __result89__ = __result_obj__ = ((char*)(right_value126=buffer_to_string(buf_82)));
    come_call_finalizer3(buf_82,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result89__;
    come_call_finalizer3(buf_82,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional95;
struct sNode* result_90;
struct sNode* __result80__;
_Bool _if_conditional96;
struct sNode* __result81__;
struct sNode* result_91;
struct sNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_90, 0, sizeof(struct sNode*));
memset(&result_91, 0, sizeof(struct sNode*));
                            if(_if_conditional95=self==((void*)0),                            _if_conditional95) {
                                memset(&result_90,0,sizeof(struct sNode*));
                                __result80__ = __result_obj__ = result_90;
                                return __result80__;
                            }
                            self->it=self->head;
                            if(self->it) {
                                __result81__ = __result_obj__ = self->it->item;
                                return __result81__;
                            }
                            memset(&result_91,0,sizeof(struct sNode*));
                            __result82__ = __result_obj__ = result_91;
                            return __result82__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result83__ = self==((void*)0)||self->it==((void*)0);
                            return __result83__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional97;
struct sNode* result_93;
struct sNode* __result84__;
_Bool _if_conditional98;
struct sNode* __result85__;
struct sNode* result_94;
struct sNode* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_93, 0, sizeof(struct sNode*));
memset(&result_94, 0, sizeof(struct sNode*));
                            if(_if_conditional97=self==((void*)0)||self->it==((void*)0),                            _if_conditional97) {
                                memset(&result_93,0,sizeof(struct sNode*));
                                __result84__ = __result_obj__ = result_93;
                                return __result84__;
                            }
                            self->it=self->it->next;
                            if(self->it) {
                                __result85__ = __result_obj__ = self->it->item;
                                return __result85__;
                            }
                            memset(&result_94,0,sizeof(struct sNode*));
                            __result86__ = __result_obj__ = result_94;
                            return __result86__;
}

struct sType* get_no_solved_type(struct sType* type){
void* __result_obj__;
struct sType* result_97;
_Bool _if_conditional105;
void* right_value162;
struct sType* __dec_obj35;
void* right_value163;
struct sType* __dec_obj36;
int i_122;
struct list$1sTypeph* o2_saved_123;
struct sType* it_124;
void* right_value164;
struct sType* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_97, 0, sizeof(struct sType*));
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&i_122, 0, sizeof(int));
memset(&o2_saved_123, 0, sizeof(struct list$1sTypeph*));
memset(&it_124, 0, sizeof(struct sType*));
right_value164 = (void*)0;
    if(type->mNoSolvedGenericsType->v1) {
        __dec_obj35=result_97;
        result_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(type->mNoSolvedGenericsType->v1))));
        come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value162,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj36=result_97;
        result_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=sType_clone(type))));
        come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value163,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    i_122=0;
    for(    o2_saved_123=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_124=list$1sTypeph_begin((o2_saved_123));    !list$1sTypeph_end((o2_saved_123));    it_124=list$1sTypeph_next((o2_saved_123))    ){
        list$1sTypephp_operator_store_element(result_97->mGenericsTypes,i_122,(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=get_no_solved_type(it_124)))));
        come_call_finalizer3(right_value164,sType_finalize, 0, 1, 0, 0, __result_obj__);
        i_122++;
    }
    come_call_finalizer3(o2_saved_123,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    __result112__ = __result_obj__ = result_97;
    come_call_finalizer3(result_97,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result112__;
    come_call_finalizer3(result_97,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional106;
struct sType* __result90__;
void* right_value127;
struct sType* result_98;
_Bool _if_conditional107;
_Bool _if_conditional108;
void* right_value134;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional112;
void* right_value137;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional116;
void* right_value138;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional117;
void* right_value139;
char* __dec_obj19;
_Bool _if_conditional118;
void* right_value140;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional119;
void* right_value148;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional132;
_Bool _if_conditional133;
void* right_value149;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional134;
void* right_value156;
struct list$1charph* __dec_obj29;
_Bool _if_conditional138;
void* right_value157;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional139;
_Bool _if_conditional140;
void* right_value158;
struct sNode* __dec_obj31;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
void* right_value159;
struct sNode* __dec_obj32;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
void* right_value160;
char* __dec_obj33;
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
void* right_value161;
char* __dec_obj34;
_Bool _if_conditional179;
struct sType* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
memset(&result_98, 0, sizeof(struct sType*));
right_value134 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
            if(_if_conditional106=self==(void*)0,            _if_conditional106) {
                __result90__ = __result_obj__ = (void*)0;
                return __result90__;
            }
            result_98=(struct sType*)come_increment_ref_count(((struct sType*)(right_value127=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value127,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                result_98->mClass=self->mClass;
            }
            if(_if_conditional108=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional108) {
                __dec_obj15=result_98->mMultipleTypes;
                result_98->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value134=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value134,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional112=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional112) {
                __dec_obj17=result_98->mNoSolvedGenericsType;
                result_98->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value137=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value137,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional116=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional116) {
                __dec_obj18=result_98->mOriginalLoadVarType;
                result_98->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value138=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value138,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional117=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional117) {
                __dec_obj19=result_98->mGenericsName;
                result_98->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value139=string_clone(self->mGenericsName))));
                __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional118=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional118) {
                __dec_obj20=result_98->mGenericsTypes;
                result_98->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value140=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value140,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional119=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional119) {
                __dec_obj24=result_98->mArrayNum;
                result_98->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value148=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value148,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional132=self!=((void*)0),            _if_conditional132) {
                result_98->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional133=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional133) {
                __dec_obj25=result_98->mParamTypes;
                result_98->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value149=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value149,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional134=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional134) {
                __dec_obj29=result_98->mParamNames;
                result_98->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value156=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value156,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional138=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional138) {
                __dec_obj30=result_98->mResultType;
                result_98->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value157=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value157,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional139=self!=((void*)0),            _if_conditional139) {
                result_98->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional140=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional140) {
                __dec_obj31=result_98->mAlignas;
                result_98->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value158=sNode_clone(self->mAlignas))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value158) { right_value158 = come_decrement_ref_count2(right_value158, ((struct sNode*)right_value158)->finalize, ((struct sNode*)right_value158)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional141=self!=((void*)0),            _if_conditional141) {
                result_98->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional142=self!=((void*)0),            _if_conditional142) {
                result_98->mShort=self->mShort;
            }
            if(_if_conditional143=self!=((void*)0),            _if_conditional143) {
                result_98->mLong=self->mLong;
            }
            if(_if_conditional144=self!=((void*)0),            _if_conditional144) {
                result_98->mLongLong=self->mLongLong;
            }
            if(_if_conditional145=self!=((void*)0),            _if_conditional145) {
                result_98->mConstant=self->mConstant;
            }
            if(_if_conditional146=self!=((void*)0),            _if_conditional146) {
                result_98->mRegister=self->mRegister;
            }
            if(_if_conditional147=self!=((void*)0),            _if_conditional147) {
                result_98->mVolatile=self->mVolatile;
            }
            if(_if_conditional148=self!=((void*)0),            _if_conditional148) {
                result_98->mStatic=self->mStatic;
            }
            if(_if_conditional149=self!=((void*)0),            _if_conditional149) {
                result_98->mRecord=self->mRecord;
            }
            if(_if_conditional150=self!=((void*)0),            _if_conditional150) {
                result_98->mExtern=self->mExtern;
            }
            if(_if_conditional151=self!=((void*)0),            _if_conditional151) {
                result_98->mRestrict=self->mRestrict;
            }
            if(_if_conditional152=self!=((void*)0),            _if_conditional152) {
                result_98->mImmutable=self->mImmutable;
            }
            if(_if_conditional153=self!=((void*)0),            _if_conditional153) {
                result_98->mHeap=self->mHeap;
            }
            if(_if_conditional154=self!=((void*)0),            _if_conditional154) {
                result_98->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional155=self!=((void*)0),            _if_conditional155) {
                result_98->mDelegate=self->mDelegate;
            }
            if(_if_conditional156=self!=((void*)0),            _if_conditional156) {
                result_98->mShare=self->mShare;
            }
            if(_if_conditional157=self!=((void*)0),            _if_conditional157) {
                result_98->mClone=self->mClone;
            }
            if(_if_conditional158=self!=((void*)0),            _if_conditional158) {
                result_98->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional159=self!=((void*)0),            _if_conditional159) {
                result_98->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional160=self!=((void*)0),            _if_conditional160) {
                result_98->mRefference=self->mRefference;
            }
            if(_if_conditional161=self!=((void*)0),            _if_conditional161) {
                result_98->mException=self->mException;
            }
            if(_if_conditional162=self!=((void*)0),            _if_conditional162) {
                result_98->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional163=self!=((void*)0),            _if_conditional163) {
                result_98->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional164=self!=((void*)0),            _if_conditional164) {
                result_98->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional165=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional165) {
                __dec_obj32=result_98->mSizeNum;
                result_98->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value159=sNode_clone(self->mSizeNum))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value159) { right_value159 = come_decrement_ref_count2(right_value159, ((struct sNode*)right_value159)->finalize, ((struct sNode*)right_value159)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional166=self!=((void*)0),            _if_conditional166) {
                result_98->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional167=self!=((void*)0),            _if_conditional167) {
                result_98->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional168=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional168) {
                __dec_obj33=result_98->mOriginalTypeName;
                result_98->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value160=string_clone(self->mOriginalTypeName))));
                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional169=self!=((void*)0),            _if_conditional169) {
                result_98->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional170=self!=((void*)0),            _if_conditional170) {
                result_98->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional171=self!=((void*)0),            _if_conditional171) {
                result_98->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional172=self!=((void*)0),            _if_conditional172) {
                result_98->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional173=self!=((void*)0),            _if_conditional173) {
                result_98->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional174=self!=((void*)0),            _if_conditional174) {
                result_98->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional175=self!=((void*)0),            _if_conditional175) {
                result_98->mInline=self->mInline;
            }
            if(_if_conditional176=self!=((void*)0),            _if_conditional176) {
                result_98->mNullValue=self->mNullValue;
            }
            if(_if_conditional177=self!=((void*)0),            _if_conditional177) {
                result_98->mGuardValue=self->mGuardValue;
            }
            if(_if_conditional178=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional178) {
                __dec_obj34=result_98->mAsmName;
                result_98->mAsmName=(char*)come_increment_ref_count(((char*)(right_value161=string_clone(self->mAsmName))));
                __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional179=self!=((void*)0),            _if_conditional179) {
                result_98->mArrayPointerType=self->mArrayPointerType;
            }
            __result107__ = __result_obj__ = result_98;
            come_call_finalizer3(result_98,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result107__;
            come_call_finalizer3(result_98,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional109;
struct list$1sTypeph* __result91__;
void* right_value128;
void* right_value129;
struct list$1sTypeph* result_99;
struct list_item$1sTypeph* it_100;
_Bool _while_condtional11;
void* right_value133;
struct list$1sTypeph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
right_value129 = (void*)0;
memset(&result_99, 0, sizeof(struct list$1sTypeph*));
memset(&it_100, 0, sizeof(struct list_item$1sTypeph*));
right_value133 = (void*)0;
                    if(_if_conditional109=self==((void*)0),                    _if_conditional109) {
                        __result91__ = __result_obj__ = ((void*)0);
                        return __result91__;
                    }
                    result_99=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value129=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value128=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                    come_call_finalizer3(right_value128,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value129,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_100=self->head;
                    while(_while_condtional11=it_100!=((void*)0),                    _while_condtional11) {
                        list$1sTypeph_add(result_99,(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(it_100->item)))));
                        come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        it_100=it_100->next;
                    }
                    __result94__ = __result_obj__ = result_99;
                    come_call_finalizer3(result_99,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result94__;
                    come_call_finalizer3(result_99,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result92__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result92__;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional110;
void* right_value130;
struct list_item$1sTypeph* litem_101;
struct sType* __dec_obj12;
_Bool _if_conditional111;
void* right_value131;
struct list_item$1sTypeph* litem_102;
struct sType* __dec_obj13;
void* right_value132;
struct list_item$1sTypeph* litem_103;
struct sType* __dec_obj14;
struct list$1sTypeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
memset(&litem_101, 0, sizeof(struct list_item$1sTypeph*));
right_value131 = (void*)0;
memset(&litem_102, 0, sizeof(struct list_item$1sTypeph*));
right_value132 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional110=self->len==0,                            _if_conditional110) {
                                litem_101=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value130=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value130,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_101->prev=((void*)0);
                                litem_101->next=((void*)0);
                                __dec_obj12=litem_101->item;
                                litem_101->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj12,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_101;
                                self->head=litem_101;
                            }
                            else {
                                if(_if_conditional111=self->len==1,                                _if_conditional111) {
                                    litem_102=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value131=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value131,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_102->prev=self->head;
                                    litem_102->next=((void*)0);
                                    __dec_obj13=litem_102->item;
                                    litem_102->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_102;
                                    self->head->next=litem_102;
                                }
                                else {
                                    litem_103=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value132=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value132,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_103->prev=self->tail;
                                    litem_103->next=((void*)0);
                                    __dec_obj14=litem_103->item;
                                    litem_103->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_103;
                                    self->tail=litem_103;
                                }
                            }
                            self->len++;
                            __result93__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result93__;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_104;
_Bool _while_condtional12;
struct list_item$1sTypeph* prev_it_105;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_104, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_105, 0, sizeof(struct list_item$1sTypeph*));
                    it_104=self->head;
                    while(_while_condtional12=it_104!=((void*)0),                    _while_condtional12) {
                        prev_it_105=it_104;
                        it_104=it_104->next;
                        come_call_finalizer3(prev_it_105,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional113;
struct tuple1$1sTypeph* __result95__;
void* right_value135;
struct tuple1$1sTypeph* result_106;
_Bool _if_conditional115;
void* right_value136;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
memset(&result_106, 0, sizeof(struct tuple1$1sTypeph*));
right_value136 = (void*)0;
                    if(_if_conditional113=self==(void*)0,                    _if_conditional113) {
                        __result95__ = __result_obj__ = (void*)0;
                        return __result95__;
                    }
                    result_106=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value135=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value135,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional115=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional115) {
                        __dec_obj16=result_106->v1;
                        result_106->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value136,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    __result96__ = __result_obj__ = result_106;
                    come_call_finalizer3(result_106,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result96__;
                    come_call_finalizer3(result_106,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional114;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional114=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional114) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional120;
struct list$1sNodeph* __result97__;
void* right_value141;
void* right_value142;
struct list$1sNodeph* result_107;
struct list_item$1sNodeph* it_108;
_Bool _while_condtional13;
void* right_value147;
struct list$1sNodeph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
right_value142 = (void*)0;
memset(&result_107, 0, sizeof(struct list$1sNodeph*));
memset(&it_108, 0, sizeof(struct list_item$1sNodeph*));
right_value147 = (void*)0;
                    if(_if_conditional120=self==((void*)0),                    _if_conditional120) {
                        __result97__ = __result_obj__ = ((void*)0);
                        return __result97__;
                    }
                    result_107=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value142=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value141=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                    come_call_finalizer3(right_value141,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value142,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_108=self->head;
                    while(_while_condtional13=it_108!=((void*)0),                    _while_condtional13) {
                        list$1sNodeph_add(result_107,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value147=sNode_clone(it_108->item)))));
                        if(right_value147) { right_value147 = come_decrement_ref_count2(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_108=it_108->next;
                    }
                    __result102__ = __result_obj__ = result_107;
                    come_call_finalizer3(result_107,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result102__;
                    come_call_finalizer3(result_107,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result98__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result98__;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional121;
void* right_value143;
struct list_item$1sNodeph* litem_109;
struct sNode* __dec_obj21;
_Bool _if_conditional122;
void* right_value144;
struct list_item$1sNodeph* litem_110;
struct sNode* __dec_obj22;
void* right_value145;
struct list_item$1sNodeph* litem_111;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1sNodeph*));
right_value144 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1sNodeph*));
right_value145 = (void*)0;
memset(&litem_111, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional121=self->len==0,                            _if_conditional121) {
                                litem_109=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value143=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value143,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_109->prev=((void*)0);
                                litem_109->next=((void*)0);
                                __dec_obj21=litem_109->item;
                                litem_109->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_109;
                                self->head=litem_109;
                            }
                            else {
                                if(_if_conditional122=self->len==1,                                _if_conditional122) {
                                    litem_110=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value144=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value144,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_110->prev=self->head;
                                    litem_110->next=((void*)0);
                                    __dec_obj22=litem_110->item;
                                    litem_110->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_110;
                                    self->head->next=litem_110;
                                }
                                else {
                                    litem_111=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value145=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value145,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_111->prev=self->tail;
                                    litem_111->next=((void*)0);
                                    __dec_obj23=litem_111->item;
                                    litem_111->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_111;
                                    self->tail=litem_111;
                                }
                            }
                            self->len++;
                            __result99__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result99__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional123;
struct sNode* __result100__;
void* right_value146;
struct sNode* result_112;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
struct sNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
memset(&result_112, 0, sizeof(struct sNode*));
                            if(_if_conditional123=self==(void*)0,                            _if_conditional123) {
                                __result100__ = __result_obj__ = (void*)0;
                                return __result100__;
                            }
                            result_112=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value146=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value146) { right_value146 = come_decrement_ref_count2(right_value146, ((struct sNode*)right_value146)->finalize, ((struct sNode*)right_value146)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional124=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional124) {
                                result_112->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional125=self!=((void*)0),                            _if_conditional125) {
                                result_112->finalize=self->finalize;
                            }
                            if(_if_conditional126=self!=((void*)0),                            _if_conditional126) {
                                result_112->clone=self->clone;
                            }
                            if(_if_conditional127=self!=((void*)0),                            _if_conditional127) {
                                result_112->compile=self->compile;
                            }
                            if(_if_conditional128=self!=((void*)0),                            _if_conditional128) {
                                result_112->sline=self->sline;
                            }
                            if(_if_conditional129=self!=((void*)0),                            _if_conditional129) {
                                result_112->sname=self->sname;
                            }
                            if(_if_conditional130=self!=((void*)0),                            _if_conditional130) {
                                result_112->terminated=self->terminated;
                            }
                            if(_if_conditional131=self!=((void*)0),                            _if_conditional131) {
                                result_112->kind=self->kind;
                            }
                            __result101__ = __result_obj__ = result_112;
                            if(result_112) { result_112 = come_decrement_ref_count2(result_112, ((struct sNode*)result_112)->finalize, ((struct sNode*)result_112)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result101__;
                            if(result_112) { result_112 = come_decrement_ref_count2(result_112, ((struct sNode*)result_112)->finalize, ((struct sNode*)result_112)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_113;
_Bool _while_condtional14;
struct list_item$1sNodeph* prev_it_114;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_113, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_114, 0, sizeof(struct list_item$1sNodeph*));
                    it_113=self->head;
                    while(_while_condtional14=it_113!=((void*)0),                    _while_condtional14) {
                        prev_it_114=it_113;
                        it_113=it_113->next;
                        come_call_finalizer3(prev_it_114,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional135;
struct list$1charph* __result103__;
void* right_value150;
void* right_value151;
struct list$1charph* result_115;
struct list_item$1charph* it_116;
_Bool _while_condtional15;
void* right_value155;
struct list$1charph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&result_115, 0, sizeof(struct list$1charph*));
memset(&it_116, 0, sizeof(struct list_item$1charph*));
right_value155 = (void*)0;
                    if(_if_conditional135=self==((void*)0),                    _if_conditional135) {
                        __result103__ = __result_obj__ = ((void*)0);
                        return __result103__;
                    }
                    result_115=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value151=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                    come_call_finalizer3(right_value150,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value151,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_116=self->head;
                    while(_while_condtional15=it_116!=((void*)0),                    _while_condtional15) {
                        list$1charph_add(result_115,(char*)come_increment_ref_count(((char*)(right_value155=string_clone(it_116->item)))));
                        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_116=it_116->next;
                    }
                    __result106__ = __result_obj__ = result_115;
                    come_call_finalizer3(result_115,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result106__;
                    come_call_finalizer3(result_115,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result104__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result104__;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional136;
void* right_value152;
struct list_item$1charph* litem_117;
char* __dec_obj26;
_Bool _if_conditional137;
void* right_value153;
struct list_item$1charph* litem_118;
char* __dec_obj27;
void* right_value154;
struct list_item$1charph* litem_119;
char* __dec_obj28;
struct list$1charph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&litem_117, 0, sizeof(struct list_item$1charph*));
right_value153 = (void*)0;
memset(&litem_118, 0, sizeof(struct list_item$1charph*));
right_value154 = (void*)0;
memset(&litem_119, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional136=self->len==0,                            _if_conditional136) {
                                litem_117=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value152=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                                come_call_finalizer3(right_value152,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_117->prev=((void*)0);
                                litem_117->next=((void*)0);
                                __dec_obj26=litem_117->item;
                                litem_117->item=(char*)come_increment_ref_count(item);
                                __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_117;
                                self->head=litem_117;
                            }
                            else {
                                if(_if_conditional137=self->len==1,                                _if_conditional137) {
                                    litem_118=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value153=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                    come_call_finalizer3(right_value153,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_118->prev=self->head;
                                    litem_118->next=((void*)0);
                                    __dec_obj27=litem_118->item;
                                    litem_118->item=(char*)come_increment_ref_count(item);
                                    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_118;
                                    self->head->next=litem_118;
                                }
                                else {
                                    litem_119=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value154=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                    come_call_finalizer3(right_value154,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_119->prev=self->tail;
                                    litem_119->next=((void*)0);
                                    __dec_obj28=litem_119->item;
                                    litem_119->item=(char*)come_increment_ref_count(item);
                                    __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_119;
                                    self->tail=litem_119;
                                }
                            }
                            self->len++;
                            __result105__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result105__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_120;
_Bool _while_condtional16;
struct list_item$1charph* prev_it_121;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_120, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_121, 0, sizeof(struct list_item$1charph*));
                    it_120=self->head;
                    while(_while_condtional16=it_120!=((void*)0),                    _while_condtional16) {
                        prev_it_121=it_120;
                        it_120=it_120->next;
                        come_call_finalizer3(prev_it_121,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__;
struct sType* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
            list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
            __result111__ = __result_obj__ = item;
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result111__;
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__;
_Bool _if_conditional180;
_Bool _if_conditional181;
struct list$1sTypeph* __result109__;
struct list_item$1sTypeph* it_128;
int i_129;
_Bool _while_condtional17;
_Bool _if_conditional184;
struct sType* __dec_obj40;
struct list$1sTypeph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_128, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_129, 0, sizeof(int));
                if(_if_conditional180=position<0,                _if_conditional180) {
                    position+=self->len;
                }
                if(_if_conditional181=position>=self->len,                _if_conditional181) {
                    list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
                    __result109__ = __result_obj__ = self;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result109__;
                }
                it_128=self->head;
                i_129=0;
                while(_while_condtional17=it_128!=((void*)0),                _while_condtional17) {
                    if(_if_conditional184=position==i_129,                    _if_conditional184) {
                        __dec_obj40=it_128->item;
                        it_128->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    it_128=it_128->next;
                    i_129++;
                }
                __result110__ = __result_obj__ = self;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result110__;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional182;
void* right_value165;
struct list_item$1sTypeph* litem_125;
struct sType* __dec_obj37;
_Bool _if_conditional183;
void* right_value166;
struct list_item$1sTypeph* litem_126;
struct sType* __dec_obj38;
void* right_value167;
struct list_item$1sTypeph* litem_127;
struct sType* __dec_obj39;
struct list$1sTypeph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
memset(&litem_125, 0, sizeof(struct list_item$1sTypeph*));
right_value166 = (void*)0;
memset(&litem_126, 0, sizeof(struct list_item$1sTypeph*));
right_value167 = (void*)0;
memset(&litem_127, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional182=self->len==0,                        _if_conditional182) {
                            litem_125=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value165=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 217, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value165,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_125->prev=((void*)0);
                            litem_125->next=((void*)0);
                            __dec_obj37=litem_125->item;
                            litem_125->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_125;
                            self->head=litem_125;
                        }
                        else {
                            if(_if_conditional183=self->len==1,                            _if_conditional183) {
                                litem_126=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value166=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 227, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value166,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_126->prev=self->head;
                                litem_126->next=((void*)0);
                                __dec_obj38=litem_126->item;
                                litem_126->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_126;
                                self->head->next=litem_126;
                            }
                            else {
                                litem_127=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value167=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 237, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value167,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_127->prev=self->tail;
                                litem_127->next=((void*)0);
                                __dec_obj39=litem_127->item;
                                litem_127->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_127;
                                self->tail=litem_127;
                            }
                        }
                        self->len++;
                        __result108__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result108__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

char* make_come_type_name_string_no_solved(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value168;
struct sType* no_solved_type_130;
void* right_value169;
void* right_value170;
struct buffer* buf_131;
char* class_name_132;
_Bool _if_conditional185;
int i_133;
struct sType* gtype_134;
void* right_value171;
_Bool _if_conditional186;
_Bool _if_conditional187;
int i_135;
_Bool _if_conditional188;
int i_136;
_Bool _if_conditional189;
void* right_value172;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
memset(&no_solved_type_130, 0, sizeof(struct sType*));
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&buf_131, 0, sizeof(struct buffer*));
memset(&class_name_132, 0, sizeof(char*));
memset(&i_133, 0, sizeof(int));
memset(&gtype_134, 0, sizeof(struct sType*));
right_value171 = (void*)0;
memset(&i_135, 0, sizeof(int));
memset(&i_136, 0, sizeof(int));
right_value172 = (void*)0;
    no_solved_type_130=(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=get_no_solved_type(type))));
    come_call_finalizer3(right_value168,sType_finalize, 0, 1, 0, 0, __result_obj__);
    buf_131=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value170=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value169=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 358, "buffer"))))))));
    come_call_finalizer3(right_value169,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value170,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    class_name_132=no_solved_type_130->mClass->mName;
    buffer_append_str(buf_131,class_name_132);
    if(_if_conditional185=list$1sTypeph_length(no_solved_type_130->mGenericsTypes)>0,    _if_conditional185) {
        buffer_append_str(buf_131,"<");
        for(        i_133=0;        i_133<list$1sTypeph_length(no_solved_type_130->mGenericsTypes);        i_133++        ){
            gtype_134=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(no_solved_type_130->mGenericsTypes,i_133), "03output_code.c", 367, 1));
            buffer_append_str(buf_131,((char*)(right_value171=make_come_type_name_string_no_solved(gtype_134,info))));
            right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional186=i_133!=list$1sTypeph_length(no_solved_type_130->mGenericsTypes)-1,            _if_conditional186) {
                buffer_append_str(buf_131,",");
            }
        }
        buffer_append_str(buf_131,">");
    }
    if(_if_conditional187=no_solved_type_130->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_132,"lambda"),    _if_conditional187) {
        for(        i_135=0;        i_135<no_solved_type_130->mPointerNum;        i_135++        ){
            buffer_append_str(buf_131,"*");
        }
    }
    if(_if_conditional188=list$1sNodeph_length(no_solved_type_130->mArrayNum)>0,    _if_conditional188) {
        for(        i_136=0;        i_136<list$1sNodeph_length(no_solved_type_130->mArrayNum);        i_136++        ){
            buffer_append_str(buf_131,"[]");
        }
    }
    if(no_solved_type_130->mHeap) {
        buffer_append_str(buf_131,"%");
    }
    __result113__ = __result_obj__ = ((char*)(right_value172=buffer_to_string(buf_131)));
    come_call_finalizer3(no_solved_type_130,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_131,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
    come_call_finalizer3(no_solved_type_130,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_131,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __result_obj__;
void* right_value173;
char* type_name_137;
void* right_value174;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
memset(&type_name_137, 0, sizeof(char*));
right_value174 = (void*)0;
    type_name_137=(char*)come_increment_ref_count(((char*)(right_value173=make_come_type_name_string_no_solved(type,info))));
    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result114__ = __result_obj__ = ((char*)(right_value174=xsprintf("%s %s",type_name_137,name)));
    type_name_137 = come_decrement_ref_count2(type_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
    type_name_137 = come_decrement_ref_count2(type_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value175;
void* right_value176;
struct buffer* output_138;
_Bool _if_conditional190;
void* right_value177;
void* right_value178;
struct buffer* output2_139;
int i_140;
struct list$1sTypeph* o2_saved_141;
struct sType* it_142;
char* name_146;
void* right_value179;
char* str_147;
_Bool _if_conditional193;
_Bool _if_conditional194;
void* right_value180;
void* right_value181;
char* str_148;
void* right_value182;
_Bool _if_conditional195;
void* right_value183;
struct sType* base_result_type_149;
void* right_value184;
void* right_value185;
struct list$1sNodeph* __dec_obj41;
void* right_value186;
char* result_type_str_150;
int i_151;
struct list$1sTypeph* o2_saved_152;
struct sType* it_153;
char* name_154;
void* right_value187;
char* str_155;
_Bool _if_conditional196;
_Bool _if_conditional197;
struct sNode* node_159;
_Bool _if_conditional200;
void* right_value188;
char* __result119__;
void* right_value189;
struct CVALUE* cvalue_160;
void* right_value190;
void* right_value191;
void* right_value192;
char* result_type_str_161;
int i_162;
struct list$1sTypeph* o2_saved_163;
struct sType* it_164;
char* name_165;
void* right_value193;
char* str_166;
_Bool _if_conditional201;
_Bool _if_conditional202;
void* right_value194;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&output_138, 0, sizeof(struct buffer*));
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&output2_139, 0, sizeof(struct buffer*));
memset(&i_140, 0, sizeof(int));
memset(&o2_saved_141, 0, sizeof(struct list$1sTypeph*));
memset(&it_142, 0, sizeof(struct sType*));
memset(&name_146, 0, sizeof(char*));
right_value179 = (void*)0;
memset(&str_147, 0, sizeof(char*));
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&str_148, 0, sizeof(char*));
right_value182 = (void*)0;
right_value183 = (void*)0;
memset(&base_result_type_149, 0, sizeof(struct sType*));
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
memset(&result_type_str_150, 0, sizeof(char*));
memset(&i_151, 0, sizeof(int));
memset(&o2_saved_152, 0, sizeof(struct list$1sTypeph*));
memset(&it_153, 0, sizeof(struct sType*));
memset(&name_154, 0, sizeof(char*));
right_value187 = (void*)0;
memset(&str_155, 0, sizeof(char*));
memset(&node_159, 0, sizeof(struct sNode*));
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&cvalue_160, 0, sizeof(struct CVALUE*));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&result_type_str_161, 0, sizeof(char*));
memset(&i_162, 0, sizeof(int));
memset(&o2_saved_163, 0, sizeof(struct list$1sTypeph*));
memset(&it_164, 0, sizeof(struct sType*));
memset(&name_165, 0, sizeof(char*));
right_value193 = (void*)0;
memset(&str_166, 0, sizeof(char*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
    output_138=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value176=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value175=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 407, "buffer"))))))));
    come_call_finalizer3(right_value175,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value176,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(fun->mResultType->mResultType) {
        output2_139=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value178=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value177=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 409, "buffer"))))))));
        come_call_finalizer3(right_value177,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value178,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(output2_139,fun->mName);
        buffer_append_str(output2_139,"(");
        i_140=0;
        for(        o2_saved_141=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_142=list$1sTypeph_begin((o2_saved_141));        !list$1sTypeph_end((o2_saved_141));        it_142=list$1sTypeph_next((o2_saved_141))        ){
            name_146=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_140), "03output_code.c", 416, 2));
            str_147=(char*)come_increment_ref_count(((char*)(right_value179=make_define_var(it_142,name_146,(_Bool)0,info))));
            right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output2_139,str_147);
            if(_if_conditional193=i_140==list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional193) {
                if(fun->mVarArgs) {
                    buffer_append_str(output2_139,", ...");
                }
            }
            else {
                buffer_append_str(output2_139,", ");
            }
            i_140++;
            str_147 = come_decrement_ref_count2(str_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_141,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(output2_139,")");
        str_148=(char*)come_increment_ref_count(((char*)(right_value181=make_lambda_type_name_string(fun->mResultType,((char*)(right_value180=buffer_to_string(output2_139))),info))));
        right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(output_138,str_148);
        buffer_append_str(info->module->mSourceHead,((char*)(right_value182=buffer_to_string(output_138))));
        right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(info->module->mSourceHead,";\n");
        come_call_finalizer3(output2_139,buffer_finalize, 0, 0, 0, 0, (void*)0);
        str_148 = come_decrement_ref_count2(str_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional195=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional195) {
            base_result_type_149=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=sType_clone(fun->mResultType))));
            come_call_finalizer3(right_value183,sType_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj41=base_result_type_149->mArrayNum;
            base_result_type_149->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value185=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value184=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03output_code.c", 445, "list$1sNodeph"))))))));
            come_call_finalizer3(__dec_obj41,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value184,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value185,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            result_type_str_150=(char*)come_increment_ref_count(((char*)(right_value186=make_type_name_string(base_result_type_149,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output_138,result_type_str_150);
            buffer_append_str(output_138," (*");
            buffer_append_str(output_138,fun->mName);
            buffer_append_str(output_138,"(");
            i_151=0;
            for(            o2_saved_152=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_153=list$1sTypeph_begin((o2_saved_152));            !list$1sTypeph_end((o2_saved_152));            it_153=list$1sTypeph_next((o2_saved_152))            ){
                name_154=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_151), "03output_code.c", 457, 3));
                str_155=(char*)come_increment_ref_count(((char*)(right_value187=make_define_var(it_153,name_154,(_Bool)0,info))));
                right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(output_138,str_155);
                if(_if_conditional196=i_151==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional196) {
                    if(fun->mVarArgs) {
                        buffer_append_str(output_138,", ...");
                    }
                }
                else {
                    buffer_append_str(output_138,", ");
                }
                i_151++;
                str_155 = come_decrement_ref_count2(str_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_152,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            node_159=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0), "03output_code.c", 474, 4));
            if(_if_conditional200=!node_compile(node_159,info),            _if_conditional200) {
                err_msg(info,"invalid array number");
                __result119__ = __result_obj__ = ((char*)(right_value188=__builtin_string("")));
                come_call_finalizer3(base_result_type_149,sType_finalize, 0, 0, 0, 0, (void*)0);
                result_type_str_150 = come_decrement_ref_count2(result_type_str_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(output_138,buffer_finalize, 0, 0, 0, 0, (void*)0);
                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result119__;
            }
            cvalue_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=get_value_from_stack(-1,info))));
            come_call_finalizer3(right_value189,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            dec_stack_ptr(1,info);
            buffer_append_str(output_138,((char*)(right_value190=xsprintf("))[%s]",cvalue_160->c_value))));
            right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(info->module->mSourceHead,((char*)(right_value191=buffer_to_string(output_138))));
            right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(info->module->mSourceHead,";\n");
            come_call_finalizer3(base_result_type_149,sType_finalize, 0, 0, 0, 0, (void*)0);
            result_type_str_150 = come_decrement_ref_count2(result_type_str_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(cvalue_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            result_type_str_161=(char*)come_increment_ref_count(((char*)(right_value192=make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output_138,result_type_str_161);
            buffer_append_str(output_138," ");
            buffer_append_str(output_138,fun->mName);
            buffer_append_str(output_138,"(");
            i_162=0;
            for(            o2_saved_163=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_164=list$1sTypeph_begin((o2_saved_163));            !list$1sTypeph_end((o2_saved_163));            it_164=list$1sTypeph_next((o2_saved_163))            ){
                name_165=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_162), "03output_code.c", 499, 5));
                str_166=(char*)come_increment_ref_count(((char*)(right_value193=make_define_var(it_164,name_165,(_Bool)0,info))));
                right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(output_138,str_166);
                if(_if_conditional201=i_162==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional201) {
                    if(fun->mVarArgs) {
                        buffer_append_str(output_138,", ...");
                    }
                }
                else {
                    buffer_append_str(output_138,", ");
                }
                i_162++;
                str_166 = come_decrement_ref_count2(str_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_163,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(output_138,")");
            buffer_append_str(info->module->mSourceHead,((char*)(right_value194=buffer_to_string(output_138))));
            right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(info->module->mSourceHead,";\n");
            result_type_str_161 = come_decrement_ref_count2(result_type_str_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    buffer_append_str(output_138,"{\n");
    buffer_append_str(output_138,((char*)(right_value195=buffer_to_string(fun->mSourceHead))));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_138,((char*)(right_value196=buffer_to_string(fun->mSourceHead2))));
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_138,((char*)(right_value197=buffer_to_string(fun->mSource))));
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_138,"}\n");
    __result120__ = __result_obj__ = ((char*)(right_value198=buffer_to_string(output_138)));
    come_call_finalizer3(output_138,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result120__;
    come_call_finalizer3(output_138,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional191;
struct list_item$1charph* it_143;
int i_144;
_Bool _while_condtional18;
_Bool _if_conditional192;
char* __result115__;
char* default_value_145;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_143, 0, sizeof(struct list_item$1charph*));
memset(&i_144, 0, sizeof(int));
memset(&default_value_145, 0, sizeof(char*));
                if(_if_conditional191=position<0,                _if_conditional191) {
                    position+=self->len;
                }
                it_143=self->head;
                i_144=0;
                while(_while_condtional18=it_143!=((void*)0),                _while_condtional18) {
                    if(_if_conditional192=position==i_144,                    _if_conditional192) {
                        __result115__ = __result_obj__ = it_143->item;
                        return __result115__;
                    }
                    it_143=it_143->next;
                    i_144++;
                }
                memset(&default_value_145,0,sizeof(char*));
                __result116__ = __result_obj__ = default_value_145;
                default_value_145 = come_decrement_ref_count2(default_value_145, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result116__;
                default_value_145 = come_decrement_ref_count2(default_value_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool _if_conditional198;
struct list_item$1sNodeph* it_156;
int i_157;
_Bool _while_condtional19;
_Bool _if_conditional199;
struct sNode* __result117__;
struct sNode* default_value_158;
struct sNode* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_156, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_157, 0, sizeof(int));
memset(&default_value_158, 0, sizeof(struct sNode*));
                if(_if_conditional198=position<0,                _if_conditional198) {
                    position+=self->len;
                }
                it_156=self->head;
                i_157=0;
                while(_while_condtional19=it_156!=((void*)0),                _while_condtional19) {
                    if(_if_conditional199=position==i_157,                    _if_conditional199) {
                        __result117__ = __result_obj__ = it_156->item;
                        return __result117__;
                    }
                    it_156=it_156->next;
                    i_157++;
                }
                memset(&default_value_158,0,sizeof(struct sNode*));
                __result118__ = __result_obj__ = default_value_158;
                if(default_value_158) { default_value_158 = come_decrement_ref_count2(default_value_158, ((struct sNode*)default_value_158)->finalize, ((struct sNode*)default_value_158)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result118__;
                if(default_value_158) { default_value_158 = come_decrement_ref_count2(default_value_158, ((struct sNode*)default_value_158)->finalize, ((struct sNode*)default_value_158)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value199;
void* right_value200;
struct buffer* output_167;
_Bool _if_conditional203;
void* right_value201;
void* right_value202;
struct buffer* output2_168;
int i_169;
struct list$1sTypeph* o2_saved_170;
struct sType* it_171;
char* name_172;
void* right_value203;
char* str_173;
_Bool _if_conditional204;
void* right_value204;
void* right_value205;
char* str_174;
_Bool _if_conditional205;
void* right_value206;
struct sType* base_result_type_175;
void* right_value207;
void* right_value208;
struct list$1sNodeph* __dec_obj42;
void* right_value209;
char* result_type_str_176;
int i_177;
struct list$1sTypeph* o2_saved_178;
struct sType* it_179;
char* name_180;
void* right_value210;
char* str_181;
_Bool _if_conditional206;
_Bool _if_conditional207;
struct sNode* node_182;
_Bool _if_conditional208;
void* right_value211;
char* __result121__;
void* right_value212;
struct CVALUE* cvalue_183;
void* right_value213;
void* right_value214;
char* result_type_str_184;
int i_185;
struct list$1sTypeph* o2_saved_186;
struct sType* it_187;
char* name_188;
void* right_value215;
char* str_189;
_Bool _if_conditional209;
_Bool _if_conditional210;
void* right_value216;
char* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&output_167, 0, sizeof(struct buffer*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&output2_168, 0, sizeof(struct buffer*));
memset(&i_169, 0, sizeof(int));
memset(&o2_saved_170, 0, sizeof(struct list$1sTypeph*));
memset(&it_171, 0, sizeof(struct sType*));
memset(&name_172, 0, sizeof(char*));
right_value203 = (void*)0;
memset(&str_173, 0, sizeof(char*));
right_value204 = (void*)0;
right_value205 = (void*)0;
memset(&str_174, 0, sizeof(char*));
right_value206 = (void*)0;
memset(&base_result_type_175, 0, sizeof(struct sType*));
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&result_type_str_176, 0, sizeof(char*));
memset(&i_177, 0, sizeof(int));
memset(&o2_saved_178, 0, sizeof(struct list$1sTypeph*));
memset(&it_179, 0, sizeof(struct sType*));
memset(&name_180, 0, sizeof(char*));
right_value210 = (void*)0;
memset(&str_181, 0, sizeof(char*));
memset(&node_182, 0, sizeof(struct sNode*));
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&cvalue_183, 0, sizeof(struct CVALUE*));
right_value213 = (void*)0;
right_value214 = (void*)0;
memset(&result_type_str_184, 0, sizeof(char*));
memset(&i_185, 0, sizeof(int));
memset(&o2_saved_186, 0, sizeof(struct list$1sTypeph*));
memset(&it_187, 0, sizeof(struct sType*));
memset(&name_188, 0, sizeof(char*));
right_value215 = (void*)0;
memset(&str_189, 0, sizeof(char*));
right_value216 = (void*)0;
    output_167=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value200=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value199=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 534, "buffer"))))))));
    come_call_finalizer3(right_value199,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value200,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(fun->mResultType->mResultType) {
        output2_168=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value202=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value201=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 537, "buffer"))))))));
        come_call_finalizer3(right_value201,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value202,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(output2_168,fun->mName);
        buffer_append_str(output2_168,"(");
        i_169=0;
        for(        o2_saved_170=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_171=list$1sTypeph_begin((o2_saved_170));        !list$1sTypeph_end((o2_saved_170));        it_171=list$1sTypeph_next((o2_saved_170))        ){
            name_172=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_169), "03output_code.c", 544, 6));
            str_173=(char*)come_increment_ref_count(((char*)(right_value203=make_define_var(it_171,name_172,(_Bool)0,info))));
            right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output2_168,str_173);
            if(_if_conditional204=i_169!=list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional204) {
                buffer_append_str(output2_168,", ");
            }
            i_169++;
            str_173 = come_decrement_ref_count2(str_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_170,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(output2_168,")");
        str_174=(char*)come_increment_ref_count(((char*)(right_value205=make_lambda_type_name_string(fun->mResultType,((char*)(right_value204=buffer_to_string(output2_168))),info))));
        right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(output_167,str_174);
        buffer_append_str(output_167,";\n");
        come_call_finalizer3(output2_168,buffer_finalize, 0, 0, 0, 0, (void*)0);
        str_174 = come_decrement_ref_count2(str_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional205=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional205) {
            base_result_type_175=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(fun->mResultType))));
            come_call_finalizer3(right_value206,sType_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj42=base_result_type_175->mArrayNum;
            base_result_type_175->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value208=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value207=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03output_code.c", 563, "list$1sNodeph"))))))));
            come_call_finalizer3(__dec_obj42,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value207,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value208,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            result_type_str_176=(char*)come_increment_ref_count(((char*)(right_value209=make_type_name_string(base_result_type_175,(_Bool)1,(_Bool)0,(_Bool)0,info))));
            right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output_167,result_type_str_176);
            buffer_append_str(output_167," (*");
            buffer_append_str(output_167,fun->mName);
            buffer_append_str(output_167,"(");
            i_177=0;
            for(            o2_saved_178=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_179=list$1sTypeph_begin((o2_saved_178));            !list$1sTypeph_end((o2_saved_178));            it_179=list$1sTypeph_next((o2_saved_178))            ){
                name_180=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_177), "03output_code.c", 575, 7));
                str_181=(char*)come_increment_ref_count(((char*)(right_value210=make_define_var(it_179,name_180,(_Bool)0,info))));
                right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(output_167,str_181);
                if(_if_conditional206=i_177==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional206) {
                    if(fun->mVarArgs) {
                        buffer_append_str(output_167,", ...");
                    }
                }
                else {
                    buffer_append_str(output_167,", ");
                }
                i_177++;
                str_181 = come_decrement_ref_count2(str_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_178,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            node_182=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0), "03output_code.c", 591, 8));
            if(_if_conditional208=!node_compile(node_182,info),            _if_conditional208) {
                err_msg(info,"invalid array number");
                __result121__ = __result_obj__ = ((char*)(right_value211=__builtin_string("")));
                come_call_finalizer3(base_result_type_175,sType_finalize, 0, 0, 0, 0, (void*)0);
                result_type_str_176 = come_decrement_ref_count2(result_type_str_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(output_167,buffer_finalize, 0, 0, 0, 0, (void*)0);
                right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result121__;
            }
            cvalue_183=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value212=get_value_from_stack(-1,info))));
            come_call_finalizer3(right_value212,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            dec_stack_ptr(1,info);
            buffer_append_str(output_167,((char*)(right_value213=xsprintf("))[%s];\n",cvalue_183->c_value))));
            right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(base_result_type_175,sType_finalize, 0, 0, 0, 0, (void*)0);
            result_type_str_176 = come_decrement_ref_count2(result_type_str_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(cvalue_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            result_type_str_184=(char*)come_increment_ref_count(((char*)(right_value214=make_type_name_string(fun->mResultType,(_Bool)1,(_Bool)0,(_Bool)0,info))));
            right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output_167,result_type_str_184);
            buffer_append_str(output_167," ");
            buffer_append_str(output_167,fun->mName);
            buffer_append_str(output_167,"(");
            i_185=0;
            for(            o2_saved_186=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_187=list$1sTypeph_begin((o2_saved_186));            !list$1sTypeph_end((o2_saved_186));            it_187=list$1sTypeph_next((o2_saved_186))            ){
                name_188=((char*)come_null_check(list$1charphp_operator_load_element(fun->mParamNames,i_185), "03output_code.c", 612, 9));
                str_189=(char*)come_increment_ref_count(((char*)(right_value215=make_define_var(it_187,name_188,(_Bool)0,info))));
                right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(output_167,str_189);
                if(_if_conditional209=i_185==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional209) {
                    if(fun->mVarArgs) {
                        buffer_append_str(output_167,", ...");
                    }
                }
                else {
                    buffer_append_str(output_167,", ");
                }
                i_185++;
                str_189 = come_decrement_ref_count2(str_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_186,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(output_167,");\n");
            result_type_str_184 = come_decrement_ref_count2(result_type_str_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result122__ = __result_obj__ = ((char*)(right_value216=buffer_to_string(output_167)));
    come_call_finalizer3(output_167,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result122__;
    come_call_finalizer3(output_167,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value217;
void* right_value218;
struct buffer* output_190;
void* right_value219;
char* result_type_str_191;
int i_192;
struct list$1sTypeph* o2_saved_193;
struct sType* it_194;
char* name_195;
void* right_value220;
char* str_196;
_Bool _if_conditional211;
_Bool _if_conditional212;
void* right_value221;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&output_190, 0, sizeof(struct buffer*));
right_value219 = (void*)0;
memset(&result_type_str_191, 0, sizeof(char*));
memset(&i_192, 0, sizeof(int));
memset(&o2_saved_193, 0, sizeof(struct list$1sTypeph*));
memset(&it_194, 0, sizeof(struct sType*));
memset(&name_195, 0, sizeof(char*));
right_value220 = (void*)0;
memset(&str_196, 0, sizeof(char*));
right_value221 = (void*)0;
    output_190=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value218=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value217=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 636, "buffer"))))))));
    come_call_finalizer3(right_value217,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value218,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_type_str_191=(char*)come_increment_ref_count(((char*)(right_value219=make_type_name_string(lambda_type->mResultType->v1,(_Bool)1,(_Bool)0,(_Bool)0,info))));
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_190,result_type_str_191);
    buffer_append_str(output_190," ");
    buffer_append_str(output_190,name);
    buffer_append_str(output_190,"(");
    i_192=0;
    for(    o2_saved_193=(struct list$1sTypeph*)come_increment_ref_count((lambda_type->mParamTypes)),it_194=list$1sTypeph_begin((o2_saved_193));    !list$1sTypeph_end((o2_saved_193));    it_194=list$1sTypeph_next((o2_saved_193))    ){
        name_195=((char*)come_null_check(list$1charphp_operator_load_element(lambda_type->mParamNames,i_192), "03output_code.c", 648, 10));
        str_196=(char*)come_increment_ref_count(((char*)(right_value220=make_define_var(it_194,name_195,(_Bool)0,info))));
        right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(output_190,str_196);
        if(_if_conditional211=i_192==list$1sTypeph_length(lambda_type->mParamTypes)-1,        _if_conditional211) {
            if(lambda_type->mVarArgs) {
                buffer_append_str(output_190,", ...");
            }
        }
        else {
            buffer_append_str(output_190,", ");
        }
        i_192++;
        str_196 = come_decrement_ref_count2(str_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_193,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(output_190,");\n");
    __result123__ = __result_obj__ = ((char*)(right_value221=buffer_to_string(output_190)));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(output_190,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_type_str_191 = come_decrement_ref_count2(result_type_str_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result123__;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(output_190,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_type_str_191 = come_decrement_ref_count2(result_type_str_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void add_come_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional213;
char* msg2_197;
va_list args_198;
int len_199;
_Bool _if_conditional214;
int i_200;
void* right_value222;
void* right_value223;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_197, 0, sizeof(char*));
memset(&args_198, 0, sizeof(va_list));
memset(&len_199, 0, sizeof(int));
memset(&i_200, 0, sizeof(int));
right_value222 = (void*)0;
right_value223 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_198,msg);
    len_199=vasprintf(&msg2_197,msg,args_198);
    __builtin_va_end(args_198);
    if(info->come_fun) {
        for(        i_200=0;        i_200<info->block_level;        i_200++        ){
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        buffer_append_str(info->come_fun->mSource,((char*)(right_value222=xsprintf("%s",msg2_197))));
        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        buffer_append_str(info->module->mSourceHead,((char*)(right_value223=xsprintf("%s",msg2_197))));
        right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    free(msg2_197);
    come_call_finalizer3((&args_198),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional215;
char* msg2_201;
va_list args_202;
int len_203;
void* right_value224;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_201, 0, sizeof(char*));
memset(&args_202, 0, sizeof(va_list));
memset(&len_203, 0, sizeof(int));
right_value224 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_202,msg);
    len_203=vasprintf(&msg2_201,msg,args_202);
    __builtin_va_end(args_202);
    buffer_append_str(info->module->mSourceHead,((char*)(right_value224=xsprintf("%s",msg2_201))));
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(msg2_201);
    come_call_finalizer3((&args_202),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional216;
_Bool _if_conditional217;
char* msg2_204;
va_list args_205;
int len_206;
void* right_value225;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_204, 0, sizeof(char*));
memset(&args_205, 0, sizeof(va_list));
memset(&len_206, 0, sizeof(int));
right_value225 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    if(_if_conditional217=string_operator_equals(info->sname,info->base_sname),    _if_conditional217) {
        __builtin_va_start(args_205,msg);
        len_206=vasprintf(&msg2_204,msg,args_205);
        __builtin_va_end(args_205);
        buffer_append_str(info->module->mHeader,((char*)(right_value225=xsprintf("%s",msg2_204))));
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        free(msg2_204);
        come_call_finalizer3((&args_205),va_list_finalize, 1, 0, 0, 0, (void*)0);
    }
}

int transpile_v3(struct sInfo* info){
void* __result_obj__;
void* right_value226;
char* name_207;
void* right_value227;
void* right_value228;
struct sType* result_type_208;
void* right_value229;
void* right_value230;
void* right_value231;
void* right_value232;
struct sType* __list_values1___209[2];
void* right_value233;
void* right_value234;
struct list$1sTypeph* param_types_211;
void* right_value235;
void* right_value236;
char* __list_values2___212[2];
void* right_value240;
void* right_value241;
struct list$1charph* param_names_217;
void* right_value242;
void* right_value243;
struct list$1charph* param_default_parametors_218;
void* right_value244;
void* right_value245;
void* right_value246;
void* right_value247;
struct sFun* main_fun_219;
void* right_value254;
int __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value226 = (void*)0;
memset(&name_207, 0, sizeof(char*));
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&result_type_208, 0, sizeof(struct sType*));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
memset(&param_types_211, 0, sizeof(struct list$1sTypeph*));
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
memset(&param_names_217, 0, sizeof(struct list$1charph*));
right_value242 = (void*)0;
right_value243 = (void*)0;
memset(&param_default_parametors_218, 0, sizeof(struct list$1charph*));
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
memset(&main_fun_219, 0, sizeof(struct sFun*));
right_value254 = (void*)0;
    name_207=(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string("main"))));
    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_type_208=(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value227=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03output_code.c", 736, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer3(right_value227,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value228,sType_finalize, 0, 1, 0, 0, __result_obj__);
    {__list_values1___209[0]=come_increment_ref_count(((struct sType*)(right_value230=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value229=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03output_code.c", 737, "sType")))),"int",(_Bool)0,info))));
__list_values1___209[1]=come_increment_ref_count(((struct sType*)(right_value232=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value231=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03output_code.c", 737, "sType")))),"char**",(_Bool)0,info))));
}    param_types_211=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value234=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value233=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "03output_code.c", 737, "struct list$1sTypeph")))),2,__list_values1___209))));
    come_call_finalizer3(right_value229,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value230,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value231,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value232,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value233,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value234,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    {__list_values2___212[0]=come_increment_ref_count(((char*)(right_value235=__builtin_string("argc"))));
__list_values2___212[1]=come_increment_ref_count(((char*)(right_value236=__builtin_string("argv"))));
}    param_names_217=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value241=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value240=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03output_code.c", 738, "struct list$1charph")))),2,__list_values2___212))));
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value240,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value241,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_218=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value243=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value242=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03output_code.c", 739, "list$1charph"))))))));
    come_call_finalizer3(right_value242,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value243,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    main_fun_219=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value247=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value244=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "03output_code.c", 740, "sFun")))),(char*)come_increment_ref_count(name_207),(struct sType*)come_increment_ref_count(result_type_208),(struct list$1sTypeph*)come_increment_ref_count(param_types_211),(struct list$1charph*)come_increment_ref_count(param_names_217),(struct list$1charph*)come_increment_ref_count(param_default_parametors_218),(_Bool)0,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value245=__builtin_string("int main(int argc, char** argv)")))),(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string("")))),info))));
    come_call_finalizer3(right_value244,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value247,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value254=__builtin_string(name_207)))),(struct sFun*)come_increment_ref_count(main_fun_219));
    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code(info,"#include <stdio.h>\n");
    info->come_fun=main_fun_219;
    info->block_level++;
    add_come_code(info,"puts(\"HELLO COMELANG\");\n\n");
    add_come_code(info,"return 0;\n");
    info->block_level--;
    __result151__ = 0;
    name_207 = come_decrement_ref_count2(name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_208,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_211,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_217,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_218,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(main_fun_219,sFun_finalize, 0, 0, 0, 0, (void*)0);
    return __result151__;
    name_207 = come_decrement_ref_count2(name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_208,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_211,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_217,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_218,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(main_fun_219,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_210;
struct list$1sTypeph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_210, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_210=0;        i_210<num_value;        i_210++        ){
            list$1sTypeph_push_back(self,values[i_210]);
        }
        __result124__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        return __result124__;
        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_213;
struct list$1charph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_213, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_213=0;        i_213<num_value;        i_213++        ){
            list$1charph_push_back(self,values[i_213]);
        }
        __result126__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result126__;
        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional218;
void* right_value237;
struct list_item$1charph* litem_214;
char* __dec_obj43;
_Bool _if_conditional219;
void* right_value238;
struct list_item$1charph* litem_215;
char* __dec_obj44;
void* right_value239;
struct list_item$1charph* litem_216;
char* __dec_obj45;
struct list$1charph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value237 = (void*)0;
memset(&litem_214, 0, sizeof(struct list_item$1charph*));
right_value238 = (void*)0;
memset(&litem_215, 0, sizeof(struct list_item$1charph*));
right_value239 = (void*)0;
memset(&litem_216, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional218=self->len==0,                _if_conditional218) {
                    litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value237=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 217, "list_item$1charph"))));
                    come_call_finalizer3(right_value237,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_214->prev=((void*)0);
                    litem_214->next=((void*)0);
                    __dec_obj43=litem_214->item;
                    litem_214->item=(char*)come_increment_ref_count(item);
                    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_214;
                    self->head=litem_214;
                }
                else {
                    if(_if_conditional219=self->len==1,                    _if_conditional219) {
                        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value238=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph"))));
                        come_call_finalizer3(right_value238,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_215->prev=self->head;
                        litem_215->next=((void*)0);
                        __dec_obj44=litem_215->item;
                        litem_215->item=(char*)come_increment_ref_count(item);
                        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_215;
                        self->head->next=litem_215;
                    }
                    else {
                        litem_216=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value239=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph"))));
                        come_call_finalizer3(right_value239,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_216->prev=self->tail;
                        litem_216->next=((void*)0);
                        __dec_obj45=litem_216->item;
                        litem_216->item=(char*)come_increment_ref_count(item);
                        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_216;
                        self->tail=litem_216;
                    }
                }
                self->len++;
                __result125__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result125__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional220=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional220) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional221=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional221) {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional222=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional222) {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional223=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional223) {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional224=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional224) {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional225=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional225) {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional226=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional226) {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional229=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional229) {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional230=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional230) {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional231=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional231) {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional232=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional232) {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional233=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional233) {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional234=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional234) {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional227;
_Bool _if_conditional228;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional227=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional227) {
                    come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional228=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional228) {
                    come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool _if_conditional235;
unsigned int hash_237;
unsigned int it_238;
_Bool _while_condtional22;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool same_key_exist_255;
char* it2_258;
_Bool _if_conditional278;
_Bool _if_conditional279;
struct map$2charphsFunph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_237, 0, sizeof(unsigned int));
memset(&it_238, 0, sizeof(unsigned int));
memset(&same_key_exist_255, 0, sizeof(_Bool));
memset(&it2_258, 0, sizeof(char*));
        if(_if_conditional235=self->len*10>=self->size,        _if_conditional235) {
            map$2charphsFunph_rehash(self);
        }
        hash_237=string_get_hash_key(key)%self->size;
        it_238=hash_237;
        while(_while_condtional22=(_Bool)1,        _while_condtional22) {
            if(_if_conditional247=self->item_existance[it_238],            _if_conditional247) {
                if(_if_conditional248=string_equals(self->keys[it_238],key),                _if_conditional248) {
                    if(_if_conditional249=1,                    _if_conditional249) {
                        list$1charp_remove(self->key_list,self->keys[it_238]);
                        self->keys[it_238] = come_decrement_ref_count2(self->keys[it_238], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_238]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_238]);
                        self->keys[it_238]=key;
                    }
                    if(_if_conditional269=1,                    _if_conditional269) {
                        come_call_finalizer3(self->items[it_238],sFun_finalize, 0, 0, 0, 0, (void*)0);
                        self->items[it_238]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_238]=item;
                    }
                    break;
                }
                it_238++;
                if(_if_conditional270=it_238>=self->size,                _if_conditional270) {
                    it_238=0;
                }
                else {
                    if(_if_conditional271=it_238==hash_237,                    _if_conditional271) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_238]=(_Bool)1;
                if(_if_conditional272=1,                _if_conditional272) {
                    self->keys[it_238]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_238]=key;
                }
                if(_if_conditional273=1,                _if_conditional273) {
                    self->items[it_238]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_238]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_255=(_Bool)0;
        for(        it2_258=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_258=list$1charp_next(self->key_list)        ){
            if(_if_conditional278=string_equals(it2_258,key),            _if_conditional278) {
                same_key_exist_255=(_Bool)1;
            }
        }
        if(_if_conditional279=!same_key_exist_255,        _if_conditional279) {
            list$1charp_push_back(self->key_list,key);
        }
        __result150__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result150__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
int size_220;
void* right_value248;
char** keys_221;
void* right_value249;
struct sFun** items_222;
void* right_value250;
_Bool* item_existance_223;
int len_224;
char* it_227;
struct sFun* default_value_230;
struct sFun* it2_233;
unsigned int hash_234;
int n_235;
_Bool _while_condtional21;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
struct sFun* default_value_236;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_220, 0, sizeof(int));
right_value248 = (void*)0;
memset(&keys_221, 0, sizeof(char**));
right_value249 = (void*)0;
memset(&items_222, 0, sizeof(struct sFun**));
right_value250 = (void*)0;
memset(&item_existance_223, 0, sizeof(_Bool*));
memset(&len_224, 0, sizeof(int));
memset(&it_227, 0, sizeof(char*));
memset(&default_value_230, 0, sizeof(struct sFun*));
memset(&it2_233, 0, sizeof(struct sFun*));
memset(&hash_234, 0, sizeof(unsigned int));
memset(&n_235, 0, sizeof(int));
memset(&default_value_236, 0, sizeof(struct sFun*));
                size_220=self->size*10;
                keys_221=(char**)come_increment_ref_count(((char**)(right_value248=(char**)come_calloc(1, sizeof(char*)*(1*(size_220)), "./neo-c.h", 1313, "char*%"))));
                right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_222=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value249=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_220)), "./neo-c.h", 1314, "sFun*%"))));
                come_call_finalizer3(right_value249,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                item_existance_223=(_Bool*)come_increment_ref_count(((_Bool*)(right_value250=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_220)), "./neo-c.h", 1315, "bool"))));
                right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_224=0;
                for(                it_227=map$2charphsFunph_begin(self);                !map$2charphsFunph_end(self);                it_227=map$2charphsFunph_next(self)                ){
                    memset(&default_value_230,0,sizeof(struct sFun*));
                    it2_233=map$2charphsFunph_at(self,it_227,default_value_230);
                    hash_234=string_get_hash_key(it_227)%size_220;
                    n_235=hash_234;
                    while(_while_condtional21=(_Bool)1,                    _while_condtional21) {
                        if(_if_conditional244=item_existance_223[n_235],                        _if_conditional244) {
                            n_235++;
                            if(_if_conditional245=n_235>=size_220,                            _if_conditional245) {
                                n_235=0;
                            }
                            else {
                                if(_if_conditional246=n_235==hash_234,                                _if_conditional246) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_223[n_235]=(_Bool)1;
                            keys_221[n_235]=it_227;
                            items_222[n_235]=map$2charphsFunph_at(self,it_227,default_value_236);
                            len_224++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_221;
                self->items=items_222;
                self->item_existance=item_existance_223;
                self->size=size_220;
                self->len=len_224;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional236;
char* result_225;
char* __result127__;
_Bool _if_conditional237;
char* __result128__;
char* result_226;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_225, 0, sizeof(char*));
memset(&result_226, 0, sizeof(char*));
                    if(_if_conditional236=self==((void*)0),                    _if_conditional236) {
                        memset(&result_225,0,sizeof(char*));
                        __result127__ = __result_obj__ = result_225;
                        return __result127__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result128__ = __result_obj__ = self->key_list->it->item;
                        return __result128__;
                    }
                    memset(&result_226,0,sizeof(char*));
                    __result129__ = __result_obj__ = result_226;
                    return __result129__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result130__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result130__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional238;
char* result_228;
char* __result131__;
_Bool _if_conditional239;
char* __result132__;
char* result_229;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_228, 0, sizeof(char*));
memset(&result_229, 0, sizeof(char*));
                    if(_if_conditional238=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional238) {
                        memset(&result_228,0,sizeof(char*));
                        __result131__ = __result_obj__ = result_228;
                        return __result131__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result132__ = __result_obj__ = self->key_list->it->item;
                        return __result132__;
                    }
                    memset(&result_229,0,sizeof(char*));
                    __result133__ = __result_obj__ = result_229;
                    return __result133__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_231;
unsigned int it_232;
_Bool _while_condtional20;
_Bool _if_conditional240;
_Bool _if_conditional241;
struct sFun* __result134__;
_Bool _if_conditional242;
_Bool _if_conditional243;
struct sFun* __result135__;
struct sFun* __result136__;
struct sFun* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_231, 0, sizeof(unsigned int));
memset(&it_232, 0, sizeof(unsigned int));
                        hash_231=string_get_hash_key(((char*)key))%self->size;
                        it_232=hash_231;
                        while(_while_condtional20=(_Bool)1,                        _while_condtional20) {
                            if(_if_conditional240=self->item_existance[it_232],                            _if_conditional240) {
                                if(_if_conditional241=string_equals(self->keys[it_232],key),                                _if_conditional241) {
                                    __result134__ = __result_obj__ = self->items[it_232];
                                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result134__;
                                }
                                it_232++;
                                if(_if_conditional242=it_232>=self->size,                                _if_conditional242) {
                                    it_232=0;
                                }
                                else {
                                    if(_if_conditional243=it_232==hash_231,                                    _if_conditional243) {
                                        __result135__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result135__;
                                    }
                                }
                            }
                            else {
                                __result136__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result136__;
                            }
                        }
                        __result137__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result137__;
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_239;
struct list_item$1charp* it_240;
_Bool _while_condtional23;
_Bool _if_conditional250;
struct list$1charp* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_239, 0, sizeof(int));
memset(&it_240, 0, sizeof(struct list_item$1charp*));
                            it2_239=0;
                            it_240=self->head;
                            while(_while_condtional23=it_240!=((void*)0),                            _while_condtional23) {
                                if(_if_conditional250=string_equals(it_240->item,item),                                _if_conditional250) {
                                    list$1charp_delete(self,it2_239,it2_239+1);
                                    break;
                                }
                                it2_239++;
                                it_240=it_240->next;
                            }
                            __result141__ = __result_obj__ = self;
                            return __result141__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
int tmp_241;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
struct list$1charp* __result138__;
_Bool _if_conditional257;
_Bool _if_conditional258;
struct list_item$1charp* it_244;
int i_245;
_Bool _while_condtional25;
_Bool _if_conditional259;
struct list_item$1charp* prev_it_246;
_Bool _if_conditional260;
_Bool _if_conditional261;
struct list_item$1charp* it_247;
int i_248;
_Bool _while_condtional26;
_Bool _if_conditional262;
_Bool _if_conditional263;
struct list_item$1charp* prev_it_249;
struct list_item$1charp* it_250;
struct list_item$1charp* head_prev_it_251;
struct list_item$1charp* tail_it_252;
int i_253;
_Bool _while_condtional27;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
struct list_item$1charp* prev_it_254;
_Bool _if_conditional267;
_Bool _if_conditional268;
struct list$1charp* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_241, 0, sizeof(int));
memset(&it_244, 0, sizeof(struct list_item$1charp*));
memset(&i_245, 0, sizeof(int));
memset(&prev_it_246, 0, sizeof(struct list_item$1charp*));
memset(&it_247, 0, sizeof(struct list_item$1charp*));
memset(&i_248, 0, sizeof(int));
memset(&prev_it_249, 0, sizeof(struct list_item$1charp*));
memset(&it_250, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_251, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_252, 0, sizeof(struct list_item$1charp*));
memset(&i_253, 0, sizeof(int));
memset(&prev_it_254, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional251=head<0,                                        _if_conditional251) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional252=tail<0,                                        _if_conditional252) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional253=head>tail,                                        _if_conditional253) {
                                            tmp_241=tail;
                                            tail=head;
                                            head=tmp_241;
                                        }
                                        if(_if_conditional254=head<0,                                        _if_conditional254) {
                                            head=0;
                                        }
                                        if(_if_conditional255=tail>self->len,                                        _if_conditional255) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional256=head==tail,                                        _if_conditional256) {
                                            __result138__ = __result_obj__ = self;
                                            return __result138__;
                                        }
                                        if(_if_conditional257=head==0&&tail==self->len,                                        _if_conditional257) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional258=head==0,                                            _if_conditional258) {
                                                it_244=self->head;
                                                i_245=0;
                                                while(_while_condtional25=it_244!=((void*)0),                                                _while_condtional25) {
                                                    if(_if_conditional259=i_245<tail,                                                    _if_conditional259) {
                                                        prev_it_246=it_244;
                                                        it_244=it_244->next;
                                                        i_245++;
                                                        come_call_finalizer3(prev_it_246,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional260=i_245==tail,                                                        _if_conditional260) {
                                                            self->head=it_244;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_244=it_244->next;
                                                            i_245++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional261=tail==self->len,                                                _if_conditional261) {
                                                    it_247=self->head;
                                                    i_248=0;
                                                    while(_while_condtional26=it_247!=((void*)0),                                                    _while_condtional26) {
                                                        if(_if_conditional262=i_248==head,                                                        _if_conditional262) {
                                                            self->tail=it_247->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional263=i_248>=head,                                                        _if_conditional263) {
                                                            prev_it_249=it_247;
                                                            it_247=it_247->next;
                                                            i_248++;
                                                            come_call_finalizer3(prev_it_249,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_247=it_247->next;
                                                            i_248++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_250=self->head;
                                                    head_prev_it_251=((void*)0);
                                                    tail_it_252=((void*)0);
                                                    i_253=0;
                                                    while(_while_condtional27=it_250!=((void*)0),                                                    _while_condtional27) {
                                                        if(_if_conditional264=i_253==head,                                                        _if_conditional264) {
                                                            head_prev_it_251=it_250->prev;
                                                        }
                                                        if(_if_conditional265=i_253==tail,                                                        _if_conditional265) {
                                                            tail_it_252=it_250;
                                                        }
                                                        if(_if_conditional266=i_253>=head&&i_253<tail,                                                        _if_conditional266) {
                                                            prev_it_254=it_250;
                                                            it_250=it_250->next;
                                                            i_253++;
                                                            come_call_finalizer3(prev_it_254,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_250=it_250->next;
                                                            i_253++;
                                                        }
                                                    }
                                                    if(_if_conditional267=head_prev_it_251!=((void*)0),                                                    _if_conditional267) {
                                                        head_prev_it_251->next=tail_it_252;
                                                    }
                                                    if(_if_conditional268=tail_it_252!=((void*)0),                                                    _if_conditional268) {
                                                        tail_it_252->prev=head_prev_it_251;
                                                    }
                                                }
                                            }
                                        }
                                        __result140__ = __result_obj__ = self;
                                        return __result140__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_242;
_Bool _while_condtional24;
struct list_item$1charp* prev_it_243;
struct list$1charp* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_242, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_243, 0, sizeof(struct list_item$1charp*));
                                                it_242=self->head;
                                                while(_while_condtional24=it_242!=((void*)0),                                                _while_condtional24) {
                                                    prev_it_243=it_242;
                                                    it_242=it_242->next;
                                                    come_call_finalizer3(prev_it_243,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result139__ = __result_obj__ = self;
                                                return __result139__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional274;
char* result_256;
char* __result142__;
_Bool _if_conditional275;
char* __result143__;
char* result_257;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_256, 0, sizeof(char*));
memset(&result_257, 0, sizeof(char*));
            if(_if_conditional274=self==((void*)0),            _if_conditional274) {
                memset(&result_256,0,sizeof(char*));
                __result142__ = __result_obj__ = result_256;
                return __result142__;
            }
            self->it=self->head;
            if(self->it) {
                __result143__ = __result_obj__ = self->it->item;
                return __result143__;
            }
            memset(&result_257,0,sizeof(char*));
            __result144__ = __result_obj__ = result_257;
            return __result144__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
            __result145__ = self==((void*)0)||self->it==((void*)0);
            return __result145__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional276;
char* result_259;
char* __result146__;
_Bool _if_conditional277;
char* __result147__;
char* result_260;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_259, 0, sizeof(char*));
memset(&result_260, 0, sizeof(char*));
            if(_if_conditional276=self==((void*)0)||self->it==((void*)0),            _if_conditional276) {
                memset(&result_259,0,sizeof(char*));
                __result146__ = __result_obj__ = result_259;
                return __result146__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result147__ = __result_obj__ = self->it->item;
                return __result147__;
            }
            memset(&result_260,0,sizeof(char*));
            __result148__ = __result_obj__ = result_260;
            return __result148__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional280;
void* right_value251;
struct list_item$1charp* litem_261;
_Bool _if_conditional281;
void* right_value252;
struct list_item$1charp* litem_262;
void* right_value253;
struct list_item$1charp* litem_263;
struct list$1charp* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
memset(&litem_261, 0, sizeof(struct list_item$1charp*));
right_value252 = (void*)0;
memset(&litem_262, 0, sizeof(struct list_item$1charp*));
right_value253 = (void*)0;
memset(&litem_263, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional280=self->len==0,                _if_conditional280) {
                    litem_261=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value251=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                    come_call_finalizer3(right_value251,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_261->prev=((void*)0);
                    litem_261->next=((void*)0);
                    litem_261->item=item;
                    self->tail=litem_261;
                    self->head=litem_261;
                }
                else {
                    if(_if_conditional281=self->len==1,                    _if_conditional281) {
                        litem_262=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value252=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                        come_call_finalizer3(right_value252,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_262->prev=self->head;
                        litem_262->next=((void*)0);
                        litem_262->item=item;
                        self->tail=litem_262;
                        self->head->next=litem_262;
                    }
                    else {
                        litem_263=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value253=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                        come_call_finalizer3(right_value253,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_263->prev=self->tail;
                        litem_263->next=((void*)0);
                        litem_263->item=item;
                        self->tail->next=litem_263;
                        self->tail=litem_263;
                    }
                }
                self->len++;
                __result149__ = __result_obj__ = self;
                return __result149__;
}

_Bool output_source_file_v3(struct sInfo* info){
void* __result_obj__;
void* right_value255;
char* output_file_name_264;
struct _IO_FILE* f_265;
void* right_value256;
struct map$2charphsFunph* o2_saved_266;
char* it_267;
void* right_value257;
struct sFun* it2_271;
void* right_value258;
char* header_272;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
struct map$2charphsFunph* o2_saved_277;
char* it_278;
void* right_value259;
struct sFun* it2_279;
void* right_value260;
char* header_280;
_Bool _if_conditional294;
void* right_value261;
char* output_281;
_Bool _if_conditional295;
void* right_value262;
char* output_282;
_Bool _if_conditional296;
_Bool _if_conditional297;
struct map$2charphsFunph* o2_saved_283;
char* it_284;
struct sFun* it2_285;
_Bool _if_conditional298;
void* right_value263;
char* output_286;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
memset(&output_file_name_264, 0, sizeof(char*));
memset(&f_265, 0, sizeof(struct _IO_FILE*));
right_value256 = (void*)0;
memset(&o2_saved_266, 0, sizeof(struct map$2charphsFunph*));
memset(&it_267, 0, sizeof(char*));
right_value257 = (void*)0;
memset(&it2_271, 0, sizeof(struct sFun*));
right_value258 = (void*)0;
memset(&header_272, 0, sizeof(char*));
memset(&o2_saved_277, 0, sizeof(struct map$2charphsFunph*));
memset(&it_278, 0, sizeof(char*));
right_value259 = (void*)0;
memset(&it2_279, 0, sizeof(struct sFun*));
right_value260 = (void*)0;
memset(&header_280, 0, sizeof(char*));
right_value261 = (void*)0;
memset(&output_281, 0, sizeof(char*));
right_value262 = (void*)0;
memset(&output_282, 0, sizeof(char*));
memset(&o2_saved_283, 0, sizeof(struct map$2charphsFunph*));
memset(&it_284, 0, sizeof(char*));
memset(&it2_285, 0, sizeof(struct sFun*));
right_value263 = (void*)0;
memset(&output_286, 0, sizeof(char*));
    output_file_name_264=(char*)come_increment_ref_count(((char*)(right_value255=xsprintf("%s.c",info->sname))));
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    f_265=fopen(output_file_name_264,"w");
    fprintf(f_265,"// source head\n");
    fprintf(f_265,"%s\n",((char*)(right_value256=buffer_to_string(info->module->mSourceHead))));
    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fprintf(f_265,"// header function\n");
    for(    o2_saved_266=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_267=map$2charphsFunph_begin((o2_saved_266));    !map$2charphsFunph_end((o2_saved_266));    it_267=map$2charphsFunph_next((o2_saved_266))    ){
        it2_271=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value257=__builtin_string(it_267))));
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        header_272=(char*)come_increment_ref_count(((char*)(right_value258=header_function(it2_271,info))));
        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional286=it2_271->mStatic&&it2_271->mResultType->mInline,        _if_conditional286) {
        }
        else {
            if(it2_271->mStatic) {
                fprintf(f_265,"static %s",header_272);
            }
            else {
                if(it2_271->mResultType->mInline) {
                }
                else {
                    if(_if_conditional289=string_operator_not_equals(it_267,"__builtin_va_start")&&string_operator_not_equals(it_267,"__builtin_va_end"),                    _if_conditional289) {
                        fprintf(f_265,"%s\n",header_272,it_267);
                    }
                }
            }
        }
        header_272 = come_decrement_ref_count2(header_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_266,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
    fprintf(f_265,"// inline function\n");
    for(    o2_saved_277=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_278=map$2charphsFunph_begin((o2_saved_277));    !map$2charphsFunph_end((o2_saved_277));    it_278=map$2charphsFunph_next((o2_saved_277))    ){
        it2_279=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value259=__builtin_string(it_278))));
        right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        header_280=(char*)come_increment_ref_count(((char*)(right_value260=header_function(it2_279,info))));
        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional294=it2_279->mStatic&&it2_279->mResultType->mInline,        _if_conditional294) {
            output_281=(char*)come_increment_ref_count(((char*)(right_value261=output_function(it2_279,info))));
            right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fprintf(f_265,"static inline %s",output_281);
            output_281 = come_decrement_ref_count2(output_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(it2_279->mResultType->mInline) {
                output_282=(char*)come_increment_ref_count(((char*)(right_value262=output_function(it2_279,info))));
                right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                fprintf(f_265,"static inline %s",output_282);
                output_282 = come_decrement_ref_count2(output_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(it2_279->mStatic) {
                }
                else {
                    if(_if_conditional297=string_operator_not_equals(it_278,"__builtin_va_start")&&string_operator_not_equals(it_278,"__builtin_va_end"),                    _if_conditional297) {
                    }
                }
            }
        }
        header_280 = come_decrement_ref_count2(header_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_277,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
    fprintf(f_265,"\n");
    fprintf(f_265,"// body function\n");
    for(    o2_saved_283=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_284=map$2charphsFunph_begin((o2_saved_283));    !map$2charphsFunph_end((o2_saved_283));    it_284=map$2charphsFunph_next((o2_saved_283))    ){
        it2_285=map$2charphsFunphp_operator_load_element(info->funcs,it_284);
        if(_if_conditional298=!it2_285->mExternal,        _if_conditional298) {
            output_286=(char*)come_increment_ref_count(((char*)(right_value263=output_function(it2_285,info))));
            right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional299=it2_285->mStatic&&it2_285->mResultType->mInline,            _if_conditional299) {
            }
            else {
                if(it2_285->mStatic) {
                    fprintf(f_265,"static %s",output_286);
                }
                else {
                    if(it2_285->mResultType->mInline) {
                    }
                    else {
                        fprintf(f_265,"%s",output_286);
                    }
                }
            }
            fprintf(f_265,"\n");
            output_286 = come_decrement_ref_count2(output_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer3(o2_saved_283,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
    fclose(f_265);
    __result156__ = (_Bool)1;
    output_file_name_264 = come_decrement_ref_count2(output_file_name_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result156__;
    output_file_name_264 = come_decrement_ref_count2(output_file_name_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_268;
unsigned int hash_269;
unsigned int it_270;
_Bool _while_condtional28;
_Bool _if_conditional282;
_Bool _if_conditional283;
struct sFun* __result152__;
_Bool _if_conditional284;
_Bool _if_conditional285;
struct sFun* __result153__;
struct sFun* __result154__;
struct sFun* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_268, 0, sizeof(struct sFun*));
memset(&hash_269, 0, sizeof(unsigned int));
memset(&it_270, 0, sizeof(unsigned int));
            memset(&default_value_268,0,sizeof(struct sFun*));
            hash_269=string_get_hash_key(((char*)key))%self->size;
            it_270=hash_269;
            while(_while_condtional28=(_Bool)1,            _while_condtional28) {
                if(_if_conditional282=self->item_existance[it_270],                _if_conditional282) {
                    if(_if_conditional283=string_equals(self->keys[it_270],key),                    _if_conditional283) {
                        __result152__ = __result_obj__ = self->items[it_270];
                        come_call_finalizer3(default_value_268,sFun_finalize, 0, 0, 0, 0, (void*)0);
                        return __result152__;
                    }
                    it_270++;
                    if(_if_conditional284=it_270>=self->size,                    _if_conditional284) {
                        it_270=0;
                    }
                    else {
                        if(_if_conditional285=it_270==hash_269,                        _if_conditional285) {
                            __result153__ = __result_obj__ = default_value_268;
                            come_call_finalizer3(default_value_268,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result153__;
                        }
                    }
                }
                else {
                    __result154__ = __result_obj__ = default_value_268;
                    come_call_finalizer3(default_value_268,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result154__;
                }
            }
            __result155__ = __result_obj__ = default_value_268;
            come_call_finalizer3(default_value_268,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result155__;
            come_call_finalizer3(default_value_268,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_273;
_Bool _if_conditional290;
_Bool _if_conditional291;
int i_274;
_Bool _if_conditional292;
_Bool _if_conditional293;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_273, 0, sizeof(int));
memset(&i_274, 0, sizeof(int));
        for(        i_273=0;        i_273<self->size;        i_273++        ){
            if(_if_conditional290=self->item_existance[i_273],            _if_conditional290) {
                if(_if_conditional291=1,                _if_conditional291) {
                    come_call_finalizer3(self->items[i_273],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->items);
        for(        i_274=0;        i_274<self->size;        i_274++        ){
            if(_if_conditional292=self->item_existance[i_274],            _if_conditional292) {
                if(_if_conditional293=1,                _if_conditional293) {
                    self->keys[i_274] = come_decrement_ref_count2(self->keys[i_274], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->keys);
        come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_275;
_Bool _while_condtional29;
struct list_item$1charp* prev_it_276;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_275, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_276, 0, sizeof(struct list_item$1charp*));
            it_275=self->head;
            while(_while_condtional29=it_275!=((void*)0),            _while_condtional29) {
                prev_it_276=it_275;
                it_275=it_275->next;
                come_call_finalizer3(prev_it_276,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

_Bool output_header_file(struct sInfo* info){
void* __result_obj__;
char* output_file_name_287;
struct _IO_FILE* f_288;
_Bool _if_conditional302;
void* right_value264;
_Bool _if_conditional303;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&output_file_name_287, 0, sizeof(char*));
memset(&f_288, 0, sizeof(struct _IO_FILE*));
right_value264 = (void*)0;
    output_file_name_287=(char*)come_increment_ref_count(info->output_file_name);
    f_288=fopen(output_file_name_287,"a");
    if(_if_conditional302=string_operator_equals(info->output_file_name,"common.h"),    _if_conditional302) {
        fprintf(f_288,"#ifndef __COMMON_H__\n");
        fprintf(f_288,"#define __COMMON_H__\n");
        fprintf(f_288,"#include <neo-c.h>\n");
    }
    fprintf(f_288,"%s\n",((char*)(right_value264=buffer_to_string(info->module->mHeader))));
    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fprintf(f_288,"\n");
    if(_if_conditional303=string_operator_equals(info->output_file_name,"common.h"),    _if_conditional303) {
        fprintf(f_288,"#endif\n");
    }
    fclose(f_288);
    __result157__ = (_Bool)1;
    output_file_name_287 = come_decrement_ref_count2(output_file_name_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result157__;
    output_file_name_287 = come_decrement_ref_count2(output_file_name_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool _if_conditional304;
char* msg2_289;
va_list args_290;
int len_291;
_Bool _if_conditional305;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_289, 0, sizeof(char*));
memset(&args_290, 0, sizeof(va_list));
memset(&len_291, 0, sizeof(int));
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_290,code);
    len_291=vasprintf(&msg2_289,code,args_290);
    __builtin_va_end(args_290);
    if(info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead,msg2_289);
    }
    free(msg2_289);
    come_call_finalizer3((&args_290),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool _if_conditional306;
char* msg2_292;
va_list args_293;
int len_294;
_Bool _if_conditional307;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_292, 0, sizeof(char*));
memset(&args_293, 0, sizeof(va_list));
memset(&len_294, 0, sizeof(int));
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_293,code);
    len_294=vasprintf(&msg2_292,code,args_293);
    __builtin_va_end(args_293);
    if(info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead2,msg2_292);
    }
    free(msg2_292);
    come_call_finalizer3((&args_293),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void add_last_code_to_source(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional308;
_Bool _if_conditional309;
char* __dec_obj46;
_Bool _if_conditional310;
char* __dec_obj47;
_Bool _if_conditional311;
char* __dec_obj48;
memset(&__result_obj__, 0, sizeof(void*));
    if(info->no_output_come_code) {
        return;
    }
    if(info->module->mLastCode) {
        add_come_code(info,"%s",info->module->mLastCode);
        __dec_obj46=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(info->module->mLastCode2) {
        add_come_code(info,"%s",info->module->mLastCode2);
        __dec_obj47=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(info->module->mLastCode3) {
        add_come_code(info,"%s",info->module->mLastCode3);
        __dec_obj48=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional312;
_Bool _if_conditional313;
void* right_value265;
char* __dec_obj49;
_Bool _if_conditional314;
void* right_value266;
char* __dec_obj50;
_Bool _if_conditional315;
void* right_value267;
char* __dec_obj51;
memset(&__result_obj__, 0, sizeof(void*));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    if(info->module->mLastCode) {
        add_come_code(info,"%s ,",((char*)(right_value265=string_substring(info->module->mLastCode,0,-3))));
        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj49=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(info->module->mLastCode2) {
        add_come_code(info,"%s ,",((char*)(right_value266=string_substring(info->module->mLastCode2,0,-3))));
        right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj50=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(info->module->mLastCode3) {
        add_come_code(info,"%s ,",((char*)(right_value267=string_substring(info->module->mLastCode3,0,-3))));
        right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj51=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional316;
char* msg2_295;
va_list args_296;
int len_297;
void* right_value268;
char* __dec_obj52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_295, 0, sizeof(char*));
memset(&args_296, 0, sizeof(va_list));
memset(&len_297, 0, sizeof(int));
right_value268 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_296,msg);
    len_297=vasprintf(&msg2_295,msg,args_296);
    __builtin_va_end(args_296);
    __dec_obj52=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(((char*)(right_value268=xsprintf("%s",msg2_295))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(msg2_295);
    come_call_finalizer3((&args_296),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional317;
char* msg2_298;
va_list args_299;
int len_300;
void* right_value269;
char* __dec_obj53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_298, 0, sizeof(char*));
memset(&args_299, 0, sizeof(va_list));
memset(&len_300, 0, sizeof(int));
right_value269 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_299,msg);
    len_300=vasprintf(&msg2_298,msg,args_299);
    __builtin_va_end(args_299);
    __dec_obj53=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(((char*)(right_value269=xsprintf("%s",msg2_298))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(msg2_298);
    come_call_finalizer3((&args_299),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void add_come_last_code3(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional318;
char* msg2_301;
va_list args_302;
int len_303;
void* right_value270;
char* __dec_obj54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_301, 0, sizeof(char*));
memset(&args_302, 0, sizeof(va_list));
memset(&len_303, 0, sizeof(int));
right_value270 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_302,msg);
    len_303=vasprintf(&msg2_301,msg,args_302);
    __builtin_va_end(args_302);
    __dec_obj54=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(((char*)(right_value270=xsprintf("%s",msg2_301))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(msg2_301);
    come_call_finalizer3((&args_302),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

void dec_stack_ptr(int value, struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    list$1CVALUEph_delete(info->stack,-value,-1);
}

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
int tmp_304;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
struct list$1CVALUEph* __result158__;
_Bool _if_conditional325;
_Bool _if_conditional327;
struct list_item$1CVALUEph* it_307;
int i_308;
_Bool _while_condtional31;
_Bool _if_conditional328;
struct list_item$1CVALUEph* prev_it_309;
_Bool _if_conditional329;
_Bool _if_conditional330;
struct list_item$1CVALUEph* it_310;
int i_311;
_Bool _while_condtional32;
_Bool _if_conditional331;
_Bool _if_conditional332;
struct list_item$1CVALUEph* prev_it_312;
struct list_item$1CVALUEph* it_313;
struct list_item$1CVALUEph* head_prev_it_314;
struct list_item$1CVALUEph* tail_it_315;
int i_316;
_Bool _while_condtional33;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool _if_conditional335;
struct list_item$1CVALUEph* prev_it_317;
_Bool _if_conditional336;
_Bool _if_conditional337;
struct list$1CVALUEph* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_304, 0, sizeof(int));
memset(&it_307, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_308, 0, sizeof(int));
memset(&prev_it_309, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_310, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_311, 0, sizeof(int));
memset(&prev_it_312, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_313, 0, sizeof(struct list_item$1CVALUEph*));
memset(&head_prev_it_314, 0, sizeof(struct list_item$1CVALUEph*));
memset(&tail_it_315, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_316, 0, sizeof(int));
memset(&prev_it_317, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional319=head<0,        _if_conditional319) {
            head+=self->len;
        }
        if(_if_conditional320=tail<0,        _if_conditional320) {
            tail+=self->len+1;
        }
        if(_if_conditional321=head>tail,        _if_conditional321) {
            tmp_304=tail;
            tail=head;
            head=tmp_304;
        }
        if(_if_conditional322=head<0,        _if_conditional322) {
            head=0;
        }
        if(_if_conditional323=tail>self->len,        _if_conditional323) {
            tail=self->len;
        }
        if(_if_conditional324=head==tail,        _if_conditional324) {
            __result158__ = __result_obj__ = self;
            return __result158__;
        }
        if(_if_conditional325=head==0&&tail==self->len,        _if_conditional325) {
            list$1CVALUEph_reset(self);
        }
        else {
            if(_if_conditional327=head==0,            _if_conditional327) {
                it_307=self->head;
                i_308=0;
                while(_while_condtional31=it_307!=((void*)0),                _while_condtional31) {
                    if(_if_conditional328=i_308<tail,                    _if_conditional328) {
                        prev_it_309=it_307;
                        it_307=it_307->next;
                        i_308++;
                        come_call_finalizer3(prev_it_309,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        if(_if_conditional329=i_308==tail,                        _if_conditional329) {
                            self->head=it_307;
                            self->head->prev=((void*)0);
                            break;
                        }
                        else {
                            it_307=it_307->next;
                            i_308++;
                        }
                    }
                }
            }
            else {
                if(_if_conditional330=tail==self->len,                _if_conditional330) {
                    it_310=self->head;
                    i_311=0;
                    while(_while_condtional32=it_310!=((void*)0),                    _while_condtional32) {
                        if(_if_conditional331=i_311==head,                        _if_conditional331) {
                            self->tail=it_310->prev;
                            self->tail->next=((void*)0);
                        }
                        if(_if_conditional332=i_311>=head,                        _if_conditional332) {
                            prev_it_312=it_310;
                            it_310=it_310->next;
                            i_311++;
                            come_call_finalizer3(prev_it_312,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_310=it_310->next;
                            i_311++;
                        }
                    }
                }
                else {
                    it_313=self->head;
                    head_prev_it_314=((void*)0);
                    tail_it_315=((void*)0);
                    i_316=0;
                    while(_while_condtional33=it_313!=((void*)0),                    _while_condtional33) {
                        if(_if_conditional333=i_316==head,                        _if_conditional333) {
                            head_prev_it_314=it_313->prev;
                        }
                        if(_if_conditional334=i_316==tail,                        _if_conditional334) {
                            tail_it_315=it_313;
                        }
                        if(_if_conditional335=i_316>=head&&i_316<tail,                        _if_conditional335) {
                            prev_it_317=it_313;
                            it_313=it_313->next;
                            i_316++;
                            come_call_finalizer3(prev_it_317,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_313=it_313->next;
                            i_316++;
                        }
                    }
                    if(_if_conditional336=head_prev_it_314!=((void*)0),                    _if_conditional336) {
                        head_prev_it_314->next=tail_it_315;
                    }
                    if(_if_conditional337=tail_it_315!=((void*)0),                    _if_conditional337) {
                        tail_it_315->prev=head_prev_it_314;
                    }
                }
            }
        }
        __result160__ = __result_obj__ = self;
        return __result160__;
}

static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_305;
_Bool _while_condtional30;
struct list_item$1CVALUEph* prev_it_306;
struct list$1CVALUEph* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_305, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_306, 0, sizeof(struct list_item$1CVALUEph*));
                it_305=self->head;
                while(_while_condtional30=it_305!=((void*)0),                _while_condtional30) {
                    prev_it_306=it_305;
                    it_305=it_305->next;
                    come_call_finalizer3(prev_it_306,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result159__ = __result_obj__ = self;
                return __result159__;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional326;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional326=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional326) {
                            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
void* __result_obj__;
char* __dec_obj55;
void* right_value274;
struct CVALUE* result_322;
_Bool _if_conditional344;
struct CVALUE* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
memset(&result_322, 0, sizeof(struct CVALUE*));
    __dec_obj55=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_322=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value274=CVALUE_clone(((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(info->stack,offset), "03output_code.c", 1001, 11))))));
    come_call_finalizer3(right_value274,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional344=result_322==((void*)0),    _if_conditional344) {
        err_msg(info,"invalid stack value");
        exit(2);
    }
    __result165__ = __result_obj__ = result_322;
    come_call_finalizer3(result_322,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result165__;
    come_call_finalizer3(result_322,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional338;
struct list_item$1CVALUEph* it_318;
int i_319;
_Bool _while_condtional34;
_Bool _if_conditional339;
struct CVALUE* __result161__;
struct CVALUE* default_value_320;
struct CVALUE* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_318, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_319, 0, sizeof(int));
memset(&default_value_320, 0, sizeof(struct CVALUE*));
        if(_if_conditional338=position<0,        _if_conditional338) {
            position+=self->len;
        }
        it_318=self->head;
        i_319=0;
        while(_while_condtional34=it_318!=((void*)0),        _while_condtional34) {
            if(_if_conditional339=position==i_319,            _if_conditional339) {
                __result161__ = __result_obj__ = it_318->item;
                return __result161__;
            }
            it_318=it_318->next;
            i_319++;
        }
        memset(&default_value_320,0,sizeof(struct CVALUE*));
        __result162__ = __result_obj__ = default_value_320;
        come_call_finalizer3(default_value_320,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result162__;
        come_call_finalizer3(default_value_320,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional340;
struct CVALUE* __result163__;
void* right_value271;
struct CVALUE* result_321;
_Bool _if_conditional341;
void* right_value272;
char* __dec_obj56;
_Bool _if_conditional342;
void* right_value273;
struct sType* __dec_obj57;
_Bool _if_conditional343;
struct CVALUE* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
right_value271 = (void*)0;
memset(&result_321, 0, sizeof(struct CVALUE*));
right_value272 = (void*)0;
right_value273 = (void*)0;
        if(_if_conditional340=self==(void*)0,        _if_conditional340) {
            __result163__ = __result_obj__ = (void*)0;
            return __result163__;
        }
        result_321=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value271=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
        come_call_finalizer3(right_value271,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional341=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional341) {
            __dec_obj56=result_321->c_value;
            result_321->c_value=(char*)come_increment_ref_count(((char*)(right_value272=string_clone(self->c_value))));
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional342=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional342) {
            __dec_obj57=result_321->type;
            result_321->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_clone(self->type))));
            come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value273,sType_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional343=self!=((void*)0),        _if_conditional343) {
            result_321->var=self->var;
        }
        __result164__ = __result_obj__ = result_321;
        come_call_finalizer3(result_321,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result164__;
        come_call_finalizer3(result_321,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

void transpiler_clear_last_code(struct sInfo* info){
void* __result_obj__;
char* __dec_obj58;
char* __dec_obj59;
char* __dec_obj60;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj58=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj59=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj60=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
}

