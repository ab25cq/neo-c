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
struct sLambdaNode
{
    int sline;
    char* sname;
    struct sFun* mFun;
};
struct sFunNode
{
    int sline;
    char* sname;
    struct sFun* mFun;
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

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

char* backtrace_parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

struct sNode* expression_v5(struct sInfo* info);

struct sNode* statment(struct sInfo* info);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

struct sNode* expression_node_v97(struct sInfo* info);

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

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);

_Bool sLambdaNode_terminated(struct sLambdaNode* self);

char* sLambdaNode_kind(struct sLambdaNode* self);

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);

static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void CVALUE_finalize(struct CVALUE* self);
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
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);

_Bool sFunNode_terminated(struct sFunNode* self);

char* sFunNode_kind(struct sFunNode* self);

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);

static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);

static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);

static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
void arrange_stack(struct sInfo* info, int top);

int expected_next_character(char c, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool strmemcmp(char* p, char* p2);

char* parse_attribute(struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

int transpile_v5(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
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
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool is_type_name(char* buf, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);

struct sNode* parse_function(struct sInfo* info);

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void sLambdaNode_finalize(struct sLambdaNode* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static void sFunNode_finalize(struct sFunNode* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
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










struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
char* __dec_obj12;
struct sLambdaNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    self->mFun=fun;
    self->sline=info->sline;
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result58__ = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result58__;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sLambdaNode_terminated(struct sLambdaNode* self){
void* __result_obj__;
_Bool __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    __result59__ = (_Bool)0;
    return __result59__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__;
void* right_value79;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    __result60__ = __result_obj__ = ((char*)(right_value79=__builtin_string("sLambdaNode")));
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result60__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* come_fun_47;
void* right_value80;
void* right_value81;
struct sType* result_type_48;
void* right_value82;
void* right_value83;
_Bool _if_conditional37;
void* right_value84;
struct CVALUE* come_value_55;
void* right_value85;
char* __dec_obj13;
void* right_value121;
struct sType* __dec_obj37;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_47, 0, sizeof(struct sFun*));
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&result_type_48, 0, sizeof(struct sType*));
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&come_value_55, 0, sizeof(struct CVALUE*));
right_value85 = (void*)0;
right_value121 = (void*)0;
    come_fun_47=info->come_fun;
    info->come_fun=self->mFun;
    result_type_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value80=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 29, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer3(right_value80,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value81,sType_finalize, 0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value82=make_define_var(result_type_48,"__result_obj__",(_Bool)0,info))));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value83=make_type_name_string(result_type_48,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
    }
    come_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value84=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 38, "CVALUE"))));
    come_call_finalizer3(right_value84,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj13=come_value_55->c_value;
    come_value_55->c_value=(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("%s",self->mFun->mName))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj37=come_value_55->type;
    come_value_55->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(self->mFun->mLambdaType))));
    come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value121,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_55->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_55->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_55));
    info->come_fun=come_fun_47;
    __result80__ = (_Bool)1;
    come_call_finalizer3(result_type_48,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_55,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result80__;
    come_call_finalizer3(result_type_48,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_55,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional20;
_Bool _if_conditional22;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional20=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional20) {
            come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional22=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional22) {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional24=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional24) {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional25=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional25) {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional26=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional26) {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional27=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional27) {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional29=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional29) {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional30=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional30) {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional32=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional32) {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional33=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional33) {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional34=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional34) {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional35=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional35) {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional36=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional36) {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_49;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_49, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_50, 0, sizeof(struct list_item$1sTypeph*));
                it_49=self->head;
                while(_while_condtional7=it_49!=((void*)0),                _while_condtional7) {
                    prev_it_50=it_49;
                    it_49=it_49->next;
                    come_call_finalizer3(prev_it_50,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional21) {
                            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional23=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional23) {
                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_51;
_Bool _while_condtional8;
struct list_item$1sNodeph* prev_it_52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_51, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_52, 0, sizeof(struct list_item$1sNodeph*));
                it_51=self->head;
                while(_while_condtional8=it_51!=((void*)0),                _while_condtional8) {
                    prev_it_52=it_51;
                    it_51=it_51->next;
                    come_call_finalizer3(prev_it_52,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional28=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional28) {
                            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_53;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_53, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_54, 0, sizeof(struct list_item$1charph*));
                it_53=self->head;
                while(_while_condtional9=it_53!=((void*)0),                _while_condtional9) {
                    prev_it_54=it_53;
                    it_53=it_53->next;
                    come_call_finalizer3(prev_it_54,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional31) {
                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional38;
_Bool _if_conditional39;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional38=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional38) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional39=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional39) {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional40;
struct sType* __result61__;
void* right_value86;
struct sType* result_56;
_Bool _if_conditional41;
_Bool _if_conditional42;
void* right_value93;
struct list$1sTypeph* __dec_obj17;
_Bool _if_conditional46;
void* right_value96;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional50;
void* right_value97;
struct tuple1$1sTypeph* __dec_obj20;
_Bool _if_conditional51;
void* right_value98;
char* __dec_obj21;
_Bool _if_conditional52;
void* right_value99;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional53;
void* right_value107;
struct list$1sNodeph* __dec_obj26;
_Bool _if_conditional66;
_Bool _if_conditional67;
void* right_value108;
struct list$1sTypeph* __dec_obj27;
_Bool _if_conditional68;
void* right_value115;
struct list$1charph* __dec_obj31;
_Bool _if_conditional72;
void* right_value116;
struct tuple1$1sTypeph* __dec_obj32;
_Bool _if_conditional73;
_Bool _if_conditional74;
void* right_value117;
struct sNode* __dec_obj33;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
void* right_value118;
struct sNode* __dec_obj34;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
void* right_value119;
char* __dec_obj35;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value120;
char* __dec_obj36;
_Bool _if_conditional113;
struct sType* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&result_56, 0, sizeof(struct sType*));
right_value93 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
        if(_if_conditional40=self==(void*)0,        _if_conditional40) {
            __result61__ = __result_obj__ = (void*)0;
            return __result61__;
        }
        result_56=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value86,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional41=self!=((void*)0),        _if_conditional41) {
            result_56->mClass=self->mClass;
        }
        if(_if_conditional42=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional42) {
            __dec_obj17=result_56->mMultipleTypes;
            result_56->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value93=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj17,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value93,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional46=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional46) {
            __dec_obj19=result_56->mNoSolvedGenericsType;
            result_56->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value96=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value96,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional50=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional50) {
            __dec_obj20=result_56->mOriginalLoadVarType;
            result_56->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value97=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj20,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value97,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional51=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional51) {
            __dec_obj21=result_56->mGenericsName;
            result_56->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value98=string_clone(self->mGenericsName))));
            __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional52=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional52) {
            __dec_obj22=result_56->mGenericsTypes;
            result_56->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value99=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj22,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value99,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional53=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional53) {
            __dec_obj26=result_56->mArrayNum;
            result_56->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value107=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj26,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value107,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_56->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional67=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional67) {
            __dec_obj27=result_56->mParamTypes;
            result_56->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value108=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value108,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional68=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional68) {
            __dec_obj31=result_56->mParamNames;
            result_56->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value115=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj31,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value115,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional72=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional72) {
            __dec_obj32=result_56->mResultType;
            result_56->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value116=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj32,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value116,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_56->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional74=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional74) {
            __dec_obj33=result_56->mAlignas;
            result_56->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=sNode_clone(self->mAlignas))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_56->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_56->mShort=self->mShort;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_56->mLong=self->mLong;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_56->mLongLong=self->mLongLong;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_56->mConstant=self->mConstant;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_56->mRegister=self->mRegister;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_56->mVolatile=self->mVolatile;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_56->mStatic=self->mStatic;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_56->mRecord=self->mRecord;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_56->mExtern=self->mExtern;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_56->mRestrict=self->mRestrict;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_56->mImmutable=self->mImmutable;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_56->mHeap=self->mHeap;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_56->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_56->mDelegate=self->mDelegate;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_56->mShare=self->mShare;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_56->mClone=self->mClone;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_56->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_56->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_56->mRefference=self->mRefference;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_56->mException=self->mException;
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            result_56->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            result_56->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            result_56->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional99=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional99) {
            __dec_obj34=result_56->mSizeNum;
            result_56->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=sNode_clone(self->mSizeNum))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value118) { right_value118 = come_decrement_ref_count2(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            result_56->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            result_56->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional102=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional102) {
            __dec_obj35=result_56->mOriginalTypeName;
            result_56->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value119=string_clone(self->mOriginalTypeName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            result_56->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            result_56->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            result_56->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            result_56->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            result_56->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            result_56->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            result_56->mInline=self->mInline;
        }
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            result_56->mNullValue=self->mNullValue;
        }
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            result_56->mGuardValue=self->mGuardValue;
        }
        if(_if_conditional112=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional112) {
            __dec_obj36=result_56->mAsmName;
            result_56->mAsmName=(char*)come_increment_ref_count(((char*)(right_value120=string_clone(self->mAsmName))));
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            result_56->mArrayPointerType=self->mArrayPointerType;
        }
        __result78__ = __result_obj__ = result_56;
        come_call_finalizer3(result_56,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result78__;
        come_call_finalizer3(result_56,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct list$1sTypeph* __result62__;
void* right_value87;
void* right_value88;
struct list$1sTypeph* result_57;
struct list_item$1sTypeph* it_58;
_Bool _while_condtional10;
void* right_value92;
struct list$1sTypeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
right_value88 = (void*)0;
memset(&result_57, 0, sizeof(struct list$1sTypeph*));
memset(&it_58, 0, sizeof(struct list_item$1sTypeph*));
right_value92 = (void*)0;
                if(_if_conditional43=self==((void*)0),                _if_conditional43) {
                    __result62__ = __result_obj__ = ((void*)0);
                    return __result62__;
                }
                result_57=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value88=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value87=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value87,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value88,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_58=self->head;
                while(_while_condtional10=it_58!=((void*)0),                _while_condtional10) {
                    list$1sTypeph_add(result_57,(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_clone(it_58->item)))));
                    come_call_finalizer3(right_value92,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    it_58=it_58->next;
                }
                __result65__ = __result_obj__ = result_57;
                come_call_finalizer3(result_57,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result65__;
                come_call_finalizer3(result_57,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result63__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result63__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional44;
void* right_value89;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj14;
_Bool _if_conditional45;
void* right_value90;
struct list_item$1sTypeph* litem_60;
struct sType* __dec_obj15;
void* right_value91;
struct list_item$1sTypeph* litem_61;
struct sType* __dec_obj16;
struct list$1sTypeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*));
right_value90 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1sTypeph*));
right_value91 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional44=self->len==0,                        _if_conditional44) {
                            litem_59=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value89=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value89,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_59->prev=((void*)0);
                            litem_59->next=((void*)0);
                            __dec_obj14=litem_59->item;
                            litem_59->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_59;
                            self->head=litem_59;
                        }
                        else {
                            if(_if_conditional45=self->len==1,                            _if_conditional45) {
                                litem_60=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value90=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value90,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_60->prev=self->head;
                                litem_60->next=((void*)0);
                                __dec_obj15=litem_60->item;
                                litem_60->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_60;
                                self->head->next=litem_60;
                            }
                            else {
                                litem_61=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value91=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value91,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_61->prev=self->tail;
                                litem_61->next=((void*)0);
                                __dec_obj16=litem_61->item;
                                litem_61->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_61;
                                self->tail=litem_61;
                            }
                        }
                        self->len++;
                        __result64__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result64__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_62;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_63;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_62, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_63, 0, sizeof(struct list_item$1sTypeph*));
                it_62=self->head;
                while(_while_condtional11=it_62!=((void*)0),                _while_condtional11) {
                    prev_it_63=it_62;
                    it_62=it_62->next;
                    come_call_finalizer3(prev_it_63,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional47;
struct tuple1$1sTypeph* __result66__;
void* right_value94;
struct tuple1$1sTypeph* result_64;
_Bool _if_conditional49;
void* right_value95;
struct sType* __dec_obj18;
struct tuple1$1sTypeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
memset(&result_64, 0, sizeof(struct tuple1$1sTypeph*));
right_value95 = (void*)0;
                if(_if_conditional47=self==(void*)0,                _if_conditional47) {
                    __result66__ = __result_obj__ = (void*)0;
                    return __result66__;
                }
                result_64=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value94=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value94,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional49=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional49) {
                    __dec_obj18=result_64->v1;
                    result_64->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value95,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result67__ = __result_obj__ = result_64;
                come_call_finalizer3(result_64,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result67__;
                come_call_finalizer3(result_64,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional48;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional48=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional48) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional54;
struct list$1sNodeph* __result68__;
void* right_value100;
void* right_value101;
struct list$1sNodeph* result_65;
struct list_item$1sNodeph* it_66;
_Bool _while_condtional12;
void* right_value106;
struct list$1sNodeph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
right_value101 = (void*)0;
memset(&result_65, 0, sizeof(struct list$1sNodeph*));
memset(&it_66, 0, sizeof(struct list_item$1sNodeph*));
right_value106 = (void*)0;
                if(_if_conditional54=self==((void*)0),                _if_conditional54) {
                    __result68__ = __result_obj__ = ((void*)0);
                    return __result68__;
                }
                result_65=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value101=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value100=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value100,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value101,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_66=self->head;
                while(_while_condtional12=it_66!=((void*)0),                _while_condtional12) {
                    list$1sNodeph_add(result_65,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value106=sNode_clone(it_66->item)))));
                    if(right_value106) { right_value106 = come_decrement_ref_count2(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_66=it_66->next;
                }
                __result73__ = __result_obj__ = result_65;
                come_call_finalizer3(result_65,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result73__;
                come_call_finalizer3(result_65,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result69__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result69__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional55;
void* right_value102;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj23;
_Bool _if_conditional56;
void* right_value103;
struct list_item$1sNodeph* litem_68;
struct sNode* __dec_obj24;
void* right_value104;
struct list_item$1sNodeph* litem_69;
struct sNode* __dec_obj25;
struct list$1sNodeph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
right_value103 = (void*)0;
memset(&litem_68, 0, sizeof(struct list_item$1sNodeph*));
right_value104 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional55=self->len==0,                        _if_conditional55) {
                            litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value102=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value102,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_67->prev=((void*)0);
                            litem_67->next=((void*)0);
                            __dec_obj23=litem_67->item;
                            litem_67->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_67;
                            self->head=litem_67;
                        }
                        else {
                            if(_if_conditional56=self->len==1,                            _if_conditional56) {
                                litem_68=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value103=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value103,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_68->prev=self->head;
                                litem_68->next=((void*)0);
                                __dec_obj24=litem_68->item;
                                litem_68->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_68;
                                self->head->next=litem_68;
                            }
                            else {
                                litem_69=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value104=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value104,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_69->prev=self->tail;
                                litem_69->next=((void*)0);
                                __dec_obj25=litem_69->item;
                                litem_69->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_69;
                                self->tail=litem_69;
                            }
                        }
                        self->len++;
                        __result70__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result70__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional57;
struct sNode* __result71__;
void* right_value105;
struct sNode* result_70;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
struct sNode* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
memset(&result_70, 0, sizeof(struct sNode*));
                        if(_if_conditional57=self==(void*)0,                        _if_conditional57) {
                            __result71__ = __result_obj__ = (void*)0;
                            return __result71__;
                        }
                        result_70=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value105=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value105) { right_value105 = come_decrement_ref_count2(right_value105, ((struct sNode*)right_value105)->finalize, ((struct sNode*)right_value105)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional58=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional58) {
                            result_70->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional59=self!=((void*)0),                        _if_conditional59) {
                            result_70->finalize=self->finalize;
                        }
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            result_70->clone=self->clone;
                        }
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            result_70->compile=self->compile;
                        }
                        if(_if_conditional62=self!=((void*)0),                        _if_conditional62) {
                            result_70->sline=self->sline;
                        }
                        if(_if_conditional63=self!=((void*)0),                        _if_conditional63) {
                            result_70->sname=self->sname;
                        }
                        if(_if_conditional64=self!=((void*)0),                        _if_conditional64) {
                            result_70->terminated=self->terminated;
                        }
                        if(_if_conditional65=self!=((void*)0),                        _if_conditional65) {
                            result_70->kind=self->kind;
                        }
                        __result72__ = __result_obj__ = result_70;
                        if(result_70) { result_70 = come_decrement_ref_count2(result_70, ((struct sNode*)result_70)->finalize, ((struct sNode*)result_70)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result72__;
                        if(result_70) { result_70 = come_decrement_ref_count2(result_70, ((struct sNode*)result_70)->finalize, ((struct sNode*)result_70)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_71;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_71, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_72, 0, sizeof(struct list_item$1sNodeph*));
                it_71=self->head;
                while(_while_condtional13=it_71!=((void*)0),                _while_condtional13) {
                    prev_it_72=it_71;
                    it_71=it_71->next;
                    come_call_finalizer3(prev_it_72,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional69;
struct list$1charph* __result74__;
void* right_value109;
void* right_value110;
struct list$1charph* result_73;
struct list_item$1charph* it_74;
_Bool _while_condtional14;
void* right_value114;
struct list$1charph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&result_73, 0, sizeof(struct list$1charph*));
memset(&it_74, 0, sizeof(struct list_item$1charph*));
right_value114 = (void*)0;
                if(_if_conditional69=self==((void*)0),                _if_conditional69) {
                    __result74__ = __result_obj__ = ((void*)0);
                    return __result74__;
                }
                result_73=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                come_call_finalizer3(right_value109,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value110,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_74=self->head;
                while(_while_condtional14=it_74!=((void*)0),                _while_condtional14) {
                    list$1charph_add(result_73,(char*)come_increment_ref_count(((char*)(right_value114=string_clone(it_74->item)))));
                    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_74=it_74->next;
                }
                __result77__ = __result_obj__ = result_73;
                come_call_finalizer3(result_73,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result77__;
                come_call_finalizer3(result_73,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result75__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result75__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional70;
void* right_value111;
struct list_item$1charph* litem_75;
char* __dec_obj28;
_Bool _if_conditional71;
void* right_value112;
struct list_item$1charph* litem_76;
char* __dec_obj29;
void* right_value113;
struct list_item$1charph* litem_77;
char* __dec_obj30;
struct list$1charph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value111 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1charph*));
right_value112 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1charph*));
right_value113 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional70=self->len==0,                        _if_conditional70) {
                            litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value111=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                            come_call_finalizer3(right_value111,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_75->prev=((void*)0);
                            litem_75->next=((void*)0);
                            __dec_obj28=litem_75->item;
                            litem_75->item=(char*)come_increment_ref_count(item);
                            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_75;
                            self->head=litem_75;
                        }
                        else {
                            if(_if_conditional71=self->len==1,                            _if_conditional71) {
                                litem_76=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value112=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                come_call_finalizer3(right_value112,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_76->prev=self->head;
                                litem_76->next=((void*)0);
                                __dec_obj29=litem_76->item;
                                litem_76->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_76;
                                self->head->next=litem_76;
                            }
                            else {
                                litem_77=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value113=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                come_call_finalizer3(right_value113,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_77->prev=self->tail;
                                litem_77->next=((void*)0);
                                __dec_obj30=litem_77->item;
                                litem_77->item=(char*)come_increment_ref_count(item);
                                __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_77;
                                self->tail=litem_77;
                            }
                        }
                        self->len++;
                        __result76__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result76__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_78;
_Bool _while_condtional15;
struct list_item$1charph* prev_it_79;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_78, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_79, 0, sizeof(struct list_item$1charph*));
                it_78=self->head;
                while(_while_condtional15=it_78!=((void*)0),                _while_condtional15) {
                    prev_it_79=it_78;
                    it_78=it_78->next;
                    come_call_finalizer3(prev_it_79,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional114;
void* right_value122;
struct list_item$1CVALUEph* litem_80;
struct CVALUE* __dec_obj38;
_Bool _if_conditional116;
void* right_value123;
struct list_item$1CVALUEph* litem_81;
struct CVALUE* __dec_obj39;
void* right_value124;
struct list_item$1CVALUEph* litem_82;
struct CVALUE* __dec_obj40;
struct list$1CVALUEph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
memset(&litem_80, 0, sizeof(struct list_item$1CVALUEph*));
right_value123 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1CVALUEph*));
right_value124 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional114=self->len==0,        _if_conditional114) {
            litem_80=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value122=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value122,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_80->prev=((void*)0);
            litem_80->next=((void*)0);
            __dec_obj38=litem_80->item;
            litem_80->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj38,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_80;
            self->head=litem_80;
        }
        else {
            if(_if_conditional116=self->len==1,            _if_conditional116) {
                litem_81=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value123=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value123,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_81->prev=self->head;
                litem_81->next=((void*)0);
                __dec_obj39=litem_81->item;
                litem_81->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj39,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_81;
                self->head->next=litem_81;
            }
            else {
                litem_82=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value124=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value124,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_82->prev=self->tail;
                litem_82->next=((void*)0);
                __dec_obj40=litem_82->item;
                litem_82->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj40,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_82;
                self->tail=litem_82;
            }
        }
        self->len++;
        __result79__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result79__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional115;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional115=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional115) {
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
struct sFun* __dec_obj41;
char* __dec_obj42;
struct sFunNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj41=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj41,sFun_finalize, 0, 0, 0, 0, (void*)0);
    self->sline=info->sline;
    __dec_obj42=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result81__ = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result81__;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sFunNode_terminated(struct sFunNode* self){
void* __result_obj__;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    __result82__ = (_Bool)0;
    return __result82__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__;
void* right_value125;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
    __result83__ = __result_obj__ = ((char*)(right_value125=__builtin_string("sFunNode")));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result83__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* come_fun_83;
char* come_fun_name_84;
void* right_value126;
char* __dec_obj43;
_Bool _if_conditional134;
_Bool _if_conditional135;
void* right_value127;
void* right_value128;
struct sType* result_type_85;
void* right_value129;
void* right_value130;
_Bool _if_conditional136;
void* right_value131;
char* __dec_obj44;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_83, 0, sizeof(struct sFun*));
memset(&come_fun_name_84, 0, sizeof(char*));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
memset(&result_type_85, 0, sizeof(struct sType*));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
    come_fun_83=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_84=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj43=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(info->come_fun->mName))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->mFun->mBlock) {
        if(_if_conditional135=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional135) {
            add_come_code(info,"come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_85=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value127=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 88, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value127,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value128,sType_finalize, 0, 1, 0, 0, __result_obj__);
        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value129=make_define_var(result_type_85,"__result_obj__",(_Bool)0,info))));
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value130=make_type_name_string(result_type_85,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
        if(_if_conditional136=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional136) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value131=xsprintf("come_heap_final();\n"))));
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer3(result_type_85,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_83;
    __dec_obj44=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_84);
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result84__ = (_Bool)1;
    come_fun_name_84 = come_decrement_ref_count2(come_fun_name_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result84__;
    come_fun_name_84 = come_decrement_ref_count2(come_fun_name_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional117=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional117) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional118=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional118) {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional119=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional119) {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional120=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional120) {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional121=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional121) {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional122=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional122) {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional123=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional123) {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional126=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional126) {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional127=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional127) {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional128=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional128) {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional129=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional129) {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional130=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional130) {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional131=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional131) {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional124;
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional124=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional124) {
                    come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional125=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional125) {
                    come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__;
void* right_value132;
void* right_value133;
struct list$1sNodeph* __dec_obj45;
struct sBlock* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value132 = (void*)0;
right_value133 = (void*)0;
    __dec_obj45=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value133=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value132=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 109, "list$1sNodeph"))))))));
    come_call_finalizer3(__dec_obj45,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value132,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value133,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    __result85__ = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result85__;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__;
void* right_value134;
struct sType* __dec_obj46;
void* right_value135;
struct list$1charph* __dec_obj47;
void* right_value136;
struct list$1charph* __dec_obj48;
char* __dec_obj49;
struct sType* __dec_obj50;
struct list$1sTypeph* __dec_obj51;
struct list$1charph* __dec_obj52;
struct list$1charph* __dec_obj53;
char* __dec_obj54;
void* right_value137;
char* __dec_obj55;
struct sGenericsFun* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
    __dec_obj46=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_clone(impl_type))));
    come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value134,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj47=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value135=list$1charphp_clone(generics_type_names))));
    come_call_finalizer3(__dec_obj47,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value135,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj48=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value136=list$1charphp_clone(method_generics_type_names))));
    come_call_finalizer3(__dec_obj48,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value136,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj49=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj50=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj51=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj51,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj52=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj52,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj53=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj53,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj54=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj55=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(generics_sname))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mGenericsSLine=generics_sline;
    __result86__ = __result_obj__ = self;
    come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(impl_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result86__;
    come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(impl_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional137=self!=((void*)0)&&self->mImplType!=((void*)0),        _if_conditional137) {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional138=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),        _if_conditional138) {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional139=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),        _if_conditional139) {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional140=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional140) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional141=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional141) {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional142=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional142) {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional143=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional143) {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional144=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional144) {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional145=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional145) {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional146=self!=((void*)0)&&self->mGenericsSName!=((void*)0),        _if_conditional146) {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last){
void* __result_obj__;
void* right_value138;
void* right_value139;
struct sBlock* result_86;
int block_level_87;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _while_condtional16;
_Bool _if_conditional149;
int sline_88;
char* sname_89;
void* right_value140;
struct sNode* node_90;
void* right_value141;
char* __dec_obj56;
_Bool _if_conditional150;
_Bool _if_conditional153;
_Bool _while_condtional17;
_Bool _if_conditional154;
void* right_value145;
struct sNode* node_94;
_Bool _if_conditional155;
_Bool _if_conditional156;
char* p_95;
char* head_96;
void* right_value146;
char* source_97;
void* right_value147;
struct sNode* node_98;
_Bool _if_conditional157;
struct sBlock* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&result_86, 0, sizeof(struct sBlock*));
memset(&block_level_87, 0, sizeof(int));
memset(&sline_88, 0, sizeof(int));
memset(&sname_89, 0, sizeof(char*));
right_value140 = (void*)0;
memset(&node_90, 0, sizeof(struct sNode*));
right_value141 = (void*)0;
right_value145 = (void*)0;
memset(&node_94, 0, sizeof(struct sNode*));
memset(&p_95, 0, sizeof(char*));
memset(&head_96, 0, sizeof(char*));
right_value146 = (void*)0;
memset(&source_97, 0, sizeof(char*));
right_value147 = (void*)0;
memset(&node_98, 0, sizeof(struct sNode*));
    result_86=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value139=sBlock_initialize((struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value138=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 139, "sBlock")))),info))));
    come_call_finalizer3(right_value138,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value139,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    block_level_87=info->block_level;
    if(_if_conditional147=!no_block_level,    _if_conditional147) {
        info->block_level++;
    }
    if(_if_conditional148=*info->p==123,    _if_conditional148) {
        info->p++;
        skip_spaces_and_lf(info);
        while(_while_condtional16=(_Bool)1,        _while_condtional16) {
            parse_sharp_v5(info);
            if(_if_conditional149=*info->p==125,            _if_conditional149) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            sline_88=info->sline;
            sname_89=info->sname;
            node_90=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value140=statment(info))));
            if(right_value140) { right_value140 = come_decrement_ref_count2(right_value140, ((struct sNode*)right_value140)->finalize, ((struct sNode*)right_value140)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj56=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value141=node_90->sname(node_90->_protocol_obj))));
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline=node_90->sline(node_90->_protocol_obj);
            if(_if_conditional150=node_90==((void*)0),            _if_conditional150) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_86->mNodes,(struct sNode*)come_increment_ref_count(node_90));
            parse_sharp_v5(info);
            if(_if_conditional153=node_90->terminated(node_90->_protocol_obj),            _if_conditional153) {
                skip_spaces_and_lf(info);
            }
            while(_while_condtional17=*info->p==59,            _while_condtional17) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            if(_if_conditional154=*info->p==125,            _if_conditional154) {
                info->p++;
                skip_spaces_and_lf(info);
                if(node_90) { node_90 = come_decrement_ref_count2(node_90, ((struct sNode*)node_90)->finalize, ((struct sNode*)node_90)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            if(node_90) { node_90 = come_decrement_ref_count2(node_90, ((struct sNode*)node_90)->finalize, ((struct sNode*)node_90)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        parse_sharp_v5(info);
        node_94=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value145=expression_v13(info))));
        if(right_value145) { right_value145 = come_decrement_ref_count2(right_value145, ((struct sNode*)right_value145)->finalize, ((struct sNode*)right_value145)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        parse_sharp_v5(info);
        if(_if_conditional155=node_94==((void*)0),        _if_conditional155) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_86->mNodes,(struct sNode*)come_increment_ref_count(node_94));
        if(node_94) { node_94 = come_decrement_ref_count2(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(return_self_at_last) {
        p_95=info->p;
        head_96=info->head;
        source_97=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string("return self;"))));
        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->p=source_97;
        info->head=source_97;
        node_98=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value147=expression_v13(info))));
        if(right_value147) { right_value147 = come_decrement_ref_count2(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional157=node_98==((void*)0),        _if_conditional157) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_86->mNodes,(struct sNode*)come_increment_ref_count(node_98));
        info->p=p_95;
        info->head=head_96;
        source_97 = come_decrement_ref_count2(source_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_98) { node_98 = come_decrement_ref_count2(node_98, ((struct sNode*)node_98)->finalize, ((struct sNode*)node_98)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_87;
    __result88__ = __result_obj__ = result_86;
    come_call_finalizer3(result_86,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result88__;
    come_call_finalizer3(result_86,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional151;
void* right_value142;
struct list_item$1sNodeph* litem_91;
struct sNode* __dec_obj57;
_Bool _if_conditional152;
void* right_value143;
struct list_item$1sNodeph* litem_92;
struct sNode* __dec_obj58;
void* right_value144;
struct list_item$1sNodeph* litem_93;
struct sNode* __dec_obj59;
struct list$1sNodeph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
memset(&litem_91, 0, sizeof(struct list_item$1sNodeph*));
right_value143 = (void*)0;
memset(&litem_92, 0, sizeof(struct list_item$1sNodeph*));
right_value144 = (void*)0;
memset(&litem_93, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional151=self->len==0,                _if_conditional151) {
                    litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value142=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 217, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value142,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_91->prev=((void*)0);
                    litem_91->next=((void*)0);
                    __dec_obj57=litem_91->item;
                    litem_91->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_91;
                    self->head=litem_91;
                }
                else {
                    if(_if_conditional152=self->len==1,                    _if_conditional152) {
                        litem_92=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value143=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 227, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value143,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_92->prev=self->head;
                        litem_92->next=((void*)0);
                        __dec_obj58=litem_92->item;
                        litem_92->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_92;
                        self->head->next=litem_92;
                    }
                    else {
                        litem_93=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value144=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 237, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value144,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_93->prev=self->tail;
                        litem_93->next=((void*)0);
                        __dec_obj59=litem_93->item;
                        litem_93->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail->next=litem_93;
                        self->tail=litem_93;
                    }
                }
                self->len++;
                __result87__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result87__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block){
void* __result_obj__;
_Bool _if_conditional158;
int __result89__;
struct sVarTable* old_table_99;
_Bool _if_conditional159;
void* right_value148;
void* right_value149;
struct sVarTable* __dec_obj60;
struct sVarTable* current_loop_vtable_100;
_Bool _if_conditional160;
struct list$1sTypeph* param_types__101;
struct list$1charph* param_names__102;
_Bool _if_conditional161;
int i_103;
struct list$1charph* o2_saved_104;
char* name_107;
void* right_value150;
struct sType* type_113;
void* right_value151;
int block_level_114;
_Bool _if_conditional168;
_Bool _if_conditional170;
int i_115;
struct list$1sNodeph* o2_saved_116;
struct sNode* node_119;
struct list$1sRightValueObjectph* right_value_objects_122;
void* right_value152;
void* right_value153;
struct list$1sRightValueObjectph* __dec_obj61;
char* __dec_obj62;
char* __dec_obj63;
char* __dec_obj64;
int stack_num_before_127;
int sline_128;
void* right_value154;
char* sname_129;
void* right_value155;
char* __dec_obj65;
_Bool _if_conditional180;
void* right_value156;
char* __dec_obj66;
struct list$1sRightValueObjectph* __dec_obj67;
_Bool _if_conditional181;
int __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_table_99, 0, sizeof(struct sVarTable*));
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&current_loop_vtable_100, 0, sizeof(struct sVarTable*));
memset(&param_types__101, 0, sizeof(struct list$1sTypeph*));
memset(&param_names__102, 0, sizeof(struct list$1charph*));
memset(&i_103, 0, sizeof(int));
memset(&o2_saved_104, 0, sizeof(struct list$1charph*));
memset(&name_107, 0, sizeof(char*));
right_value150 = (void*)0;
memset(&type_113, 0, sizeof(struct sType*));
right_value151 = (void*)0;
memset(&block_level_114, 0, sizeof(int));
memset(&i_115, 0, sizeof(int));
memset(&o2_saved_116, 0, sizeof(struct list$1sNodeph*));
memset(&node_119, 0, sizeof(struct sNode*));
memset(&right_value_objects_122, 0, sizeof(struct list$1sRightValueObjectph*));
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&stack_num_before_127, 0, sizeof(int));
memset(&sline_128, 0, sizeof(int));
right_value154 = (void*)0;
memset(&sname_129, 0, sizeof(char*));
right_value155 = (void*)0;
right_value156 = (void*)0;
    if(info->output_header_file) {
        __result89__ = 0;
        return __result89__;
    }
    old_table_99=info->lv_table;
    if(_if_conditional159=!no_var_table,    _if_conditional159) {
        __dec_obj60=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value149=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value148=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 245, "sVarTable")))),(_Bool)0,old_table_99))));
        come_call_finalizer3(__dec_obj60,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value148,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value149,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_100=info->current_loop_vtable;
    if(loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__101=info->param_types;
    param_names__102=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(_if_conditional161=param_types&&param_names,    _if_conditional161) {
        for(        o2_saved_104=(param_names),name_107=list$1charph_begin((o2_saved_104));        !list$1charph_end((o2_saved_104));        name_107=list$1charph_next((o2_saved_104))        ){
            type_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_103), "05function.c", 263, 0))))));
            come_call_finalizer3(right_value150,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_113->mFunctionParam=(_Bool)1;
            type_113->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_107,(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(type_113)))),info);
            come_call_finalizer3(right_value151,sType_finalize, 0, 1, 0, 0, __result_obj__);
            i_103++;
            come_call_finalizer3(type_113,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_114=info->block_level;
    if(_if_conditional168=!no_var_table,    _if_conditional168) {
        info->block_level++;
    }
    if(_if_conditional170=list$1sNodeph_length(block->mNodes)==0,    _if_conditional170) {
    }
    else {
        for(        o2_saved_116=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_119=list$1sNodeph_begin((o2_saved_116));        !list$1sNodeph_end((o2_saved_116));        node_119=list$1sNodeph_next((o2_saved_116))        ){
            right_value_objects_122=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj61=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value153=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value152=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 282, "list$1sRightValueObjectph"))))))));
            come_call_finalizer3(__dec_obj61,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value152,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value153,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj62=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj63=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj64=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_127=list$1CVALUEph_length(info->stack);
            sline_128=info->sline;
            sname_129=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(info->sname))));
            right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_119->sline(node_119->_protocol_obj);
            __dec_obj65=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value155=node_119->sname(node_119->_protocol_obj))));
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->writing_source_file_position=(_Bool)1;
            if(_if_conditional180=!node_compile(node_119,info),            _if_conditional180) {
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                exit(2);
            }
            info->sline=sline_128;
            __dec_obj66=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(sname_129))));
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_127);
            free_right_value_objects(info,(_Bool)0);
            list$1sRightValueObjectph_reset(info->right_value_objects);
            __dec_obj67=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_122);
            come_call_finalizer3(__dec_obj67,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_objects_122,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_129 = come_decrement_ref_count2(sname_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_116,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional181=!no_var_table,    _if_conditional181) {
        free_objects(info->lv_table,((void*)0),info);
    }
    info->lv_table=old_table_99;
    info->block_level=block_level_114;
    info->param_types=param_types__101;
    info->param_names=param_names__102;
    info->current_loop_vtable=current_loop_vtable_100;
    __result112__ = 0;
    return __result112__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional162;
char* result_105;
char* __result90__;
_Bool _if_conditional163;
char* __result91__;
char* result_106;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_105, 0, sizeof(char*));
memset(&result_106, 0, sizeof(char*));
            if(_if_conditional162=self==((void*)0),            _if_conditional162) {
                memset(&result_105,0,sizeof(char*));
                __result90__ = __result_obj__ = result_105;
                return __result90__;
            }
            self->it=self->head;
            if(self->it) {
                __result91__ = __result_obj__ = self->it->item;
                return __result91__;
            }
            memset(&result_106,0,sizeof(char*));
            __result92__ = __result_obj__ = result_106;
            return __result92__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
            __result93__ = self==((void*)0)||self->it==((void*)0);
            return __result93__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional164;
char* result_108;
char* __result94__;
_Bool _if_conditional165;
char* __result95__;
char* result_109;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_108, 0, sizeof(char*));
memset(&result_109, 0, sizeof(char*));
            if(_if_conditional164=self==((void*)0)||self->it==((void*)0),            _if_conditional164) {
                memset(&result_108,0,sizeof(char*));
                __result94__ = __result_obj__ = result_108;
                return __result94__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result95__ = __result_obj__ = self->it->item;
                return __result95__;
            }
            memset(&result_109,0,sizeof(char*));
            __result96__ = __result_obj__ = result_109;
            return __result96__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional166;
struct list_item$1sTypeph* it_110;
int i_111;
_Bool _while_condtional18;
_Bool _if_conditional167;
struct sType* __result97__;
struct sType* default_value_112;
struct sType* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_110, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_111, 0, sizeof(int));
memset(&default_value_112, 0, sizeof(struct sType*));
                if(_if_conditional166=position<0,                _if_conditional166) {
                    position+=self->len;
                }
                it_110=self->head;
                i_111=0;
                while(_while_condtional18=it_110!=((void*)0),                _while_condtional18) {
                    if(_if_conditional167=position==i_111,                    _if_conditional167) {
                        __result97__ = __result_obj__ = it_110->item;
                        return __result97__;
                    }
                    it_110=it_110->next;
                    i_111++;
                }
                memset(&default_value_112,0,sizeof(struct sType*));
                __result98__ = __result_obj__ = default_value_112;
                come_call_finalizer3(default_value_112,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result98__;
                come_call_finalizer3(default_value_112,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional169;
int __result99__;
int __result100__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional169=self==((void*)0),        _if_conditional169) {
            __result99__ = 0;
            return __result99__;
        }
        __result100__ = self->len;
        return __result100__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional171;
struct sNode* result_117;
struct sNode* __result101__;
_Bool _if_conditional172;
struct sNode* __result102__;
struct sNode* result_118;
struct sNode* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_117, 0, sizeof(struct sNode*));
memset(&result_118, 0, sizeof(struct sNode*));
            if(_if_conditional171=self==((void*)0),            _if_conditional171) {
                memset(&result_117,0,sizeof(struct sNode*));
                __result101__ = __result_obj__ = result_117;
                return __result101__;
            }
            self->it=self->head;
            if(self->it) {
                __result102__ = __result_obj__ = self->it->item;
                return __result102__;
            }
            memset(&result_118,0,sizeof(struct sNode*));
            __result103__ = __result_obj__ = result_118;
            return __result103__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
            __result104__ = self==((void*)0)||self->it==((void*)0);
            return __result104__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional173;
struct sNode* result_120;
struct sNode* __result105__;
_Bool _if_conditional174;
struct sNode* __result106__;
struct sNode* result_121;
struct sNode* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_120, 0, sizeof(struct sNode*));
memset(&result_121, 0, sizeof(struct sNode*));
            if(_if_conditional173=self==((void*)0)||self->it==((void*)0),            _if_conditional173) {
                memset(&result_120,0,sizeof(struct sNode*));
                __result105__ = __result_obj__ = result_120;
                return __result105__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result106__ = __result_obj__ = self->it->item;
                return __result106__;
            }
            memset(&result_121,0,sizeof(struct sNode*));
            __result107__ = __result_obj__ = result_121;
            return __result107__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result108__ = __result_obj__ = self;
                come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result108__;
                come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_123;
_Bool _while_condtional19;
struct list_item$1sRightValueObjectph* prev_it_124;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_123, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_124, 0, sizeof(struct list_item$1sRightValueObjectph*));
                    it_123=self->head;
                    while(_while_condtional19=it_123!=((void*)0),                    _while_condtional19) {
                        prev_it_124=it_123;
                        it_123=it_123->next;
                        come_call_finalizer3(prev_it_124,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional175;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional175=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional175) {
                                come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional176=self!=((void*)0)&&self->mType!=((void*)0),                                    _if_conditional176) {
                                        come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional177=self!=((void*)0)&&self->mVarName!=((void*)0),                                    _if_conditional177) {
                                        self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional178=self!=((void*)0)&&self->mFunName!=((void*)0),                                    _if_conditional178) {
                                        self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_125;
_Bool _while_condtional20;
struct list_item$1sRightValueObjectph* prev_it_126;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_125, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_126, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_125=self->head;
                while(_while_condtional20=it_125!=((void*)0),                _while_condtional20) {
                    prev_it_126=it_125;
                    it_125=it_125->next;
                    come_call_finalizer3(prev_it_126,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional179;
int __result109__;
int __result110__;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional179=self==((void*)0),                _if_conditional179) {
                    __result109__ = 0;
                    return __result109__;
                }
                __result110__ = self->len;
                return __result110__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_130;
_Bool _while_condtional21;
struct list_item$1sRightValueObjectph* prev_it_131;
struct list$1sRightValueObjectph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_130, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_131, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_130=self->head;
                while(_while_condtional21=it_130!=((void*)0),                _while_condtional21) {
                    prev_it_131=it_130;
                    it_130=it_130->next;
                    come_call_finalizer3(prev_it_131,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result111__ = __result_obj__ = self;
                return __result111__;
}

void arrange_stack(struct sInfo* info, int top){
void* __result_obj__;
_Bool _if_conditional182;
_Bool _if_conditional183;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional182=list$1CVALUEph_length(info->stack)>top,    _if_conditional182) {
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    if(_if_conditional183=list$1CVALUEph_length(info->stack)<top,    _if_conditional183) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional184;
_Bool _if_conditional185;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    parse_sharp_v5(info);
    if(_if_conditional184=*info->p!=c,    _if_conditional184) {
        if(_if_conditional185=!info->no_output_err,        _if_conditional185) {
            err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
            exit(2);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    __result113__ = 0;
    return __result113__;
}

char* skip_block(struct sInfo* info){
void* __result_obj__;
char* head_132;
_Bool _if_conditional186;
_Bool dquort_133;
_Bool squort_134;
int sline_135;
int nest_136;
_Bool _while_condtional22;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
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
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
char* tail_137;
void* right_value157;
char* buf_138;
void* right_value158;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_132, 0, sizeof(char*));
memset(&dquort_133, 0, sizeof(_Bool));
memset(&squort_134, 0, sizeof(_Bool));
memset(&sline_135, 0, sizeof(int));
memset(&nest_136, 0, sizeof(int));
memset(&tail_137, 0, sizeof(char*));
right_value157 = (void*)0;
memset(&buf_138, 0, sizeof(char*));
right_value158 = (void*)0;
    head_132=info->p;
    if(_if_conditional186=*info->p==123,    _if_conditional186) {
        info->p++;
        dquort_133=(_Bool)0;
        squort_134=(_Bool)0;
        sline_135=0;
        nest_136=0;
        while(_while_condtional22=1,        _while_condtional22) {
            if(dquort_133) {
                if(_if_conditional188=*info->p==92,                _if_conditional188) {
                    info->p++;
                    if(_if_conditional189=*info->p==0,                    _if_conditional189) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_135);
                        exit(2);
                    }
                    if(_if_conditional190=*info->p==10,                    _if_conditional190) {
                        info->p++;
                    }
                    info->p++;
                }
                else {
                    if(_if_conditional191=*info->p==34,                    _if_conditional191) {
                        info->p++;
                        dquort_133=!dquort_133;
                    }
                    else {
                        if(_if_conditional192=*info->p==10,                        _if_conditional192) {
                            info->p++;
                            info->sline++;
                            if(_if_conditional193=*info->p==0,                            _if_conditional193) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_135);
                                exit(2);
                            }
                        }
                        else {
                            info->p++;
                            if(_if_conditional194=*info->p==0,                            _if_conditional194) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_135);
                                exit(2);
                            }
                        }
                    }
                }
            }
            else {
                if(squort_134) {
                    if(_if_conditional196=*info->p==92,                    _if_conditional196) {
                        info->p++;
                        if(_if_conditional197=*info->p==0,                        _if_conditional197) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_135);
                            exit(2);
                        }
                        if(_if_conditional198=*info->p==10,                        _if_conditional198) {
                            info->sline++;
                        }
                        info->p++;
                    }
                    else {
                        if(_if_conditional199=*info->p==39,                        _if_conditional199) {
                            info->p++;
                            squort_134=!squort_134;
                        }
                        else {
                            if(_if_conditional200=*info->p==10,                            _if_conditional200) {
                                info->p++;
                                info->sline++;
                                if(_if_conditional201=*info->p==0,                                _if_conditional201) {
                                    err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_135);
                                    exit(2);
                                }
                            }
                            else {
                                info->p++;
                                if(_if_conditional202=*info->p==0,                                _if_conditional202) {
                                    err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_135);
                                    exit(2);
                                }
                            }
                        }
                    }
                }
                else {
                    if(_if_conditional203=*info->p==39,                    _if_conditional203) {
                        sline_135=info->sline;
                        info->p++;
                        squort_134=!squort_134;
                    }
                    else {
                        if(_if_conditional204=*info->p==34,                        _if_conditional204) {
                            sline_135=info->sline;
                            info->p++;
                            dquort_133=!dquort_133;
                        }
                        else {
                            if(_if_conditional205=*info->p==35,                            _if_conditional205) {
                                parse_sharp_v5(info);
                            }
                            else {
                                if(_if_conditional206=*info->p==123,                                _if_conditional206) {
                                    info->p++;
                                    nest_136++;
                                }
                                else {
                                    if(_if_conditional207=*info->p==125,                                    _if_conditional207) {
                                        info->p++;
                                        if(_if_conditional208=nest_136==0,                                        _if_conditional208) {
                                            skip_spaces_and_lf(info);
                                            break;
                                        }
                                        nest_136--;
                                    }
                                    else {
                                        if(_if_conditional209=*info->p==0,                                        _if_conditional209) {
                                            err_msg(info,"The block requires } character for closing block");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional210=*info->p==10,                                            _if_conditional210) {
                                                info->p++;
                                                info->sline++;
                                            }
                                            else {
                                                info->p++;
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
    else {
        err_msg(info,"Require block. This is %c",*info->p);
    }
    tail_137=info->p;
    buf_138=(char*)come_increment_ref_count(((char*)(right_value157=(char*)come_calloc(1, sizeof(char)*(1*(tail_137-head_132+1)), "05function.c", 488, "char"))));
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(buf_138,head_132,tail_137-head_132);
    buf_138[tail_137-head_132]=0;
    __result114__ = __result_obj__ = ((char*)(right_value158=__builtin_string(buf_138)));
    buf_138 = come_decrement_ref_count2(buf_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
    buf_138 = come_decrement_ref_count2(buf_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool strmemcmp(char* p, char* p2){
void* __result_obj__;
_Bool terminated_139;
char* p3_140;
int i_141;
_Bool _if_conditional211;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&terminated_139, 0, sizeof(_Bool));
memset(&p3_140, 0, sizeof(char*));
memset(&i_141, 0, sizeof(int));
    terminated_139=(_Bool)0;
    p3_140=p;
    for(    i_141=0;    i_141<strlen(p2);    i_141++    ){
        if(_if_conditional211=*p3_140==0,        _if_conditional211) {
            terminated_139=(_Bool)1;
            break;
        }
        p3_140++;
    }
    __result115__ = !terminated_139&&memcmp(p,p2,strlen(p2))==0;
    return __result115__;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__;
void* right_value159;
void* right_value160;
struct buffer* asm_fun_name_142;
_Bool _while_condtional23;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
int brace_num_143;
_Bool _while_condtional24;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
int len_144;
_Bool in_dquort_145;
int brace_num_146;
_Bool _while_condtional25;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
int brace_num_147;
_Bool _while_condtional26;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value161;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&asm_fun_name_142, 0, sizeof(struct buffer*));
memset(&brace_num_143, 0, sizeof(int));
memset(&len_144, 0, sizeof(int));
memset(&in_dquort_145, 0, sizeof(_Bool));
memset(&brace_num_146, 0, sizeof(int));
memset(&brace_num_147, 0, sizeof(int));
right_value161 = (void*)0;
    asm_fun_name_142=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value160=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value159=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 511, "buffer"))))))));
    come_call_finalizer3(right_value159,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value160,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional23=(_Bool)1,    _while_condtional23) {
        if(_if_conditional212=strmemcmp(info->p,"__attribute_pure__"),        _if_conditional212) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional213=strmemcmp(info->p,"__attribute_malloc__"),            _if_conditional213) {
                info->p+=strlen("__attribute_malloc__");
                skip_spaces_and_lf(info);
            }
            else {
                if(_if_conditional214=strmemcmp(info->p,"__attr_dealloc_fclose"),                _if_conditional214) {
                    info->p+=strlen("__attr_dealloc_fclose");
                    skip_spaces_and_lf(info);
                }
                else {
                    if(_if_conditional215=strmemcmp(info->p,"__wur"),                    _if_conditional215) {
                        info->p+=strlen("__wur");
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(_if_conditional216=strmemcmp(info->p,"__noreturn"),                        _if_conditional216) {
                            info->p+=strlen("__noreturn");
                            skip_spaces_and_lf(info);
                        }
                        else {
                            if(_if_conditional217=strmemcmp(info->p,"__attribute__"),                            _if_conditional217) {
                                info->p+=strlen("__attribute__");
                                skip_spaces_and_lf(info);
                                brace_num_143=0;
                                while(_while_condtional24=*info->p,                                _while_condtional24) {
                                    if(_if_conditional218=*info->p==40,                                    _if_conditional218) {
                                        info->p++;
                                        brace_num_143++;
                                    }
                                    else {
                                        if(_if_conditional219=*info->p==41,                                        _if_conditional219) {
                                            info->p++;
                                            brace_num_143--;
                                            if(_if_conditional220=brace_num_143==0,                                            _if_conditional220) {
                                                break;
                                            }
                                        }
                                        else {
                                            info->p++;
                                        }
                                    }
                                }
                                skip_spaces_and_lf(info);
                            }
                            else {
                                if(_if_conditional221=strmemcmp(info->p,"__asm__"),                                _if_conditional221) {
                                    info->p+=strlen("__asm__");
                                    skip_spaces_and_lf(info);
                                    len_144=0;
                                    in_dquort_145=(_Bool)0;
                                    brace_num_146=0;
                                    while(_while_condtional25=*info->p,                                    _while_condtional25) {
                                        if(_if_conditional222=*info->p==34,                                        _if_conditional222) {
                                            info->p++;
                                            in_dquort_145=!in_dquort_145;
                                        }
                                        else {
                                            if(in_dquort_145) {
                                                buffer_append_char(asm_fun_name_142,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(_if_conditional224=*info->p==40,                                                _if_conditional224) {
                                                    info->p++;
                                                    brace_num_146++;
                                                }
                                                else {
                                                    if(_if_conditional225=*info->p==41,                                                    _if_conditional225) {
                                                        info->p++;
                                                        brace_num_146--;
                                                        if(_if_conditional226=brace_num_146==0,                                                        _if_conditional226) {
                                                            break;
                                                        }
                                                    }
                                                    else {
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(_if_conditional227=strmemcmp(info->p,"__asm"),                                    _if_conditional227) {
                                        info->p+=strlen("__asm");
                                        skip_spaces_and_lf(info);
                                        brace_num_147=0;
                                        while(_while_condtional26=*info->p,                                        _while_condtional26) {
                                            if(_if_conditional228=*info->p==40,                                            _if_conditional228) {
                                                info->p++;
                                                brace_num_147++;
                                            }
                                            else {
                                                if(_if_conditional229=*info->p==41,                                                _if_conditional229) {
                                                    info->p++;
                                                    brace_num_147--;
                                                    if(_if_conditional230=brace_num_147==0,                                                    _if_conditional230) {
                                                        break;
                                                    }
                                                }
                                                else {
                                                    info->p++;
                                                }
                                            }
                                        }
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result116__ = __result_obj__ = ((char*)(right_value161=buffer_to_string(asm_fun_name_142)));
    come_call_finalizer3(asm_fun_name_142,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result116__;
    come_call_finalizer3(asm_fun_name_142,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional27;
char* head_148;
int head_sline_149;
void* right_value162;
char* buf_150;
_Bool _if_conditional231;
void* right_value163;
struct sNode* node_151;
_Bool _while_condtional28;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_148, 0, sizeof(char*));
memset(&head_sline_149, 0, sizeof(int));
right_value162 = (void*)0;
memset(&buf_150, 0, sizeof(char*));
right_value163 = (void*)0;
memset(&node_151, 0, sizeof(struct sNode*));
    while(_while_condtional27=*info->p,    _while_condtional27) {
        parse_sharp_v5(info);
        head_148=info->p;
        head_sline_149=info->sline;
        buf_150=(char*)come_increment_ref_count(((char*)(right_value162=parse_word(info))));
        right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional231=block&&*info->p==125,        _if_conditional231) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_150 = come_decrement_ref_count2(buf_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_151=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value163=top_level_v99(buf_150,head_148,head_sline_149,info))));
        if(right_value163) { right_value163 = come_decrement_ref_count2(right_value163, ((struct sNode*)right_value163)->finalize, ((struct sNode*)right_value163)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        parse_sharp_v5(info);
        while(_while_condtional28=*info->p==59,        _while_condtional28) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(_if_conditional232=node_151!=((void*)0),        _if_conditional232) {
            if(_if_conditional233=!node_compile(node_151,info),            _if_conditional233) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(_if_conditional234=block&&*info->p==125,        _if_conditional234) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_150 = come_decrement_ref_count2(buf_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_151) { node_151 = come_decrement_ref_count2(node_151, ((struct sNode*)node_151)->finalize, ((struct sNode*)node_151)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_150 = come_decrement_ref_count2(buf_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_151) { node_151 = come_decrement_ref_count2(node_151, ((struct sNode*)node_151)->finalize, ((struct sNode*)node_151)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __result_obj__;
void* right_value164;
char* name_152;
void* right_value165;
void* right_value166;
struct sType* result_type_153;
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
struct sType* __list_values1___154[5];
void* right_value180;
void* right_value181;
struct list$1sTypeph* param_types_159;
void* right_value182;
void* right_value183;
void* right_value184;
void* right_value185;
void* right_value186;
char* __list_values2___160[5];
void* right_value190;
void* right_value191;
struct list$1charph* param_names_165;
void* right_value192;
void* right_value193;
struct list$1charph* param_default_parametors_166;
void* right_value194;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
struct sFun* main_fun_167;
void* right_value207;
void* right_value208;
char* name_212;
void* right_value209;
void* right_value210;
struct sType* result_type_213;
void* right_value211;
void* right_value212;
struct sType* __list_values3___214[1];
void* right_value213;
void* right_value214;
struct list$1sTypeph* param_types_215;
void* right_value215;
char* __list_values4___216[1];
void* right_value216;
void* right_value217;
struct list$1charph* param_names_217;
void* right_value218;
void* right_value219;
struct list$1charph* param_default_parametors_218;
void* right_value220;
void* right_value221;
void* right_value222;
void* right_value223;
struct sFun* main_fun_219;
void* right_value224;
void* right_value225;
char* name_220;
void* right_value226;
void* right_value227;
struct sType* result_type_221;
void* right_value228;
void* right_value229;
void* right_value230;
void* right_value231;
void* right_value232;
void* right_value233;
void* right_value234;
void* right_value235;
void* right_value236;
void* right_value237;
void* right_value238;
void* right_value239;
void* right_value240;
void* right_value241;
struct sType* __list_values5___222[7];
void* right_value242;
void* right_value243;
struct list$1sTypeph* param_types_223;
void* right_value244;
void* right_value245;
void* right_value246;
void* right_value247;
void* right_value248;
void* right_value249;
void* right_value250;
char* __list_values6___224[7];
void* right_value251;
void* right_value252;
struct list$1charph* param_names_225;
void* right_value253;
void* right_value254;
struct list$1charph* param_default_parametors_226;
void* right_value255;
void* right_value256;
void* right_value257;
void* right_value258;
struct sFun* main_fun_227;
void* right_value259;
void* right_value260;
char* name_228;
void* right_value261;
void* right_value262;
struct sType* result_type_229;
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
struct sType* __list_values7___230[5];
void* right_value273;
void* right_value274;
struct list$1sTypeph* param_types_231;
void* right_value275;
void* right_value276;
void* right_value277;
void* right_value278;
void* right_value279;
char* __list_values8___232[5];
void* right_value280;
void* right_value281;
struct list$1charph* param_names_233;
void* right_value282;
void* right_value283;
struct list$1charph* param_default_parametors_234;
void* right_value284;
void* right_value285;
void* right_value286;
void* right_value287;
struct sFun* main_fun_235;
void* right_value288;
void* right_value289;
char* name_236;
void* right_value290;
void* right_value291;
struct sType* result_type_237;
void* right_value292;
void* right_value293;
struct sType* __list_values9___238[1];
void* right_value294;
void* right_value295;
struct list$1sTypeph* param_types_239;
void* right_value296;
char* __list_values10___240[1];
void* right_value297;
void* right_value298;
struct list$1charph* param_names_241;
void* right_value299;
void* right_value300;
struct list$1charph* param_default_parametors_242;
void* right_value301;
void* right_value302;
void* right_value303;
void* right_value304;
struct sFun* main_fun_243;
void* right_value305;
void* right_value306;
char* name_244;
void* right_value307;
void* right_value308;
struct sType* result_type_245;
void* right_value309;
void* right_value310;
void* right_value311;
void* right_value312;
void* right_value313;
void* right_value314;
void* right_value315;
void* right_value316;
struct sType* __list_values11___246[4];
void* right_value317;
void* right_value318;
struct list$1sTypeph* param_types_247;
void* right_value319;
void* right_value320;
void* right_value321;
void* right_value322;
char* __list_values12___248[4];
void* right_value323;
void* right_value324;
struct list$1charph* param_names_249;
void* right_value325;
void* right_value326;
struct list$1charph* param_default_parametors_250;
void* right_value327;
void* right_value328;
void* right_value329;
void* right_value330;
void* right_value331;
void* right_value332;
void* right_value333;
struct sFun* main_fun_251;
void* right_value334;
void* right_value335;
char* name_252;
void* right_value336;
void* right_value337;
struct sType* result_type_253;
void* right_value338;
void* right_value339;
void* right_value340;
void* right_value341;
void* right_value342;
void* right_value343;
struct sType* __list_values13___254[3];
void* right_value344;
void* right_value345;
struct list$1sTypeph* param_types_255;
void* right_value346;
void* right_value347;
void* right_value348;
char* __list_values14___256[3];
void* right_value349;
void* right_value350;
struct list$1charph* param_names_257;
void* right_value351;
void* right_value352;
struct list$1charph* param_default_parametors_258;
void* right_value353;
void* right_value354;
void* right_value355;
void* right_value356;
struct sFun* main_fun_259;
void* right_value357;
void* right_value358;
char* name_260;
void* right_value359;
void* right_value360;
struct sType* result_type_261;
void* right_value361;
void* right_value362;
struct sType* __list_values15___262[1];
void* right_value363;
void* right_value364;
struct list$1sTypeph* param_types_263;
void* right_value365;
char* __list_values16___264[1];
void* right_value366;
void* right_value367;
struct list$1charph* param_names_265;
void* right_value368;
void* right_value369;
struct list$1charph* param_default_parametors_266;
void* right_value370;
void* right_value371;
void* right_value372;
void* right_value373;
struct sFun* main_fun_267;
void* right_value374;
void* right_value375;
char* name_268;
void* right_value376;
void* right_value377;
struct sType* result_type_269;
void* right_value378;
void* right_value379;
void* right_value380;
void* right_value381;
void* right_value382;
void* right_value383;
struct sType* __list_values17___270[3];
void* right_value384;
void* right_value385;
struct list$1sTypeph* param_types_271;
void* right_value386;
void* right_value387;
void* right_value388;
char* __list_values18___272[3];
void* right_value389;
void* right_value390;
struct list$1charph* param_names_273;
void* right_value391;
void* right_value392;
struct list$1charph* param_default_parametors_274;
void* right_value393;
void* right_value394;
void* right_value395;
void* right_value396;
struct sFun* main_fun_275;
void* right_value397;
void* right_value398;
char* name_276;
void* right_value399;
void* right_value400;
struct sType* result_type_277;
void* right_value401;
void* right_value402;
struct list$1sTypeph* param_types_278;
void* right_value403;
void* right_value404;
struct list$1charph* param_names_279;
void* right_value405;
void* right_value406;
struct list$1charph* param_default_parametors_280;
void* right_value407;
void* right_value408;
void* right_value409;
void* right_value410;
struct sFun* main_fun_281;
void* right_value411;
void* right_value412;
char* name_282;
void* right_value413;
void* right_value414;
struct sType* result_type_283;
void* right_value415;
void* right_value416;
void* right_value417;
void* right_value418;
void* right_value419;
void* right_value420;
void* right_value421;
void* right_value422;
struct sType* __list_values19___284[4];
void* right_value423;
void* right_value424;
struct list$1sTypeph* param_types_285;
void* right_value425;
void* right_value426;
void* right_value427;
void* right_value428;
char* __list_values20___286[4];
void* right_value429;
void* right_value430;
struct list$1charph* param_names_287;
void* right_value431;
void* right_value432;
struct list$1charph* param_default_parametors_288;
void* right_value433;
void* right_value434;
void* right_value435;
void* right_value436;
struct sFun* main_fun_289;
void* right_value437;
int __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
memset(&name_152, 0, sizeof(char*));
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&result_type_153, 0, sizeof(struct sType*));
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
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&param_types_159, 0, sizeof(struct list$1sTypeph*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
memset(&param_names_165, 0, sizeof(struct list$1charph*));
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&param_default_parametors_166, 0, sizeof(struct list$1charph*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&main_fun_167, 0, sizeof(struct sFun*));
right_value207 = (void*)0;
right_value208 = (void*)0;
memset(&name_212, 0, sizeof(char*));
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&result_type_213, 0, sizeof(struct sType*));
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
memset(&param_types_215, 0, sizeof(struct list$1sTypeph*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&param_names_217, 0, sizeof(struct list$1charph*));
right_value218 = (void*)0;
right_value219 = (void*)0;
memset(&param_default_parametors_218, 0, sizeof(struct list$1charph*));
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
memset(&main_fun_219, 0, sizeof(struct sFun*));
right_value224 = (void*)0;
right_value225 = (void*)0;
memset(&name_220, 0, sizeof(char*));
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&result_type_221, 0, sizeof(struct sType*));
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
memset(&param_types_223, 0, sizeof(struct list$1sTypeph*));
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
memset(&param_names_225, 0, sizeof(struct list$1charph*));
right_value253 = (void*)0;
right_value254 = (void*)0;
memset(&param_default_parametors_226, 0, sizeof(struct list$1charph*));
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
memset(&main_fun_227, 0, sizeof(struct sFun*));
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&name_228, 0, sizeof(char*));
right_value261 = (void*)0;
right_value262 = (void*)0;
memset(&result_type_229, 0, sizeof(struct sType*));
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
memset(&param_types_231, 0, sizeof(struct list$1sTypeph*));
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
memset(&param_names_233, 0, sizeof(struct list$1charph*));
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&param_default_parametors_234, 0, sizeof(struct list$1charph*));
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
memset(&main_fun_235, 0, sizeof(struct sFun*));
right_value288 = (void*)0;
right_value289 = (void*)0;
memset(&name_236, 0, sizeof(char*));
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&result_type_237, 0, sizeof(struct sType*));
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&param_types_239, 0, sizeof(struct list$1sTypeph*));
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
memset(&param_names_241, 0, sizeof(struct list$1charph*));
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&param_default_parametors_242, 0, sizeof(struct list$1charph*));
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
memset(&main_fun_243, 0, sizeof(struct sFun*));
right_value305 = (void*)0;
right_value306 = (void*)0;
memset(&name_244, 0, sizeof(char*));
right_value307 = (void*)0;
right_value308 = (void*)0;
memset(&result_type_245, 0, sizeof(struct sType*));
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&param_types_247, 0, sizeof(struct list$1sTypeph*));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&param_names_249, 0, sizeof(struct list$1charph*));
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&param_default_parametors_250, 0, sizeof(struct list$1charph*));
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
memset(&main_fun_251, 0, sizeof(struct sFun*));
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&name_252, 0, sizeof(char*));
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&result_type_253, 0, sizeof(struct sType*));
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
memset(&param_types_255, 0, sizeof(struct list$1sTypeph*));
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
memset(&param_names_257, 0, sizeof(struct list$1charph*));
right_value351 = (void*)0;
right_value352 = (void*)0;
memset(&param_default_parametors_258, 0, sizeof(struct list$1charph*));
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
memset(&main_fun_259, 0, sizeof(struct sFun*));
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&name_260, 0, sizeof(char*));
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&result_type_261, 0, sizeof(struct sType*));
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
memset(&param_types_263, 0, sizeof(struct list$1sTypeph*));
right_value365 = (void*)0;
right_value366 = (void*)0;
right_value367 = (void*)0;
memset(&param_names_265, 0, sizeof(struct list$1charph*));
right_value368 = (void*)0;
right_value369 = (void*)0;
memset(&param_default_parametors_266, 0, sizeof(struct list$1charph*));
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
memset(&main_fun_267, 0, sizeof(struct sFun*));
right_value374 = (void*)0;
right_value375 = (void*)0;
memset(&name_268, 0, sizeof(char*));
right_value376 = (void*)0;
right_value377 = (void*)0;
memset(&result_type_269, 0, sizeof(struct sType*));
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
memset(&param_types_271, 0, sizeof(struct list$1sTypeph*));
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value390 = (void*)0;
memset(&param_names_273, 0, sizeof(struct list$1charph*));
right_value391 = (void*)0;
right_value392 = (void*)0;
memset(&param_default_parametors_274, 0, sizeof(struct list$1charph*));
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
memset(&main_fun_275, 0, sizeof(struct sFun*));
right_value397 = (void*)0;
right_value398 = (void*)0;
memset(&name_276, 0, sizeof(char*));
right_value399 = (void*)0;
right_value400 = (void*)0;
memset(&result_type_277, 0, sizeof(struct sType*));
right_value401 = (void*)0;
right_value402 = (void*)0;
memset(&param_types_278, 0, sizeof(struct list$1sTypeph*));
right_value403 = (void*)0;
right_value404 = (void*)0;
memset(&param_names_279, 0, sizeof(struct list$1charph*));
right_value405 = (void*)0;
right_value406 = (void*)0;
memset(&param_default_parametors_280, 0, sizeof(struct list$1charph*));
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
memset(&main_fun_281, 0, sizeof(struct sFun*));
right_value411 = (void*)0;
right_value412 = (void*)0;
memset(&name_282, 0, sizeof(char*));
right_value413 = (void*)0;
right_value414 = (void*)0;
memset(&result_type_283, 0, sizeof(struct sType*));
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value420 = (void*)0;
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
memset(&param_types_285, 0, sizeof(struct list$1sTypeph*));
right_value425 = (void*)0;
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
memset(&param_names_287, 0, sizeof(struct list$1charph*));
right_value431 = (void*)0;
right_value432 = (void*)0;
memset(&param_default_parametors_288, 0, sizeof(struct list$1charph*));
right_value433 = (void*)0;
right_value434 = (void*)0;
right_value435 = (void*)0;
right_value436 = (void*)0;
memset(&main_fun_289, 0, sizeof(struct sFun*));
right_value437 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_152=(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string("come_calloc"))));
        right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_153=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value165=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 680, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value165,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value166,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values1___154[0]=come_increment_ref_count(((struct sType*)(right_value168=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value167=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 681, "sType")))),"int",(_Bool)0,info))));
__list_values1___154[1]=come_increment_ref_count(((struct sType*)(right_value170=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value169=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 681, "sType")))),"int",(_Bool)0,info))));
__list_values1___154[2]=come_increment_ref_count(((struct sType*)(right_value172=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value171=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 681, "sType")))),"char*",(_Bool)0,info))));
__list_values1___154[3]=come_increment_ref_count(((struct sType*)(right_value174=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value173=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 681, "sType")))),"int",(_Bool)0,info))));
__list_values1___154[4]=come_increment_ref_count(((struct sType*)(right_value176=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value175=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 681, "sType")))),"char*",(_Bool)0,info))));
}        param_types_159=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value181=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value180=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 681, "struct list$1sTypeph")))),5,__list_values1___154))));
        come_call_finalizer3(right_value167,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value168,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value170,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value171,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value172,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value173,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value174,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value175,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value176,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value180,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value181,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values2___160[0]=come_increment_ref_count(((char*)(right_value182=__builtin_string("count"))));
__list_values2___160[1]=come_increment_ref_count(((char*)(right_value183=__builtin_string("size"))));
__list_values2___160[2]=come_increment_ref_count(((char*)(right_value184=__builtin_string("sname"))));
__list_values2___160[3]=come_increment_ref_count(((char*)(right_value185=__builtin_string("sline"))));
__list_values2___160[4]=come_increment_ref_count(((char*)(right_value186=__builtin_string("class_name"))));
}        param_names_165=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value191=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value190=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 682, "struct list$1charph")))),5,__list_values2___160))));
        right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value190,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value191,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_166=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value193=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value192=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 683, "list$1charph"))))))));
        come_call_finalizer3(right_value192,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value193,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_166,((void*)0));
        list$1charph_push_back(param_default_parametors_166,((void*)0));
        list$1charph_push_back(param_default_parametors_166,(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string("null")))));
        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_166,(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string("0")))));
        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_166,(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string("null")))));
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        main_fun_167=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value200=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value197=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 689, "sFun")))),(char*)come_increment_ref_count(name_152),(struct sType*)come_increment_ref_count(result_type_153),(struct list$1sTypeph*)come_increment_ref_count(param_types_159),(struct list$1charph*)come_increment_ref_count(param_names_165),(struct list$1charph*)come_increment_ref_count(param_default_parametors_166),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value199=__builtin_string("")))),info))));
        come_call_finalizer3(right_value197,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value200,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string(name_152)))),(struct sFun*)come_increment_ref_count(main_fun_167));
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_152 = come_decrement_ref_count2(name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_153,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_159,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_165,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_166,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_167,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_212=(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string("come_increment_ref_count"))));
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_213=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value209=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 700, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value210,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values3___214[0]=come_increment_ref_count(((struct sType*)(right_value212=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value211=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 701, "sType")))),"void*",(_Bool)0,info))));
}        param_types_215=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value214=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value213=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 701, "struct list$1sTypeph")))),1,__list_values3___214))));
        come_call_finalizer3(right_value211,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value212,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value213,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value214,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values4___216[0]=come_increment_ref_count(((char*)(right_value215=__builtin_string("mem"))));
}        param_names_217=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value217=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value216=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 702, "struct list$1charph")))),1,__list_values4___216))));
        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value216,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value217,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_218=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value219=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value218=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 703, "list$1charph"))))))));
        come_call_finalizer3(right_value218,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value219,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        main_fun_219=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value223=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value220=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 704, "sFun")))),(char*)come_increment_ref_count(name_212),(struct sType*)come_increment_ref_count(result_type_213),(struct list$1sTypeph*)come_increment_ref_count(param_types_215),(struct list$1charph*)come_increment_ref_count(param_names_217),(struct list$1charph*)come_increment_ref_count(param_default_parametors_218),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string("void* come_increment_ref_count(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value222=__builtin_string("")))),info))));
        come_call_finalizer3(right_value220,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value223,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value224=__builtin_string(name_212)))),(struct sFun*)come_increment_ref_count(main_fun_219));
        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_212 = come_decrement_ref_count2(name_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_213,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_215,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_217,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_218,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_219,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_220=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string("come_call_finalizer"))));
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_221=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value226=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 715, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value226,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value227,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values5___222[0]=come_increment_ref_count(((struct sType*)(right_value229=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value228=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___222[1]=come_increment_ref_count(((struct sType*)(right_value231=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value230=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___222[2]=come_increment_ref_count(((struct sType*)(right_value233=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value232=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___222[3]=come_increment_ref_count(((struct sType*)(right_value235=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value234=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___222[4]=come_increment_ref_count(((struct sType*)(right_value237=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value236=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 716, "sType")))),"int",(_Bool)0,info))));
__list_values5___222[5]=come_increment_ref_count(((struct sType*)(right_value239=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value238=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 716, "sType")))),"int",(_Bool)0,info))));
__list_values5___222[6]=come_increment_ref_count(((struct sType*)(right_value241=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value240=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 716, "sType")))),"int",(_Bool)0,info))));
}        param_types_223=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value243=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value242=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 716, "struct list$1sTypeph")))),7,__list_values5___222))));
        come_call_finalizer3(right_value228,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value229,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value230,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value231,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value232,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value233,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value234,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value235,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value236,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value237,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value238,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value239,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value240,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value241,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value242,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value243,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values6___224[0]=come_increment_ref_count(((char*)(right_value244=__builtin_string("fun"))));
__list_values6___224[1]=come_increment_ref_count(((char*)(right_value245=__builtin_string("mem"))));
__list_values6___224[2]=come_increment_ref_count(((char*)(right_value246=__builtin_string("protocol_fun"))));
__list_values6___224[3]=come_increment_ref_count(((char*)(right_value247=__builtin_string("protocol_obj"))));
__list_values6___224[4]=come_increment_ref_count(((char*)(right_value248=__builtin_string("call_finalizer_only"))));
__list_values6___224[5]=come_increment_ref_count(((char*)(right_value249=__builtin_string("no_decrement"))));
__list_values6___224[6]=come_increment_ref_count(((char*)(right_value250=__builtin_string("no_free"))));
}        param_names_225=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value252=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value251=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 717, "struct list$1charph")))),7,__list_values6___224))));
        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value251,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value252,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_226=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value254=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value253=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 718, "list$1charph"))))))));
        come_call_finalizer3(right_value253,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value254,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        main_fun_227=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value258=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value255=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 719, "sFun")))),(char*)come_increment_ref_count(name_220),(struct sType*)come_increment_ref_count(result_type_221),(struct list$1sTypeph*)come_increment_ref_count(param_types_223),(struct list$1charph*)come_increment_ref_count(param_names_225),(struct list$1charph*)come_increment_ref_count(param_default_parametors_226),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value256=__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")))),(char*)come_increment_ref_count(((char*)(right_value257=__builtin_string("")))),info))));
        come_call_finalizer3(right_value255,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value258,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string(name_220)))),(struct sFun*)come_increment_ref_count(main_fun_227));
        right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_220 = come_decrement_ref_count2(name_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_221,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_223,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_225,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_226,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_227,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_228=(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string("come_decrement_ref_count"))));
        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_229=(struct sType*)come_increment_ref_count(((struct sType*)(right_value262=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value261=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 730, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value261,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value262,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values7___230[0]=come_increment_ref_count(((struct sType*)(right_value264=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value263=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 731, "sType")))),"void*",(_Bool)0,info))));
__list_values7___230[1]=come_increment_ref_count(((struct sType*)(right_value266=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value265=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 731, "sType")))),"void*",(_Bool)0,info))));
__list_values7___230[2]=come_increment_ref_count(((struct sType*)(right_value268=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value267=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 731, "sType")))),"void*",(_Bool)0,info))));
__list_values7___230[3]=come_increment_ref_count(((struct sType*)(right_value270=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value269=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 731, "sType")))),"bool",(_Bool)0,info))));
__list_values7___230[4]=come_increment_ref_count(((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 731, "sType")))),"bool",(_Bool)0,info))));
}        param_types_231=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value274=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value273=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 731, "struct list$1sTypeph")))),5,__list_values7___230))));
        come_call_finalizer3(right_value263,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value264,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value266,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value267,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value268,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value269,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value270,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value271,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value272,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value273,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value274,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values8___232[0]=come_increment_ref_count(((char*)(right_value275=__builtin_string("mem"))));
__list_values8___232[1]=come_increment_ref_count(((char*)(right_value276=__builtin_string("protocol_fun"))));
__list_values8___232[2]=come_increment_ref_count(((char*)(right_value277=__builtin_string("protocol_obj"))));
__list_values8___232[3]=come_increment_ref_count(((char*)(right_value278=__builtin_string("no_decrement"))));
__list_values8___232[4]=come_increment_ref_count(((char*)(right_value279=__builtin_string("no_free"))));
}        param_names_233=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value281=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value280=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 732, "struct list$1charph")))),5,__list_values8___232))));
        right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value280,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value281,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_234=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value283=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value282=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 733, "list$1charph"))))))));
        come_call_finalizer3(right_value282,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value283,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        main_fun_235=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value287=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value284=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 734, "sFun")))),(char*)come_increment_ref_count(name_228),(struct sType*)come_increment_ref_count(result_type_229),(struct list$1sTypeph*)come_increment_ref_count(param_types_231),(struct list$1charph*)come_increment_ref_count(param_names_233),(struct list$1charph*)come_increment_ref_count(param_default_parametors_234),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value285=__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")))),(char*)come_increment_ref_count(((char*)(right_value286=__builtin_string("")))),info))));
        come_call_finalizer3(right_value284,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value287,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value288=__builtin_string(name_228)))),(struct sFun*)come_increment_ref_count(main_fun_235));
        right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_228 = come_decrement_ref_count2(name_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_229,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_231,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_233,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_234,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_235,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_236=(char*)come_increment_ref_count(((char*)(right_value289=__builtin_string("come_free_object"))));
        right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_237=(struct sType*)come_increment_ref_count(((struct sType*)(right_value291=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value290=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 745, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value290,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value291,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values9___238[0]=come_increment_ref_count(((struct sType*)(right_value293=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value292=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 746, "sType")))),"void*",(_Bool)0,info))));
}        param_types_239=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value295=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value294=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 746, "struct list$1sTypeph")))),1,__list_values9___238))));
        come_call_finalizer3(right_value292,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value293,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value294,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value295,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values10___240[0]=come_increment_ref_count(((char*)(right_value296=__builtin_string("mem"))));
}        param_names_241=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value298=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value297=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 747, "struct list$1charph")))),1,__list_values10___240))));
        right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value297,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value298,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_242=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value300=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value299=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 748, "list$1charph"))))))));
        come_call_finalizer3(right_value299,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value300,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        main_fun_243=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value304=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value301=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 749, "sFun")))),(char*)come_increment_ref_count(name_236),(struct sType*)come_increment_ref_count(result_type_237),(struct list$1sTypeph*)come_increment_ref_count(param_types_239),(struct list$1charph*)come_increment_ref_count(param_names_241),(struct list$1charph*)come_increment_ref_count(param_default_parametors_242),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value302=__builtin_string("void come_free_object(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value303=__builtin_string("")))),info))));
        come_call_finalizer3(right_value301,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value304,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value305=__builtin_string(name_236)))),(struct sFun*)come_increment_ref_count(main_fun_243));
        right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_236 = come_decrement_ref_count2(name_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_237,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_239,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_241,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_242,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_243,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_244=(char*)come_increment_ref_count(((char*)(right_value306=__builtin_string("come_memdup"))));
        right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value307=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 760, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value307,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value308,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values11___246[0]=come_increment_ref_count(((struct sType*)(right_value310=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value309=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 761, "sType")))),"void*",(_Bool)0,info))));
__list_values11___246[1]=come_increment_ref_count(((struct sType*)(right_value312=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value311=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 761, "sType")))),"char*",(_Bool)0,info))));
__list_values11___246[2]=come_increment_ref_count(((struct sType*)(right_value314=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value313=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 761, "sType")))),"int",(_Bool)0,info))));
__list_values11___246[3]=come_increment_ref_count(((struct sType*)(right_value316=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value315=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 761, "sType")))),"char*",(_Bool)0,info))));
}        param_types_247=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value318=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value317=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 761, "struct list$1sTypeph")))),4,__list_values11___246))));
        come_call_finalizer3(right_value309,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value310,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value311,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value312,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value313,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value314,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value315,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value316,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value317,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value318,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values12___248[0]=come_increment_ref_count(((char*)(right_value319=__builtin_string("block"))));
__list_values12___248[1]=come_increment_ref_count(((char*)(right_value320=__builtin_string("sname"))));
__list_values12___248[2]=come_increment_ref_count(((char*)(right_value321=__builtin_string("sline"))));
__list_values12___248[3]=come_increment_ref_count(((char*)(right_value322=__builtin_string("class_name"))));
}        param_names_249=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value324=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value323=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 762, "struct list$1charph")))),4,__list_values12___248))));
        right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value323,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value324,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_250=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value326=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value325=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 763, "list$1charph"))))))));
        come_call_finalizer3(right_value325,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value326,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_250,((void*)0));
        list$1charph_push_back(param_default_parametors_250,(char*)come_increment_ref_count(((char*)(right_value327=__builtin_string("null")))));
        right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_250,(char*)come_increment_ref_count(((char*)(right_value328=__builtin_string("0")))));
        right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_250,(char*)come_increment_ref_count(((char*)(right_value329=__builtin_string("null")))));
        right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        main_fun_251=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value333=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value330=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 768, "sFun")))),(char*)come_increment_ref_count(name_244),(struct sType*)come_increment_ref_count(result_type_245),(struct list$1sTypeph*)come_increment_ref_count(param_types_247),(struct list$1charph*)come_increment_ref_count(param_names_249),(struct list$1charph*)come_increment_ref_count(param_default_parametors_250),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value331=__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value332=__builtin_string("")))),info))));
        come_call_finalizer3(right_value330,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value333,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value334=__builtin_string(name_244)))),(struct sFun*)come_increment_ref_count(main_fun_251));
        right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_244 = come_decrement_ref_count2(name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_247,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_249,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_250,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_251,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_252=(char*)come_increment_ref_count(((char*)(right_value335=__builtin_string("memset"))));
        right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_253=(struct sType*)come_increment_ref_count(((struct sType*)(right_value337=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value336=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 779, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value336,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value337,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values13___254[0]=come_increment_ref_count(((struct sType*)(right_value339=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value338=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 780, "sType")))),"void*",(_Bool)0,info))));
__list_values13___254[1]=come_increment_ref_count(((struct sType*)(right_value341=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value340=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 780, "sType")))),"int",(_Bool)0,info))));
__list_values13___254[2]=come_increment_ref_count(((struct sType*)(right_value343=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value342=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 780, "sType")))),"long",(_Bool)0,info))));
}        param_types_255=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value345=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value344=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 780, "struct list$1sTypeph")))),3,__list_values13___254))));
        come_call_finalizer3(right_value338,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value339,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value340,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value341,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value342,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value343,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value344,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value345,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values14___256[0]=come_increment_ref_count(((char*)(right_value346=__builtin_string("b"))));
__list_values14___256[1]=come_increment_ref_count(((char*)(right_value347=__builtin_string("c"))));
__list_values14___256[2]=come_increment_ref_count(((char*)(right_value348=__builtin_string("len"))));
}        param_names_257=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value350=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value349=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 781, "struct list$1charph")))),3,__list_values14___256))));
        right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value349,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value350,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_258=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value352=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value351=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 782, "list$1charph"))))))));
        come_call_finalizer3(right_value351,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value352,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        main_fun_259=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value356=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value353=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 783, "sFun")))),(char*)come_increment_ref_count(name_252),(struct sType*)come_increment_ref_count(result_type_253),(struct list$1sTypeph*)come_increment_ref_count(param_types_255),(struct list$1charph*)come_increment_ref_count(param_names_257),(struct list$1charph*)come_increment_ref_count(param_default_parametors_258),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value354=__builtin_string("void* memset(void* b, int c, size_t len)")))),(char*)come_increment_ref_count(((char*)(right_value355=__builtin_string("")))),info))));
        come_call_finalizer3(right_value353,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value356,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value357=__builtin_string(name_252)))),(struct sFun*)come_increment_ref_count(main_fun_259));
        right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_252 = come_decrement_ref_count2(name_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_253,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_255,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_257,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_258,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_259,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_260=(char*)come_increment_ref_count(((char*)(right_value358=__builtin_string("__builtin_string"))));
        right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_261=(struct sType*)come_increment_ref_count(((struct sType*)(right_value360=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value359=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 794, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer3(right_value359,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value360,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values15___262[0]=come_increment_ref_count(((struct sType*)(right_value362=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value361=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 795, "sType")))),"char*",(_Bool)0,info))));
}        param_types_263=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value364=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value363=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 795, "struct list$1sTypeph")))),1,__list_values15___262))));
        come_call_finalizer3(right_value361,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value362,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value363,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value364,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values16___264[0]=come_increment_ref_count(((char*)(right_value365=__builtin_string("str"))));
}        param_names_265=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value367=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value366=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 796, "struct list$1charph")))),1,__list_values16___264))));
        right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value366,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value367,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_266=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value369=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value368=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 797, "list$1charph"))))))));
        come_call_finalizer3(right_value368,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value369,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        main_fun_267=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value373=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value370=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 798, "sFun")))),(char*)come_increment_ref_count(name_260),(struct sType*)come_increment_ref_count(result_type_261),(struct list$1sTypeph*)come_increment_ref_count(param_types_263),(struct list$1charph*)come_increment_ref_count(param_names_265),(struct list$1charph*)come_increment_ref_count(param_default_parametors_266),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value371=__builtin_string("char* __builtin_string(char* str)")))),(char*)come_increment_ref_count(((char*)(right_value372=__builtin_string("")))),info))));
        come_call_finalizer3(right_value370,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value373,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value374=__builtin_string(name_260)))),(struct sFun*)come_increment_ref_count(main_fun_267));
        right_value374 = come_decrement_ref_count2(right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_260 = come_decrement_ref_count2(name_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_261,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_263,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_265,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_266,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_267,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_268=(char*)come_increment_ref_count(((char*)(right_value375=__builtin_string("come_heap_init"))));
        right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_269=(struct sType*)come_increment_ref_count(((struct sType*)(right_value377=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value376=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 809, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value376,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value377,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values17___270[0]=come_increment_ref_count(((struct sType*)(right_value379=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value378=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 810, "sType")))),"int",(_Bool)0,info))));
__list_values17___270[1]=come_increment_ref_count(((struct sType*)(right_value381=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value380=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 810, "sType")))),"int",(_Bool)0,info))));
__list_values17___270[2]=come_increment_ref_count(((struct sType*)(right_value383=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value382=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 810, "sType")))),"int",(_Bool)0,info))));
}        param_types_271=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value385=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value384=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 810, "struct list$1sTypeph")))),3,__list_values17___270))));
        come_call_finalizer3(right_value378,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value379,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value380,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value381,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value382,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value383,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value384,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value385,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values18___272[0]=come_increment_ref_count(((char*)(right_value386=xsprintf("come_malloc"))));
__list_values18___272[1]=come_increment_ref_count(((char*)(right_value387=xsprintf("come_debug"))));
__list_values18___272[2]=come_increment_ref_count(((char*)(right_value388=xsprintf("come_gc"))));
}        param_names_273=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value390=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value389=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 811, "struct list$1charph")))),3,__list_values18___272))));
        right_value386 = come_decrement_ref_count2(right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value387 = come_decrement_ref_count2(right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value389,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value390,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_274=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value392=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value391=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 812, "list$1charph"))))))));
        come_call_finalizer3(right_value391,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value392,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_274,((void*)0));
        main_fun_275=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value396=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value393=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 814, "sFun")))),(char*)come_increment_ref_count(name_268),(struct sType*)come_increment_ref_count(result_type_269),(struct list$1sTypeph*)come_increment_ref_count(param_types_271),(struct list$1charph*)come_increment_ref_count(param_names_273),(struct list$1charph*)come_increment_ref_count(param_default_parametors_274),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value394=__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")))),(char*)come_increment_ref_count(((char*)(right_value395=__builtin_string("")))),info))));
        come_call_finalizer3(right_value393,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value394 = come_decrement_ref_count2(right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value395 = come_decrement_ref_count2(right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value396,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value397=__builtin_string(name_268)))),(struct sFun*)come_increment_ref_count(main_fun_275));
        right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_268 = come_decrement_ref_count2(name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_271,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_273,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_274,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_275,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_276=(char*)come_increment_ref_count(((char*)(right_value398=__builtin_string("come_heap_final"))));
        right_value398 = come_decrement_ref_count2(right_value398, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_277=(struct sType*)come_increment_ref_count(((struct sType*)(right_value400=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value399=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 825, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value399,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value400,sType_finalize, 0, 1, 0, 0, __result_obj__);
        param_types_278=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value402=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value401=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 826, "list$1sTypeph"))))))));
        come_call_finalizer3(right_value401,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value402,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        param_names_279=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value404=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value403=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 827, "list$1charph"))))))));
        come_call_finalizer3(right_value403,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value404,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_280=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value406=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value405=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 828, "list$1charph"))))))));
        come_call_finalizer3(right_value405,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value406,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        main_fun_281=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value410=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value407=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 829, "sFun")))),(char*)come_increment_ref_count(name_276),(struct sType*)come_increment_ref_count(result_type_277),(struct list$1sTypeph*)come_increment_ref_count(param_types_278),(struct list$1charph*)come_increment_ref_count(param_names_279),(struct list$1charph*)come_increment_ref_count(param_default_parametors_280),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value408=__builtin_string("void come_heap_final()")))),(char*)come_increment_ref_count(((char*)(right_value409=__builtin_string("")))),info))));
        come_call_finalizer3(right_value407,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value409 = come_decrement_ref_count2(right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value410,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value411=__builtin_string(name_276)))),(struct sFun*)come_increment_ref_count(main_fun_281));
        right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_276 = come_decrement_ref_count2(name_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_277,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_278,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_279,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_280,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_281,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_282=(char*)come_increment_ref_count(((char*)(right_value412=__builtin_string("come_null_check"))));
        right_value412 = come_decrement_ref_count2(right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_283=(struct sType*)come_increment_ref_count(((struct sType*)(right_value414=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value413=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 840, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value413,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value414,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values19___284[0]=come_increment_ref_count(((struct sType*)(right_value416=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value415=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 841, "sType")))),"void*",(_Bool)0,info))));
__list_values19___284[1]=come_increment_ref_count(((struct sType*)(right_value418=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value417=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 841, "sType")))),"char*",(_Bool)0,info))));
__list_values19___284[2]=come_increment_ref_count(((struct sType*)(right_value420=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value419=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 841, "sType")))),"int",(_Bool)0,info))));
__list_values19___284[3]=come_increment_ref_count(((struct sType*)(right_value422=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value421=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 841, "sType")))),"int",(_Bool)0,info))));
}        param_types_285=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value424=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value423=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 841, "struct list$1sTypeph")))),4,__list_values19___284))));
        come_call_finalizer3(right_value415,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value416,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value417,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value418,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value419,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value420,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value421,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value422,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value423,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value424,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values20___286[0]=come_increment_ref_count(((char*)(right_value425=__builtin_string("mem"))));
__list_values20___286[1]=come_increment_ref_count(((char*)(right_value426=__builtin_string("sname"))));
__list_values20___286[2]=come_increment_ref_count(((char*)(right_value427=__builtin_string("sline"))));
__list_values20___286[3]=come_increment_ref_count(((char*)(right_value428=__builtin_string("id"))));
}        param_names_287=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value430=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value429=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 842, "struct list$1charph")))),4,__list_values20___286))));
        right_value425 = come_decrement_ref_count2(right_value425, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value426 = come_decrement_ref_count2(right_value426, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value427 = come_decrement_ref_count2(right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value428 = come_decrement_ref_count2(right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value429,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value430,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_288=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value432=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value431=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 843, "list$1charph"))))))));
        come_call_finalizer3(right_value431,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value432,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        main_fun_289=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value436=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value433=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 844, "sFun")))),(char*)come_increment_ref_count(name_282),(struct sType*)come_increment_ref_count(result_type_283),(struct list$1sTypeph*)come_increment_ref_count(param_types_285),(struct list$1charph*)come_increment_ref_count(param_names_287),(struct list$1charph*)come_increment_ref_count(param_default_parametors_288),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value434=__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")))),(char*)come_increment_ref_count(((char*)(right_value435=__builtin_string("")))),info))));
        come_call_finalizer3(right_value433,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value434 = come_decrement_ref_count2(right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value436,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value437=__builtin_string(name_282)))),(struct sFun*)come_increment_ref_count(main_fun_289));
        right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_282 = come_decrement_ref_count2(name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_285,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_287,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_288,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_289,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    (come_push_stackframe("05function.c", 854,1),transpile_toplevel((_Bool)0,info),come_pop_stackframe());
    __result145__ = 0;
    return __result145__;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_155;
struct list$1sTypeph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_155, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_155=0;            i_155<num_value;            i_155++            ){
                list$1sTypeph_push_back(self,values[i_155]);
            }
            __result118__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result118__;
            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional235;
void* right_value177;
struct list_item$1sTypeph* litem_156;
struct sType* __dec_obj68;
_Bool _if_conditional236;
void* right_value178;
struct list_item$1sTypeph* litem_157;
struct sType* __dec_obj69;
void* right_value179;
struct list_item$1sTypeph* litem_158;
struct sType* __dec_obj70;
struct list$1sTypeph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value177 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1sTypeph*));
right_value178 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1sTypeph*));
right_value179 = (void*)0;
memset(&litem_158, 0, sizeof(struct list_item$1sTypeph*));
                    if(_if_conditional235=self->len==0,                    _if_conditional235) {
                        litem_156=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value177=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 217, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value177,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_156->prev=((void*)0);
                        litem_156->next=((void*)0);
                        __dec_obj68=litem_156->item;
                        litem_156->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_156;
                        self->head=litem_156;
                    }
                    else {
                        if(_if_conditional236=self->len==1,                        _if_conditional236) {
                            litem_157=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value178=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 227, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value178,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_157->prev=self->head;
                            litem_157->next=((void*)0);
                            __dec_obj69=litem_157->item;
                            litem_157->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_157;
                            self->head->next=litem_157;
                        }
                        else {
                            litem_158=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value179=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 237, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value179,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_158->prev=self->tail;
                            litem_158->next=((void*)0);
                            __dec_obj70=litem_158->item;
                            litem_158->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_158;
                            self->tail=litem_158;
                        }
                    }
                    self->len++;
                    __result117__ = __result_obj__ = self;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result117__;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_161;
struct list$1charph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_161, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_161=0;            i_161<num_value;            i_161++            ){
                list$1charph_push_back(self,values[i_161]);
            }
            __result120__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result120__;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional237;
void* right_value187;
struct list_item$1charph* litem_162;
char* __dec_obj71;
_Bool _if_conditional238;
void* right_value188;
struct list_item$1charph* litem_163;
char* __dec_obj72;
void* right_value189;
struct list_item$1charph* litem_164;
char* __dec_obj73;
struct list$1charph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value187 = (void*)0;
memset(&litem_162, 0, sizeof(struct list_item$1charph*));
right_value188 = (void*)0;
memset(&litem_163, 0, sizeof(struct list_item$1charph*));
right_value189 = (void*)0;
memset(&litem_164, 0, sizeof(struct list_item$1charph*));
                    if(_if_conditional237=self->len==0,                    _if_conditional237) {
                        litem_162=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value187=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 217, "list_item$1charph"))));
                        come_call_finalizer3(right_value187,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_162->prev=((void*)0);
                        litem_162->next=((void*)0);
                        __dec_obj71=litem_162->item;
                        litem_162->item=(char*)come_increment_ref_count(item);
                        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_162;
                        self->head=litem_162;
                    }
                    else {
                        if(_if_conditional238=self->len==1,                        _if_conditional238) {
                            litem_163=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value188=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph"))));
                            come_call_finalizer3(right_value188,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_163->prev=self->head;
                            litem_163->next=((void*)0);
                            __dec_obj72=litem_163->item;
                            litem_163->item=(char*)come_increment_ref_count(item);
                            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_163;
                            self->head->next=litem_163;
                        }
                        else {
                            litem_164=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value189=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph"))));
                            come_call_finalizer3(right_value189,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_164->prev=self->tail;
                            litem_164->next=((void*)0);
                            __dec_obj73=litem_164->item;
                            litem_164->item=(char*)come_increment_ref_count(item);
                            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail->next=litem_164;
                            self->tail=litem_164;
                        }
                    }
                    self->len++;
                    __result119__ = __result_obj__ = self;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result119__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool _if_conditional239;
unsigned int hash_185;
unsigned int it_186;
_Bool _while_condtional31;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool same_key_exist_203;
char* it2_206;
_Bool _if_conditional282;
_Bool _if_conditional283;
struct map$2charphsFunph* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_185, 0, sizeof(unsigned int));
memset(&it_186, 0, sizeof(unsigned int));
memset(&same_key_exist_203, 0, sizeof(_Bool));
memset(&it2_206, 0, sizeof(char*));
            if(_if_conditional239=self->len*10>=self->size,            _if_conditional239) {
                map$2charphsFunph_rehash(self);
            }
            hash_185=string_get_hash_key(key)%self->size;
            it_186=hash_185;
            while(_while_condtional31=(_Bool)1,            _while_condtional31) {
                if(_if_conditional251=self->item_existance[it_186],                _if_conditional251) {
                    if(_if_conditional252=string_equals(self->keys[it_186],key),                    _if_conditional252) {
                        if(_if_conditional253=1,                        _if_conditional253) {
                            list$1charp_remove(self->key_list,self->keys[it_186]);
                            self->keys[it_186] = come_decrement_ref_count2(self->keys[it_186], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_186]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_186]);
                            self->keys[it_186]=key;
                        }
                        if(_if_conditional273=1,                        _if_conditional273) {
                            come_call_finalizer3(self->items[it_186],sFun_finalize, 0, 0, 0, 0, (void*)0);
                            self->items[it_186]=(struct sFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_186]=item;
                        }
                        break;
                    }
                    it_186++;
                    if(_if_conditional274=it_186>=self->size,                    _if_conditional274) {
                        it_186=0;
                    }
                    else {
                        if(_if_conditional275=it_186==hash_185,                        _if_conditional275) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_186]=(_Bool)1;
                    if(_if_conditional276=1,                    _if_conditional276) {
                        self->keys[it_186]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_186]=key;
                    }
                    if(_if_conditional277=1,                    _if_conditional277) {
                        self->items[it_186]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_186]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_203=(_Bool)0;
            for(            it2_206=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_206=list$1charp_next(self->key_list)            ){
                if(_if_conditional282=string_equals(it2_206,key),                _if_conditional282) {
                    same_key_exist_203=(_Bool)1;
                }
            }
            if(_if_conditional283=!same_key_exist_203,            _if_conditional283) {
                list$1charp_push_back(self->key_list,key);
            }
            __result144__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result144__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
int size_168;
void* right_value201;
char** keys_169;
void* right_value202;
struct sFun** items_170;
void* right_value203;
_Bool* item_existance_171;
int len_172;
char* it_175;
struct sFun* default_value_178;
struct sFun* it2_181;
unsigned int hash_182;
int n_183;
_Bool _while_condtional30;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
struct sFun* default_value_184;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_168, 0, sizeof(int));
right_value201 = (void*)0;
memset(&keys_169, 0, sizeof(char**));
right_value202 = (void*)0;
memset(&items_170, 0, sizeof(struct sFun**));
right_value203 = (void*)0;
memset(&item_existance_171, 0, sizeof(_Bool*));
memset(&len_172, 0, sizeof(int));
memset(&it_175, 0, sizeof(char*));
memset(&default_value_178, 0, sizeof(struct sFun*));
memset(&it2_181, 0, sizeof(struct sFun*));
memset(&hash_182, 0, sizeof(unsigned int));
memset(&n_183, 0, sizeof(int));
memset(&default_value_184, 0, sizeof(struct sFun*));
                    size_168=self->size*10;
                    keys_169=(char**)come_increment_ref_count(((char**)(right_value201=(char**)come_calloc(1, sizeof(char*)*(1*(size_168)), "./neo-c.h", 1313, "char*%"))));
                    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_170=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value202=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_168)), "./neo-c.h", 1314, "sFun*%"))));
                    come_call_finalizer3(right_value202,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                    item_existance_171=(_Bool*)come_increment_ref_count(((_Bool*)(right_value203=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_168)), "./neo-c.h", 1315, "bool"))));
                    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_172=0;
                    for(                    it_175=map$2charphsFunph_begin(self);                    !map$2charphsFunph_end(self);                    it_175=map$2charphsFunph_next(self)                    ){
                        memset(&default_value_178,0,sizeof(struct sFun*));
                        it2_181=map$2charphsFunph_at(self,it_175,default_value_178);
                        hash_182=string_get_hash_key(it_175)%size_168;
                        n_183=hash_182;
                        while(_while_condtional30=(_Bool)1,                        _while_condtional30) {
                            if(_if_conditional248=item_existance_171[n_183],                            _if_conditional248) {
                                n_183++;
                                if(_if_conditional249=n_183>=size_168,                                _if_conditional249) {
                                    n_183=0;
                                }
                                else {
                                    if(_if_conditional250=n_183==hash_182,                                    _if_conditional250) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_171[n_183]=(_Bool)1;
                                keys_169[n_183]=it_175;
                                items_170[n_183]=map$2charphsFunph_at(self,it_175,default_value_184);
                                len_172++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_169;
                    self->items=items_170;
                    self->item_existance=item_existance_171;
                    self->size=size_168;
                    self->len=len_172;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional240;
char* result_173;
char* __result121__;
_Bool _if_conditional241;
char* __result122__;
char* result_174;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_173, 0, sizeof(char*));
memset(&result_174, 0, sizeof(char*));
                        if(_if_conditional240=self==((void*)0),                        _if_conditional240) {
                            memset(&result_173,0,sizeof(char*));
                            __result121__ = __result_obj__ = result_173;
                            return __result121__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result122__ = __result_obj__ = self->key_list->it->item;
                            return __result122__;
                        }
                        memset(&result_174,0,sizeof(char*));
                        __result123__ = __result_obj__ = result_174;
                        return __result123__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result124__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result124__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional242;
char* result_176;
char* __result125__;
_Bool _if_conditional243;
char* __result126__;
char* result_177;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_176, 0, sizeof(char*));
memset(&result_177, 0, sizeof(char*));
                        if(_if_conditional242=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional242) {
                            memset(&result_176,0,sizeof(char*));
                            __result125__ = __result_obj__ = result_176;
                            return __result125__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result126__ = __result_obj__ = self->key_list->it->item;
                            return __result126__;
                        }
                        memset(&result_177,0,sizeof(char*));
                        __result127__ = __result_obj__ = result_177;
                        return __result127__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_179;
unsigned int it_180;
_Bool _while_condtional29;
_Bool _if_conditional244;
_Bool _if_conditional245;
struct sFun* __result128__;
_Bool _if_conditional246;
_Bool _if_conditional247;
struct sFun* __result129__;
struct sFun* __result130__;
struct sFun* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_179, 0, sizeof(unsigned int));
memset(&it_180, 0, sizeof(unsigned int));
                            hash_179=string_get_hash_key(((char*)key))%self->size;
                            it_180=hash_179;
                            while(_while_condtional29=(_Bool)1,                            _while_condtional29) {
                                if(_if_conditional244=self->item_existance[it_180],                                _if_conditional244) {
                                    if(_if_conditional245=string_equals(self->keys[it_180],key),                                    _if_conditional245) {
                                        __result128__ = __result_obj__ = self->items[it_180];
                                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result128__;
                                    }
                                    it_180++;
                                    if(_if_conditional246=it_180>=self->size,                                    _if_conditional246) {
                                        it_180=0;
                                    }
                                    else {
                                        if(_if_conditional247=it_180==hash_179,                                        _if_conditional247) {
                                            __result129__ = __result_obj__ = default_value;
                                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result129__;
                                        }
                                    }
                                }
                                else {
                                    __result130__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result130__;
                                }
                            }
                            __result131__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result131__;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_187;
struct list_item$1charp* it_188;
_Bool _while_condtional32;
_Bool _if_conditional254;
struct list$1charp* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_187, 0, sizeof(int));
memset(&it_188, 0, sizeof(struct list_item$1charp*));
                                it2_187=0;
                                it_188=self->head;
                                while(_while_condtional32=it_188!=((void*)0),                                _while_condtional32) {
                                    if(_if_conditional254=string_equals(it_188->item,item),                                    _if_conditional254) {
                                        list$1charp_delete(self,it2_187,it2_187+1);
                                        break;
                                    }
                                    it2_187++;
                                    it_188=it_188->next;
                                }
                                __result135__ = __result_obj__ = self;
                                return __result135__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
int tmp_189;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
struct list$1charp* __result132__;
_Bool _if_conditional261;
_Bool _if_conditional262;
struct list_item$1charp* it_192;
int i_193;
_Bool _while_condtional34;
_Bool _if_conditional263;
struct list_item$1charp* prev_it_194;
_Bool _if_conditional264;
_Bool _if_conditional265;
struct list_item$1charp* it_195;
int i_196;
_Bool _while_condtional35;
_Bool _if_conditional266;
_Bool _if_conditional267;
struct list_item$1charp* prev_it_197;
struct list_item$1charp* it_198;
struct list_item$1charp* head_prev_it_199;
struct list_item$1charp* tail_it_200;
int i_201;
_Bool _while_condtional36;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
struct list_item$1charp* prev_it_202;
_Bool _if_conditional271;
_Bool _if_conditional272;
struct list$1charp* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_189, 0, sizeof(int));
memset(&it_192, 0, sizeof(struct list_item$1charp*));
memset(&i_193, 0, sizeof(int));
memset(&prev_it_194, 0, sizeof(struct list_item$1charp*));
memset(&it_195, 0, sizeof(struct list_item$1charp*));
memset(&i_196, 0, sizeof(int));
memset(&prev_it_197, 0, sizeof(struct list_item$1charp*));
memset(&it_198, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_199, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_200, 0, sizeof(struct list_item$1charp*));
memset(&i_201, 0, sizeof(int));
memset(&prev_it_202, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional255=head<0,                                            _if_conditional255) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional256=tail<0,                                            _if_conditional256) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional257=head>tail,                                            _if_conditional257) {
                                                tmp_189=tail;
                                                tail=head;
                                                head=tmp_189;
                                            }
                                            if(_if_conditional258=head<0,                                            _if_conditional258) {
                                                head=0;
                                            }
                                            if(_if_conditional259=tail>self->len,                                            _if_conditional259) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional260=head==tail,                                            _if_conditional260) {
                                                __result132__ = __result_obj__ = self;
                                                return __result132__;
                                            }
                                            if(_if_conditional261=head==0&&tail==self->len,                                            _if_conditional261) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional262=head==0,                                                _if_conditional262) {
                                                    it_192=self->head;
                                                    i_193=0;
                                                    while(_while_condtional34=it_192!=((void*)0),                                                    _while_condtional34) {
                                                        if(_if_conditional263=i_193<tail,                                                        _if_conditional263) {
                                                            prev_it_194=it_192;
                                                            it_192=it_192->next;
                                                            i_193++;
                                                            come_call_finalizer3(prev_it_194,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional264=i_193==tail,                                                            _if_conditional264) {
                                                                self->head=it_192;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_192=it_192->next;
                                                                i_193++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional265=tail==self->len,                                                    _if_conditional265) {
                                                        it_195=self->head;
                                                        i_196=0;
                                                        while(_while_condtional35=it_195!=((void*)0),                                                        _while_condtional35) {
                                                            if(_if_conditional266=i_196==head,                                                            _if_conditional266) {
                                                                self->tail=it_195->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional267=i_196>=head,                                                            _if_conditional267) {
                                                                prev_it_197=it_195;
                                                                it_195=it_195->next;
                                                                i_196++;
                                                                come_call_finalizer3(prev_it_197,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_195=it_195->next;
                                                                i_196++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_198=self->head;
                                                        head_prev_it_199=((void*)0);
                                                        tail_it_200=((void*)0);
                                                        i_201=0;
                                                        while(_while_condtional36=it_198!=((void*)0),                                                        _while_condtional36) {
                                                            if(_if_conditional268=i_201==head,                                                            _if_conditional268) {
                                                                head_prev_it_199=it_198->prev;
                                                            }
                                                            if(_if_conditional269=i_201==tail,                                                            _if_conditional269) {
                                                                tail_it_200=it_198;
                                                            }
                                                            if(_if_conditional270=i_201>=head&&i_201<tail,                                                            _if_conditional270) {
                                                                prev_it_202=it_198;
                                                                it_198=it_198->next;
                                                                i_201++;
                                                                come_call_finalizer3(prev_it_202,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_198=it_198->next;
                                                                i_201++;
                                                            }
                                                        }
                                                        if(_if_conditional271=head_prev_it_199!=((void*)0),                                                        _if_conditional271) {
                                                            head_prev_it_199->next=tail_it_200;
                                                        }
                                                        if(_if_conditional272=tail_it_200!=((void*)0),                                                        _if_conditional272) {
                                                            tail_it_200->prev=head_prev_it_199;
                                                        }
                                                    }
                                                }
                                            }
                                            __result134__ = __result_obj__ = self;
                                            return __result134__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_190;
_Bool _while_condtional33;
struct list_item$1charp* prev_it_191;
struct list$1charp* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_190, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_191, 0, sizeof(struct list_item$1charp*));
                                                    it_190=self->head;
                                                    while(_while_condtional33=it_190!=((void*)0),                                                    _while_condtional33) {
                                                        prev_it_191=it_190;
                                                        it_190=it_190->next;
                                                        come_call_finalizer3(prev_it_191,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result133__ = __result_obj__ = self;
                                                    return __result133__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional278;
char* result_204;
char* __result136__;
_Bool _if_conditional279;
char* __result137__;
char* result_205;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_204, 0, sizeof(char*));
memset(&result_205, 0, sizeof(char*));
                if(_if_conditional278=self==((void*)0),                _if_conditional278) {
                    memset(&result_204,0,sizeof(char*));
                    __result136__ = __result_obj__ = result_204;
                    return __result136__;
                }
                self->it=self->head;
                if(self->it) {
                    __result137__ = __result_obj__ = self->it->item;
                    return __result137__;
                }
                memset(&result_205,0,sizeof(char*));
                __result138__ = __result_obj__ = result_205;
                return __result138__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
                __result139__ = self==((void*)0)||self->it==((void*)0);
                return __result139__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional280;
char* result_207;
char* __result140__;
_Bool _if_conditional281;
char* __result141__;
char* result_208;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_207, 0, sizeof(char*));
memset(&result_208, 0, sizeof(char*));
                if(_if_conditional280=self==((void*)0)||self->it==((void*)0),                _if_conditional280) {
                    memset(&result_207,0,sizeof(char*));
                    __result140__ = __result_obj__ = result_207;
                    return __result140__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result141__ = __result_obj__ = self->it->item;
                    return __result141__;
                }
                memset(&result_208,0,sizeof(char*));
                __result142__ = __result_obj__ = result_208;
                return __result142__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional284;
void* right_value204;
struct list_item$1charp* litem_209;
_Bool _if_conditional285;
void* right_value205;
struct list_item$1charp* litem_210;
void* right_value206;
struct list_item$1charp* litem_211;
struct list$1charp* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
memset(&litem_209, 0, sizeof(struct list_item$1charp*));
right_value205 = (void*)0;
memset(&litem_210, 0, sizeof(struct list_item$1charp*));
right_value206 = (void*)0;
memset(&litem_211, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional284=self->len==0,                    _if_conditional284) {
                        litem_209=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value204=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                        come_call_finalizer3(right_value204,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_209->prev=((void*)0);
                        litem_209->next=((void*)0);
                        litem_209->item=item;
                        self->tail=litem_209;
                        self->head=litem_209;
                    }
                    else {
                        if(_if_conditional285=self->len==1,                        _if_conditional285) {
                            litem_210=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value205=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                            come_call_finalizer3(right_value205,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_210->prev=self->head;
                            litem_210->next=((void*)0);
                            litem_210->item=item;
                            self->tail=litem_210;
                            self->head->next=litem_210;
                        }
                        else {
                            litem_211=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value206=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                            come_call_finalizer3(right_value206,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_211->prev=self->tail;
                            litem_211->next=((void*)0);
                            litem_211->item=item;
                            self->tail->next=litem_211;
                            self->tail=litem_211;
                        }
                    }
                    self->len++;
                    __result143__ = __result_obj__ = self;
                    return __result143__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
char* source_head_290;
_Bool is_type_name_flag_291;
int sline_292;
_Bool define_struct_nobody_293;
char* p_294;
int sline_295;
_Bool _if_conditional286;
_Bool _if_conditional287;
void* right_value438;
char* word_296;
_Bool _if_conditional288;
_Bool define_function_pointer_result_function_297;
_Bool define_variable_between_brace_298;
_Bool _if_conditional289;
char* p_299;
_Bool _if_conditional290;
void* right_value439;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_300;
char* fun_name_301;
_Bool err_302;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
void* right_value440;
char* word_303;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool define_function_flag_304;
_Bool _if_conditional298;
char* p_305;
_Bool _if_conditional299;
void* right_value441;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_306;
char* fun_name_307;
_Bool err_308;
_Bool _if_conditional300;
char* word_309;
_Bool _if_conditional301;
void* right_value442;
char* __dec_obj74;
_Bool _if_conditional302;
void* right_value443;
char* __dec_obj75;
char* __dec_obj76;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _while_condtional37;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
void* right_value444;
char* __dec_obj77;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool define_variable_310;
_Bool _if_conditional311;
char* p_311;
_Bool _if_conditional312;
_Bool _if_conditional313;
void* right_value445;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_312;
char* fun_name_313;
_Bool err_314;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
void* right_value446;
char* word_315;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool _if_conditional319;
void* right_value447;
char* word_316;
_Bool _if_conditional320;
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _while_condtional38;
_Bool _if_conditional325;
char* p_317;
_Bool _if_conditional326;
_Bool _if_conditional327;
void* right_value448;
_Bool _if_conditional328;
void* right_value449;
char* word_318;
_Bool _if_conditional329;
void* right_value450;
char* __dec_obj78;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _while_condtional39;
_Bool _if_conditional334;
_Bool _if_conditional335;
void* right_value451;
char* word_319;
_Bool _if_conditional336;
_Bool _while_condtional41;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool _if_conditional339;
void* right_value452;
char* word_322;
void* right_value453;
void* right_value454;
struct sNode* node_323;
struct sNode* __result147__;
_Bool _if_conditional340;
_Bool _if_conditional341;
void* right_value455;
struct sNode* __result148__;
_Bool _if_conditional342;
char* header_head_324;
void* right_value456;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_325;
char* fun_name_326;
_Bool err_327;
_Bool _if_conditional343;
void* right_value457;
void* right_value458;
struct list$1sTypeph* param_types_328;
void* right_value459;
void* right_value460;
struct list$1charph* param_names_329;
_Bool _if_conditional344;
_Bool _while_condtional42;
void* right_value461;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_330;
char* param_name_331;
_Bool err_332;
_Bool _if_conditional345;
static int num_function_pointer_result_var_name_a_333=0;
void* right_value462;
_Bool _if_conditional346;
_Bool _if_conditional347;
int __exception_result_var_b1;
_Bool _if_conditional348;
void* right_value463;
void* right_value464;
struct list$1sTypeph* param_types2_334;
void* right_value465;
void* right_value466;
struct list$1charph* param_names2_335;
_Bool _if_conditional349;
_Bool _while_condtional43;
void* right_value467;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_336;
char* param_name_337;
_Bool err_338;
_Bool _if_conditional350;
static int num_function_pointer_result_var_name_b_339=0;
void* right_value468;
_Bool _if_conditional351;
_Bool _if_conditional352;
char* header_tail_340;
void* right_value469;
void* right_value470;
struct sType* result_type2_341;
void* right_value471;
void* right_value472;
struct tuple1$1sTypeph* __dec_obj80;
void* right_value473;
struct list$1sTypeph* __dec_obj81;
void* right_value474;
struct list$1charph* __dec_obj82;
_Bool var_args_342;
void* right_value475;
void* right_value476;
struct buffer* header_buf_343;
void* right_value477;
void* right_value478;
struct list$1charph* param_default_parametors_344;
void* right_value479;
void* right_value480;
void* right_value481;
void* right_value482;
void* right_value483;
struct sFun* fun_345;
void* right_value484;
struct sFun* fun2_349;
_Bool _if_conditional357;
void* right_value485;
void* right_value486;
void* right_value487;
struct sNode* _inf_value1;
struct sFunNode* _inf_obj_value1;
void* right_value522;
struct sNode* __result178__;
_Bool _if_conditional425;
void* right_value523;
struct sNode* __result179__;
_Bool _if_conditional426;
void* right_value524;
struct sNode* node_386;
char* source_tail_387;
void* right_value525;
void* right_value526;
struct buffer* header_388;
void* right_value527;
struct sNode* __result180__;
void* right_value528;
char* buf2_389;
void* right_value529;
struct sNode* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_290, 0, sizeof(char*));
memset(&is_type_name_flag_291, 0, sizeof(_Bool));
memset(&sline_292, 0, sizeof(int));
memset(&define_struct_nobody_293, 0, sizeof(_Bool));
memset(&p_294, 0, sizeof(char*));
memset(&sline_295, 0, sizeof(int));
right_value438 = (void*)0;
memset(&word_296, 0, sizeof(char*));
memset(&define_function_pointer_result_function_297, 0, sizeof(_Bool));
memset(&define_variable_between_brace_298, 0, sizeof(_Bool));
memset(&p_299, 0, sizeof(char*));
right_value439 = (void*)0;
memset(&result_type_300, 0, sizeof(struct sType*));
memset(&fun_name_301, 0, sizeof(char*));
memset(&err_302, 0, sizeof(_Bool));
memset(&result_type_300, 0, sizeof(struct sType*));
memset(&fun_name_301, 0, sizeof(char*));
memset(&err_302, 0, sizeof(_Bool));
right_value440 = (void*)0;
memset(&word_303, 0, sizeof(char*));
memset(&define_function_flag_304, 0, sizeof(_Bool));
memset(&p_305, 0, sizeof(char*));
right_value441 = (void*)0;
memset(&result_type_306, 0, sizeof(struct sType*));
memset(&fun_name_307, 0, sizeof(char*));
memset(&err_308, 0, sizeof(_Bool));
memset(&result_type_306, 0, sizeof(struct sType*));
memset(&fun_name_307, 0, sizeof(char*));
memset(&err_308, 0, sizeof(_Bool));
memset(&word_309, 0, sizeof(char*));
right_value442 = (void*)0;
right_value443 = (void*)0;
right_value444 = (void*)0;
memset(&define_variable_310, 0, sizeof(_Bool));
memset(&p_311, 0, sizeof(char*));
right_value445 = (void*)0;
memset(&result_type_312, 0, sizeof(struct sType*));
memset(&fun_name_313, 0, sizeof(char*));
memset(&err_314, 0, sizeof(_Bool));
memset(&result_type_312, 0, sizeof(struct sType*));
memset(&fun_name_313, 0, sizeof(char*));
memset(&err_314, 0, sizeof(_Bool));
right_value446 = (void*)0;
memset(&word_315, 0, sizeof(char*));
right_value447 = (void*)0;
memset(&word_316, 0, sizeof(char*));
memset(&p_317, 0, sizeof(char*));
right_value448 = (void*)0;
right_value449 = (void*)0;
memset(&word_318, 0, sizeof(char*));
right_value450 = (void*)0;
right_value451 = (void*)0;
memset(&word_319, 0, sizeof(char*));
right_value452 = (void*)0;
memset(&word_322, 0, sizeof(char*));
right_value453 = (void*)0;
right_value454 = (void*)0;
memset(&node_323, 0, sizeof(struct sNode*));
right_value455 = (void*)0;
memset(&header_head_324, 0, sizeof(char*));
right_value456 = (void*)0;
memset(&result_type_325, 0, sizeof(struct sType*));
memset(&fun_name_326, 0, sizeof(char*));
memset(&err_327, 0, sizeof(_Bool));
memset(&result_type_325, 0, sizeof(struct sType*));
memset(&fun_name_326, 0, sizeof(char*));
memset(&err_327, 0, sizeof(_Bool));
right_value457 = (void*)0;
right_value458 = (void*)0;
memset(&param_types_328, 0, sizeof(struct list$1sTypeph*));
right_value459 = (void*)0;
right_value460 = (void*)0;
memset(&param_names_329, 0, sizeof(struct list$1charph*));
right_value461 = (void*)0;
memset(&param_type_330, 0, sizeof(struct sType*));
memset(&param_name_331, 0, sizeof(char*));
memset(&err_332, 0, sizeof(_Bool));
memset(&param_type_330, 0, sizeof(struct sType*));
memset(&param_name_331, 0, sizeof(char*));
memset(&err_332, 0, sizeof(_Bool));
right_value462 = (void*)0;
right_value463 = (void*)0;
right_value464 = (void*)0;
memset(&param_types2_334, 0, sizeof(struct list$1sTypeph*));
right_value465 = (void*)0;
right_value466 = (void*)0;
memset(&param_names2_335, 0, sizeof(struct list$1charph*));
right_value467 = (void*)0;
memset(&param_type_336, 0, sizeof(struct sType*));
memset(&param_name_337, 0, sizeof(char*));
memset(&err_338, 0, sizeof(_Bool));
memset(&param_type_336, 0, sizeof(struct sType*));
memset(&param_name_337, 0, sizeof(char*));
memset(&err_338, 0, sizeof(_Bool));
right_value468 = (void*)0;
memset(&header_tail_340, 0, sizeof(char*));
right_value469 = (void*)0;
right_value470 = (void*)0;
memset(&result_type2_341, 0, sizeof(struct sType*));
right_value471 = (void*)0;
right_value472 = (void*)0;
right_value473 = (void*)0;
right_value474 = (void*)0;
memset(&var_args_342, 0, sizeof(_Bool));
right_value475 = (void*)0;
right_value476 = (void*)0;
memset(&header_buf_343, 0, sizeof(struct buffer*));
right_value477 = (void*)0;
right_value478 = (void*)0;
memset(&param_default_parametors_344, 0, sizeof(struct list$1charph*));
right_value479 = (void*)0;
right_value480 = (void*)0;
right_value481 = (void*)0;
right_value482 = (void*)0;
right_value483 = (void*)0;
memset(&fun_345, 0, sizeof(struct sFun*));
right_value484 = (void*)0;
memset(&fun2_349, 0, sizeof(struct sFun*));
right_value485 = (void*)0;
right_value486 = (void*)0;
right_value487 = (void*)0;
right_value522 = (void*)0;
right_value523 = (void*)0;
right_value524 = (void*)0;
memset(&node_386, 0, sizeof(struct sNode*));
memset(&source_tail_387, 0, sizeof(char*));
right_value525 = (void*)0;
right_value526 = (void*)0;
memset(&header_388, 0, sizeof(struct buffer*));
right_value527 = (void*)0;
right_value528 = (void*)0;
memset(&buf2_389, 0, sizeof(char*));
right_value529 = (void*)0;
    source_head_290=info->p;
    is_type_name_flag_291=is_type_name(buf,info);
    sline_292=info->sline;
    define_struct_nobody_293=(_Bool)0;
    {
        p_294=info->p;
        sline_295=info->sline;
        if(_if_conditional286=charp_operator_equals(buf,"struct"),        _if_conditional286) {
            if(_if_conditional287=xisalpha(*info->p)||*info->p==95,            _if_conditional287) {
                word_296=(char*)come_increment_ref_count(((char*)(right_value438=parse_word(info))));
                right_value438 = come_decrement_ref_count2(right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional288=*info->p==59,                _if_conditional288) {
                    define_struct_nobody_293=(_Bool)1;
                }
                word_296 = come_decrement_ref_count2(word_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_295;
    }
    define_function_pointer_result_function_297=(_Bool)0;
    define_variable_between_brace_298=(_Bool)0;
    if(is_type_name_flag_291) {
        p_299=info->p;
        info->p=head;
        if(_if_conditional290=xisalpha(*info->p)||*info->p==95,        _if_conditional290) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value439=backtrace_parse_type((_Bool)0,info)));
            result_type_300=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_301=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_302=multiple_assign_var1->v3;
            come_call_finalizer3(right_value439,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional293=*info->p==40,            _if_conditional293) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional294=*info->p!=42,                _if_conditional294) {
                    define_function_pointer_result_function_297=(_Bool)1;
                    if(_if_conditional295=xisalpha(*info->p)||*info->p==95,                    _if_conditional295) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_303=(char*)come_increment_ref_count(((char*)(right_value440=parse_word(info))));
                        right_value440 = come_decrement_ref_count2(right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional296=!is_type_name(word_303,info)&&*info->p==41,                        _if_conditional296) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional297=*info->p==40,                            _if_conditional297) {
                            }
                            else {
                                define_variable_between_brace_298=(_Bool)1;
                            }
                        }
                        word_303 = come_decrement_ref_count2(word_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_300,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_301 = come_decrement_ref_count2(fun_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_292;
    }
    define_function_flag_304=(_Bool)0;
    if(_if_conditional298=is_type_name_flag_291&&!define_function_pointer_result_function_297&&charp_operator_not_equals(buf,"__typeof__"),    _if_conditional298) {
        p_305=info->p;
        info->p=head;
        if(_if_conditional299=xisalpha(*info->p)||*info->p==95,        _if_conditional299) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value441=backtrace_parse_type((_Bool)0,info)));
            result_type_306=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_307=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_308=multiple_assign_var2->v3;
            come_call_finalizer3(right_value441,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_306,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_307 = come_decrement_ref_count2(fun_name_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional300=!info->define_struct,        _if_conditional300) {
            info->define_struct=(_Bool)0;
            word_309=((void*)0);
            if(_if_conditional301=xisalnum(*info->p)||*info->p==95,            _if_conditional301) {
                __dec_obj74=word_309;
                word_309=(char*)come_increment_ref_count(((char*)(right_value442=parse_word(info))));
                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value442 = come_decrement_ref_count2(right_value442, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional302=string_operator_equals(word_309,"extern"),                _if_conditional302) {
                    __dec_obj75=word_309;
                    word_309=(char*)come_increment_ref_count(((char*)(right_value443=parse_word(info))));
                    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value443 = come_decrement_ref_count2(right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                __dec_obj76=word_309;
                word_309=((void*)0);
                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(word_309) {
                if(_if_conditional304=is_type_name(word_309,info),                _if_conditional304) {
                    while(_while_condtional37=*info->p==42,                    _while_condtional37) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional305=*info->p==91&&*(info->p+1)==93,                    _if_conditional305) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional306=*info->p==58,                    _if_conditional306) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional307=*info->p==58,                    _if_conditional307) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional308=xisalnum(*info->p)||*info->p==95,                    _if_conditional308) {
                        __dec_obj77=word_309;
                        word_309=(char*)come_increment_ref_count(((char*)(right_value444=parse_word(info))));
                        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value444 = come_decrement_ref_count2(right_value444, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                if(_if_conditional309=strlen(word_309)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58)),                _if_conditional309) {
                    if(is_type_name_flag_291) {
                        define_function_flag_304=(_Bool)1;
                    }
                }
            }
            word_309 = come_decrement_ref_count2(word_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_305;
        info->sline=sline_292;
    }
    define_variable_310=(_Bool)1;
    if(_if_conditional311=is_type_name_flag_291&&!define_function_pointer_result_function_297,    _if_conditional311) {
        p_311=info->p;
        info->p=head;
        if(_if_conditional312=!is_type_name_flag_291,        _if_conditional312) {
            define_variable_310=(_Bool)0;
        }
        if(_if_conditional313=xisalpha(*info->p)||*info->p==95,        _if_conditional313) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value445=backtrace_parse_type((_Bool)0,info)));
            result_type_312=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_313=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_314=multiple_assign_var3->v3;
            come_call_finalizer3(right_value445,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional314=*info->p==40,            _if_conditional314) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional315=*info->p==42,                _if_conditional315) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional316=xisalpha(*info->p)||*info->p==95,                    _if_conditional316) {
                        word_315=(char*)come_increment_ref_count(((char*)(right_value446=parse_word(info))));
                        right_value446 = come_decrement_ref_count2(right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional317=*info->p==41,                        _if_conditional317) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional318=*info->p==40,                            _if_conditional318) {
                                define_variable_310=(_Bool)1;
                            }
                        }
                        word_315 = come_decrement_ref_count2(word_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    if(_if_conditional319=xisalpha(*info->p)||*info->p==95,                    _if_conditional319) {
                        word_316=(char*)come_increment_ref_count(((char*)(right_value447=parse_word(info))));
                        right_value447 = come_decrement_ref_count2(right_value447, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional320=*info->p==41,                        _if_conditional320) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional321=!is_type_name(word_316,info)&&*info->p!=40,                            _if_conditional321) {
                                define_variable_310=(_Bool)1;
                            }
                        }
                        word_316 = come_decrement_ref_count2(word_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_312,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_313 = come_decrement_ref_count2(fun_name_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_310=(_Bool)0;
        }
        else {
            if(define_variable_310) {
            }
            else {
                if(_if_conditional324=!(xisalpha(*info->p)||*info->p==95),                _if_conditional324) {
                    define_variable_310=(_Bool)0;
                }
                while(_while_condtional38=xisalpha(*info->p)||*info->p==95,                _while_condtional38) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(_if_conditional325=*info->p==40||*info->p==58,                _if_conditional325) {
                    define_variable_310=(_Bool)0;
                }
            }
        }
        info->p=p_311;
        info->sline=sline_292;
    }
    else {
        define_variable_310=(_Bool)0;
    }
    {
        p_317=info->p;
        info->p=head;
        if(_if_conditional326=charp_operator_equals(buf,"struct"),        _if_conditional326) {
            if(_if_conditional327=xisalpha(*info->p)||*info->p==95,            _if_conditional327) {
                ((char*)(right_value448=parse_word(info)));
                right_value448 = come_decrement_ref_count2(right_value448, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional328=xisalpha(*info->p)||*info->p==95,                _if_conditional328) {
                    word_318=(char*)come_increment_ref_count(((char*)(right_value449=parse_word(info))));
                    right_value449 = come_decrement_ref_count2(right_value449, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional329=xisalpha(*info->p)||*info->p==95,                    _if_conditional329) {
                        __dec_obj78=word_318;
                        word_318=(char*)come_increment_ref_count(((char*)(right_value450=parse_word(info))));
                        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value450 = come_decrement_ref_count2(right_value450, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional330=string_operator_equals(word_318,"extends"),                        _if_conditional330) {
                            define_variable_310=(_Bool)0;
                        }
                    }
                    word_318 = come_decrement_ref_count2(word_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_310=(_Bool)0;
        }
        else {
            if(define_variable_310) {
            }
            else {
                if(_if_conditional333=!(xisalpha(*info->p)||*info->p==95),                _if_conditional333) {
                    define_variable_310=(_Bool)0;
                }
                while(_while_condtional39=xisalpha(*info->p)||*info->p==95,                _while_condtional39) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(_if_conditional334=*info->p==40||*info->p==58,                _if_conditional334) {
                    define_variable_310=(_Bool)0;
                }
            }
        }
        info->p=p_317;
        info->sline=sline_292;
    }
    if(_if_conditional335=charp_operator_equals(buf,"template"),    _if_conditional335) {
        word_319=(char*)come_increment_ref_count(((char*)(right_value451=parse_word(info))));
        right_value451 = come_decrement_ref_count2(right_value451, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional336=*info->p==60,        _if_conditional336) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1charph_reset(info->method_generics_type_names);
            while(_while_condtional41=(_Bool)1,            _while_condtional41) {
                if(_if_conditional337=*info->p==62,                _if_conditional337) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    if(_if_conditional338=*info->p==44,                    _if_conditional338) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(_if_conditional339=*info->p==0,                        _if_conditional339) {
                            err_msg(info,"unexpected source end");
                            exit(2);
                        }
                        else {
                            word_322=(char*)come_increment_ref_count(((char*)(right_value452=parse_word(info))));
                            right_value452 = come_decrement_ref_count2(right_value452, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value453=string_clone(word_322)))));
                            right_value453 = come_decrement_ref_count2(right_value453, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            word_322 = come_decrement_ref_count2(word_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            node_323=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value454=parse_function(info))));
            if(right_value454) { right_value454 = come_decrement_ref_count2(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            list$1charph_reset(info->method_generics_type_names);
            __result147__ = __result_obj__ = node_323;
            if(node_323) { node_323 = come_decrement_ref_count2(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_319 = come_decrement_ref_count2(word_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result147__;
            if(node_323) { node_323 = come_decrement_ref_count2(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_319 = come_decrement_ref_count2(word_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(define_struct_nobody_293) {
        }
        else {
            if(define_variable_between_brace_298) {
                info->p=head;
                info->sline=sline_292;
                __result148__ = __result_obj__ = ((struct sNode*)(right_value455=parse_global_variable(info)));
                if(right_value455) { right_value455 = come_decrement_ref_count2(right_value455, ((struct sNode*)right_value455)->finalize, ((struct sNode*)right_value455)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result148__;
            }
            else {
                if(define_function_pointer_result_function_297) {
                    header_head_324=info->p;
                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value456=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    result_type_325=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                    fun_name_326=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    err_327=multiple_assign_var4->v3;
                    come_call_finalizer3(right_value456,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional343=*info->p==40,                    _if_conditional343) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        param_types_328=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value458=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value457=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1168, "list$1sTypeph"))))))));
                        come_call_finalizer3(right_value457,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value458,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        param_names_329=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value460=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value459=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1169, "list$1charph"))))))));
                        come_call_finalizer3(right_value459,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value460,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional344=*info->p==41,                        _if_conditional344) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            while(_while_condtional42=(_Bool)1,                            _while_condtional42) {
                                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value461=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                param_type_330=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                param_name_331=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                err_332=multiple_assign_var5->v3;
                                come_call_finalizer3(right_value461,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional345=!err_332,                                _if_conditional345) {
                                    err_msg(info,"parse_type is failed");
                                    exit(2);
                                }
                                list$1sTypeph_push_back(param_types_328,(struct sType*)come_increment_ref_count(param_type_330));
                                list$1charph_push_back(param_names_329,(char*)come_increment_ref_count(((char*)(right_value462=xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_333)))));
                                right_value462 = come_decrement_ref_count2(right_value462, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(_if_conditional346=*info->p==44,                                _if_conditional346) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(_if_conditional347=*info->p==41,                                    _if_conditional347) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        come_call_finalizer3(param_type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        param_name_331 = come_decrement_ref_count2(param_name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    else {
                                        err_msg(info,"require , or )");
                                        exit(2);
                                    }
                                }
                                come_call_finalizer3(param_type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
                                param_name_331 = come_decrement_ref_count2(param_name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        (come_push_stackframe("05function.c", 1205, 2),__exception_result_var_b1=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b1);
                        if(_if_conditional348=*info->p==40,                        _if_conditional348) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            param_types2_334=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value464=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value463=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1211, "list$1sTypeph"))))))));
                            come_call_finalizer3(right_value463,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value464,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            param_names2_335=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value466=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value465=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1212, "list$1charph"))))))));
                            come_call_finalizer3(right_value465,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value466,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional349=*info->p==41,                            _if_conditional349) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                while(_while_condtional43=(_Bool)1,                                _while_condtional43) {
                                    multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value467=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                    param_type_336=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                    param_name_337=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                    err_338=multiple_assign_var6->v3;
                                    come_call_finalizer3(right_value467,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional350=!err_338,                                    _if_conditional350) {
                                        err_msg(info,"parse_type is failed");
                                        exit(2);
                                    }
                                    list$1sTypeph_push_back(param_types2_334,(struct sType*)come_increment_ref_count(param_type_336));
                                    list$1charph_push_back(param_names2_335,(char*)come_increment_ref_count(((char*)(right_value468=xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_339)))));
                                    right_value468 = come_decrement_ref_count2(right_value468, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional351=*info->p==44,                                    _if_conditional351) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(_if_conditional352=*info->p==41,                                        _if_conditional352) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            come_call_finalizer3(param_type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            param_name_337 = come_decrement_ref_count2(param_name_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            break;
                                        }
                                        else {
                                            err_msg(info,"require , or )");
                                            exit(2);
                                        }
                                    }
                                    come_call_finalizer3(param_type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    param_name_337 = come_decrement_ref_count2(param_name_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            header_tail_340=info->p;
                            result_type2_341=(struct sType*)come_increment_ref_count(((struct sType*)(right_value470=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value469=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1250, "sType")))),"lambda",(_Bool)0,info))));
                            come_call_finalizer3(right_value469,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value470,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj80=result_type2_341->mResultType;
                            result_type2_341->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value472=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value471=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 1252, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_325)))));
                            come_call_finalizer3(__dec_obj80,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value471,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value472,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj81=result_type2_341->mParamTypes;
                            result_type2_341->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value473=list$1sTypephp_clone(param_types2_334))));
                            come_call_finalizer3(__dec_obj81,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value473,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj82=result_type2_341->mParamNames;
                            result_type2_341->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value474=list$1charphp_clone(param_names2_335))));
                            come_call_finalizer3(__dec_obj82,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value474,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            result_type2_341->mVarArgs=(_Bool)0;
                            result_type2_341->mStatic=(_Bool)0;
                            var_args_342=(_Bool)0;
                            header_buf_343=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value476=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value475=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1260, "buffer"))))))));
                            come_call_finalizer3(right_value475,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value476,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_buf_343,header_head_324,header_tail_340-header_head_324);
                            buffer_append_char(header_buf_343,0);
                            param_default_parametors_344=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value478=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value477=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1264, "list$1charph"))))))));
                            come_call_finalizer3(right_value477,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value478,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            fun_345=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value483=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value479=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1266, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value480=__builtin_string(fun_name_326)))),(struct sType*)come_increment_ref_count(result_type2_341),(struct list$1sTypeph*)come_increment_ref_count(param_types_328),(struct list$1charph*)come_increment_ref_count(param_names_329),(struct list$1charph*)come_increment_ref_count(param_default_parametors_344),(_Bool)1,var_args_342,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value481=buffer_to_string(header_buf_343)))),(char*)come_increment_ref_count(((char*)(right_value482=__builtin_string(info->sname)))),info))));
                            come_call_finalizer3(right_value479,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value480 = come_decrement_ref_count2(right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value481 = come_decrement_ref_count2(right_value481, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value482 = come_decrement_ref_count2(right_value482, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value483,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            fun2_349=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value484=__builtin_string(fun_name_326))));
                            right_value484 = come_decrement_ref_count2(right_value484, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional357=fun2_349==((void*)0)||fun2_349->mExternal,                            _if_conditional357) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value485=string_clone(fun_name_326)))),(struct sFun*)come_increment_ref_count(fun_345));
                                right_value485 = come_decrement_ref_count2(right_value485, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1278, "struct sNode");
                            _inf_obj_value1=come_increment_ref_count(((struct sFunNode*)(right_value487=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value486=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1278, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_345),info))));
                            _inf_value1->_protocol_obj=_inf_obj_value1;
                            _inf_value1->finalize=(void*)sFunNode_finalize;
                            _inf_value1->clone=(void*)sFunNode_clone;
                            _inf_value1->compile=(void*)sFunNode_compile;
                            _inf_value1->sline=(void*)sNodeBase_sline;
                            _inf_value1->sname=(void*)sNodeBase_sname;
                            _inf_value1->terminated=(void*)sFunNode_terminated;
                            _inf_value1->kind=(void*)sFunNode_kind;
                            __result178__ = __result_obj__ = ((struct sNode*)(right_value522=_inf_value1));
                            come_call_finalizer3(param_types2_334,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names2_335,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_343,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_344,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_345,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_328,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names_329,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_325,sType_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_326 = come_decrement_ref_count2(fun_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value486,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value487,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value522) { right_value522 = come_decrement_ref_count2(right_value522, ((struct sNode*)right_value522)->finalize, ((struct sNode*)right_value522)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result178__;
                            come_call_finalizer3(param_types2_334,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names2_335,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_343,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_344,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_345,sFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            err_msg(info,"require (");
                            exit(2);
                        }
                        come_call_finalizer3(param_types_328,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_names_329,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(result_type_325,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_326 = come_decrement_ref_count2(fun_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(define_function_flag_304) {
                        info->p=head;
                        info->sline=sline_292;
                        __result179__ = __result_obj__ = ((struct sNode*)(right_value523=parse_function(info)));
                        if(right_value523) { right_value523 = come_decrement_ref_count2(right_value523, ((struct sNode*)right_value523)->finalize, ((struct sNode*)right_value523)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result179__;
                    }
                    else {
                        if(define_variable_310) {
                            info->p=head;
                            info->sline=sline_292;
                            node_386=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value524=parse_global_variable(info))));
                            if(right_value524) { right_value524 = come_decrement_ref_count2(right_value524, ((struct sNode*)right_value524)->finalize, ((struct sNode*)right_value524)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            source_tail_387=info->p;
                            header_388=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value526=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value525=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1300, "buffer"))))))));
                            come_call_finalizer3(right_value525,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value526,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_388,source_head_290,source_tail_387-source_head_290);
                            add_come_code_at_come_header(info,"%s %s;\n",buf,((char*)(right_value527=buffer_to_string(header_388))));
                            right_value527 = come_decrement_ref_count2(right_value527, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __result180__ = __result_obj__ = node_386;
                            if(node_386) { node_386 = come_decrement_ref_count2(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            come_call_finalizer3(header_388,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            return __result180__;
                            if(node_386) { node_386 = come_decrement_ref_count2(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(header_388,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
    }
    info->p=head;
    info->sline=sline_292;
    buf2_389=(char*)come_increment_ref_count(((char*)(right_value528=parse_word(info))));
    right_value528 = come_decrement_ref_count2(right_value528, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result181__ = __result_obj__ = ((struct sNode*)(right_value529=top_level_v98(buf2_389,head,head_sline,info)));
    buf2_389 = come_decrement_ref_count2(buf2_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(right_value529) { right_value529 = come_decrement_ref_count2(right_value529, ((struct sNode*)right_value529)->finalize, ((struct sNode*)right_value529)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result181__;
    buf2_389 = come_decrement_ref_count2(buf2_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional291;
_Bool _if_conditional292;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional291=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional291) {
                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional292=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional292) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_320;
_Bool _while_condtional40;
struct list_item$1charph* prev_it_321;
struct list$1charph* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_320, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_321, 0, sizeof(struct list_item$1charph*));
                it_320=self->head;
                while(_while_condtional40=it_320!=((void*)0),                _while_condtional40) {
                    prev_it_321=it_320;
                    it_320=it_320->next;
                    come_call_finalizer3(prev_it_321,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result146__ = __result_obj__ = self;
                return __result146__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj79;
struct tuple1$1sTypeph* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
                                __dec_obj79=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
                                __result149__ = __result_obj__ = self;
                                come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result149__;
                                come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_346;
unsigned int hash_347;
unsigned int it_348;
_Bool _while_condtional44;
_Bool _if_conditional353;
_Bool _if_conditional354;
struct sFun* __result150__;
_Bool _if_conditional355;
_Bool _if_conditional356;
struct sFun* __result151__;
struct sFun* __result152__;
struct sFun* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_346, 0, sizeof(struct sFun*));
memset(&hash_347, 0, sizeof(unsigned int));
memset(&it_348, 0, sizeof(unsigned int));
                                memset(&default_value_346,0,sizeof(struct sFun*));
                                hash_347=string_get_hash_key(((char*)key))%self->size;
                                it_348=hash_347;
                                while(_while_condtional44=(_Bool)1,                                _while_condtional44) {
                                    if(_if_conditional353=self->item_existance[it_348],                                    _if_conditional353) {
                                        if(_if_conditional354=string_equals(self->keys[it_348],key),                                        _if_conditional354) {
                                            __result150__ = __result_obj__ = self->items[it_348];
                                            come_call_finalizer3(default_value_346,sFun_finalize, 0, 0, 0, 0, (void*)0);
                                            return __result150__;
                                        }
                                        it_348++;
                                        if(_if_conditional355=it_348>=self->size,                                        _if_conditional355) {
                                            it_348=0;
                                        }
                                        else {
                                            if(_if_conditional356=it_348==hash_347,                                            _if_conditional356) {
                                                __result151__ = __result_obj__ = default_value_346;
                                                come_call_finalizer3(default_value_346,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result151__;
                                            }
                                        }
                                    }
                                    else {
                                        __result152__ = __result_obj__ = default_value_346;
                                        come_call_finalizer3(default_value_346,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result152__;
                                    }
                                }
                                __result153__ = __result_obj__ = default_value_346;
                                come_call_finalizer3(default_value_346,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result153__;
                                come_call_finalizer3(default_value_346,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional364;
struct sFun* __result155__;
void* right_value490;
struct sFun* result_351;
_Bool _if_conditional365;
void* right_value491;
char* __dec_obj84;
_Bool _if_conditional366;
void* right_value492;
struct sType* __dec_obj85;
_Bool _if_conditional367;
void* right_value493;
struct list$1sTypeph* __dec_obj86;
_Bool _if_conditional368;
void* right_value494;
struct list$1charph* __dec_obj87;
_Bool _if_conditional369;
void* right_value495;
struct list$1charph* __dec_obj88;
_Bool _if_conditional370;
void* right_value496;
struct sType* __dec_obj89;
_Bool _if_conditional371;
void* right_value514;
struct sBlock* __dec_obj95;
_Bool _if_conditional415;
_Bool _if_conditional416;
_Bool _if_conditional417;
void* right_value515;
struct buffer* __dec_obj96;
_Bool _if_conditional418;
void* right_value516;
struct buffer* __dec_obj97;
_Bool _if_conditional419;
void* right_value517;
struct buffer* __dec_obj98;
_Bool _if_conditional420;
void* right_value518;
struct buffer* __dec_obj99;
_Bool _if_conditional421;
_Bool _if_conditional422;
void* right_value519;
char* __dec_obj100;
_Bool _if_conditional423;
_Bool _if_conditional424;
void* right_value520;
char* __dec_obj101;
struct sFun* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value490 = (void*)0;
memset(&result_351, 0, sizeof(struct sFun*));
right_value491 = (void*)0;
right_value492 = (void*)0;
right_value493 = (void*)0;
right_value494 = (void*)0;
right_value495 = (void*)0;
right_value496 = (void*)0;
right_value514 = (void*)0;
right_value515 = (void*)0;
right_value516 = (void*)0;
right_value517 = (void*)0;
right_value518 = (void*)0;
right_value519 = (void*)0;
right_value520 = (void*)0;
                                        if(_if_conditional364=self==(void*)0,                                        _if_conditional364) {
                                            __result155__ = __result_obj__ = (void*)0;
                                            return __result155__;
                                        }
                                        result_351=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value490=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"))));
                                        come_call_finalizer3(right_value490,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional365=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional365) {
                                            __dec_obj84=result_351->mName;
                                            result_351->mName=(char*)come_increment_ref_count(((char*)(right_value491=string_clone(self->mName))));
                                            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value491 = come_decrement_ref_count2(right_value491, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional366=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional366) {
                                            __dec_obj85=result_351->mResultType;
                                            result_351->mResultType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value492=sType_clone(self->mResultType))));
                                            come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value492,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional367=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional367) {
                                            __dec_obj86=result_351->mParamTypes;
                                            result_351->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value493=list$1sTypephp_clone(self->mParamTypes))));
                                            come_call_finalizer3(__dec_obj86,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value493,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional368=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional368) {
                                            __dec_obj87=result_351->mParamNames;
                                            result_351->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value494=list$1charphp_clone(self->mParamNames))));
                                            come_call_finalizer3(__dec_obj87,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value494,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional369=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                        _if_conditional369) {
                                            __dec_obj88=result_351->mParamDefaultParametors;
                                            result_351->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value495=list$1charphp_clone(self->mParamDefaultParametors))));
                                            come_call_finalizer3(__dec_obj88,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value495,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional370=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                        _if_conditional370) {
                                            __dec_obj89=result_351->mLambdaType;
                                            result_351->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value496=sType_clone(self->mLambdaType))));
                                            come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value496,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional371=self!=((void*)0)&&self->mBlock!=((void*)0),                                        _if_conditional371) {
                                            __dec_obj95=result_351->mBlock;
                                            result_351->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value514=sBlock_clone(self->mBlock))));
                                            come_call_finalizer3(__dec_obj95,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value514,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional415=self!=((void*)0),                                        _if_conditional415) {
                                            result_351->mExternal=self->mExternal;
                                        }
                                        if(_if_conditional416=self!=((void*)0),                                        _if_conditional416) {
                                            result_351->mVarArgs=self->mVarArgs;
                                        }
                                        if(_if_conditional417=self!=((void*)0)&&self->mSource!=((void*)0),                                        _if_conditional417) {
                                            __dec_obj96=result_351->mSource;
                                            result_351->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value515=buffer_clone(self->mSource))));
                                            come_call_finalizer3(__dec_obj96,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value515,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional418=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                        _if_conditional418) {
                                            __dec_obj97=result_351->mSourceHead;
                                            result_351->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value516=buffer_clone(self->mSourceHead))));
                                            come_call_finalizer3(__dec_obj97,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value516,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional419=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                        _if_conditional419) {
                                            __dec_obj98=result_351->mSourceHead2;
                                            result_351->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value517=buffer_clone(self->mSourceHead2))));
                                            come_call_finalizer3(__dec_obj98,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value517,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional420=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                        _if_conditional420) {
                                            __dec_obj99=result_351->mSourceDefer;
                                            result_351->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value518=buffer_clone(self->mSourceDefer))));
                                            come_call_finalizer3(__dec_obj99,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value518,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional421=self!=((void*)0),                                        _if_conditional421) {
                                            result_351->mStatic=self->mStatic;
                                        }
                                        if(_if_conditional422=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                        _if_conditional422) {
                                            __dec_obj100=result_351->mComeHeader;
                                            result_351->mComeHeader=(char*)come_increment_ref_count(((char*)(right_value519=string_clone(self->mComeHeader))));
                                            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value519 = come_decrement_ref_count2(right_value519, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional423=self!=((void*)0),                                        _if_conditional423) {
                                            result_351->mCloner=self->mCloner;
                                        }
                                        if(_if_conditional424=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                        _if_conditional424) {
                                            __dec_obj101=result_351->mDeclareSName;
                                            result_351->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value520=string_clone(self->mDeclareSName))));
                                            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value520 = come_decrement_ref_count2(right_value520, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result176__ = __result_obj__ = result_351;
                                        come_call_finalizer3(result_351,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result176__;
                                        come_call_finalizer3(result_351,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional372;
struct sBlock* __result156__;
void* right_value497;
struct sBlock* result_352;
_Bool _if_conditional373;
void* right_value498;
struct list$1sNodeph* __dec_obj90;
_Bool _if_conditional374;
void* right_value513;
struct sVarTable* __dec_obj94;
struct sBlock* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value497 = (void*)0;
memset(&result_352, 0, sizeof(struct sBlock*));
right_value498 = (void*)0;
right_value513 = (void*)0;
                                                if(_if_conditional372=self==(void*)0,                                                _if_conditional372) {
                                                    __result156__ = __result_obj__ = (void*)0;
                                                    return __result156__;
                                                }
                                                result_352=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value497=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
                                                come_call_finalizer3(right_value497,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional373=self!=((void*)0)&&self->mNodes!=((void*)0),                                                _if_conditional373) {
                                                    __dec_obj90=result_352->mNodes;
                                                    result_352->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value498=list$1sNodephp_clone(self->mNodes))));
                                                    come_call_finalizer3(__dec_obj90,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value498,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                }
                                                if(_if_conditional374=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                _if_conditional374) {
                                                    __dec_obj94=result_352->mVarTable;
                                                    result_352->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value513=sVarTable_clone(self->mVarTable))));
                                                    come_call_finalizer3(__dec_obj94,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value513,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                                }
                                                __result175__ = __result_obj__ = result_352;
                                                come_call_finalizer3(result_352,sBlock_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result175__;
                                                come_call_finalizer3(result_352,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional375;
struct sVarTable* __result157__;
void* right_value499;
struct sVarTable* result_353;
_Bool _if_conditional376;
void* right_value512;
struct map$2charphsVarph* __dec_obj93;
_Bool _if_conditional412;
_Bool _if_conditional413;
_Bool _if_conditional414;
struct sVarTable* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
right_value499 = (void*)0;
memset(&result_353, 0, sizeof(struct sVarTable*));
right_value512 = (void*)0;
                                                        if(_if_conditional375=self==(void*)0,                                                        _if_conditional375) {
                                                            __result157__ = __result_obj__ = (void*)0;
                                                            return __result157__;
                                                        }
                                                        result_353=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value499=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                                                        come_call_finalizer3(right_value499,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional376=self!=((void*)0)&&self->mVars!=((void*)0),                                                        _if_conditional376) {
                                                            __dec_obj93=result_353->mVars;
                                                            result_353->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value512=map$2charphsVarphp_clone(self->mVars))));
                                                            come_call_finalizer3(__dec_obj93,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(right_value512,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(_if_conditional412=self!=((void*)0),                                                        _if_conditional412) {
                                                            result_353->mGlobal=self->mGlobal;
                                                        }
                                                        if(_if_conditional413=self!=((void*)0),                                                        _if_conditional413) {
                                                            result_353->mParent=self->mParent;
                                                        }
                                                        if(_if_conditional414=self!=((void*)0),                                                        _if_conditional414) {
                                                            result_353->mID=self->mID;
                                                        }
                                                        __result174__ = __result_obj__ = result_353;
                                                        come_call_finalizer3(result_353,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result174__;
                                                        come_call_finalizer3(result_353,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional377;
struct map$2charphsVarph* __result158__;
void* right_value500;
void* right_value506;
struct map$2charphsVarph* result_359;
void* right_value507;
void* right_value508;
struct list$1charp* __dec_obj92;
char* it_362;
struct sVar* default_value_365;
struct sVar* it2_368;
struct map$2charphsVarph* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value500 = (void*)0;
right_value506 = (void*)0;
memset(&result_359, 0, sizeof(struct map$2charphsVarph*));
right_value507 = (void*)0;
right_value508 = (void*)0;
memset(&it_362, 0, sizeof(char*));
memset(&default_value_365, 0, sizeof(struct sVar*));
memset(&it2_368, 0, sizeof(struct sVar*));
                                                                if(_if_conditional377=self==((void*)0),                                                                _if_conditional377) {
                                                                    __result158__ = __result_obj__ = ((void*)0);
                                                                    return __result158__;
                                                                }
                                                                result_359=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value506=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value500=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1156, "map$2charphsVarph"))))))));
                                                                come_call_finalizer3(right_value500,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer3(right_value506,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                __dec_obj92=result_359->key_list;
                                                                result_359->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value508=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value507=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1158, "list$1charp"))))))));
                                                                come_call_finalizer3(__dec_obj92,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_value507,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer3(right_value508,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                for(                                                                it_362=map$2charphsVarph_begin(self);                                                                !map$2charphsVarph_end(self);                                                                it_362=map$2charphsVarph_next(self)                                                                ){
                                                                    memset(&default_value_365,0,sizeof(struct sVar*));
                                                                    it2_368=map$2charphsVarph_at(self,it_362,default_value_365);
                                                                    map$2charphsVarph_insert2(result_359,it_362,it2_368);
                                                                }
                                                                __result173__ = __result_obj__ = result_359;
                                                                come_call_finalizer3(result_359,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                                                                return __result173__;
                                                                come_call_finalizer3(result_359,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value501;
void* right_value502;
void* right_value503;
int i_354;
void* right_value504;
void* right_value505;
struct list$1charp* __dec_obj91;
struct map$2charphsVarph* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value501 = (void*)0;
right_value502 = (void*)0;
right_value503 = (void*)0;
memset(&i_354, 0, sizeof(int));
right_value504 = (void*)0;
right_value505 = (void*)0;
                                                                    self->keys=(char**)come_increment_ref_count(((char**)(right_value501=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
                                                                    right_value501 = come_decrement_ref_count2(right_value501, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value502=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./neo-c.h", 1063, "sVar*%"))));
                                                                    come_call_finalizer3(right_value502,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value503=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
                                                                    right_value503 = come_decrement_ref_count2(right_value503, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    for(                                                                    i_354=0;                                                                    i_354<128;                                                                    i_354++                                                                    ){
                                                                        self->item_existance[i_354]=(_Bool)0;
                                                                    }
                                                                    self->size=128;
                                                                    self->len=0;
                                                                    __dec_obj91=self->key_list;
                                                                    self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value505=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value504=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
                                                                    come_call_finalizer3(__dec_obj91,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer3(right_value504,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer3(right_value505,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    self->it=0;
                                                                    __result160__ = __result_obj__ = self;
                                                                    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                                                                    return __result160__;
                                                                    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool _if_conditional380;
_Bool _if_conditional381;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        if(_if_conditional378=self!=((void*)0)&&self->mName!=((void*)0),                                                                        _if_conditional378) {
                                                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional379=self!=((void*)0)&&self->mCValueName!=((void*)0),                                                                        _if_conditional379) {
                                                                            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional380=self!=((void*)0)&&self->mType!=((void*)0),                                                                        _if_conditional380) {
                                                                            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional381=self!=((void*)0)&&self->mFunName!=((void*)0),                                                                        _if_conditional381) {
                                                                            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        self->head=((void*)0);
                                                                        self->tail=((void*)0);
                                                                        self->len=0;
                                                                        __result159__ = __result_obj__ = self;
                                                                        come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result159__;
                                                                        come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_355;
_Bool _while_condtional45;
struct list_item$1charp* prev_it_356;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_355, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_356, 0, sizeof(struct list_item$1charp*));
                                                                            it_355=self->head;
                                                                            while(_while_condtional45=it_355!=((void*)0),                                                                            _while_condtional45) {
                                                                                prev_it_356=it_355;
                                                                                it_355=it_355->next;
                                                                                come_call_finalizer3(prev_it_356,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_357;
_Bool _if_conditional382;
_Bool _if_conditional383;
int i_358;
_Bool _if_conditional384;
_Bool _if_conditional385;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_357, 0, sizeof(int));
memset(&i_358, 0, sizeof(int));
                                                                        for(                                                                        i_357=0;                                                                        i_357<self->size;                                                                        i_357++                                                                        ){
                                                                            if(_if_conditional382=self->item_existance[i_357],                                                                            _if_conditional382) {
                                                                                if(_if_conditional383=1,                                                                                _if_conditional383) {
                                                                                    come_call_finalizer3(self->items[i_357],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        come_free((char*)self->items);
                                                                        for(                                                                        i_358=0;                                                                        i_358<self->size;                                                                        i_358++                                                                        ){
                                                                            if(_if_conditional384=self->item_existance[i_358],                                                                            _if_conditional384) {
                                                                                if(_if_conditional385=1,                                                                                _if_conditional385) {
                                                                                    self->keys[i_358] = come_decrement_ref_count2(self->keys[i_358], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        come_free((char*)self->keys);
                                                                        come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional386;
char* result_360;
char* __result161__;
_Bool _if_conditional387;
char* __result162__;
char* result_361;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_360, 0, sizeof(char*));
memset(&result_361, 0, sizeof(char*));
                                                                    if(_if_conditional386=self==((void*)0),                                                                    _if_conditional386) {
                                                                        memset(&result_360,0,sizeof(char*));
                                                                        __result161__ = __result_obj__ = result_360;
                                                                        return __result161__;
                                                                    }
                                                                    self->key_list->it=self->key_list->head;
                                                                    if(self->key_list->it) {
                                                                        __result162__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result162__;
                                                                    }
                                                                    memset(&result_361,0,sizeof(char*));
                                                                    __result163__ = __result_obj__ = result_361;
                                                                    return __result163__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    __result164__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                                    return __result164__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional388;
char* result_363;
char* __result165__;
_Bool _if_conditional389;
char* __result166__;
char* result_364;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_363, 0, sizeof(char*));
memset(&result_364, 0, sizeof(char*));
                                                                    if(_if_conditional388=self==((void*)0)||self->key_list->it==((void*)0),                                                                    _if_conditional388) {
                                                                        memset(&result_363,0,sizeof(char*));
                                                                        __result165__ = __result_obj__ = result_363;
                                                                        return __result165__;
                                                                    }
                                                                    self->key_list->it=self->key_list->it->next;
                                                                    if(self->key_list->it) {
                                                                        __result166__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result166__;
                                                                    }
                                                                    memset(&result_364,0,sizeof(char*));
                                                                    __result167__ = __result_obj__ = result_364;
                                                                    return __result167__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_366;
unsigned int it_367;
_Bool _while_condtional46;
_Bool _if_conditional390;
_Bool _if_conditional391;
struct sVar* __result168__;
_Bool _if_conditional392;
_Bool _if_conditional393;
struct sVar* __result169__;
struct sVar* __result170__;
struct sVar* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_366, 0, sizeof(unsigned int));
memset(&it_367, 0, sizeof(unsigned int));
                                                                        hash_366=string_get_hash_key(((char*)key))%self->size;
                                                                        it_367=hash_366;
                                                                        while(_while_condtional46=(_Bool)1,                                                                        _while_condtional46) {
                                                                            if(_if_conditional390=self->item_existance[it_367],                                                                            _if_conditional390) {
                                                                                if(_if_conditional391=string_equals(self->keys[it_367],key),                                                                                _if_conditional391) {
                                                                                    __result168__ = __result_obj__ = self->items[it_367];
                                                                                    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                                    return __result168__;
                                                                                }
                                                                                it_367++;
                                                                                if(_if_conditional392=it_367>=self->size,                                                                                _if_conditional392) {
                                                                                    it_367=0;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional393=it_367==hash_366,                                                                                    _if_conditional393) {
                                                                                        __result169__ = __result_obj__ = default_value;
                                                                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                                        return __result169__;
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                __result170__ = __result_obj__ = default_value;
                                                                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                                return __result170__;
                                                                            }
                                                                        }
                                                                        __result171__ = __result_obj__ = default_value;
                                                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result171__;
                                                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional394;
unsigned int hash_380;
int it_381;
_Bool _while_condtional48;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool same_key_exist_382;
char* it2_383;
_Bool _if_conditional406;
_Bool _if_conditional407;
struct map$2charphsVarph* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_380, 0, sizeof(unsigned int));
memset(&it_381, 0, sizeof(int));
memset(&same_key_exist_382, 0, sizeof(_Bool));
memset(&it2_383, 0, sizeof(char*));
                                                                        if(_if_conditional394=self->len*2>=self->size,                                                                        _if_conditional394) {
                                                                            map$2charphsVarph_rehash(self);
                                                                        }
                                                                        hash_380=string_get_hash_key(key)%self->size;
                                                                        it_381=hash_380;
                                                                        while(_while_condtional48=(_Bool)1,                                                                        _while_condtional48) {
                                                                            if(_if_conditional398=self->item_existance[it_381],                                                                            _if_conditional398) {
                                                                                if(_if_conditional399=string_equals(self->keys[it_381],key),                                                                                _if_conditional399) {
                                                                                    if(_if_conditional400=1,                                                                                    _if_conditional400) {
                                                                                        self->keys[it_381] = come_decrement_ref_count2(self->keys[it_381], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        list$1charp_remove(self->key_list,self->keys[it_381]);
                                                                                        self->keys[it_381]=(char*)come_increment_ref_count(key);
                                                                                    }
                                                                                    else {
                                                                                        list$1charp_remove(self->key_list,self->keys[it_381]);
                                                                                        self->keys[it_381]=key;
                                                                                    }
                                                                                    if(_if_conditional401=1,                                                                                    _if_conditional401) {
                                                                                        come_call_finalizer3(self->items[it_381],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        self->items[it_381]=(struct sVar*)come_increment_ref_count(item);
                                                                                    }
                                                                                    else {
                                                                                        self->items[it_381]=item;
                                                                                    }
                                                                                    break;
                                                                                }
                                                                                it_381++;
                                                                                if(_if_conditional402=it_381>=self->size,                                                                                _if_conditional402) {
                                                                                    it_381=0;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional403=it_381==hash_380,                                                                                    _if_conditional403) {
                                                                                        printf("unexpected error in map.insert\n");
                                                                                        stackframe();
                                                                                        exit(2);
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                self->item_existance[it_381]=(_Bool)1;
                                                                                if(_if_conditional404=1,                                                                                _if_conditional404) {
                                                                                    self->keys[it_381]=(char*)come_increment_ref_count(key);
                                                                                }
                                                                                else {
                                                                                    self->keys[it_381]=key;
                                                                                }
                                                                                if(_if_conditional405=1,                                                                                _if_conditional405) {
                                                                                    self->items[it_381]=(struct sVar*)come_increment_ref_count(item);
                                                                                }
                                                                                else {
                                                                                    self->items[it_381]=item;
                                                                                }
                                                                                self->len++;
                                                                                break;
                                                                            }
                                                                        }
                                                                        same_key_exist_382=(_Bool)0;
                                                                        for(                                                                        it2_383=list$1charp_begin(self->key_list);                                                                        !list$1charp_end(self->key_list);                                                                        it2_383=list$1charp_next(self->key_list)                                                                        ){
                                                                            if(_if_conditional406=string_equals(it2_383,key),                                                                            _if_conditional406) {
                                                                                same_key_exist_382=(_Bool)1;
                                                                            }
                                                                        }
                                                                        if(_if_conditional407=!same_key_exist_382,                                                                        _if_conditional407) {
                                                                            list$1charp_push_back(self->key_list,key);
                                                                        }
                                                                        __result172__ = __result_obj__ = self;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result172__;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_369;
void* right_value509;
char** keys_370;
void* right_value510;
struct sVar** items_371;
void* right_value511;
_Bool* item_existance_372;
int len_373;
char* it_374;
struct sVar* default_value_375;
struct sVar* it2_376;
unsigned int hash_377;
int n_378;
_Bool _while_condtional47;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
struct sVar* default_value_379;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_369, 0, sizeof(int));
right_value509 = (void*)0;
memset(&keys_370, 0, sizeof(char**));
right_value510 = (void*)0;
memset(&items_371, 0, sizeof(struct sVar**));
right_value511 = (void*)0;
memset(&item_existance_372, 0, sizeof(_Bool*));
memset(&len_373, 0, sizeof(int));
memset(&it_374, 0, sizeof(char*));
memset(&default_value_375, 0, sizeof(struct sVar*));
memset(&it2_376, 0, sizeof(struct sVar*));
memset(&hash_377, 0, sizeof(unsigned int));
memset(&n_378, 0, sizeof(int));
memset(&default_value_379, 0, sizeof(struct sVar*));
                                                                                size_369=self->size*10;
                                                                                keys_370=(char**)come_increment_ref_count(((char**)(right_value509=(char**)come_calloc(1, sizeof(char*)*(1*(size_369)), "./neo-c.h", 1313, "char*%"))));
                                                                                right_value509 = come_decrement_ref_count2(right_value509, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                items_371=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value510=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_369)), "./neo-c.h", 1314, "sVar*%"))));
                                                                                come_call_finalizer3(right_value510,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                item_existance_372=(_Bool*)come_increment_ref_count(((_Bool*)(right_value511=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_369)), "./neo-c.h", 1315, "bool"))));
                                                                                right_value511 = come_decrement_ref_count2(right_value511, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                len_373=0;
                                                                                for(                                                                                it_374=map$2charphsVarph_begin(self);                                                                                !map$2charphsVarph_end(self);                                                                                it_374=map$2charphsVarph_next(self)                                                                                ){
                                                                                    memset(&default_value_375,0,sizeof(struct sVar*));
                                                                                    it2_376=map$2charphsVarph_at(self,it_374,default_value_375);
                                                                                    hash_377=string_get_hash_key(it_374)%size_369;
                                                                                    n_378=hash_377;
                                                                                    while(_while_condtional47=(_Bool)1,                                                                                    _while_condtional47) {
                                                                                        if(_if_conditional395=item_existance_372[n_378],                                                                                        _if_conditional395) {
                                                                                            n_378++;
                                                                                            if(_if_conditional396=n_378>=size_369,                                                                                            _if_conditional396) {
                                                                                                n_378=0;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional397=n_378==hash_377,                                                                                                _if_conditional397) {
                                                                                                    printf("unexpected error in map.rehash(1)\n");
                                                                                                    stackframe();
                                                                                                    exit(2);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            item_existance_372[n_378]=(_Bool)1;
                                                                                            keys_370[n_378]=it_374;
                                                                                            items_371[n_378]=map$2charphsVarph_at(self,it_374,default_value_379);
                                                                                            len_373++;
                                                                                            break;
                                                                                        }
                                                                                    }
                                                                                }
                                                                                come_free((char*)self->items);
                                                                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                come_free((char*)self->keys);
                                                                                self->keys=keys_370;
                                                                                self->items=items_371;
                                                                                self->item_existance=item_existance_372;
                                                                                self->size=size_369;
                                                                                self->len=len_373;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_384;
_Bool _if_conditional408;
_Bool _if_conditional409;
int i_385;
_Bool _if_conditional410;
_Bool _if_conditional411;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_384, 0, sizeof(int));
memset(&i_385, 0, sizeof(int));
                                                                for(                                                                i_384=0;                                                                i_384<self->size;                                                                i_384++                                                                ){
                                                                    if(_if_conditional408=self->item_existance[i_384],                                                                    _if_conditional408) {
                                                                        if(_if_conditional409=1,                                                                        _if_conditional409) {
                                                                            come_call_finalizer3(self->items[i_384],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                    }
                                                                }
                                                                come_free((char*)self->items);
                                                                for(                                                                i_385=0;                                                                i_385<self->size;                                                                i_385++                                                                ){
                                                                    if(_if_conditional410=self->item_existance[i_385],                                                                    _if_conditional410) {
                                                                        if(_if_conditional411=1,                                                                        _if_conditional411) {
                                                                            self->keys[i_385] = come_decrement_ref_count2(self->keys[i_385], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                    }
                                                                }
                                                                come_free((char*)self->keys);
                                                                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool is_type_name(char* buf, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_395;
struct sType* type_399;
struct sClass* generics_class_400;
void* right_value530;
_Bool generics_type_name_402;
void* right_value531;
_Bool mgenerics_type_name_403;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_395, 0, sizeof(struct sClass*));
memset(&type_399, 0, sizeof(struct sType*));
memset(&generics_class_400, 0, sizeof(struct sClass*));
right_value530 = (void*)0;
memset(&generics_type_name_402, 0, sizeof(_Bool));
right_value531 = (void*)0;
memset(&mgenerics_type_name_403, 0, sizeof(_Bool));
    klass_395=map$2charphsClassphp_operator_load_element(info->classes,buf);
    type_399=map$2charphsTypephp_operator_load_element(info->types,buf);
    generics_class_400=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    generics_type_name_402=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value530=__builtin_string(buf)))));
    right_value530 = come_decrement_ref_count2(right_value530, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    mgenerics_type_name_403=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value531=__builtin_string(buf)))));
    right_value531 = come_decrement_ref_count2(right_value531, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result192__ = generics_class_400||generics_type_name_402||mgenerics_type_name_403||klass_395||type_399||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"record")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__");
    return __result192__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_390;
unsigned int hash_391;
unsigned int it_392;
_Bool _while_condtional49;
_Bool _if_conditional427;
_Bool _if_conditional428;
struct sClass* __result182__;
_Bool _if_conditional436;
_Bool _if_conditional437;
struct sClass* __result183__;
struct sClass* __result184__;
struct sClass* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_390, 0, sizeof(struct sClass*));
memset(&hash_391, 0, sizeof(unsigned int));
memset(&it_392, 0, sizeof(unsigned int));
        memset(&default_value_390,0,sizeof(struct sClass*));
        hash_391=string_get_hash_key(((char*)key))%self->size;
        it_392=hash_391;
        while(_while_condtional49=(_Bool)1,        _while_condtional49) {
            if(_if_conditional427=self->item_existance[it_392],            _if_conditional427) {
                if(_if_conditional428=string_equals(self->keys[it_392],key),                _if_conditional428) {
                    __result182__ = __result_obj__ = self->items[it_392];
                    come_call_finalizer3(default_value_390,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    return __result182__;
                }
                it_392++;
                if(_if_conditional436=it_392>=self->size,                _if_conditional436) {
                    it_392=0;
                }
                else {
                    if(_if_conditional437=it_392==hash_391,                    _if_conditional437) {
                        __result183__ = __result_obj__ = default_value_390;
                        come_call_finalizer3(default_value_390,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result183__;
                    }
                }
            }
            else {
                __result184__ = __result_obj__ = default_value_390;
                come_call_finalizer3(default_value_390,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result184__;
            }
        }
        __result185__ = __result_obj__ = default_value_390;
        come_call_finalizer3(default_value_390,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result185__;
        come_call_finalizer3(default_value_390,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional429;
_Bool _if_conditional430;
_Bool _if_conditional434;
_Bool _if_conditional435;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional429=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional429) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional430=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional430) {
                            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional434=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional434) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional435=self!=((void*)0)&&self->mParentClassName!=((void*)0),                        _if_conditional435) {
                            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_393;
_Bool _while_condtional50;
struct list_item$1tuple2$2charphsTypephph* prev_it_394;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_393, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_394, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_393=self->head;
                                while(_while_condtional50=it_393!=((void*)0),                                _while_condtional50) {
                                    prev_it_394=it_393;
                                    it_393=it_393->next;
                                    come_call_finalizer3(prev_it_394,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional431;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional431=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional431) {
                                            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional432;
_Bool _if_conditional433;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional432=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional432) {
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional433=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional433) {
                                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_396;
unsigned int hash_397;
unsigned int it_398;
_Bool _while_condtional51;
_Bool _if_conditional438;
_Bool _if_conditional439;
struct sType* __result186__;
_Bool _if_conditional440;
_Bool _if_conditional441;
struct sType* __result187__;
struct sType* __result188__;
struct sType* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_396, 0, sizeof(struct sType*));
memset(&hash_397, 0, sizeof(unsigned int));
memset(&it_398, 0, sizeof(unsigned int));
        memset(&default_value_396,0,sizeof(struct sType*));
        hash_397=string_get_hash_key(((char*)key))%self->size;
        it_398=hash_397;
        while(_while_condtional51=(_Bool)1,        _while_condtional51) {
            if(_if_conditional438=self->item_existance[it_398],            _if_conditional438) {
                if(_if_conditional439=string_equals(self->keys[it_398],key),                _if_conditional439) {
                    __result186__ = __result_obj__ = self->items[it_398];
                    come_call_finalizer3(default_value_396,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result186__;
                }
                it_398++;
                if(_if_conditional440=it_398>=self->size,                _if_conditional440) {
                    it_398=0;
                }
                else {
                    if(_if_conditional441=it_398==hash_397,                    _if_conditional441) {
                        __result187__ = __result_obj__ = default_value_396;
                        come_call_finalizer3(default_value_396,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result187__;
                    }
                }
            }
            else {
                __result188__ = __result_obj__ = default_value_396;
                come_call_finalizer3(default_value_396,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result188__;
            }
        }
        __result189__ = __result_obj__ = default_value_396;
        come_call_finalizer3(default_value_396,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result189__;
        come_call_finalizer3(default_value_396,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_401;
_Bool _if_conditional442;
_Bool __result190__;
_Bool __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_401, 0, sizeof(char*));
        for(        it_401=list$1charph_begin(self);        !list$1charph_end(self);        it_401=list$1charph_next(self)        ){
            if(_if_conditional442=string_operator_equals(it_401,item),            _if_conditional442) {
                __result190__ = (_Bool)1;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result190__;
            }
        }
        __result191__ = (_Bool)0;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result191__;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
struct sFun* caller_fun_404;
int caller_line_405;
char* caller_sname_406;
char* last_code_407;
char* __dec_obj103;
char* last_code2_408;
char* __dec_obj104;
char* last_code3_409;
char* __dec_obj105;
void* right_value532;
char* sname_top_410;
int sline_top_411;
_Bool _if_conditional443;
struct sFun* funX_412;
_Bool _if_conditional444;
_Bool __result193__;
void* right_value533;
struct sType* result_type_413;
void* right_value534;
void* right_value535;
struct list$1sTypeph* param_types_414;
struct list$1sTypeph* o2_saved_415;
struct sType* it_418;
void* right_value536;
void* right_value537;
struct sType* param_type_421;
void* right_value538;
void* right_value539;
struct list$1charph* param_names_422;
void* right_value540;
struct list$1charph* param_default_parametors_423;
char* p_424;
int sline_425;
char* sname_426;
char* head_427;
struct buffer* source_428;
void* right_value541;
struct buffer* __dec_obj106;
struct sType* generics_type_saved_429;
void* right_value542;
struct sType* __dec_obj107;
struct list$1charph* method_generics_type_names_430;
void* right_value543;
void* right_value544;
struct list$1charph* __dec_obj108;
struct list$1charph* o2_saved_431;
char* it_432;
void* right_value545;
void* right_value546;
struct list$1charph* __dec_obj109;
char* __dec_obj110;
void* right_value547;
struct sBlock* block_433;
struct buffer* __dec_obj111;
char* __dec_obj112;
_Bool var_args_434;
void* right_value548;
void* right_value549;
void* right_value550;
void* right_value551;
void* right_value552;
struct sFun* fun_435;
void* right_value553;
void* right_value554;
void* right_value555;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* right_value559;
struct sNode* node_437;
_Bool _if_conditional455;
_Bool __result203__;
struct sType* __dec_obj115;
struct list$1charph* __dec_obj116;
struct list$1charph* __dec_obj117;
void* right_value560;
char* __dec_obj118;
char* __dec_obj119;
char* __dec_obj120;
char* __dec_obj121;
_Bool __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&caller_fun_404, 0, sizeof(struct sFun*));
memset(&caller_line_405, 0, sizeof(int));
memset(&caller_sname_406, 0, sizeof(char*));
memset(&last_code_407, 0, sizeof(char*));
memset(&last_code2_408, 0, sizeof(char*));
memset(&last_code3_409, 0, sizeof(char*));
right_value532 = (void*)0;
memset(&sname_top_410, 0, sizeof(char*));
memset(&sline_top_411, 0, sizeof(int));
memset(&funX_412, 0, sizeof(struct sFun*));
right_value533 = (void*)0;
memset(&result_type_413, 0, sizeof(struct sType*));
right_value534 = (void*)0;
right_value535 = (void*)0;
memset(&param_types_414, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_415, 0, sizeof(struct list$1sTypeph*));
memset(&it_418, 0, sizeof(struct sType*));
right_value536 = (void*)0;
right_value537 = (void*)0;
memset(&param_type_421, 0, sizeof(struct sType*));
right_value538 = (void*)0;
right_value539 = (void*)0;
memset(&param_names_422, 0, sizeof(struct list$1charph*));
right_value540 = (void*)0;
memset(&param_default_parametors_423, 0, sizeof(struct list$1charph*));
memset(&p_424, 0, sizeof(char*));
memset(&sline_425, 0, sizeof(int));
memset(&sname_426, 0, sizeof(char*));
memset(&head_427, 0, sizeof(char*));
memset(&source_428, 0, sizeof(struct buffer*));
right_value541 = (void*)0;
memset(&generics_type_saved_429, 0, sizeof(struct sType*));
right_value542 = (void*)0;
memset(&method_generics_type_names_430, 0, sizeof(struct list$1charph*));
right_value543 = (void*)0;
right_value544 = (void*)0;
memset(&o2_saved_431, 0, sizeof(struct list$1charph*));
memset(&it_432, 0, sizeof(char*));
right_value545 = (void*)0;
right_value546 = (void*)0;
right_value547 = (void*)0;
memset(&block_433, 0, sizeof(struct sBlock*));
memset(&var_args_434, 0, sizeof(_Bool));
right_value548 = (void*)0;
right_value549 = (void*)0;
right_value550 = (void*)0;
right_value551 = (void*)0;
right_value552 = (void*)0;
memset(&fun_435, 0, sizeof(struct sFun*));
right_value553 = (void*)0;
right_value554 = (void*)0;
right_value555 = (void*)0;
right_value559 = (void*)0;
memset(&node_437, 0, sizeof(struct sNode*));
right_value560 = (void*)0;
    caller_fun_404=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_405=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_406=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_407=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj103=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_408=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj104=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_409=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj105=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_410=(char*)come_increment_ref_count(((char*)(right_value532=__builtin_string(info->sname))));
    right_value532 = come_decrement_ref_count2(right_value532, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_top_411=info->sline;
    if(generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_412=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_412) {
        __result193__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_407 = come_decrement_ref_count2(last_code_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_408 = come_decrement_ref_count2(last_code2_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_409 = come_decrement_ref_count2(last_code3_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_410 = come_decrement_ref_count2(sname_top_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result193__;
    }
    result_type_413=(struct sType*)come_increment_ref_count(((struct sType*)(right_value533=solve_generics(generics_fun->mResultType,generics_type,info))));
    come_call_finalizer3(right_value533,sType_finalize, 0, 1, 0, 0, __result_obj__);
    param_types_414=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value535=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value534=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1356, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value534,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value535,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_415=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_418=list$1sTypeph_begin((o2_saved_415));    !list$1sTypeph_end((o2_saved_415));    it_418=list$1sTypeph_next((o2_saved_415))    ){
        param_type_421=(struct sType*)come_increment_ref_count(((struct sType*)(right_value537=solve_generics(((struct sType*)(right_value536=sType_clone(it_418))),generics_type,info))));
        come_call_finalizer3(right_value536,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value537,sType_finalize, 0, 1, 0, 0, __result_obj__);
        param_type_421->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_414,(struct sType*)come_increment_ref_count(((struct sType*)(right_value538=sType_clone(param_type_421)))));
        come_call_finalizer3(right_value538,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(param_type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_415,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_422=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value539=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer3(right_value539,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_423=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value540=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer3(right_value540,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    p_424=info->p;
    sline_425=info->sline;
    sname_426=(char*)come_increment_ref_count(info->sname);
    head_427=info->head;
    source_428=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj106=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value541=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer3(__dec_obj106,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value541,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_429=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj107=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value542=sType_clone(generics_type))));
    come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value542,sType_finalize, 0, 1, 0, 0, __result_obj__);
    method_generics_type_names_430=info->method_generics_type_names;
    __dec_obj108=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value544=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value543=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1383, "list$1charph"))))))));
    come_call_finalizer3(__dec_obj108,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value543,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value544,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_431=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_432=list$1charph_begin((o2_saved_431));    !list$1charph_end((o2_saved_431));    it_432=list$1charph_next((o2_saved_431))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value545=string_clone(it_432)))));
        right_value545 = come_decrement_ref_count2(right_value545, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer3(o2_saved_431,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj109=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value546=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer3(__dec_obj109,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value546,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj110=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_433=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value547=parse_block(info,(_Bool)0,(_Bool)0))));
    come_call_finalizer3(right_value547,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    info->head=head_427;
    __dec_obj111=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_428);
    come_call_finalizer3(__dec_obj111,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_424;
    info->sline=sline_425;
    __dec_obj112=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_426);
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_413->mInline=(_Bool)0;
    var_args_434=generics_fun->mVarArgs;
    fun_435=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value552=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value548=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1405, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_413),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value549=list$1sTypephp_clone(param_types_414)))),(struct list$1charph*)come_increment_ref_count(param_names_422),(struct list$1charph*)come_increment_ref_count(param_default_parametors_423),(_Bool)0,var_args_434,(struct sBlock*)come_increment_ref_count(block_433),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value550=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value551=__builtin_string("")))),info))));
    come_call_finalizer3(right_value548,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value549,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    right_value550 = come_decrement_ref_count2(right_value550, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value551 = come_decrement_ref_count2(right_value551, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value552,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value553=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_435));
    right_value553 = come_decrement_ref_count2(right_value553, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1412, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(right_value555=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value554=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1412, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_435),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFunNode_finalize;
    _inf_value2->clone=(void*)sFunNode_clone;
    _inf_value2->compile=(void*)sFunNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sFunNode_terminated;
    _inf_value2->kind=(void*)sFunNode_kind;
    node_437=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value559=_inf_value2)));
    come_call_finalizer3(right_value554,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value555,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value559) { right_value559 = come_decrement_ref_count2(right_value559, ((struct sNode*)right_value559)->finalize, ((struct sNode*)right_value559)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    if(_if_conditional455=!node_compile(node_437,info),    _if_conditional455) {
        __result203__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_407 = come_decrement_ref_count2(last_code_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_408 = come_decrement_ref_count2(last_code2_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_409 = come_decrement_ref_count2(last_code3_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_410 = come_decrement_ref_count2(sname_top_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_413,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_414,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_422,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_423,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_426 = come_decrement_ref_count2(sname_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_428,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_429,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_433,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_435,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_437) { node_437 = come_decrement_ref_count2(node_437, ((struct sNode*)node_437)->finalize, ((struct sNode*)node_437)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result203__;
    }
    __dec_obj115=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_429);
    come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(info->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj116=method_generics_type_names_430;
    __dec_obj117=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_430);
    come_call_finalizer3(__dec_obj117,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj118=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value560=__builtin_string(sname_top_410))));
    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value560 = come_decrement_ref_count2(right_value560, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    info->sline=sline_top_411;
    __dec_obj119=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_407);
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj120=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_408);
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj121=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_409);
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_404;
    info->caller_line=caller_line_405;
    info->caller_sname=caller_sname_406;
    __result204__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_407 = come_decrement_ref_count2(last_code_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_408 = come_decrement_ref_count2(last_code2_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_409 = come_decrement_ref_count2(last_code3_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_410 = come_decrement_ref_count2(sname_top_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_413,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_414,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_422,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_423,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_426 = come_decrement_ref_count2(sname_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_428,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_429,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_433,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_435,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_437) { node_437 = come_decrement_ref_count2(node_437, ((struct sNode*)node_437)->finalize, ((struct sNode*)node_437)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result204__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_407 = come_decrement_ref_count2(last_code_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_408 = come_decrement_ref_count2(last_code2_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_409 = come_decrement_ref_count2(last_code3_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_410 = come_decrement_ref_count2(sname_top_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_413,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_414,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_422,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_423,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_426 = come_decrement_ref_count2(sname_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_428,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_429,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_433,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_435,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_437) { node_437 = come_decrement_ref_count2(node_437, ((struct sNode*)node_437)->finalize, ((struct sNode*)node_437)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional445;
struct sType* result_416;
struct sType* __result194__;
_Bool _if_conditional446;
struct sType* __result195__;
struct sType* result_417;
struct sType* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_416, 0, sizeof(struct sType*));
memset(&result_417, 0, sizeof(struct sType*));
        if(_if_conditional445=self==((void*)0),        _if_conditional445) {
            memset(&result_416,0,sizeof(struct sType*));
            __result194__ = __result_obj__ = result_416;
            return __result194__;
        }
        self->it=self->head;
        if(self->it) {
            __result195__ = __result_obj__ = self->it->item;
            return __result195__;
        }
        memset(&result_417,0,sizeof(struct sType*));
        __result196__ = __result_obj__ = result_417;
        return __result196__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result197__;
memset(&__result_obj__, 0, sizeof(void*));
        __result197__ = self==((void*)0)||self->it==((void*)0);
        return __result197__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional447;
struct sType* result_419;
struct sType* __result198__;
_Bool _if_conditional448;
struct sType* __result199__;
struct sType* result_420;
struct sType* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_419, 0, sizeof(struct sType*));
memset(&result_420, 0, sizeof(struct sType*));
        if(_if_conditional447=self==((void*)0)||self->it==((void*)0),        _if_conditional447) {
            memset(&result_419,0,sizeof(struct sType*));
            __result198__ = __result_obj__ = result_419;
            return __result198__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result199__ = __result_obj__ = self->it->item;
            return __result199__;
        }
        memset(&result_420,0,sizeof(struct sType*));
        __result200__ = __result_obj__ = result_420;
        return __result200__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
void* __result_obj__;
struct sFun* caller_fun_438;
int caller_line_439;
char* caller_sname_440;
char* last_code_441;
char* __dec_obj122;
char* last_code2_442;
char* __dec_obj123;
char* last_code3_443;
char* __dec_obj124;
void* right_value561;
char* sname_top_444;
int sline_top_445;
struct sFun* funX_446;
_Bool _if_conditional456;
_Bool __result205__;
void* right_value562;
struct sType* result_type_447;
void* right_value563;
void* right_value564;
struct list$1sTypeph* param_types_448;
struct list$1sTypeph* o2_saved_449;
struct sType* it_450;
void* right_value565;
void* right_value566;
struct sType* param_type_451;
void* right_value567;
void* right_value568;
struct list$1charph* param_names_452;
void* right_value569;
struct list$1charph* param_default_parametors_453;
char* p_454;
int sline_455;
char* sname_456;
char* head_457;
struct buffer* source_458;
void* right_value570;
struct buffer* __dec_obj125;
struct list$1charph* method_generics_type_names_459;
void* right_value571;
void* right_value572;
struct list$1charph* __dec_obj126;
struct list$1charph* o2_saved_460;
char* it_461;
void* right_value573;
void* right_value574;
struct list$1charph* __dec_obj127;
char* __dec_obj128;
void* right_value575;
struct sBlock* block_462;
struct buffer* __dec_obj129;
char* __dec_obj130;
_Bool var_args_463;
void* right_value576;
void* right_value577;
void* right_value578;
void* right_value579;
void* right_value580;
struct sFun* fun_464;
void* right_value581;
void* right_value582;
void* right_value583;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* right_value587;
struct sNode* node_466;
_Bool _if_conditional463;
_Bool __result208__;
struct list$1charph* __dec_obj133;
struct list$1charph* __dec_obj134;
void* right_value588;
char* __dec_obj135;
char* __dec_obj136;
char* __dec_obj137;
char* __dec_obj138;
_Bool __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&caller_fun_438, 0, sizeof(struct sFun*));
memset(&caller_line_439, 0, sizeof(int));
memset(&caller_sname_440, 0, sizeof(char*));
memset(&last_code_441, 0, sizeof(char*));
memset(&last_code2_442, 0, sizeof(char*));
memset(&last_code3_443, 0, sizeof(char*));
right_value561 = (void*)0;
memset(&sname_top_444, 0, sizeof(char*));
memset(&sline_top_445, 0, sizeof(int));
memset(&funX_446, 0, sizeof(struct sFun*));
right_value562 = (void*)0;
memset(&result_type_447, 0, sizeof(struct sType*));
right_value563 = (void*)0;
right_value564 = (void*)0;
memset(&param_types_448, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_449, 0, sizeof(struct list$1sTypeph*));
memset(&it_450, 0, sizeof(struct sType*));
right_value565 = (void*)0;
right_value566 = (void*)0;
memset(&param_type_451, 0, sizeof(struct sType*));
right_value567 = (void*)0;
right_value568 = (void*)0;
memset(&param_names_452, 0, sizeof(struct list$1charph*));
right_value569 = (void*)0;
memset(&param_default_parametors_453, 0, sizeof(struct list$1charph*));
memset(&p_454, 0, sizeof(char*));
memset(&sline_455, 0, sizeof(int));
memset(&sname_456, 0, sizeof(char*));
memset(&head_457, 0, sizeof(char*));
memset(&source_458, 0, sizeof(struct buffer*));
right_value570 = (void*)0;
memset(&method_generics_type_names_459, 0, sizeof(struct list$1charph*));
right_value571 = (void*)0;
right_value572 = (void*)0;
memset(&o2_saved_460, 0, sizeof(struct list$1charph*));
memset(&it_461, 0, sizeof(char*));
right_value573 = (void*)0;
right_value574 = (void*)0;
right_value575 = (void*)0;
memset(&block_462, 0, sizeof(struct sBlock*));
memset(&var_args_463, 0, sizeof(_Bool));
right_value576 = (void*)0;
right_value577 = (void*)0;
right_value578 = (void*)0;
right_value579 = (void*)0;
right_value580 = (void*)0;
memset(&fun_464, 0, sizeof(struct sFun*));
right_value581 = (void*)0;
right_value582 = (void*)0;
right_value583 = (void*)0;
right_value587 = (void*)0;
memset(&node_466, 0, sizeof(struct sNode*));
right_value588 = (void*)0;
    caller_fun_438=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_439=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_440=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_441=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj122=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_442=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj123=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_443=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj124=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_444=(char*)come_increment_ref_count(((char*)(right_value561=__builtin_string(info->sname))));
    right_value561 = come_decrement_ref_count2(right_value561, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_top_445=info->sline;
    funX_446=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_446) {
        __result205__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_441 = come_decrement_ref_count2(last_code_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_442 = come_decrement_ref_count2(last_code2_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_443 = come_decrement_ref_count2(last_code3_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_444 = come_decrement_ref_count2(sname_top_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result205__;
    }
    result_type_447=(struct sType*)come_increment_ref_count(((struct sType*)(right_value562=solve_method_generics(generics_fun->mResultType,info))));
    come_call_finalizer3(right_value562,sType_finalize, 0, 1, 0, 0, __result_obj__);
    param_types_448=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value564=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value563=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1464, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value563,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value564,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_449=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_450=list$1sTypeph_begin((o2_saved_449));    !list$1sTypeph_end((o2_saved_449));    it_450=list$1sTypeph_next((o2_saved_449))    ){
        param_type_451=(struct sType*)come_increment_ref_count(((struct sType*)(right_value566=solve_method_generics(((struct sType*)(right_value565=sType_clone(it_450))),info))));
        come_call_finalizer3(right_value565,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value566,sType_finalize, 0, 1, 0, 0, __result_obj__);
        param_type_451->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_448,(struct sType*)come_increment_ref_count(((struct sType*)(right_value567=sType_clone(param_type_451)))));
        come_call_finalizer3(right_value567,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(param_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_449,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_452=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value568=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer3(right_value568,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_453=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value569=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer3(right_value569,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    p_454=info->p;
    sline_455=info->sline;
    sname_456=(char*)come_increment_ref_count(info->sname);
    head_457=info->head;
    source_458=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj125=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value570=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer3(__dec_obj125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value570,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_459=info->method_generics_type_names;
    __dec_obj126=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value572=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value571=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1488, "list$1charph"))))))));
    come_call_finalizer3(__dec_obj126,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value571,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value572,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_460=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_461=list$1charph_begin((o2_saved_460));    !list$1charph_end((o2_saved_460));    it_461=list$1charph_next((o2_saved_460))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value573=string_clone(it_461)))));
        right_value573 = come_decrement_ref_count2(right_value573, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer3(o2_saved_460,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj127=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value574=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer3(__dec_obj127,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value574,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj128=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_462=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value575=parse_block(info,(_Bool)0,(_Bool)0))));
    come_call_finalizer3(right_value575,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    info->head=head_457;
    __dec_obj129=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_458);
    come_call_finalizer3(__dec_obj129,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_454;
    info->sline=sline_455;
    __dec_obj130=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_456);
    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_447->mInline=(_Bool)0;
    var_args_463=generics_fun->mVarArgs;
    fun_464=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value580=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value576=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1510, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_447),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value577=list$1sTypephp_clone(param_types_448)))),(struct list$1charph*)come_increment_ref_count(param_names_452),(struct list$1charph*)come_increment_ref_count(param_default_parametors_453),(_Bool)0,var_args_463,(struct sBlock*)come_increment_ref_count(block_462),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value578=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value579=__builtin_string("")))),info))));
    come_call_finalizer3(right_value576,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value577,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    right_value578 = come_decrement_ref_count2(right_value578, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value579 = come_decrement_ref_count2(right_value579, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value580,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value581=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_464));
    right_value581 = come_decrement_ref_count2(right_value581, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1517, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(right_value583=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value582=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1517, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_464),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunNode_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_466=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value587=_inf_value3)));
    come_call_finalizer3(right_value582,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value583,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value587) { right_value587 = come_decrement_ref_count2(right_value587, ((struct sNode*)right_value587)->finalize, ((struct sNode*)right_value587)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    if(_if_conditional463=!node_compile(node_466,info),    _if_conditional463) {
        __result208__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_441 = come_decrement_ref_count2(last_code_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_442 = come_decrement_ref_count2(last_code2_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_443 = come_decrement_ref_count2(last_code3_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_444 = come_decrement_ref_count2(sname_top_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_447,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_452,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_453,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_456 = come_decrement_ref_count2(sname_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_458,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_462,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_464,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_466) { node_466 = come_decrement_ref_count2(node_466, ((struct sNode*)node_466)->finalize, ((struct sNode*)node_466)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result208__;
    }
    come_call_finalizer3(info->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj133=method_generics_type_names_459;
    __dec_obj134=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_459);
    come_call_finalizer3(__dec_obj134,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj135=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value588=__builtin_string(sname_top_444))));
    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value588 = come_decrement_ref_count2(right_value588, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    info->sline=sline_top_445;
    __dec_obj136=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_441);
    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj137=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_442);
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj138=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_443);
    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_438;
    info->caller_line=caller_line_439;
    info->caller_sname=caller_sname_440;
    __result209__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_441 = come_decrement_ref_count2(last_code_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_442 = come_decrement_ref_count2(last_code2_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_443 = come_decrement_ref_count2(last_code3_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_444 = come_decrement_ref_count2(sname_top_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_447,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_452,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_453,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_456 = come_decrement_ref_count2(sname_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_458,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_462,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_464,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_466) { node_466 = come_decrement_ref_count2(node_466, ((struct sNode*)node_466)->finalize, ((struct sNode*)node_466)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result209__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_441 = come_decrement_ref_count2(last_code_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_442 = come_decrement_ref_count2(last_code2_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_443 = come_decrement_ref_count2(last_code3_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_444 = come_decrement_ref_count2(sname_top_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_447,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_452,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_453,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_456 = come_decrement_ref_count2(sname_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_458,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_462,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_464,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_466) { node_466 = come_decrement_ref_count2(node_466, ((struct sNode*)node_466)->finalize, ((struct sNode*)node_466)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__;
char* header_head_467;
char* source_head_468;
struct sType* result_type_469;
char* var_name_470;
_Bool constructor__471;
_Bool _if_conditional464;
void* right_value589;
void* right_value590;
struct sType* __dec_obj139;
void* right_value591;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type2_472;
char* var_name2_473;
_Bool err_474;
struct sType* __dec_obj140;
char* __dec_obj141;
_Bool _if_conditional465;
_Bool _if_conditional466;
_Bool method_definition_475;
char* p_476;
int sline_477;
void* right_value592;
void* right_value593;
struct buffer* buf2_478;
_Bool _while_condtional52;
_Bool _while_condtional53;
_Bool _while_condtional54;
_Bool _while_condtional55;
_Bool _if_conditional467;
char* fun_name_479;
char* base_fun_name_480;
_Bool _if_conditional468;
void* right_value594;
void* right_value595;
char* __dec_obj142;
_Bool _if_conditional469;
void* right_value596;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_481;
char* name_482;
_Bool err_483;
_Bool _if_conditional470;
int __exception_result_var_b2;
int __exception_result_var_b3;
void* right_value597;
void* right_value598;
char* __dec_obj143;
_Bool _if_conditional471;
void* right_value599;
void* right_value600;
char* __dec_obj144;
void* right_value601;
char* __dec_obj145;
void* right_value602;
_Bool _if_conditional472;
void* right_value603;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_484;
struct list$1charph* param_names_485;
struct list$1charph* param_default_parametors_486;
_Bool var_args_487;
char* header_tail_488;
_Bool _if_conditional476;
void* right_value604;
void* right_value605;
struct buffer* header_buf_489;
int version_490;
_Bool _if_conditional477;
int n_491;
_Bool _while_condtional56;
_Bool _if_conditional478;
void* right_value606;
struct sBlock* block_492;
static int lambda_num_493=0;
void* right_value607;
char* fun_name_494;
void* right_value608;
void* right_value609;
void* right_value610;
void* right_value611;
void* right_value612;
struct sFun* fun_495;
void* right_value613;
struct sFun* fun2_496;
_Bool _if_conditional479;
void* right_value614;
void* right_value615;
void* right_value616;
struct sNode* _inf_value4;
struct sLambdaNode* _inf_obj_value4;
void* right_value619;
struct sNode* __result212__;
_Bool _if_conditional486;
void* right_value620;
char* none_generics_name_498;
void* right_value621;
char* generics_sname_499;
int generics_sline_500;
void* right_value622;
char* block_501;
void* right_value623;
void* right_value624;
void* right_value625;
void* right_value626;
void* right_value627;
void* right_value628;
struct sGenericsFun* fun_502;
void* right_value629;
char* fun_name3_503;
void* right_value633;
struct sNode* __result227__;
_Bool _if_conditional509;
void* right_value634;
char* generics_sname_525;
int generics_sline_526;
void* right_value635;
char* block_527;
void* right_value636;
void* right_value637;
void* right_value638;
void* right_value639;
void* right_value640;
void* right_value641;
struct sGenericsFun* fun_528;
void* right_value642;
char* fun_name3_529;
void* right_value643;
struct sNode* __result228__;
_Bool _if_conditional510;
char* source_tail_530;
void* right_value644;
void* right_value645;
struct buffer* header_531;
_Bool _if_conditional511;
_Bool _if_conditional513;
void* right_value646;
char* name_532;
void* right_value647;
void* right_value648;
char* name_533;
void* right_value649;
int i_534;
struct sType* param_type_535;
char* param_name_539;
char* default_parametor_540;
_Bool _if_conditional516;
void* right_value650;
void* right_value651;
void* right_value652;
void* right_value653;
_Bool _if_conditional517;
_Bool _if_conditional518;
_Bool _if_conditional519;
void* right_value654;
char* impl_name_541;
void* right_value655;
char* result_type_name_542;
void* right_value656;
void* right_value657;
char* impl_name_543;
void* right_value658;
char* result_type_name_544;
void* right_value659;
int i_545;
struct sType* param_type_546;
char* param_name_547;
char* default_parametor_548;
_Bool _if_conditional520;
void* right_value660;
void* right_value661;
void* right_value662;
void* right_value663;
_Bool _if_conditional521;
_Bool _if_conditional522;
void* right_value664;
void* right_value665;
struct sBlock* block_549;
_Bool static__550;
_Bool _if_conditional523;
_Bool _if_conditional524;
void* right_value666;
void* right_value667;
char* new_fun_name_551;
void* right_value668;
char* __dec_obj147;
void* right_value669;
void* right_value670;
void* right_value671;
void* right_value672;
void* right_value673;
void* right_value674;
struct sFun* fun_552;
_Bool _if_conditional525;
void* right_value675;
void* right_value676;
struct sFun* fun2_553;
_Bool _if_conditional526;
void* right_value677;
void* right_value678;
void* right_value679;
struct sNode* _inf_value5;
struct sFunNode* _inf_obj_value5;
void* right_value683;
struct sNode* __result235__;
_Bool _if_conditional533;
_Bool _if_conditional534;
void* right_value684;
char* new_fun_name_555;
void* right_value685;
char* __dec_obj150;
_Bool _if_conditional535;
void* right_value686;
void* right_value687;
void* right_value688;
void* right_value689;
void* right_value690;
struct sFun* fun_556;
void* right_value691;
struct sFun* fun2_557;
_Bool _if_conditional536;
void* right_value692;
char* source_tail_558;
void* right_value693;
void* right_value694;
struct buffer* header_559;
void* right_value695;
void* right_value696;
void* right_value697;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* right_value701;
struct sNode* __result238__;
void* right_value702;
char* asm_fun_561;
_Bool _if_conditional543;
void* right_value703;
char* __dec_obj153;
int __exception_result_var_b4;
void* right_value704;
void* right_value705;
void* right_value706;
void* right_value707;
void* right_value708;
struct sFun* fun_562;
void* right_value709;
struct sFun* fun2_563;
_Bool _if_conditional544;
void* right_value710;
char* source_tail_564;
void* right_value711;
void* right_value712;
struct buffer* header_565;
void* right_value713;
void* right_value714;
void* right_value715;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* right_value719;
struct sNode* __result241__;
struct sNode* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&header_head_467, 0, sizeof(char*));
memset(&source_head_468, 0, sizeof(char*));
memset(&result_type_469, 0, sizeof(struct sType*));
memset(&var_name_470, 0, sizeof(char*));
memset(&constructor__471, 0, sizeof(_Bool));
right_value589 = (void*)0;
right_value590 = (void*)0;
right_value591 = (void*)0;
memset(&result_type2_472, 0, sizeof(struct sType*));
memset(&var_name2_473, 0, sizeof(char*));
memset(&err_474, 0, sizeof(_Bool));
memset(&result_type2_472, 0, sizeof(struct sType*));
memset(&var_name2_473, 0, sizeof(char*));
memset(&err_474, 0, sizeof(_Bool));
memset(&method_definition_475, 0, sizeof(_Bool));
memset(&p_476, 0, sizeof(char*));
memset(&sline_477, 0, sizeof(int));
right_value592 = (void*)0;
right_value593 = (void*)0;
memset(&buf2_478, 0, sizeof(struct buffer*));
memset(&fun_name_479, 0, sizeof(char*));
memset(&base_fun_name_480, 0, sizeof(char*));
right_value594 = (void*)0;
right_value595 = (void*)0;
right_value596 = (void*)0;
memset(&obj_type_481, 0, sizeof(struct sType*));
memset(&name_482, 0, sizeof(char*));
memset(&err_483, 0, sizeof(_Bool));
memset(&obj_type_481, 0, sizeof(struct sType*));
memset(&name_482, 0, sizeof(char*));
memset(&err_483, 0, sizeof(_Bool));
right_value597 = (void*)0;
right_value598 = (void*)0;
right_value599 = (void*)0;
right_value600 = (void*)0;
right_value601 = (void*)0;
right_value602 = (void*)0;
right_value603 = (void*)0;
memset(&param_types_484, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_485, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_486, 0, sizeof(struct list$1charph*));
memset(&var_args_487, 0, sizeof(_Bool));
memset(&param_types_484, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_485, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_486, 0, sizeof(struct list$1charph*));
memset(&var_args_487, 0, sizeof(_Bool));
memset(&header_tail_488, 0, sizeof(char*));
right_value604 = (void*)0;
right_value605 = (void*)0;
memset(&header_buf_489, 0, sizeof(struct buffer*));
memset(&version_490, 0, sizeof(int));
memset(&n_491, 0, sizeof(int));
right_value606 = (void*)0;
memset(&block_492, 0, sizeof(struct sBlock*));
right_value607 = (void*)0;
memset(&fun_name_494, 0, sizeof(char*));
right_value608 = (void*)0;
right_value609 = (void*)0;
right_value610 = (void*)0;
right_value611 = (void*)0;
right_value612 = (void*)0;
memset(&fun_495, 0, sizeof(struct sFun*));
right_value613 = (void*)0;
memset(&fun2_496, 0, sizeof(struct sFun*));
right_value614 = (void*)0;
right_value615 = (void*)0;
right_value616 = (void*)0;
right_value619 = (void*)0;
right_value620 = (void*)0;
memset(&none_generics_name_498, 0, sizeof(char*));
right_value621 = (void*)0;
memset(&generics_sname_499, 0, sizeof(char*));
memset(&generics_sline_500, 0, sizeof(int));
right_value622 = (void*)0;
memset(&block_501, 0, sizeof(char*));
right_value623 = (void*)0;
right_value624 = (void*)0;
right_value625 = (void*)0;
right_value626 = (void*)0;
right_value627 = (void*)0;
right_value628 = (void*)0;
memset(&fun_502, 0, sizeof(struct sGenericsFun*));
right_value629 = (void*)0;
memset(&fun_name3_503, 0, sizeof(char*));
right_value633 = (void*)0;
right_value634 = (void*)0;
memset(&generics_sname_525, 0, sizeof(char*));
memset(&generics_sline_526, 0, sizeof(int));
right_value635 = (void*)0;
memset(&block_527, 0, sizeof(char*));
right_value636 = (void*)0;
right_value637 = (void*)0;
right_value638 = (void*)0;
right_value639 = (void*)0;
right_value640 = (void*)0;
right_value641 = (void*)0;
memset(&fun_528, 0, sizeof(struct sGenericsFun*));
right_value642 = (void*)0;
memset(&fun_name3_529, 0, sizeof(char*));
right_value643 = (void*)0;
memset(&source_tail_530, 0, sizeof(char*));
right_value644 = (void*)0;
right_value645 = (void*)0;
memset(&header_531, 0, sizeof(struct buffer*));
right_value646 = (void*)0;
memset(&name_532, 0, sizeof(char*));
right_value647 = (void*)0;
right_value648 = (void*)0;
memset(&name_533, 0, sizeof(char*));
right_value649 = (void*)0;
memset(&i_534, 0, sizeof(int));
memset(&param_type_535, 0, sizeof(struct sType*));
memset(&param_name_539, 0, sizeof(char*));
memset(&default_parametor_540, 0, sizeof(char*));
right_value650 = (void*)0;
right_value651 = (void*)0;
right_value652 = (void*)0;
right_value653 = (void*)0;
right_value654 = (void*)0;
memset(&impl_name_541, 0, sizeof(char*));
right_value655 = (void*)0;
memset(&result_type_name_542, 0, sizeof(char*));
right_value656 = (void*)0;
right_value657 = (void*)0;
memset(&impl_name_543, 0, sizeof(char*));
right_value658 = (void*)0;
memset(&result_type_name_544, 0, sizeof(char*));
right_value659 = (void*)0;
memset(&i_545, 0, sizeof(int));
memset(&param_type_546, 0, sizeof(struct sType*));
memset(&param_name_547, 0, sizeof(char*));
memset(&default_parametor_548, 0, sizeof(char*));
right_value660 = (void*)0;
right_value661 = (void*)0;
right_value662 = (void*)0;
right_value663 = (void*)0;
right_value664 = (void*)0;
right_value665 = (void*)0;
memset(&block_549, 0, sizeof(struct sBlock*));
memset(&static__550, 0, sizeof(_Bool));
right_value666 = (void*)0;
right_value667 = (void*)0;
memset(&new_fun_name_551, 0, sizeof(char*));
right_value668 = (void*)0;
right_value669 = (void*)0;
right_value670 = (void*)0;
right_value671 = (void*)0;
right_value672 = (void*)0;
right_value673 = (void*)0;
right_value674 = (void*)0;
memset(&fun_552, 0, sizeof(struct sFun*));
right_value675 = (void*)0;
right_value676 = (void*)0;
memset(&fun2_553, 0, sizeof(struct sFun*));
right_value677 = (void*)0;
right_value678 = (void*)0;
right_value679 = (void*)0;
right_value683 = (void*)0;
right_value684 = (void*)0;
memset(&new_fun_name_555, 0, sizeof(char*));
right_value685 = (void*)0;
right_value686 = (void*)0;
right_value687 = (void*)0;
right_value688 = (void*)0;
right_value689 = (void*)0;
right_value690 = (void*)0;
memset(&fun_556, 0, sizeof(struct sFun*));
right_value691 = (void*)0;
memset(&fun2_557, 0, sizeof(struct sFun*));
right_value692 = (void*)0;
memset(&source_tail_558, 0, sizeof(char*));
right_value693 = (void*)0;
right_value694 = (void*)0;
memset(&header_559, 0, sizeof(struct buffer*));
right_value695 = (void*)0;
right_value696 = (void*)0;
right_value697 = (void*)0;
right_value701 = (void*)0;
right_value702 = (void*)0;
memset(&asm_fun_561, 0, sizeof(char*));
right_value703 = (void*)0;
right_value704 = (void*)0;
right_value705 = (void*)0;
right_value706 = (void*)0;
right_value707 = (void*)0;
right_value708 = (void*)0;
memset(&fun_562, 0, sizeof(struct sFun*));
right_value709 = (void*)0;
memset(&fun2_563, 0, sizeof(struct sFun*));
right_value710 = (void*)0;
memset(&source_tail_564, 0, sizeof(char*));
right_value711 = (void*)0;
right_value712 = (void*)0;
memset(&header_565, 0, sizeof(struct buffer*));
right_value713 = (void*)0;
right_value714 = (void*)0;
right_value715 = (void*)0;
right_value719 = (void*)0;
    header_head_467=info->p;
    source_head_468=info->p;
    result_type_469=((void*)0);
    var_name_470=((void*)0);
    constructor__471=(_Bool)0;
    if(_if_conditional464=info->in_class&&memcmp(info->p,"new(",4)==0,    _if_conditional464) {
        ((char*)(right_value589=parse_word(info)));
        right_value589 = come_decrement_ref_count2(right_value589, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj139=result_type_469;
        result_type_469=(struct sType*)come_increment_ref_count(((struct sType*)(right_value590=sType_clone(info->impl_type))));
        come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value590,sType_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_469->mHeap=(_Bool)1;
        constructor__471=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value591=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_472=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_473=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_474=multiple_assign_var7->v3;
        come_call_finalizer3(right_value591,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj140=result_type_469;
        result_type_469=(struct sType*)come_increment_ref_count(result_type2_472);
        come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj141=var_name_470;
        var_name_470=(char*)come_increment_ref_count(var_name2_473);
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(info->in_class) {
        }
        if(_if_conditional466=!err_474,        _if_conditional466) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_472,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_473 = come_decrement_ref_count2(var_name2_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_475=(_Bool)0;
    {
        p_476=info->p;
        sline_477=info->sline;
        buf2_478=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value593=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value592=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1580, "buffer"))))))));
        come_call_finalizer3(right_value592,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value593,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional52=xisalnum(*info->p)||*info->p==95,        _while_condtional52) {
            buffer_append_char(buf2_478,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(_while_condtional53=*info->p==91&&*(info->p+1)==93,        _while_condtional53) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(_while_condtional54=*info->p==42,        _while_condtional54) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(_while_condtional55=*info->p==37,        _while_condtional55) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(_if_conditional467=buffer_length(buf2_478)>0&&*info->p==58&&*(info->p+1)==58,        _if_conditional467) {
            method_definition_475=(_Bool)1;
        }
        info->p=p_476;
        info->sline=sline_477;
        come_call_finalizer3(buf2_478,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_480=((void*)0);
    if(constructor__471) {
        base_fun_name_480=(char*)come_increment_ref_count(((char*)(right_value594=__builtin_string("initialize"))));
        right_value594 = come_decrement_ref_count2(right_value594, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj142=fun_name_479;
        fun_name_479=(char*)come_increment_ref_count(((char*)(right_value595=create_method_name(info->impl_type,(_Bool)0,base_fun_name_480,info,(_Bool)1))));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value595 = come_decrement_ref_count2(right_value595, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        if(method_definition_475) {
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value596=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            obj_type_481=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_482=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_483=multiple_assign_var8->v3;
            come_call_finalizer3(right_value596,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional470=!err_483,            _if_conditional470) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            (come_push_stackframe("05function.c", 1622, 3),__exception_result_var_b2=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b2);
            (come_push_stackframe("05function.c", 1623, 4),__exception_result_var_b3=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b3);
            base_fun_name_480=(char*)come_increment_ref_count(((char*)(right_value597=parse_word(info))));
            right_value597 = come_decrement_ref_count2(right_value597, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj143=fun_name_479;
            fun_name_479=(char*)come_increment_ref_count(((char*)(right_value598=create_method_name(obj_type_481,(_Bool)0,base_fun_name_480,info,(_Bool)1))));
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value598 = come_decrement_ref_count2(right_value598, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(obj_type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_482 = come_decrement_ref_count2(name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(info->impl_type) {
                base_fun_name_480=(char*)come_increment_ref_count(((char*)(right_value599=parse_word(info))));
                right_value599 = come_decrement_ref_count2(right_value599, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj144=fun_name_479;
                fun_name_479=(char*)come_increment_ref_count(((char*)(right_value600=create_method_name(info->impl_type,(_Bool)0,base_fun_name_480,info,(_Bool)1))));
                __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value600 = come_decrement_ref_count2(right_value600, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                __dec_obj145=fun_name_479;
                fun_name_479=(char*)come_increment_ref_count(((char*)(right_value601=parse_word(info))));
                __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value601 = come_decrement_ref_count2(right_value601, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                base_fun_name_480=(char*)come_increment_ref_count(((char*)(right_value602=__builtin_string(fun_name_479))));
                right_value602 = come_decrement_ref_count2(right_value602, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
    }
    if(_if_conditional472=info->in_class&&charp_operator_equals(base_fun_name_480,"initialize"),    _if_conditional472) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value603=parse_params(info,constructor__471)));
    param_types_484=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_485=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_486=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_487=multiple_assign_var9->v4;
    come_call_finalizer3(right_value603,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_488=info->p;
    if(_if_conditional476=info->in_class&&charp_operator_equals(base_fun_name_480,"initialize"),    _if_conditional476) {
        info->in_class=(_Bool)1;
    }
    header_buf_489=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value605=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value604=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1647, "buffer"))))))));
    come_call_finalizer3(right_value604,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value605,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(header_buf_489,header_head_467,header_tail_488-header_head_467);
    buffer_append_char(header_buf_489,0);
    version_490=0;
    if(_if_conditional477=strmemcmp(info->p,"version"),    _if_conditional477) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_491=0;
        while(_while_condtional56=xisdigit(*info->p),        _while_condtional56) {
            n_491=n_491*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_490=n_491;
    }
    if(_if_conditional478=charp_operator_equals(base_fun_name_480,"lambda"),    _if_conditional478) {
        block_492=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value606=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value606,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        lambda_num_493++;
        fun_name_494=(char*)come_increment_ref_count(((char*)(right_value607=xsprintf("lambda%d",lambda_num_493))));
        right_value607 = come_decrement_ref_count2(right_value607, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_469->mStatic=(_Bool)0;
        fun_495=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value612=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value608=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1677, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value609=__builtin_string(fun_name_494)))),(struct sType*)come_increment_ref_count(result_type_469),(struct list$1sTypeph*)come_increment_ref_count(param_types_484),(struct list$1charph*)come_increment_ref_count(param_names_485),(struct list$1charph*)come_increment_ref_count(param_default_parametors_486),(_Bool)0,var_args_487,(struct sBlock*)come_increment_ref_count(block_492),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value610=buffer_to_string(header_buf_489)))),(char*)come_increment_ref_count(((char*)(right_value611=__builtin_string("")))),info))));
        come_call_finalizer3(right_value608,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value609 = come_decrement_ref_count2(right_value609, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value610 = come_decrement_ref_count2(right_value610, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value611 = come_decrement_ref_count2(right_value611, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value612,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_496=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value613=__builtin_string(fun_name_494))));
        right_value613 = come_decrement_ref_count2(right_value613, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional479=fun2_496==((void*)0)||fun2_496->mExternal,        _if_conditional479) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value614=string_clone(fun_name_494)))),(struct sFun*)come_increment_ref_count(fun_495));
            right_value614 = come_decrement_ref_count2(right_value614, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        base_fun_name_480 = come_decrement_ref_count2(base_fun_name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1689, "struct sNode");
        _inf_obj_value4=come_increment_ref_count(((struct sLambdaNode*)(right_value616=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value615=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 1689, "sLambdaNode")))),fun_495,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sLambdaNode_finalize;
        _inf_value4->clone=(void*)sLambdaNode_clone;
        _inf_value4->compile=(void*)sLambdaNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sLambdaNode_terminated;
        _inf_value4->kind=(void*)sLambdaNode_kind;
        __result212__ = __result_obj__ = ((struct sNode*)(right_value619=_inf_value4));
        come_call_finalizer3(block_492,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_494 = come_decrement_ref_count2(fun_name_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_495,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_470 = come_decrement_ref_count2(var_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_479 = come_decrement_ref_count2(fun_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_484,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value615,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value616,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value619) { right_value619 = come_decrement_ref_count2(right_value619, ((struct sNode*)right_value619)->finalize, ((struct sNode*)right_value619)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result212__;
        come_call_finalizer3(block_492,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_494 = come_decrement_ref_count2(fun_name_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_495,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional486=info->impl_type&&list$1charph_length(info->generics_type_names)>0,        _if_conditional486) {
            none_generics_name_498=(char*)come_increment_ref_count(((char*)(right_value620=get_none_generics_name(info->impl_type->mClass->mName))));
            right_value620 = come_decrement_ref_count2(right_value620, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sname_499=(char*)come_increment_ref_count(((char*)(right_value621=__builtin_string(info->sname))));
            right_value621 = come_decrement_ref_count2(right_value621, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sline_500=info->sline;
            block_501=(char*)come_increment_ref_count(((char*)(right_value622=skip_block(info))));
            right_value622 = come_decrement_ref_count2(right_value622, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fun_502=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value628=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value623=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1699, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value624=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value625=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value626=__builtin_string(fun_name_479)))),(struct sType*)come_increment_ref_count(result_type_469),(struct list$1sTypeph*)come_increment_ref_count(param_types_484),(struct list$1charph*)come_increment_ref_count(param_names_485),(struct list$1charph*)come_increment_ref_count(param_default_parametors_486),var_args_487,(char*)come_increment_ref_count(block_501),info,(char*)come_increment_ref_count(((char*)(right_value627=__builtin_string(generics_sname_499)))),generics_sline_500))));
            come_call_finalizer3(right_value623,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value624,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value625,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            right_value626 = come_decrement_ref_count2(right_value626, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value627 = come_decrement_ref_count2(right_value627, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value628,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            fun_name3_503=(char*)come_increment_ref_count(((char*)(right_value629=xsprintf("%s_%s",none_generics_name_498,base_fun_name_480))));
            right_value629 = come_decrement_ref_count2(right_value629, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value633=__builtin_string(fun_name3_503)))),(struct sGenericsFun*)come_increment_ref_count(fun_502));
            right_value633 = come_decrement_ref_count2(right_value633, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            base_fun_name_480 = come_decrement_ref_count2(base_fun_name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __result227__ = __result_obj__ = (struct sNode*)((void*)0);
            none_generics_name_498 = come_decrement_ref_count2(none_generics_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_499 = come_decrement_ref_count2(generics_sname_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_501 = come_decrement_ref_count2(block_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_502,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_503 = come_decrement_ref_count2(fun_name3_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_470 = come_decrement_ref_count2(var_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_479 = come_decrement_ref_count2(fun_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_484,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result227__;
            none_generics_name_498 = come_decrement_ref_count2(none_generics_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_499 = come_decrement_ref_count2(generics_sname_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_501 = come_decrement_ref_count2(block_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_502,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_503 = come_decrement_ref_count2(fun_name3_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional509=list$1charph_length(info->method_generics_type_names)>0,            _if_conditional509) {
                generics_sname_525=(char*)come_increment_ref_count(((char*)(right_value634=__builtin_string(info->sname))));
                right_value634 = come_decrement_ref_count2(right_value634, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                generics_sline_526=info->sline;
                block_527=(char*)come_increment_ref_count(((char*)(right_value635=skip_block(info))));
                right_value635 = come_decrement_ref_count2(right_value635, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                fun_528=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value641=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value636=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1715, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value637=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value638=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value639=__builtin_string(fun_name_479)))),(struct sType*)come_increment_ref_count(result_type_469),(struct list$1sTypeph*)come_increment_ref_count(param_types_484),(struct list$1charph*)come_increment_ref_count(param_names_485),(struct list$1charph*)come_increment_ref_count(param_default_parametors_486),var_args_487,(char*)come_increment_ref_count(block_527),info,(char*)come_increment_ref_count(((char*)(right_value640=__builtin_string(generics_sname_525)))),generics_sline_526))));
                come_call_finalizer3(right_value636,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value637,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value638,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                right_value639 = come_decrement_ref_count2(right_value639, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value640 = come_decrement_ref_count2(right_value640, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value641,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
                fun_name3_529=(char*)come_increment_ref_count(((char*)(right_value642=charp_clone(base_fun_name_480))));
                right_value642 = come_decrement_ref_count2(right_value642, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value643=__builtin_string(fun_name3_529)))),(struct sGenericsFun*)come_increment_ref_count(fun_528));
                right_value643 = come_decrement_ref_count2(right_value643, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                base_fun_name_480 = come_decrement_ref_count2(base_fun_name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                __result228__ = __result_obj__ = (struct sNode*)((void*)0);
                generics_sname_525 = come_decrement_ref_count2(generics_sname_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_527 = come_decrement_ref_count2(block_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_528,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_529 = come_decrement_ref_count2(fun_name3_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_470 = come_decrement_ref_count2(var_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_479 = come_decrement_ref_count2(fun_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_484,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result228__;
                generics_sname_525 = come_decrement_ref_count2(generics_sname_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_527 = come_decrement_ref_count2(block_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_528,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_529 = come_decrement_ref_count2(fun_name3_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional510=*info->p==123,                _if_conditional510) {
                    source_tail_530=info->p-1;
                    header_531=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value645=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value644=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1728, "buffer"))))))));
                    come_call_finalizer3(right_value644,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value645,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    if(constructor__471) {
                        if(_if_conditional513=list$1sTypeph_length(param_types_484)==1,                        _if_conditional513) {
                            name_532=(char*)come_increment_ref_count(((char*)(right_value646=string_clone(info->impl_type->mClass->mName))));
                            right_value646 = come_decrement_ref_count2(right_value646, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            buffer_append_str(header_531,((char*)(right_value647=xsprintf("extern %s*%% %s*::initialize(%s*%% self);\n",name_532,name_532,name_532))));
                            right_value647 = come_decrement_ref_count2(right_value647, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            name_532 = come_decrement_ref_count2(name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            name_533=(char*)come_increment_ref_count(((char*)(right_value648=string_clone(info->impl_type->mClass->mName))));
                            right_value648 = come_decrement_ref_count2(right_value648, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            buffer_append_str(header_531,((char*)(right_value649=xsprintf("extern %s*%% %s*::initialize(%s*%% self, ",name_533,name_533,name_533))));
                            right_value649 = come_decrement_ref_count2(right_value649, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_534=1;                            i_534<list$1sTypeph_length(param_types_484);                            i_534++                            ){
                                param_type_535=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_484,i_534), "05function.c", 1740, 5));
                                param_name_539=((char*)come_null_check(list$1charphp_operator_load_element(param_names_485,i_534), "05function.c", 1741, 6));
                                default_parametor_540=list$1charphp_operator_load_element(param_default_parametors_486,i_534);
                                if(default_parametor_540) {
                                    buffer_append_str(header_531,((char*)(right_value651=xsprintf("extern %s %s=%s",((char*)(right_value650=make_come_type_name_string_no_solved(param_type_535,info))),param_name_539,default_parametor_540))));
                                    right_value650 = come_decrement_ref_count2(right_value650, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value651 = come_decrement_ref_count2(right_value651, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    buffer_append_str(header_531,((char*)(right_value653=xsprintf("extern %s %s",((char*)(right_value652=make_come_type_name_string_no_solved(param_type_535,info))),param_name_539))));
                                    right_value652 = come_decrement_ref_count2(right_value652, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value653 = come_decrement_ref_count2(right_value653, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional517=i_534!=list$1sTypeph_length(param_types_484)-1,                                _if_conditional517) {
                                    buffer_append_str(header_531,",");
                                }
                            }
                            buffer_append_str(header_531,");\n");
                            name_533 = come_decrement_ref_count2(name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(_if_conditional518=info->in_class&&info->impl_type,                        _if_conditional518) {
                            if(_if_conditional519=list$1sTypeph_length(param_types_484)==1,                            _if_conditional519) {
                                impl_name_541=(char*)come_increment_ref_count(((char*)(right_value654=string_clone(info->impl_type->mClass->mName))));
                                right_value654 = come_decrement_ref_count2(right_value654, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                result_type_name_542=(char*)come_increment_ref_count(((char*)(right_value655=make_come_type_name_string_no_solved(result_type_469,info))));
                                right_value655 = come_decrement_ref_count2(right_value655, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                buffer_append_str(header_531,((char*)(right_value656=xsprintf("extern %s %s*::%s(%s* self);\n",result_type_name_542,impl_name_541,base_fun_name_480,impl_name_541))));
                                right_value656 = come_decrement_ref_count2(right_value656, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                impl_name_541 = come_decrement_ref_count2(impl_name_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_542 = come_decrement_ref_count2(result_type_name_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                impl_name_543=(char*)come_increment_ref_count(((char*)(right_value657=string_clone(info->impl_type->mClass->mName))));
                                right_value657 = come_decrement_ref_count2(right_value657, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                result_type_name_544=(char*)come_increment_ref_count(((char*)(right_value658=make_come_type_name_string_no_solved(result_type_469,info))));
                                right_value658 = come_decrement_ref_count2(right_value658, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                buffer_append_str(header_531,((char*)(right_value659=xsprintf("extern %s %s*::%s(%s* self, ",result_type_name_544,impl_name_543,base_fun_name_480,impl_name_543))));
                                right_value659 = come_decrement_ref_count2(right_value659, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                for(                                i_545=1;                                i_545<list$1sTypeph_length(param_types_484);                                i_545++                                ){
                                    param_type_546=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_484,i_545), "05function.c", 1771, 7));
                                    param_name_547=((char*)come_null_check(list$1charphp_operator_load_element(param_names_485,i_545), "05function.c", 1772, 8));
                                    default_parametor_548=list$1charphp_operator_load_element(param_default_parametors_486,i_545);
                                    if(default_parametor_548) {
                                        buffer_append_str(header_531,((char*)(right_value661=xsprintf("extern %s %s=%s",((char*)(right_value660=make_come_type_name_string_no_solved(param_type_546,info))),param_name_547,default_parametor_548))));
                                        right_value660 = come_decrement_ref_count2(right_value660, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value661 = come_decrement_ref_count2(right_value661, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        buffer_append_str(header_531,((char*)(right_value663=xsprintf("extern %s %s",((char*)(right_value662=make_come_type_name_string_no_solved(param_type_546,info))),param_name_547))));
                                        right_value662 = come_decrement_ref_count2(right_value662, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value663 = come_decrement_ref_count2(right_value663, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional521=i_545!=list$1sTypeph_length(param_types_484)-1,                                    _if_conditional521) {
                                        buffer_append_str(header_531,",");
                                    }
                                }
                                buffer_append_str(header_531,");\n");
                                impl_name_543 = come_decrement_ref_count2(impl_name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_544 = come_decrement_ref_count2(result_type_name_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        else {
                            buffer_append(header_531,source_head_468,source_tail_530-source_head_468);
                            buffer_append_str(header_531,";\n");
                        }
                    }
                    if(_if_conditional522=!result_type_469->mStatic,                    _if_conditional522) {
                        add_come_code_at_come_header(info,"%s",((char*)(right_value664=buffer_to_string(header_531))));
                        right_value664 = come_decrement_ref_count2(right_value664, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    block_549=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value665=parse_block(info,(_Bool)0,constructor__471))));
                    come_call_finalizer3(right_value665,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                    static__550=(_Bool)0;
                    if(result_type_469->mStatic) {
                        result_type_469->mStatic=(_Bool)0;
                        static__550=(_Bool)1;
                    }
                    if(_if_conditional524=version_490>0,                    _if_conditional524) {
                        new_fun_name_551=(char*)come_increment_ref_count(((char*)(right_value667=xsprintf("%s_v%d",((char*)(right_value666=__builtin_string(fun_name_479))),version_490))));
                        right_value666 = come_decrement_ref_count2(right_value666, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value667 = come_decrement_ref_count2(right_value667, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj147=fun_name_479;
                        fun_name_479=(char*)come_increment_ref_count(((char*)(right_value668=__builtin_string(new_fun_name_551))));
                        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value668 = come_decrement_ref_count2(right_value668, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_551 = come_decrement_ref_count2(new_fun_name_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    fun_552=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value674=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value669=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1812, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value670=__builtin_string(fun_name_479)))),(struct sType*)come_increment_ref_count(result_type_469),(struct list$1sTypeph*)come_increment_ref_count(param_types_484),(struct list$1charph*)come_increment_ref_count(param_names_485),(struct list$1charph*)come_increment_ref_count(param_default_parametors_486),(_Bool)0,var_args_487,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value671=sBlock_clone(block_549)))),static__550,(char*)come_increment_ref_count(((char*)(right_value672=buffer_to_string(header_buf_489)))),(char*)come_increment_ref_count(((char*)(right_value673=__builtin_string(info->sname)))),info))));
                    come_call_finalizer3(right_value669,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value670 = come_decrement_ref_count2(right_value670, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value671,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value672 = come_decrement_ref_count2(right_value672, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value673 = come_decrement_ref_count2(right_value673, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value674,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                    if(info->in_class) {
                        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value675=string_clone(fun_name_479)))),(struct sFun*)come_increment_ref_count(fun_552));
                        right_value675 = come_decrement_ref_count2(right_value675, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        fun2_553=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value676=__builtin_string(fun_name_479))));
                        right_value676 = come_decrement_ref_count2(right_value676, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional526=fun2_553==((void*)0)||fun2_553->mExternal,                        _if_conditional526) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value677=string_clone(fun_name_479)))),(struct sFun*)come_increment_ref_count(fun_552));
                            right_value677 = come_decrement_ref_count2(right_value677, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    base_fun_name_480 = come_decrement_ref_count2(base_fun_name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1834, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sFunNode*)(right_value679=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value678=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1834, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_552),info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sFunNode_finalize;
                    _inf_value5->clone=(void*)sFunNode_clone;
                    _inf_value5->compile=(void*)sFunNode_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sFunNode_terminated;
                    _inf_value5->kind=(void*)sFunNode_kind;
                    __result235__ = __result_obj__ = ((struct sNode*)(right_value683=_inf_value5));
                    come_call_finalizer3(header_531,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(block_549,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(fun_552,sFun_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_470 = come_decrement_ref_count2(var_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_479 = come_decrement_ref_count2(fun_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_484,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_names_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_default_parametors_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(header_buf_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value678,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value679,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value683) { right_value683 = come_decrement_ref_count2(right_value683, ((struct sNode*)right_value683)->finalize, ((struct sNode*)right_value683)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result235__;
                    come_call_finalizer3(header_531,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(block_549,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(fun_552,sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional533=xisalpha(*info->p)||*info->p==95||*info->p==59,                    _if_conditional533) {
                        if(_if_conditional534=version_490>0,                        _if_conditional534) {
                            new_fun_name_555=(char*)come_increment_ref_count(((char*)(right_value684=xsprintf("%s_v%d",fun_name_479,version_490))));
                            right_value684 = come_decrement_ref_count2(right_value684, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __dec_obj150=fun_name_479;
                            fun_name_479=(char*)come_increment_ref_count(((char*)(right_value685=__builtin_string(new_fun_name_555))));
                            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value685 = come_decrement_ref_count2(right_value685, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            new_fun_name_555 = come_decrement_ref_count2(new_fun_name_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional535=*info->p==59,                        _if_conditional535) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            result_type_469->mStatic=(_Bool)0;
                            fun_556=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value690=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value686=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1848, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value687=__builtin_string(fun_name_479)))),(struct sType*)come_increment_ref_count(result_type_469),(struct list$1sTypeph*)come_increment_ref_count(param_types_484),(struct list$1charph*)come_increment_ref_count(param_names_485),(struct list$1charph*)come_increment_ref_count(param_default_parametors_486),(_Bool)1,var_args_487,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value688=buffer_to_string(header_buf_489)))),(char*)come_increment_ref_count(((char*)(right_value689=__builtin_string(info->sname)))),info))));
                            come_call_finalizer3(right_value686,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value687 = come_decrement_ref_count2(right_value687, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value688 = come_decrement_ref_count2(right_value688, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value689 = come_decrement_ref_count2(right_value689, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value690,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            fun2_557=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value691=__builtin_string(fun_name_479))));
                            right_value691 = come_decrement_ref_count2(right_value691, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional536=fun2_557==((void*)0)||fun2_557->mExternal,                            _if_conditional536) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value692=string_clone(fun_name_479)))),(struct sFun*)come_increment_ref_count(fun_556));
                                right_value692 = come_decrement_ref_count2(right_value692, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            base_fun_name_480 = come_decrement_ref_count2(base_fun_name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            source_tail_558=info->p;
                            header_559=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value694=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value693=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1864, "buffer"))))))));
                            come_call_finalizer3(right_value693,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value694,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_559,source_head_468,source_tail_558-source_head_468);
                            add_come_code_at_come_header(info,"%s",((char*)(right_value695=buffer_to_string(header_559))));
                            right_value695 = come_decrement_ref_count2(right_value695, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1869, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(right_value697=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value696=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1869, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_556),info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sFunNode_finalize;
                            _inf_value6->clone=(void*)sFunNode_clone;
                            _inf_value6->compile=(void*)sFunNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sFunNode_terminated;
                            _inf_value6->kind=(void*)sFunNode_kind;
                            __result238__ = __result_obj__ = ((struct sNode*)(right_value701=_inf_value6));
                            come_call_finalizer3(fun_556,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_559,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_470 = come_decrement_ref_count2(var_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_479 = come_decrement_ref_count2(fun_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_484,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value696,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value697,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value701) { right_value701 = come_decrement_ref_count2(right_value701, ((struct sNode*)right_value701)->finalize, ((struct sNode*)right_value701)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result238__;
                            come_call_finalizer3(fun_556,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_559,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            asm_fun_561=(char*)come_increment_ref_count(((char*)(right_value702=parse_attribute(info))));
                            right_value702 = come_decrement_ref_count2(right_value702, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional543=string_operator_not_equals(asm_fun_561,""),                            _if_conditional543) {
                                __dec_obj153=fun_name_479;
                                fun_name_479=(char*)come_increment_ref_count(((char*)(right_value703=__builtin_string(asm_fun_561))));
                                __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value703 = come_decrement_ref_count2(right_value703, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            (come_push_stackframe("05function.c", 1878, 9),__exception_result_var_b4=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b4);
                            result_type_469->mStatic=(_Bool)0;
                            fun_562=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value708=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value704=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1882, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value705=__builtin_string(fun_name_479)))),(struct sType*)come_increment_ref_count(result_type_469),(struct list$1sTypeph*)come_increment_ref_count(param_types_484),(struct list$1charph*)come_increment_ref_count(param_names_485),(struct list$1charph*)come_increment_ref_count(param_default_parametors_486),(_Bool)1,var_args_487,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value706=buffer_to_string(header_buf_489)))),(char*)come_increment_ref_count(((char*)(right_value707=__builtin_string(info->sname)))),info))));
                            come_call_finalizer3(right_value704,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value705 = come_decrement_ref_count2(right_value705, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value706 = come_decrement_ref_count2(right_value706, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value707 = come_decrement_ref_count2(right_value707, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value708,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            fun2_563=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value709=__builtin_string(fun_name_479))));
                            right_value709 = come_decrement_ref_count2(right_value709, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional544=fun2_563==((void*)0)||fun2_563->mExternal,                            _if_conditional544) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value710=string_clone(fun_name_479)))),(struct sFun*)come_increment_ref_count(fun_562));
                                right_value710 = come_decrement_ref_count2(right_value710, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            base_fun_name_480 = come_decrement_ref_count2(base_fun_name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            source_tail_564=info->p;
                            header_565=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value712=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value711=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1898, "buffer"))))))));
                            come_call_finalizer3(right_value711,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value712,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_565,source_head_468,source_tail_564-source_head_468);
                            add_come_code_at_come_header(info,"%s",((char*)(right_value713=buffer_to_string(header_565))));
                            right_value713 = come_decrement_ref_count2(right_value713, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1903, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(right_value715=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value714=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1903, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_562),info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sFunNode_finalize;
                            _inf_value7->clone=(void*)sFunNode_clone;
                            _inf_value7->compile=(void*)sFunNode_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sFunNode_terminated;
                            _inf_value7->kind=(void*)sFunNode_kind;
                            __result241__ = __result_obj__ = ((struct sNode*)(right_value719=_inf_value7));
                            asm_fun_561 = come_decrement_ref_count2(asm_fun_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_562,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_565,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_470 = come_decrement_ref_count2(var_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_479 = come_decrement_ref_count2(fun_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_484,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value714,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value715,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value719) { right_value719 = come_decrement_ref_count2(right_value719, ((struct sNode*)right_value719)->finalize, ((struct sNode*)right_value719)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result241__;
                            asm_fun_561 = come_decrement_ref_count2(asm_fun_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_562,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_565,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        err_msg(info,"invalid character(%c)(2)\n",*info->p);
                        exit(2);
                    }
                }
            }
        }
    }
    base_fun_name_480 = come_decrement_ref_count2(base_fun_name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result242__ = __result_obj__ = (struct sNode*)((void*)0);
    come_call_finalizer3(result_type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_470 = come_decrement_ref_count2(var_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_479 = come_decrement_ref_count2(fun_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_484,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result242__;
    come_call_finalizer3(result_type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_470 = come_decrement_ref_count2(var_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_479 = come_decrement_ref_count2(fun_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_484,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional473;
_Bool _if_conditional474;
_Bool _if_conditional475;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional473=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional473) {
            come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional474=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional474) {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional475=self!=((void*)0)&&self->v3!=((void*)0),        _if_conditional475) {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional480;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional480=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional480) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional481;
struct sLambdaNode* __result210__;
void* right_value617;
struct sLambdaNode* result_497;
_Bool _if_conditional482;
_Bool _if_conditional483;
void* right_value618;
char* __dec_obj146;
_Bool _if_conditional484;
struct sLambdaNode* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
right_value617 = (void*)0;
memset(&result_497, 0, sizeof(struct sLambdaNode*));
right_value618 = (void*)0;
            if(_if_conditional481=self==(void*)0,            _if_conditional481) {
                __result210__ = __result_obj__ = (void*)0;
                return __result210__;
            }
            result_497=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value617=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"))));
            come_call_finalizer3(right_value617,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional482=self!=((void*)0),            _if_conditional482) {
                result_497->sline=self->sline;
            }
            if(_if_conditional483=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional483) {
                __dec_obj146=result_497->sname;
                result_497->sname=(char*)come_increment_ref_count(((char*)(right_value618=string_clone(self->sname))));
                __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value618 = come_decrement_ref_count2(right_value618, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional484=self!=((void*)0),            _if_conditional484) {
                result_497->mFun=self->mFun;
            }
            __result211__ = __result_obj__ = result_497;
            come_call_finalizer3(result_497,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result211__;
            come_call_finalizer3(result_497,sLambdaNode_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional485;
int __result213__;
int __result214__;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional485=self==((void*)0),            _if_conditional485) {
                __result213__ = 0;
                return __result213__;
            }
            __result214__ = self->len;
            return __result214__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__;
_Bool _if_conditional487;
unsigned int hash_521;
unsigned int it_522;
_Bool _while_condtional59;
_Bool _if_conditional499;
_Bool _if_conditional500;
_Bool _if_conditional501;
_Bool _if_conditional502;
_Bool _if_conditional503;
_Bool _if_conditional504;
_Bool _if_conditional505;
_Bool _if_conditional506;
_Bool same_key_exist_523;
char* it2_524;
_Bool _if_conditional507;
_Bool _if_conditional508;
struct map$2charphsGenericsFunph* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_521, 0, sizeof(unsigned int));
memset(&it_522, 0, sizeof(unsigned int));
memset(&same_key_exist_523, 0, sizeof(_Bool));
memset(&it2_524, 0, sizeof(char*));
                if(_if_conditional487=self->len*10>=self->size,                _if_conditional487) {
                    map$2charphsGenericsFunph_rehash(self);
                }
                hash_521=string_get_hash_key(key)%self->size;
                it_522=hash_521;
                while(_while_condtional59=(_Bool)1,                _while_condtional59) {
                    if(_if_conditional499=self->item_existance[it_522],                    _if_conditional499) {
                        if(_if_conditional500=string_equals(self->keys[it_522],key),                        _if_conditional500) {
                            if(_if_conditional501=1,                            _if_conditional501) {
                                list$1charp_remove(self->key_list,self->keys[it_522]);
                                self->keys[it_522] = come_decrement_ref_count2(self->keys[it_522], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                self->keys[it_522]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                list$1charp_remove(self->key_list,self->keys[it_522]);
                                self->keys[it_522]=key;
                            }
                            if(_if_conditional502=1,                            _if_conditional502) {
                                come_call_finalizer3(self->items[it_522],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                                self->items[it_522]=(struct sGenericsFun*)come_increment_ref_count(item);
                            }
                            else {
                                self->items[it_522]=item;
                            }
                            break;
                        }
                        it_522++;
                        if(_if_conditional503=it_522>=self->size,                        _if_conditional503) {
                            it_522=0;
                        }
                        else {
                            if(_if_conditional504=it_522==hash_521,                            _if_conditional504) {
                                printf("unexpected error in map.insert\n");
                                stackframe();
                                exit(2);
                            }
                        }
                    }
                    else {
                        self->item_existance[it_522]=(_Bool)1;
                        if(_if_conditional505=1,                        _if_conditional505) {
                            self->keys[it_522]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            self->keys[it_522]=key;
                        }
                        if(_if_conditional506=1,                        _if_conditional506) {
                            self->items[it_522]=(struct sGenericsFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_522]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_523=(_Bool)0;
                for(                it2_524=list$1charp_begin(self->key_list);                !list$1charp_end(self->key_list);                it2_524=list$1charp_next(self->key_list)                ){
                    if(_if_conditional507=string_equals(it2_524,key),                    _if_conditional507) {
                        same_key_exist_523=(_Bool)1;
                    }
                }
                if(_if_conditional508=!same_key_exist_523,                _if_conditional508) {
                    list$1charp_push_back(self->key_list,key);
                }
                __result226__ = __result_obj__ = self;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result226__;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int size_504;
void* right_value630;
char** keys_505;
void* right_value631;
struct sGenericsFun** items_506;
void* right_value632;
_Bool* item_existance_507;
int len_508;
char* it_511;
struct sGenericsFun* default_value_514;
struct sGenericsFun* it2_517;
unsigned int hash_518;
int n_519;
_Bool _while_condtional58;
_Bool _if_conditional496;
_Bool _if_conditional497;
_Bool _if_conditional498;
struct sGenericsFun* default_value_520;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_504, 0, sizeof(int));
right_value630 = (void*)0;
memset(&keys_505, 0, sizeof(char**));
right_value631 = (void*)0;
memset(&items_506, 0, sizeof(struct sGenericsFun**));
right_value632 = (void*)0;
memset(&item_existance_507, 0, sizeof(_Bool*));
memset(&len_508, 0, sizeof(int));
memset(&it_511, 0, sizeof(char*));
memset(&default_value_514, 0, sizeof(struct sGenericsFun*));
memset(&it2_517, 0, sizeof(struct sGenericsFun*));
memset(&hash_518, 0, sizeof(unsigned int));
memset(&n_519, 0, sizeof(int));
memset(&default_value_520, 0, sizeof(struct sGenericsFun*));
                        size_504=self->size*10;
                        keys_505=(char**)come_increment_ref_count(((char**)(right_value630=(char**)come_calloc(1, sizeof(char*)*(1*(size_504)), "./neo-c.h", 1313, "char*%"))));
                        right_value630 = come_decrement_ref_count2(right_value630, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        items_506=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value631=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_504)), "./neo-c.h", 1314, "sGenericsFun*%"))));
                        come_call_finalizer3(right_value631,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
                        item_existance_507=(_Bool*)come_increment_ref_count(((_Bool*)(right_value632=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_504)), "./neo-c.h", 1315, "bool"))));
                        right_value632 = come_decrement_ref_count2(right_value632, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        len_508=0;
                        for(                        it_511=map$2charphsGenericsFunph_begin(self);                        !map$2charphsGenericsFunph_end(self);                        it_511=map$2charphsGenericsFunph_next(self)                        ){
                            memset(&default_value_514,0,sizeof(struct sGenericsFun*));
                            it2_517=map$2charphsGenericsFunph_at(self,it_511,default_value_514);
                            hash_518=string_get_hash_key(it_511)%size_504;
                            n_519=hash_518;
                            while(_while_condtional58=(_Bool)1,                            _while_condtional58) {
                                if(_if_conditional496=item_existance_507[n_519],                                _if_conditional496) {
                                    n_519++;
                                    if(_if_conditional497=n_519>=size_504,                                    _if_conditional497) {
                                        n_519=0;
                                    }
                                    else {
                                        if(_if_conditional498=n_519==hash_518,                                        _if_conditional498) {
                                            printf("unexpected error in map.rehash(1)\n");
                                            stackframe();
                                            exit(2);
                                        }
                                    }
                                }
                                else {
                                    item_existance_507[n_519]=(_Bool)1;
                                    keys_505[n_519]=it_511;
                                    items_506[n_519]=map$2charphsGenericsFunph_at(self,it_511,default_value_520);
                                    len_508++;
                                    break;
                                }
                            }
                        }
                        come_free((char*)self->items);
                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_free((char*)self->keys);
                        self->keys=keys_505;
                        self->items=items_506;
                        self->item_existance=item_existance_507;
                        self->size=size_504;
                        self->len=len_508;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional488;
char* result_509;
char* __result215__;
_Bool _if_conditional489;
char* __result216__;
char* result_510;
char* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_509, 0, sizeof(char*));
memset(&result_510, 0, sizeof(char*));
                            if(_if_conditional488=self==((void*)0),                            _if_conditional488) {
                                memset(&result_509,0,sizeof(char*));
                                __result215__ = __result_obj__ = result_509;
                                return __result215__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result216__ = __result_obj__ = self->key_list->it->item;
                                return __result216__;
                            }
                            memset(&result_510,0,sizeof(char*));
                            __result217__ = __result_obj__ = result_510;
                            return __result217__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __result218__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result218__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result218__;
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional490;
char* result_512;
char* __result219__;
_Bool _if_conditional491;
char* __result220__;
char* result_513;
char* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_512, 0, sizeof(char*));
memset(&result_513, 0, sizeof(char*));
                            if(_if_conditional490=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional490) {
                                memset(&result_512,0,sizeof(char*));
                                __result219__ = __result_obj__ = result_512;
                                return __result219__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result220__ = __result_obj__ = self->key_list->it->item;
                                return __result220__;
                            }
                            memset(&result_513,0,sizeof(char*));
                            __result221__ = __result_obj__ = result_513;
                            return __result221__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_515;
unsigned int it_516;
_Bool _while_condtional57;
_Bool _if_conditional492;
_Bool _if_conditional493;
struct sGenericsFun* __result222__;
_Bool _if_conditional494;
_Bool _if_conditional495;
struct sGenericsFun* __result223__;
struct sGenericsFun* __result224__;
struct sGenericsFun* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_515, 0, sizeof(unsigned int));
memset(&it_516, 0, sizeof(unsigned int));
                                hash_515=string_get_hash_key(((char*)key))%self->size;
                                it_516=hash_515;
                                while(_while_condtional57=(_Bool)1,                                _while_condtional57) {
                                    if(_if_conditional492=self->item_existance[it_516],                                    _if_conditional492) {
                                        if(_if_conditional493=string_equals(self->keys[it_516],key),                                        _if_conditional493) {
                                            __result222__ = __result_obj__ = self->items[it_516];
                                            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result222__;
                                        }
                                        it_516++;
                                        if(_if_conditional494=it_516>=self->size,                                        _if_conditional494) {
                                            it_516=0;
                                        }
                                        else {
                                            if(_if_conditional495=it_516==hash_515,                                            _if_conditional495) {
                                                __result223__ = __result_obj__ = default_value;
                                                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result223__;
                                            }
                                        }
                                    }
                                    else {
                                        __result224__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result224__;
                                    }
                                }
                                __result225__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result225__;
                                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional512;
int __result229__;
int __result230__;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional512=self==((void*)0),                            _if_conditional512) {
                                __result229__ = 0;
                                return __result229__;
                            }
                            __result230__ = self->len;
                            return __result230__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional514;
struct list_item$1charph* it_536;
int i_537;
_Bool _while_condtional60;
_Bool _if_conditional515;
char* __result231__;
char* default_value_538;
char* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_536, 0, sizeof(struct list_item$1charph*));
memset(&i_537, 0, sizeof(int));
memset(&default_value_538, 0, sizeof(char*));
                                    if(_if_conditional514=position<0,                                    _if_conditional514) {
                                        position+=self->len;
                                    }
                                    it_536=self->head;
                                    i_537=0;
                                    while(_while_condtional60=it_536!=((void*)0),                                    _while_condtional60) {
                                        if(_if_conditional515=position==i_537,                                        _if_conditional515) {
                                            __result231__ = __result_obj__ = it_536->item;
                                            return __result231__;
                                        }
                                        it_536=it_536->next;
                                        i_537++;
                                    }
                                    memset(&default_value_538,0,sizeof(char*));
                                    __result232__ = __result_obj__ = default_value_538;
                                    default_value_538 = come_decrement_ref_count2(default_value_538, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    return __result232__;
                                    default_value_538 = come_decrement_ref_count2(default_value_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_567;
char* __dec_obj156;
char* last_code2_568;
char* __dec_obj157;
char* last_code3_569;
char* __dec_obj158;
struct sClass* current_stack_frame_struct_570;
struct sFun* finalizer_571;
void* right_value720;
char* real_fun_name_572;
void* right_value721;
char* user_real_fun_name_573;
struct sFun* user_finalizer_574;
void* right_value722;
struct sType* type2_575;
struct sClass* klass_576;
_Bool _if_conditional551;
void* right_value723;
void* right_value724;
struct buffer* source_577;
_Bool _if_conditional552;
struct list$1tuple2$2charphsTypephph* o2_saved_579;
struct tuple2$2charphsTypeph* it_582;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_585;
struct sType* field_type_586;
_Bool _if_conditional557;
_Bool _if_conditional558;
char* p_588;
int sline_589;
char* sname_590;
char* head_591;
struct buffer* source3_592;
struct buffer* __dec_obj159;
void* right_value725;
char* __dec_obj160;
void* right_value726;
struct sBlock* block_593;
void* right_value727;
void* right_value728;
struct sType* result_type_594;
void* right_value729;
char* name_595;
void* right_value730;
struct sType* self_type_596;
_Bool _if_conditional559;
struct sType* __list_values21___597[1];
void* right_value731;
void* right_value732;
struct list$1sTypeph* param_types_598;
void* right_value733;
char* __list_values22___599[1];
void* right_value734;
void* right_value735;
struct list$1charph* param_names_600;
void* right_value736;
void* right_value737;
struct list$1charph* param_default_parametors_601;
void* right_value738;
void* right_value739;
struct buffer* header_buf_602;
void* right_value740;
int i_603;
struct sType* param_type_604;
char* param_name_605;
void* right_value741;
_Bool _if_conditional560;
void* right_value742;
void* right_value743;
void* right_value744;
void* right_value745;
struct sFun* fun_606;
void* right_value746;
struct sFun* fun2_607;
_Bool _if_conditional561;
void* right_value747;
void* right_value748;
void* right_value749;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* right_value753;
struct sNode* node_609;
_Bool _if_conditional568;
struct buffer* __dec_obj163;
char* __dec_obj164;
char* __dec_obj165;
char* __dec_obj166;
char* __dec_obj167;
void* right_value754;
void* right_value755;
struct tuple2$2sFunpcharph* __result253__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_567, 0, sizeof(char*));
memset(&last_code2_568, 0, sizeof(char*));
memset(&last_code3_569, 0, sizeof(char*));
memset(&current_stack_frame_struct_570, 0, sizeof(struct sClass*));
memset(&finalizer_571, 0, sizeof(struct sFun*));
right_value720 = (void*)0;
memset(&real_fun_name_572, 0, sizeof(char*));
right_value721 = (void*)0;
memset(&user_real_fun_name_573, 0, sizeof(char*));
memset(&user_finalizer_574, 0, sizeof(struct sFun*));
right_value722 = (void*)0;
memset(&type2_575, 0, sizeof(struct sType*));
memset(&klass_576, 0, sizeof(struct sClass*));
right_value723 = (void*)0;
right_value724 = (void*)0;
memset(&source_577, 0, sizeof(struct buffer*));
memset(&o2_saved_579, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_582, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_585, 0, sizeof(char*));
memset(&field_type_586, 0, sizeof(struct sType*));
memset(&name_585, 0, sizeof(char*));
memset(&field_type_586, 0, sizeof(struct sType*));
memset(&p_588, 0, sizeof(char*));
memset(&sline_589, 0, sizeof(int));
memset(&sname_590, 0, sizeof(char*));
memset(&head_591, 0, sizeof(char*));
memset(&source3_592, 0, sizeof(struct buffer*));
right_value725 = (void*)0;
right_value726 = (void*)0;
memset(&block_593, 0, sizeof(struct sBlock*));
right_value727 = (void*)0;
right_value728 = (void*)0;
memset(&result_type_594, 0, sizeof(struct sType*));
right_value729 = (void*)0;
memset(&name_595, 0, sizeof(char*));
right_value730 = (void*)0;
memset(&self_type_596, 0, sizeof(struct sType*));
right_value731 = (void*)0;
right_value732 = (void*)0;
memset(&param_types_598, 0, sizeof(struct list$1sTypeph*));
right_value733 = (void*)0;
right_value734 = (void*)0;
right_value735 = (void*)0;
memset(&param_names_600, 0, sizeof(struct list$1charph*));
right_value736 = (void*)0;
right_value737 = (void*)0;
memset(&param_default_parametors_601, 0, sizeof(struct list$1charph*));
right_value738 = (void*)0;
right_value739 = (void*)0;
memset(&header_buf_602, 0, sizeof(struct buffer*));
right_value740 = (void*)0;
memset(&i_603, 0, sizeof(int));
memset(&param_type_604, 0, sizeof(struct sType*));
memset(&param_name_605, 0, sizeof(char*));
right_value741 = (void*)0;
right_value742 = (void*)0;
right_value743 = (void*)0;
right_value744 = (void*)0;
right_value745 = (void*)0;
memset(&fun_606, 0, sizeof(struct sFun*));
right_value746 = (void*)0;
memset(&fun2_607, 0, sizeof(struct sFun*));
right_value747 = (void*)0;
right_value748 = (void*)0;
right_value749 = (void*)0;
right_value753 = (void*)0;
memset(&node_609, 0, sizeof(struct sNode*));
right_value754 = (void*)0;
right_value755 = (void*)0;
    last_code_567=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj156=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_568=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj157=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_569=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj158=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_570=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_571=((void*)0);
    real_fun_name_572=(char*)come_increment_ref_count(((char*)(right_value720=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value720 = come_decrement_ref_count2(right_value720, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    user_real_fun_name_573=(char*)come_increment_ref_count(((char*)(right_value721=create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1))));
    right_value721 = come_decrement_ref_count2(right_value721, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    user_finalizer_574=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_573);
    type2_575=(struct sType*)come_increment_ref_count(((struct sType*)(right_value722=solve_generics(type,type,info))));
    come_call_finalizer3(right_value722,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_575;
    klass_576=type->mClass;
    if(_if_conditional551=type->mPointerNum>0&&klass_576->mStruct,    _if_conditional551) {
        source_577=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value724=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value723=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1942, "buffer"))))))));
        come_call_finalizer3(right_value723,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value724,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_577,123);
        if(user_finalizer_574) {
            char source2_578[1024];
            memset(&source2_578, 0, sizeof(char)            *(1024)            );
            snprintf(source2_578,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_573);
            buffer_append_str(source_577,source2_578);
        }
        klass_576=map$2charphsClassphp_operator_load_element(info->classes,klass_576->mName);
        for(        o2_saved_579=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_576->mFields)),it_582=list$1tuple2$2charphsTypephph_begin((o2_saved_579));        !list$1tuple2$2charphsTypephph_end((o2_saved_579));        it_582=list$1tuple2$2charphsTypephph_next((o2_saved_579))        ){
            multiple_assign_var10=it_582;
            name_585=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_586=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(_if_conditional557=string_operator_equals(type->mClass->mName,field_type_586->mClass->mName)&&type->mPointerNum==field_type_586->mPointerNum&&field_type_586->mHeap,            _if_conditional557) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_586->mHeap) {
                char source2_587[1024];
                memset(&source2_587, 0, sizeof(char)                *(1024)                );
                snprintf(source2_587,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_585,name_585);
                buffer_append_str(source_577,source2_587);
            }
            name_585 = come_decrement_ref_count2(name_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_586,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_579,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_577,125);
        p_588=info->p;
        sline_589=info->sline;
        sname_590=(char*)come_increment_ref_count(info->sname);
        head_591=info->head;
        source3_592=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj159=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_577);
        come_call_finalizer3(__dec_obj159,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_577->buf;
        info->head=source_577->buf;
        __dec_obj160=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value725=__builtin_string(real_fun_name_572))));
        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value725 = come_decrement_ref_count2(right_value725, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_593=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value726=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value726,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_594=(struct sType*)come_increment_ref_count(((struct sType*)(right_value728=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value727=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1988, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value727,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value728,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_595=(char*)come_increment_ref_count(((char*)(right_value729=string_clone(real_fun_name_572))));
        right_value729 = come_decrement_ref_count2(right_value729, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_596=(struct sType*)come_increment_ref_count(((struct sType*)(right_value730=sType_clone(type))));
        come_call_finalizer3(right_value730,sType_finalize, 0, 1, 0, 0, __result_obj__);
        self_type_596->mHeap=(_Bool)0;
        if(_if_conditional559=self_type_596->mPointerNum>1,        _if_conditional559) {
            self_type_596->mPointerNum=1;
        }
        {__list_values21___597[0]=come_increment_ref_count(self_type_596);
}        param_types_598=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value732=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value731=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1995, "struct list$1sTypeph")))),1,__list_values21___597))));
        come_call_finalizer3(right_value731,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value732,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values22___599[0]=come_increment_ref_count(((char*)(right_value733=__builtin_string("self"))));
}        param_names_600=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value735=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value734=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1996, "struct list$1charph")))),1,__list_values22___599))));
        right_value733 = come_decrement_ref_count2(right_value733, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value734,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value735,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_601=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value737=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value736=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1997, "list$1charph"))))))));
        come_call_finalizer3(right_value736,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value737,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_601,((void*)0));
        header_buf_602=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value739=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value738=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2000, "buffer"))))))));
        come_call_finalizer3(right_value738,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value739,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_602,((char*)(right_value740=make_come_type_name_string(result_type_594,info))));
        right_value740 = come_decrement_ref_count2(right_value740, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_602," ");
        buffer_append_str(header_buf_602,real_fun_name_572);
        buffer_append_str(header_buf_602,"(");
        for(        i_603=0;        i_603<list$1sTypeph_length(param_types_598);        i_603++        ){
            param_type_604=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_598,i_603), "05function.c", 2008, 10));
            param_name_605=((char*)come_null_check(list$1charphp_operator_load_element(param_names_600,i_603), "05function.c", 2009, 11));
            buffer_append_str(header_buf_602,((char*)(right_value741=make_come_type_name_string(param_type_604,info))));
            right_value741 = come_decrement_ref_count2(right_value741, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_602," ");
            buffer_append_str(header_buf_602,param_name_605);
            if(_if_conditional560=i_603!=list$1sTypeph_length(param_types_598)-1,            _if_conditional560) {
                buffer_append_str(header_buf_602,",");
            }
        }
        buffer_append_str(header_buf_602,")");
        result_type_594->mStatic=(_Bool)0;
        fun_606=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value745=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value742=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2023, "sFun")))),(char*)come_increment_ref_count(name_595),(struct sType*)come_increment_ref_count(result_type_594),(struct list$1sTypeph*)come_increment_ref_count(param_types_598),(struct list$1charph*)come_increment_ref_count(param_names_600),(struct list$1charph*)come_increment_ref_count(param_default_parametors_601),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_593),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value743=buffer_to_string(header_buf_602)))),(char*)come_increment_ref_count(((char*)(right_value744=__builtin_string("")))),info))));
        come_call_finalizer3(right_value742,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value743 = come_decrement_ref_count2(right_value743, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value744 = come_decrement_ref_count2(right_value744, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value745,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_607=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value746=__builtin_string(fun_name))));
        right_value746 = come_decrement_ref_count2(right_value746, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional561=fun2_607==((void*)0)||fun2_607->mExternal,        _if_conditional561) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value747=string_clone(name_595)))),(struct sFun*)come_increment_ref_count(fun_606));
            right_value747 = come_decrement_ref_count2(right_value747, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_571=fun_606;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2039, "struct sNode");
        _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(right_value749=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value748=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2039, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_606),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sFunNode_finalize;
        _inf_value8->clone=(void*)sFunNode_clone;
        _inf_value8->compile=(void*)sFunNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sFunNode_terminated;
        _inf_value8->kind=(void*)sFunNode_kind;
        node_609=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value753=_inf_value8)));
        come_call_finalizer3(right_value748,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value749,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value753) { right_value753 = come_decrement_ref_count2(right_value753, ((struct sNode*)right_value753)->finalize, ((struct sNode*)right_value753)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional568=!node_compile(node_609,info),        _if_conditional568) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj163=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_592);
        come_call_finalizer3(__dec_obj163,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_588;
        info->head=head_591;
        info->sline=sline_589;
        __dec_obj164=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_590);
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_590 = come_decrement_ref_count2(sname_590, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_592,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_593,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_594,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_595 = come_decrement_ref_count2(name_595, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_596,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_598,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_600,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_601,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_602,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_606,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_609) { node_609 = come_decrement_ref_count2(node_609, ((struct sNode*)node_609)->finalize, ((struct sNode*)node_609)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_570;
    __dec_obj165=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_567);
    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj166=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_568);
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj167=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_569);
    __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result253__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value755=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value754=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2059, "struct tuple2$2sFunpcharph")))),finalizer_571,(char*)come_increment_ref_count(real_fun_name_572))));
    last_code_567 = come_decrement_ref_count2(last_code_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_568 = come_decrement_ref_count2(last_code2_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_569 = come_decrement_ref_count2(last_code3_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_572 = come_decrement_ref_count2(real_fun_name_572, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_573 = come_decrement_ref_count2(user_real_fun_name_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_575,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value754 = come_decrement_ref_count2(right_value754, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value755,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result253__;
    last_code_567 = come_decrement_ref_count2(last_code_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_568 = come_decrement_ref_count2(last_code2_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_569 = come_decrement_ref_count2(last_code3_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_572 = come_decrement_ref_count2(real_fun_name_572, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_573 = come_decrement_ref_count2(user_real_fun_name_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_575,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional553;
struct tuple2$2charphsTypeph* result_580;
struct tuple2$2charphsTypeph* __result243__;
_Bool _if_conditional554;
struct tuple2$2charphsTypeph* __result244__;
struct tuple2$2charphsTypeph* result_581;
struct tuple2$2charphsTypeph* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_580, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_581, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional553=self==((void*)0),            _if_conditional553) {
                memset(&result_580,0,sizeof(struct tuple2$2charphsTypeph*));
                __result243__ = __result_obj__ = result_580;
                return __result243__;
            }
            self->it=self->head;
            if(self->it) {
                __result244__ = __result_obj__ = self->it->item;
                return __result244__;
            }
            memset(&result_581,0,sizeof(struct tuple2$2charphsTypeph*));
            __result245__ = __result_obj__ = result_581;
            return __result245__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result246__;
memset(&__result_obj__, 0, sizeof(void*));
            __result246__ = self==((void*)0)||self->it==((void*)0);
            return __result246__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional555;
struct tuple2$2charphsTypeph* result_583;
struct tuple2$2charphsTypeph* __result247__;
_Bool _if_conditional556;
struct tuple2$2charphsTypeph* __result248__;
struct tuple2$2charphsTypeph* result_584;
struct tuple2$2charphsTypeph* __result249__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_583, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_584, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional555=self==((void*)0)||self->it==((void*)0),            _if_conditional555) {
                memset(&result_583,0,sizeof(struct tuple2$2charphsTypeph*));
                __result247__ = __result_obj__ = result_583;
                return __result247__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result248__ = __result_obj__ = self->it->item;
                return __result248__;
            }
            memset(&result_584,0,sizeof(struct tuple2$2charphsTypeph*));
            __result249__ = __result_obj__ = result_584;
            return __result249__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__;
char* __dec_obj168;
struct tuple2$2sFunpcharph* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
        self->v1=v1;
        __dec_obj168=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        __result252__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result252__;
        come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional569;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional569=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional569) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_610;
char* __dec_obj169;
char* last_code2_611;
char* __dec_obj170;
char* last_code3_612;
char* __dec_obj171;
struct sClass* current_stack_frame_struct_613;
struct sFun* finalizer_614;
void* right_value756;
char* real_fun_name_615;
void* right_value757;
struct sType* type2_616;
struct sClass* klass_617;
_Bool _if_conditional570;
void* right_value758;
void* right_value759;
struct buffer* source_618;
struct list$1tuple2$2charphsTypephph* o2_saved_619;
struct tuple2$2charphsTypeph* it_620;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_621;
struct sType* field_type_622;
_Bool _if_conditional571;
_Bool _if_conditional572;
char* p_624;
int sline_625;
char* sname_626;
char* head_627;
struct buffer* source3_628;
struct buffer* __dec_obj172;
void* right_value760;
char* __dec_obj173;
void* right_value761;
struct sBlock* block_629;
void* right_value762;
void* right_value763;
struct sType* result_type_630;
void* right_value764;
char* name_631;
void* right_value765;
struct sType* self_type_632;
_Bool _if_conditional573;
struct sType* __list_values23___633[1];
void* right_value766;
void* right_value767;
struct list$1sTypeph* param_types_634;
void* right_value768;
char* __list_values24___635[1];
void* right_value769;
void* right_value770;
struct list$1charph* param_names_636;
void* right_value771;
void* right_value772;
struct list$1charph* param_default_parametors_637;
void* right_value773;
void* right_value774;
struct buffer* header_buf_638;
void* right_value775;
int i_639;
struct sType* param_type_640;
char* param_name_641;
void* right_value776;
_Bool _if_conditional574;
void* right_value777;
void* right_value778;
void* right_value779;
void* right_value780;
struct sFun* fun_642;
void* right_value781;
struct sFun* fun2_643;
_Bool _if_conditional575;
void* right_value782;
void* right_value783;
void* right_value784;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* right_value788;
struct sNode* node_645;
_Bool _if_conditional582;
struct buffer* __dec_obj176;
char* __dec_obj177;
char* __dec_obj178;
char* __dec_obj179;
char* __dec_obj180;
void* right_value789;
void* right_value790;
struct tuple2$2sFunpcharph* __result256__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_610, 0, sizeof(char*));
memset(&last_code2_611, 0, sizeof(char*));
memset(&last_code3_612, 0, sizeof(char*));
memset(&current_stack_frame_struct_613, 0, sizeof(struct sClass*));
memset(&finalizer_614, 0, sizeof(struct sFun*));
right_value756 = (void*)0;
memset(&real_fun_name_615, 0, sizeof(char*));
right_value757 = (void*)0;
memset(&type2_616, 0, sizeof(struct sType*));
memset(&klass_617, 0, sizeof(struct sClass*));
right_value758 = (void*)0;
right_value759 = (void*)0;
memset(&source_618, 0, sizeof(struct buffer*));
memset(&o2_saved_619, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_620, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_621, 0, sizeof(char*));
memset(&field_type_622, 0, sizeof(struct sType*));
memset(&name_621, 0, sizeof(char*));
memset(&field_type_622, 0, sizeof(struct sType*));
memset(&p_624, 0, sizeof(char*));
memset(&sline_625, 0, sizeof(int));
memset(&sname_626, 0, sizeof(char*));
memset(&head_627, 0, sizeof(char*));
memset(&source3_628, 0, sizeof(struct buffer*));
right_value760 = (void*)0;
right_value761 = (void*)0;
memset(&block_629, 0, sizeof(struct sBlock*));
right_value762 = (void*)0;
right_value763 = (void*)0;
memset(&result_type_630, 0, sizeof(struct sType*));
right_value764 = (void*)0;
memset(&name_631, 0, sizeof(char*));
right_value765 = (void*)0;
memset(&self_type_632, 0, sizeof(struct sType*));
right_value766 = (void*)0;
right_value767 = (void*)0;
memset(&param_types_634, 0, sizeof(struct list$1sTypeph*));
right_value768 = (void*)0;
right_value769 = (void*)0;
right_value770 = (void*)0;
memset(&param_names_636, 0, sizeof(struct list$1charph*));
right_value771 = (void*)0;
right_value772 = (void*)0;
memset(&param_default_parametors_637, 0, sizeof(struct list$1charph*));
right_value773 = (void*)0;
right_value774 = (void*)0;
memset(&header_buf_638, 0, sizeof(struct buffer*));
right_value775 = (void*)0;
memset(&i_639, 0, sizeof(int));
memset(&param_type_640, 0, sizeof(struct sType*));
memset(&param_name_641, 0, sizeof(char*));
right_value776 = (void*)0;
right_value777 = (void*)0;
right_value778 = (void*)0;
right_value779 = (void*)0;
right_value780 = (void*)0;
memset(&fun_642, 0, sizeof(struct sFun*));
right_value781 = (void*)0;
memset(&fun2_643, 0, sizeof(struct sFun*));
right_value782 = (void*)0;
right_value783 = (void*)0;
right_value784 = (void*)0;
right_value788 = (void*)0;
memset(&node_645, 0, sizeof(struct sNode*));
right_value789 = (void*)0;
right_value790 = (void*)0;
    last_code_610=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj169=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_611=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj170=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_612=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj171=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_613=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_614=((void*)0);
    real_fun_name_615=(char*)come_increment_ref_count(((char*)(right_value756=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value756 = come_decrement_ref_count2(right_value756, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_616=(struct sType*)come_increment_ref_count(((struct sType*)(right_value757=solve_generics(type,type,info))));
    come_call_finalizer3(right_value757,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_616;
    klass_617=type->mClass;
    if(_if_conditional570=type->mPointerNum>0&&klass_617->mStruct,    _if_conditional570) {
        source_618=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value759=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value758=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2086, "buffer"))))))));
        come_call_finalizer3(right_value758,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value759,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_618,123);
        klass_617=map$2charphsClassphp_operator_load_element(info->classes,klass_617->mName);
        for(        o2_saved_619=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_617->mFields)),it_620=list$1tuple2$2charphsTypephph_begin((o2_saved_619));        !list$1tuple2$2charphsTypephph_end((o2_saved_619));        it_620=list$1tuple2$2charphsTypephph_next((o2_saved_619))        ){
            multiple_assign_var11=it_620;
            name_621=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_622=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(_if_conditional571=string_operator_equals(type->mClass->mName,field_type_622->mClass->mName)&&type->mPointerNum==field_type_622->mPointerNum&&field_type_622->mHeap,            _if_conditional571) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_622->mHeap) {
                char source2_623[1024];
                memset(&source2_623, 0, sizeof(char)                *(1024)                );
                snprintf(source2_623,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { force_delete borrow self.%s; }\n",name_621,name_621);
                buffer_append_str(source_618,source2_623);
            }
            name_621 = come_decrement_ref_count2(name_621, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_622,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_619,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_618,125);
        p_624=info->p;
        sline_625=info->sline;
        sname_626=(char*)come_increment_ref_count(info->sname);
        head_627=info->head;
        source3_628=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj172=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_618);
        come_call_finalizer3(__dec_obj172,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_618->buf;
        info->head=source_618->buf;
        __dec_obj173=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value760=__builtin_string(real_fun_name_615))));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value760 = come_decrement_ref_count2(right_value760, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_629=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value761=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value761,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_630=(struct sType*)come_increment_ref_count(((struct sType*)(right_value763=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value762=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2125, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value762,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value763,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_631=(char*)come_increment_ref_count(((char*)(right_value764=string_clone(real_fun_name_615))));
        right_value764 = come_decrement_ref_count2(right_value764, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_632=(struct sType*)come_increment_ref_count(((struct sType*)(right_value765=sType_clone(type))));
        come_call_finalizer3(right_value765,sType_finalize, 0, 1, 0, 0, __result_obj__);
        self_type_632->mHeap=(_Bool)0;
        if(_if_conditional573=self_type_632->mPointerNum>1,        _if_conditional573) {
            self_type_632->mPointerNum=1;
        }
        {__list_values23___633[0]=come_increment_ref_count(self_type_632);
}        param_types_634=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value767=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value766=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2132, "struct list$1sTypeph")))),1,__list_values23___633))));
        come_call_finalizer3(right_value766,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value767,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values24___635[0]=come_increment_ref_count(((char*)(right_value768=__builtin_string("self"))));
}        param_names_636=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value770=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value769=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2133, "struct list$1charph")))),1,__list_values24___635))));
        right_value768 = come_decrement_ref_count2(right_value768, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value769,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value770,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_637=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value772=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value771=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2134, "list$1charph"))))))));
        come_call_finalizer3(right_value771,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value772,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_637,((void*)0));
        header_buf_638=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value774=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value773=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2137, "buffer"))))))));
        come_call_finalizer3(right_value773,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value774,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_638,((char*)(right_value775=make_come_type_name_string(result_type_630,info))));
        right_value775 = come_decrement_ref_count2(right_value775, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_638," ");
        buffer_append_str(header_buf_638,real_fun_name_615);
        buffer_append_str(header_buf_638,"(");
        for(        i_639=0;        i_639<list$1sTypeph_length(param_types_634);        i_639++        ){
            param_type_640=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_634,i_639), "05function.c", 2145, 12));
            param_name_641=((char*)come_null_check(list$1charphp_operator_load_element(param_names_636,i_639), "05function.c", 2146, 13));
            buffer_append_str(header_buf_638,((char*)(right_value776=make_come_type_name_string(param_type_640,info))));
            right_value776 = come_decrement_ref_count2(right_value776, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_638," ");
            buffer_append_str(header_buf_638,param_name_641);
            if(_if_conditional574=i_639!=list$1sTypeph_length(param_types_634)-1,            _if_conditional574) {
                buffer_append_str(header_buf_638,",");
            }
        }
        buffer_append_str(header_buf_638,")");
        result_type_630->mStatic=(_Bool)0;
        fun_642=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value780=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value777=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2160, "sFun")))),(char*)come_increment_ref_count(name_631),(struct sType*)come_increment_ref_count(result_type_630),(struct list$1sTypeph*)come_increment_ref_count(param_types_634),(struct list$1charph*)come_increment_ref_count(param_names_636),(struct list$1charph*)come_increment_ref_count(param_default_parametors_637),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_629),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value778=buffer_to_string(header_buf_638)))),(char*)come_increment_ref_count(((char*)(right_value779=__builtin_string("")))),info))));
        come_call_finalizer3(right_value777,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value778 = come_decrement_ref_count2(right_value778, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value779 = come_decrement_ref_count2(right_value779, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value780,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_643=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value781=__builtin_string(fun_name))));
        right_value781 = come_decrement_ref_count2(right_value781, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional575=fun2_643==((void*)0)||fun2_643->mExternal,        _if_conditional575) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value782=string_clone(name_631)))),(struct sFun*)come_increment_ref_count(fun_642));
            right_value782 = come_decrement_ref_count2(right_value782, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_614=fun_642;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2176, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(right_value784=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value783=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2176, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_642),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sFunNode_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_645=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value788=_inf_value9)));
        come_call_finalizer3(right_value783,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value784,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value788) { right_value788 = come_decrement_ref_count2(right_value788, ((struct sNode*)right_value788)->finalize, ((struct sNode*)right_value788)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional582=!node_compile(node_645,info),        _if_conditional582) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj176=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_628);
        come_call_finalizer3(__dec_obj176,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_624;
        info->head=head_627;
        info->sline=sline_625;
        __dec_obj177=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_626);
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_618,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_626 = come_decrement_ref_count2(sname_626, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_628,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_629,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_630,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_631 = come_decrement_ref_count2(name_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_632,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_634,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_636,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_637,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_638,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_642,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_645) { node_645 = come_decrement_ref_count2(node_645, ((struct sNode*)node_645)->finalize, ((struct sNode*)node_645)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_613;
    __dec_obj178=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_610);
    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj179=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_611);
    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj180=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_612);
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result256__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value790=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value789=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2196, "struct tuple2$2sFunpcharph")))),finalizer_614,(char*)come_increment_ref_count(real_fun_name_615))));
    last_code_610 = come_decrement_ref_count2(last_code_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_611 = come_decrement_ref_count2(last_code2_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_612 = come_decrement_ref_count2(last_code3_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_615 = come_decrement_ref_count2(real_fun_name_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_616,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value789 = come_decrement_ref_count2(right_value789, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value790,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result256__;
    last_code_610 = come_decrement_ref_count2(last_code_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_611 = come_decrement_ref_count2(last_code2_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_612 = come_decrement_ref_count2(last_code3_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_615 = come_decrement_ref_count2(real_fun_name_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_616,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_646;
char* __dec_obj181;
char* last_code2_647;
char* __dec_obj182;
char* last_code3_648;
char* __dec_obj183;
struct sClass* current_stack_frame_struct_649;
struct sFun* equaler_650;
void* right_value791;
char* real_fun_name_651;
void* right_value792;
struct sType* type2_652;
struct sClass* klass_653;
_Bool _if_conditional583;
void* right_value793;
void* right_value794;
struct buffer* source_654;
_Bool _if_conditional584;
char* name_655;
struct list$1tuple2$2charphsTypephph* o2_saved_657;
struct tuple2$2charphsTypeph* it_658;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_659;
struct sType* field_type_660;
_Bool _if_conditional585;
char* p_662;
int sline_663;
char* sname_664;
char* head_665;
struct buffer* source3_666;
struct buffer* __dec_obj184;
void* right_value795;
char* __dec_obj185;
void* right_value796;
struct sBlock* block_667;
void* right_value797;
void* right_value798;
struct sType* result_type_668;
void* right_value799;
char* name_669;
void* right_value800;
struct sType* left_type_670;
void* right_value801;
struct sType* right_type_671;
struct sType* __list_values25___672[2];
void* right_value802;
void* right_value803;
struct list$1sTypeph* param_types_673;
void* right_value804;
void* right_value805;
char* __list_values26___674[2];
void* right_value806;
void* right_value807;
struct list$1charph* param_names_675;
void* right_value808;
void* right_value809;
struct list$1charph* param_default_parametors_676;
void* right_value810;
void* right_value811;
struct buffer* header_buf_677;
void* right_value812;
int i_678;
struct sType* param_type_679;
char* param_name_680;
void* right_value813;
_Bool _if_conditional586;
void* right_value814;
void* right_value815;
void* right_value816;
void* right_value817;
struct sFun* fun_681;
void* right_value818;
struct sFun* fun2_682;
_Bool _if_conditional587;
void* right_value819;
void* right_value820;
void* right_value821;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* right_value825;
struct sNode* node_684;
_Bool _if_conditional594;
struct buffer* __dec_obj188;
char* __dec_obj189;
char* __dec_obj190;
char* __dec_obj191;
char* __dec_obj192;
void* right_value826;
void* right_value827;
struct tuple2$2sFunpcharph* __result259__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_646, 0, sizeof(char*));
memset(&last_code2_647, 0, sizeof(char*));
memset(&last_code3_648, 0, sizeof(char*));
memset(&current_stack_frame_struct_649, 0, sizeof(struct sClass*));
memset(&equaler_650, 0, sizeof(struct sFun*));
right_value791 = (void*)0;
memset(&real_fun_name_651, 0, sizeof(char*));
right_value792 = (void*)0;
memset(&type2_652, 0, sizeof(struct sType*));
memset(&klass_653, 0, sizeof(struct sClass*));
right_value793 = (void*)0;
right_value794 = (void*)0;
memset(&source_654, 0, sizeof(struct buffer*));
memset(&name_655, 0, sizeof(char*));
memset(&o2_saved_657, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_658, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_659, 0, sizeof(char*));
memset(&field_type_660, 0, sizeof(struct sType*));
memset(&name_659, 0, sizeof(char*));
memset(&field_type_660, 0, sizeof(struct sType*));
memset(&p_662, 0, sizeof(char*));
memset(&sline_663, 0, sizeof(int));
memset(&sname_664, 0, sizeof(char*));
memset(&head_665, 0, sizeof(char*));
memset(&source3_666, 0, sizeof(struct buffer*));
right_value795 = (void*)0;
right_value796 = (void*)0;
memset(&block_667, 0, sizeof(struct sBlock*));
right_value797 = (void*)0;
right_value798 = (void*)0;
memset(&result_type_668, 0, sizeof(struct sType*));
right_value799 = (void*)0;
memset(&name_669, 0, sizeof(char*));
right_value800 = (void*)0;
memset(&left_type_670, 0, sizeof(struct sType*));
right_value801 = (void*)0;
memset(&right_type_671, 0, sizeof(struct sType*));
right_value802 = (void*)0;
right_value803 = (void*)0;
memset(&param_types_673, 0, sizeof(struct list$1sTypeph*));
right_value804 = (void*)0;
right_value805 = (void*)0;
right_value806 = (void*)0;
right_value807 = (void*)0;
memset(&param_names_675, 0, sizeof(struct list$1charph*));
right_value808 = (void*)0;
right_value809 = (void*)0;
memset(&param_default_parametors_676, 0, sizeof(struct list$1charph*));
right_value810 = (void*)0;
right_value811 = (void*)0;
memset(&header_buf_677, 0, sizeof(struct buffer*));
right_value812 = (void*)0;
memset(&i_678, 0, sizeof(int));
memset(&param_type_679, 0, sizeof(struct sType*));
memset(&param_name_680, 0, sizeof(char*));
right_value813 = (void*)0;
right_value814 = (void*)0;
right_value815 = (void*)0;
right_value816 = (void*)0;
right_value817 = (void*)0;
memset(&fun_681, 0, sizeof(struct sFun*));
right_value818 = (void*)0;
memset(&fun2_682, 0, sizeof(struct sFun*));
right_value819 = (void*)0;
right_value820 = (void*)0;
right_value821 = (void*)0;
right_value825 = (void*)0;
memset(&node_684, 0, sizeof(struct sNode*));
right_value826 = (void*)0;
right_value827 = (void*)0;
    last_code_646=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj181=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_647=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj182=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_648=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj183=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_649=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_650=((void*)0);
    real_fun_name_651=(char*)come_increment_ref_count(((char*)(right_value791=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value791 = come_decrement_ref_count2(right_value791, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_652=(struct sType*)come_increment_ref_count(((struct sType*)(right_value792=solve_generics(type,type,info))));
    come_call_finalizer3(right_value792,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_652;
    klass_653=type->mClass;
    if(_if_conditional583=type->mPointerNum>0&&!klass_653->mNumber,    _if_conditional583) {
        source_654=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value794=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value793=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2221, "buffer"))))))));
        come_call_finalizer3(right_value793,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value794,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_654,123);
        if(klass_653->mProtocol) {
            name_655="_protocol_obj";
            char source2_656[1024];
            memset(&source2_656, 0, sizeof(char)            *(1024)            );
            snprintf(source2_656,1024,"return left.%s.equals(right.%s);\n",name_655,name_655);
            buffer_append_str(source_654,source2_656);
        }
        else {
            klass_653=map$2charphsClassphp_operator_load_element(info->classes,klass_653->mName);
            for(            o2_saved_657=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_653->mFields)),it_658=list$1tuple2$2charphsTypephph_begin((o2_saved_657));            !list$1tuple2$2charphsTypephph_end((o2_saved_657));            it_658=list$1tuple2$2charphsTypephph_next((o2_saved_657))            ){
                multiple_assign_var12=it_658;
                name_659=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_660=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(_if_conditional585=string_operator_equals(type->mClass->mName,field_type_660->mClass->mName)&&type->mPointerNum==field_type_660->mPointerNum&&field_type_660->mHeap,                _if_conditional585) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_661[1024];
                memset(&source2_661, 0, sizeof(char)                *(1024)                );
                snprintf(source2_661,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_659,name_659);
                buffer_append_str(source_654,source2_661);
                name_659 = come_decrement_ref_count2(name_659, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_660,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_657,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_654,"return true;");
        buffer_append_char(source_654,125);
        p_662=info->p;
        sline_663=info->sline;
        sname_664=(char*)come_increment_ref_count(info->sname);
        head_665=info->head;
        source3_666=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj184=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_654);
        come_call_finalizer3(__dec_obj184,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_654->buf;
        info->head=source_654->buf;
        __dec_obj185=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value795=__builtin_string(real_fun_name_651))));
        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value795 = come_decrement_ref_count2(right_value795, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_667=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value796=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value796,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_668=(struct sType*)come_increment_ref_count(((struct sType*)(right_value798=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value797=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2267, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer3(right_value797,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value798,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_669=(char*)come_increment_ref_count(((char*)(right_value799=string_clone(real_fun_name_651))));
        right_value799 = come_decrement_ref_count2(right_value799, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_670=(struct sType*)come_increment_ref_count(((struct sType*)(right_value800=sType_clone(type))));
        come_call_finalizer3(right_value800,sType_finalize, 0, 1, 0, 0, __result_obj__);
        left_type_670->mHeap=(_Bool)0;
        right_type_671=(struct sType*)come_increment_ref_count(((struct sType*)(right_value801=sType_clone(type))));
        come_call_finalizer3(right_value801,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_type_671->mHeap=(_Bool)0;
        {__list_values25___672[0]=come_increment_ref_count(left_type_670);
__list_values25___672[1]=come_increment_ref_count(right_type_671);
}        param_types_673=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value803=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value802=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2273, "struct list$1sTypeph")))),2,__list_values25___672))));
        come_call_finalizer3(right_value802,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value803,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values26___674[0]=come_increment_ref_count(((char*)(right_value804=__builtin_string("left"))));
__list_values26___674[1]=come_increment_ref_count(((char*)(right_value805=__builtin_string("right"))));
}        param_names_675=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value807=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value806=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2274, "struct list$1charph")))),2,__list_values26___674))));
        right_value804 = come_decrement_ref_count2(right_value804, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value805 = come_decrement_ref_count2(right_value805, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value806,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value807,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_676=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value809=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value808=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2275, "list$1charph"))))))));
        come_call_finalizer3(right_value808,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value809,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_676,((void*)0));
        list$1charph_push_back(param_default_parametors_676,((void*)0));
        header_buf_677=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value811=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value810=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2279, "buffer"))))))));
        come_call_finalizer3(right_value810,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value811,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_677,((char*)(right_value812=make_come_type_name_string(result_type_668,info))));
        right_value812 = come_decrement_ref_count2(right_value812, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_677," ");
        buffer_append_str(header_buf_677,real_fun_name_651);
        buffer_append_str(header_buf_677,"(");
        for(        i_678=0;        i_678<list$1sTypeph_length(param_types_673);        i_678++        ){
            param_type_679=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_673,i_678), "05function.c", 2287, 14));
            param_name_680=((char*)come_null_check(list$1charphp_operator_load_element(param_names_675,i_678), "05function.c", 2288, 15));
            buffer_append_str(header_buf_677,((char*)(right_value813=make_come_type_name_string(param_type_679,info))));
            right_value813 = come_decrement_ref_count2(right_value813, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_677," ");
            buffer_append_str(header_buf_677,param_name_680);
            if(_if_conditional586=i_678!=list$1sTypeph_length(param_types_673)-1,            _if_conditional586) {
                buffer_append_str(header_buf_677,",");
            }
        }
        buffer_append_str(header_buf_677,")");
        result_type_668->mStatic=(_Bool)0;
        fun_681=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value817=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value814=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2302, "sFun")))),(char*)come_increment_ref_count(name_669),(struct sType*)come_increment_ref_count(result_type_668),(struct list$1sTypeph*)come_increment_ref_count(param_types_673),(struct list$1charph*)come_increment_ref_count(param_names_675),(struct list$1charph*)come_increment_ref_count(param_default_parametors_676),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_667),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value815=buffer_to_string(header_buf_677)))),(char*)come_increment_ref_count(((char*)(right_value816=__builtin_string("")))),info))));
        come_call_finalizer3(right_value814,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value815 = come_decrement_ref_count2(right_value815, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value816 = come_decrement_ref_count2(right_value816, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value817,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_682=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value818=__builtin_string(fun_name))));
        right_value818 = come_decrement_ref_count2(right_value818, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional587=fun2_682==((void*)0)||fun2_682->mExternal,        _if_conditional587) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value819=string_clone(name_669)))),(struct sFun*)come_increment_ref_count(fun_681));
            right_value819 = come_decrement_ref_count2(right_value819, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_650=fun_681;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2318, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(right_value821=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value820=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2318, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_681),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sFunNode_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_684=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value825=_inf_value10)));
        come_call_finalizer3(right_value820,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value821,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value825) { right_value825 = come_decrement_ref_count2(right_value825, ((struct sNode*)right_value825)->finalize, ((struct sNode*)right_value825)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional594=!node_compile(node_684,info),        _if_conditional594) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj188=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_666);
        come_call_finalizer3(__dec_obj188,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_662;
        info->head=head_665;
        info->sline=sline_663;
        __dec_obj189=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_664);
        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_654,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_664 = come_decrement_ref_count2(sname_664, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_667,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_669 = come_decrement_ref_count2(name_669, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_670,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_671,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_673,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_675,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_676,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_677,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_681,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_684) { node_684 = come_decrement_ref_count2(node_684, ((struct sNode*)node_684)->finalize, ((struct sNode*)node_684)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_649;
    __dec_obj190=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_646);
    __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj191=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_647);
    __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj192=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_648);
    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result259__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value827=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value826=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2338, "struct tuple2$2sFunpcharph")))),equaler_650,(char*)come_increment_ref_count(real_fun_name_651))));
    last_code_646 = come_decrement_ref_count2(last_code_646, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_647 = come_decrement_ref_count2(last_code2_647, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_648 = come_decrement_ref_count2(last_code3_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_651 = come_decrement_ref_count2(real_fun_name_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_652,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value826 = come_decrement_ref_count2(right_value826, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value827,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result259__;
    last_code_646 = come_decrement_ref_count2(last_code_646, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_647 = come_decrement_ref_count2(last_code2_647, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_648 = come_decrement_ref_count2(last_code3_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_651 = come_decrement_ref_count2(real_fun_name_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_652,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_685;
char* __dec_obj193;
char* last_code2_686;
char* __dec_obj194;
char* last_code3_687;
char* __dec_obj195;
struct sClass* current_stack_frame_struct_688;
struct sFun* equaler_689;
void* right_value828;
char* real_fun_name_690;
void* right_value829;
struct sType* type2_691;
struct sClass* klass_692;
_Bool _if_conditional595;
void* right_value830;
void* right_value831;
struct buffer* source_693;
_Bool _if_conditional596;
char* name_694;
int i_697;
struct list$1tuple2$2charphsTypephph* o2_saved_698;
struct tuple2$2charphsTypeph* it_699;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_700;
struct sType* field_type_701;
_Bool _if_conditional597;
_Bool _if_conditional599;
char* p_705;
int sline_706;
char* sname_707;
char* head_708;
struct buffer* source3_709;
struct buffer* __dec_obj196;
void* right_value832;
char* __dec_obj197;
void* right_value833;
struct sBlock* block_710;
void* right_value834;
void* right_value835;
struct sType* result_type_711;
void* right_value836;
char* name_712;
void* right_value837;
struct sType* left_type_713;
void* right_value838;
struct sType* right_type_714;
struct sType* __list_values27___715[2];
void* right_value839;
void* right_value840;
struct list$1sTypeph* param_types_716;
void* right_value841;
void* right_value842;
char* __list_values28___717[2];
void* right_value843;
void* right_value844;
struct list$1charph* param_names_718;
void* right_value845;
void* right_value846;
struct list$1charph* param_default_parametors_719;
void* right_value847;
void* right_value848;
struct buffer* header_buf_720;
void* right_value849;
int i_721;
struct sType* param_type_722;
char* param_name_723;
void* right_value850;
_Bool _if_conditional600;
void* right_value851;
void* right_value852;
void* right_value853;
void* right_value854;
struct sFun* fun_724;
void* right_value855;
struct sFun* fun2_725;
_Bool _if_conditional601;
void* right_value856;
void* right_value857;
void* right_value858;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* right_value862;
struct sNode* node_727;
_Bool _if_conditional608;
struct buffer* __dec_obj200;
char* __dec_obj201;
char* __dec_obj202;
char* __dec_obj203;
char* __dec_obj204;
void* right_value863;
void* right_value864;
struct tuple2$2sFunpcharph* __result264__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_685, 0, sizeof(char*));
memset(&last_code2_686, 0, sizeof(char*));
memset(&last_code3_687, 0, sizeof(char*));
memset(&current_stack_frame_struct_688, 0, sizeof(struct sClass*));
memset(&equaler_689, 0, sizeof(struct sFun*));
right_value828 = (void*)0;
memset(&real_fun_name_690, 0, sizeof(char*));
right_value829 = (void*)0;
memset(&type2_691, 0, sizeof(struct sType*));
memset(&klass_692, 0, sizeof(struct sClass*));
right_value830 = (void*)0;
right_value831 = (void*)0;
memset(&source_693, 0, sizeof(struct buffer*));
memset(&name_694, 0, sizeof(char*));
memset(&i_697, 0, sizeof(int));
memset(&o2_saved_698, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_699, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_700, 0, sizeof(char*));
memset(&field_type_701, 0, sizeof(struct sType*));
memset(&name_700, 0, sizeof(char*));
memset(&field_type_701, 0, sizeof(struct sType*));
memset(&p_705, 0, sizeof(char*));
memset(&sline_706, 0, sizeof(int));
memset(&sname_707, 0, sizeof(char*));
memset(&head_708, 0, sizeof(char*));
memset(&source3_709, 0, sizeof(struct buffer*));
right_value832 = (void*)0;
right_value833 = (void*)0;
memset(&block_710, 0, sizeof(struct sBlock*));
right_value834 = (void*)0;
right_value835 = (void*)0;
memset(&result_type_711, 0, sizeof(struct sType*));
right_value836 = (void*)0;
memset(&name_712, 0, sizeof(char*));
right_value837 = (void*)0;
memset(&left_type_713, 0, sizeof(struct sType*));
right_value838 = (void*)0;
memset(&right_type_714, 0, sizeof(struct sType*));
right_value839 = (void*)0;
right_value840 = (void*)0;
memset(&param_types_716, 0, sizeof(struct list$1sTypeph*));
right_value841 = (void*)0;
right_value842 = (void*)0;
right_value843 = (void*)0;
right_value844 = (void*)0;
memset(&param_names_718, 0, sizeof(struct list$1charph*));
right_value845 = (void*)0;
right_value846 = (void*)0;
memset(&param_default_parametors_719, 0, sizeof(struct list$1charph*));
right_value847 = (void*)0;
right_value848 = (void*)0;
memset(&header_buf_720, 0, sizeof(struct buffer*));
right_value849 = (void*)0;
memset(&i_721, 0, sizeof(int));
memset(&param_type_722, 0, sizeof(struct sType*));
memset(&param_name_723, 0, sizeof(char*));
right_value850 = (void*)0;
right_value851 = (void*)0;
right_value852 = (void*)0;
right_value853 = (void*)0;
right_value854 = (void*)0;
memset(&fun_724, 0, sizeof(struct sFun*));
right_value855 = (void*)0;
memset(&fun2_725, 0, sizeof(struct sFun*));
right_value856 = (void*)0;
right_value857 = (void*)0;
right_value858 = (void*)0;
right_value862 = (void*)0;
memset(&node_727, 0, sizeof(struct sNode*));
right_value863 = (void*)0;
right_value864 = (void*)0;
    last_code_685=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj193=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_686=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj194=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_687=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj195=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_688=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_689=((void*)0);
    real_fun_name_690=(char*)come_increment_ref_count(((char*)(right_value828=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value828 = come_decrement_ref_count2(right_value828, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_691=(struct sType*)come_increment_ref_count(((struct sType*)(right_value829=solve_generics(type,type,info))));
    come_call_finalizer3(right_value829,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_691;
    klass_692=type->mClass;
    if(_if_conditional595=type->mPointerNum>0&&!klass_692->mNumber,    _if_conditional595) {
        source_693=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value831=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value830=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2363, "buffer"))))))));
        come_call_finalizer3(right_value830,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value831,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_693,123);
        if(klass_692->mProtocol) {
            name_694="_protocol_obj";
            char source2_695[1024];
            memset(&source2_695, 0, sizeof(char)            *(1024)            );
            snprintf(source2_695,1024,"return !left.%s.equals(right.%s);\n",name_694,name_694);
            buffer_append_str(source_693,source2_695);
        }
        else {
            char source2_696[1024];
            memset(&source2_696, 0, sizeof(char)            *(1024)            );
            snprintf(source2_696,1024,"return !(");
            buffer_append_str(source_693,source2_696);
            i_697=0;
            klass_692=map$2charphsClassphp_operator_load_element(info->classes,klass_692->mName);
            for(            o2_saved_698=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_692->mFields)),it_699=list$1tuple2$2charphsTypephph_begin((o2_saved_698));            !list$1tuple2$2charphsTypephph_end((o2_saved_698));            it_699=list$1tuple2$2charphsTypephph_next((o2_saved_698))            ){
                multiple_assign_var13=it_699;
                name_700=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_701=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(_if_conditional597=string_operator_equals(type->mClass->mName,field_type_701->mClass->mName)&&type->mPointerNum==field_type_701->mPointerNum&&field_type_701->mHeap,                _if_conditional597) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_702[1024];
                memset(&source2_702, 0, sizeof(char)                *(1024)                );
                snprintf(source2_702,1024,"left.%s.equals(right.%s)",name_700,name_700);
                buffer_append_str(source_693,source2_702);
                if(_if_conditional599=i_697==list$1tuple2$2charphsTypephph_length(klass_692->mFields)-1,                _if_conditional599) {
                    char source2_703[1024];
                    memset(&source2_703, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_703,1024,");");
                    buffer_append_str(source_693,source2_703);
                }
                else {
                    char source2_704[1024];
                    memset(&source2_704, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_704,1024," && ");
                    buffer_append_str(source_693,source2_704);
                }
                i_697++;
                name_700 = come_decrement_ref_count2(name_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_701,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_698,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_693,125);
        p_705=info->p;
        sline_706=info->sline;
        sname_707=(char*)come_increment_ref_count(info->sname);
        head_708=info->head;
        source3_709=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj196=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_693);
        come_call_finalizer3(__dec_obj196,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_693->buf;
        info->head=source_693->buf;
        __dec_obj197=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value832=__builtin_string(real_fun_name_690))));
        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value832 = come_decrement_ref_count2(right_value832, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_710=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value833=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value833,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_711=(struct sType*)come_increment_ref_count(((struct sType*)(right_value835=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value834=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2426, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer3(right_value834,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value835,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_712=(char*)come_increment_ref_count(((char*)(right_value836=string_clone(real_fun_name_690))));
        right_value836 = come_decrement_ref_count2(right_value836, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_713=(struct sType*)come_increment_ref_count(((struct sType*)(right_value837=sType_clone(type))));
        come_call_finalizer3(right_value837,sType_finalize, 0, 1, 0, 0, __result_obj__);
        left_type_713->mHeap=(_Bool)0;
        right_type_714=(struct sType*)come_increment_ref_count(((struct sType*)(right_value838=sType_clone(type))));
        come_call_finalizer3(right_value838,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_type_714->mHeap=(_Bool)0;
        {__list_values27___715[0]=come_increment_ref_count(left_type_713);
__list_values27___715[1]=come_increment_ref_count(right_type_714);
}        param_types_716=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value840=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value839=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2432, "struct list$1sTypeph")))),2,__list_values27___715))));
        come_call_finalizer3(right_value839,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value840,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values28___717[0]=come_increment_ref_count(((char*)(right_value841=__builtin_string("left"))));
__list_values28___717[1]=come_increment_ref_count(((char*)(right_value842=__builtin_string("right"))));
}        param_names_718=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value844=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value843=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2433, "struct list$1charph")))),2,__list_values28___717))));
        right_value841 = come_decrement_ref_count2(right_value841, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value842 = come_decrement_ref_count2(right_value842, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value843,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value844,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_719=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value846=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value845=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2434, "list$1charph"))))))));
        come_call_finalizer3(right_value845,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value846,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_719,((void*)0));
        list$1charph_push_back(param_default_parametors_719,((void*)0));
        header_buf_720=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value848=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value847=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2438, "buffer"))))))));
        come_call_finalizer3(right_value847,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value848,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_720,((char*)(right_value849=make_come_type_name_string(result_type_711,info))));
        right_value849 = come_decrement_ref_count2(right_value849, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_720," ");
        buffer_append_str(header_buf_720,real_fun_name_690);
        buffer_append_str(header_buf_720,"(");
        for(        i_721=0;        i_721<list$1sTypeph_length(param_types_716);        i_721++        ){
            param_type_722=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_716,i_721), "05function.c", 2446, 16));
            param_name_723=((char*)come_null_check(list$1charphp_operator_load_element(param_names_718,i_721), "05function.c", 2447, 17));
            buffer_append_str(header_buf_720,((char*)(right_value850=make_come_type_name_string(param_type_722,info))));
            right_value850 = come_decrement_ref_count2(right_value850, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_720," ");
            buffer_append_str(header_buf_720,param_name_723);
            if(_if_conditional600=i_721!=list$1sTypeph_length(param_types_716)-1,            _if_conditional600) {
                buffer_append_str(header_buf_720,",");
            }
        }
        buffer_append_str(header_buf_720,")");
        result_type_711->mStatic=(_Bool)0;
        fun_724=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value854=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value851=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2461, "sFun")))),(char*)come_increment_ref_count(name_712),(struct sType*)come_increment_ref_count(result_type_711),(struct list$1sTypeph*)come_increment_ref_count(param_types_716),(struct list$1charph*)come_increment_ref_count(param_names_718),(struct list$1charph*)come_increment_ref_count(param_default_parametors_719),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_710),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value852=buffer_to_string(header_buf_720)))),(char*)come_increment_ref_count(((char*)(right_value853=__builtin_string("")))),info))));
        come_call_finalizer3(right_value851,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value852 = come_decrement_ref_count2(right_value852, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value853 = come_decrement_ref_count2(right_value853, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value854,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_725=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value855=__builtin_string(fun_name))));
        right_value855 = come_decrement_ref_count2(right_value855, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional601=fun2_725==((void*)0)||fun2_725->mExternal,        _if_conditional601) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value856=string_clone(name_712)))),(struct sFun*)come_increment_ref_count(fun_724));
            right_value856 = come_decrement_ref_count2(right_value856, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_689=fun_724;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2477, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(right_value858=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value857=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2477, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_724),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sFunNode_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_727=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value862=_inf_value11)));
        come_call_finalizer3(right_value857,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value858,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value862) { right_value862 = come_decrement_ref_count2(right_value862, ((struct sNode*)right_value862)->finalize, ((struct sNode*)right_value862)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional608=!node_compile(node_727,info),        _if_conditional608) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj200=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_709);
        come_call_finalizer3(__dec_obj200,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_705;
        info->head=head_708;
        info->sline=sline_706;
        __dec_obj201=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_707);
        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_693,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_707 = come_decrement_ref_count2(sname_707, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_709,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_710,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_711,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_712 = come_decrement_ref_count2(name_712, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_713,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_714,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_716,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_718,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_719,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_720,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_724,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_727) { node_727 = come_decrement_ref_count2(node_727, ((struct sNode*)node_727)->finalize, ((struct sNode*)node_727)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_688;
    __dec_obj202=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_685);
    __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj203=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_686);
    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj204=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_687);
    __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result264__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value864=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value863=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2497, "struct tuple2$2sFunpcharph")))),equaler_689,(char*)come_increment_ref_count(real_fun_name_690))));
    last_code_685 = come_decrement_ref_count2(last_code_685, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_686 = come_decrement_ref_count2(last_code2_686, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_687 = come_decrement_ref_count2(last_code3_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_690 = come_decrement_ref_count2(real_fun_name_690, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_691,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value863 = come_decrement_ref_count2(right_value863, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value864,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result264__;
    last_code_685 = come_decrement_ref_count2(last_code_685, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_686 = come_decrement_ref_count2(last_code2_686, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_687 = come_decrement_ref_count2(last_code3_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_690 = come_decrement_ref_count2(real_fun_name_690, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_691,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional598;
int __result260__;
int __result261__;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional598=self==((void*)0),                    _if_conditional598) {
                        __result260__ = 0;
                        return __result260__;
                    }
                    __result261__ = self->len;
                    return __result261__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_728;
char* __dec_obj205;
char* last_code2_729;
char* __dec_obj206;
char* last_code3_730;
char* __dec_obj207;
struct sClass* current_stack_frame_struct_731;
struct sFun* equaler_732;
void* right_value865;
char* real_fun_name_733;
void* right_value866;
struct sType* type2_734;
struct sClass* klass_735;
_Bool _if_conditional609;
void* right_value867;
void* right_value868;
struct buffer* source_736;
_Bool _if_conditional610;
char* name_737;
struct list$1tuple2$2charphsTypephph* o2_saved_739;
struct tuple2$2charphsTypeph* it_740;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_741;
struct sType* field_type_742;
_Bool _if_conditional611;
char* p_744;
int sline_745;
char* sname_746;
char* head_747;
struct buffer* source3_748;
struct buffer* __dec_obj208;
void* right_value869;
char* __dec_obj209;
void* right_value870;
struct sBlock* block_749;
void* right_value871;
void* right_value872;
struct sType* result_type_750;
void* right_value873;
char* name_751;
void* right_value874;
struct sType* left_type_752;
void* right_value875;
struct sType* right_type_753;
struct sType* __list_values29___754[2];
void* right_value876;
void* right_value877;
struct list$1sTypeph* param_types_755;
void* right_value878;
void* right_value879;
char* __list_values30___756[2];
void* right_value880;
void* right_value881;
struct list$1charph* param_names_757;
void* right_value882;
void* right_value883;
struct list$1charph* param_default_parametors_758;
void* right_value884;
void* right_value885;
struct buffer* header_buf_759;
void* right_value886;
int i_760;
struct sType* param_type_761;
char* param_name_762;
void* right_value887;
_Bool _if_conditional612;
void* right_value888;
void* right_value889;
void* right_value890;
void* right_value891;
struct sFun* fun_763;
void* right_value892;
struct sFun* fun2_764;
_Bool _if_conditional613;
void* right_value893;
void* right_value894;
void* right_value895;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* right_value899;
struct sNode* node_766;
_Bool _if_conditional620;
struct buffer* __dec_obj212;
char* __dec_obj213;
char* __dec_obj214;
char* __dec_obj215;
char* __dec_obj216;
void* right_value900;
void* right_value901;
struct tuple2$2sFunpcharph* __result267__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_728, 0, sizeof(char*));
memset(&last_code2_729, 0, sizeof(char*));
memset(&last_code3_730, 0, sizeof(char*));
memset(&current_stack_frame_struct_731, 0, sizeof(struct sClass*));
memset(&equaler_732, 0, sizeof(struct sFun*));
right_value865 = (void*)0;
memset(&real_fun_name_733, 0, sizeof(char*));
right_value866 = (void*)0;
memset(&type2_734, 0, sizeof(struct sType*));
memset(&klass_735, 0, sizeof(struct sClass*));
right_value867 = (void*)0;
right_value868 = (void*)0;
memset(&source_736, 0, sizeof(struct buffer*));
memset(&name_737, 0, sizeof(char*));
memset(&o2_saved_739, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_740, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_741, 0, sizeof(char*));
memset(&field_type_742, 0, sizeof(struct sType*));
memset(&name_741, 0, sizeof(char*));
memset(&field_type_742, 0, sizeof(struct sType*));
memset(&p_744, 0, sizeof(char*));
memset(&sline_745, 0, sizeof(int));
memset(&sname_746, 0, sizeof(char*));
memset(&head_747, 0, sizeof(char*));
memset(&source3_748, 0, sizeof(struct buffer*));
right_value869 = (void*)0;
right_value870 = (void*)0;
memset(&block_749, 0, sizeof(struct sBlock*));
right_value871 = (void*)0;
right_value872 = (void*)0;
memset(&result_type_750, 0, sizeof(struct sType*));
right_value873 = (void*)0;
memset(&name_751, 0, sizeof(char*));
right_value874 = (void*)0;
memset(&left_type_752, 0, sizeof(struct sType*));
right_value875 = (void*)0;
memset(&right_type_753, 0, sizeof(struct sType*));
right_value876 = (void*)0;
right_value877 = (void*)0;
memset(&param_types_755, 0, sizeof(struct list$1sTypeph*));
right_value878 = (void*)0;
right_value879 = (void*)0;
right_value880 = (void*)0;
right_value881 = (void*)0;
memset(&param_names_757, 0, sizeof(struct list$1charph*));
right_value882 = (void*)0;
right_value883 = (void*)0;
memset(&param_default_parametors_758, 0, sizeof(struct list$1charph*));
right_value884 = (void*)0;
right_value885 = (void*)0;
memset(&header_buf_759, 0, sizeof(struct buffer*));
right_value886 = (void*)0;
memset(&i_760, 0, sizeof(int));
memset(&param_type_761, 0, sizeof(struct sType*));
memset(&param_name_762, 0, sizeof(char*));
right_value887 = (void*)0;
right_value888 = (void*)0;
right_value889 = (void*)0;
right_value890 = (void*)0;
right_value891 = (void*)0;
memset(&fun_763, 0, sizeof(struct sFun*));
right_value892 = (void*)0;
memset(&fun2_764, 0, sizeof(struct sFun*));
right_value893 = (void*)0;
right_value894 = (void*)0;
right_value895 = (void*)0;
right_value899 = (void*)0;
memset(&node_766, 0, sizeof(struct sNode*));
right_value900 = (void*)0;
right_value901 = (void*)0;
    last_code_728=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj205=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_729=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj206=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_730=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj207=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_731=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_732=((void*)0);
    real_fun_name_733=(char*)come_increment_ref_count(((char*)(right_value865=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value865 = come_decrement_ref_count2(right_value865, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_734=(struct sType*)come_increment_ref_count(((struct sType*)(right_value866=solve_generics(type,type,info))));
    come_call_finalizer3(right_value866,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_734;
    klass_735=type->mClass;
    if(_if_conditional609=type->mPointerNum>0&&!klass_735->mNumber,    _if_conditional609) {
        source_736=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value868=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value867=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2522, "buffer"))))))));
        come_call_finalizer3(right_value867,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value868,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_736,123);
        if(klass_735->mProtocol) {
            name_737="_protocol_obj";
            char source2_738[1024];
            memset(&source2_738, 0, sizeof(char)            *(1024)            );
            snprintf(source2_738,1024,"return left.%s.equals(right.%s);\n",name_737,name_737);
            buffer_append_str(source_736,source2_738);
        }
        else {
            klass_735=map$2charphsClassphp_operator_load_element(info->classes,klass_735->mName);
            for(            o2_saved_739=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_735->mFields)),it_740=list$1tuple2$2charphsTypephph_begin((o2_saved_739));            !list$1tuple2$2charphsTypephph_end((o2_saved_739));            it_740=list$1tuple2$2charphsTypephph_next((o2_saved_739))            ){
                multiple_assign_var14=it_740;
                name_741=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_742=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(_if_conditional611=string_operator_equals(type->mClass->mName,field_type_742->mClass->mName)&&type->mPointerNum==field_type_742->mPointerNum&&field_type_742->mHeap,                _if_conditional611) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_743[1024];
                memset(&source2_743, 0, sizeof(char)                *(1024)                );
                snprintf(source2_743,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_741,name_741);
                buffer_append_str(source_736,source2_743);
                name_741 = come_decrement_ref_count2(name_741, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_742,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_739,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_736,"return true;\n");
        buffer_append_char(source_736,125);
        p_744=info->p;
        sline_745=info->sline;
        sname_746=(char*)come_increment_ref_count(info->sname);
        head_747=info->head;
        source3_748=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj208=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_736);
        come_call_finalizer3(__dec_obj208,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_736->buf;
        info->head=source_736->buf;
        __dec_obj209=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value869=__builtin_string(real_fun_name_733))));
        __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value869 = come_decrement_ref_count2(right_value869, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_749=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value870=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value870,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_750=(struct sType*)come_increment_ref_count(((struct sType*)(right_value872=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value871=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2568, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer3(right_value871,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value872,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_751=(char*)come_increment_ref_count(((char*)(right_value873=string_clone(real_fun_name_733))));
        right_value873 = come_decrement_ref_count2(right_value873, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_752=(struct sType*)come_increment_ref_count(((struct sType*)(right_value874=sType_clone(type))));
        come_call_finalizer3(right_value874,sType_finalize, 0, 1, 0, 0, __result_obj__);
        left_type_752->mHeap=(_Bool)0;
        right_type_753=(struct sType*)come_increment_ref_count(((struct sType*)(right_value875=sType_clone(type))));
        come_call_finalizer3(right_value875,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_type_753->mHeap=(_Bool)0;
        {__list_values29___754[0]=come_increment_ref_count(left_type_752);
__list_values29___754[1]=come_increment_ref_count(right_type_753);
}        param_types_755=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value877=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value876=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2574, "struct list$1sTypeph")))),2,__list_values29___754))));
        come_call_finalizer3(right_value876,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value877,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values30___756[0]=come_increment_ref_count(((char*)(right_value878=__builtin_string("left"))));
__list_values30___756[1]=come_increment_ref_count(((char*)(right_value879=__builtin_string("right"))));
}        param_names_757=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value881=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value880=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2575, "struct list$1charph")))),2,__list_values30___756))));
        right_value878 = come_decrement_ref_count2(right_value878, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value879 = come_decrement_ref_count2(right_value879, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value880,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value881,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_758=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value883=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value882=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2576, "list$1charph"))))))));
        come_call_finalizer3(right_value882,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value883,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_758,((void*)0));
        list$1charph_push_back(param_default_parametors_758,((void*)0));
        header_buf_759=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value885=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value884=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2580, "buffer"))))))));
        come_call_finalizer3(right_value884,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value885,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_759,((char*)(right_value886=make_come_type_name_string(result_type_750,info))));
        right_value886 = come_decrement_ref_count2(right_value886, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_759," ");
        buffer_append_str(header_buf_759,real_fun_name_733);
        buffer_append_str(header_buf_759,"(");
        for(        i_760=0;        i_760<list$1sTypeph_length(param_types_755);        i_760++        ){
            param_type_761=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_755,i_760), "05function.c", 2588, 18));
            param_name_762=((char*)come_null_check(list$1charphp_operator_load_element(param_names_757,i_760), "05function.c", 2589, 19));
            buffer_append_str(header_buf_759,((char*)(right_value887=make_come_type_name_string(param_type_761,info))));
            right_value887 = come_decrement_ref_count2(right_value887, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_759," ");
            buffer_append_str(header_buf_759,param_name_762);
            if(_if_conditional612=i_760!=list$1sTypeph_length(param_types_755)-1,            _if_conditional612) {
                buffer_append_str(header_buf_759,",");
            }
        }
        buffer_append_str(header_buf_759,")");
        result_type_750->mStatic=(_Bool)0;
        fun_763=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value891=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value888=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2603, "sFun")))),(char*)come_increment_ref_count(name_751),(struct sType*)come_increment_ref_count(result_type_750),(struct list$1sTypeph*)come_increment_ref_count(param_types_755),(struct list$1charph*)come_increment_ref_count(param_names_757),(struct list$1charph*)come_increment_ref_count(param_default_parametors_758),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_749),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value889=buffer_to_string(header_buf_759)))),(char*)come_increment_ref_count(((char*)(right_value890=__builtin_string("")))),info))));
        come_call_finalizer3(right_value888,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value889 = come_decrement_ref_count2(right_value889, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value890 = come_decrement_ref_count2(right_value890, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value891,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_764=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value892=__builtin_string(fun_name))));
        right_value892 = come_decrement_ref_count2(right_value892, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional613=fun2_764==((void*)0)||fun2_764->mExternal,        _if_conditional613) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value893=string_clone(name_751)))),(struct sFun*)come_increment_ref_count(fun_763));
            right_value893 = come_decrement_ref_count2(right_value893, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_732=fun_763;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2619, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(right_value895=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value894=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2619, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_763),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sFunNode_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_766=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value899=_inf_value12)));
        come_call_finalizer3(right_value894,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value895,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value899) { right_value899 = come_decrement_ref_count2(right_value899, ((struct sNode*)right_value899)->finalize, ((struct sNode*)right_value899)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional620=!node_compile(node_766,info),        _if_conditional620) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj212=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_748);
        come_call_finalizer3(__dec_obj212,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_744;
        info->head=head_747;
        info->sline=sline_745;
        __dec_obj213=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_746);
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_736,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_746 = come_decrement_ref_count2(sname_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_748,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_749,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_750,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_751 = come_decrement_ref_count2(name_751, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_752,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_753,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_755,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_757,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_758,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_759,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_763,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_766) { node_766 = come_decrement_ref_count2(node_766, ((struct sNode*)node_766)->finalize, ((struct sNode*)node_766)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_731;
    __dec_obj214=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_728);
    __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj215=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_729);
    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj216=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_730);
    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result267__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value901=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value900=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2639, "struct tuple2$2sFunpcharph")))),equaler_732,(char*)come_increment_ref_count(real_fun_name_733))));
    last_code_728 = come_decrement_ref_count2(last_code_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_729 = come_decrement_ref_count2(last_code2_729, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_730 = come_decrement_ref_count2(last_code3_730, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_733 = come_decrement_ref_count2(real_fun_name_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_734,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value900 = come_decrement_ref_count2(right_value900, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value901,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result267__;
    last_code_728 = come_decrement_ref_count2(last_code_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_729 = come_decrement_ref_count2(last_code2_729, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_730 = come_decrement_ref_count2(last_code3_730, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_733 = come_decrement_ref_count2(real_fun_name_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_734,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_767;
char* __dec_obj217;
char* last_code2_768;
char* __dec_obj218;
char* last_code3_769;
char* __dec_obj219;
struct sClass* current_stack_frame_struct_770;
struct sFun* cloner_771;
void* right_value902;
char* real_fun_name_772;
void* right_value903;
struct sType* type2_773;
struct sClass* klass_774;
_Bool _if_conditional621;
void* right_value904;
void* right_value905;
struct buffer* source_775;
void* right_value906;
void* right_value907;
_Bool _if_conditional622;
char* name_776;
struct list$1tuple2$2charphsTypephph* o2_saved_778;
struct tuple2$2charphsTypeph* it_779;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_780;
struct sType* field_type_781;
_Bool _if_conditional623;
_Bool _if_conditional624;
_Bool _if_conditional625;
struct list$1tuple2$2charphsTypephph* o2_saved_784;
struct tuple2$2charphsTypeph* it_785;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_786;
struct sType* field_type_787;
_Bool _if_conditional626;
_Bool _if_conditional627;
_Bool _if_conditional628;
void* right_value908;
char* p_791;
int sline_792;
char* sname_793;
struct buffer* source3_794;
char* head_795;
struct buffer* __dec_obj220;
void* right_value909;
char* __dec_obj221;
void* right_value910;
struct sBlock* block_796;
void* right_value911;
struct sType* result_type_797;
void* right_value912;
char* name_798;
void* right_value913;
struct sType* self_type_799;
struct sType* __list_values31___800[1];
void* right_value914;
void* right_value915;
struct list$1sTypeph* param_types_801;
void* right_value916;
char* __list_values32___802[1];
void* right_value917;
void* right_value918;
struct list$1charph* param_names_803;
void* right_value919;
void* right_value920;
struct list$1charph* param_default_parametors_804;
void* right_value921;
void* right_value922;
struct buffer* header_buf_805;
void* right_value923;
int i_806;
struct sType* param_type_807;
char* param_name_808;
void* right_value924;
_Bool _if_conditional629;
void* right_value925;
void* right_value926;
void* right_value927;
void* right_value928;
struct sFun* fun_809;
void* right_value929;
struct sFun* fun2_810;
_Bool _if_conditional630;
void* right_value930;
void* right_value931;
void* right_value932;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* right_value936;
struct sNode* node_812;
_Bool _if_conditional637;
char* __dec_obj224;
struct buffer* __dec_obj225;
char* __dec_obj226;
char* __dec_obj227;
char* __dec_obj228;
void* right_value937;
void* right_value938;
struct tuple2$2sFunpcharph* __result270__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_767, 0, sizeof(char*));
memset(&last_code2_768, 0, sizeof(char*));
memset(&last_code3_769, 0, sizeof(char*));
memset(&current_stack_frame_struct_770, 0, sizeof(struct sClass*));
memset(&cloner_771, 0, sizeof(struct sFun*));
right_value902 = (void*)0;
memset(&real_fun_name_772, 0, sizeof(char*));
right_value903 = (void*)0;
memset(&type2_773, 0, sizeof(struct sType*));
memset(&klass_774, 0, sizeof(struct sClass*));
right_value904 = (void*)0;
right_value905 = (void*)0;
memset(&source_775, 0, sizeof(struct buffer*));
right_value906 = (void*)0;
right_value907 = (void*)0;
memset(&name_776, 0, sizeof(char*));
memset(&o2_saved_778, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_779, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_780, 0, sizeof(char*));
memset(&field_type_781, 0, sizeof(struct sType*));
memset(&name_780, 0, sizeof(char*));
memset(&field_type_781, 0, sizeof(struct sType*));
memset(&o2_saved_784, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_785, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_786, 0, sizeof(char*));
memset(&field_type_787, 0, sizeof(struct sType*));
memset(&name_786, 0, sizeof(char*));
memset(&field_type_787, 0, sizeof(struct sType*));
right_value908 = (void*)0;
memset(&p_791, 0, sizeof(char*));
memset(&sline_792, 0, sizeof(int));
memset(&sname_793, 0, sizeof(char*));
memset(&source3_794, 0, sizeof(struct buffer*));
memset(&head_795, 0, sizeof(char*));
right_value909 = (void*)0;
right_value910 = (void*)0;
memset(&block_796, 0, sizeof(struct sBlock*));
right_value911 = (void*)0;
memset(&result_type_797, 0, sizeof(struct sType*));
right_value912 = (void*)0;
memset(&name_798, 0, sizeof(char*));
right_value913 = (void*)0;
memset(&self_type_799, 0, sizeof(struct sType*));
right_value914 = (void*)0;
right_value915 = (void*)0;
memset(&param_types_801, 0, sizeof(struct list$1sTypeph*));
right_value916 = (void*)0;
right_value917 = (void*)0;
right_value918 = (void*)0;
memset(&param_names_803, 0, sizeof(struct list$1charph*));
right_value919 = (void*)0;
right_value920 = (void*)0;
memset(&param_default_parametors_804, 0, sizeof(struct list$1charph*));
right_value921 = (void*)0;
right_value922 = (void*)0;
memset(&header_buf_805, 0, sizeof(struct buffer*));
right_value923 = (void*)0;
memset(&i_806, 0, sizeof(int));
memset(&param_type_807, 0, sizeof(struct sType*));
memset(&param_name_808, 0, sizeof(char*));
right_value924 = (void*)0;
right_value925 = (void*)0;
right_value926 = (void*)0;
right_value927 = (void*)0;
right_value928 = (void*)0;
memset(&fun_809, 0, sizeof(struct sFun*));
right_value929 = (void*)0;
memset(&fun2_810, 0, sizeof(struct sFun*));
right_value930 = (void*)0;
right_value931 = (void*)0;
right_value932 = (void*)0;
right_value936 = (void*)0;
memset(&node_812, 0, sizeof(struct sNode*));
right_value937 = (void*)0;
right_value938 = (void*)0;
    last_code_767=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj217=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_768=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj218=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_769=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj219=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_770=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_771=((void*)0);
    real_fun_name_772=(char*)come_increment_ref_count(((char*)(right_value902=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value902 = come_decrement_ref_count2(right_value902, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_773=(struct sType*)come_increment_ref_count(((struct sType*)(right_value903=solve_generics(type,type,info))));
    come_call_finalizer3(right_value903,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_773;
    klass_774=type->mClass;
    if(_if_conditional621=type->mPointerNum>0&&!klass_774->mNumber,    _if_conditional621) {
        source_775=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value905=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value904=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2664, "buffer"))))))));
        come_call_finalizer3(right_value904,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value905,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(source_775,"{\n");
        buffer_append_str(source_775,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_775,((char*)(right_value907=xsprintf("var result = new %s;\n",((char*)(right_value906=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info)))))));
        right_value906 = come_decrement_ref_count2(right_value906, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value907 = come_decrement_ref_count2(right_value907, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(klass_774->mProtocol) {
            name_776="_protocol_obj";
            char source2_777[1024];
            memset(&source2_777, 0, sizeof(char)            *(1024)            );
            snprintf(source2_777,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_775,source2_777);
            klass_774=map$2charphsClassphp_operator_load_element(info->classes,klass_774->mName);
            for(            o2_saved_778=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_774->mFields)),it_779=list$1tuple2$2charphsTypephph_begin((o2_saved_778));            !list$1tuple2$2charphsTypephph_end((o2_saved_778));            it_779=list$1tuple2$2charphsTypephph_next((o2_saved_778))            ){
                multiple_assign_var15=it_779;
                name_780=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_781=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(_if_conditional623=string_operator_equals(type->mClass->mName,field_type_781->mClass->mName)&&type->mPointerNum==field_type_781->mPointerNum&&field_type_781->mHeap,                _if_conditional623) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(_if_conditional624=string_operator_equals(name_780,"_protocol_obj"),                _if_conditional624) {
                }
                else {
                    if(_if_conditional625=list$1sNodeph_length(field_type_781->mArrayNum)>0,                    _if_conditional625) {
                        char source2_782[1024];
                        memset(&source2_782, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_782,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_780,name_780,name_780);
                        buffer_append_str(source_775,source2_782);
                    }
                    else {
                        char source2_783[1024];
                        memset(&source2_783, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_783,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_780,name_780);
                        buffer_append_str(source_775,source2_783);
                    }
                }
                name_780 = come_decrement_ref_count2(name_780, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_781,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_778,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_774=map$2charphsClassphp_operator_load_element(info->classes,klass_774->mName);
            for(            o2_saved_784=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_774->mFields)),it_785=list$1tuple2$2charphsTypephph_begin((o2_saved_784));            !list$1tuple2$2charphsTypephph_end((o2_saved_784));            it_785=list$1tuple2$2charphsTypephph_next((o2_saved_784))            ){
                multiple_assign_var16=it_785;
                name_786=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_787=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(_if_conditional626=string_operator_equals(type->mClass->mName,field_type_787->mClass->mName)&&type->mPointerNum==field_type_787->mPointerNum&&field_type_787->mHeap,                _if_conditional626) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(field_type_787->mHeap) {
                    char source2_788[1024];
                    memset(&source2_788, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_788,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_786,name_786,name_786);
                    buffer_append_str(source_775,source2_788);
                }
                else {
                    if(_if_conditional628=list$1sNodeph_length(field_type_787->mArrayNum)>0,                    _if_conditional628) {
                        char source2_789[1024];
                        memset(&source2_789, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_789,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_786,name_786,name_786);
                        buffer_append_str(source_775,source2_789);
                    }
                    else {
                        char source2_790[1024];
                        memset(&source2_790, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_790,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_786,name_786);
                        buffer_append_str(source_775,source2_790);
                    }
                }
                name_786 = come_decrement_ref_count2(name_786, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_787,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_784,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_775,((char*)(right_value908=xsprintf("return result;"))));
        right_value908 = come_decrement_ref_count2(right_value908, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_775,125);
        p_791=info->p;
        sline_792=info->sline;
        sname_793=(char*)come_increment_ref_count(info->sname);
        source3_794=(struct buffer*)come_increment_ref_count(info->source);
        head_795=info->head;
        __dec_obj220=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_775);
        come_call_finalizer3(__dec_obj220,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj221=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value909=__builtin_string(real_fun_name_772))));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value909 = come_decrement_ref_count2(right_value909, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=1;
        block_796=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value910=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value910,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_797=(struct sType*)come_increment_ref_count(((struct sType*)(right_value911=sType_clone(type))));
        come_call_finalizer3(right_value911,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_798=(char*)come_increment_ref_count(((char*)(right_value912=string_clone(real_fun_name_772))));
        right_value912 = come_decrement_ref_count2(right_value912, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_799=(struct sType*)come_increment_ref_count(((struct sType*)(right_value913=sType_clone(type))));
        come_call_finalizer3(right_value913,sType_finalize, 0, 1, 0, 0, __result_obj__);
        self_type_799->mHeap=(_Bool)0;
        {__list_values31___800[0]=come_increment_ref_count(self_type_799);
}        param_types_801=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value915=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value914=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2758, "struct list$1sTypeph")))),1,__list_values31___800))));
        come_call_finalizer3(right_value914,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value915,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values32___802[0]=come_increment_ref_count(((char*)(right_value916=__builtin_string("self"))));
}        param_names_803=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value918=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value917=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2759, "struct list$1charph")))),1,__list_values32___802))));
        right_value916 = come_decrement_ref_count2(right_value916, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value917,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value918,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_804=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value920=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value919=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2760, "list$1charph"))))))));
        come_call_finalizer3(right_value919,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value920,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_804,((void*)0));
        header_buf_805=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value922=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value921=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2763, "buffer"))))))));
        come_call_finalizer3(right_value921,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value922,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_805,((char*)(right_value923=make_come_type_name_string(result_type_797,info))));
        right_value923 = come_decrement_ref_count2(right_value923, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_805," ");
        buffer_append_str(header_buf_805,real_fun_name_772);
        buffer_append_str(header_buf_805,"(");
        for(        i_806=0;        i_806<list$1sTypeph_length(param_types_801);        i_806++        ){
            param_type_807=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_801,i_806), "05function.c", 2771, 20));
            param_name_808=((char*)come_null_check(list$1charphp_operator_load_element(param_names_803,i_806), "05function.c", 2772, 21));
            buffer_append_str(header_buf_805,((char*)(right_value924=make_come_type_name_string(param_type_807,info))));
            right_value924 = come_decrement_ref_count2(right_value924, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_805," ");
            buffer_append_str(header_buf_805,param_name_808);
            if(_if_conditional629=i_806!=list$1sTypeph_length(param_types_801)-1,            _if_conditional629) {
                buffer_append_str(header_buf_805,",");
            }
        }
        buffer_append_str(header_buf_805,")");
        result_type_797->mStatic=(_Bool)0;
        fun_809=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value928=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value925=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2786, "sFun")))),(char*)come_increment_ref_count(name_798),(struct sType*)come_increment_ref_count(result_type_797),(struct list$1sTypeph*)come_increment_ref_count(param_types_801),(struct list$1charph*)come_increment_ref_count(param_names_803),(struct list$1charph*)come_increment_ref_count(param_default_parametors_804),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_796),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value926=buffer_to_string(header_buf_805)))),(char*)come_increment_ref_count(((char*)(right_value927=__builtin_string("")))),info))));
        come_call_finalizer3(right_value925,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value926 = come_decrement_ref_count2(right_value926, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value927 = come_decrement_ref_count2(right_value927, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value928,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun_809->mCloner=(_Bool)1;
        fun2_810=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value929=__builtin_string(fun_name))));
        right_value929 = come_decrement_ref_count2(right_value929, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional630=fun2_810==((void*)0)||fun2_810->mExternal,        _if_conditional630) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value930=string_clone(name_798)))),(struct sFun*)come_increment_ref_count(fun_809));
            right_value930 = come_decrement_ref_count2(right_value930, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        cloner_771=fun_809;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2803, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sFunNode*)(right_value932=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value931=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2803, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_809),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sFunNode_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_812=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value936=_inf_value13)));
        come_call_finalizer3(right_value931,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value932,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value936) { right_value936 = come_decrement_ref_count2(right_value936, ((struct sNode*)right_value936)->finalize, ((struct sNode*)right_value936)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional637=!node_compile(node_812,info),        _if_conditional637) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj224=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_793);
        __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_792;
        __dec_obj225=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_794);
        come_call_finalizer3(__dec_obj225,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_791;
        info->head=head_795;
        info->sline=sline_792;
        come_call_finalizer3(source_775,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_793 = come_decrement_ref_count2(sname_793, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_794,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_796,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_797,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_798 = come_decrement_ref_count2(name_798, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_799,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_801,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_803,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_804,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_805,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_809,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_812) { node_812 = come_decrement_ref_count2(node_812, ((struct sNode*)node_812)->finalize, ((struct sNode*)node_812)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_770;
    __dec_obj226=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_767);
    __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj227=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_768);
    __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj228=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_769);
    __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result270__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value938=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value937=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2825, "struct tuple2$2sFunpcharph")))),cloner_771,(char*)come_increment_ref_count(real_fun_name_772))));
    last_code_767 = come_decrement_ref_count2(last_code_767, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_768 = come_decrement_ref_count2(last_code2_768, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_769 = come_decrement_ref_count2(last_code3_769, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_772 = come_decrement_ref_count2(real_fun_name_772, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_773,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value937 = come_decrement_ref_count2(right_value937, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value938,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result270__;
    last_code_767 = come_decrement_ref_count2(last_code_767, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_768 = come_decrement_ref_count2(last_code2_768, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_769 = come_decrement_ref_count2(last_code3_769, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_772 = come_decrement_ref_count2(real_fun_name_772, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_773,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFunNode_finalize(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional631;
_Bool _if_conditional632;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional631=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional631) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional632=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional632) {
                come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional633;
struct sFunNode* __result268__;
void* right_value933;
struct sFunNode* result_811;
_Bool _if_conditional634;
_Bool _if_conditional635;
void* right_value934;
char* __dec_obj222;
_Bool _if_conditional636;
void* right_value935;
struct sFun* __dec_obj223;
struct sFunNode* __result269__;
memset(&__result_obj__, 0, sizeof(void*));
right_value933 = (void*)0;
memset(&result_811, 0, sizeof(struct sFunNode*));
right_value934 = (void*)0;
right_value935 = (void*)0;
            if(_if_conditional633=self==(void*)0,            _if_conditional633) {
                __result268__ = __result_obj__ = (void*)0;
                return __result268__;
            }
            result_811=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value933=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"))));
            come_call_finalizer3(right_value933,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional634=self!=((void*)0),            _if_conditional634) {
                result_811->sline=self->sline;
            }
            if(_if_conditional635=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional635) {
                __dec_obj222=result_811->sname;
                result_811->sname=(char*)come_increment_ref_count(((char*)(right_value934=string_clone(self->sname))));
                __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value934 = come_decrement_ref_count2(right_value934, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional636=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional636) {
                __dec_obj223=result_811->mFun;
                result_811->mFun=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value935=sFun_clone(self->mFun))));
                come_call_finalizer3(__dec_obj223,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value935,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            }
            __result269__ = __result_obj__ = result_811;
            come_call_finalizer3(result_811,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result269__;
            come_call_finalizer3(result_811,sFunNode_finalize, 0, 0, 0, 0, (void*)0);
}

