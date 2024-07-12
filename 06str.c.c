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
struct sStrNode
{
    int sline;
    char* sname;
    char* value;
};
struct sSStringNode
{
    int sline;
    char* sname;
    char* value;
    struct list$1sNodeph* exps;
};
struct sCharNode
{
    int sline;
    char* sname;
    int value;
};
struct sWCharNode
{
    int sline;
    char* sname;
    unsigned int value;
    _Bool quote;
};
struct sWStringNode
{
    int sline;
    char* sname;
    unsigned int* value;
};
struct sRegexNode
{
    int sline;
    char* sname;
    char* str;
    _Bool global;
    _Bool ignore_case;
};
struct sListNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* list_elements;
};
struct sTupleNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* tuple_elements;
};
struct sMapNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
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

long int __sysconf(int __name);

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);

_Bool sStrNode_terminated(struct sStrNode* self);

char* sStrNode_kind(struct sStrNode* self);

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);

_Bool sSStringNode_terminated(struct sSStringNode* self);

char* sSStringNode_kind(struct sSStringNode* self);

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);

_Bool sCharNode_terminated(struct sCharNode* self);

char* sCharNode_kind(struct sCharNode* self);

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info);

_Bool sWCharNode_terminated(struct sWCharNode* self);

char* sWCharNode_kind(struct sWCharNode* self);

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info);

_Bool sWStringNode_terminated(struct sWStringNode* self);

char* sWStringNode_kind(struct sWStringNode* self);

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);

_Bool sRegexNode_terminated(struct sRegexNode* self);

char* sRegexNode_kind(struct sRegexNode* self);

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);

_Bool sListNode_terminated(struct sListNode* self);

char* sListNode_kind(struct sListNode* self);

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);

_Bool sTupleNode_terminated(struct sTupleNode* self);

char* sTupleNode_kind(struct sTupleNode* self);

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);

_Bool sMapNode_terminated(struct sMapNode* self);

char* sMapNode_kind(struct sMapNode* self);

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);

static void sStrNode_finalize(struct sStrNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self);
static void sCharNode_finalize(struct sCharNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static void sWCharNode_finalize(struct sWCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static void sWStringNode_finalize(struct sWStringNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static void sSStringNode_finalize(struct sSStringNode* self);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static void sMapNode_finalize(struct sMapNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static void sListNode_finalize(struct sListNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info);

static void sTupleNode_finalize(struct sTupleNode* self);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
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










struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
void* right_value80;
char* __dec_obj13;
struct sStrNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
    __dec_obj12=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(value))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=sline;
    __dec_obj13=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value80=__builtin_string(info->sname))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result58__ = __result_obj__ = self;
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result58__;
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sStrNode_terminated(struct sStrNode* self){
void* __result_obj__;
_Bool __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    __result59__ = (_Bool)0;
    return __result59__;
}

char* sStrNode_kind(struct sStrNode* self){
void* __result_obj__;
void* right_value81;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    __result60__ = __result_obj__ = ((char*)(right_value81=__builtin_string("sStrNode")));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result60__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value82;
struct CVALUE* come_value_47;
void* right_value83;
char* __dec_obj14;
void* right_value84;
void* right_value85;
struct sType* __dec_obj15;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&come_value_47, 0, sizeof(struct CVALUE*));
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
    come_value_47=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value82=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 28, "CVALUE"))));
    come_call_finalizer3(right_value82,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj14=come_value_47->c_value;
    come_value_47->c_value=(char*)come_increment_ref_count(((char*)(right_value83=xsprintf("\"%s\"",self->value))));
    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj15=come_value_47->type;
    come_value_47->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value84=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 31, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value84,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value85,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_47->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_47));
    add_come_last_code(info,"%s;\n",come_value_47->c_value);
    __result62__ = (_Bool)1;
    come_call_finalizer3(come_value_47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result62__;
    come_call_finalizer3(come_value_47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional21;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional21=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional21) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional22=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional22) {
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
                if(_if_conditional23=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional23) {
                    come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional25=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional25) {
                    come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional27=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional27) {
                    come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional28=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional28) {
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional29=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional29) {
                    come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional30=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional30) {
                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional32=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional32) {
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional33=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional33) {
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional35=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional35) {
                    come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional36=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional36) {
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional37=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional37) {
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional38=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional38) {
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional39=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional39) {
                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_48;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_48, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_49, 0, sizeof(struct list_item$1sTypeph*));
                        it_48=self->head;
                        while(_while_condtional7=it_48!=((void*)0),                        _while_condtional7) {
                            prev_it_49=it_48;
                            it_48=it_48->next;
                            come_call_finalizer3(prev_it_49,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional24=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional24) {
                                    come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional26) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_50;
_Bool _while_condtional8;
struct list_item$1sNodeph* prev_it_51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_50, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_51, 0, sizeof(struct list_item$1sNodeph*));
                        it_50=self->head;
                        while(_while_condtional8=it_50!=((void*)0),                        _while_condtional8) {
                            prev_it_51=it_50;
                            it_50=it_50->next;
                            come_call_finalizer3(prev_it_51,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional31) {
                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_52;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_52, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_53, 0, sizeof(struct list_item$1charph*));
                        it_52=self->head;
                        while(_while_condtional9=it_52!=((void*)0),                        _while_condtional9) {
                            prev_it_53=it_52;
                            it_52=it_52->next;
                            come_call_finalizer3(prev_it_53,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional34=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional34) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional40;
void* right_value86;
struct list_item$1CVALUEph* litem_54;
struct CVALUE* __dec_obj16;
_Bool _if_conditional42;
void* right_value87;
struct list_item$1CVALUEph* litem_55;
struct CVALUE* __dec_obj17;
void* right_value88;
struct list_item$1CVALUEph* litem_56;
struct CVALUE* __dec_obj18;
struct list$1CVALUEph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&litem_54, 0, sizeof(struct list_item$1CVALUEph*));
right_value87 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1CVALUEph*));
right_value88 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional40=self->len==0,        _if_conditional40) {
            litem_54=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value86=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value86,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_54->prev=((void*)0);
            litem_54->next=((void*)0);
            __dec_obj16=litem_54->item;
            litem_54->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj16,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_54;
            self->head=litem_54;
        }
        else {
            if(_if_conditional42=self->len==1,            _if_conditional42) {
                litem_55=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value87=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value87,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_55->prev=self->head;
                litem_55->next=((void*)0);
                __dec_obj17=litem_55->item;
                litem_55->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj17,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_55;
                self->head->next=litem_55;
            }
            else {
                litem_56=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value88=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value88,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_56->prev=self->tail;
                litem_56->next=((void*)0);
                __dec_obj18=litem_56->item;
                litem_56->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj18,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_56;
                self->tail=litem_56;
            }
        }
        self->len++;
        __result61__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result61__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional41=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional41) {
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value89;
char* __dec_obj19;
void* right_value97;
struct list$1sNodeph* __dec_obj23;
void* right_value98;
char* __dec_obj24;
struct sSStringNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
    __dec_obj19=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(value))));
    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj23=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value97=list$1sNodephp_clone(exps))));
    come_call_finalizer3(__dec_obj23,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value97,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    self->sline=sline;
    __dec_obj24=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value98=__builtin_string(info->sname))));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result69__ = __result_obj__ = self;
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result69__;
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sSStringNode_terminated(struct sSStringNode* self){
void* __result_obj__;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
    __result70__ = (_Bool)0;
    return __result70__;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __result_obj__;
void* right_value99;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
    __result71__ = __result_obj__ = ((char*)(right_value99=__builtin_string("sSStringNode")));
    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result71__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value100;
struct CVALUE* come_value_65;
void* right_value101;
void* right_value102;
struct buffer* buf_66;
_Bool _if_conditional59;
struct list$1sNodeph* o2_saved_67;
struct sNode* it_70;
_Bool _if_conditional64;
_Bool __result81__;
void* right_value103;
struct CVALUE* come_value_73;
void* right_value104;
char* method_name_74;
_Bool _if_conditional84;
struct sType* obj_type_77;
_Bool _if_conditional86;
struct sType* obj_type2_78;
void* right_value105;
void* right_value106;
char* __dec_obj25;
void* right_value107;
void* right_value108;
struct buffer* buf2_79;
void* right_value109;
void* right_value110;
struct sType* type_80;
void* right_value111;
void* right_value112;
char* c_value_81;
void* right_value113;
void* right_value114;
struct sType* type2_82;
void* right_value115;
char* __dec_obj26;
void* right_value116;
char* __dec_obj27;
void* right_value145;
struct sType* __dec_obj48;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
memset(&come_value_65, 0, sizeof(struct CVALUE*));
right_value101 = (void*)0;
right_value102 = (void*)0;
memset(&buf_66, 0, sizeof(struct buffer*));
memset(&o2_saved_67, 0, sizeof(struct list$1sNodeph*));
memset(&it_70, 0, sizeof(struct sNode*));
right_value103 = (void*)0;
memset(&come_value_73, 0, sizeof(struct CVALUE*));
right_value104 = (void*)0;
memset(&method_name_74, 0, sizeof(char*));
memset(&obj_type_77, 0, sizeof(struct sType*));
memset(&obj_type2_78, 0, sizeof(struct sType*));
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
memset(&buf2_79, 0, sizeof(struct buffer*));
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&type_80, 0, sizeof(struct sType*));
right_value111 = (void*)0;
right_value112 = (void*)0;
memset(&c_value_81, 0, sizeof(char*));
right_value113 = (void*)0;
right_value114 = (void*)0;
memset(&type2_82, 0, sizeof(struct sType*));
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value145 = (void*)0;
    come_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value100=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 69, "CVALUE"))));
    come_call_finalizer3(right_value100,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    buf_66=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value102=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value101=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 71, "buffer"))))))));
    come_call_finalizer3(right_value101,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value102,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_66,"xsprintf(\"");
    buffer_append_str(buf_66,self->value);
    buffer_append_str(buf_66,"\"");
    if(_if_conditional59=list$1sNodeph_length(self->exps)>0,    _if_conditional59) {
        for(        o2_saved_67=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_70=list$1sNodeph_begin((o2_saved_67));        !list$1sNodeph_end((o2_saved_67));        it_70=list$1sNodeph_next((o2_saved_67))        ){
            if(_if_conditional64=!node_compile(it_70,info),            _if_conditional64) {
                __result81__ = (_Bool)0;
                come_call_finalizer3(o2_saved_67,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_65,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_66,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result81__;
            }
            come_value_73=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value103=get_value_from_stack(-1,info))));
            come_call_finalizer3(right_value103,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            dec_stack_ptr(1,info);
            method_name_74=(char*)come_increment_ref_count(((char*)(right_value104=create_method_name(come_value_73->type,(_Bool)0,"to_string",info,(_Bool)1))));
            right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional84=map$2charphsFunph_at(info->funcs,method_name_74,((void*)0))==((void*)0),            _if_conditional84) {
                obj_type_77=come_value_73->type->mNoSolvedGenericsType->v1;
                if(_if_conditional86=obj_type_77&&list$1sTypeph_length(obj_type_77->mGenericsTypes)>0,                _if_conditional86) {
                    obj_type2_78=come_value_73->type;
                    __dec_obj25=method_name_74;
                    method_name_74=(char*)come_increment_ref_count(((char*)(right_value106=make_generics_function(obj_type2_78,(char*)come_increment_ref_count(((char*)(right_value105=__builtin_string("to_string")))),info,(_Bool)1))));
                    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",come_value_73->type->mClass->mName);
                    exit(1);
                }
            }
            buf2_79=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value108=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value107=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 100, "buffer"))))))));
            come_call_finalizer3(right_value107,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value108,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf2_79,method_name_74);
            buffer_append_str(buf2_79,"(");
            buffer_append_str(buf2_79,come_value_73->c_value);
            buffer_append_str(buf2_79,")");
            type_80=(struct sType*)come_increment_ref_count(((struct sType*)(right_value110=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value109=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 107, "sType")))),"char*",(_Bool)0,info))));
            come_call_finalizer3(right_value109,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value110,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_80->mHeap=(_Bool)1;
            c_value_81=(char*)come_increment_ref_count(((char*)(right_value112=append_object_to_right_values(((char*)(right_value111=buffer_to_string(buf2_79))),(struct sType*)come_increment_ref_count(type_80),info))));
            right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_66,",");
            buffer_append_str(buf_66,c_value_81);
            come_call_finalizer3(come_value_73,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            method_name_74 = come_decrement_ref_count2(method_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_79,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_80,sType_finalize, 0, 0, 0, 0, (void*)0);
            c_value_81 = come_decrement_ref_count2(c_value_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_67,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_66,")");
    type2_82=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value113=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 119, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(right_value113,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value114,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type2_82->mHeap=(_Bool)1;
    __dec_obj26=come_value_65->c_value;
    come_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value115=buffer_to_string(buf_66))));
    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj27=come_value_65->c_value;
    come_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value116=append_object_to_right_values(come_value_65->c_value,(struct sType*)come_increment_ref_count(type2_82),info))));
    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj48=come_value_65->type;
    come_value_65->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_clone(type2_82))));
    come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value145,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_65->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_65));
    add_come_last_code(info,"%s;\n",come_value_65->c_value);
    __result100__ = (_Bool)1;
    come_call_finalizer3(come_value_65,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_66,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_82,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result100__;
    come_call_finalizer3(come_value_65,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_66,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_82,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct list$1sNodeph* __result63__;
void* right_value90;
void* right_value91;
struct list$1sNodeph* result_57;
struct list_item$1sNodeph* it_58;
_Bool _while_condtional10;
void* right_value96;
struct list$1sNodeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&result_57, 0, sizeof(struct list$1sNodeph*));
memset(&it_58, 0, sizeof(struct list_item$1sNodeph*));
right_value96 = (void*)0;
        if(_if_conditional43=self==((void*)0),        _if_conditional43) {
            __result63__ = __result_obj__ = ((void*)0);
            return __result63__;
        }
        result_57=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value91=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value90=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
        come_call_finalizer3(right_value90,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value91,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        it_58=self->head;
        while(_while_condtional10=it_58!=((void*)0),        _while_condtional10) {
            list$1sNodeph_add(result_57,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value96=sNode_clone(it_58->item)))));
            if(right_value96) { right_value96 = come_decrement_ref_count2(right_value96, ((struct sNode*)right_value96)->finalize, ((struct sNode*)right_value96)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            it_58=it_58->next;
        }
        __result68__ = __result_obj__ = result_57;
        come_call_finalizer3(result_57,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
        return __result68__;
        come_call_finalizer3(result_57,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result64__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result64__;
            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional44;
void* right_value92;
struct list_item$1sNodeph* litem_59;
struct sNode* __dec_obj20;
_Bool _if_conditional45;
void* right_value93;
struct list_item$1sNodeph* litem_60;
struct sNode* __dec_obj21;
void* right_value94;
struct list_item$1sNodeph* litem_61;
struct sNode* __dec_obj22;
struct list$1sNodeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sNodeph*));
right_value93 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1sNodeph*));
right_value94 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional44=self->len==0,                _if_conditional44) {
                    litem_59=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value92=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value92,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_59->prev=((void*)0);
                    litem_59->next=((void*)0);
                    __dec_obj20=litem_59->item;
                    litem_59->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_59;
                    self->head=litem_59;
                }
                else {
                    if(_if_conditional45=self->len==1,                    _if_conditional45) {
                        litem_60=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value93=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value93,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_60->prev=self->head;
                        litem_60->next=((void*)0);
                        __dec_obj21=litem_60->item;
                        litem_60->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_60;
                        self->head->next=litem_60;
                    }
                    else {
                        litem_61=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value94=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value94,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_61->prev=self->tail;
                        litem_61->next=((void*)0);
                        __dec_obj22=litem_61->item;
                        litem_61->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail->next=litem_61;
                        self->tail=litem_61;
                    }
                }
                self->len++;
                __result65__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result65__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional46;
struct sNode* __result66__;
void* right_value95;
struct sNode* result_62;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
struct sNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&result_62, 0, sizeof(struct sNode*));
                if(_if_conditional46=self==(void*)0,                _if_conditional46) {
                    __result66__ = __result_obj__ = (void*)0;
                    return __result66__;
                }
                result_62=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value95=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                if(right_value95) { right_value95 = come_decrement_ref_count2(right_value95, ((struct sNode*)right_value95)->finalize, ((struct sNode*)right_value95)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(_if_conditional47=self!=((void*)0)&&self->clone!=((void*)0),                _if_conditional47) {
                    result_62->_protocol_obj=self->clone(self->_protocol_obj);
                }
                if(_if_conditional48=self!=((void*)0),                _if_conditional48) {
                    result_62->finalize=self->finalize;
                }
                if(_if_conditional49=self!=((void*)0),                _if_conditional49) {
                    result_62->clone=self->clone;
                }
                if(_if_conditional50=self!=((void*)0),                _if_conditional50) {
                    result_62->compile=self->compile;
                }
                if(_if_conditional51=self!=((void*)0),                _if_conditional51) {
                    result_62->sline=self->sline;
                }
                if(_if_conditional52=self!=((void*)0),                _if_conditional52) {
                    result_62->sname=self->sname;
                }
                if(_if_conditional53=self!=((void*)0),                _if_conditional53) {
                    result_62->terminated=self->terminated;
                }
                if(_if_conditional54=self!=((void*)0),                _if_conditional54) {
                    result_62->kind=self->kind;
                }
                __result67__ = __result_obj__ = result_62;
                if(result_62) { result_62 = come_decrement_ref_count2(result_62, ((struct sNode*)result_62)->finalize, ((struct sNode*)result_62)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result67__;
                if(result_62) { result_62 = come_decrement_ref_count2(result_62, ((struct sNode*)result_62)->finalize, ((struct sNode*)result_62)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_63;
_Bool _while_condtional11;
struct list_item$1sNodeph* prev_it_64;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_64, 0, sizeof(struct list_item$1sNodeph*));
        it_63=self->head;
        while(_while_condtional11=it_63!=((void*)0),        _while_condtional11) {
            prev_it_64=it_63;
            it_63=it_63->next;
            come_call_finalizer3(prev_it_64,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional58;
int __result72__;
int __result73__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional58=self==((void*)0),        _if_conditional58) {
            __result72__ = 0;
            return __result72__;
        }
        __result73__ = self->len;
        return __result73__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional60;
struct sNode* result_68;
struct sNode* __result74__;
_Bool _if_conditional61;
struct sNode* __result75__;
struct sNode* result_69;
struct sNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_68, 0, sizeof(struct sNode*));
memset(&result_69, 0, sizeof(struct sNode*));
            if(_if_conditional60=self==((void*)0),            _if_conditional60) {
                memset(&result_68,0,sizeof(struct sNode*));
                __result74__ = __result_obj__ = result_68;
                return __result74__;
            }
            self->it=self->head;
            if(self->it) {
                __result75__ = __result_obj__ = self->it->item;
                return __result75__;
            }
            memset(&result_69,0,sizeof(struct sNode*));
            __result76__ = __result_obj__ = result_69;
            return __result76__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
            __result77__ = self==((void*)0)||self->it==((void*)0);
            return __result77__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional62;
struct sNode* result_71;
struct sNode* __result78__;
_Bool _if_conditional63;
struct sNode* __result79__;
struct sNode* result_72;
struct sNode* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_71, 0, sizeof(struct sNode*));
memset(&result_72, 0, sizeof(struct sNode*));
            if(_if_conditional62=self==((void*)0)||self->it==((void*)0),            _if_conditional62) {
                memset(&result_71,0,sizeof(struct sNode*));
                __result78__ = __result_obj__ = result_71;
                return __result78__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result79__ = __result_obj__ = self->it->item;
                return __result79__;
            }
            memset(&result_72,0,sizeof(struct sNode*));
            __result80__ = __result_obj__ = result_72;
            return __result80__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_75;
unsigned int it_76;
_Bool _while_condtional12;
_Bool _if_conditional65;
_Bool _if_conditional66;
struct sFun* __result82__;
_Bool _if_conditional82;
_Bool _if_conditional83;
struct sFun* __result83__;
struct sFun* __result84__;
struct sFun* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_75, 0, sizeof(unsigned int));
memset(&it_76, 0, sizeof(unsigned int));
                hash_75=string_get_hash_key(((char*)key))%self->size;
                it_76=hash_75;
                while(_while_condtional12=(_Bool)1,                _while_condtional12) {
                    if(_if_conditional65=self->item_existance[it_76],                    _if_conditional65) {
                        if(_if_conditional66=string_equals(self->keys[it_76],key),                        _if_conditional66) {
                            __result82__ = __result_obj__ = self->items[it_76];
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result82__;
                        }
                        it_76++;
                        if(_if_conditional82=it_76>=self->size,                        _if_conditional82) {
                            it_76=0;
                        }
                        else {
                            if(_if_conditional83=it_76==hash_75,                            _if_conditional83) {
                                __result83__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result83__;
                            }
                        }
                    }
                    else {
                        __result84__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result84__;
                    }
                }
                __result85__ = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result85__;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional67=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional67) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional68=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional68) {
                                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional69=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional69) {
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional70=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional70) {
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional71=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional71) {
                                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional72=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional72) {
                                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional73=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional73) {
                                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional76=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional76) {
                                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional77=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional77) {
                                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional78=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional78) {
                                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional79=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional79) {
                                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional80=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional80) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional81=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional81) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional74;
_Bool _if_conditional75;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional74=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional74) {
                                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional75=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional75) {
                                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional85;
int __result86__;
int __result87__;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional85=self==((void*)0),                    _if_conditional85) {
                        __result86__ = 0;
                        return __result86__;
                    }
                    __result87__ = self->len;
                    return __result87__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional87;
struct sType* __result88__;
void* right_value117;
struct sType* result_83;
_Bool _if_conditional88;
_Bool _if_conditional89;
void* right_value124;
struct list$1sTypeph* __dec_obj31;
_Bool _if_conditional93;
void* right_value127;
struct tuple1$1sTypeph* __dec_obj33;
_Bool _if_conditional97;
void* right_value128;
struct tuple1$1sTypeph* __dec_obj34;
_Bool _if_conditional98;
void* right_value129;
char* __dec_obj35;
_Bool _if_conditional99;
void* right_value130;
struct list$1sTypeph* __dec_obj36;
_Bool _if_conditional100;
void* right_value131;
struct list$1sNodeph* __dec_obj37;
_Bool _if_conditional101;
_Bool _if_conditional102;
void* right_value132;
struct list$1sTypeph* __dec_obj38;
_Bool _if_conditional103;
void* right_value139;
struct list$1charph* __dec_obj42;
_Bool _if_conditional107;
void* right_value140;
struct tuple1$1sTypeph* __dec_obj43;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value141;
struct sNode* __dec_obj44;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
void* right_value142;
struct sNode* __dec_obj45;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
void* right_value143;
char* __dec_obj46;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
void* right_value144;
char* __dec_obj47;
_Bool _if_conditional148;
struct sType* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
memset(&result_83, 0, sizeof(struct sType*));
right_value124 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
        if(_if_conditional87=self==(void*)0,        _if_conditional87) {
            __result88__ = __result_obj__ = (void*)0;
            return __result88__;
        }
        result_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value117=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value117,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_83->mClass=self->mClass;
        }
        if(_if_conditional89=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional89) {
            __dec_obj31=result_83->mMultipleTypes;
            result_83->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value124=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj31,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value124,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional93=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional93) {
            __dec_obj33=result_83->mNoSolvedGenericsType;
            result_83->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value127=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj33,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value127,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional97=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional97) {
            __dec_obj34=result_83->mOriginalLoadVarType;
            result_83->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value128=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj34,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value128,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional98=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional98) {
            __dec_obj35=result_83->mGenericsName;
            result_83->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value129=string_clone(self->mGenericsName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional99=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional99) {
            __dec_obj36=result_83->mGenericsTypes;
            result_83->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value130=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj36,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value130,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional100=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional100) {
            __dec_obj37=result_83->mArrayNum;
            result_83->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value131=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj37,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value131,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            result_83->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional102=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional102) {
            __dec_obj38=result_83->mParamTypes;
            result_83->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value132=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj38,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value132,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional103=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional103) {
            __dec_obj42=result_83->mParamNames;
            result_83->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value139=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj42,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value139,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional107=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional107) {
            __dec_obj43=result_83->mResultType;
            result_83->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value140=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj43,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value140,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            result_83->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional109=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional109) {
            __dec_obj44=result_83->mAlignas;
            result_83->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value141=sNode_clone(self->mAlignas))));
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value141) { right_value141 = come_decrement_ref_count2(right_value141, ((struct sNode*)right_value141)->finalize, ((struct sNode*)right_value141)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            result_83->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            result_83->mShort=self->mShort;
        }
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            result_83->mLong=self->mLong;
        }
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            result_83->mLongLong=self->mLongLong;
        }
        if(_if_conditional114=self!=((void*)0),        _if_conditional114) {
            result_83->mConstant=self->mConstant;
        }
        if(_if_conditional115=self!=((void*)0),        _if_conditional115) {
            result_83->mRegister=self->mRegister;
        }
        if(_if_conditional116=self!=((void*)0),        _if_conditional116) {
            result_83->mVolatile=self->mVolatile;
        }
        if(_if_conditional117=self!=((void*)0),        _if_conditional117) {
            result_83->mStatic=self->mStatic;
        }
        if(_if_conditional118=self!=((void*)0),        _if_conditional118) {
            result_83->mRecord=self->mRecord;
        }
        if(_if_conditional119=self!=((void*)0),        _if_conditional119) {
            result_83->mExtern=self->mExtern;
        }
        if(_if_conditional120=self!=((void*)0),        _if_conditional120) {
            result_83->mRestrict=self->mRestrict;
        }
        if(_if_conditional121=self!=((void*)0),        _if_conditional121) {
            result_83->mImmutable=self->mImmutable;
        }
        if(_if_conditional122=self!=((void*)0),        _if_conditional122) {
            result_83->mHeap=self->mHeap;
        }
        if(_if_conditional123=self!=((void*)0),        _if_conditional123) {
            result_83->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional124=self!=((void*)0),        _if_conditional124) {
            result_83->mDelegate=self->mDelegate;
        }
        if(_if_conditional125=self!=((void*)0),        _if_conditional125) {
            result_83->mShare=self->mShare;
        }
        if(_if_conditional126=self!=((void*)0),        _if_conditional126) {
            result_83->mClone=self->mClone;
        }
        if(_if_conditional127=self!=((void*)0),        _if_conditional127) {
            result_83->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional128=self!=((void*)0),        _if_conditional128) {
            result_83->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional129=self!=((void*)0),        _if_conditional129) {
            result_83->mRefference=self->mRefference;
        }
        if(_if_conditional130=self!=((void*)0),        _if_conditional130) {
            result_83->mException=self->mException;
        }
        if(_if_conditional131=self!=((void*)0),        _if_conditional131) {
            result_83->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional132=self!=((void*)0),        _if_conditional132) {
            result_83->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional133=self!=((void*)0),        _if_conditional133) {
            result_83->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional134=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional134) {
            __dec_obj45=result_83->mSizeNum;
            result_83->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value142=sNode_clone(self->mSizeNum))));
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value142) { right_value142 = come_decrement_ref_count2(right_value142, ((struct sNode*)right_value142)->finalize, ((struct sNode*)right_value142)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional135=self!=((void*)0),        _if_conditional135) {
            result_83->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional136=self!=((void*)0),        _if_conditional136) {
            result_83->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional137=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional137) {
            __dec_obj46=result_83->mOriginalTypeName;
            result_83->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value143=string_clone(self->mOriginalTypeName))));
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional138=self!=((void*)0),        _if_conditional138) {
            result_83->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional139=self!=((void*)0),        _if_conditional139) {
            result_83->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional140=self!=((void*)0),        _if_conditional140) {
            result_83->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional141=self!=((void*)0),        _if_conditional141) {
            result_83->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional142=self!=((void*)0),        _if_conditional142) {
            result_83->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional143=self!=((void*)0),        _if_conditional143) {
            result_83->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional144=self!=((void*)0),        _if_conditional144) {
            result_83->mInline=self->mInline;
        }
        if(_if_conditional145=self!=((void*)0),        _if_conditional145) {
            result_83->mNullValue=self->mNullValue;
        }
        if(_if_conditional146=self!=((void*)0),        _if_conditional146) {
            result_83->mGuardValue=self->mGuardValue;
        }
        if(_if_conditional147=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional147) {
            __dec_obj47=result_83->mAsmName;
            result_83->mAsmName=(char*)come_increment_ref_count(((char*)(right_value144=string_clone(self->mAsmName))));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional148=self!=((void*)0),        _if_conditional148) {
            result_83->mArrayPointerType=self->mArrayPointerType;
        }
        __result99__ = __result_obj__ = result_83;
        come_call_finalizer3(result_83,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result99__;
        come_call_finalizer3(result_83,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional90;
struct list$1sTypeph* __result89__;
void* right_value118;
void* right_value119;
struct list$1sTypeph* result_84;
struct list_item$1sTypeph* it_85;
_Bool _while_condtional13;
void* right_value123;
struct list$1sTypeph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&result_84, 0, sizeof(struct list$1sTypeph*));
memset(&it_85, 0, sizeof(struct list_item$1sTypeph*));
right_value123 = (void*)0;
                if(_if_conditional90=self==((void*)0),                _if_conditional90) {
                    __result89__ = __result_obj__ = ((void*)0);
                    return __result89__;
                }
                result_84=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value119=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value118=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value118,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value119,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_85=self->head;
                while(_while_condtional13=it_85!=((void*)0),                _while_condtional13) {
                    list$1sTypeph_add(result_84,(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(it_85->item)))));
                    come_call_finalizer3(right_value123,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    it_85=it_85->next;
                }
                __result92__ = __result_obj__ = result_84;
                come_call_finalizer3(result_84,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result92__;
                come_call_finalizer3(result_84,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result90__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result90__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional91;
void* right_value120;
struct list_item$1sTypeph* litem_86;
struct sType* __dec_obj28;
_Bool _if_conditional92;
void* right_value121;
struct list_item$1sTypeph* litem_87;
struct sType* __dec_obj29;
void* right_value122;
struct list_item$1sTypeph* litem_88;
struct sType* __dec_obj30;
struct list$1sTypeph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&litem_86, 0, sizeof(struct list_item$1sTypeph*));
right_value121 = (void*)0;
memset(&litem_87, 0, sizeof(struct list_item$1sTypeph*));
right_value122 = (void*)0;
memset(&litem_88, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional91=self->len==0,                        _if_conditional91) {
                            litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value120=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value120,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_86->prev=((void*)0);
                            litem_86->next=((void*)0);
                            __dec_obj28=litem_86->item;
                            litem_86->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_86;
                            self->head=litem_86;
                        }
                        else {
                            if(_if_conditional92=self->len==1,                            _if_conditional92) {
                                litem_87=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value121=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value121,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_87->prev=self->head;
                                litem_87->next=((void*)0);
                                __dec_obj29=litem_87->item;
                                litem_87->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj29,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_87;
                                self->head->next=litem_87;
                            }
                            else {
                                litem_88=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value122=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value122,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_88->prev=self->tail;
                                litem_88->next=((void*)0);
                                __dec_obj30=litem_88->item;
                                litem_88->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj30,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_88;
                                self->tail=litem_88;
                            }
                        }
                        self->len++;
                        __result91__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result91__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_89;
_Bool _while_condtional14;
struct list_item$1sTypeph* prev_it_90;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_89, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_90, 0, sizeof(struct list_item$1sTypeph*));
                it_89=self->head;
                while(_while_condtional14=it_89!=((void*)0),                _while_condtional14) {
                    prev_it_90=it_89;
                    it_89=it_89->next;
                    come_call_finalizer3(prev_it_90,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional94;
struct tuple1$1sTypeph* __result93__;
void* right_value125;
struct tuple1$1sTypeph* result_91;
_Bool _if_conditional96;
void* right_value126;
struct sType* __dec_obj32;
struct tuple1$1sTypeph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
memset(&result_91, 0, sizeof(struct tuple1$1sTypeph*));
right_value126 = (void*)0;
                if(_if_conditional94=self==(void*)0,                _if_conditional94) {
                    __result93__ = __result_obj__ = (void*)0;
                    return __result93__;
                }
                result_91=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value125=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value125,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional96=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional96) {
                    __dec_obj32=result_91->v1;
                    result_91->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value126,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result94__ = __result_obj__ = result_91;
                come_call_finalizer3(result_91,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result94__;
                come_call_finalizer3(result_91,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional95;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional95=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional95) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional104;
struct list$1charph* __result95__;
void* right_value133;
void* right_value134;
struct list$1charph* result_92;
struct list_item$1charph* it_93;
_Bool _while_condtional15;
void* right_value138;
struct list$1charph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
right_value134 = (void*)0;
memset(&result_92, 0, sizeof(struct list$1charph*));
memset(&it_93, 0, sizeof(struct list_item$1charph*));
right_value138 = (void*)0;
                if(_if_conditional104=self==((void*)0),                _if_conditional104) {
                    __result95__ = __result_obj__ = ((void*)0);
                    return __result95__;
                }
                result_92=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value134=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value133=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                come_call_finalizer3(right_value133,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value134,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_93=self->head;
                while(_while_condtional15=it_93!=((void*)0),                _while_condtional15) {
                    list$1charph_add(result_92,(char*)come_increment_ref_count(((char*)(right_value138=string_clone(it_93->item)))));
                    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_93=it_93->next;
                }
                __result98__ = __result_obj__ = result_92;
                come_call_finalizer3(result_92,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result98__;
                come_call_finalizer3(result_92,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result96__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result96__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional105;
void* right_value135;
struct list_item$1charph* litem_94;
char* __dec_obj39;
_Bool _if_conditional106;
void* right_value136;
struct list_item$1charph* litem_95;
char* __dec_obj40;
void* right_value137;
struct list_item$1charph* litem_96;
char* __dec_obj41;
struct list$1charph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
memset(&litem_94, 0, sizeof(struct list_item$1charph*));
right_value136 = (void*)0;
memset(&litem_95, 0, sizeof(struct list_item$1charph*));
right_value137 = (void*)0;
memset(&litem_96, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional105=self->len==0,                        _if_conditional105) {
                            litem_94=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value135=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                            come_call_finalizer3(right_value135,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_94->prev=((void*)0);
                            litem_94->next=((void*)0);
                            __dec_obj39=litem_94->item;
                            litem_94->item=(char*)come_increment_ref_count(item);
                            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_94;
                            self->head=litem_94;
                        }
                        else {
                            if(_if_conditional106=self->len==1,                            _if_conditional106) {
                                litem_95=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value136=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                come_call_finalizer3(right_value136,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_95->prev=self->head;
                                litem_95->next=((void*)0);
                                __dec_obj40=litem_95->item;
                                litem_95->item=(char*)come_increment_ref_count(item);
                                __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_95;
                                self->head->next=litem_95;
                            }
                            else {
                                litem_96=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value137=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                come_call_finalizer3(right_value137,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_96->prev=self->tail;
                                litem_96->next=((void*)0);
                                __dec_obj41=litem_96->item;
                                litem_96->item=(char*)come_increment_ref_count(item);
                                __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_96;
                                self->tail=litem_96;
                            }
                        }
                        self->len++;
                        __result97__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result97__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_97;
_Bool _while_condtional16;
struct list_item$1charph* prev_it_98;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_97, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_98, 0, sizeof(struct list_item$1charph*));
                it_97=self->head;
                while(_while_condtional16=it_97!=((void*)0),                _while_condtional16) {
                    prev_it_98=it_97;
                    it_97=it_97->next;
                    come_call_finalizer3(prev_it_98,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__;
void* right_value146;
char* __dec_obj49;
struct sCharNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj49=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string(info->sname))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result101__ = __result_obj__ = self;
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result101__;
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sCharNode_terminated(struct sCharNode* self){
void* __result_obj__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
    __result102__ = (_Bool)0;
    return __result102__;
}

char* sCharNode_kind(struct sCharNode* self){
void* __result_obj__;
void* right_value147;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
    __result103__ = __result_obj__ = ((char*)(right_value147=__builtin_string("sCharNode")));
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result103__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value148;
struct CVALUE* come_value_99;
void* right_value149;
char* __dec_obj50;
void* right_value150;
void* right_value151;
struct sType* __dec_obj51;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
memset(&come_value_99, 0, sizeof(struct CVALUE*));
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
    come_value_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 159, "CVALUE"))));
    come_call_finalizer3(right_value148,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj50=come_value_99->c_value;
    come_value_99->c_value=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("%d",self->value))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj51=come_value_99->type;
    come_value_99->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value150=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 162, "sType")))),"char",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value150,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value151,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_99->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_99));
    add_come_last_code(info,"%s;\n",come_value_99->c_value);
    __result104__ = (_Bool)1;
    come_call_finalizer3(come_value_99,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result104__;
    come_call_finalizer3(come_value_99,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value152;
char* __dec_obj52;
struct sWCharNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
    self->value=value;
    self->quote=quote;
    self->sline=info->sline;
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string(info->sname))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result105__ = __result_obj__ = self;
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result105__;
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sWCharNode_terminated(struct sWCharNode* self){
void* __result_obj__;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
    __result106__ = (_Bool)0;
    return __result106__;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __result_obj__;
void* right_value153;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value153 = (void*)0;
    __result107__ = __result_obj__ = ((char*)(right_value153=__builtin_string("sWCharNode")));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value154;
struct CVALUE* come_value_100;
_Bool _if_conditional151;
void* right_value155;
char* __dec_obj53;
void* right_value156;
char* __dec_obj54;
void* right_value157;
void* right_value158;
struct sType* __dec_obj55;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value154 = (void*)0;
memset(&come_value_100, 0, sizeof(struct CVALUE*));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
    come_value_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value154=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 199, "CVALUE"))));
    come_call_finalizer3(right_value154,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    if(self->quote) {
        __dec_obj53=come_value_100->c_value;
        come_value_100->c_value=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("L'\\%o'",self->value))));
        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj54=come_value_100->c_value;
        come_value_100->c_value=(char*)come_increment_ref_count(((char*)(right_value156=xsprintf("L'%lc'",self->value))));
        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj55=come_value_100->type;
    come_value_100->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value157=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 207, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value157,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value158,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_100->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_100));
    add_come_last_code(info,"%s;\n",come_value_100->c_value);
    __result108__ = (_Bool)1;
    come_call_finalizer3(come_value_100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result108__;
    come_call_finalizer3(come_value_100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__;
unsigned int* __dec_obj56;
void* right_value159;
char* __dec_obj57;
struct sWStringNode* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
    __dec_obj56=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->sline=sline;
    __dec_obj57=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value159=__builtin_string(info->sname))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result109__ = __result_obj__ = self;
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result109__;
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sWStringNode_terminated(struct sWStringNode* self){
void* __result_obj__;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
    __result110__ = (_Bool)0;
    return __result110__;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __result_obj__;
void* right_value160;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
    __result111__ = __result_obj__ = ((char*)(right_value160=__builtin_string("sWStringNode")));
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result111__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value161;
struct CVALUE* come_value_101;
void* right_value162;
char* __dec_obj58;
void* right_value163;
void* right_value164;
struct sType* __dec_obj59;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
memset(&come_value_101, 0, sizeof(struct CVALUE*));
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
    come_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 242, "CVALUE"))));
    come_call_finalizer3(right_value161,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj58=come_value_101->c_value;
    come_value_101->c_value=(char*)come_increment_ref_count(((char*)(right_value162=xsprintf("L\"%ls\"",self->value))));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj59=come_value_101->type;
    come_value_101->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value163=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 245, "sType")))),"int*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value163,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value164,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_101->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_101));
    add_come_last_code(info,"%s;\n",come_value_101->c_value);
    __result112__ = (_Bool)1;
    come_call_finalizer3(come_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result112__;
    come_call_finalizer3(come_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value165;
char* __dec_obj60;
void* right_value166;
char* __dec_obj61;
struct sRegexNode* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
right_value166 = (void*)0;
    __dec_obj60=self->str;
    self->str=(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string(str))));
    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->global=global;
    self->ignore_case=ignore_case;
    self->sline=sline;
    __dec_obj61=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string(info->sname))));
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result113__ = __result_obj__ = self;
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result113__;
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sRegexNode_terminated(struct sRegexNode* self){
void* __result_obj__;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
    __result114__ = (_Bool)0;
    return __result114__;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __result_obj__;
void* right_value167;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
    __result115__ = __result_obj__ = ((char*)(right_value167=__builtin_string("sRegexNode")));
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result115__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value168;
struct CVALUE* come_value_102;
void* right_value169;
void* right_value170;
void* right_value171;
void* right_value172;
void* right_value173;
char* __dec_obj62;
void* right_value174;
void* right_value175;
struct sType* __dec_obj63;
void* right_value176;
char* __dec_obj64;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
memset(&come_value_102, 0, sizeof(struct CVALUE*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
    come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 284, "CVALUE"))));
    come_call_finalizer3(right_value168,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj62=come_value_102->c_value;
    come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("charp_to_regex(\"%s\", %s, 0, %s, 0, 0, 0, 0, 0)",self->str,self->ignore_case?((char*)(right_value169=__builtin_string("1"))):((char*)(right_value170=__builtin_string("0"))),self->global?((char*)(right_value171=__builtin_string("1"))):((char*)(right_value172=__builtin_string("0")))))));
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj63=come_value_102->type;
    come_value_102->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value174=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 287, "sType")))),"come_regex",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value174,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value175,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_102->type->mPointerNum=1;
    come_value_102->type->mHeap=(_Bool)1;
    come_value_102->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
    add_come_last_code(info,"%s;\n",come_value_102->c_value);
    __dec_obj64=come_value_102->c_value;
    come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value176=append_object_to_right_values(come_value_102->c_value,(struct sType*)come_increment_ref_count(come_value_102->type),info))));
    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result116__ = (_Bool)1;
    come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result116__;
    come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* __dec_obj65;
void* right_value177;
char* __dec_obj66;
struct sListNode* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value177 = (void*)0;
    __dec_obj65=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj65,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->sline=info->sline;
    __dec_obj66=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value177=__builtin_string(info->sname))));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result117__ = __result_obj__ = self;
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result117__;
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sListNode_terminated(struct sListNode* self){
void* __result_obj__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = (_Bool)0;
    return __result118__;
}

char* sListNode_kind(struct sListNode* self){
void* __result_obj__;
void* right_value178;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
    __result119__ = __result_obj__ = ((char*)(right_value178=__builtin_string("sListNode")));
    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result119__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* list_elements_103;
void* right_value179;
void* right_value180;
struct list$1CVALUEph* params_106;
struct sType* list_element_type_107;
struct list$1sNodeph* o2_saved_108;
struct sNode* it_109;
_Bool _if_conditional158;
_Bool __result121__;
void* right_value181;
struct CVALUE* come_value_110;
_Bool _if_conditional159;
void* right_value182;
void* right_value183;
struct sType* __dec_obj67;
void* right_value184;
struct sType* type_values_111;
void* right_value188;
static int list_value_num_115=0;
void* right_value189;
char* var_name_116;
void* right_value190;
struct sVar* var__117;
void* right_value191;
void* right_value192;
void* right_value193;
struct buffer* source_118;
int i_119;
struct list$1CVALUEph* o2_saved_120;
struct CVALUE* it_123;
_Bool _if_conditional167;
void* right_value194;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
struct sType* list_type_129;
void* right_value202;
void* right_value203;
struct sType* obj_type_133;
char* fun_name_134;
void* right_value204;
void* right_value205;
void* right_value206;
char* generics_fun_name_135;
struct sFun* fun_136;
_Bool _if_conditional172;
void* right_value207;
void* right_value208;
char* __dec_obj74;
_Bool _if_conditional173;
_Bool __result135__;
void* right_value209;
struct sType* result_type_137;
struct sType* type_138;
void* right_value210;
struct CVALUE* obj_value_139;
void* right_value211;
void* right_value212;
struct buffer* num_string_140;
void* right_value213;
struct sType* type2_141;
void* right_value214;
char* type_name_142;
void* right_value215;
void* right_value216;
char* __dec_obj75;
void* right_value217;
struct sType* type3_143;
void* right_value218;
struct sType* __dec_obj76;
void* right_value219;
char* __dec_obj77;
void* right_value220;
void* right_value221;
struct list$1CVALUEph* come_params_144;
_Bool _if_conditional176;
void* right_value222;
struct CVALUE* come_value2_148;
void* right_value223;
char* __dec_obj78;
struct sType* __dec_obj79;
void* right_value224;
struct CVALUE* come_value3_149;
void* right_value225;
char* __dec_obj80;
struct sType* __dec_obj81;
void* right_value226;
void* right_value227;
struct buffer* buf_150;
int j_151;
struct list$1CVALUEph* o2_saved_152;
struct CVALUE* it_153;
_Bool _if_conditional177;
void* right_value228;
struct CVALUE* come_value4_154;
void* right_value229;
char* __dec_obj82;
_Bool _if_conditional178;
void* right_value230;
void* right_value231;
char* __dec_obj83;
void* right_value232;
struct sType* __dec_obj84;
void* right_value233;
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&list_elements_103, 0, sizeof(struct list$1sNodeph*));
right_value179 = (void*)0;
right_value180 = (void*)0;
memset(&params_106, 0, sizeof(struct list$1CVALUEph*));
memset(&list_element_type_107, 0, sizeof(struct sType*));
memset(&o2_saved_108, 0, sizeof(struct list$1sNodeph*));
memset(&it_109, 0, sizeof(struct sNode*));
right_value181 = (void*)0;
memset(&come_value_110, 0, sizeof(struct CVALUE*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&type_values_111, 0, sizeof(struct sType*));
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&var_name_116, 0, sizeof(char*));
right_value190 = (void*)0;
memset(&var__117, 0, sizeof(struct sVar*));
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&source_118, 0, sizeof(struct buffer*));
memset(&i_119, 0, sizeof(int));
memset(&o2_saved_120, 0, sizeof(struct list$1CVALUEph*));
memset(&it_123, 0, sizeof(struct CVALUE*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
memset(&list_type_129, 0, sizeof(struct sType*));
right_value202 = (void*)0;
right_value203 = (void*)0;
memset(&obj_type_133, 0, sizeof(struct sType*));
memset(&fun_name_134, 0, sizeof(char*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
memset(&generics_fun_name_135, 0, sizeof(char*));
memset(&fun_136, 0, sizeof(struct sFun*));
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&result_type_137, 0, sizeof(struct sType*));
memset(&type_138, 0, sizeof(struct sType*));
right_value210 = (void*)0;
memset(&obj_value_139, 0, sizeof(struct CVALUE*));
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&num_string_140, 0, sizeof(struct buffer*));
right_value213 = (void*)0;
memset(&type2_141, 0, sizeof(struct sType*));
right_value214 = (void*)0;
memset(&type_name_142, 0, sizeof(char*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&type3_143, 0, sizeof(struct sType*));
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
memset(&come_params_144, 0, sizeof(struct list$1CVALUEph*));
right_value222 = (void*)0;
memset(&come_value2_148, 0, sizeof(struct CVALUE*));
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&come_value3_149, 0, sizeof(struct CVALUE*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&buf_150, 0, sizeof(struct buffer*));
memset(&j_151, 0, sizeof(int));
memset(&o2_saved_152, 0, sizeof(struct list$1CVALUEph*));
memset(&it_153, 0, sizeof(struct CVALUE*));
right_value228 = (void*)0;
memset(&come_value4_154, 0, sizeof(struct CVALUE*));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
    list_elements_103=self->list_elements;
    params_106=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value180=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value179=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 328, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value179,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value180,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    list_element_type_107=((void*)0);
    for(    o2_saved_108=(list_elements_103),it_109=list$1sNodeph_begin((o2_saved_108));    !list$1sNodeph_end((o2_saved_108));    it_109=list$1sNodeph_next((o2_saved_108))    ){
        if(_if_conditional158=!node_compile(it_109,info),        _if_conditional158) {
            __result121__ = (_Bool)0;
            come_call_finalizer3(params_106,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_element_type_107,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result121__;
        }
        come_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value181=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value181,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(list_element_type_107) {
            check_assign_type(((char*)(right_value182=xsprintf("invalid list element type"))),list_element_type_107,come_value_110->type,come_value_110,(_Bool)0,(_Bool)1,info);
            right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        list$1CVALUEph_push_back(params_106,(struct CVALUE*)come_increment_ref_count(come_value_110));
        __dec_obj67=list_element_type_107;
        list_element_type_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=sType_clone(come_value_110->type))));
        come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value183,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(come_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_111=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(list_element_type_107))));
    come_call_finalizer3(right_value184,sType_finalize, 0, 1, 0, 0, __result_obj__);
    list$1sNodeph_push_back(type_values_111->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value188=create_int_node(list$1CVALUEph_length(params_106),info)))));
    if(right_value188) { right_value188 = come_decrement_ref_count2(right_value188, ((struct sNode*)right_value188)->finalize, ((struct sNode*)right_value188)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    type_values_111->mHeap=(_Bool)0;
    var_name_116=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("__list_values%d__",++list_value_num_115))));
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_variable_to_table(var_name_116,(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(type_values_111)))),info);
    come_call_finalizer3(right_value190,sType_finalize, 0, 1, 0, 0, __result_obj__);
    var__117=get_variable_from_table(info->lv_table,var_name_116);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value191=make_define_var(type_values_111,var__117->mCValueName,(_Bool)0,info))));
    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    source_118=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value193=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value192=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 361, "buffer"))))))));
    come_call_finalizer3(right_value192,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value193,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(source_118,"{");
    i_119=0;
    for(    o2_saved_120=(struct list$1CVALUEph*)come_increment_ref_count((params_106)),it_123=list$1CVALUEph_begin((o2_saved_120));    !list$1CVALUEph_end((o2_saved_120));    it_123=list$1CVALUEph_next((o2_saved_120))    ){
        if(list_element_type_107->mHeap) {
            buffer_append_str(source_118,((char*)(right_value194=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__117->mCValueName,i_119,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_106,i_119), "06str.c", 368, 0))->c_value))));
            right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            buffer_append_str(source_118,((char*)(right_value195=xsprintf("%s[%d]=%s;\n",var__117->mCValueName,i_119,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_106,i_119), "06str.c", 371, 1))->c_value))));
            right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        i_119++;
    }
    come_call_finalizer3(o2_saved_120,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_118,"}");
    add_come_code(info,"%s",((char*)(right_value196=buffer_to_string(source_118))));
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    list_type_129=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value197=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 380, "sType")))),"list",(_Bool)0,info))));
    come_call_finalizer3(right_value197,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value198,sType_finalize, 0, 1, 0, 0, __result_obj__);
    list$1sTypeph_push_back(list_type_129->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_clone(list_element_type_107)))));
    come_call_finalizer3(right_value202,sType_finalize, 0, 1, 0, 0, __result_obj__);
    obj_type_133=(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=sType_clone(list_type_129))));
    come_call_finalizer3(right_value203,sType_finalize, 0, 1, 0, 0, __result_obj__);
    fun_name_134="initialize_with_values";
    generics_fun_name_135=(char*)come_increment_ref_count(((char*)(right_value206=string_to_string(((char*)(right_value205=make_generics_function(obj_type_133,(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(fun_name_134)))),info,(_Bool)1)))))));
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_136=map$2charphsFunph_at(info->funcs,generics_fun_name_135,((void*)0));
    if(_if_conditional172=fun_136==((void*)0),    _if_conditional172) {
        __dec_obj74=generics_fun_name_135;
        generics_fun_name_135=(char*)come_increment_ref_count(((char*)(right_value208=create_method_name(obj_type_133,(_Bool)0,((char*)(right_value207=__builtin_string(fun_name_134))),info,(_Bool)1))));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_136=map$2charphsFunph_at(info->funcs,generics_fun_name_135,((void*)0));
        if(_if_conditional173=fun_136==((void*)0),        _if_conditional173) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_135,info->come_fun->mName);
            __result135__ = (_Bool)1;
            come_call_finalizer3(params_106,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_element_type_107,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_values_111,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_116 = come_decrement_ref_count2(var_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_118,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_type_129,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_133,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_135 = come_decrement_ref_count2(generics_fun_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result135__;
        }
    }
    result_type_137=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=sType_clone(fun_136->mResultType))));
    come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
    result_type_137->mStatic=(_Bool)0;
    type_138=list_type_129;
    obj_value_139=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 406, "CVALUE"))));
    come_call_finalizer3(right_value210,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    num_string_140=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value212=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value211=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 408, "buffer"))))))));
    come_call_finalizer3(right_value211,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value212,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(num_string_140,"1");
    type2_141=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=solve_generics(type_138,type_138,info))));
    come_call_finalizer3(right_value213,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type_name_142=(char*)come_increment_ref_count(((char*)(right_value214=make_type_name_string(type2_141,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj75=obj_value_139->c_value;
    obj_value_139->c_value=(char*)come_increment_ref_count(((char*)(right_value216=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_142,type_name_142,((char*)(right_value215=buffer_to_string(num_string_140))),info->sname,info->sline,type_name_142))));
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type3_143=(struct sType*)come_increment_ref_count(((struct sType*)(right_value217=sType_clone(type2_141))));
    come_call_finalizer3(right_value217,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type3_143->mPointerNum++;
    type3_143->mHeap=(_Bool)1;
    type2_141->mHeap=(_Bool)1;
    __dec_obj76=obj_value_139->type;
    obj_value_139->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value218=sType_clone(type2_141))));
    come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value218,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj77=obj_value_139->c_value;
    obj_value_139->c_value=(char*)come_increment_ref_count(((char*)(right_value219=append_object_to_right_values(obj_value_139->c_value,(struct sType*)come_increment_ref_count(type3_143),info))));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    obj_value_139->type->mPointerNum++;
    obj_value_139->var=((void*)0);
    come_params_144=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value221=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value220=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 427, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value220,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value221,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional176=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_136->mParamTypes,0), "06str.c", 429, 2))->mHeap&&obj_value_139->type->mHeap,    _if_conditional176) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_136->mParamTypes,0), "06str.c", 430, 3)),obj_value_139->type,obj_value_139,info);
    }
    list$1CVALUEph_push_back(come_params_144,(struct CVALUE*)come_increment_ref_count(obj_value_139));
    come_value2_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 434, "CVALUE"))));
    come_call_finalizer3(right_value222,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj78=come_value2_148->c_value;
    come_value2_148->c_value=(char*)come_increment_ref_count(((char*)(right_value223=xsprintf("%d",list$1CVALUEph_length(params_106)))));
    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj79=come_value2_148->type;
    come_value2_148->type=((void*)0);
    come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_148->var=((void*)0);
    list$1CVALUEph_push_back(come_params_144,(struct CVALUE*)come_increment_ref_count(come_value2_148));
    come_value3_149=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value224=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 442, "CVALUE"))));
    come_call_finalizer3(right_value224,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj80=come_value3_149->c_value;
    come_value3_149->c_value=(char*)come_increment_ref_count(((char*)(right_value225=xsprintf("%s",var__117->mCValueName))));
    __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj81=come_value3_149->type;
    come_value3_149->type=((void*)0);
    come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_149->var=((void*)0);
    list$1CVALUEph_push_back(come_params_144,(struct CVALUE*)come_increment_ref_count(come_value3_149));
    buf_150=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value227=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value226=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 450, "buffer"))))))));
    come_call_finalizer3(right_value226,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value227,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_150,generics_fun_name_135);
    buffer_append_str(buf_150,"(");
    j_151=0;
    for(    o2_saved_152=(struct list$1CVALUEph*)come_increment_ref_count((come_params_144)),it_153=list$1CVALUEph_begin((o2_saved_152));    !list$1CVALUEph_end((o2_saved_152));    it_153=list$1CVALUEph_next((o2_saved_152))    ){
        buffer_append_str(buf_150,it_153->c_value);
        if(_if_conditional177=j_151!=list$1CVALUEph_length(come_params_144)-1,        _if_conditional177) {
            buffer_append_str(buf_150,",");
        }
        j_151++;
    }
    come_call_finalizer3(o2_saved_152,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_150,")");
    come_value4_154=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value228=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 467, "CVALUE"))));
    come_call_finalizer3(right_value228,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj82=come_value4_154->c_value;
    come_value4_154->c_value=(char*)come_increment_ref_count(((char*)(right_value229=buffer_to_string(buf_150))));
    __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(result_type_137->mHeap) {
        __dec_obj83=come_value4_154->c_value;
        come_value4_154->c_value=(char*)come_increment_ref_count(((char*)(right_value231=append_object_to_right_values(((char*)(right_value230=buffer_to_string(buf_150))),(struct sType*)come_increment_ref_count(result_type_137),info))));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj84=come_value4_154->type;
    come_value4_154->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_clone(result_type_137))));
    come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value232,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value4_154->type->mStatic=(_Bool)0;
    come_value4_154->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value233=buffer_to_string(buf_150))));
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_154));
    __result138__ = (_Bool)1;
    come_call_finalizer3(params_106,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_element_type_107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_values_111,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_116 = come_decrement_ref_count2(var_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_118,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_type_129,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_133,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_135 = come_decrement_ref_count2(generics_fun_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_137,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_139,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_140,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_141,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_142 = come_decrement_ref_count2(type_name_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_143,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_144,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_148,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_150,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_154,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result138__;
    come_call_finalizer3(params_106,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_element_type_107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_values_111,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_116 = come_decrement_ref_count2(var_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_118,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_type_129,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_133,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_135 = come_decrement_ref_count2(generics_fun_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_137,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_139,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_140,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_141,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_142 = come_decrement_ref_count2(type_name_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_143,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_144,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_148,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_150,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_154,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result120__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result120__;
        come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_104;
_Bool _while_condtional17;
struct list_item$1CVALUEph* prev_it_105;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_104, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_105, 0, sizeof(struct list_item$1CVALUEph*));
            it_104=self->head;
            while(_while_condtional17=it_104!=((void*)0),            _while_condtional17) {
                prev_it_105=it_104;
                it_104=it_104->next;
                come_call_finalizer3(prev_it_105,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional160;
void* right_value185;
struct list_item$1sNodeph* litem_112;
struct sNode* __dec_obj68;
_Bool _if_conditional161;
void* right_value186;
struct list_item$1sNodeph* litem_113;
struct sNode* __dec_obj69;
void* right_value187;
struct list_item$1sNodeph* litem_114;
struct sNode* __dec_obj70;
struct list$1sNodeph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
memset(&litem_112, 0, sizeof(struct list_item$1sNodeph*));
right_value186 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1sNodeph*));
right_value187 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1sNodeph*));
        if(_if_conditional160=self->len==0,        _if_conditional160) {
            litem_112=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value185=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 217, "list_item$1sNodeph"))));
            come_call_finalizer3(right_value185,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_112->prev=((void*)0);
            litem_112->next=((void*)0);
            __dec_obj68=litem_112->item;
            litem_112->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_112;
            self->head=litem_112;
        }
        else {
            if(_if_conditional161=self->len==1,            _if_conditional161) {
                litem_113=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value186=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 227, "list_item$1sNodeph"))));
                come_call_finalizer3(right_value186,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_113->prev=self->head;
                litem_113->next=((void*)0);
                __dec_obj69=litem_113->item;
                litem_113->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
                self->tail=litem_113;
                self->head->next=litem_113;
            }
            else {
                litem_114=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value187=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 237, "list_item$1sNodeph"))));
                come_call_finalizer3(right_value187,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_114->prev=self->tail;
                litem_114->next=((void*)0);
                __dec_obj70=litem_114->item;
                litem_114->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); }
                self->tail->next=litem_114;
                self->tail=litem_114;
            }
        }
        self->len++;
        __result122__ = __result_obj__ = self;
        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result122__;
        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional162;
int __result123__;
int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional162=self==((void*)0),        _if_conditional162) {
            __result123__ = 0;
            return __result123__;
        }
        __result124__ = self->len;
        return __result124__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional163;
struct CVALUE* result_121;
struct CVALUE* __result125__;
_Bool _if_conditional164;
struct CVALUE* __result126__;
struct CVALUE* result_122;
struct CVALUE* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_121, 0, sizeof(struct CVALUE*));
memset(&result_122, 0, sizeof(struct CVALUE*));
        if(_if_conditional163=self==((void*)0),        _if_conditional163) {
            memset(&result_121,0,sizeof(struct CVALUE*));
            __result125__ = __result_obj__ = result_121;
            return __result125__;
        }
        self->it=self->head;
        if(self->it) {
            __result126__ = __result_obj__ = self->it->item;
            return __result126__;
        }
        memset(&result_122,0,sizeof(struct CVALUE*));
        __result127__ = __result_obj__ = result_122;
        return __result127__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
        __result128__ = self==((void*)0)||self->it==((void*)0);
        return __result128__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional165;
struct CVALUE* result_124;
struct CVALUE* __result129__;
_Bool _if_conditional166;
struct CVALUE* __result130__;
struct CVALUE* result_125;
struct CVALUE* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(struct CVALUE*));
memset(&result_125, 0, sizeof(struct CVALUE*));
        if(_if_conditional165=self==((void*)0)||self->it==((void*)0),        _if_conditional165) {
            memset(&result_124,0,sizeof(struct CVALUE*));
            __result129__ = __result_obj__ = result_124;
            return __result129__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result130__ = __result_obj__ = self->it->item;
            return __result130__;
        }
        memset(&result_125,0,sizeof(struct CVALUE*));
        __result131__ = __result_obj__ = result_125;
        return __result131__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional168;
struct list_item$1CVALUEph* it_126;
int i_127;
_Bool _while_condtional18;
_Bool _if_conditional169;
struct CVALUE* __result132__;
struct CVALUE* default_value_128;
struct CVALUE* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_126, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_127, 0, sizeof(int));
memset(&default_value_128, 0, sizeof(struct CVALUE*));
                if(_if_conditional168=position<0,                _if_conditional168) {
                    position+=self->len;
                }
                it_126=self->head;
                i_127=0;
                while(_while_condtional18=it_126!=((void*)0),                _while_condtional18) {
                    if(_if_conditional169=position==i_127,                    _if_conditional169) {
                        __result132__ = __result_obj__ = it_126->item;
                        return __result132__;
                    }
                    it_126=it_126->next;
                    i_127++;
                }
                memset(&default_value_128,0,sizeof(struct CVALUE*));
                __result133__ = __result_obj__ = default_value_128;
                come_call_finalizer3(default_value_128,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                return __result133__;
                come_call_finalizer3(default_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional170;
void* right_value199;
struct list_item$1sTypeph* litem_130;
struct sType* __dec_obj71;
_Bool _if_conditional171;
void* right_value200;
struct list_item$1sTypeph* litem_131;
struct sType* __dec_obj72;
void* right_value201;
struct list_item$1sTypeph* litem_132;
struct sType* __dec_obj73;
struct list$1sTypeph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
memset(&litem_130, 0, sizeof(struct list_item$1sTypeph*));
right_value200 = (void*)0;
memset(&litem_131, 0, sizeof(struct list_item$1sTypeph*));
right_value201 = (void*)0;
memset(&litem_132, 0, sizeof(struct list_item$1sTypeph*));
        if(_if_conditional170=self->len==0,        _if_conditional170) {
            litem_130=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value199=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 217, "list_item$1sTypeph"))));
            come_call_finalizer3(right_value199,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_130->prev=((void*)0);
            litem_130->next=((void*)0);
            __dec_obj71=litem_130->item;
            litem_130->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_130;
            self->head=litem_130;
        }
        else {
            if(_if_conditional171=self->len==1,            _if_conditional171) {
                litem_131=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value200=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 227, "list_item$1sTypeph"))));
                come_call_finalizer3(right_value200,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_131->prev=self->head;
                litem_131->next=((void*)0);
                __dec_obj72=litem_131->item;
                litem_131->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_131;
                self->head->next=litem_131;
            }
            else {
                litem_132=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value201=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 237, "list_item$1sTypeph"))));
                come_call_finalizer3(right_value201,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_132->prev=self->tail;
                litem_132->next=((void*)0);
                __dec_obj73=litem_132->item;
                litem_132->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_132;
                self->tail=litem_132;
            }
        }
        self->len++;
        __result134__ = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result134__;
        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional174;
struct list_item$1sTypeph* it_145;
int i_146;
_Bool _while_condtional19;
_Bool _if_conditional175;
struct sType* __result136__;
struct sType* default_value_147;
struct sType* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_145, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_146, 0, sizeof(int));
memset(&default_value_147, 0, sizeof(struct sType*));
        if(_if_conditional174=position<0,        _if_conditional174) {
            position+=self->len;
        }
        it_145=self->head;
        i_146=0;
        while(_while_condtional19=it_145!=((void*)0),        _while_condtional19) {
            if(_if_conditional175=position==i_146,            _if_conditional175) {
                __result136__ = __result_obj__ = it_145->item;
                return __result136__;
            }
            it_145=it_145->next;
            i_146++;
        }
        memset(&default_value_147,0,sizeof(struct sType*));
        __result137__ = __result_obj__ = default_value_147;
        come_call_finalizer3(default_value_147,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result137__;
        come_call_finalizer3(default_value_147,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* __dec_obj85;
void* right_value234;
char* __dec_obj86;
struct sTupleNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
    __dec_obj85=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj85,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->sline=info->sline;
    __dec_obj86=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value234=__builtin_string(info->sname))));
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result139__ = __result_obj__ = self;
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result139__;
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sTupleNode_terminated(struct sTupleNode* self){
void* __result_obj__;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    __result140__ = (_Bool)0;
    return __result140__;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __result_obj__;
void* right_value235;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value235 = (void*)0;
    __result141__ = __result_obj__ = ((char*)(right_value235=__builtin_string("sTupleNode")));
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result141__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* tuple_elements_155;
void* right_value236;
void* right_value237;
struct list$1sTypeph* tuple_types_156;
void* right_value238;
void* right_value239;
struct list$1CVALUEph* tuple_values_157;
struct list$1sNodeph* o2_saved_158;
struct sNode* it_159;
_Bool _if_conditional181;
_Bool __result142__;
void* right_value240;
struct CVALUE* come_value_160;
void* right_value244;
void* right_value245;
void* right_value246;
void* right_value247;
void* right_value248;
struct sType* type_162;
struct list$1sTypeph* o2_saved_163;
struct sType* it_166;
void* right_value249;
void* right_value250;
struct CVALUE* obj_value_169;
void* right_value251;
void* right_value252;
struct buffer* num_string_170;
void* right_value253;
struct sType* type2_171;
void* right_value254;
char* type_name_172;
void* right_value255;
void* right_value256;
char* __dec_obj89;
void* right_value257;
struct sType* type3_173;
void* right_value258;
struct sType* __dec_obj90;
void* right_value259;
char* __dec_obj91;
void* right_value260;
struct sType* obj_type_174;
char* fun_name_175;
void* right_value261;
void* right_value262;
void* right_value263;
char* generics_fun_name_176;
struct sFun* fun_177;
_Bool _if_conditional190;
void* right_value264;
void* right_value265;
char* __dec_obj92;
_Bool _if_conditional191;
_Bool __result152__;
void* right_value266;
struct sType* result_type_178;
void* right_value267;
void* right_value268;
struct list$1CVALUEph* come_params_179;
_Bool _if_conditional192;
int i_180;
struct list$1CVALUEph* o2_saved_181;
struct CVALUE* it_182;
void* right_value269;
struct CVALUE* come_value_183;
_Bool _if_conditional193;
void* right_value270;
void* right_value271;
struct buffer* buf_184;
int j_185;
struct list$1CVALUEph* o2_saved_186;
struct CVALUE* it_187;
_Bool _if_conditional194;
void* right_value272;
struct CVALUE* come_value2_188;
void* right_value273;
char* __dec_obj93;
_Bool _if_conditional195;
void* right_value274;
void* right_value275;
char* __dec_obj94;
void* right_value276;
struct sType* __dec_obj95;
void* right_value277;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tuple_elements_155, 0, sizeof(struct list$1sNodeph*));
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&tuple_types_156, 0, sizeof(struct list$1sTypeph*));
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&tuple_values_157, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_158, 0, sizeof(struct list$1sNodeph*));
memset(&it_159, 0, sizeof(struct sNode*));
right_value240 = (void*)0;
memset(&come_value_160, 0, sizeof(struct CVALUE*));
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
memset(&type_162, 0, sizeof(struct sType*));
memset(&o2_saved_163, 0, sizeof(struct list$1sTypeph*));
memset(&it_166, 0, sizeof(struct sType*));
right_value249 = (void*)0;
right_value250 = (void*)0;
memset(&obj_value_169, 0, sizeof(struct CVALUE*));
right_value251 = (void*)0;
right_value252 = (void*)0;
memset(&num_string_170, 0, sizeof(struct buffer*));
right_value253 = (void*)0;
memset(&type2_171, 0, sizeof(struct sType*));
right_value254 = (void*)0;
memset(&type_name_172, 0, sizeof(char*));
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&type3_173, 0, sizeof(struct sType*));
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&obj_type_174, 0, sizeof(struct sType*));
memset(&fun_name_175, 0, sizeof(char*));
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
memset(&generics_fun_name_176, 0, sizeof(char*));
memset(&fun_177, 0, sizeof(struct sFun*));
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
memset(&result_type_178, 0, sizeof(struct sType*));
right_value267 = (void*)0;
right_value268 = (void*)0;
memset(&come_params_179, 0, sizeof(struct list$1CVALUEph*));
memset(&i_180, 0, sizeof(int));
memset(&o2_saved_181, 0, sizeof(struct list$1CVALUEph*));
memset(&it_182, 0, sizeof(struct CVALUE*));
right_value269 = (void*)0;
memset(&come_value_183, 0, sizeof(struct CVALUE*));
right_value270 = (void*)0;
right_value271 = (void*)0;
memset(&buf_184, 0, sizeof(struct buffer*));
memset(&j_185, 0, sizeof(int));
memset(&o2_saved_186, 0, sizeof(struct list$1CVALUEph*));
memset(&it_187, 0, sizeof(struct CVALUE*));
right_value272 = (void*)0;
memset(&come_value2_188, 0, sizeof(struct CVALUE*));
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
    tuple_elements_155=self->tuple_elements;
    tuple_types_156=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value237=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value236=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 512, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value236,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value237,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    tuple_values_157=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value239=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value238=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 513, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value238,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value239,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_158=(tuple_elements_155),it_159=list$1sNodeph_begin((o2_saved_158));    !list$1sNodeph_end((o2_saved_158));    it_159=list$1sNodeph_next((o2_saved_158))    ){
        if(_if_conditional181=!node_compile(it_159,info),        _if_conditional181) {
            __result142__ = (_Bool)0;
            come_call_finalizer3(tuple_types_156,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_157,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result142__;
        }
        come_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value240=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value240,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_157,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value244=CVALUE_clone(come_value_160)))));
        come_call_finalizer3(right_value244,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        list$1sTypeph_push_back(tuple_types_156,(struct sType*)come_increment_ref_count(((struct sType*)(right_value245=sType_clone(come_value_160->type)))));
        come_call_finalizer3(right_value245,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(come_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_162=(struct sType*)come_increment_ref_count(((struct sType*)(right_value248=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value246=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 527, "sType")))),((char*)(right_value247=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_156)))),(_Bool)0,info))));
    come_call_finalizer3(right_value246,sType_finalize, 0, 1, 0, 0, __result_obj__);
    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value248,sType_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_163=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_156)),it_166=list$1sTypeph_begin((o2_saved_163));    !list$1sTypeph_end((o2_saved_163));    it_166=list$1sTypeph_next((o2_saved_163))    ){
        list$1sTypeph_push_back(type_162->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=sType_clone(it_166)))));
        come_call_finalizer3(right_value249,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer3(o2_saved_163,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 533, "CVALUE"))));
    come_call_finalizer3(right_value250,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    num_string_170=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value252=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value251=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 535, "buffer"))))))));
    come_call_finalizer3(right_value251,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value252,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(num_string_170,"1");
    type2_171=(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=solve_generics(type_162,type_162,info))));
    come_call_finalizer3(right_value253,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type_name_172=(char*)come_increment_ref_count(((char*)(right_value254=make_type_name_string(type2_171,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj89=obj_value_169->c_value;
    obj_value_169->c_value=(char*)come_increment_ref_count(((char*)(right_value256=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_172,type_name_172,((char*)(right_value255=buffer_to_string(num_string_170))),info->sname,info->sline,type_name_172))));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type3_173=(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=sType_clone(type2_171))));
    come_call_finalizer3(right_value257,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type3_173->mPointerNum++;
    type3_173->mHeap=(_Bool)1;
    type2_171->mHeap=(_Bool)1;
    __dec_obj90=obj_value_169->type;
    obj_value_169->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=sType_clone(type2_171))));
    come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value258,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj91=obj_value_169->c_value;
    obj_value_169->c_value=(char*)come_increment_ref_count(((char*)(right_value259=append_object_to_right_values(obj_value_169->c_value,(struct sType*)come_increment_ref_count(type3_173),info))));
    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    obj_value_169->type->mPointerNum++;
    obj_value_169->var=((void*)0);
    obj_type_174=(struct sType*)come_increment_ref_count(((struct sType*)(right_value260=sType_clone(type2_171))));
    come_call_finalizer3(right_value260,sType_finalize, 0, 1, 0, 0, __result_obj__);
    fun_name_175="initialize";
    generics_fun_name_176=(char*)come_increment_ref_count(((char*)(right_value263=string_to_string(((char*)(right_value262=make_generics_function(obj_type_174,(char*)come_increment_ref_count(((char*)(right_value261=__builtin_string(fun_name_175)))),info,(_Bool)1)))))));
    right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_177=map$2charphsFunph_at(info->funcs,generics_fun_name_176,((void*)0));
    if(_if_conditional190=fun_177==((void*)0),    _if_conditional190) {
        __dec_obj92=generics_fun_name_176;
        generics_fun_name_176=(char*)come_increment_ref_count(((char*)(right_value265=create_method_name(obj_type_174,(_Bool)0,((char*)(right_value264=__builtin_string(fun_name_175))),info,(_Bool)1))));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_177=map$2charphsFunph_at(info->funcs,generics_fun_name_176,((void*)0));
        if(_if_conditional191=fun_177==((void*)0),        _if_conditional191) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_176,info->come_fun->mName);
            __result152__ = (_Bool)1;
            come_call_finalizer3(tuple_types_156,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_157,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_162,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_170,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_171,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_172 = come_decrement_ref_count2(type_name_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_173,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_174,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result152__;
        }
    }
    result_type_178=(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_clone(fun_177->mResultType))));
    come_call_finalizer3(right_value266,sType_finalize, 0, 1, 0, 0, __result_obj__);
    result_type_178->mStatic=(_Bool)0;
    come_params_179=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value268=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value267=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 575, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value267,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value268,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional192=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_177->mParamTypes,0), "06str.c", 577, 4))->mHeap&&obj_value_169->type->mHeap,    _if_conditional192) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_177->mParamTypes,0), "06str.c", 578, 5)),obj_value_169->type,obj_value_169,info);
    }
    list$1CVALUEph_push_back(come_params_179,(struct CVALUE*)come_increment_ref_count(obj_value_169));
    i_180=1;
    for(    o2_saved_181=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_157)),it_182=list$1CVALUEph_begin((o2_saved_181));    !list$1CVALUEph_end((o2_saved_181));    it_182=list$1CVALUEph_next((o2_saved_181))    ){
        come_value_183=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value269=CVALUE_clone(it_182))));
        come_call_finalizer3(right_value269,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional193=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_177->mParamTypes,i_180), "06str.c", 586, 6))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_177->mParamTypes,i_180), "06str.c", 586, 7))->mHeap&&come_value_183->type->mHeap,        _if_conditional193) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_177->mParamTypes,i_180), "06str.c", 587, 8)),come_value_183->type,come_value_183,info);
        }
        list$1CVALUEph_push_back(come_params_179,(struct CVALUE*)come_increment_ref_count(come_value_183));
        i_180++;
        come_call_finalizer3(come_value_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_181,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_184=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value271=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value270=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 594, "buffer"))))))));
    come_call_finalizer3(right_value270,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value271,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_184,generics_fun_name_176);
    buffer_append_str(buf_184,"(");
    j_185=0;
    for(    o2_saved_186=(struct list$1CVALUEph*)come_increment_ref_count((come_params_179)),it_187=list$1CVALUEph_begin((o2_saved_186));    !list$1CVALUEph_end((o2_saved_186));    it_187=list$1CVALUEph_next((o2_saved_186))    ){
        buffer_append_str(buf_184,it_187->c_value);
        if(_if_conditional194=j_185!=list$1CVALUEph_length(come_params_179)-1,        _if_conditional194) {
            buffer_append_str(buf_184,",");
        }
        j_185++;
    }
    come_call_finalizer3(o2_saved_186,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_184,")");
    come_value2_188=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value272=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 611, "CVALUE"))));
    come_call_finalizer3(right_value272,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj93=come_value2_188->c_value;
    come_value2_188->c_value=(char*)come_increment_ref_count(((char*)(right_value273=buffer_to_string(buf_184))));
    __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(result_type_178->mHeap) {
        __dec_obj94=come_value2_188->c_value;
        come_value2_188->c_value=(char*)come_increment_ref_count(((char*)(right_value275=append_object_to_right_values(((char*)(right_value274=buffer_to_string(buf_184))),(struct sType*)come_increment_ref_count(result_type_178),info))));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj95=come_value2_188->type;
    come_value2_188->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value276=sType_clone(result_type_178))));
    come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value276,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value2_188->type->mStatic=(_Bool)0;
    come_value2_188->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value277=buffer_to_string(buf_184))));
    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_188));
    __result153__ = (_Bool)1;
    come_call_finalizer3(tuple_types_156,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_157,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_162,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_170,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_171,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_172 = come_decrement_ref_count2(type_name_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_173,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_174,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_178,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_179,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_184,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result153__;
    come_call_finalizer3(tuple_types_156,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_157,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_162,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_170,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_171,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_172 = come_decrement_ref_count2(type_name_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_173,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_174,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_178,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_179,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_184,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional182;
struct CVALUE* __result143__;
void* right_value241;
struct CVALUE* result_161;
_Bool _if_conditional183;
void* right_value242;
char* __dec_obj87;
_Bool _if_conditional184;
void* right_value243;
struct sType* __dec_obj88;
_Bool _if_conditional185;
struct CVALUE* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value241 = (void*)0;
memset(&result_161, 0, sizeof(struct CVALUE*));
right_value242 = (void*)0;
right_value243 = (void*)0;
            if(_if_conditional182=self==(void*)0,            _if_conditional182) {
                __result143__ = __result_obj__ = (void*)0;
                return __result143__;
            }
            result_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
            come_call_finalizer3(right_value241,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional183=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional183) {
                __dec_obj87=result_161->c_value;
                result_161->c_value=(char*)come_increment_ref_count(((char*)(right_value242=string_clone(self->c_value))));
                __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional184=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional184) {
                __dec_obj88=result_161->type;
                result_161->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=sType_clone(self->type))));
                come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value243,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional185=self!=((void*)0),            _if_conditional185) {
                result_161->var=self->var;
            }
            __result144__ = __result_obj__ = result_161;
            come_call_finalizer3(result_161,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result144__;
            come_call_finalizer3(result_161,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional186;
struct sType* result_164;
struct sType* __result145__;
_Bool _if_conditional187;
struct sType* __result146__;
struct sType* result_165;
struct sType* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_164, 0, sizeof(struct sType*));
memset(&result_165, 0, sizeof(struct sType*));
        if(_if_conditional186=self==((void*)0),        _if_conditional186) {
            memset(&result_164,0,sizeof(struct sType*));
            __result145__ = __result_obj__ = result_164;
            return __result145__;
        }
        self->it=self->head;
        if(self->it) {
            __result146__ = __result_obj__ = self->it->item;
            return __result146__;
        }
        memset(&result_165,0,sizeof(struct sType*));
        __result147__ = __result_obj__ = result_165;
        return __result147__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
        __result148__ = self==((void*)0)||self->it==((void*)0);
        return __result148__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional188;
struct sType* result_167;
struct sType* __result149__;
_Bool _if_conditional189;
struct sType* __result150__;
struct sType* result_168;
struct sType* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_167, 0, sizeof(struct sType*));
memset(&result_168, 0, sizeof(struct sType*));
        if(_if_conditional188=self==((void*)0)||self->it==((void*)0),        _if_conditional188) {
            memset(&result_167,0,sizeof(struct sType*));
            __result149__ = __result_obj__ = result_167;
            return __result149__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result150__ = __result_obj__ = self->it->item;
            return __result150__;
        }
        memset(&result_168,0,sizeof(struct sType*));
        __result151__ = __result_obj__ = result_168;
        return __result151__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* __dec_obj96;
struct list$1sNodeph* __dec_obj97;
void* right_value278;
char* __dec_obj98;
struct sMapNode* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
    __dec_obj96=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj96,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj97=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj97,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->sline=info->sline;
    __dec_obj98=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value278=__builtin_string(info->sname))));
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result154__ = __result_obj__ = self;
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result154__;
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sMapNode_terminated(struct sMapNode* self){
void* __result_obj__;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    __result155__ = (_Bool)0;
    return __result155__;
}

char* sMapNode_kind(struct sMapNode* self){
void* __result_obj__;
void* right_value279;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value279 = (void*)0;
    __result156__ = __result_obj__ = ((char*)(right_value279=__builtin_string("sMapNode")));
    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result156__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* map_key_elements_189;
struct list$1sNodeph* map_elements_190;
void* right_value280;
void* right_value281;
struct list$1CVALUEph* key_params_191;
void* right_value282;
void* right_value283;
struct list$1CVALUEph* element_params_192;
struct sType* map_key_type_193;
struct sType* map_element_type_194;
int i_195;
struct sNode* key_elements_199;
struct sNode* elements_200;
_Bool _if_conditional201;
_Bool __result159__;
void* right_value284;
struct CVALUE* come_value_201;
_Bool _if_conditional202;
void* right_value285;
_Bool _if_conditional203;
_Bool __result160__;
void* right_value286;
struct CVALUE* come_value2_202;
_Bool _if_conditional204;
void* right_value287;
void* right_value288;
struct sType* __dec_obj99;
void* right_value289;
struct sType* __dec_obj100;
static int map_value_num_203=0;
void* right_value290;
struct sType* key_type_values_204;
void* right_value291;
void* right_value292;
char* var_name_205;
void* right_value293;
struct sVar* var__206;
void* right_value294;
void* right_value295;
struct sType* element_type_values_207;
void* right_value296;
void* right_value297;
char* var_name2_208;
void* right_value298;
struct sVar* var2__209;
void* right_value299;
void* right_value300;
void* right_value301;
struct buffer* source_210;
int i_211;
struct CVALUE* key_param_212;
struct CVALUE* element_param_213;
_Bool _if_conditional205;
void* right_value302;
void* right_value303;
_Bool _if_conditional206;
void* right_value304;
void* right_value305;
void* right_value306;
void* right_value307;
void* right_value308;
struct sType* map_type_214;
void* right_value309;
void* right_value310;
void* right_value311;
struct sType* obj_type_215;
char* fun_name_216;
void* right_value312;
void* right_value313;
void* right_value314;
char* generics_fun_name_217;
struct sFun* fun_218;
_Bool _if_conditional207;
void* right_value315;
void* right_value316;
char* __dec_obj101;
_Bool _if_conditional208;
_Bool __result161__;
void* right_value317;
struct sType* result_type_219;
struct sType* type_220;
void* right_value318;
struct CVALUE* obj_value_221;
void* right_value319;
void* right_value320;
struct buffer* num_string_222;
void* right_value321;
struct sType* type2_223;
void* right_value322;
char* type_name_224;
void* right_value323;
void* right_value324;
char* __dec_obj102;
void* right_value325;
struct sType* type3_225;
void* right_value326;
struct sType* __dec_obj103;
void* right_value327;
char* __dec_obj104;
void* right_value328;
void* right_value329;
struct list$1CVALUEph* come_params_226;
_Bool _if_conditional209;
void* right_value330;
struct CVALUE* come_value2_227;
void* right_value331;
char* __dec_obj105;
struct sType* __dec_obj106;
void* right_value332;
struct CVALUE* come_value3_228;
void* right_value333;
char* __dec_obj107;
struct sType* __dec_obj108;
void* right_value334;
struct CVALUE* come_value4_229;
void* right_value335;
char* __dec_obj109;
struct sType* __dec_obj110;
void* right_value336;
void* right_value337;
struct buffer* buf_230;
int j_231;
struct list$1CVALUEph* o2_saved_232;
struct CVALUE* it_233;
_Bool _if_conditional210;
void* right_value338;
struct CVALUE* come_value5_234;
void* right_value339;
char* __dec_obj111;
_Bool _if_conditional211;
void* right_value340;
void* right_value341;
char* __dec_obj112;
void* right_value342;
struct sType* __dec_obj113;
void* right_value343;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&map_key_elements_189, 0, sizeof(struct list$1sNodeph*));
memset(&map_elements_190, 0, sizeof(struct list$1sNodeph*));
right_value280 = (void*)0;
right_value281 = (void*)0;
memset(&key_params_191, 0, sizeof(struct list$1CVALUEph*));
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&element_params_192, 0, sizeof(struct list$1CVALUEph*));
memset(&map_key_type_193, 0, sizeof(struct sType*));
memset(&map_element_type_194, 0, sizeof(struct sType*));
memset(&i_195, 0, sizeof(int));
memset(&key_elements_199, 0, sizeof(struct sNode*));
memset(&elements_200, 0, sizeof(struct sNode*));
right_value284 = (void*)0;
memset(&come_value_201, 0, sizeof(struct CVALUE*));
right_value285 = (void*)0;
right_value286 = (void*)0;
memset(&come_value2_202, 0, sizeof(struct CVALUE*));
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
memset(&key_type_values_204, 0, sizeof(struct sType*));
right_value291 = (void*)0;
right_value292 = (void*)0;
memset(&var_name_205, 0, sizeof(char*));
right_value293 = (void*)0;
memset(&var__206, 0, sizeof(struct sVar*));
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&element_type_values_207, 0, sizeof(struct sType*));
right_value296 = (void*)0;
right_value297 = (void*)0;
memset(&var_name2_208, 0, sizeof(char*));
right_value298 = (void*)0;
memset(&var2__209, 0, sizeof(struct sVar*));
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
memset(&source_210, 0, sizeof(struct buffer*));
memset(&i_211, 0, sizeof(int));
memset(&key_param_212, 0, sizeof(struct CVALUE*));
memset(&element_param_213, 0, sizeof(struct CVALUE*));
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
memset(&map_type_214, 0, sizeof(struct sType*));
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&obj_type_215, 0, sizeof(struct sType*));
memset(&fun_name_216, 0, sizeof(char*));
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&generics_fun_name_217, 0, sizeof(char*));
memset(&fun_218, 0, sizeof(struct sFun*));
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
memset(&result_type_219, 0, sizeof(struct sType*));
memset(&type_220, 0, sizeof(struct sType*));
right_value318 = (void*)0;
memset(&obj_value_221, 0, sizeof(struct CVALUE*));
right_value319 = (void*)0;
right_value320 = (void*)0;
memset(&num_string_222, 0, sizeof(struct buffer*));
right_value321 = (void*)0;
memset(&type2_223, 0, sizeof(struct sType*));
right_value322 = (void*)0;
memset(&type_name_224, 0, sizeof(char*));
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
memset(&type3_225, 0, sizeof(struct sType*));
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
memset(&come_params_226, 0, sizeof(struct list$1CVALUEph*));
right_value330 = (void*)0;
memset(&come_value2_227, 0, sizeof(struct CVALUE*));
right_value331 = (void*)0;
right_value332 = (void*)0;
memset(&come_value3_228, 0, sizeof(struct CVALUE*));
right_value333 = (void*)0;
right_value334 = (void*)0;
memset(&come_value4_229, 0, sizeof(struct CVALUE*));
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&buf_230, 0, sizeof(struct buffer*));
memset(&j_231, 0, sizeof(int));
memset(&o2_saved_232, 0, sizeof(struct list$1CVALUEph*));
memset(&it_233, 0, sizeof(struct CVALUE*));
right_value338 = (void*)0;
memset(&come_value5_234, 0, sizeof(struct CVALUE*));
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
    map_key_elements_189=self->map_key_elements;
    map_elements_190=self->map_elements;
    key_params_191=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value281=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value280=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 660, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value280,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value281,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    element_params_192=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value283=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value282=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 661, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value282,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value283,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    map_key_type_193=((void*)0);
    map_element_type_194=((void*)0);
    for(    i_195=0;    i_195<list$1sNodeph_length(map_key_elements_189);    i_195++    ){
        key_elements_199=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_key_elements_189,i_195), "06str.c", 666, 9));
        elements_200=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_elements_190,i_195), "06str.c", 667, 10));
        if(_if_conditional201=!node_compile(key_elements_199,info),        _if_conditional201) {
            __result159__ = (_Bool)0;
            come_call_finalizer3(key_params_191,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_192,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_194,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result159__;
        }
        come_value_201=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value284=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value284,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(map_key_type_193) {
            check_assign_type(((char*)(right_value285=xsprintf("invalid map key type"))),map_key_type_193,come_value_201->type,come_value_201,(_Bool)0,(_Bool)1,info);
            right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        list$1CVALUEph_push_back(key_params_191,(struct CVALUE*)come_increment_ref_count(come_value_201));
        if(_if_conditional203=!node_compile(elements_200,info),        _if_conditional203) {
            __result160__ = (_Bool)0;
            come_call_finalizer3(come_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(key_params_191,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_192,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_194,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result160__;
        }
        come_value2_202=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value286=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value286,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(map_element_type_194) {
            check_assign_type(((char*)(right_value287=xsprintf("invalid map element type"))),map_element_type_194,come_value2_202->type,come_value2_202,(_Bool)0,(_Bool)1,info);
            right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        list$1CVALUEph_push_back(element_params_192,(struct CVALUE*)come_increment_ref_count(come_value2_202));
        __dec_obj99=map_key_type_193;
        map_key_type_193=(struct sType*)come_increment_ref_count(((struct sType*)(right_value288=sType_clone(come_value_201->type))));
        come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value288,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj100=map_element_type_194;
        map_element_type_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value289=sType_clone(come_value2_202->type))));
        come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value289,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(come_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    key_type_values_204=(struct sType*)come_increment_ref_count(((struct sType*)(right_value290=sType_clone(map_key_type_193))));
    come_call_finalizer3(right_value290,sType_finalize, 0, 1, 0, 0, __result_obj__);
    list$1sNodeph_push_back(key_type_values_204->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value291=create_int_node(list$1CVALUEph_length(key_params_191),info)))));
    if(right_value291) { right_value291 = come_decrement_ref_count2(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    key_type_values_204->mHeap=(_Bool)0;
    var_name_205=(char*)come_increment_ref_count(((char*)(right_value292=xsprintf("__map_keys%d__",++map_value_num_203))));
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_variable_to_table(var_name_205,(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=sType_clone(key_type_values_204)))),info);
    come_call_finalizer3(right_value293,sType_finalize, 0, 1, 0, 0, __result_obj__);
    var__206=get_variable_from_table(info->lv_table,var_name_205);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value294=make_define_var(key_type_values_204,var__206->mCValueName,(_Bool)0,info))));
    right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    element_type_values_207=(struct sType*)come_increment_ref_count(((struct sType*)(right_value295=sType_clone(map_element_type_194))));
    come_call_finalizer3(right_value295,sType_finalize, 0, 1, 0, 0, __result_obj__);
    list$1sNodeph_push_back(element_type_values_207->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value296=create_int_node(list$1CVALUEph_length(element_params_192),info)))));
    if(right_value296) { right_value296 = come_decrement_ref_count2(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    element_type_values_207->mHeap=(_Bool)0;
    var_name2_208=(char*)come_increment_ref_count(((char*)(right_value297=xsprintf("__map_element%d__",map_value_num_203))));
    right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_variable_to_table(var_name2_208,(struct sType*)come_increment_ref_count(((struct sType*)(right_value298=sType_clone(element_type_values_207)))),info);
    come_call_finalizer3(right_value298,sType_finalize, 0, 1, 0, 0, __result_obj__);
    var2__209=get_variable_from_table(info->lv_table,var_name2_208);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value299=make_define_var(element_type_values_207,var2__209->mCValueName,(_Bool)0,info))));
    right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    source_210=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value301=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value300=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 725, "buffer"))))))));
    come_call_finalizer3(right_value300,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value301,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(source_210,"{");
    for(    i_211=0;    i_211<list$1CVALUEph_length(key_params_191);    i_211++    ){
        key_param_212=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(key_params_191,i_211), "06str.c", 730, 11));
        element_param_213=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(element_params_192,i_211), "06str.c", 731, 12));
        if(map_key_type_193->mHeap) {
            buffer_append_str(source_210,((char*)(right_value302=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__206->mCValueName,i_211,key_param_212->c_value))));
            right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            buffer_append_str(source_210,((char*)(right_value303=xsprintf("%s[%d]=%s;\n",var__206->mCValueName,i_211,key_param_212->c_value))));
            right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(map_element_type_194->mHeap) {
            buffer_append_str(source_210,((char*)(right_value304=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var2__209->mCValueName,i_211,element_param_213->c_value))));
            right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            buffer_append_str(source_210,((char*)(right_value305=xsprintf("%s[%d]=%s;\n",var2__209->mCValueName,i_211,element_param_213->c_value))));
            right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    buffer_append_str(source_210,"}");
    add_come_code(info,"%s",((char*)(right_value306=buffer_to_string(source_210))));
    right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    map_type_214=(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value307=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 752, "sType")))),"map",(_Bool)0,info))));
    come_call_finalizer3(right_value307,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value308,sType_finalize, 0, 1, 0, 0, __result_obj__);
    list$1sTypeph_push_back(map_type_214->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value309=sType_clone(map_key_type_193)))));
    come_call_finalizer3(right_value309,sType_finalize, 0, 1, 0, 0, __result_obj__);
    list$1sTypeph_push_back(map_type_214->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_clone(map_element_type_194)))));
    come_call_finalizer3(right_value310,sType_finalize, 0, 1, 0, 0, __result_obj__);
    obj_type_215=(struct sType*)come_increment_ref_count(((struct sType*)(right_value311=sType_clone(map_type_214))));
    come_call_finalizer3(right_value311,sType_finalize, 0, 1, 0, 0, __result_obj__);
    fun_name_216="initialize_with_values";
    generics_fun_name_217=(char*)come_increment_ref_count(((char*)(right_value314=string_to_string(((char*)(right_value313=make_generics_function(obj_type_215,(char*)come_increment_ref_count(((char*)(right_value312=__builtin_string(fun_name_216)))),info,(_Bool)1)))))));
    right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_218=map$2charphsFunph_at(info->funcs,generics_fun_name_217,((void*)0));
    if(_if_conditional207=fun_218==((void*)0),    _if_conditional207) {
        __dec_obj101=generics_fun_name_217;
        generics_fun_name_217=(char*)come_increment_ref_count(((char*)(right_value316=create_method_name(obj_type_215,(_Bool)0,((char*)(right_value315=__builtin_string(fun_name_216))),info,(_Bool)1))));
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_218=map$2charphsFunph_at(info->funcs,generics_fun_name_217,((void*)0));
        if(_if_conditional208=fun_218==((void*)0),        _if_conditional208) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_217,info->come_fun->mName);
            __result161__ = (_Bool)1;
            come_call_finalizer3(key_params_191,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_192,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_194,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(key_type_values_204,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_205 = come_decrement_ref_count2(var_name_205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_values_207,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name2_208 = come_decrement_ref_count2(var_name2_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_210,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_215,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_217 = come_decrement_ref_count2(generics_fun_name_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result161__;
        }
    }
    result_type_219=(struct sType*)come_increment_ref_count(((struct sType*)(right_value317=sType_clone(fun_218->mResultType))));
    come_call_finalizer3(right_value317,sType_finalize, 0, 1, 0, 0, __result_obj__);
    result_type_219->mStatic=(_Bool)0;
    type_220=map_type_214;
    obj_value_221=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value318=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 779, "CVALUE"))));
    come_call_finalizer3(right_value318,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    num_string_222=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value320=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value319=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 781, "buffer"))))))));
    come_call_finalizer3(right_value319,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value320,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(num_string_222,"1");
    type2_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value321=solve_generics(type_220,type_220,info))));
    come_call_finalizer3(right_value321,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type_name_224=(char*)come_increment_ref_count(((char*)(right_value322=make_type_name_string(type2_223,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj102=obj_value_221->c_value;
    obj_value_221->c_value=(char*)come_increment_ref_count(((char*)(right_value324=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_224,type_name_224,((char*)(right_value323=buffer_to_string(num_string_222))),info->sname,info->sline,type_name_224))));
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type3_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value325=sType_clone(type2_223))));
    come_call_finalizer3(right_value325,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type3_225->mPointerNum++;
    type3_225->mHeap=(_Bool)1;
    type2_223->mHeap=(_Bool)1;
    __dec_obj103=obj_value_221->type;
    obj_value_221->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value326=sType_clone(type2_223))));
    come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value326,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj104=obj_value_221->c_value;
    obj_value_221->c_value=(char*)come_increment_ref_count(((char*)(right_value327=append_object_to_right_values(obj_value_221->c_value,(struct sType*)come_increment_ref_count(type3_225),info))));
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    obj_value_221->type->mPointerNum++;
    obj_value_221->var=((void*)0);
    come_params_226=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value329=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value328=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 800, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value328,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value329,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional209=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_218->mParamTypes,0), "06str.c", 802, 13))->mHeap&&obj_value_221->type->mHeap,    _if_conditional209) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_218->mParamTypes,0), "06str.c", 803, 14)),obj_value_221->type,obj_value_221,info);
    }
    list$1CVALUEph_push_back(come_params_226,(struct CVALUE*)come_increment_ref_count(obj_value_221));
    come_value2_227=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value330=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 807, "CVALUE"))));
    come_call_finalizer3(right_value330,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj105=come_value2_227->c_value;
    come_value2_227->c_value=(char*)come_increment_ref_count(((char*)(right_value331=xsprintf("%d",list$1CVALUEph_length(key_params_191)))));
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj106=come_value2_227->type;
    come_value2_227->type=((void*)0);
    come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_227->var=((void*)0);
    list$1CVALUEph_push_back(come_params_226,(struct CVALUE*)come_increment_ref_count(come_value2_227));
    come_value3_228=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value332=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 815, "CVALUE"))));
    come_call_finalizer3(right_value332,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj107=come_value3_228->c_value;
    come_value3_228->c_value=(char*)come_increment_ref_count(((char*)(right_value333=xsprintf("%s",var__206->mCValueName))));
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj108=come_value3_228->type;
    come_value3_228->type=((void*)0);
    come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_228->var=((void*)0);
    list$1CVALUEph_push_back(come_params_226,(struct CVALUE*)come_increment_ref_count(come_value3_228));
    come_value4_229=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value334=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 823, "CVALUE"))));
    come_call_finalizer3(right_value334,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj109=come_value4_229->c_value;
    come_value4_229->c_value=(char*)come_increment_ref_count(((char*)(right_value335=xsprintf("%s",var2__209->mCValueName))));
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj110=come_value4_229->type;
    come_value4_229->type=((void*)0);
    come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_229->var=((void*)0);
    list$1CVALUEph_push_back(come_params_226,(struct CVALUE*)come_increment_ref_count(come_value4_229));
    buf_230=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value337=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value336=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 831, "buffer"))))))));
    come_call_finalizer3(right_value336,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value337,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_230,generics_fun_name_217);
    buffer_append_str(buf_230,"(");
    j_231=0;
    for(    o2_saved_232=(struct list$1CVALUEph*)come_increment_ref_count((come_params_226)),it_233=list$1CVALUEph_begin((o2_saved_232));    !list$1CVALUEph_end((o2_saved_232));    it_233=list$1CVALUEph_next((o2_saved_232))    ){
        buffer_append_str(buf_230,it_233->c_value);
        if(_if_conditional210=j_231!=list$1CVALUEph_length(come_params_226)-1,        _if_conditional210) {
            buffer_append_str(buf_230,",");
        }
        j_231++;
    }
    come_call_finalizer3(o2_saved_232,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_230,")");
    come_value5_234=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value338=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 848, "CVALUE"))));
    come_call_finalizer3(right_value338,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj111=come_value5_234->c_value;
    come_value5_234->c_value=(char*)come_increment_ref_count(((char*)(right_value339=buffer_to_string(buf_230))));
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(result_type_219->mHeap) {
        __dec_obj112=come_value5_234->c_value;
        come_value5_234->c_value=(char*)come_increment_ref_count(((char*)(right_value341=append_object_to_right_values(((char*)(right_value340=buffer_to_string(buf_230))),(struct sType*)come_increment_ref_count(result_type_219),info))));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj113=come_value5_234->type;
    come_value5_234->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value342=sType_clone(result_type_219))));
    come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value342,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value5_234->type->mStatic=(_Bool)0;
    come_value5_234->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value343=buffer_to_string(buf_230))));
    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_234));
    __result162__ = (_Bool)1;
    come_call_finalizer3(key_params_191,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_params_192,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_key_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_element_type_194,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(key_type_values_204,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_205 = come_decrement_ref_count2(var_name_205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_values_207,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name2_208 = come_decrement_ref_count2(var_name2_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_210,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_215,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_217 = come_decrement_ref_count2(generics_fun_name_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_219,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_221,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_222,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_223,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_224 = come_decrement_ref_count2(type_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_225,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_226,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_227,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_228,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_229,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_230,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value5_234,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result162__;
    come_call_finalizer3(key_params_191,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_params_192,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_key_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_element_type_194,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(key_type_values_204,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_205 = come_decrement_ref_count2(var_name_205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_values_207,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name2_208 = come_decrement_ref_count2(var_name2_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_210,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_215,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_217 = come_decrement_ref_count2(generics_fun_name_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_219,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_221,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_222,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_223,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_224 = come_decrement_ref_count2(type_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_225,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_226,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_227,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_228,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_229,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_230,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value5_234,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool _if_conditional199;
struct list_item$1sNodeph* it_196;
int i_197;
_Bool _while_condtional20;
_Bool _if_conditional200;
struct sNode* __result157__;
struct sNode* default_value_198;
struct sNode* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_196, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_197, 0, sizeof(int));
memset(&default_value_198, 0, sizeof(struct sNode*));
            if(_if_conditional199=position<0,            _if_conditional199) {
                position+=self->len;
            }
            it_196=self->head;
            i_197=0;
            while(_while_condtional20=it_196!=((void*)0),            _while_condtional20) {
                if(_if_conditional200=position==i_197,                _if_conditional200) {
                    __result157__ = __result_obj__ = it_196->item;
                    return __result157__;
                }
                it_196=it_196->next;
                i_197++;
            }
            memset(&default_value_198,0,sizeof(struct sNode*));
            __result158__ = __result_obj__ = default_value_198;
            if(default_value_198) { default_value_198 = come_decrement_ref_count2(default_value_198, ((struct sNode*)default_value_198)->finalize, ((struct sNode*)default_value_198)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result158__;
            if(default_value_198) { default_value_198 = come_decrement_ref_count2(default_value_198, ((struct sNode*)default_value_198)->finalize, ((struct sNode*)default_value_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* expression_node_v96(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional212;
int sline_235;
void* right_value344;
void* right_value345;
struct list$1sNodeph* exps_236;
void* right_value346;
void* right_value347;
struct buffer* value_237;
char* head_of_last_line_238;
_Bool _while_condtional21;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
int len_239;
_Bool _while_condtional22;
_Bool _if_conditional219;
_Bool _while_condtional23;
_Bool _if_conditional220;
void* right_value348;
struct sNode* exp_240;
_Bool _if_conditional221;
_Bool _if_conditional222;
int sline2_241;
_Bool _if_conditional223;
void* right_value349;
void* right_value350;
void* right_value351;
struct sNode* _inf_value1;
struct sSStringNode* _inf_obj_value1;
void* right_value356;
struct sNode* __result165__;
_Bool _if_conditional232;
int sline_243;
void* right_value357;
void* right_value358;
struct buffer* value_244;
_Bool _while_condtional24;
_Bool _if_conditional233;
char* p_245;
int sline_246;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
int sline2_247;
_Bool _if_conditional238;
void* right_value359;
void* right_value360;
void* right_value361;
struct sNode* _inf_value2;
struct sStrNode* _inf_obj_value2;
void* right_value365;
struct sNode* __result168__;
_Bool _if_conditional245;
int sline_249;
void* right_value366;
void* right_value367;
struct buffer* buf_250;
_Bool _while_condtional25;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool global_251;
_Bool ignore_case_252;
_Bool _while_condtional26;
_Bool _if_conditional249;
_Bool _if_conditional250;
void* right_value368;
void* right_value369;
void* right_value370;
struct sNode* _inf_value3;
struct sRegexNode* _inf_obj_value3;
void* right_value374;
struct sNode* __result171__;
_Bool _if_conditional259;
int c_254;
_Bool _if_conditional260;
_Bool _if_conditional261;
int n_255;
_Bool _while_condtional27;
_Bool _if_conditional262;
int n_256;
_Bool _while_condtional28;
_Bool _while_condtional29;
unsigned long long int n_259;
_Bool _if_conditional263;
void* right_value375;
void* right_value376;
struct sNode* _inf_value4;
struct sCharNode* _inf_obj_value4;
void* right_value379;
struct sNode* __result174__;
_Bool _if_conditional269;
unsigned int c_261;
_Bool quote_262;
_Bool _if_conditional270;
_Bool _if_conditional271;
int n_263;
_Bool _while_condtional30;
_Bool _if_conditional272;
int n_264;
_Bool _while_condtional31;
_Bool _while_condtional32;
unsigned long long int n_267;
unsigned char p2_268;
_Bool _if_conditional273;
int size_269;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
void* right_value380;
void* right_value381;
struct sNode* _inf_value5;
struct sWCharNode* _inf_obj_value5;
void* right_value384;
struct sNode* __result177__;
_Bool _if_conditional283;
int sline_272;
void* right_value385;
void* right_value386;
struct buffer* value_273;
_Bool _while_condtional33;
_Bool _if_conditional284;
char* p_274;
int sline_275;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
int len_276;
int n_277;
_Bool _while_condtional34;
_Bool _if_conditional288;
_Bool _while_condtional35;
unsigned long int lont_280;
int n_281;
_Bool _if_conditional289;
int sline2_282;
_Bool _if_conditional290;
int len_283;
void* right_value387;
unsigned int* wstr_284;
char* str_285;
_Bool _if_conditional291;
void* right_value388;
void* right_value389;
struct sNode* _inf_value6;
struct sWStringNode* _inf_obj_value6;
void* right_value393;
struct sNode* __result180__;
_Bool _if_conditional298;
int sline_287;
void* right_value394;
void* right_value395;
struct list$1sNodeph* exps_288;
void* right_value396;
void* right_value397;
struct buffer* value_289;
_Bool _while_condtional36;
_Bool _if_conditional299;
char* p_290;
int sline_291;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
void* right_value398;
struct sNode* exp_292;
char* p_293;
_Bool _while_condtional37;
_Bool _if_conditional303;
_Bool _if_conditional304;
int len_294;
_Bool _while_condtional38;
_Bool _if_conditional305;
_Bool _while_condtional39;
_Bool _if_conditional306;
void* right_value399;
struct sNode* exp_295;
_Bool _if_conditional307;
_Bool _if_conditional308;
int sline2_296;
_Bool _if_conditional309;
void* right_value400;
void* right_value401;
void* right_value402;
struct sNode* _inf_value7;
struct sSStringNode* _inf_obj_value7;
void* right_value407;
struct sNode* __result183__;
_Bool _if_conditional318;
char* p_298;
_Bool no_comma_299;
void* right_value408;
struct sNode* node_300;
char* p2_301;
void* right_value409;
void* right_value410;
struct buffer* first_element_source_302;
void* right_value411;
void* right_value412;
struct list$1sNodeph* list_elements_303;
void* right_value413;
void* right_value414;
struct list$1sNodeph* map_keys_304;
void* right_value415;
void* right_value416;
struct list$1sNodeph* map_elements_305;
_Bool _if_conditional319;
_Bool no_comma_306;
void* right_value417;
struct sNode* node2_307;
_Bool _if_conditional320;
void* right_value418;
void* right_value419;
struct sNode* _inf_value8;
struct sMapNode* _inf_obj_value8;
void* right_value424;
struct sNode* __result186__;
int __exception_result_var_b1;
_Bool _while_condtional40;
_Bool no_comma_309;
void* right_value425;
struct sNode* node2_310;
int __exception_result_var_b2;
void* right_value426;
struct sNode* node3_311;
_Bool _if_conditional329;
_Bool _if_conditional330;
_Bool _if_conditional331;
void* right_value427;
void* right_value428;
struct sNode* _inf_value9;
struct sMapNode* _inf_obj_value9;
void* right_value433;
struct sNode* __result189__;
_Bool _if_conditional340;
_Bool _if_conditional341;
_Bool _while_condtional41;
_Bool no_comma_313;
void* right_value434;
struct sNode* node2_314;
_Bool _if_conditional342;
_Bool _if_conditional343;
_Bool _if_conditional344;
_Bool _if_conditional345;
void* right_value435;
void* right_value436;
struct sNode* _inf_value10;
struct sListNode* _inf_obj_value10;
void* right_value440;
struct sNode* __result192__;
void* right_value441;
struct sNode* __exception_result_var_b3;
struct sNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sline_235, 0, sizeof(int));
right_value344 = (void*)0;
right_value345 = (void*)0;
memset(&exps_236, 0, sizeof(struct list$1sNodeph*));
right_value346 = (void*)0;
right_value347 = (void*)0;
memset(&value_237, 0, sizeof(struct buffer*));
memset(&head_of_last_line_238, 0, sizeof(char*));
memset(&len_239, 0, sizeof(int));
right_value348 = (void*)0;
memset(&exp_240, 0, sizeof(struct sNode*));
memset(&sline2_241, 0, sizeof(int));
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value356 = (void*)0;
memset(&sline_243, 0, sizeof(int));
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&value_244, 0, sizeof(struct buffer*));
memset(&p_245, 0, sizeof(char*));
memset(&sline_246, 0, sizeof(int));
memset(&sline2_247, 0, sizeof(int));
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
right_value365 = (void*)0;
memset(&sline_249, 0, sizeof(int));
right_value366 = (void*)0;
right_value367 = (void*)0;
memset(&buf_250, 0, sizeof(struct buffer*));
memset(&global_251, 0, sizeof(_Bool));
memset(&ignore_case_252, 0, sizeof(_Bool));
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value374 = (void*)0;
memset(&c_254, 0, sizeof(int));
memset(&n_255, 0, sizeof(int));
memset(&n_256, 0, sizeof(int));
memset(&n_259, 0, sizeof(unsigned long long int));
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value379 = (void*)0;
memset(&c_261, 0, sizeof(unsigned int));
memset(&quote_262, 0, sizeof(_Bool));
memset(&n_263, 0, sizeof(int));
memset(&n_264, 0, sizeof(int));
memset(&n_267, 0, sizeof(unsigned long long int));
memset(&p2_268, 0, sizeof(unsigned char));
memset(&size_269, 0, sizeof(int));
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value384 = (void*)0;
memset(&sline_272, 0, sizeof(int));
right_value385 = (void*)0;
right_value386 = (void*)0;
memset(&value_273, 0, sizeof(struct buffer*));
memset(&p_274, 0, sizeof(char*));
memset(&sline_275, 0, sizeof(int));
memset(&len_276, 0, sizeof(int));
memset(&n_277, 0, sizeof(int));
memset(&lont_280, 0, sizeof(unsigned long int));
memset(&n_281, 0, sizeof(int));
memset(&sline2_282, 0, sizeof(int));
memset(&len_283, 0, sizeof(int));
right_value387 = (void*)0;
memset(&wstr_284, 0, sizeof(unsigned int*));
memset(&str_285, 0, sizeof(char*));
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value393 = (void*)0;
memset(&sline_287, 0, sizeof(int));
right_value394 = (void*)0;
right_value395 = (void*)0;
memset(&exps_288, 0, sizeof(struct list$1sNodeph*));
right_value396 = (void*)0;
right_value397 = (void*)0;
memset(&value_289, 0, sizeof(struct buffer*));
memset(&p_290, 0, sizeof(char*));
memset(&sline_291, 0, sizeof(int));
right_value398 = (void*)0;
memset(&exp_292, 0, sizeof(struct sNode*));
memset(&p_293, 0, sizeof(char*));
memset(&len_294, 0, sizeof(int));
right_value399 = (void*)0;
memset(&exp_295, 0, sizeof(struct sNode*));
memset(&sline2_296, 0, sizeof(int));
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value407 = (void*)0;
memset(&p_298, 0, sizeof(char*));
memset(&no_comma_299, 0, sizeof(_Bool));
right_value408 = (void*)0;
memset(&node_300, 0, sizeof(struct sNode*));
memset(&p2_301, 0, sizeof(char*));
right_value409 = (void*)0;
right_value410 = (void*)0;
memset(&first_element_source_302, 0, sizeof(struct buffer*));
right_value411 = (void*)0;
right_value412 = (void*)0;
memset(&list_elements_303, 0, sizeof(struct list$1sNodeph*));
right_value413 = (void*)0;
right_value414 = (void*)0;
memset(&map_keys_304, 0, sizeof(struct list$1sNodeph*));
right_value415 = (void*)0;
right_value416 = (void*)0;
memset(&map_elements_305, 0, sizeof(struct list$1sNodeph*));
memset(&no_comma_306, 0, sizeof(_Bool));
right_value417 = (void*)0;
memset(&node2_307, 0, sizeof(struct sNode*));
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value424 = (void*)0;
memset(&no_comma_309, 0, sizeof(_Bool));
right_value425 = (void*)0;
memset(&node2_310, 0, sizeof(struct sNode*));
right_value426 = (void*)0;
memset(&node3_311, 0, sizeof(struct sNode*));
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value433 = (void*)0;
memset(&no_comma_313, 0, sizeof(_Bool));
right_value434 = (void*)0;
memset(&node2_314, 0, sizeof(struct sNode*));
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value440 = (void*)0;
right_value441 = (void*)0;
    if(_if_conditional212=*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10,    _if_conditional212) {
        info->p+=4;
        info->sline++;
        sline_235=info->sline;
        exps_236=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value345=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value344=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 877, "list$1sNodeph"))))))));
        come_call_finalizer3(right_value344,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value345,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        value_237=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value347=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value346=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 878, "buffer"))))))));
        come_call_finalizer3(right_value346,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value347,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        head_of_last_line_238=((void*)0);
        while(_while_condtional21=1,        _while_condtional21) {
            if(_if_conditional213=*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34,            _if_conditional213) {
                if(head_of_last_line_238) {
                    buffer_trim(value_237,info->p-head_of_last_line_238);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else {
                if(_if_conditional215=*info->p==37,                _if_conditional215) {
                    buffer_append_char(value_237,37);
                    buffer_append_char(value_237,37);
                    info->p++;
                }
                else {
                    if(_if_conditional216=*info->p==34,                    _if_conditional216) {
                        buffer_append_char(value_237,92);
                        buffer_append_char(value_237,34);
                        info->p++;
                    }
                    else {
                        if(_if_conditional217=*info->p==92,                        _if_conditional217) {
                            buffer_append_char(value_237,92);
                            info->p++;
                            if(_if_conditional218=xisdigit(*info->p),                            _if_conditional218) {
                                len_239=0;
                                while(_while_condtional22=xisdigit(*info->p)&&len_239<3,                                _while_condtional22) {
                                    buffer_append_char(value_237,*info->p);
                                    info->p++;
                                    len_239++;
                                }
                            }
                            else {
                                if(_if_conditional219=*info->p==120||*info->p==88,                                _if_conditional219) {
                                    buffer_append_char(value_237,*info->p);
                                    info->p++;
                                    while(_while_condtional23=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                    _while_condtional23) {
                                        buffer_append_char(value_237,*info->p);
                                        info->p++;
                                    }
                                }
                                else {
                                    if(_if_conditional220=*info->p==123,                                    _if_conditional220) {
                                        info->p++;
                                        exp_240=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value348=expression_v13(info))));
                                        if(right_value348) { right_value348 = come_decrement_ref_count2(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        list$1sNodeph_add(exps_236,(struct sNode*)come_increment_ref_count(exp_240));
                                        if(_if_conditional221=*info->p==125,                                        _if_conditional221) {
                                            info->p++;
                                        }
                                        buffer_append_str(value_237,"%s");
                                        if(exp_240) { exp_240 = come_decrement_ref_count2(exp_240, ((struct sNode*)exp_240)->finalize, ((struct sNode*)exp_240)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        switch (*info->p) {
                                            case 48:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                            case 110:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                            case 116:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                            case 114:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                            case 118:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                            case 102:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                            case 97:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                            case 98:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                            case 92:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                            default:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional222=*info->p==0,                            _if_conditional222) {
                                sline2_241=info->sline;
                                info->sline=sline_235;
                                err_msg(info,"close \" to make embbeded string value");
                                exit(2);
                            }
                            else {
                                if(_if_conditional223=*info->p==10,                                _if_conditional223) {
                                    buffer_append_char(value_237,92);
                                    buffer_append_char(value_237,110);
                                    info->p++;
                                    info->sline++;
                                    head_of_last_line_238=info->p;
                                }
                                else {
                                    buffer_append_char(value_237,*info->p);
                                    info->p++;
                                }
                            }
                        }
                    }
                }
            }
        }
        skip_spaces_and_lf(info);
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1027, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sSStringNode*)(right_value351=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value349=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1027, "sSStringNode")))),(char*)come_increment_ref_count(((char*)(right_value350=buffer_to_string(value_237)))),(struct list$1sNodeph*)come_increment_ref_count(exps_236),sline_235,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sSStringNode_finalize;
        _inf_value1->clone=(void*)sSStringNode_clone;
        _inf_value1->compile=(void*)sSStringNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sSStringNode_terminated;
        _inf_value1->kind=(void*)sSStringNode_kind;
        __result165__ = __result_obj__ = ((struct sNode*)(right_value356=_inf_value1));
        come_call_finalizer3(exps_236,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_237,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value349,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value351,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value356) { right_value356 = come_decrement_ref_count2(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result165__;
        come_call_finalizer3(exps_236,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_237,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional232=*info->p==34,        _if_conditional232) {
            info->p++;
            sline_243=info->sline;
            value_244=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value358=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value357=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1035, "buffer"))))))));
            come_call_finalizer3(right_value357,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value358,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            while(_while_condtional24=1,            _while_condtional24) {
                if(_if_conditional233=*info->p==34,                _if_conditional233) {
                    info->p++;
                    p_245=info->p;
                    sline_246=info->sline;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    if(_if_conditional234=*info->p==34,                    _if_conditional234) {
                        info->p++;
                    }
                    else {
                        info->p=p_245;
                        info->sline=sline_246;
                        break;
                    }
                }
                else {
                    if(_if_conditional235=*info->p==92,                    _if_conditional235) {
                        buffer_append_char(value_244,92);
                        info->p++;
                        if(_if_conditional236=*info->p==34,                        _if_conditional236) {
                            buffer_append_char(value_244,34);
                            info->p++;
                        }
                        else {
                            buffer_append_char(value_244,*info->p);
                            info->p++;
                        }
                    }
                    else {
                        if(_if_conditional237=*info->p==0,                        _if_conditional237) {
                            sline2_247=info->sline;
                            info->sline=sline_243;
                            err_msg(info,"close \" to make c string value");
                            info->sline=sline2_247;
                            exit(2);
                        }
                        else {
                            if(_if_conditional238=*info->p==10,                            _if_conditional238) {
                                info->sline++;
                            }
                            buffer_append_char(value_244,*info->p);
                            info->p++;
                        }
                    }
                }
            }
            skip_spaces_and_lf(info);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1087, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStrNode*)(right_value361=sStrNode_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value359=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1087, "sStrNode")))),(char*)come_increment_ref_count(((char*)(right_value360=buffer_to_string(value_244)))),sline_243,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStrNode_finalize;
            _inf_value2->clone=(void*)sStrNode_clone;
            _inf_value2->compile=(void*)sStrNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sStrNode_terminated;
            _inf_value2->kind=(void*)sStrNode_kind;
            __result168__ = __result_obj__ = ((struct sNode*)(right_value365=_inf_value2));
            come_call_finalizer3(value_244,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value359,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value361,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value365) { right_value365 = come_decrement_ref_count2(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result168__;
            come_call_finalizer3(value_244,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional245=*info->p==47,            _if_conditional245) {
                info->p++;
                sline_249=info->sline;
                buf_250=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value367=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value366=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1094, "buffer"))))))));
                come_call_finalizer3(right_value366,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value367,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                while(_while_condtional25=(_Bool)1,                _while_condtional25) {
                    if(_if_conditional246=*info->p==92&&*(info->p+1)==47,                    _if_conditional246) {
                        info->p++;
                        buffer_append_char(buf_250,*info->p);
                        info->p++;
                    }
                    else {
                        if(_if_conditional247=*info->p==47,                        _if_conditional247) {
                            info->p++;
                            break;
                        }
                        else {
                            if(_if_conditional248=*info->p==0,                            _if_conditional248) {
                                err_msg(info,"require closing / for regex");
                                exit(5);
                            }
                            else {
                                buffer_append_char(buf_250,*info->p);
                                info->p++;
                            }
                        }
                    }
                }
                global_251=(_Bool)0;
                ignore_case_252=(_Bool)0;
                while(_while_condtional26=*info->p==103||*info->p==105,                _while_condtional26) {
                    if(_if_conditional249=*info->p==103,                    _if_conditional249) {
                        info->p++;
                        global_251=(_Bool)1;
                    }
                    else {
                        if(_if_conditional250=*info->p==105,                        _if_conditional250) {
                            info->p++;
                            ignore_case_252=(_Bool)1;
                        }
                        else {
                            break;
                        }
                    }
                }
                skip_spaces_and_lf(info);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1133, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sRegexNode*)(right_value370=sRegexNode_initialize((struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value368=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "06str.c", 1133, "sRegexNode")))),(char*)come_increment_ref_count(((char*)(right_value369=buffer_to_string(buf_250)))),global_251,ignore_case_252,sline_249,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sRegexNode_finalize;
                _inf_value3->clone=(void*)sRegexNode_clone;
                _inf_value3->compile=(void*)sRegexNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sRegexNode_terminated;
                _inf_value3->kind=(void*)sRegexNode_kind;
                __result171__ = __result_obj__ = ((struct sNode*)(right_value374=_inf_value3));
                come_call_finalizer3(buf_250,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value368,sRegexNode_finalize, 0, 1, 0, 0, __result_obj__);
                right_value369 = come_decrement_ref_count2(right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value370,sRegexNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value374) { right_value374 = come_decrement_ref_count2(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result171__;
                come_call_finalizer3(buf_250,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional259=*info->p==39,                _if_conditional259) {
                    info->p++;
                    if(_if_conditional260=*info->p==92,                    _if_conditional260) {
                        info->p++;
                        if(_if_conditional261=xisdigit(*info->p),                        _if_conditional261) {
                            n_255=0;
                            while(_while_condtional27=xisdigit(*info->p),                            _while_condtional27) {
                                n_255=n_255*8+*info->p-48;
                                info->p++;
                            }
                            c_254=n_255;
                        }
                        else {
                            switch (*info->p) {
                                case 110:
                                c_254=10;
                                info->p++;
                                break;
                                case 116:
                                c_254=9;
                                info->p++;
                                break;
                                case 114:
                                c_254=13;
                                info->p++;
                                break;
                                case 97:
                                c_254=7;
                                info->p++;
                                break;
                                case 102:
                                c_254=12;
                                info->p++;
                                break;
                                case 118:
                                c_254=11;
                                info->p++;
                                break;
                                case 98:
                                c_254=8;
                                info->p++;
                                break;
                                case 92:
                                c_254=92;
                                info->p++;
                                break;
                                case 48:
                                c_254=0;
                                info->p++;
                                if(_if_conditional262=xisdigit(*info->p),                                _if_conditional262) {
                                    n_256=0;
                                    while(_while_condtional28=xisdigit(*info->p),                                    _while_condtional28) {
                                        n_256=n_256*8+*info->p-48;
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    c_254=n_256;
                                }
                                break;
                                case 120:
                                case 88:
                                {
                                    info->p++;
                                    char buf_257[128];
                                    memset(&buf_257, 0, sizeof(char)                                    *(128)                                    );
                                    strncpy(buf_257,"0x",128);
                                    while(_while_condtional29=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                    _while_condtional29) {
                                        char buf2_258[2];
                                        memset(&buf2_258, 0, sizeof(char)                                        *(2)                                        );
                                        buf2_258[0]=*info->p;
                                        buf2_258[1]=0;
                                        info->p++;
                                        strncat(buf_257,buf2_258,128);
                                    }
                                    n_259=__isoc23_strtoll(buf_257,((void*)0),0);
                                    c_254=n_259;
                                }
                                break;
                                default:
                                c_254=*info->p;
                                info->p++;
                                break;
                            }
                        }
                    }
                    else {
                        c_254=*info->p;
                        info->p++;
                    }
                    if(_if_conditional263=*info->p!=39,                    _if_conditional263) {
                        err_msg(info,"close \' to make character value");
                    }
                    else {
                        info->p++;
                        skip_spaces_and_lf(info);
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1250, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count(((struct sCharNode*)(right_value376=sCharNode_initialize((struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value375=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1250, "sCharNode")))),c_254,info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sCharNode_finalize;
                        _inf_value4->clone=(void*)sCharNode_clone;
                        _inf_value4->compile=(void*)sCharNode_compile;
                        _inf_value4->sline=(void*)sNodeBase_sline;
                        _inf_value4->sname=(void*)sNodeBase_sname;
                        _inf_value4->terminated=(void*)sCharNode_terminated;
                        _inf_value4->kind=(void*)sCharNode_kind;
                        __result174__ = __result_obj__ = ((struct sNode*)(right_value379=_inf_value4));
                        come_call_finalizer3(right_value375,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value376,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value379) { right_value379 = come_decrement_ref_count2(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result174__;
                    }
                }
                else {
                    if(_if_conditional269=*info->p==76&&*(info->p+1)==39,                    _if_conditional269) {
                        info->p+=2;
                        if(_if_conditional270=*info->p==92,                        _if_conditional270) {
                            quote_262=(_Bool)1;
                            info->p++;
                            if(_if_conditional271=xisdigit(*info->p),                            _if_conditional271) {
                                n_263=0;
                                while(_while_condtional30=xisdigit(*info->p),                                _while_condtional30) {
                                    n_263=n_263*8+*info->p-48;
                                    info->p++;
                                }
                                c_261=n_263;
                            }
                            else {
                                switch (*info->p) {
                                    case 110:
                                    c_261=10;
                                    info->p++;
                                    break;
                                    case 116:
                                    c_261=9;
                                    info->p++;
                                    break;
                                    case 114:
                                    c_261=13;
                                    info->p++;
                                    break;
                                    case 97:
                                    c_261=7;
                                    info->p++;
                                    break;
                                    case 92:
                                    c_261=92;
                                    info->p++;
                                    break;
                                    case 48:
                                    c_261=0;
                                    info->p++;
                                    if(_if_conditional272=xisdigit(*info->p),                                    _if_conditional272) {
                                        n_264=0;
                                        while(_while_condtional31=xisdigit(*info->p),                                        _while_condtional31) {
                                            n_264=n_264*8+*info->p-48;
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                        }
                                        c_261=n_264;
                                    }
                                    break;
                                    case 120:
                                    case 88:
                                    {
                                        info->p++;
                                        char buf_265[128];
                                        memset(&buf_265, 0, sizeof(char)                                        *(128)                                        );
                                        strncpy(buf_265,"0x",128);
                                        while(_while_condtional32=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                        _while_condtional32) {
                                            char buf2_266[2];
                                            memset(&buf2_266, 0, sizeof(char)                                            *(2)                                            );
                                            buf2_266[0]=*info->p;
                                            buf2_266[1]=0;
                                            info->p++;
                                            strncat(buf_265,buf2_266,128);
                                        }
                                        n_267=__isoc23_strtoll(buf_265,((void*)0),0);
                                        c_261=n_267;
                                    }
                                    break;
                                    default:
                                    c_261=*info->p;
                                    info->p++;
                                    break;
                                }
                            }
                        }
                        else {
                            quote_262=(_Bool)0;
                            p2_268=*(unsigned char*)info->p;
                            if(_if_conditional273=p2_268>127,                            _if_conditional273) {
                                char str_270[16+1];
                                memset(&str_270, 0, sizeof(char)                                *(16+1)                                );
                                size_269=((p2_268&128)>>7)+((p2_268&64)>>6)+((p2_268&32)>>5)+((p2_268&16)>>4);
                                if(_if_conditional274=size_269>16,                                _if_conditional274) {
                                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                                    info->err_num++;
                                }
                                else {
                                    memcpy(str_270,info->p,size_269);
                                    str_270[size_269]=0;
                                    if(_if_conditional275=mbtowc(&c_261,str_270,size_269)<0,                                    _if_conditional275) {
                                        perror("mbtowc");
                                        err_msg(info,"invalid utf-8 character. mbtowc");
                                        info->err_num++;
                                    }
                                    else {
                                        info->p+=size_269;
                                    }
                                }
                            }
                            else {
                                c_261=*info->p;
                                info->p++;
                            }
                        }
                        if(_if_conditional276=*info->p!=39,                        _if_conditional276) {
                            err_msg(info,"close \' to make character value");
                            info->err_num++;
                        }
                        else {
                            info->p++;
                            skip_spaces_and_lf(info);
                            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1389, "struct sNode");
                            _inf_obj_value5=come_increment_ref_count(((struct sWCharNode*)(right_value381=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value380=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 1389, "sWCharNode")))),c_261,quote_262,info))));
                            _inf_value5->_protocol_obj=_inf_obj_value5;
                            _inf_value5->finalize=(void*)sWCharNode_finalize;
                            _inf_value5->clone=(void*)sWCharNode_clone;
                            _inf_value5->compile=(void*)sWCharNode_compile;
                            _inf_value5->sline=(void*)sNodeBase_sline;
                            _inf_value5->sname=(void*)sNodeBase_sname;
                            _inf_value5->terminated=(void*)sWCharNode_terminated;
                            _inf_value5->kind=(void*)sWCharNode_kind;
                            __result177__ = __result_obj__ = ((struct sNode*)(right_value384=_inf_value5));
                            come_call_finalizer3(right_value380,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value381,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result177__;
                        }
                    }
                    else {
                        if(_if_conditional283=*info->p==76&&*(info->p+1)==34,                        _if_conditional283) {
                            info->p+=2;
                            sline_272=info->sline;
                            value_273=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value386=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value385=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1398, "buffer"))))))));
                            come_call_finalizer3(right_value385,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value386,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            while(_while_condtional33=1,                            _while_condtional33) {
                                if(_if_conditional284=*info->p==34,                                _if_conditional284) {
                                    info->p++;
                                    p_274=info->p;
                                    sline_275=info->sline;
                                    skip_spaces_and_lf(info);
                                    if(_if_conditional285=*info->p==34,                                    _if_conditional285) {
                                        info->p++;
                                    }
                                    else {
                                        info->p=p_274;
                                        info->sline=sline_275;
                                        break;
                                    }
                                }
                                else {
                                    if(_if_conditional286=*info->p==92,                                    _if_conditional286) {
                                        info->p++;
                                        if(_if_conditional287=xisdigit(*info->p),                                        _if_conditional287) {
                                            len_276=0;
                                            n_277=0;
                                            while(_while_condtional34=xisdigit(*info->p)&&len_276<3,                                            _while_condtional34) {
                                                n_277=n_277*8+*info->p-48;
                                                info->p++;
                                                len_276++;
                                            }
                                            buffer_append_char(value_273,n_277);
                                        }
                                        else {
                                            if(_if_conditional288=*info->p==120||*info->p==88,                                            _if_conditional288) {
                                                info->p++;
                                                char buf_278[128];
                                                memset(&buf_278, 0, sizeof(char)                                                *(128)                                                );
                                                strncpy(buf_278,"0x",128);
                                                while(_while_condtional35=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                                _while_condtional35) {
                                                    char buf2_279[2];
                                                    memset(&buf2_279, 0, sizeof(char)                                                    *(2)                                                    );
                                                    buf2_279[0]=*info->p;
                                                    buf2_279[1]=0;
                                                    info->p++;
                                                    strncat(buf_278,buf2_279,128);
                                                }
                                                n_281=__isoc23_strtoll(buf_278,((void*)0),0);
                                                buffer_append_char(value_273,(char)n_281);
                                            }
                                            else {
                                                switch (*info->p) {
                                                    case 48:
                                                    buffer_append_char(value_273,0);
                                                    info->p++;
                                                    break;
                                                    case 110:
                                                    buffer_append_char(value_273,10);
                                                    info->p++;
                                                    break;
                                                    case 116:
                                                    buffer_append_char(value_273,9);
                                                    info->p++;
                                                    break;
                                                    case 114:
                                                    buffer_append_char(value_273,13);
                                                    info->p++;
                                                    break;
                                                    case 118:
                                                    buffer_append_char(value_273,11);
                                                    info->p++;
                                                    break;
                                                    case 102:
                                                    buffer_append_char(value_273,12);
                                                    info->p++;
                                                    break;
                                                    case 97:
                                                    buffer_append_char(value_273,7);
                                                    info->p++;
                                                    break;
                                                    case 98:
                                                    buffer_append_char(value_273,8);
                                                    info->p++;
                                                    break;
                                                    case 92:
                                                    buffer_append_char(value_273,92);
                                                    info->p++;
                                                    break;
                                                    default:
                                                    buffer_append_char(value_273,*info->p);
                                                    info->p++;
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        if(_if_conditional289=*info->p==0,                                        _if_conditional289) {
                                            sline2_282=info->sline;
                                            info->sline=sline_272;
                                            err_msg(info,"close \" to make c string value");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional290=*info->p==10,                                            _if_conditional290) {
                                                info->sline++;
                                            }
                                            buffer_append_char(value_273,*info->p);
                                            info->p++;
                                        }
                                    }
                                }
                            }
                            skip_spaces_and_lf(info);
                            len_283=value_273->len;
                            wstr_284=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value387=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_283+1)), "06str.c", 1521, "int"))));
                            right_value387 = come_decrement_ref_count2(right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            str_285=value_273->buf;
                            if(_if_conditional291=mbstowcs(wstr_284,str_285,len_283+1)<0,                            _if_conditional291) {
                                perror("mbstowcs");
                                exit(1);
                            }
                            wstr_284[len_283]=0;
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1532, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sWStringNode*)(right_value389=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value388=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 1532, "sWStringNode")))),(unsigned int*)come_increment_ref_count(wstr_284),sline_272,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sWStringNode_finalize;
                            _inf_value6->clone=(void*)sWStringNode_clone;
                            _inf_value6->compile=(void*)sWStringNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sWStringNode_terminated;
                            _inf_value6->kind=(void*)sWStringNode_kind;
                            __result180__ = __result_obj__ = ((struct sNode*)(right_value393=_inf_value6));
                            come_call_finalizer3(value_273,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            wstr_284 = come_decrement_ref_count2(wstr_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value388,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value389,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result180__;
                            come_call_finalizer3(value_273,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            wstr_284 = come_decrement_ref_count2(wstr_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(_if_conditional298=(*info->p==115||*info->p==83)&&*(info->p+1)==34,                            _if_conditional298) {
                                info->p+=2;
                                sline_287=info->sline;
                                exps_288=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value395=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value394=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1540, "list$1sNodeph"))))))));
                                come_call_finalizer3(right_value394,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value395,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                value_289=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value397=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value396=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1541, "buffer"))))))));
                                come_call_finalizer3(right_value396,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value397,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                while(_while_condtional36=1,                                _while_condtional36) {
                                    if(_if_conditional299=*info->p==34,                                    _if_conditional299) {
                                        info->p++;
                                        p_290=info->p;
                                        sline_291=info->sline;
                                        skip_spaces_and_lf(info);
                                        if(_if_conditional300=*info->p==34,                                        _if_conditional300) {
                                            info->p++;
                                        }
                                        else {
                                            info->p=p_290;
                                            info->sline=sline_291;
                                            break;
                                        }
                                    }
                                    else {
                                        if(_if_conditional301=*info->p==37,                                        _if_conditional301) {
                                            buffer_append_char(value_289,37);
                                            buffer_append_char(value_289,37);
                                            info->p++;
                                        }
                                        else {
                                            if(_if_conditional302=*info->p==36,                                            _if_conditional302) {
                                                info->p++;
                                                exp_292=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=expression_v13(info))));
                                                if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                list$1sNodeph_add(exps_288,(struct sNode*)come_increment_ref_count(exp_292));
                                                buffer_append_str(value_289,"%s");
                                                p_293=info->p-1;
                                                while(_while_condtional37=*p_293==32||*p_293==9,                                                _while_condtional37) {
                                                    p_293--;
                                                }
                                                info->p=p_293+1;
                                                if(exp_292) { exp_292 = come_decrement_ref_count2(exp_292, ((struct sNode*)exp_292)->finalize, ((struct sNode*)exp_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(_if_conditional303=*info->p==92,                                                _if_conditional303) {
                                                    buffer_append_char(value_289,92);
                                                    info->p++;
                                                    if(_if_conditional304=xisdigit(*info->p),                                                    _if_conditional304) {
                                                        len_294=0;
                                                        while(_while_condtional38=xisdigit(*info->p)&&len_294<3,                                                        _while_condtional38) {
                                                            buffer_append_char(value_289,*info->p);
                                                            info->p++;
                                                            len_294++;
                                                        }
                                                    }
                                                    else {
                                                        if(_if_conditional305=*info->p==120||*info->p==88,                                                        _if_conditional305) {
                                                            buffer_append_char(value_289,*info->p);
                                                            info->p++;
                                                            while(_while_condtional39=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                                            _while_condtional39) {
                                                                buffer_append_char(value_289,*info->p);
                                                                info->p++;
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional306=*info->p==123,                                                            _if_conditional306) {
                                                                info->p++;
                                                                exp_295=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value399=expression_v13(info))));
                                                                if(right_value399) { right_value399 = come_decrement_ref_count2(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                list$1sNodeph_add(exps_288,(struct sNode*)come_increment_ref_count(exp_295));
                                                                if(_if_conditional307=*info->p==125,                                                                _if_conditional307) {
                                                                    info->p++;
                                                                }
                                                                buffer_append_str(value_289,"%s");
                                                                if(exp_295) { exp_295 = come_decrement_ref_count2(exp_295, ((struct sNode*)exp_295)->finalize, ((struct sNode*)exp_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                switch (*info->p) {
                                                                    case 48:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 110:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 116:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 114:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 118:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 102:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 97:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 98:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 92:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    default:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional308=*info->p==0,                                                    _if_conditional308) {
                                                        sline2_296=info->sline;
                                                        info->sline=sline_287;
                                                        err_msg(info,"close \" to make embbeded string value");
                                                        exit(2);
                                                    }
                                                    else {
                                                        if(_if_conditional309=*info->p==10,                                                        _if_conditional309) {
                                                            info->sline++;
                                                        }
                                                        buffer_append_char(value_289,*info->p);
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                skip_spaces_and_lf(info);
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1686, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sSStringNode*)(right_value402=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value400=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1686, "sSStringNode")))),(char*)come_increment_ref_count(((char*)(right_value401=buffer_to_string(value_289)))),(struct list$1sNodeph*)come_increment_ref_count(exps_288),sline_287,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sSStringNode_finalize;
                                _inf_value7->clone=(void*)sSStringNode_clone;
                                _inf_value7->compile=(void*)sSStringNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sSStringNode_terminated;
                                _inf_value7->kind=(void*)sSStringNode_kind;
                                __result183__ = __result_obj__ = ((struct sNode*)(right_value407=_inf_value7));
                                come_call_finalizer3(exps_288,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(value_289,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value400,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                right_value401 = come_decrement_ref_count2(right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value402,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result183__;
                                come_call_finalizer3(exps_288,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(value_289,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                if(_if_conditional318=*info->p==91,                                _if_conditional318) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    p_298=info->p;
                                    no_comma_299=info->no_comma;
                                    info->no_comma=(_Bool)1;
                                    node_300=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value408=expression_v13(info))));
                                    if(right_value408) { right_value408 = come_decrement_ref_count2(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    info->no_comma=no_comma_299;
                                    p2_301=info->p;
                                    first_element_source_302=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value410=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value409=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1703, "buffer"))))))));
                                    come_call_finalizer3(right_value409,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value410,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    buffer_append(first_element_source_302,p_298,p2_301-p_298);
                                    buffer_append_char(first_element_source_302,0);
                                    list_elements_303=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value412=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value411=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1708, "list$1sNodeph"))))))));
                                    come_call_finalizer3(right_value411,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value412,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    map_keys_304=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value414=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value413=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1710, "list$1sNodeph"))))))));
                                    come_call_finalizer3(right_value413,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value414,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    map_elements_305=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value416=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value415=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1711, "list$1sNodeph"))))))));
                                    come_call_finalizer3(right_value415,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value416,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional319=*info->p==58,                                    _if_conditional319) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        list$1sNodeph_push_back(map_keys_304,(struct sNode*)come_increment_ref_count(node_300));
                                        no_comma_306=info->no_comma;
                                        info->no_comma=(_Bool)1;
                                        node2_307=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value417=expression_v13(info))));
                                        if(right_value417) { right_value417 = come_decrement_ref_count2(right_value417, ((struct sNode*)right_value417)->finalize, ((struct sNode*)right_value417)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        info->no_comma=no_comma_306;
                                        list$1sNodeph_push_back(map_elements_305,(struct sNode*)come_increment_ref_count(node2_307));
                                        if(_if_conditional320=*info->p==93,                                        _if_conditional320) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1733, "struct sNode");
                                            _inf_obj_value8=come_increment_ref_count(((struct sMapNode*)(right_value419=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value418=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1733, "sMapNode")))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_304),(struct list$1sNodeph*)come_increment_ref_count(map_elements_305),info))));
                                            _inf_value8->_protocol_obj=_inf_obj_value8;
                                            _inf_value8->finalize=(void*)sMapNode_finalize;
                                            _inf_value8->clone=(void*)sMapNode_clone;
                                            _inf_value8->compile=(void*)sMapNode_compile;
                                            _inf_value8->sline=(void*)sNodeBase_sline;
                                            _inf_value8->sname=(void*)sNodeBase_sname;
                                            _inf_value8->terminated=(void*)sMapNode_terminated;
                                            _inf_value8->kind=(void*)sMapNode_kind;
                                            __result186__ = __result_obj__ = ((struct sNode*)(right_value424=_inf_value8));
                                            if(node2_307) { node2_307 = come_decrement_ref_count2(node2_307, ((struct sNode*)node2_307)->finalize, ((struct sNode*)node2_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer3(first_element_source_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(list_elements_303,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_keys_304,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_elements_305,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value418,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value419,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(right_value424) { right_value424 = come_decrement_ref_count2(right_value424, ((struct sNode*)right_value424)->finalize, ((struct sNode*)right_value424)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result186__;
                                        }
                                        else {
                                            (come_push_stackframe("06str.c", 1736, 15),__exception_result_var_b1=expected_next_character(44,info), come_pop_stackframe(), __exception_result_var_b1);
                                            while(_while_condtional40=(_Bool)1,                                            _while_condtional40) {
                                                no_comma_309=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                node2_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value425=expression_v13(info))));
                                                if(right_value425) { right_value425 = come_decrement_ref_count2(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                info->no_comma=no_comma_309;
                                                list$1sNodeph_push_back(map_keys_304,(struct sNode*)come_increment_ref_count(node2_310));
                                                (come_push_stackframe("06str.c", 1748, 16),__exception_result_var_b2=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b2);
                                                no_comma_309=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                node3_311=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value426=expression_v13(info))));
                                                if(right_value426) { right_value426 = come_decrement_ref_count2(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                info->no_comma=no_comma_309;
                                                list$1sNodeph_push_back(map_elements_305,(struct sNode*)come_increment_ref_count(node3_311));
                                                if(_if_conditional329=*info->p==0,                                                _if_conditional329) {
                                                    err_msg(info,"invalid source end");
                                                    exit(2);
                                                }
                                                else {
                                                    if(_if_conditional330=*info->p==44,                                                    _if_conditional330) {
                                                        info->p++;
                                                        skip_spaces_and_lf(info);
                                                    }
                                                    else {
                                                        if(_if_conditional331=*info->p==93,                                                        _if_conditional331) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            if(node2_310) { node2_310 = come_decrement_ref_count2(node2_310, ((struct sNode*)node2_310)->finalize, ((struct sNode*)node2_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            if(node3_311) { node3_311 = come_decrement_ref_count2(node3_311, ((struct sNode*)node3_311)->finalize, ((struct sNode*)node3_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            break;
                                                        }
                                                        else {
                                                            err_msg(info,"invalid character(%c)(3)",*info->p);
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                if(node2_310) { node2_310 = come_decrement_ref_count2(node2_310, ((struct sNode*)node2_310)->finalize, ((struct sNode*)node2_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node3_311) { node3_311 = come_decrement_ref_count2(node3_311, ((struct sNode*)node3_311)->finalize, ((struct sNode*)node3_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1778, "struct sNode");
                                            _inf_obj_value9=come_increment_ref_count(((struct sMapNode*)(right_value428=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value427=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1778, "sMapNode")))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_304),(struct list$1sNodeph*)come_increment_ref_count(map_elements_305),info))));
                                            _inf_value9->_protocol_obj=_inf_obj_value9;
                                            _inf_value9->finalize=(void*)sMapNode_finalize;
                                            _inf_value9->clone=(void*)sMapNode_clone;
                                            _inf_value9->compile=(void*)sMapNode_compile;
                                            _inf_value9->sline=(void*)sNodeBase_sline;
                                            _inf_value9->sname=(void*)sNodeBase_sname;
                                            _inf_value9->terminated=(void*)sMapNode_terminated;
                                            _inf_value9->kind=(void*)sMapNode_kind;
                                            __result189__ = __result_obj__ = ((struct sNode*)(right_value433=_inf_value9));
                                            if(node2_307) { node2_307 = come_decrement_ref_count2(node2_307, ((struct sNode*)node2_307)->finalize, ((struct sNode*)node2_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer3(first_element_source_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(list_elements_303,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_keys_304,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_elements_305,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value427,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value428,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(right_value433) { right_value433 = come_decrement_ref_count2(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result189__;
                                        }
                                        if(node2_307) { node2_307 = come_decrement_ref_count2(node2_307, ((struct sNode*)node2_307)->finalize, ((struct sNode*)node2_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(_if_conditional340=*info->p==93,                                        _if_conditional340) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            list$1sNodeph_push_back(list_elements_303,(struct sNode*)come_increment_ref_count(node_300));
                                        }
                                        else {
                                            if(_if_conditional341=*info->p==44,                                            _if_conditional341) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                list$1sNodeph_push_back(list_elements_303,(struct sNode*)come_increment_ref_count(node_300));
                                                while(_while_condtional41=(_Bool)1,                                                _while_condtional41) {
                                                    no_comma_313=info->no_comma;
                                                    info->no_comma=(_Bool)1;
                                                    node2_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value434=expression_v13(info))));
                                                    if(right_value434) { right_value434 = come_decrement_ref_count2(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    info->no_comma=no_comma_313;
                                                    list$1sNodeph_push_back(list_elements_303,(struct sNode*)come_increment_ref_count(node2_314));
                                                    if(_if_conditional342=*info->p==0,                                                    _if_conditional342) {
                                                        err_msg(info,"invalid source end");
                                                        exit(2);
                                                    }
                                                    else {
                                                        if(_if_conditional343=*info->p==44,                                                        _if_conditional343) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                        }
                                                        else {
                                                            if(_if_conditional344=*info->p==93,                                                            _if_conditional344) {
                                                                info->p++;
                                                                skip_spaces_and_lf(info);
                                                                if(node2_314) { node2_314 = come_decrement_ref_count2(node2_314, ((struct sNode*)node2_314)->finalize, ((struct sNode*)node2_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                break;
                                                            }
                                                            else {
                                                                err_msg(info,"invalid character(%c)(4)",*info->p);
                                                                exit(2);
                                                            }
                                                        }
                                                    }
                                                    if(node2_314) { node2_314 = come_decrement_ref_count2(node2_314, ((struct sNode*)node2_314)->finalize, ((struct sNode*)node2_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                            }
                                            else {
                                                err_msg(info,"invalid character(%c)(5)",*info->p);
                                                exit(2);
                                            }
                                        }
                                    }
                                    if(_if_conditional345=list$1sNodeph_length(list_elements_303)>0,                                    _if_conditional345) {
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1829, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count(((struct sListNode*)(right_value436=sListNode_initialize((struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value435=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 1829, "sListNode")))),(struct list$1sNodeph*)come_increment_ref_count(list_elements_303),info))));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sListNode_finalize;
                                        _inf_value10->clone=(void*)sListNode_clone;
                                        _inf_value10->compile=(void*)sListNode_compile;
                                        _inf_value10->sline=(void*)sNodeBase_sline;
                                        _inf_value10->sname=(void*)sNodeBase_sname;
                                        _inf_value10->terminated=(void*)sListNode_terminated;
                                        _inf_value10->kind=(void*)sListNode_kind;
                                        __result192__ = __result_obj__ = ((struct sNode*)(right_value440=_inf_value10));
                                        if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(first_element_source_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(list_elements_303,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(map_keys_304,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(map_elements_305,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value435,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value436,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value440) { right_value440 = come_decrement_ref_count2(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result192__;
                                    }
                                    else {
                                    }
                                    if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(first_element_source_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(list_elements_303,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(map_keys_304,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(map_elements_305,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    (come_push_stackframe("06str.c", 1835, 17),__exception_result_var_b3=((struct sNode*)(right_value441=expression_node_v1(info))), come_pop_stackframe(), __exception_result_var_b3);
                                    if(right_value441) { right_value441 = come_decrement_ref_count2(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result193__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result193__;
}

static void sStrNode_finalize(struct sStrNode* self){
void* __result_obj__;
_Bool _if_conditional239;
_Bool _if_conditional240;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional239=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional239) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional240=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional240) {
                    self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__;
_Bool _if_conditional241;
struct sStrNode* __result166__;
void* right_value362;
struct sStrNode* result_248;
_Bool _if_conditional242;
_Bool _if_conditional243;
void* right_value363;
char* __dec_obj117;
_Bool _if_conditional244;
void* right_value364;
char* __dec_obj118;
struct sStrNode* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value362 = (void*)0;
memset(&result_248, 0, sizeof(struct sStrNode*));
right_value363 = (void*)0;
right_value364 = (void*)0;
                if(_if_conditional241=self==(void*)0,                _if_conditional241) {
                    __result166__ = __result_obj__ = (void*)0;
                    return __result166__;
                }
                result_248=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value362=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "sStrNode"))));
                come_call_finalizer3(right_value362,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional242=self!=((void*)0),                _if_conditional242) {
                    result_248->sline=self->sline;
                }
                if(_if_conditional243=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional243) {
                    __dec_obj117=result_248->sname;
                    result_248->sname=(char*)come_increment_ref_count(((char*)(right_value363=string_clone(self->sname))));
                    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional244=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional244) {
                    __dec_obj118=result_248->value;
                    result_248->value=(char*)come_increment_ref_count(((char*)(right_value364=string_clone(self->value))));
                    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result167__ = __result_obj__ = result_248;
                come_call_finalizer3(result_248,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result167__;
                come_call_finalizer3(result_248,sStrNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRegexNode_finalize(struct sRegexNode* self){
void* __result_obj__;
_Bool _if_conditional251;
_Bool _if_conditional252;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional251=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional251) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional252=self!=((void*)0)&&self->str!=((void*)0),                    _if_conditional252) {
                        self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self){
void* __result_obj__;
_Bool _if_conditional253;
struct sRegexNode* __result169__;
void* right_value371;
struct sRegexNode* result_253;
_Bool _if_conditional254;
_Bool _if_conditional255;
void* right_value372;
char* __dec_obj119;
_Bool _if_conditional256;
void* right_value373;
char* __dec_obj120;
_Bool _if_conditional257;
_Bool _if_conditional258;
struct sRegexNode* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value371 = (void*)0;
memset(&result_253, 0, sizeof(struct sRegexNode*));
right_value372 = (void*)0;
right_value373 = (void*)0;
                    if(_if_conditional253=self==(void*)0,                    _if_conditional253) {
                        __result169__ = __result_obj__ = (void*)0;
                        return __result169__;
                    }
                    result_253=(struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value371=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "sRegexNode_clone", 3, "sRegexNode"))));
                    come_call_finalizer3(right_value371,sRegexNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional254=self!=((void*)0),                    _if_conditional254) {
                        result_253->sline=self->sline;
                    }
                    if(_if_conditional255=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional255) {
                        __dec_obj119=result_253->sname;
                        result_253->sname=(char*)come_increment_ref_count(((char*)(right_value372=string_clone(self->sname))));
                        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional256=self!=((void*)0)&&self->str!=((void*)0),                    _if_conditional256) {
                        __dec_obj120=result_253->str;
                        result_253->str=(char*)come_increment_ref_count(((char*)(right_value373=string_clone(self->str))));
                        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional257=self!=((void*)0),                    _if_conditional257) {
                        result_253->global=self->global;
                    }
                    if(_if_conditional258=self!=((void*)0),                    _if_conditional258) {
                        result_253->ignore_case=self->ignore_case;
                    }
                    __result170__ = __result_obj__ = result_253;
                    come_call_finalizer3(result_253,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result170__;
                    come_call_finalizer3(result_253,sRegexNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCharNode_finalize(struct sCharNode* self){
void* __result_obj__;
_Bool _if_conditional264;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional264=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional264) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__;
_Bool _if_conditional265;
struct sCharNode* __result172__;
void* right_value377;
struct sCharNode* result_260;
_Bool _if_conditional266;
_Bool _if_conditional267;
void* right_value378;
char* __dec_obj121;
_Bool _if_conditional268;
struct sCharNode* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value377 = (void*)0;
memset(&result_260, 0, sizeof(struct sCharNode*));
right_value378 = (void*)0;
                            if(_if_conditional265=self==(void*)0,                            _if_conditional265) {
                                __result172__ = __result_obj__ = (void*)0;
                                return __result172__;
                            }
                            result_260=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value377=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "sCharNode"))));
                            come_call_finalizer3(right_value377,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional266=self!=((void*)0),                            _if_conditional266) {
                                result_260->sline=self->sline;
                            }
                            if(_if_conditional267=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional267) {
                                __dec_obj121=result_260->sname;
                                result_260->sname=(char*)come_increment_ref_count(((char*)(right_value378=string_clone(self->sname))));
                                __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional268=self!=((void*)0),                            _if_conditional268) {
                                result_260->value=self->value;
                            }
                            __result173__ = __result_obj__ = result_260;
                            come_call_finalizer3(result_260,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result173__;
                            come_call_finalizer3(result_260,sCharNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sWCharNode_finalize(struct sWCharNode* self){
void* __result_obj__;
_Bool _if_conditional277;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional277=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional277) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__;
_Bool _if_conditional278;
struct sWCharNode* __result175__;
void* right_value382;
struct sWCharNode* result_271;
_Bool _if_conditional279;
_Bool _if_conditional280;
void* right_value383;
char* __dec_obj122;
_Bool _if_conditional281;
_Bool _if_conditional282;
struct sWCharNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value382 = (void*)0;
memset(&result_271, 0, sizeof(struct sWCharNode*));
right_value383 = (void*)0;
                                if(_if_conditional278=self==(void*)0,                                _if_conditional278) {
                                    __result175__ = __result_obj__ = (void*)0;
                                    return __result175__;
                                }
                                result_271=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value382=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "sWCharNode"))));
                                come_call_finalizer3(right_value382,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional279=self!=((void*)0),                                _if_conditional279) {
                                    result_271->sline=self->sline;
                                }
                                if(_if_conditional280=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional280) {
                                    __dec_obj122=result_271->sname;
                                    result_271->sname=(char*)come_increment_ref_count(((char*)(right_value383=string_clone(self->sname))));
                                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional281=self!=((void*)0),                                _if_conditional281) {
                                    result_271->value=self->value;
                                }
                                if(_if_conditional282=self!=((void*)0),                                _if_conditional282) {
                                    result_271->quote=self->quote;
                                }
                                __result176__ = __result_obj__ = result_271;
                                come_call_finalizer3(result_271,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result176__;
                                come_call_finalizer3(result_271,sWCharNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sWStringNode_finalize(struct sWStringNode* self){
void* __result_obj__;
_Bool _if_conditional292;
_Bool _if_conditional293;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional292=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional292) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional293=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional293) {
                                    self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__;
_Bool _if_conditional294;
struct sWStringNode* __result178__;
void* right_value390;
struct sWStringNode* result_286;
_Bool _if_conditional295;
_Bool _if_conditional296;
void* right_value391;
char* __dec_obj123;
_Bool _if_conditional297;
void* right_value392;
unsigned int* __dec_obj124;
struct sWStringNode* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
right_value390 = (void*)0;
memset(&result_286, 0, sizeof(struct sWStringNode*));
right_value391 = (void*)0;
right_value392 = (void*)0;
                                if(_if_conditional294=self==(void*)0,                                _if_conditional294) {
                                    __result178__ = __result_obj__ = (void*)0;
                                    return __result178__;
                                }
                                result_286=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value390=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "sWStringNode"))));
                                come_call_finalizer3(right_value390,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional295=self!=((void*)0),                                _if_conditional295) {
                                    result_286->sline=self->sline;
                                }
                                if(_if_conditional296=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional296) {
                                    __dec_obj123=result_286->sname;
                                    result_286->sname=(char*)come_increment_ref_count(((char*)(right_value391=string_clone(self->sname))));
                                    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value391 = come_decrement_ref_count2(right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional297=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional297) {
                                    __dec_obj124=result_286->value;
                                    result_286->value=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value392=(unsigned int*)come_memdup(self->value, "sWStringNode_clone", 6, "unsigned int*"))));
                                    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result179__ = __result_obj__ = result_286;
                                come_call_finalizer3(result_286,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result179__;
                                come_call_finalizer3(result_286,sWStringNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSStringNode_finalize(struct sSStringNode* self){
void* __result_obj__;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional310=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional310) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional311=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional311) {
                                        self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional312=self!=((void*)0)&&self->exps!=((void*)0),                                    _if_conditional312) {
                                        come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__;
_Bool _if_conditional313;
struct sSStringNode* __result181__;
void* right_value403;
struct sSStringNode* result_297;
_Bool _if_conditional314;
_Bool _if_conditional315;
void* right_value404;
char* __dec_obj125;
_Bool _if_conditional316;
void* right_value405;
char* __dec_obj126;
_Bool _if_conditional317;
void* right_value406;
struct list$1sNodeph* __dec_obj127;
struct sSStringNode* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value403 = (void*)0;
memset(&result_297, 0, sizeof(struct sSStringNode*));
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value406 = (void*)0;
                                    if(_if_conditional313=self==(void*)0,                                    _if_conditional313) {
                                        __result181__ = __result_obj__ = (void*)0;
                                        return __result181__;
                                    }
                                    result_297=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value403=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "sSStringNode"))));
                                    come_call_finalizer3(right_value403,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional314=self!=((void*)0),                                    _if_conditional314) {
                                        result_297->sline=self->sline;
                                    }
                                    if(_if_conditional315=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional315) {
                                        __dec_obj125=result_297->sname;
                                        result_297->sname=(char*)come_increment_ref_count(((char*)(right_value404=string_clone(self->sname))));
                                        __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional316=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional316) {
                                        __dec_obj126=result_297->value;
                                        result_297->value=(char*)come_increment_ref_count(((char*)(right_value405=string_clone(self->value))));
                                        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value405 = come_decrement_ref_count2(right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional317=self!=((void*)0)&&self->exps!=((void*)0),                                    _if_conditional317) {
                                        __dec_obj127=result_297->exps;
                                        result_297->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value406=list$1sNodephp_clone(self->exps))));
                                        come_call_finalizer3(__dec_obj127,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value406,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    __result182__ = __result_obj__ = result_297;
                                    come_call_finalizer3(result_297,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result182__;
                                    come_call_finalizer3(result_297,sSStringNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMapNode_finalize(struct sMapNode* self){
void* __result_obj__;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional332=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional332) {
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional333=self!=((void*)0)&&self->map_key_elements!=((void*)0),                                                _if_conditional333) {
                                                    come_call_finalizer3(self->map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional334=self!=((void*)0)&&self->map_elements!=((void*)0),                                                _if_conditional334) {
                                                    come_call_finalizer3(self->map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__;
_Bool _if_conditional335;
struct sMapNode* __result187__;
void* right_value429;
struct sMapNode* result_312;
_Bool _if_conditional336;
_Bool _if_conditional337;
void* right_value430;
char* __dec_obj131;
_Bool _if_conditional338;
void* right_value431;
struct list$1sNodeph* __dec_obj132;
_Bool _if_conditional339;
void* right_value432;
struct list$1sNodeph* __dec_obj133;
struct sMapNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value429 = (void*)0;
memset(&result_312, 0, sizeof(struct sMapNode*));
right_value430 = (void*)0;
right_value431 = (void*)0;
right_value432 = (void*)0;
                                                if(_if_conditional335=self==(void*)0,                                                _if_conditional335) {
                                                    __result187__ = __result_obj__ = (void*)0;
                                                    return __result187__;
                                                }
                                                result_312=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value429=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "sMapNode"))));
                                                come_call_finalizer3(right_value429,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional336=self!=((void*)0),                                                _if_conditional336) {
                                                    result_312->sline=self->sline;
                                                }
                                                if(_if_conditional337=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional337) {
                                                    __dec_obj131=result_312->sname;
                                                    result_312->sname=(char*)come_increment_ref_count(((char*)(right_value430=string_clone(self->sname))));
                                                    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value430 = come_decrement_ref_count2(right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                if(_if_conditional338=self!=((void*)0)&&self->map_key_elements!=((void*)0),                                                _if_conditional338) {
                                                    __dec_obj132=result_312->map_key_elements;
                                                    result_312->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value431=list$1sNodephp_clone(self->map_key_elements))));
                                                    come_call_finalizer3(__dec_obj132,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value431,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                }
                                                if(_if_conditional339=self!=((void*)0)&&self->map_elements!=((void*)0),                                                _if_conditional339) {
                                                    __dec_obj133=result_312->map_elements;
                                                    result_312->map_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value432=list$1sNodephp_clone(self->map_elements))));
                                                    come_call_finalizer3(__dec_obj133,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value432,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                }
                                                __result188__ = __result_obj__ = result_312;
                                                come_call_finalizer3(result_312,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result188__;
                                                come_call_finalizer3(result_312,sMapNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sListNode_finalize(struct sListNode* self){
void* __result_obj__;
_Bool _if_conditional346;
_Bool _if_conditional347;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional346=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional346) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional347=self!=((void*)0)&&self->list_elements!=((void*)0),                                            _if_conditional347) {
                                                come_call_finalizer3(self->list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__;
_Bool _if_conditional348;
struct sListNode* __result190__;
void* right_value437;
struct sListNode* result_315;
_Bool _if_conditional349;
_Bool _if_conditional350;
void* right_value438;
char* __dec_obj134;
_Bool _if_conditional351;
void* right_value439;
struct list$1sNodeph* __dec_obj135;
struct sListNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value437 = (void*)0;
memset(&result_315, 0, sizeof(struct sListNode*));
right_value438 = (void*)0;
right_value439 = (void*)0;
                                            if(_if_conditional348=self==(void*)0,                                            _if_conditional348) {
                                                __result190__ = __result_obj__ = (void*)0;
                                                return __result190__;
                                            }
                                            result_315=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value437=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "sListNode"))));
                                            come_call_finalizer3(right_value437,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional349=self!=((void*)0),                                            _if_conditional349) {
                                                result_315->sline=self->sline;
                                            }
                                            if(_if_conditional350=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional350) {
                                                __dec_obj134=result_315->sname;
                                                result_315->sname=(char*)come_increment_ref_count(((char*)(right_value438=string_clone(self->sname))));
                                                __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value438 = come_decrement_ref_count2(right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            if(_if_conditional351=self!=((void*)0)&&self->list_elements!=((void*)0),                                            _if_conditional351) {
                                                __dec_obj135=result_315->list_elements;
                                                result_315->list_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value439=list$1sNodephp_clone(self->list_elements))));
                                                come_call_finalizer3(__dec_obj135,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(right_value439,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            }
                                            __result191__ = __result_obj__ = result_315;
                                            come_call_finalizer3(result_315,sListNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result191__;
                                            come_call_finalizer3(result_315,sListNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_tuple(struct sInfo* info){
void* __result_obj__;
void* right_value442;
void* right_value443;
struct list$1sNodeph* tuple_elements_316;
_Bool _while_condtional42;
char* p_317;
_Bool no_comma_318;
void* right_value444;
struct sNode* node_319;
void* right_value445;
struct sNode* __dec_obj136;
_Bool _if_conditional352;
_Bool _if_conditional353;
void* right_value446;
void* right_value447;
struct sNode* _inf_value11;
struct sTupleNode* _inf_obj_value11;
void* right_value451;
struct sNode* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
right_value442 = (void*)0;
right_value443 = (void*)0;
memset(&tuple_elements_316, 0, sizeof(struct list$1sNodeph*));
memset(&p_317, 0, sizeof(char*));
memset(&no_comma_318, 0, sizeof(_Bool));
right_value444 = (void*)0;
memset(&node_319, 0, sizeof(struct sNode*));
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value447 = (void*)0;
right_value451 = (void*)0;
    tuple_elements_316=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value443=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value442=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1843, "list$1sNodeph"))))))));
    come_call_finalizer3(right_value442,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value443,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional42=(_Bool)1,    _while_condtional42) {
        p_317=info->p;
        no_comma_318=info->no_comma;
        info->no_comma=(_Bool)1;
        node_319=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=expression_v13(info))));
        if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj136=node_319;
        node_319=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value445=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_319),info))));
        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value445) { right_value445 = come_decrement_ref_count2(right_value445, ((struct sNode*)right_value445)->finalize, ((struct sNode*)right_value445)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_318;
        list$1sNodeph_push_back(tuple_elements_316,(struct sNode*)come_increment_ref_count(node_319));
        if(_if_conditional352=*info->p==44,        _if_conditional352) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional353=*info->p==41,            _if_conditional353) {
                info->p++;
                skip_spaces_and_lf(info);
                if(node_319) { node_319 = come_decrement_ref_count2(node_319, ((struct sNode*)node_319)->finalize, ((struct sNode*)node_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            else {
                err_msg(info,"invalid character(%c) in tuple expression",*info->p);
                exit(2);
            }
        }
        if(node_319) { node_319 = come_decrement_ref_count2(node_319, ((struct sNode*)node_319)->finalize, ((struct sNode*)node_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1872, "struct sNode");
    _inf_obj_value11=come_increment_ref_count(((struct sTupleNode*)(right_value447=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value446=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 1872, "sTupleNode")))),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_316),info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sTupleNode_finalize;
    _inf_value11->clone=(void*)sTupleNode_clone;
    _inf_value11->compile=(void*)sTupleNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sTupleNode_terminated;
    _inf_value11->kind=(void*)sTupleNode_kind;
    __result196__ = __result_obj__ = ((struct sNode*)(right_value451=_inf_value11));
    come_call_finalizer3(tuple_elements_316,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value446,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value447,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value451) { right_value451 = come_decrement_ref_count2(right_value451, ((struct sNode*)right_value451)->finalize, ((struct sNode*)right_value451)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result196__;
    come_call_finalizer3(tuple_elements_316,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static void sTupleNode_finalize(struct sTupleNode* self){
void* __result_obj__;
_Bool _if_conditional354;
_Bool _if_conditional355;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional354=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional354) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional355=self!=((void*)0)&&self->tuple_elements!=((void*)0),        _if_conditional355) {
            come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__;
_Bool _if_conditional356;
struct sTupleNode* __result194__;
void* right_value448;
struct sTupleNode* result_320;
_Bool _if_conditional357;
_Bool _if_conditional358;
void* right_value449;
char* __dec_obj137;
_Bool _if_conditional359;
void* right_value450;
struct list$1sNodeph* __dec_obj138;
struct sTupleNode* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value448 = (void*)0;
memset(&result_320, 0, sizeof(struct sTupleNode*));
right_value449 = (void*)0;
right_value450 = (void*)0;
        if(_if_conditional356=self==(void*)0,        _if_conditional356) {
            __result194__ = __result_obj__ = (void*)0;
            return __result194__;
        }
        result_320=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value448=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "sTupleNode"))));
        come_call_finalizer3(right_value448,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional357=self!=((void*)0),        _if_conditional357) {
            result_320->sline=self->sline;
        }
        if(_if_conditional358=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional358) {
            __dec_obj137=result_320->sname;
            result_320->sname=(char*)come_increment_ref_count(((char*)(right_value449=string_clone(self->sname))));
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value449 = come_decrement_ref_count2(right_value449, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional359=self!=((void*)0)&&self->tuple_elements!=((void*)0),        _if_conditional359) {
            __dec_obj138=result_320->tuple_elements;
            result_320->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value450=list$1sNodephp_clone(self->tuple_elements))));
            come_call_finalizer3(__dec_obj138,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value450,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __result195__ = __result_obj__ = result_320;
        come_call_finalizer3(result_320,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
        return __result195__;
        come_call_finalizer3(result_320,sTupleNode_finalize, 0, 0, 0, 0, (void*)0);
}

