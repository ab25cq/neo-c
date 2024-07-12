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
struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};
struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};
struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};
struct sStoreNode
{
    int sline;
    char* sname;
    char* name;
    struct list$1charph* multiple_assign;
    struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare;
    struct sNode* right_value;
    struct sType* type;
    char* array_initializer;
    _Bool alloc;
};
struct sLoadNode
{
    int sline;
    char* sname;
    char* name;
};
struct sFunLoadNode
{
    int sline;
    char* sname;
    char* name;
};
struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
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

struct sNode* expression_node_v96(struct sInfo* info);

struct sNode* parse_tuple(struct sInfo* info);

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info);

_Bool sStoreNode_terminated(struct sStoreNode* self);

char* sStoreNode_kind(struct sStoreNode* self);

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);

static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self);
static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);

_Bool sLoadNode_terminated(struct sLoadNode* self);

char* sLoadNode_kind(struct sLoadNode* self);

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);

_Bool sFunLoadNode_terminated(struct sFunLoadNode* self);

char* sFunLoadNode_kind(struct sFunLoadNode* self);

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);

static void sFunLoadNode_finalize(struct sFunLoadNode* self);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
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










struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
_Bool _if_conditional19;
void* right_value115;
struct sType* __dec_obj36;
struct sType* __dec_obj37;
struct sNode* __dec_obj38;
_Bool _if_conditional111;
void* right_value116;
struct list$1charph* __dec_obj39;
struct list$1charph* __dec_obj40;
_Bool _if_conditional112;
void* right_value127;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj47;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj48;
char* __dec_obj49;
void* right_value128;
char* __dec_obj50;
struct sStoreNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
    __dec_obj12=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(name))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->alloc=alloc;
    if(type) {
        __dec_obj36=self->type;
        self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=sType_clone(type))));
        come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value115,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj37=self->type;
        self->type=((void*)0);
        come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj38=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
    if(multiple_assign) {
        __dec_obj39=self->multiple_assign;
        self->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value116=list$1charphp_clone(multiple_assign))));
        come_call_finalizer3(__dec_obj39,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value116,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj40=self->multiple_assign;
        self->multiple_assign=((void*)0);
        come_call_finalizer3(__dec_obj40,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(multiple_declare) {
        __dec_obj47=self->multiple_declare;
        self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value127=list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare))));
        come_call_finalizer3(__dec_obj47,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value127,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj48=self->multiple_declare;
        self->multiple_declare=((void*)0);
        come_call_finalizer3(__dec_obj48,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj49=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->sline=info->sline;
    __dec_obj50=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value128=__builtin_string(info->sname))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result82__ = __result_obj__ = self;
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result82__;
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sStoreNode_terminated(struct sStoreNode* self){
void* __result_obj__;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    __result83__ = (_Bool)0;
    return __result83__;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __result_obj__;
void* right_value129;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
    __result84__ = __result_obj__ = ((char*)(right_value129=__builtin_string("sStoreNode")));
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result84__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value130;
char* array_initializer_87;
_Bool _if_conditional143;
struct sVar* var__91;
_Bool _if_conditional152;
_Bool __result89__;
_Bool _if_conditional153;
_Bool __result90__;
void* right_value131;
struct sType* type_92;
void* right_value132;
void* right_value133;
struct sType* var_type_93;
void* right_value134;
_Bool _if_conditional154;
struct sVar* var__94;
_Bool _if_conditional155;
_Bool __result91__;
_Bool _if_conditional156;
_Bool __result92__;
void* right_value135;
struct sType* type_95;
_Bool _if_conditional157;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_96;
struct tuple3$3sTypephcharphsNodeph* it_99;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var1;
struct sType* type_102;
char* var_name_103;
struct sNode* right_value_104;
void* right_value136;
_Bool _if_conditional162;
_Bool __result100__;
void* right_value137;
struct sType* left_type_105;
void* right_value138;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool __result101__;
void* right_value139;
struct CVALUE* come_value_106;
void* right_value140;
struct sType* left_type2_107;
_Bool _if_conditional167;
_Bool _if_conditional169;
void* right_value141;
struct list$1sNodeph* o2_saved_108;
struct sNode* it_111;
_Bool _if_conditional174;
void* right_value142;
struct CVALUE* come_value_114;
void* right_value143;
void* right_value144;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool __result111__;
void* right_value145;
struct sType* left_type_115;
_Bool _if_conditional177;
void* right_value146;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value147;
struct list$1sNodeph* o2_saved_116;
struct sNode* it_117;
_Bool _if_conditional180;
void* right_value148;
struct CVALUE* come_value_118;
void* right_value149;
void* right_value150;
struct sType* left_type2_119;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value151;
struct list$1sNodeph* o2_saved_120;
struct sNode* it_121;
_Bool _if_conditional183;
void* right_value152;
struct CVALUE* come_value_122;
void* right_value153;
void* right_value154;
struct CVALUE* come_value_123;
void* right_value155;
char* __dec_obj51;
void* right_value156;
struct sType* __dec_obj52;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool __result113__;
void* right_value160;
struct CVALUE* right_value_127;
struct sType* right_type_128;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
struct sVar* var__129;
_Bool _if_conditional192;
_Bool __result114__;
_Bool _if_conditional193;
int i_130;
struct list$1charph* o2_saved_131;
char* it_134;
_Bool _if_conditional199;
struct sType* right_type2_140;
void* right_value161;
void* right_value162;
struct sType* var_type_141;
_Bool _if_conditional202;
_Bool _if_conditional203;
void* right_value163;
struct list$1sNodeph* o2_saved_142;
struct sNode* it_143;
_Bool _if_conditional204;
void* right_value164;
struct CVALUE* come_value_144;
void* right_value165;
_Bool _if_conditional205;
void* right_value166;
void* right_value167;
struct sType* type_145;
void* right_value168;
void* right_value169;
struct sType* var_type_146;
_Bool _if_conditional206;
_Bool _if_conditional207;
void* right_value170;
struct list$1sNodeph* o2_saved_147;
struct sNode* it_148;
_Bool _if_conditional208;
void* right_value171;
struct CVALUE* come_value_149;
void* right_value172;
struct sClass* current_stack_frame_struct_150;
_Bool _if_conditional209;
struct sVar* parent_var_151;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value173;
struct CVALUE* come_value_152;
struct sType* left_type_153;
_Bool _if_conditional212;
void* right_value174;
char* c_value_154;
void* right_value175;
char* __dec_obj56;
int right_value_id_155;
_Bool _if_conditional213;
_Bool _if_conditional214;
void* right_value176;
char* c_value_156;
void* right_value177;
char* __dec_obj57;
void* right_value178;
char* __dec_obj58;
void* right_value179;
struct sType* __dec_obj59;
void* right_value180;
void* right_value181;
_Bool __result126__;
_Bool _if_conditional215;
static int num_multiple_var_157=0;
void* right_value182;
char* multiple_var_name_158;
void* right_value183;
void* right_value184;
char* __dec_obj60;
int i_159;
struct list$1charph* o2_saved_160;
char* it_161;
_Bool _if_conditional216;
void* right_value185;
struct sType* right_type2_162;
struct sVar* var__163;
void* right_value186;
struct sType* var_type_164;
_Bool _if_conditional217;
_Bool _if_conditional218;
void* right_value187;
struct list$1sNodeph* o2_saved_165;
struct sNode* it_166;
_Bool _if_conditional219;
void* right_value188;
struct CVALUE* come_value_167;
void* right_value189;
void* right_value190;
struct sType* left_type_168;
void* right_value191;
struct CVALUE* right_value2_169;
void* right_value192;
char* __dec_obj61;
void* right_value193;
struct sType* __dec_obj62;
void* right_value194;
struct CVALUE* come_value_170;
void* right_value195;
void* right_value196;
_Bool _if_conditional220;
_Bool _if_conditional221;
void* right_value197;
char* __dec_obj63;
int right_value_id_171;
_Bool _if_conditional222;
void* right_value198;
char* __dec_obj64;
void* right_value199;
struct sType* __dec_obj65;
_Bool _if_conditional223;
void* right_value200;
struct sVar* var__172;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool __result127__;
_Bool _if_conditional226;
void* right_value201;
struct sType* __dec_obj66;
void* right_value202;
struct sType* left_type_173;
void* right_value203;
struct CVALUE* come_value_174;
_Bool _if_conditional227;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
char* __dec_obj67;
_Bool _if_conditional228;
void* right_value208;
void* right_value209;
_Bool _if_conditional229;
void* right_value210;
void* right_value211;
char* __dec_obj68;
_Bool _if_conditional230;
void* right_value212;
void* right_value213;
_Bool _if_conditional231;
void* right_value214;
char* __dec_obj69;
void* right_value215;
char* __dec_obj70;
int right_value_id_175;
_Bool _if_conditional232;
void* right_value216;
struct sType* __dec_obj71;
_Bool _if_conditional233;
void* right_value217;
void* right_value218;
_Bool _if_conditional234;
void* right_value219;
char* __dec_obj72;
void* right_value220;
char* __dec_obj73;
void* right_value221;
struct sType* __dec_obj74;
void* right_value222;
void* right_value223;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool __result128__;
void* right_value224;
char* __dec_obj75;
void* right_value225;
struct sType* __dec_obj76;
_Bool _if_conditional238;
_Bool _if_conditional239;
void* right_value226;
void* right_value227;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
memset(&array_initializer_87, 0, sizeof(char*));
memset(&var__91, 0, sizeof(struct sVar*));
right_value131 = (void*)0;
memset(&type_92, 0, sizeof(struct sType*));
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&var_type_93, 0, sizeof(struct sType*));
right_value134 = (void*)0;
memset(&var__94, 0, sizeof(struct sVar*));
right_value135 = (void*)0;
memset(&type_95, 0, sizeof(struct sType*));
memset(&o2_saved_96, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_99, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&type_102, 0, sizeof(struct sType*));
memset(&var_name_103, 0, sizeof(char*));
memset(&right_value_104, 0, sizeof(struct sNode*));
memset(&type_102, 0, sizeof(struct sType*));
memset(&var_name_103, 0, sizeof(char*));
memset(&right_value_104, 0, sizeof(struct sNode*));
right_value136 = (void*)0;
right_value137 = (void*)0;
memset(&left_type_105, 0, sizeof(struct sType*));
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&come_value_106, 0, sizeof(struct CVALUE*));
right_value140 = (void*)0;
memset(&left_type2_107, 0, sizeof(struct sType*));
right_value141 = (void*)0;
memset(&o2_saved_108, 0, sizeof(struct list$1sNodeph*));
memset(&it_111, 0, sizeof(struct sNode*));
right_value142 = (void*)0;
memset(&come_value_114, 0, sizeof(struct CVALUE*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&left_type_115, 0, sizeof(struct sType*));
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&o2_saved_116, 0, sizeof(struct list$1sNodeph*));
memset(&it_117, 0, sizeof(struct sNode*));
right_value148 = (void*)0;
memset(&come_value_118, 0, sizeof(struct CVALUE*));
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&left_type2_119, 0, sizeof(struct sType*));
right_value151 = (void*)0;
memset(&o2_saved_120, 0, sizeof(struct list$1sNodeph*));
memset(&it_121, 0, sizeof(struct sNode*));
right_value152 = (void*)0;
memset(&come_value_122, 0, sizeof(struct CVALUE*));
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&come_value_123, 0, sizeof(struct CVALUE*));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value160 = (void*)0;
memset(&right_value_127, 0, sizeof(struct CVALUE*));
memset(&right_type_128, 0, sizeof(struct sType*));
memset(&var__129, 0, sizeof(struct sVar*));
memset(&i_130, 0, sizeof(int));
memset(&o2_saved_131, 0, sizeof(struct list$1charph*));
memset(&it_134, 0, sizeof(char*));
memset(&right_type2_140, 0, sizeof(struct sType*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&var_type_141, 0, sizeof(struct sType*));
right_value163 = (void*)0;
memset(&o2_saved_142, 0, sizeof(struct list$1sNodeph*));
memset(&it_143, 0, sizeof(struct sNode*));
right_value164 = (void*)0;
memset(&come_value_144, 0, sizeof(struct CVALUE*));
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&type_145, 0, sizeof(struct sType*));
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&var_type_146, 0, sizeof(struct sType*));
right_value170 = (void*)0;
memset(&o2_saved_147, 0, sizeof(struct list$1sNodeph*));
memset(&it_148, 0, sizeof(struct sNode*));
right_value171 = (void*)0;
memset(&come_value_149, 0, sizeof(struct CVALUE*));
right_value172 = (void*)0;
memset(&current_stack_frame_struct_150, 0, sizeof(struct sClass*));
memset(&parent_var_151, 0, sizeof(struct sVar*));
right_value173 = (void*)0;
memset(&come_value_152, 0, sizeof(struct CVALUE*));
memset(&left_type_153, 0, sizeof(struct sType*));
right_value174 = (void*)0;
memset(&c_value_154, 0, sizeof(char*));
right_value175 = (void*)0;
memset(&right_value_id_155, 0, sizeof(int));
right_value176 = (void*)0;
memset(&c_value_156, 0, sizeof(char*));
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
memset(&multiple_var_name_158, 0, sizeof(char*));
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&i_159, 0, sizeof(int));
memset(&o2_saved_160, 0, sizeof(struct list$1charph*));
memset(&it_161, 0, sizeof(char*));
right_value185 = (void*)0;
memset(&right_type2_162, 0, sizeof(struct sType*));
memset(&var__163, 0, sizeof(struct sVar*));
right_value186 = (void*)0;
memset(&var_type_164, 0, sizeof(struct sType*));
right_value187 = (void*)0;
memset(&o2_saved_165, 0, sizeof(struct list$1sNodeph*));
memset(&it_166, 0, sizeof(struct sNode*));
right_value188 = (void*)0;
memset(&come_value_167, 0, sizeof(struct CVALUE*));
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&left_type_168, 0, sizeof(struct sType*));
right_value191 = (void*)0;
memset(&right_value2_169, 0, sizeof(struct CVALUE*));
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&come_value_170, 0, sizeof(struct CVALUE*));
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&right_value_id_171, 0, sizeof(int));
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&var__172, 0, sizeof(struct sVar*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&left_type_173, 0, sizeof(struct sType*));
right_value203 = (void*)0;
memset(&come_value_174, 0, sizeof(struct CVALUE*));
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
memset(&right_value_id_175, 0, sizeof(int));
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
    array_initializer_87=(char*)come_increment_ref_count(((char*)(right_value130=string_clone(self->array_initializer))));
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(array_initializer_87) {
        var__91=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
        if(var__91) {
            err_msg(info,"Already appended this var name(%s)(2)",self->name);
            __result89__ = (_Bool)0;
            array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result89__;
        }
        if(_if_conditional153=self->type==((void*)0),        _if_conditional153) {
            err_msg(info,"Require type name(%s)",self->name);
            __result90__ = (_Bool)0;
            array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result90__;
        }
        else {
            type_92=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=solve_generics(self->type,info->generics_type,info))));
            come_call_finalizer3(right_value131,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_92->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(type_92)))),info);
            come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(type_92,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        var__91=get_variable_from_table(info->lv_table,self->name);
        var_type_93=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(var__91->mType))));
        come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, __result_obj__);
        var_type_93->mStatic=(_Bool)0;
        add_come_code(info,"%s=%s;\n",((char*)(right_value134=make_define_var(var_type_93,var__91->mCValueName,(_Bool)0,info))),array_initializer_87);
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(var_type_93,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional154=self->right_value==((void*)0),        _if_conditional154) {
            var__94=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
            if(var__94) {
                err_msg(info,"Already appended this var name(%s)(1)",self->name);
                __result91__ = (_Bool)0;
                array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result91__;
            }
            if(_if_conditional156=self->type==((void*)0),            _if_conditional156) {
                err_msg(info,"Require concrete variable type(%s)",self->name);
                __result92__ = (_Bool)0;
                array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result92__;
            }
            type_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=solve_generics(self->type,info->generics_type,info))));
            come_call_finalizer3(right_value135,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_95->mFunctionParam=(_Bool)0;
            if(self->multiple_declare) {
                for(                o2_saved_96=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_99=list$1tuple3$3sTypephcharphsNodephph_begin((o2_saved_96));                !list$1tuple3$3sTypephcharphsNodephph_end((o2_saved_96));                it_99=list$1tuple3$3sTypephcharphsNodephph_next((o2_saved_96))                ){
                    multiple_assign_var1=it_99;
                    type_102=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
                    var_name_103=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    right_value_104=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
                    add_variable_to_table(var_name_103,(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(type_102)))),info);
                    come_call_finalizer3(right_value136,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    var__94=get_variable_from_table(info->lv_table,var_name_103);
                    if(_if_conditional162=var__94==((void*)0),                    _if_conditional162) {
                        err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_99);
                        __result100__ = (_Bool)1;
                        come_call_finalizer3(type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_103 = come_decrement_ref_count2(var_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(right_value_104) { right_value_104 = come_decrement_ref_count2(right_value_104, ((struct sNode*)right_value_104)->finalize, ((struct sNode*)right_value_104)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(o2_saved_96,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_95,sType_finalize, 0, 0, 0, 0, (void*)0);
                        array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result100__;
                    }
                    left_type_105=(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=sType_clone(var__94->mType))));
                    come_call_finalizer3(right_value137,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value138=make_define_var(left_type_105,var__94->mCValueName,(_Bool)0,info))));
                    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(right_value_104) {
                        if(_if_conditional164=!node_compile(right_value_104,info),                        _if_conditional164) {
                            __result101__ = (_Bool)0;
                            come_call_finalizer3(type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_103 = come_decrement_ref_count2(var_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(right_value_104) { right_value_104 = come_decrement_ref_count2(right_value_104, ((struct sNode*)right_value_104)->finalize, ((struct sNode*)right_value_104)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(left_type_105,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(o2_saved_96,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type_95,sType_finalize, 0, 0, 0, 0, (void*)0);
                            array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result101__;
                        }
                        come_value_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value139=get_value_from_stack(-1,info))));
                        come_call_finalizer3(right_value139,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        dec_stack_ptr(1,info);
                        add_come_code(info,"%s=%s;\n",var__94->mCValueName,come_value_106->c_value);
                        come_call_finalizer3(come_value_106,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    left_type2_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_clone(left_type_105))));
                    come_call_finalizer3(right_value140,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    left_type2_107->mStatic=(_Bool)0;
                    if(_if_conditional167=!var__94->mType->mConstant&&!var__94->mType->mStatic,                    _if_conditional167) {
                        if(_if_conditional169=list$1sNodeph_length(left_type2_107->mArrayNum)>0,                        _if_conditional169) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__94->mCValueName,((char*)(right_value141=make_type_name_string(left_type2_107,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            o2_saved_108=(struct list$1sNodeph*)come_increment_ref_count((left_type2_107->mArrayNum)),it_111=list$1sNodeph_begin((o2_saved_108));                            !list$1sNodeph_end((o2_saved_108));                            it_111=list$1sNodeph_next((o2_saved_108))                            ){
                                if(_if_conditional174=!node_compile(it_111,info),                                _if_conditional174) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=get_value_from_stack(-1,info))));
                                come_call_finalizer3(right_value142,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_114->c_value);
                                come_call_finalizer3(come_value_114,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer3(o2_saved_108,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__94->mCValueName,((char*)(right_value143=make_type_name_string(left_type2_107,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    come_call_finalizer3(type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_103 = come_decrement_ref_count2(var_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value_104) { right_value_104 = come_decrement_ref_count2(right_value_104, ((struct sNode*)right_value_104)->finalize, ((struct sNode*)right_value_104)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(left_type_105,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type2_107,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_96,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(type_95)))),info);
                come_call_finalizer3(right_value144,sType_finalize, 0, 1, 0, 0, __result_obj__);
                var__94=get_variable_from_table(info->lv_table,self->name);
                if(_if_conditional175=var__94==((void*)0),                _if_conditional175) {
                    var__94=get_variable_from_table(info->gv_table,self->name);
                    if(_if_conditional176=var__94==((void*)0),                    _if_conditional176) {
                        err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                        __result111__ = (_Bool)1;
                        come_call_finalizer3(type_95,sType_finalize, 0, 0, 0, 0, (void*)0);
                        array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result111__;
                    }
                }
                left_type_115=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_clone(var__94->mType))));
                come_call_finalizer3(right_value145,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional177=list$1sNodeph_length(left_type_115->mArrayNum)>0,                _if_conditional177) {
                    add_come_code(info,"%s;\n",((char*)(right_value146=make_define_var(left_type_115,var__94->mCValueName,(_Bool)0,info))));
                    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional178=!left_type_115->mStatic,                    _if_conditional178) {
                        if(_if_conditional179=list$1sNodeph_length(left_type_115->mArrayNum)>0,                        _if_conditional179) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__94->mCValueName,((char*)(right_value147=make_type_name_string(left_type_115,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            o2_saved_116=(struct list$1sNodeph*)come_increment_ref_count((left_type_115->mArrayNum)),it_117=list$1sNodeph_begin((o2_saved_116));                            !list$1sNodeph_end((o2_saved_116));                            it_117=list$1sNodeph_next((o2_saved_116))                            ){
                                if(_if_conditional180=!node_compile(it_117,info),                                _if_conditional180) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=get_value_from_stack(-1,info))));
                                come_call_finalizer3(right_value148,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_118->c_value);
                                come_call_finalizer3(come_value_118,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer3(o2_saved_116,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)); /* aaa */\n",var__94->mCValueName,var__94->mCValueName);
                        }
                    }
                }
                else {
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value149=make_define_var(left_type_115,var__94->mCValueName,(_Bool)0,info))));
                    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    left_type2_119=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_clone(left_type_115))));
                    come_call_finalizer3(right_value150,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    left_type2_119->mStatic=(_Bool)0;
                    if(_if_conditional181=!var__94->mType->mConstant&&!var__94->mType->mStatic,                    _if_conditional181) {
                        if(_if_conditional182=list$1sNodeph_length(left_type2_119->mArrayNum)>0,                        _if_conditional182) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__94->mCValueName,((char*)(right_value151=make_type_name_string(left_type2_119,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            o2_saved_120=(struct list$1sNodeph*)come_increment_ref_count((left_type2_119->mArrayNum)),it_121=list$1sNodeph_begin((o2_saved_120));                            !list$1sNodeph_end((o2_saved_120));                            it_121=list$1sNodeph_next((o2_saved_120))                            ){
                                if(_if_conditional183=!node_compile(it_121,info),                                _if_conditional183) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value152=get_value_from_stack(-1,info))));
                                come_call_finalizer3(right_value152,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_122->c_value);
                                come_call_finalizer3(come_value_122,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer3(o2_saved_120,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__94->mCValueName,((char*)(right_value153=make_type_name_string(left_type2_119,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    come_call_finalizer3(left_type2_119,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value154=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 211, "CVALUE"))));
                come_call_finalizer3(right_value154,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj51=come_value_123->c_value;
                come_value_123->c_value=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("%s",var__94->mCValueName))));
                __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj52=come_value_123->type;
                come_value_123->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(left_type_115))));
                come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value156,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_value_123->var=var__94;
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_123));
                if(_if_conditional187=self->alloc&&!left_type_115->mClass->mNumber&&left_type_115->mPointerNum==0,                _if_conditional187) {
                    var__94->mType->mAllocaValue=(_Bool)1;
                }
                come_call_finalizer3(left_type_115,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_123,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_95,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional188=!node_compile(self->right_value,info),            _if_conditional188) {
                __result113__ = (_Bool)0;
                array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result113__;
            }
            right_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=get_value_from_stack(-1,info))));
            come_call_finalizer3(right_value160,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            right_type_128=right_value_127->type;
            dec_stack_ptr(1,info);
            if(self->multiple_assign) {
                if(right_type_128->mNoSolvedGenericsType->v1) {
                    right_type_128=right_type_128->mNoSolvedGenericsType->v1;
                }
            }
            if(self->alloc) {
                var__129=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                if(var__129) {
                    err_msg(info,"Already appended this var name(%s)(2)",self->name);
                    __result114__ = (_Bool)0;
                    come_call_finalizer3(right_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result114__;
                }
                if(self->multiple_assign) {
                    i_130=0;
                    for(                    o2_saved_131=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_134=list$1charph_begin((o2_saved_131));                    !list$1charph_end((o2_saved_131));                    it_134=list$1charph_next((o2_saved_131))                    ){
                        if(_if_conditional199=i_130<list$1sTypeph_length(right_type_128->mGenericsTypes),                        _if_conditional199) {
                            right_type2_140=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type_128->mGenericsTypes,i_130), "07var.c", 250, 0));
                            right_type2_140->mFunctionParam=(_Bool)0;
                            add_variable_to_table(it_134,(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(right_type2_140)))),info);
                            come_call_finalizer3(right_value161,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            var__129=get_variable_from_table(info->lv_table,it_134);
                            var_type_141=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(var__129->mType))));
                            come_call_finalizer3(right_value162,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            var_type_141->mStatic=(_Bool)0;
                            if(_if_conditional202=!var_type_141->mConstant&&!var_type_141->mStatic,                            _if_conditional202) {
                                if(_if_conditional203=list$1sNodeph_length(var_type_141->mArrayNum)>0,                                _if_conditional203) {
                                    add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__129->mCValueName,((char*)(right_value163=make_type_name_string(var_type_141,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    for(                                    o2_saved_142=(struct list$1sNodeph*)come_increment_ref_count((var_type_141->mArrayNum)),it_143=list$1sNodeph_begin((o2_saved_142));                                    !list$1sNodeph_end((o2_saved_142));                                    it_143=list$1sNodeph_next((o2_saved_142))                                    ){
                                        if(_if_conditional204=!node_compile(it_143,info),                                        _if_conditional204) {
                                            err_msg(info,"invalid array num");
                                            exit(1);
                                        }
                                        come_value_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value164=get_value_from_stack(-1,info))));
                                        come_call_finalizer3(right_value164,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                        dec_stack_ptr(1,info);
                                        add_come_code(info,"*(%s)",come_value_144->c_value);
                                        come_call_finalizer3(come_value_144,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer3(o2_saved_142,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    add_come_code(info,");\n");
                                }
                                else {
                                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__129->mCValueName,((char*)(right_value165=make_type_name_string(var_type_141,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                            come_call_finalizer3(var_type_141,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        i_130++;
                    }
                    come_call_finalizer3(o2_saved_131,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional205=self->type==((void*)0),                    _if_conditional205) {
                        right_type_128->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_clone(right_type_128)))),info);
                        come_call_finalizer3(right_value166,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        type_145=(struct sType*)come_increment_ref_count(((struct sType*)(right_value167=solve_generics(self->type,info->generics_type,info))));
                        come_call_finalizer3(right_value167,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        type_145->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_clone(type_145)))),info);
                        come_call_finalizer3(right_value168,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type_145,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    var__129=get_variable_from_table(info->lv_table,self->name);
                    var_type_146=(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=sType_clone(var__129->mType))));
                    come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    var_type_146->mStatic=(_Bool)0;
                    if(_if_conditional206=!var__129->mType->mStatic&&!var_type_146->mConstant&&list$1sNodeph_length(var_type_146->mArrayNum)==0,                    _if_conditional206) {
                        if(_if_conditional207=list$1sNodeph_length(var_type_146->mArrayNum)>0,                        _if_conditional207) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__129->mCValueName,((char*)(right_value170=make_type_name_string(var_type_146,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            o2_saved_147=(struct list$1sNodeph*)come_increment_ref_count((var_type_146->mArrayNum)),it_148=list$1sNodeph_begin((o2_saved_147));                            !list$1sNodeph_end((o2_saved_147));                            it_148=list$1sNodeph_next((o2_saved_147))                            ){
                                if(_if_conditional208=!node_compile(it_148,info),                                _if_conditional208) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_149=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value171=get_value_from_stack(-1,info))));
                                come_call_finalizer3(right_value171,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_149->c_value);
                                come_call_finalizer3(come_value_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer3(o2_saved_147,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__129->mCValueName,((char*)(right_value172=make_type_name_string(var_type_146,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    come_call_finalizer3(var_type_146,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            current_stack_frame_struct_150=info->current_stack_frame_struct;
            if(_if_conditional209=current_stack_frame_struct_150&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),            _if_conditional209) {
                parent_var_151=get_variable_from_table(info->lv_table->mParent,self->name);
                if(_if_conditional210=parent_var_151!=((void*)0),                _if_conditional210) {
                    if(_if_conditional211=string_operator_not_equals(parent_var_151->mFunName,info->come_fun->mName),                    _if_conditional211) {
                        come_value_152=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value173=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 330, "CVALUE"))));
                        come_call_finalizer3(right_value173,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        left_type_153=parent_var_151->mType;
                        if(_if_conditional212=left_type_153->mPointerNum>0&&right_type_128->mPointerNum>0&&right_type_128->mHeap&&left_type_153->mHeap,                        _if_conditional212) {
                            c_value_154=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("*(parent->%s)",parent_var_151->mCValueName))));
                            right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            decrement_ref_count_object(parent_var_151->mType,c_value_154,info,(_Bool)0);
                            std_move(left_type_153,right_type_128,right_value_127,info);
                            __dec_obj56=come_value_152->c_value;
                            come_value_152->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("(*(parent->%s))=%s",parent_var_151->mCValueName,right_value_127->c_value))));
                            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value_id_155=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_127->c_value));
                            if(_if_conditional213=right_value_id_155!=-1,                            _if_conditional213) {
                                remove_object_from_right_values(right_value_id_155,info);
                            }
                            c_value_154 = come_decrement_ref_count2(c_value_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(_if_conditional214=left_type_153->mPointerNum>0&&right_type_128->mPointerNum>0&&string_operator_equals(right_type_128->mClass->mName,"void")&&left_type_153->mHeap,                            _if_conditional214) {
                                c_value_156=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("*(parent->%s)",parent_var_151->mCValueName))));
                                right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                decrement_ref_count_object(parent_var_151->mType,c_value_156,info,(_Bool)0);
                                __dec_obj57=come_value_152->c_value;
                                come_value_152->c_value=(char*)come_increment_ref_count(((char*)(right_value177=xsprintf("(*(parent->%s))=%s",parent_var_151->mCValueName,right_value_127->c_value))));
                                __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                c_value_156 = come_decrement_ref_count2(c_value_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj58=come_value_152->c_value;
                                come_value_152->c_value=(char*)come_increment_ref_count(((char*)(right_value178=xsprintf("(*(parent->%s))=%s",parent_var_151->mCValueName,right_value_127->c_value))));
                                __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        __dec_obj59=come_value_152->type;
                        come_value_152->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=sType_clone(left_type_153))));
                        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value179,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_value_152->var=((void*)0);
                        check_assign_type(((char*)(right_value181=xsprintf("\%s is assigning to",((char*)(right_value180=string_to_string(self->name)))))),left_type_153,right_type_128,come_value_152,(_Bool)0,(_Bool)1,info);
                        right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        add_come_last_code(info,"%s;\n",come_value_152->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_152));
                        __result126__ = (_Bool)1;
                        come_call_finalizer3(come_value_152,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result126__;
                        come_call_finalizer3(come_value_152,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            if(self->multiple_assign) {
                multiple_var_name_158=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("multiple_assign_var%d",++num_multiple_var_157))));
                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                add_come_code_at_function_head(info,"%s;\n",((char*)(right_value183=make_define_var(right_value_127->type,multiple_var_name_158,(_Bool)0,info))));
                right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                add_come_code(info,"%s=%s;\n",multiple_var_name_158,right_value_127->c_value);
                __dec_obj60=right_value_127->c_value;
                right_value_127->c_value=(char*)come_increment_ref_count(((char*)(right_value184=string_clone(multiple_var_name_158))));
                __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                i_159=0;
                for(                o2_saved_160=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_161=list$1charph_begin((o2_saved_160));                !list$1charph_end((o2_saved_160));                it_161=list$1charph_next((o2_saved_160))                ){
                    if(_if_conditional216=i_159<list$1sTypeph_length(right_type_128->mGenericsTypes),                    _if_conditional216) {
                        right_type2_162=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type_128->mGenericsTypes,i_159), "07var.c", 384, 1))))));
                        come_call_finalizer3(right_value185,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        var__163=get_variable_from_table(info->lv_table,it_161);
                        var_type_164=(struct sType*)come_increment_ref_count(((struct sType*)(right_value186=sType_clone(var__163->mType))));
                        come_call_finalizer3(right_value186,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        var_type_164->mStatic=(_Bool)0;
                        if(_if_conditional217=!var_type_164->mConstant,                        _if_conditional217) {
                            if(_if_conditional218=list$1sNodeph_length(var_type_164->mArrayNum)>0,                            _if_conditional218) {
                                add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__163->mCValueName,((char*)(right_value187=make_type_name_string(var_type_164,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                for(                                o2_saved_165=(struct list$1sNodeph*)come_increment_ref_count((var_type_164->mArrayNum)),it_166=list$1sNodeph_begin((o2_saved_165));                                !list$1sNodeph_end((o2_saved_165));                                it_166=list$1sNodeph_next((o2_saved_165))                                ){
                                    if(_if_conditional219=!node_compile(it_166,info),                                    _if_conditional219) {
                                        err_msg(info,"invalid array num");
                                        exit(1);
                                    }
                                    come_value_167=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=get_value_from_stack(-1,info))));
                                    come_call_finalizer3(right_value188,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                    dec_stack_ptr(1,info);
                                    add_come_code(info,"*(%s)",come_value_167->c_value);
                                    come_call_finalizer3(come_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                come_call_finalizer3(o2_saved_165,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                add_come_code(info,");\n");
                            }
                            else {
                                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__163->mCValueName,((char*)(right_value189=make_type_name_string(var_type_164,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        left_type_168=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(var__163->mType))));
                        come_call_finalizer3(right_value190,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        right_value2_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 413, "CVALUE"))));
                        come_call_finalizer3(right_value191,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        __dec_obj61=right_value2_169->c_value;
                        right_value2_169->c_value=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("%s->v%d",right_value_127->c_value,i_159+1))));
                        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj62=right_value2_169->type;
                        right_value2_169->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(right_type2_162))));
                        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value193,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        right_value2_169->var=((void*)0);
                        come_value_170=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value194=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 419, "CVALUE"))));
                        come_call_finalizer3(right_value194,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        check_assign_type(((char*)(right_value196=xsprintf("\%s is assining to}",((char*)(right_value195=string_to_string(self->name)))))),left_type_168,right_type2_162,come_value_170,(_Bool)0,(_Bool)1,info);
                        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional220=right_type2_162->mHeap&&left_type_168->mHeap&&left_type_168->mPointerNum>0&&right_type2_162->mPointerNum>0,                        _if_conditional220) {
                            if(self->alloc) {
                                std_move(left_type_168,right_type2_162,right_value2_169,info);
                                __dec_obj63=come_value_170->c_value;
                                come_value_170->c_value=(char*)come_increment_ref_count(((char*)(right_value197=xsprintf("%s=%s",var__163->mCValueName,right_value2_169->c_value))));
                                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            right_value_id_171=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value2_169->c_value));
                            if(_if_conditional222=right_value_id_171!=-1,                            _if_conditional222) {
                                remove_object_from_right_values(right_value_id_171,info);
                            }
                        }
                        else {
                            __dec_obj64=come_value_170->c_value;
                            come_value_170->c_value=(char*)come_increment_ref_count(((char*)(right_value198=xsprintf("%s=%s",var__163->mCValueName,right_value2_169->c_value))));
                            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __dec_obj65=come_value_170->type;
                        come_value_170->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=sType_clone(left_type_168))));
                        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value199,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_value_170->var=var__163;
                        if(self->alloc) {
                            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value200=make_define_var(left_type_168,var__163->mCValueName,(_Bool)0,info))));
                            right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            add_come_code(info,"%s;\n",come_value_170->c_value);
                        }
                        else {
                            add_come_code(info,"%s;\n",come_value_170->c_value);
                        }
                        come_call_finalizer3(right_type2_162,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(var_type_164,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(left_type_168,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value2_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    i_159++;
                }
                come_call_finalizer3(o2_saved_160,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                multiple_var_name_158 = come_decrement_ref_count2(multiple_var_name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                var__172=get_variable_from_table(info->lv_table,self->name);
                if(_if_conditional224=var__172==((void*)0),                _if_conditional224) {
                    var__172=get_variable_from_table(info->gv_table,self->name);
                    if(_if_conditional225=var__172==((void*)0),                    _if_conditional225) {
                        err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                        __result127__ = (_Bool)1;
                        come_call_finalizer3(right_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result127__;
                    }
                }
                if(_if_conditional226=var__172->mType==((void*)0),                _if_conditional226) {
                    __dec_obj66=var__172->mType;
                    var__172->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value201=sType_clone(right_type_128))));
                    come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value201,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                left_type_173=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_clone(var__172->mType))));
                come_call_finalizer3(right_value202,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_value_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 472, "CVALUE"))));
                come_call_finalizer3(right_value203,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional227=var__172->mType->mStatic&&!var__172->mGlobal,                _if_conditional227) {
                    check_assign_type(((char*)(right_value205=xsprintf("\%s is assining to",((char*)(right_value204=string_to_string(self->name)))))),left_type_173,right_type_128,right_value_127,(_Bool)0,(_Bool)1,info);
                    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value206=make_define_var(left_type_173,var__172->mCValueName,(_Bool)0,info))),right_value_127->c_value);
                    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj67=come_value_174->c_value;
                    come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string(""))));
                    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
                    transpiler_clear_last_code(info);
                }
                else {
                    if(var__172->mType->mConstant) {
                        check_assign_type(((char*)(right_value209=xsprintf("\%s is assining to",((char*)(right_value208=string_to_string(self->name)))))),left_type_173,right_type_128,right_value_127,(_Bool)0,(_Bool)1,info);
                        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(self->alloc) {
                            add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value210=make_define_var(left_type_173,var__172->mCValueName,(_Bool)0,info))),right_value_127->c_value);
                            right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            add_come_code_at_function_head(info,"%s=%s;\n",var__172->mCValueName,right_value_127->c_value);
                        }
                        __dec_obj68=come_value_174->c_value;
                        come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value211=__builtin_string(""))));
                        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
                        transpiler_clear_last_code(info);
                    }
                    else {
                        if(_if_conditional230=right_type_128->mHeap&&left_type_173->mHeap&&left_type_173->mPointerNum>0&&right_type_128->mPointerNum>0,                        _if_conditional230) {
                            check_assign_type(((char*)(right_value213=xsprintf("\%s is assining to",((char*)(right_value212=string_to_string(self->name)))))),left_type_173,right_type_128,right_value_127,(_Bool)0,(_Bool)1,info);
                            right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(self->alloc) {
                                std_move(left_type_173,right_type_128,right_value_127,info);
                                __dec_obj69=come_value_174->c_value;
                                come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value214=xsprintf("%s=%s",var__172->mCValueName,right_value_127->c_value))));
                                __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                decrement_ref_count_object(left_type_173,var__172->mCValueName,info,(_Bool)0);
                                std_move(left_type_173,right_type_128,right_value_127,info);
                                __dec_obj70=come_value_174->c_value;
                                come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value215=xsprintf("%s=%s",var__172->mCValueName,right_value_127->c_value))));
                                __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            right_value_id_175=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_127->c_value));
                            if(_if_conditional232=right_value_id_175!=-1,                            _if_conditional232) {
                                remove_object_from_right_values(right_value_id_175,info);
                            }
                            __dec_obj71=come_value_174->type;
                            come_value_174->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(left_type_173))));
                            come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value216,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_value_174->var=var__172;
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
                            add_come_last_code(info,"%s;\n",come_value_174->c_value);
                        }
                        else {
                            if(_if_conditional233=string_operator_equals(right_type_128->mClass->mName,"void")&&left_type_173->mHeap&&left_type_173->mPointerNum>0&&right_type_128->mPointerNum>0,                            _if_conditional233) {
                                check_assign_type(((char*)(right_value218=xsprintf("\%s is assining to",((char*)(right_value217=string_to_string(self->name)))))),left_type_173,right_type_128,right_value_127,(_Bool)0,(_Bool)1,info);
                                right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(self->alloc) {
                                    __dec_obj72=come_value_174->c_value;
                                    come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("%s=%s",var__172->mCValueName,right_value_127->c_value))));
                                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    decrement_ref_count_object(left_type_173,var__172->mCValueName,info,(_Bool)0);
                                    __dec_obj73=come_value_174->c_value;
                                    come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value220=xsprintf("%s=%s",var__172->mCValueName,right_value_127->c_value))));
                                    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __dec_obj74=come_value_174->type;
                                come_value_174->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value221=sType_clone(left_type_173))));
                                come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value221,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                come_value_174->var=var__172;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
                                add_come_last_code(info,"%s;\n",come_value_174->c_value);
                            }
                            else {
                                check_assign_type(((char*)(right_value223=xsprintf("\%s is assining to",((char*)(right_value222=string_to_string(self->name)))))),left_type_173,right_type_128,right_value_127,(_Bool)0,(_Bool)1,info);
                                right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(_if_conditional235=left_type_173->mHeap&&!right_value_127->type->mHeap,                                _if_conditional235) {
                                    if(_if_conditional236=string_operator_equals(right_value_127->type->mClass->mName,"void")&&right_value_127->type->mPointerNum==1,                                    _if_conditional236) {
                                    }
                                    else {
                                        if(_if_conditional237=!right_value_127->type->mDelegate&&!right_value_127->type->mShare&&!gComeGC,                                        _if_conditional237) {
                                            err_msg(info,"require right value as heap object(%s)",self->name);
                                            __result128__ = (_Bool)0;
                                            come_call_finalizer3(left_type_173,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(come_value_174,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                            array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            return __result128__;
                                        }
                                    }
                                }
                                __dec_obj75=come_value_174->c_value;
                                come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value224=xsprintf("%s=%s",var__172->mCValueName,right_value_127->c_value))));
                                __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                __dec_obj76=come_value_174->type;
                                come_value_174->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(left_type_173))));
                                come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value225,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                come_value_174->var=var__172;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
                                add_come_last_code(info,"%s;\n",come_value_174->c_value);
                            }
                        }
                    }
                }
                if(_if_conditional238=self->alloc&&!left_type_173->mConstant&&!left_type_173->mStatic,                _if_conditional238) {
                    if(_if_conditional239=list$1sNodeph_length(left_type_173->mArrayNum)>0,                    _if_conditional239) {
                        add_come_code(info,"%s;\n",((char*)(right_value226=make_define_var(left_type_173,var__172->mCValueName,(_Bool)0,info))));
                        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value227=make_define_var(left_type_173,var__172->mCValueName,(_Bool)0,info))));
                        right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                come_call_finalizer3(left_type_173,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_174,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(right_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result129__ = (_Bool)1;
    array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result129__;
    array_initializer_87 = come_decrement_ref_count2(array_initializer_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional20;
struct sType* __result58__;
void* right_value80;
struct sType* result_47;
_Bool _if_conditional38;
_Bool _if_conditional39;
void* right_value87;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional43;
void* right_value90;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional47;
void* right_value91;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional48;
void* right_value92;
char* __dec_obj20;
_Bool _if_conditional49;
void* right_value93;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional50;
void* right_value101;
struct list$1sNodeph* __dec_obj25;
_Bool _if_conditional63;
_Bool _if_conditional64;
void* right_value102;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional65;
void* right_value109;
struct list$1charph* __dec_obj30;
_Bool _if_conditional69;
void* right_value110;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional70;
_Bool _if_conditional71;
void* right_value111;
struct sNode* __dec_obj32;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
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
void* right_value112;
struct sNode* __dec_obj33;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
void* right_value113;
char* __dec_obj34;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value114;
char* __dec_obj35;
_Bool _if_conditional110;
struct sType* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
right_value87 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
            if(_if_conditional20=self==(void*)0,            _if_conditional20) {
                __result58__ = __result_obj__ = (void*)0;
                return __result58__;
            }
            result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value80,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional38=self!=((void*)0),            _if_conditional38) {
                result_47->mClass=self->mClass;
            }
            if(_if_conditional39=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional39) {
                __dec_obj16=result_47->mMultipleTypes;
                result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value87=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer3(__dec_obj16,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value87,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional43=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional43) {
                __dec_obj18=result_47->mNoSolvedGenericsType;
                result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value90,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional47=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional47) {
                __dec_obj19=result_47->mOriginalLoadVarType;
                result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value91,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional48=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional48) {
                __dec_obj20=result_47->mGenericsName;
                result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value92=string_clone(self->mGenericsName))));
                __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional49=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional49) {
                __dec_obj21=result_47->mGenericsTypes;
                result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value93=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value93,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional50=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional50) {
                __dec_obj25=result_47->mArrayNum;
                result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value101=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value101,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional63=self!=((void*)0),            _if_conditional63) {
                result_47->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional64=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional64) {
                __dec_obj26=result_47->mParamTypes;
                result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value102=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value102,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional65=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional65) {
                __dec_obj30=result_47->mParamNames;
                result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value109,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional69=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional69) {
                __dec_obj31=result_47->mResultType;
                result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value110=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value110,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional70=self!=((void*)0),            _if_conditional70) {
                result_47->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional71=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional71) {
                __dec_obj32=result_47->mAlignas;
                result_47->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=sNode_clone(self->mAlignas))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional72=self!=((void*)0),            _if_conditional72) {
                result_47->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional73=self!=((void*)0),            _if_conditional73) {
                result_47->mShort=self->mShort;
            }
            if(_if_conditional74=self!=((void*)0),            _if_conditional74) {
                result_47->mLong=self->mLong;
            }
            if(_if_conditional75=self!=((void*)0),            _if_conditional75) {
                result_47->mLongLong=self->mLongLong;
            }
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                result_47->mConstant=self->mConstant;
            }
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                result_47->mRegister=self->mRegister;
            }
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                result_47->mVolatile=self->mVolatile;
            }
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                result_47->mStatic=self->mStatic;
            }
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                result_47->mRecord=self->mRecord;
            }
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                result_47->mExtern=self->mExtern;
            }
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                result_47->mRestrict=self->mRestrict;
            }
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                result_47->mImmutable=self->mImmutable;
            }
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                result_47->mHeap=self->mHeap;
            }
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                result_47->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                result_47->mDelegate=self->mDelegate;
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                result_47->mShare=self->mShare;
            }
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                result_47->mClone=self->mClone;
            }
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                result_47->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                result_47->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                result_47->mRefference=self->mRefference;
            }
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                result_47->mException=self->mException;
            }
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                result_47->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                result_47->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                result_47->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional96=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional96) {
                __dec_obj33=result_47->mSizeNum;
                result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=sNode_clone(self->mSizeNum))));
                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                result_47->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                result_47->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional99=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional99) {
                __dec_obj34=result_47->mOriginalTypeName;
                result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value113=string_clone(self->mOriginalTypeName))));
                __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                result_47->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                result_47->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional102=self!=((void*)0),            _if_conditional102) {
                result_47->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                result_47->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                result_47->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                result_47->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                result_47->mInline=self->mInline;
            }
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                result_47->mNullValue=self->mNullValue;
            }
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                result_47->mGuardValue=self->mGuardValue;
            }
            if(_if_conditional109=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional109) {
                __dec_obj35=result_47->mAsmName;
                result_47->mAsmName=(char*)come_increment_ref_count(((char*)(right_value114=string_clone(self->mAsmName))));
                __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                result_47->mArrayPointerType=self->mArrayPointerType;
            }
            __result75__ = __result_obj__ = result_47;
            come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result75__;
            come_call_finalizer3(result_47,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional21;
_Bool _if_conditional23;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional21=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional21) {
                    come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional23) {
                    come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional25=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional25) {
                    come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional26=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional26) {
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional27=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional27) {
                    come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional28=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional28) {
                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional30=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional30) {
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional31=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional31) {
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional33=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional33) {
                    come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional34=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional34) {
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional35=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional35) {
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional36=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional36) {
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional37=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional37) {
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
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional22) {
                                    come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional24=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional24) {
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
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional29=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional29) {
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
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional32=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional32) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional40;
struct list$1sTypeph* __result59__;
void* right_value81;
void* right_value82;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional10;
void* right_value86;
struct list$1sTypeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
right_value86 = (void*)0;
                    if(_if_conditional40=self==((void*)0),                    _if_conditional40) {
                        __result59__ = __result_obj__ = ((void*)0);
                        return __result59__;
                    }
                    result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value82=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                    come_call_finalizer3(right_value81,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value82,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_55=self->head;
                    while(_while_condtional10=it_55!=((void*)0),                    _while_condtional10) {
                        list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(it_55->item)))));
                        come_call_finalizer3(right_value86,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        it_55=it_55->next;
                    }
                    __result62__ = __result_obj__ = result_54;
                    come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result62__;
                    come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result60__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result60__;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional41;
void* right_value83;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj13;
_Bool _if_conditional42;
void* right_value84;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj14;
void* right_value85;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj15;
struct list$1sTypeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*));
right_value84 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value85 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional41=self->len==0,                            _if_conditional41) {
                                litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value83,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_56->prev=((void*)0);
                                litem_56->next=((void*)0);
                                __dec_obj13=litem_56->item;
                                litem_56->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_56;
                                self->head=litem_56;
                            }
                            else {
                                if(_if_conditional42=self->len==1,                                _if_conditional42) {
                                    litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_57->prev=self->head;
                                    litem_57->next=((void*)0);
                                    __dec_obj14=litem_57->item;
                                    litem_57->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_57;
                                    self->head->next=litem_57;
                                }
                                else {
                                    litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_58->prev=self->tail;
                                    litem_58->next=((void*)0);
                                    __dec_obj15=litem_58->item;
                                    litem_58->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_58;
                                    self->tail=litem_58;
                                }
                            }
                            self->len++;
                            __result61__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result61__;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_59;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_59, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_60, 0, sizeof(struct list_item$1sTypeph*));
                    it_59=self->head;
                    while(_while_condtional11=it_59!=((void*)0),                    _while_condtional11) {
                        prev_it_60=it_59;
                        it_59=it_59->next;
                        come_call_finalizer3(prev_it_60,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
struct tuple1$1sTypeph* __result63__;
void* right_value88;
struct tuple1$1sTypeph* result_61;
_Bool _if_conditional46;
void* right_value89;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple1$1sTypeph*));
right_value89 = (void*)0;
                    if(_if_conditional44=self==(void*)0,                    _if_conditional44) {
                        __result63__ = __result_obj__ = (void*)0;
                        return __result63__;
                    }
                    result_61=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value88=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value88,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional46=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional46) {
                        __dec_obj17=result_61->v1;
                        result_61->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value89,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    __result64__ = __result_obj__ = result_61;
                    come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result64__;
                    come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional45=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional45) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional51;
struct list$1sNodeph* __result65__;
void* right_value94;
void* right_value95;
struct list$1sNodeph* result_62;
struct list_item$1sNodeph* it_63;
_Bool _while_condtional12;
void* right_value100;
struct list$1sNodeph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&result_62, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
right_value100 = (void*)0;
                    if(_if_conditional51=self==((void*)0),                    _if_conditional51) {
                        __result65__ = __result_obj__ = ((void*)0);
                        return __result65__;
                    }
                    result_62=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value95=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value94=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                    come_call_finalizer3(right_value94,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value95,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_63=self->head;
                    while(_while_condtional12=it_63!=((void*)0),                    _while_condtional12) {
                        list$1sNodeph_add(result_62,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=sNode_clone(it_63->item)))));
                        if(right_value100) { right_value100 = come_decrement_ref_count2(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_63=it_63->next;
                    }
                    __result70__ = __result_obj__ = result_62;
                    come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result70__;
                    come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result66__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result66__;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional52;
void* right_value96;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj22;
_Bool _if_conditional53;
void* right_value97;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj23;
void* right_value98;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
right_value97 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value98 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional52=self->len==0,                            _if_conditional52) {
                                litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value96,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_64->prev=((void*)0);
                                litem_64->next=((void*)0);
                                __dec_obj22=litem_64->item;
                                litem_64->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_64;
                                self->head=litem_64;
                            }
                            else {
                                if(_if_conditional53=self->len==1,                                _if_conditional53) {
                                    litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_65->prev=self->head;
                                    litem_65->next=((void*)0);
                                    __dec_obj23=litem_65->item;
                                    litem_65->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_65;
                                    self->head->next=litem_65;
                                }
                                else {
                                    litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_66->prev=self->tail;
                                    litem_66->next=((void*)0);
                                    __dec_obj24=litem_66->item;
                                    litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_66;
                                    self->tail=litem_66;
                                }
                            }
                            self->len++;
                            __result67__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result67__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional54;
struct sNode* __result68__;
void* right_value99;
struct sNode* result_67;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
struct sNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
memset(&result_67, 0, sizeof(struct sNode*));
                            if(_if_conditional54=self==(void*)0,                            _if_conditional54) {
                                __result68__ = __result_obj__ = (void*)0;
                                return __result68__;
                            }
                            result_67=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional55=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional55) {
                                result_67->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional56=self!=((void*)0),                            _if_conditional56) {
                                result_67->finalize=self->finalize;
                            }
                            if(_if_conditional57=self!=((void*)0),                            _if_conditional57) {
                                result_67->clone=self->clone;
                            }
                            if(_if_conditional58=self!=((void*)0),                            _if_conditional58) {
                                result_67->compile=self->compile;
                            }
                            if(_if_conditional59=self!=((void*)0),                            _if_conditional59) {
                                result_67->sline=self->sline;
                            }
                            if(_if_conditional60=self!=((void*)0),                            _if_conditional60) {
                                result_67->sname=self->sname;
                            }
                            if(_if_conditional61=self!=((void*)0),                            _if_conditional61) {
                                result_67->terminated=self->terminated;
                            }
                            if(_if_conditional62=self!=((void*)0),                            _if_conditional62) {
                                result_67->kind=self->kind;
                            }
                            __result69__ = __result_obj__ = result_67;
                            if(result_67) { result_67 = come_decrement_ref_count2(result_67, ((struct sNode*)result_67)->finalize, ((struct sNode*)result_67)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result69__;
                            if(result_67) { result_67 = come_decrement_ref_count2(result_67, ((struct sNode*)result_67)->finalize, ((struct sNode*)result_67)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_68;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_69;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_68, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_69, 0, sizeof(struct list_item$1sNodeph*));
                    it_68=self->head;
                    while(_while_condtional13=it_68!=((void*)0),                    _while_condtional13) {
                        prev_it_69=it_68;
                        it_68=it_68->next;
                        come_call_finalizer3(prev_it_69,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional66;
struct list$1charph* __result71__;
void* right_value103;
void* right_value104;
struct list$1charph* result_70;
struct list_item$1charph* it_71;
_Bool _while_condtional14;
void* right_value108;
struct list$1charph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
right_value104 = (void*)0;
memset(&result_70, 0, sizeof(struct list$1charph*));
memset(&it_71, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
                    if(_if_conditional66=self==((void*)0),                    _if_conditional66) {
                        __result71__ = __result_obj__ = ((void*)0);
                        return __result71__;
                    }
                    result_70=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value104=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value103=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                    come_call_finalizer3(right_value103,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value104,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_71=self->head;
                    while(_while_condtional14=it_71!=((void*)0),                    _while_condtional14) {
                        list$1charph_add(result_70,(char*)come_increment_ref_count(((char*)(right_value108=string_clone(it_71->item)))));
                        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_71=it_71->next;
                    }
                    __result74__ = __result_obj__ = result_70;
                    come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result74__;
                    come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result72__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional67;
void* right_value105;
struct list_item$1charph* litem_72;
char* __dec_obj27;
_Bool _if_conditional68;
void* right_value106;
struct list_item$1charph* litem_73;
char* __dec_obj28;
void* right_value107;
struct list_item$1charph* litem_74;
char* __dec_obj29;
struct list$1charph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1charph*));
right_value106 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional67=self->len==0,                            _if_conditional67) {
                                litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                                come_call_finalizer3(right_value105,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_72->prev=((void*)0);
                                litem_72->next=((void*)0);
                                __dec_obj27=litem_72->item;
                                litem_72->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_72;
                                self->head=litem_72;
                            }
                            else {
                                if(_if_conditional68=self->len==1,                                _if_conditional68) {
                                    litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                    come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_73->prev=self->head;
                                    litem_73->next=((void*)0);
                                    __dec_obj28=litem_73->item;
                                    litem_73->item=(char*)come_increment_ref_count(item);
                                    __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_73;
                                    self->head->next=litem_73;
                                }
                                else {
                                    litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                    come_call_finalizer3(right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_74->prev=self->tail;
                                    litem_74->next=((void*)0);
                                    __dec_obj29=litem_74->item;
                                    litem_74->item=(char*)come_increment_ref_count(item);
                                    __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_74;
                                    self->tail=litem_74;
                                }
                            }
                            self->len++;
                            __result73__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result73__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_75;
_Bool _while_condtional15;
struct list_item$1charph* prev_it_76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_75, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_76, 0, sizeof(struct list_item$1charph*));
                    it_75=self->head;
                    while(_while_condtional15=it_75!=((void*)0),                    _while_condtional15) {
                        prev_it_76=it_75;
                        it_75=it_75->next;
                        come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional113;
struct list$1tuple3$3sTypephcharphsNodephph* __result76__;
void* right_value117;
void* right_value118;
struct list$1tuple3$3sTypephcharphsNodephph* result_79;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_80;
_Bool _while_condtional17;
void* right_value126;
struct list$1tuple3$3sTypephcharphsNodephph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&result_79, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_80, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value126 = (void*)0;
            if(_if_conditional113=self==((void*)0),            _if_conditional113) {
                __result76__ = __result_obj__ = ((void*)0);
                return __result76__;
            }
            result_79=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value118=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value117=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 133, "list$1tuple3$3sTypephcharphsNodephph"))))))));
            come_call_finalizer3(right_value117,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value118,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            it_80=self->head;
            while(_while_condtional17=it_80!=((void*)0),            _while_condtional17) {
                list$1tuple3$3sTypephcharphsNodephph_add(result_79,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value126=tuple3$3sTypephcharphsNodephp_clone(it_80->item)))));
                come_call_finalizer3(right_value126,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_80=it_80->next;
            }
            __result81__ = __result_obj__ = result_79;
            come_call_finalizer3(result_79,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result81__;
            come_call_finalizer3(result_79,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct list$1tuple3$3sTypephcharphsNodephph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result77__ = __result_obj__ = self;
                come_call_finalizer3(self,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result77__;
                come_call_finalizer3(self,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_77;
_Bool _while_condtional16;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_78;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_77, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&prev_it_78, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    it_77=self->head;
                    while(_while_condtional16=it_77!=((void*)0),                    _while_condtional16) {
                        prev_it_78=it_77;
                        it_77=it_77->next;
                        come_call_finalizer3(prev_it_78,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional114;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional114=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional114) {
                                come_call_finalizer3(self->item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional118;
void* right_value119;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_81;
struct tuple3$3sTypephcharphsNodeph* __dec_obj41;
_Bool _if_conditional122;
void* right_value120;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_82;
struct tuple3$3sTypephcharphsNodeph* __dec_obj42;
void* right_value121;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_83;
struct tuple3$3sTypephcharphsNodeph* __dec_obj43;
struct list$1tuple3$3sTypephcharphsNodephph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value120 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value121 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    if(_if_conditional118=self->len==0,                    _if_conditional118) {
                        litem_81=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value119=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 147, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(right_value119,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_81->prev=((void*)0);
                        litem_81->next=((void*)0);
                        __dec_obj41=litem_81->item;
                        litem_81->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj41,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_81;
                        self->head=litem_81;
                    }
                    else {
                        if(_if_conditional122=self->len==1,                        _if_conditional122) {
                            litem_82=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value120=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 157, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer3(right_value120,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_82->prev=self->head;
                            litem_82->next=((void*)0);
                            __dec_obj42=litem_82->item;
                            litem_82->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj42,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_82;
                            self->head->next=litem_82;
                        }
                        else {
                            litem_83=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value121=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 167, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer3(right_value121,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_83->prev=self->tail;
                            litem_83->next=((void*)0);
                            __dec_obj43=litem_83->item;
                            litem_83->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj43,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_83;
                            self->tail=litem_83;
                        }
                    }
                    self->len++;
                    __result78__ = __result_obj__ = self;
                    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result78__;
                    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional126=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional126) {
                                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional127=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional127) {
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional128=self!=((void*)0)&&self->v3!=((void*)0),                                _if_conditional128) {
                                    if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional129;
struct tuple3$3sTypephcharphsNodeph* __result79__;
void* right_value122;
struct tuple3$3sTypephcharphsNodeph* result_84;
_Bool _if_conditional133;
void* right_value123;
struct sType* __dec_obj44;
_Bool _if_conditional134;
void* right_value124;
char* __dec_obj45;
_Bool _if_conditional135;
void* right_value125;
struct sNode* __dec_obj46;
struct tuple3$3sTypephcharphsNodeph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
memset(&result_84, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
                    if(_if_conditional129=self==(void*)0,                    _if_conditional129) {
                        __result79__ = __result_obj__ = (void*)0;
                        return __result79__;
                    }
                    result_84=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value122=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3, "tuple3$3sTypephcharphsNodeph"))));
                    come_call_finalizer3(right_value122,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional133=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional133) {
                        __dec_obj44=result_84->v1;
                        result_84->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value123,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional134=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional134) {
                        __dec_obj45=result_84->v2;
                        result_84->v2=(char*)come_increment_ref_count(((char*)(right_value124=string_clone(self->v2))));
                        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional135=self!=((void*)0)&&self->v3!=((void*)0),                    _if_conditional135) {
                        __dec_obj46=result_84->v3;
                        result_84->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value125=sNode_clone(self->v3))));
                        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value125) { right_value125 = come_decrement_ref_count2(right_value125, ((struct sNode*)right_value125)->finalize, ((struct sNode*)right_value125)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    __result80__ = __result_obj__ = result_84;
                    come_call_finalizer3(result_84,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result80__;
                    come_call_finalizer3(result_84,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional130=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional130) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional131=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional131) {
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional132=self!=((void*)0)&&self->v3!=((void*)0),                        _if_conditional132) {
                            if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_85;
_Bool _while_condtional18;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_86;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_85, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&prev_it_86, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
            it_85=self->head;
            while(_while_condtional18=it_85!=((void*)0),            _while_condtional18) {
                prev_it_86=it_85;
                it_85=it_85->next;
                come_call_finalizer3(prev_it_86,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_88;
unsigned int hash_89;
unsigned int it_90;
_Bool _while_condtional19;
_Bool _if_conditional144;
_Bool _if_conditional145;
struct sVar* __result85__;
_Bool _if_conditional150;
_Bool _if_conditional151;
struct sVar* __result86__;
struct sVar* __result87__;
struct sVar* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_88, 0, sizeof(struct sVar*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(unsigned int));
            memset(&default_value_88,0,sizeof(struct sVar*));
            hash_89=string_get_hash_key(((char*)key))%self->size;
            it_90=hash_89;
            while(_while_condtional19=(_Bool)1,            _while_condtional19) {
                if(_if_conditional144=self->item_existance[it_90],                _if_conditional144) {
                    if(_if_conditional145=string_equals(self->keys[it_90],key),                    _if_conditional145) {
                        __result85__ = __result_obj__ = self->items[it_90];
                        come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 0, 0, (void*)0);
                        return __result85__;
                    }
                    it_90++;
                    if(_if_conditional150=it_90>=self->size,                    _if_conditional150) {
                        it_90=0;
                    }
                    else {
                        if(_if_conditional151=it_90==hash_89,                        _if_conditional151) {
                            __result86__ = __result_obj__ = default_value_88;
                            come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result86__;
                        }
                    }
                }
                else {
                    __result87__ = __result_obj__ = default_value_88;
                    come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result87__;
                }
            }
            __result88__ = __result_obj__ = default_value_88;
            come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result88__;
            come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional146=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional146) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional147=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional147) {
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional148=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional148) {
                                come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional149=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional149) {
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional158;
struct tuple3$3sTypephcharphsNodeph* result_97;
struct tuple3$3sTypephcharphsNodeph* __result93__;
_Bool _if_conditional159;
struct tuple3$3sTypephcharphsNodeph* __result94__;
struct tuple3$3sTypephcharphsNodeph* result_98;
struct tuple3$3sTypephcharphsNodeph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_97, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_98, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional158=self==((void*)0),                    _if_conditional158) {
                        memset(&result_97,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __result93__ = __result_obj__ = result_97;
                        return __result93__;
                    }
                    self->it=self->head;
                    if(self->it) {
                        __result94__ = __result_obj__ = self->it->item;
                        return __result94__;
                    }
                    memset(&result_98,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __result95__ = __result_obj__ = result_98;
                    return __result95__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result96__ = self==((void*)0)||self->it==((void*)0);
                    return __result96__;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional160;
struct tuple3$3sTypephcharphsNodeph* result_100;
struct tuple3$3sTypephcharphsNodeph* __result97__;
_Bool _if_conditional161;
struct tuple3$3sTypephcharphsNodeph* __result98__;
struct tuple3$3sTypephcharphsNodeph* result_101;
struct tuple3$3sTypephcharphsNodeph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_100, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_101, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional160=self==((void*)0)||self->it==((void*)0),                    _if_conditional160) {
                        memset(&result_100,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __result97__ = __result_obj__ = result_100;
                        return __result97__;
                    }
                    self->it=self->it->next;
                    if(self->it) {
                        __result98__ = __result_obj__ = self->it->item;
                        return __result98__;
                    }
                    memset(&result_101,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __result99__ = __result_obj__ = result_101;
                    return __result99__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional165;
_Bool _if_conditional166;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional165=self!=((void*)0)&&self->c_value!=((void*)0),                            _if_conditional165) {
                                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional166=self!=((void*)0)&&self->type!=((void*)0),                            _if_conditional166) {
                                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional168;
int __result102__;
int __result103__;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional168=self==((void*)0),                            _if_conditional168) {
                                __result102__ = 0;
                                return __result102__;
                            }
                            __result103__ = self->len;
                            return __result103__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional170;
struct sNode* result_109;
struct sNode* __result104__;
_Bool _if_conditional171;
struct sNode* __result105__;
struct sNode* result_110;
struct sNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_109, 0, sizeof(struct sNode*));
memset(&result_110, 0, sizeof(struct sNode*));
                                if(_if_conditional170=self==((void*)0),                                _if_conditional170) {
                                    memset(&result_109,0,sizeof(struct sNode*));
                                    __result104__ = __result_obj__ = result_109;
                                    return __result104__;
                                }
                                self->it=self->head;
                                if(self->it) {
                                    __result105__ = __result_obj__ = self->it->item;
                                    return __result105__;
                                }
                                memset(&result_110,0,sizeof(struct sNode*));
                                __result106__ = __result_obj__ = result_110;
                                return __result106__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
                                __result107__ = self==((void*)0)||self->it==((void*)0);
                                return __result107__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional172;
struct sNode* result_112;
struct sNode* __result108__;
_Bool _if_conditional173;
struct sNode* __result109__;
struct sNode* result_113;
struct sNode* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_112, 0, sizeof(struct sNode*));
memset(&result_113, 0, sizeof(struct sNode*));
                                if(_if_conditional172=self==((void*)0)||self->it==((void*)0),                                _if_conditional172) {
                                    memset(&result_112,0,sizeof(struct sNode*));
                                    __result108__ = __result_obj__ = result_112;
                                    return __result108__;
                                }
                                self->it=self->it->next;
                                if(self->it) {
                                    __result109__ = __result_obj__ = self->it->item;
                                    return __result109__;
                                }
                                memset(&result_113,0,sizeof(struct sNode*));
                                __result110__ = __result_obj__ = result_113;
                                return __result110__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional184;
void* right_value157;
struct list_item$1CVALUEph* litem_124;
struct CVALUE* __dec_obj53;
_Bool _if_conditional186;
void* right_value158;
struct list_item$1CVALUEph* litem_125;
struct CVALUE* __dec_obj54;
void* right_value159;
struct list_item$1CVALUEph* litem_126;
struct CVALUE* __dec_obj55;
struct list$1CVALUEph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
memset(&litem_124, 0, sizeof(struct list_item$1CVALUEph*));
right_value158 = (void*)0;
memset(&litem_125, 0, sizeof(struct list_item$1CVALUEph*));
right_value159 = (void*)0;
memset(&litem_126, 0, sizeof(struct list_item$1CVALUEph*));
                    if(_if_conditional184=self->len==0,                    _if_conditional184) {
                        litem_124=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value157=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value157,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_124->prev=((void*)0);
                        litem_124->next=((void*)0);
                        __dec_obj53=litem_124->item;
                        litem_124->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj53,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_124;
                        self->head=litem_124;
                    }
                    else {
                        if(_if_conditional186=self->len==1,                        _if_conditional186) {
                            litem_125=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value158=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                            come_call_finalizer3(right_value158,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_125->prev=self->head;
                            litem_125->next=((void*)0);
                            __dec_obj54=litem_125->item;
                            litem_125->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj54,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_125;
                            self->head->next=litem_125;
                        }
                        else {
                            litem_126=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value159=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                            come_call_finalizer3(right_value159,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_126->prev=self->tail;
                            litem_126->next=((void*)0);
                            __dec_obj55=litem_126->item;
                            litem_126->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj55,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_126;
                            self->tail=litem_126;
                        }
                    }
                    self->len++;
                    __result112__ = __result_obj__ = self;
                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                    return __result112__;
                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional185;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional185=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional185) {
                                come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional194;
char* result_132;
char* __result115__;
_Bool _if_conditional195;
char* __result116__;
char* result_133;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_132, 0, sizeof(char*));
memset(&result_133, 0, sizeof(char*));
                        if(_if_conditional194=self==((void*)0),                        _if_conditional194) {
                            memset(&result_132,0,sizeof(char*));
                            __result115__ = __result_obj__ = result_132;
                            return __result115__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result116__ = __result_obj__ = self->it->item;
                            return __result116__;
                        }
                        memset(&result_133,0,sizeof(char*));
                        __result117__ = __result_obj__ = result_133;
                        return __result117__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result118__ = self==((void*)0)||self->it==((void*)0);
                        return __result118__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional196;
char* result_135;
char* __result119__;
_Bool _if_conditional197;
char* __result120__;
char* result_136;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_135, 0, sizeof(char*));
memset(&result_136, 0, sizeof(char*));
                        if(_if_conditional196=self==((void*)0)||self->it==((void*)0),                        _if_conditional196) {
                            memset(&result_135,0,sizeof(char*));
                            __result119__ = __result_obj__ = result_135;
                            return __result119__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result120__ = __result_obj__ = self->it->item;
                            return __result120__;
                        }
                        memset(&result_136,0,sizeof(char*));
                        __result121__ = __result_obj__ = result_136;
                        return __result121__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional198;
int __result122__;
int __result123__;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional198=self==((void*)0),                            _if_conditional198) {
                                __result122__ = 0;
                                return __result122__;
                            }
                            __result123__ = self->len;
                            return __result123__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional200;
struct list_item$1sTypeph* it_137;
int i_138;
_Bool _while_condtional20;
_Bool _if_conditional201;
struct sType* __result124__;
struct sType* default_value_139;
struct sType* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_137, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_138, 0, sizeof(int));
memset(&default_value_139, 0, sizeof(struct sType*));
                                if(_if_conditional200=position<0,                                _if_conditional200) {
                                    position+=self->len;
                                }
                                it_137=self->head;
                                i_138=0;
                                while(_while_condtional20=it_137!=((void*)0),                                _while_condtional20) {
                                    if(_if_conditional201=position==i_138,                                    _if_conditional201) {
                                        __result124__ = __result_obj__ = it_137->item;
                                        return __result124__;
                                    }
                                    it_137=it_137->next;
                                    i_138++;
                                }
                                memset(&default_value_139,0,sizeof(struct sType*));
                                __result125__ = __result_obj__ = default_value_139;
                                come_call_finalizer3(default_value_139,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result125__;
                                come_call_finalizer3(default_value_139,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value228;
char* __dec_obj77;
void* right_value229;
char* __dec_obj78;
struct sLoadNode* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value228 = (void*)0;
right_value229 = (void*)0;
    __dec_obj77=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value228=__builtin_string(name))));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj78=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value229=__builtin_string(info->sname))));
    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result130__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result130__;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
void* __result_obj__;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
    __result131__ = (_Bool)0;
    return __result131__;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __result_obj__;
void* right_value230;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value230 = (void*)0;
    __result132__ = __result_obj__ = ((char*)(right_value230=__builtin_string("sLoadNode")));
    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result132__;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
struct sClass* current_stack_frame_struct_176;
_Bool _if_conditional242;
struct sVar* parent_var_177;
_Bool _if_conditional243;
_Bool _if_conditional244;
void* right_value231;
struct CVALUE* come_value_178;
struct sType* type_179;
void* right_value232;
char* __dec_obj79;
void* right_value233;
struct sType* __dec_obj80;
_Bool __result133__;
struct sVar* var__180;
_Bool _if_conditional245;
_Bool _if_conditional246;
struct sFun* fun_184;
_Bool _if_conditional266;
void* right_value234;
struct CVALUE* come_value_185;
void* right_value235;
char* __dec_obj81;
struct sType* __dec_obj82;
_Bool __result138__;
_Bool __result139__;
void* right_value236;
struct CVALUE* come_value_186;
void* right_value237;
char* __dec_obj83;
void* right_value238;
struct sType* __dec_obj84;
_Bool _if_conditional267;
void* right_value239;
struct sType* __dec_obj85;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&current_stack_frame_struct_176, 0, sizeof(struct sClass*));
memset(&parent_var_177, 0, sizeof(struct sVar*));
right_value231 = (void*)0;
memset(&come_value_178, 0, sizeof(struct CVALUE*));
memset(&type_179, 0, sizeof(struct sType*));
right_value232 = (void*)0;
right_value233 = (void*)0;
memset(&var__180, 0, sizeof(struct sVar*));
memset(&fun_184, 0, sizeof(struct sFun*));
right_value234 = (void*)0;
memset(&come_value_185, 0, sizeof(struct CVALUE*));
right_value235 = (void*)0;
right_value236 = (void*)0;
memset(&come_value_186, 0, sizeof(struct CVALUE*));
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
    current_stack_frame_struct_176=info->current_stack_frame_struct;
    if(_if_conditional242=current_stack_frame_struct_176&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),    _if_conditional242) {
        parent_var_177=get_variable_from_table(info->lv_table->mParent,self->name);
        if(_if_conditional243=parent_var_177!=((void*)0),        _if_conditional243) {
            if(_if_conditional244=string_operator_not_equals(parent_var_177->mFunName,info->come_fun->mName),            _if_conditional244) {
                come_value_178=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value231=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 609, "CVALUE"))));
                come_call_finalizer3(right_value231,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                type_179=parent_var_177->mType;
                __dec_obj79=come_value_178->c_value;
                come_value_178->c_value=(char*)come_increment_ref_count(((char*)(right_value232=xsprintf("(*(parent->%s))",parent_var_177->mCValueName))));
                __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj80=come_value_178->type;
                come_value_178->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value233=sType_clone(type_179))));
                come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value233,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_value_178->var=((void*)0);
                add_come_last_code(info,"%s;\n",come_value_178->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_178));
                __result133__ = (_Bool)1;
                come_call_finalizer3(come_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result133__;
                come_call_finalizer3(come_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    var__180=get_variable_from_table(info->lv_table,self->name);
    if(_if_conditional245=var__180==((void*)0),    _if_conditional245) {
        var__180=get_variable_from_table(info->gv_table,self->name);
        if(_if_conditional246=var__180==((void*)0),        _if_conditional246) {
            fun_184=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
            if(fun_184) {
                come_value_185=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value234=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 636, "CVALUE"))));
                come_call_finalizer3(right_value234,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj81=come_value_185->c_value;
                come_value_185->c_value=(char*)come_increment_ref_count(((char*)(right_value235=xsprintf("%s",fun_184->mName))));
                __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj82=come_value_185->type;
                come_value_185->type=(struct sType*)come_increment_ref_count(fun_184->mLambdaType);
                come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_185->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_185));
                __result138__ = (_Bool)1;
                come_call_finalizer3(come_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result138__;
                come_call_finalizer3(come_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                __result139__ = (_Bool)1;
                return __result139__;
            }
        }
    }
    come_value_186=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value236=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 653, "CVALUE"))));
    come_call_finalizer3(right_value236,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj83=come_value_186->c_value;
    come_value_186->c_value=(char*)come_increment_ref_count(((char*)(right_value237=xsprintf("%s",var__180->mCValueName))));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj84=come_value_186->type;
    come_value_186->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value238=sType_clone(var__180->mType))));
    come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value238,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_186->var=var__180;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_186));
    if(_if_conditional267=list$1sNodeph_length(come_value_186->type->mArrayNum)==1,    _if_conditional267) {
        __dec_obj85=come_value_186->type->mOriginalLoadVarType->v1;
        come_value_186->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value239=sType_clone(come_value_186->type))));
        come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value239,sType_finalize, 0, 1, 0, 0, __result_obj__);
        list$1sNodeph_reset(come_value_186->type->mArrayNum);
        come_value_186->type->mPointerNum++;
        come_value_186->type->mOriginalTypeNamePointerNum=come_value_186->type->mPointerNum;
    }
    __result141__ = (_Bool)1;
    come_call_finalizer3(come_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result141__;
    come_call_finalizer3(come_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_181;
unsigned int hash_182;
unsigned int it_183;
_Bool _while_condtional21;
_Bool _if_conditional247;
_Bool _if_conditional248;
struct sFun* __result134__;
_Bool _if_conditional264;
_Bool _if_conditional265;
struct sFun* __result135__;
struct sFun* __result136__;
struct sFun* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_181, 0, sizeof(struct sFun*));
memset(&hash_182, 0, sizeof(unsigned int));
memset(&it_183, 0, sizeof(unsigned int));
                memset(&default_value_181,0,sizeof(struct sFun*));
                hash_182=string_get_hash_key(((char*)key))%self->size;
                it_183=hash_182;
                while(_while_condtional21=(_Bool)1,                _while_condtional21) {
                    if(_if_conditional247=self->item_existance[it_183],                    _if_conditional247) {
                        if(_if_conditional248=string_equals(self->keys[it_183],key),                        _if_conditional248) {
                            __result134__ = __result_obj__ = self->items[it_183];
                            come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result134__;
                        }
                        it_183++;
                        if(_if_conditional264=it_183>=self->size,                        _if_conditional264) {
                            it_183=0;
                        }
                        else {
                            if(_if_conditional265=it_183==hash_182,                            _if_conditional265) {
                                __result135__ = __result_obj__ = default_value_181;
                                come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result135__;
                            }
                        }
                    }
                    else {
                        __result136__ = __result_obj__ = default_value_181;
                        come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result136__;
                    }
                }
                __result137__ = __result_obj__ = default_value_181;
                come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result137__;
                come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional249=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional249) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional250=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional250) {
                                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional251=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional251) {
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional252=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional252) {
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional253=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional253) {
                                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional254=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional254) {
                                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional255=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional255) {
                                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional258=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional258) {
                                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional259=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional259) {
                                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional260=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional260) {
                                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional261=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional261) {
                                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional262=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional262) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional263=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional263) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional256;
_Bool _if_conditional257;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional256=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional256) {
                                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional257=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional257) {
                                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_187;
_Bool _while_condtional22;
struct list_item$1sNodeph* prev_it_188;
struct list$1sNodeph* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_187, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_188, 0, sizeof(struct list_item$1sNodeph*));
            it_187=self->head;
            while(_while_condtional22=it_187!=((void*)0),            _while_condtional22) {
                prev_it_188=it_187;
                it_187=it_187->next;
                come_call_finalizer3(prev_it_188,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result140__ = __result_obj__ = self;
            return __result140__;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value240;
char* __dec_obj86;
void* right_value241;
char* __dec_obj87;
struct sFunLoadNode* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value240 = (void*)0;
right_value241 = (void*)0;
    __dec_obj86=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value240=__builtin_string(name))));
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj87=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value241=__builtin_string(info->sname))));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result142__ = __result_obj__ = self;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result142__;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sFunLoadNode_terminated(struct sFunLoadNode* self){
void* __result_obj__;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    __result143__ = (_Bool)0;
    return __result143__;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __result_obj__;
void* right_value242;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value242 = (void*)0;
    __result144__ = __result_obj__ = ((char*)(right_value242=__builtin_string("sFunLoadNode")));
    right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result144__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* fun_189;
_Bool _if_conditional270;
_Bool __result145__;
void* right_value243;
struct CVALUE* come_value_190;
void* right_value244;
char* __dec_obj88;
struct sType* __dec_obj89;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_189, 0, sizeof(struct sFun*));
right_value243 = (void*)0;
memset(&come_value_190, 0, sizeof(struct CVALUE*));
right_value244 = (void*)0;
    fun_189=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
    if(_if_conditional270=fun_189==((void*)0),    _if_conditional270) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        __result145__ = (_Bool)0;
        return __result145__;
    }
    else {
        come_value_190=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value243=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 703, "CVALUE"))));
        come_call_finalizer3(right_value243,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj88=come_value_190->c_value;
        come_value_190->c_value=(char*)come_increment_ref_count(((char*)(right_value244=xsprintf("%s",fun_189->mName))));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj89=come_value_190->type;
        come_value_190->type=(struct sType*)come_increment_ref_count(fun_189->mLambdaType);
        come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_190->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_190));
        come_call_finalizer3(come_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result146__ = (_Bool)1;
    return __result146__;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
void* __result_obj__;
_Bool _if_conditional268;
_Bool _if_conditional269;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional268=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional268) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional269=self!=((void*)0)&&self->name!=((void*)0),        _if_conditional269) {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value245;
struct sVar* self_191;
void* right_value246;
char* __dec_obj90;
void* right_value247;
struct sType* __dec_obj91;
_Bool _if_conditional271;
void* right_value248;
char* __dec_obj92;
static int n_192=0;
void* right_value249;
char* __dec_obj93;
_Bool _if_conditional272;
void* right_value250;
char* __dec_obj94;
char* __dec_obj95;
void* right_value257;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
memset(&self_191, 0, sizeof(struct sVar*));
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value257 = (void*)0;
    self_191=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value245=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 718, "sVar"))));
    come_call_finalizer3(right_value245,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj90=self_191->mName;
    self_191->mName=(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(name))));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj91=self_191->mType;
    self_191->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=sType_clone(type))));
    come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value247,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(type->mFunctionParam) {
        __dec_obj92=self_191->mCValueName;
        self_191->mCValueName=(char*)come_increment_ref_count(((char*)(right_value248=__builtin_string(name))));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj93=self_191->mCValueName;
        self_191->mCValueName=(char*)come_increment_ref_count(((char*)(right_value249=xsprintf("%s_%d",name,n_192++))));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    self_191->mBlockLevel=info->block_level;
    self_191->mAllocaValue=(_Bool)0;
    self_191->mFunctionParam=(_Bool)0;
    self_191->mNoFree=(_Bool)0;
    if(info->come_fun) {
        __dec_obj94=self_191->mFunName;
        self_191->mFunName=(char*)come_increment_ref_count(((char*)(right_value250=string_clone(info->come_fun->mName))));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj95=self_191->mFunName;
        self_191->mFunName=((void*)0);
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value257=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_191));
    right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_191,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional273;
unsigned int hash_210;
unsigned int it_211;
_Bool _while_condtional25;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool same_key_exist_228;
char* it2_231;
_Bool _if_conditional316;
_Bool _if_conditional317;
struct map$2charphsVarph* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_210, 0, sizeof(unsigned int));
memset(&it_211, 0, sizeof(unsigned int));
memset(&same_key_exist_228, 0, sizeof(_Bool));
memset(&it2_231, 0, sizeof(char*));
        if(_if_conditional273=self->len*10>=self->size,        _if_conditional273) {
            map$2charphsVarph_rehash(self);
        }
        hash_210=string_get_hash_key(key)%self->size;
        it_211=hash_210;
        while(_while_condtional25=(_Bool)1,        _while_condtional25) {
            if(_if_conditional285=self->item_existance[it_211],            _if_conditional285) {
                if(_if_conditional286=string_equals(self->keys[it_211],key),                _if_conditional286) {
                    if(_if_conditional287=1,                    _if_conditional287) {
                        list$1charp_remove(self->key_list,self->keys[it_211]);
                        self->keys[it_211] = come_decrement_ref_count2(self->keys[it_211], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_211]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_211]);
                        self->keys[it_211]=key;
                    }
                    if(_if_conditional307=1,                    _if_conditional307) {
                        come_call_finalizer3(self->items[it_211],sVar_finalize, 0, 0, 0, 0, (void*)0);
                        self->items[it_211]=(struct sVar*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_211]=item;
                    }
                    break;
                }
                it_211++;
                if(_if_conditional308=it_211>=self->size,                _if_conditional308) {
                    it_211=0;
                }
                else {
                    if(_if_conditional309=it_211==hash_210,                    _if_conditional309) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_211]=(_Bool)1;
                if(_if_conditional310=1,                _if_conditional310) {
                    self->keys[it_211]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_211]=key;
                }
                if(_if_conditional311=1,                _if_conditional311) {
                    self->items[it_211]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_211]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_228=(_Bool)0;
        for(        it2_231=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_231=list$1charp_next(self->key_list)        ){
            if(_if_conditional316=string_equals(it2_231,key),            _if_conditional316) {
                same_key_exist_228=(_Bool)1;
            }
        }
        if(_if_conditional317=!same_key_exist_228,        _if_conditional317) {
            list$1charp_push_back(self->key_list,key);
        }
        __result170__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
        return __result170__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_193;
void* right_value251;
char** keys_194;
void* right_value252;
struct sVar** items_195;
void* right_value253;
_Bool* item_existance_196;
int len_197;
char* it_200;
struct sVar* default_value_203;
struct sVar* it2_206;
unsigned int hash_207;
int n_208;
_Bool _while_condtional24;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
struct sVar* default_value_209;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_193, 0, sizeof(int));
right_value251 = (void*)0;
memset(&keys_194, 0, sizeof(char**));
right_value252 = (void*)0;
memset(&items_195, 0, sizeof(struct sVar**));
right_value253 = (void*)0;
memset(&item_existance_196, 0, sizeof(_Bool*));
memset(&len_197, 0, sizeof(int));
memset(&it_200, 0, sizeof(char*));
memset(&default_value_203, 0, sizeof(struct sVar*));
memset(&it2_206, 0, sizeof(struct sVar*));
memset(&hash_207, 0, sizeof(unsigned int));
memset(&n_208, 0, sizeof(int));
memset(&default_value_209, 0, sizeof(struct sVar*));
                size_193=self->size*10;
                keys_194=(char**)come_increment_ref_count(((char**)(right_value251=(char**)come_calloc(1, sizeof(char*)*(1*(size_193)), "./neo-c.h", 1313, "char*%"))));
                right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_195=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value252=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_193)), "./neo-c.h", 1314, "sVar*%"))));
                come_call_finalizer3(right_value252,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                item_existance_196=(_Bool*)come_increment_ref_count(((_Bool*)(right_value253=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_193)), "./neo-c.h", 1315, "bool"))));
                right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_197=0;
                for(                it_200=map$2charphsVarph_begin(self);                !map$2charphsVarph_end(self);                it_200=map$2charphsVarph_next(self)                ){
                    memset(&default_value_203,0,sizeof(struct sVar*));
                    it2_206=map$2charphsVarph_at(self,it_200,default_value_203);
                    hash_207=string_get_hash_key(it_200)%size_193;
                    n_208=hash_207;
                    while(_while_condtional24=(_Bool)1,                    _while_condtional24) {
                        if(_if_conditional282=item_existance_196[n_208],                        _if_conditional282) {
                            n_208++;
                            if(_if_conditional283=n_208>=size_193,                            _if_conditional283) {
                                n_208=0;
                            }
                            else {
                                if(_if_conditional284=n_208==hash_207,                                _if_conditional284) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_196[n_208]=(_Bool)1;
                            keys_194[n_208]=it_200;
                            items_195[n_208]=map$2charphsVarph_at(self,it_200,default_value_209);
                            len_197++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_194;
                self->items=items_195;
                self->item_existance=item_existance_196;
                self->size=size_193;
                self->len=len_197;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional274;
char* result_198;
char* __result147__;
_Bool _if_conditional275;
char* __result148__;
char* result_199;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_198, 0, sizeof(char*));
memset(&result_199, 0, sizeof(char*));
                    if(_if_conditional274=self==((void*)0),                    _if_conditional274) {
                        memset(&result_198,0,sizeof(char*));
                        __result147__ = __result_obj__ = result_198;
                        return __result147__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result148__ = __result_obj__ = self->key_list->it->item;
                        return __result148__;
                    }
                    memset(&result_199,0,sizeof(char*));
                    __result149__ = __result_obj__ = result_199;
                    return __result149__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result150__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result150__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional276;
char* result_201;
char* __result151__;
_Bool _if_conditional277;
char* __result152__;
char* result_202;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_201, 0, sizeof(char*));
memset(&result_202, 0, sizeof(char*));
                    if(_if_conditional276=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional276) {
                        memset(&result_201,0,sizeof(char*));
                        __result151__ = __result_obj__ = result_201;
                        return __result151__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result152__ = __result_obj__ = self->key_list->it->item;
                        return __result152__;
                    }
                    memset(&result_202,0,sizeof(char*));
                    __result153__ = __result_obj__ = result_202;
                    return __result153__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_204;
unsigned int it_205;
_Bool _while_condtional23;
_Bool _if_conditional278;
_Bool _if_conditional279;
struct sVar* __result154__;
_Bool _if_conditional280;
_Bool _if_conditional281;
struct sVar* __result155__;
struct sVar* __result156__;
struct sVar* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_204, 0, sizeof(unsigned int));
memset(&it_205, 0, sizeof(unsigned int));
                        hash_204=string_get_hash_key(((char*)key))%self->size;
                        it_205=hash_204;
                        while(_while_condtional23=(_Bool)1,                        _while_condtional23) {
                            if(_if_conditional278=self->item_existance[it_205],                            _if_conditional278) {
                                if(_if_conditional279=string_equals(self->keys[it_205],key),                                _if_conditional279) {
                                    __result154__ = __result_obj__ = self->items[it_205];
                                    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result154__;
                                }
                                it_205++;
                                if(_if_conditional280=it_205>=self->size,                                _if_conditional280) {
                                    it_205=0;
                                }
                                else {
                                    if(_if_conditional281=it_205==hash_204,                                    _if_conditional281) {
                                        __result155__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result155__;
                                    }
                                }
                            }
                            else {
                                __result156__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result156__;
                            }
                        }
                        __result157__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                        return __result157__;
                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_212;
struct list_item$1charp* it_213;
_Bool _while_condtional26;
_Bool _if_conditional288;
struct list$1charp* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_212, 0, sizeof(int));
memset(&it_213, 0, sizeof(struct list_item$1charp*));
                            it2_212=0;
                            it_213=self->head;
                            while(_while_condtional26=it_213!=((void*)0),                            _while_condtional26) {
                                if(_if_conditional288=string_equals(it_213->item,item),                                _if_conditional288) {
                                    list$1charp_delete(self,it2_212,it2_212+1);
                                    break;
                                }
                                it2_212++;
                                it_213=it_213->next;
                            }
                            __result161__ = __result_obj__ = self;
                            return __result161__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
int tmp_214;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
struct list$1charp* __result158__;
_Bool _if_conditional295;
_Bool _if_conditional296;
struct list_item$1charp* it_217;
int i_218;
_Bool _while_condtional28;
_Bool _if_conditional297;
struct list_item$1charp* prev_it_219;
_Bool _if_conditional298;
_Bool _if_conditional299;
struct list_item$1charp* it_220;
int i_221;
_Bool _while_condtional29;
_Bool _if_conditional300;
_Bool _if_conditional301;
struct list_item$1charp* prev_it_222;
struct list_item$1charp* it_223;
struct list_item$1charp* head_prev_it_224;
struct list_item$1charp* tail_it_225;
int i_226;
_Bool _while_condtional30;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
struct list_item$1charp* prev_it_227;
_Bool _if_conditional305;
_Bool _if_conditional306;
struct list$1charp* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_214, 0, sizeof(int));
memset(&it_217, 0, sizeof(struct list_item$1charp*));
memset(&i_218, 0, sizeof(int));
memset(&prev_it_219, 0, sizeof(struct list_item$1charp*));
memset(&it_220, 0, sizeof(struct list_item$1charp*));
memset(&i_221, 0, sizeof(int));
memset(&prev_it_222, 0, sizeof(struct list_item$1charp*));
memset(&it_223, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_224, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_225, 0, sizeof(struct list_item$1charp*));
memset(&i_226, 0, sizeof(int));
memset(&prev_it_227, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional289=head<0,                                        _if_conditional289) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional290=tail<0,                                        _if_conditional290) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional291=head>tail,                                        _if_conditional291) {
                                            tmp_214=tail;
                                            tail=head;
                                            head=tmp_214;
                                        }
                                        if(_if_conditional292=head<0,                                        _if_conditional292) {
                                            head=0;
                                        }
                                        if(_if_conditional293=tail>self->len,                                        _if_conditional293) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional294=head==tail,                                        _if_conditional294) {
                                            __result158__ = __result_obj__ = self;
                                            return __result158__;
                                        }
                                        if(_if_conditional295=head==0&&tail==self->len,                                        _if_conditional295) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional296=head==0,                                            _if_conditional296) {
                                                it_217=self->head;
                                                i_218=0;
                                                while(_while_condtional28=it_217!=((void*)0),                                                _while_condtional28) {
                                                    if(_if_conditional297=i_218<tail,                                                    _if_conditional297) {
                                                        prev_it_219=it_217;
                                                        it_217=it_217->next;
                                                        i_218++;
                                                        come_call_finalizer3(prev_it_219,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional298=i_218==tail,                                                        _if_conditional298) {
                                                            self->head=it_217;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_217=it_217->next;
                                                            i_218++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional299=tail==self->len,                                                _if_conditional299) {
                                                    it_220=self->head;
                                                    i_221=0;
                                                    while(_while_condtional29=it_220!=((void*)0),                                                    _while_condtional29) {
                                                        if(_if_conditional300=i_221==head,                                                        _if_conditional300) {
                                                            self->tail=it_220->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional301=i_221>=head,                                                        _if_conditional301) {
                                                            prev_it_222=it_220;
                                                            it_220=it_220->next;
                                                            i_221++;
                                                            come_call_finalizer3(prev_it_222,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_220=it_220->next;
                                                            i_221++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_223=self->head;
                                                    head_prev_it_224=((void*)0);
                                                    tail_it_225=((void*)0);
                                                    i_226=0;
                                                    while(_while_condtional30=it_223!=((void*)0),                                                    _while_condtional30) {
                                                        if(_if_conditional302=i_226==head,                                                        _if_conditional302) {
                                                            head_prev_it_224=it_223->prev;
                                                        }
                                                        if(_if_conditional303=i_226==tail,                                                        _if_conditional303) {
                                                            tail_it_225=it_223;
                                                        }
                                                        if(_if_conditional304=i_226>=head&&i_226<tail,                                                        _if_conditional304) {
                                                            prev_it_227=it_223;
                                                            it_223=it_223->next;
                                                            i_226++;
                                                            come_call_finalizer3(prev_it_227,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_223=it_223->next;
                                                            i_226++;
                                                        }
                                                    }
                                                    if(_if_conditional305=head_prev_it_224!=((void*)0),                                                    _if_conditional305) {
                                                        head_prev_it_224->next=tail_it_225;
                                                    }
                                                    if(_if_conditional306=tail_it_225!=((void*)0),                                                    _if_conditional306) {
                                                        tail_it_225->prev=head_prev_it_224;
                                                    }
                                                }
                                            }
                                        }
                                        __result160__ = __result_obj__ = self;
                                        return __result160__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_215;
_Bool _while_condtional27;
struct list_item$1charp* prev_it_216;
struct list$1charp* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_215, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_216, 0, sizeof(struct list_item$1charp*));
                                                it_215=self->head;
                                                while(_while_condtional27=it_215!=((void*)0),                                                _while_condtional27) {
                                                    prev_it_216=it_215;
                                                    it_215=it_215->next;
                                                    come_call_finalizer3(prev_it_216,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result159__ = __result_obj__ = self;
                                                return __result159__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional312;
char* result_229;
char* __result162__;
_Bool _if_conditional313;
char* __result163__;
char* result_230;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_229, 0, sizeof(char*));
memset(&result_230, 0, sizeof(char*));
            if(_if_conditional312=self==((void*)0),            _if_conditional312) {
                memset(&result_229,0,sizeof(char*));
                __result162__ = __result_obj__ = result_229;
                return __result162__;
            }
            self->it=self->head;
            if(self->it) {
                __result163__ = __result_obj__ = self->it->item;
                return __result163__;
            }
            memset(&result_230,0,sizeof(char*));
            __result164__ = __result_obj__ = result_230;
            return __result164__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
            __result165__ = self==((void*)0)||self->it==((void*)0);
            return __result165__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional314;
char* result_232;
char* __result166__;
_Bool _if_conditional315;
char* __result167__;
char* result_233;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_232, 0, sizeof(char*));
memset(&result_233, 0, sizeof(char*));
            if(_if_conditional314=self==((void*)0)||self->it==((void*)0),            _if_conditional314) {
                memset(&result_232,0,sizeof(char*));
                __result166__ = __result_obj__ = result_232;
                return __result166__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result167__ = __result_obj__ = self->it->item;
                return __result167__;
            }
            memset(&result_233,0,sizeof(char*));
            __result168__ = __result_obj__ = result_233;
            return __result168__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional318;
void* right_value254;
struct list_item$1charp* litem_234;
_Bool _if_conditional319;
void* right_value255;
struct list_item$1charp* litem_235;
void* right_value256;
struct list_item$1charp* litem_236;
struct list$1charp* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
right_value254 = (void*)0;
memset(&litem_234, 0, sizeof(struct list_item$1charp*));
right_value255 = (void*)0;
memset(&litem_235, 0, sizeof(struct list_item$1charp*));
right_value256 = (void*)0;
memset(&litem_236, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional318=self->len==0,                _if_conditional318) {
                    litem_234=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value254=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                    come_call_finalizer3(right_value254,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_234->prev=((void*)0);
                    litem_234->next=((void*)0);
                    litem_234->item=item;
                    self->tail=litem_234;
                    self->head=litem_234;
                }
                else {
                    if(_if_conditional319=self->len==1,                    _if_conditional319) {
                        litem_235=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value255=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                        come_call_finalizer3(right_value255,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_235->prev=self->head;
                        litem_235->next=((void*)0);
                        litem_235->item=item;
                        self->tail=litem_235;
                        self->head->next=litem_235;
                    }
                    else {
                        litem_236=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value256=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                        come_call_finalizer3(right_value256,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_236->prev=self->tail;
                        litem_236->next=((void*)0);
                        litem_236->item=item;
                        self->tail->next=litem_236;
                        self->tail=litem_236;
                    }
                }
                self->len++;
                __result169__ = __result_obj__ = self;
                return __result169__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value258;
struct sVar* self_237;
void* right_value259;
char* __dec_obj96;
void* right_value260;
struct sType* __dec_obj97;
void* right_value261;
char* __dec_obj98;
void* right_value262;
memset(&__result_obj__, 0, sizeof(void*));
right_value258 = (void*)0;
memset(&self_237, 0, sizeof(struct sVar*));
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
    self_237=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value258=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 747, "sVar"))));
    come_call_finalizer3(right_value258,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj96=self_237->mName;
    self_237->mName=(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string(name))));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj97=self_237->mType;
    self_237->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value260=sType_clone(type))));
    come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value260,sType_finalize, 0, 1, 0, 0, __result_obj__);
    self_237->mGlobal=(_Bool)1;
    __dec_obj98=self_237->mCValueName;
    self_237->mCValueName=(char*)come_increment_ref_count(((char*)(right_value261=__builtin_string(name))));
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self_237->mBlockLevel=info->block_level;
    self_237->mAllocaValue=(_Bool)0;
    self_237->mFunctionParam=(_Bool)0;
    self_237->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_237));
    right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_237,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __result_obj__;
void* right_value263;
struct sVar* self_238;
void* right_value264;
char* __dec_obj99;
void* right_value265;
struct sType* __dec_obj100;
void* right_value266;
char* __dec_obj101;
void* right_value267;
memset(&__result_obj__, 0, sizeof(void*));
right_value263 = (void*)0;
memset(&self_238, 0, sizeof(struct sVar*));
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
    self_238=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value263=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 766, "sVar"))));
    come_call_finalizer3(right_value263,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj99=self_238->mName;
    self_238->mName=(char*)come_increment_ref_count(((char*)(right_value264=__builtin_string(name))));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj100=self_238->mType;
    self_238->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_clone(type))));
    come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, __result_obj__);
    self_238->mGlobal=(_Bool)1;
    __dec_obj101=self_238->mCValueName;
    self_238->mCValueName=(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string(c_value))));
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self_238->mBlockLevel=info->block_level;
    self_238->mAllocaValue=(_Bool)0;
    self_238->mFunctionParam=(_Bool)0;
    self_238->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value267=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_238));
    right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_238,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool is_type_name_flag_239;
_Bool multiple_declare_240;
_Bool _if_conditional320;
char* p_241;
int sline_242;
void* right_value268;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_243;
char* name_244;
_Bool err_245;
_Bool _if_conditional323;
_Bool multiple_declare2_246;
_Bool _if_conditional324;
char* p_247;
int sline_248;
void* right_value269;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* type_249;
char* name_250;
_Bool err_251;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool no_output_err_252;
_Bool no_comma_253;
_Bool no_output_come_code_254;
void* right_value270;
struct sNode* exp_255;
_Bool _if_conditional327;
struct sFun* fun_256;
_Bool _if_conditional328;
void* right_value271;
char* buf2_257;
struct list$1charph* multiple_assign_258;
_Bool _if_conditional329;
void* right_value272;
void* right_value273;
struct list$1charph* __dec_obj102;
void* right_value277;
_Bool _while_condtional31;
void* right_value278;
char* buf3_262;
void* right_value279;
_Bool _if_conditional332;
_Bool no_comma_263;
void* right_value280;
struct sNode* right_value_264;
void* right_value281;
struct sNode* __dec_obj106;
void* right_value282;
void* right_value283;
void* right_value284;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* right_value293;
struct sNode* __result174__;
_Bool _if_conditional350;
void* right_value294;
void* right_value295;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_266;
void* right_value296;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* base_type_267;
char* name_268;
_Bool err_269;
void* right_value297;
struct tuple2$2sTypephcharph* variable_name_270;
void* right_value298;
void* right_value299;
struct tuple3$3sTypephcharphsNodeph* variable_name2_271;
_Bool _while_condtional32;
void* right_value303;
struct tuple2$2sTypephcharph* variable_name_275;
void* right_value304;
void* right_value305;
struct tuple3$3sTypephcharphsNodeph* variable_name2_276;
void* right_value306;
void* right_value307;
void* right_value308;
struct sNode* _inf_value2;
struct sStoreNode* _inf_obj_value2;
void* right_value317;
struct sNode* __result179__;
_Bool _if_conditional374;
void* right_value318;
void* right_value319;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_278;
void* right_value320;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* base_type_279;
char* name_280;
_Bool err_281;
void* right_value321;
struct tuple2$2sTypephcharph* variable_name_282;
_Bool _if_conditional375;
_Bool no_comma_283;
void* right_value322;
struct sNode* exp_284;
void* right_value323;
void* right_value324;
struct tuple3$3sTypephcharphsNodeph* variable_name2_285;
_Bool _while_condtional33;
void* right_value325;
struct tuple2$2sTypephcharph* variable_name_286;
_Bool _if_conditional376;
_Bool no_comma_287;
void* right_value326;
struct sNode* exp_288;
void* right_value327;
void* right_value328;
struct tuple3$3sTypephcharphsNodeph* variable_name2_289;
void* right_value329;
void* right_value330;
void* right_value331;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* right_value340;
struct sNode* __result183__;
_Bool _if_conditional394;
void* right_value341;
struct sNode* right_value_291;
void* right_value342;
struct sNode* __dec_obj136;
void* right_value343;
void* right_value344;
void* right_value345;
struct sNode* _inf_value4;
struct sStoreNode* _inf_obj_value4;
void* right_value354;
struct sNode* __result186__;
_Bool _if_conditional412;
void* right_value355;
void* right_value356;
void* right_value357;
struct sNode* _inf_value5;
struct sLoadNode* _inf_obj_value5;
void* right_value361;
struct sNode* node_294;
void* right_value362;
struct sNode* __dec_obj146;
struct sNode* __result189__;
char* word_295;
_Bool _if_conditional419;
void* right_value363;
char* __dec_obj147;
void* right_value364;
char* __dec_obj148;
_Bool is_type_name_flag_296;
_Bool _if_conditional420;
void* right_value365;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* type_297;
char* name_298;
_Bool err_299;
_Bool _if_conditional421;
_Bool _if_conditional422;
_Bool _if_conditional423;
void* right_value366;
void* right_value367;
struct buffer* buf2_300;
_Bool squort_301;
_Bool dquort_302;
int nest_303;
_Bool _while_condtional34;
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional426;
_Bool _if_conditional427;
_Bool _if_conditional428;
_Bool _if_conditional429;
_Bool _if_conditional430;
_Bool _if_conditional431;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
void* right_value368;
char* array_initializer_304;
void* right_value369;
void* right_value370;
struct sNode* _inf_value6;
struct sStoreNode* _inf_obj_value6;
void* right_value379;
struct sNode* __result192__;
void* right_value380;
struct sNode* right_value_306;
void* right_value381;
void* right_value382;
struct list$1sNodeph* right_values_307;
_Bool _while_condtional35;
char* anonymous_var_nameX1533_308;
void* right_value383;
struct sNode* __dec_obj156;
void* right_value384;
void* right_value385;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* right_value394;
struct sNode* __result195__;
void* right_value395;
void* right_value396;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* right_value405;
struct sNode* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&is_type_name_flag_239, 0, sizeof(_Bool));
memset(&multiple_declare_240, 0, sizeof(_Bool));
memset(&p_241, 0, sizeof(char*));
memset(&sline_242, 0, sizeof(int));
right_value268 = (void*)0;
memset(&type_243, 0, sizeof(struct sType*));
memset(&name_244, 0, sizeof(char*));
memset(&err_245, 0, sizeof(_Bool));
memset(&type_243, 0, sizeof(struct sType*));
memset(&name_244, 0, sizeof(char*));
memset(&err_245, 0, sizeof(_Bool));
memset(&multiple_declare2_246, 0, sizeof(_Bool));
memset(&p_247, 0, sizeof(char*));
memset(&sline_248, 0, sizeof(int));
right_value269 = (void*)0;
memset(&type_249, 0, sizeof(struct sType*));
memset(&name_250, 0, sizeof(char*));
memset(&err_251, 0, sizeof(_Bool));
memset(&type_249, 0, sizeof(struct sType*));
memset(&name_250, 0, sizeof(char*));
memset(&err_251, 0, sizeof(_Bool));
memset(&no_output_err_252, 0, sizeof(_Bool));
memset(&no_comma_253, 0, sizeof(_Bool));
memset(&no_output_come_code_254, 0, sizeof(_Bool));
right_value270 = (void*)0;
memset(&exp_255, 0, sizeof(struct sNode*));
memset(&fun_256, 0, sizeof(struct sFun*));
right_value271 = (void*)0;
memset(&buf2_257, 0, sizeof(char*));
memset(&multiple_assign_258, 0, sizeof(struct list$1charph*));
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
memset(&buf3_262, 0, sizeof(char*));
right_value279 = (void*)0;
memset(&no_comma_263, 0, sizeof(_Bool));
right_value280 = (void*)0;
memset(&right_value_264, 0, sizeof(struct sNode*));
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&multiple_declare_266, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
right_value296 = (void*)0;
memset(&base_type_267, 0, sizeof(struct sType*));
memset(&name_268, 0, sizeof(char*));
memset(&err_269, 0, sizeof(_Bool));
memset(&base_type_267, 0, sizeof(struct sType*));
memset(&name_268, 0, sizeof(char*));
memset(&err_269, 0, sizeof(_Bool));
right_value297 = (void*)0;
memset(&variable_name_270, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value298 = (void*)0;
right_value299 = (void*)0;
memset(&variable_name2_271, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value303 = (void*)0;
memset(&variable_name_275, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value304 = (void*)0;
right_value305 = (void*)0;
memset(&variable_name2_276, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
memset(&multiple_declare_278, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
right_value320 = (void*)0;
memset(&base_type_279, 0, sizeof(struct sType*));
memset(&name_280, 0, sizeof(char*));
memset(&err_281, 0, sizeof(_Bool));
memset(&base_type_279, 0, sizeof(struct sType*));
memset(&name_280, 0, sizeof(char*));
memset(&err_281, 0, sizeof(_Bool));
right_value321 = (void*)0;
memset(&variable_name_282, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_283, 0, sizeof(_Bool));
right_value322 = (void*)0;
memset(&exp_284, 0, sizeof(struct sNode*));
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&variable_name2_285, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value325 = (void*)0;
memset(&variable_name_286, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_287, 0, sizeof(_Bool));
right_value326 = (void*)0;
memset(&exp_288, 0, sizeof(struct sNode*));
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&variable_name2_289, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
memset(&right_value_291, 0, sizeof(struct sNode*));
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value361 = (void*)0;
memset(&node_294, 0, sizeof(struct sNode*));
right_value362 = (void*)0;
memset(&word_295, 0, sizeof(char*));
right_value363 = (void*)0;
right_value364 = (void*)0;
memset(&is_type_name_flag_296, 0, sizeof(_Bool));
right_value365 = (void*)0;
memset(&type_297, 0, sizeof(struct sType*));
memset(&name_298, 0, sizeof(char*));
memset(&err_299, 0, sizeof(_Bool));
memset(&type_297, 0, sizeof(struct sType*));
memset(&name_298, 0, sizeof(char*));
memset(&err_299, 0, sizeof(_Bool));
right_value366 = (void*)0;
right_value367 = (void*)0;
memset(&buf2_300, 0, sizeof(struct buffer*));
memset(&squort_301, 0, sizeof(_Bool));
memset(&dquort_302, 0, sizeof(_Bool));
memset(&nest_303, 0, sizeof(int));
right_value368 = (void*)0;
memset(&array_initializer_304, 0, sizeof(char*));
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
memset(&right_value_306, 0, sizeof(struct sNode*));
right_value381 = (void*)0;
right_value382 = (void*)0;
memset(&right_values_307, 0, sizeof(struct list$1sNodeph*));
memset(&anonymous_var_nameX1533_308, 0, sizeof(char*));
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value405 = (void*)0;
    is_type_name_flag_239=is_type_name(buf,info);
    multiple_declare_240=(_Bool)0;
    if(is_type_name_flag_239) {
        p_241=info->p;
        sline_242=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value268=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type_243=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
        name_244=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        err_245=multiple_assign_var2->v3;
        come_call_finalizer3(right_value268,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional323=err_245&&*info->p==44,        _if_conditional323) {
            multiple_declare_240=(_Bool)1;
        }
        info->p=p_241;
        info->sline=sline_242;
        come_call_finalizer3(type_243,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_244 = come_decrement_ref_count2(name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    multiple_declare2_246=(_Bool)0;
    if(is_type_name_flag_239) {
        p_247=info->p;
        sline_248=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value269=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type_249=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
        name_250=(char*)come_increment_ref_count(multiple_assign_var3->v2);
        err_251=multiple_assign_var3->v3;
        come_call_finalizer3(right_value269,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional325=err_251&&*info->p==61,        _if_conditional325) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(_if_conditional326=*info->p==123,            _if_conditional326) {
            }
            else {
                no_output_err_252=info->no_output_err;
                no_comma_253=info->no_comma;
                no_output_come_code_254=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_255=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value270=expression_v13(info))));
                if(right_value270) { right_value270 = come_decrement_ref_count2(right_value270, ((struct sNode*)right_value270)->finalize, ((struct sNode*)right_value270)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_253;
                info->no_output_err=no_output_err_252;
                info->no_output_come_code=no_output_come_code_254;
                if(_if_conditional327=*info->p==44,                _if_conditional327) {
                    multiple_declare2_246=(_Bool)1;
                }
                if(exp_255) { exp_255 = come_decrement_ref_count2(exp_255, ((struct sNode*)exp_255)->finalize, ((struct sNode*)exp_255)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        info->p=p_247;
        info->sline=sline_248;
        come_call_finalizer3(type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_250 = come_decrement_ref_count2(name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    fun_256=map$2charphsFunphp_operator_load_element(info->funcs,buf);
    if(_if_conditional328=charp_operator_equals(buf,"var")||charp_operator_equals(buf,"auto"),    _if_conditional328) {
        parse_sharp_v5(info);
        buf2_257=(char*)come_increment_ref_count(((char*)(right_value271=parse_word(info))));
        right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        multiple_assign_258=((void*)0);
        if(_if_conditional329=*info->p==44,        _if_conditional329) {
            __dec_obj102=multiple_assign_258;
            multiple_assign_258=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value273=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value272=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 865, "list$1charph"))))))));
            come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value272,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value273,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(multiple_assign_258,(char*)come_increment_ref_count(((char*)(right_value277=string_clone(buf2_257)))));
            right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            while(_while_condtional31=*info->p==44,            _while_condtional31) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_262=(char*)come_increment_ref_count(((char*)(right_value278=parse_word(info))));
                right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                list$1charph_push_back(multiple_assign_258,(char*)come_increment_ref_count(((char*)(right_value279=string_clone(buf3_262)))));
                right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buf3_262 = come_decrement_ref_count2(buf3_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        parse_sharp_v5(info);
        if(_if_conditional332=*info->p==61&&*(info->p+1)!=61,        _if_conditional332) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_263=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value280=expression_v13(info))));
            if(right_value280) { right_value280 = come_decrement_ref_count2(right_value280, ((struct sNode*)right_value280)->finalize, ((struct sNode*)right_value280)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            info->no_comma=no_comma_263;
            parse_sharp_v5(info);
            __dec_obj106=right_value_264;
            right_value_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value281=post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_264),info))));
            if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value281) { right_value281 = come_decrement_ref_count2(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 895, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sStoreNode*)(right_value284=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value282=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 895, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value283=__builtin_string(buf2_257)))),(struct list$1charph*)come_increment_ref_count(multiple_assign_258),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_264),((void*)0),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sStoreNode_finalize;
            _inf_value1->clone=(void*)sStoreNode_clone;
            _inf_value1->compile=(void*)sStoreNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sStoreNode_terminated;
            _inf_value1->kind=(void*)sStoreNode_kind;
            __result174__ = __result_obj__ = ((struct sNode*)(right_value293=_inf_value1));
            if(right_value_264) { right_value_264 = come_decrement_ref_count2(right_value_264, ((struct sNode*)right_value_264)->finalize, ((struct sNode*)right_value_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf2_257 = come_decrement_ref_count2(buf2_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_assign_258,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value282,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value284,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value293) { right_value293 = come_decrement_ref_count2(right_value293, ((struct sNode*)right_value293)->finalize, ((struct sNode*)right_value293)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result174__;
            if(right_value_264) { right_value_264 = come_decrement_ref_count2(right_value_264, ((struct sNode*)right_value_264)->finalize, ((struct sNode*)right_value_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        buf2_257 = come_decrement_ref_count2(buf2_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(multiple_assign_258,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(multiple_declare_240) {
            info->p=head;
            info->sline=head_sline;
            multiple_declare_266=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value295=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value294=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 906, "list$1tuple3$3sTypephcharphsNodephph"))))))));
            come_call_finalizer3(right_value294,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value295,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value296=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_267=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_268=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_269=multiple_assign_var4->v3;
            come_call_finalizer3(right_value296,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            variable_name_270=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value297=parse_variable_name((struct sType*)come_increment_ref_count(base_type_267),(_Bool)1,info))));
            come_call_finalizer3(right_value297,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            variable_name2_271=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value299=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value298=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 912, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(variable_name_270->v1),(char*)come_increment_ref_count(variable_name_270->v2),((void*)0)))));
            right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value299,tuple3$3sTypephcharphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_266,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_271));
            while(_while_condtional32=*info->p==44,            _while_condtional32) {
                info->p++;
                skip_spaces_and_lf(info);
                variable_name_275=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value303=parse_variable_name((struct sType*)come_increment_ref_count(base_type_267),(_Bool)0,info))));
                come_call_finalizer3(right_value303,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                variable_name2_276=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value305=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value304=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 922, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(variable_name_275->v1),(char*)come_increment_ref_count(variable_name_275->v2),((void*)0)))));
                right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value305,tuple3$3sTypephcharphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_266,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_276));
                come_call_finalizer3(variable_name_275,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(variable_name2_276,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 927, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStoreNode*)(right_value308=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value306=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 927, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value307=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_266),(struct sType*)come_increment_ref_count(base_type_267),(_Bool)1,((void*)0),((void*)0),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStoreNode_finalize;
            _inf_value2->clone=(void*)sStoreNode_clone;
            _inf_value2->compile=(void*)sStoreNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sStoreNode_terminated;
            _inf_value2->kind=(void*)sStoreNode_kind;
            __result179__ = __result_obj__ = ((struct sNode*)(right_value317=_inf_value2));
            come_call_finalizer3(multiple_declare_266,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_268 = come_decrement_ref_count2(name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name_270,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name2_271,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value306,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value308,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value317) { right_value317 = come_decrement_ref_count2(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result179__;
            come_call_finalizer3(multiple_declare_266,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_268 = come_decrement_ref_count2(name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name_270,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name2_271,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(multiple_declare2_246) {
                info->p=head;
                info->sline=head_sline;
                multiple_declare_278=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value319=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value318=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 933, "list$1tuple3$3sTypephcharphsNodephph"))))))));
                come_call_finalizer3(right_value318,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value319,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value320=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_279=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_280=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                err_281=multiple_assign_var5->v3;
                come_call_finalizer3(right_value320,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                variable_name_282=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value321=parse_variable_name((struct sType*)come_increment_ref_count(base_type_279),(_Bool)1,info))));
                come_call_finalizer3(right_value321,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                if(_if_conditional375=*info->p==61,                _if_conditional375) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    no_comma_283=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_284=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value322=expression_v13(info))));
                    if(right_value322) { right_value322 = come_decrement_ref_count2(right_value322, ((struct sNode*)right_value322)->finalize, ((struct sNode*)right_value322)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    info->no_comma=no_comma_283;
                    variable_name2_285=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value324=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value323=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 952, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(variable_name_282->v1),(char*)come_increment_ref_count(variable_name_282->v2),(struct sNode*)come_increment_ref_count(exp_284)))));
                    come_call_finalizer3(right_value323,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value324,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_278,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_285));
                    if(exp_284) { exp_284 = come_decrement_ref_count2(exp_284, ((struct sNode*)exp_284)->finalize, ((struct sNode*)exp_284)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(variable_name2_285,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                while(_while_condtional33=*info->p==44,                _while_condtional33) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    variable_name_286=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value325=parse_variable_name((struct sType*)come_increment_ref_count(base_type_279),(_Bool)0,info))));
                    come_call_finalizer3(right_value325,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    parse_sharp_v5(info);
                    if(_if_conditional376=*info->p==61,                    _if_conditional376) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        parse_sharp_v5(info);
                        no_comma_287=info->no_comma;
                        info->no_comma=(_Bool)1;
                        exp_288=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=expression_v13(info))));
                        if(right_value326) { right_value326 = come_decrement_ref_count2(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        info->no_comma=no_comma_287;
                        variable_name2_289=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value328=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value327=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 976, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(variable_name_286->v1),(char*)come_increment_ref_count(variable_name_286->v2),(struct sNode*)come_increment_ref_count(exp_288)))));
                        come_call_finalizer3(right_value327,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value328,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_278,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_289));
                        if(exp_288) { exp_288 = come_decrement_ref_count2(exp_288, ((struct sNode*)exp_288)->finalize, ((struct sNode*)exp_288)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(variable_name2_289,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_call_finalizer3(variable_name_286,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    come_call_finalizer3(variable_name_286,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 985, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sStoreNode*)(right_value331=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value329=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 985, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value330=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_278),(struct sType*)come_increment_ref_count(base_type_279),(_Bool)1,((void*)0),((void*)0),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sStoreNode_finalize;
                _inf_value3->clone=(void*)sStoreNode_clone;
                _inf_value3->compile=(void*)sStoreNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sStoreNode_terminated;
                _inf_value3->kind=(void*)sStoreNode_kind;
                __result183__ = __result_obj__ = ((struct sNode*)(right_value340=_inf_value3));
                come_call_finalizer3(multiple_declare_278,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(base_type_279,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_280 = come_decrement_ref_count2(name_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(variable_name_282,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value329,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value331,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value340) { right_value340 = come_decrement_ref_count2(right_value340, ((struct sNode*)right_value340)->finalize, ((struct sNode*)right_value340)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result183__;
                come_call_finalizer3(multiple_declare_278,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(base_type_279,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_280 = come_decrement_ref_count2(name_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(variable_name_282,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional394=!is_type_name_flag_239&&*info->p==61&&*(info->p+1)!=61&&!info->no_assign,                _if_conditional394) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_value_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=expression_v13(info))));
                    if(right_value341) { right_value341 = come_decrement_ref_count2(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    parse_sharp_v5(info);
                    __dec_obj136=right_value_291;
                    right_value_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value342=post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_291),info))));
                    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value342) { right_value342 = come_decrement_ref_count2(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    parse_sharp_v5(info);
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 999, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sStoreNode*)(right_value345=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value343=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 999, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value344=__builtin_string(buf)))),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_291),((void*)0),info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sStoreNode_finalize;
                    _inf_value4->clone=(void*)sStoreNode_clone;
                    _inf_value4->compile=(void*)sStoreNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sStoreNode_terminated;
                    _inf_value4->kind=(void*)sStoreNode_kind;
                    __result186__ = __result_obj__ = ((struct sNode*)(right_value354=_inf_value4));
                    if(right_value_291) { right_value_291 = come_decrement_ref_count2(right_value_291, ((struct sNode*)right_value_291)->finalize, ((struct sNode*)right_value_291)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value343,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value345,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value354) { right_value354 = come_decrement_ref_count2(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result186__;
                    if(right_value_291) { right_value_291 = come_decrement_ref_count2(right_value_291, ((struct sNode*)right_value_291)->finalize, ((struct sNode*)right_value_291)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional412=!is_type_name_flag_239||map$2charphsFunphp_operator_load_element(info->funcs,buf),                    _if_conditional412) {
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1002, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sLoadNode*)(right_value357=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value355=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1002, "sLoadNode")))),(char*)come_increment_ref_count(((char*)(right_value356=__builtin_string(buf)))),info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sLoadNode_finalize;
                        _inf_value5->clone=(void*)sLoadNode_clone;
                        _inf_value5->compile=(void*)sLoadNode_compile;
                        _inf_value5->sline=(void*)sNodeBase_sline;
                        _inf_value5->sname=(void*)sNodeBase_sname;
                        _inf_value5->terminated=(void*)sLoadNode_terminated;
                        _inf_value5->kind=(void*)sLoadNode_kind;
                        node_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=_inf_value5)));
                        come_call_finalizer3(right_value355,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                        right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value357,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value361) { right_value361 = come_decrement_ref_count2(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __dec_obj146=node_294;
                        node_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_294),info))));
                        if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __result189__ = __result_obj__ = node_294;
                        if(node_294) { node_294 = come_decrement_ref_count2(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result189__;
                        if(node_294) { node_294 = come_decrement_ref_count2(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        info->p=head;
                        info->sline=head_sline;
                        if(_if_conditional419=xisalpha(*info->p)||*info->p==95,                        _if_conditional419) {
                            __dec_obj147=word_295;
                            word_295=(char*)come_increment_ref_count(((char*)(right_value363=parse_word(info))));
                            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            __dec_obj148=word_295;
                            word_295=(char*)come_increment_ref_count(((char*)(right_value364=__builtin_string(""))));
                            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        is_type_name_flag_296=is_type_name(word_295,info);
                        info->p=head;
                        info->sline=head_sline;
                        if(is_type_name_flag_296) {
                            parse_sharp_v5(info);
                            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value365=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                            type_297=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                            name_298=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            err_299=multiple_assign_var6->v3;
                            come_call_finalizer3(right_value365,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional421=!err_299,                            _if_conditional421) {
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                exit(2);
                            }
                            parse_sharp_v5(info);
                            if(_if_conditional422=*info->p==61,                            _if_conditional422) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                parse_sharp_v5(info);
                                if(_if_conditional423=*info->p==123,                                _if_conditional423) {
                                    buf2_300=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value367=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value366=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1043, "buffer"))))))));
                                    come_call_finalizer3(right_value366,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value367,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    buffer_append_char(buf2_300,*info->p);
                                    info->p++;
                                    squort_301=(_Bool)0;
                                    dquort_302=(_Bool)0;
                                    nest_303=1;
                                    while(_while_condtional34=1,                                    _while_condtional34) {
                                        if(_if_conditional424=*info->p==0,                                        _if_conditional424) {
                                            err_msg(info,"unexpected source end in array initiailizer");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional425=*info->p==92,                                            _if_conditional425) {
                                                buffer_append_char(buf2_300,*info->p);
                                                info->p++;
                                                if(_if_conditional426=*info->p==10,                                                _if_conditional426) {
                                                    info->sline++;
                                                }
                                                buffer_append_char(buf2_300,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(_if_conditional427=!squort_301&&*info->p==34,                                                _if_conditional427) {
                                                    buffer_append_char(buf2_300,*info->p);
                                                    info->p++;
                                                    dquort_302=!dquort_302;
                                                }
                                                else {
                                                    if(_if_conditional428=!dquort_302&&*info->p==39,                                                    _if_conditional428) {
                                                        buffer_append_char(buf2_300,*info->p);
                                                        info->p++;
                                                        squort_301=!squort_301;
                                                    }
                                                    else {
                                                        if(_if_conditional429=squort_301||dquort_302,                                                        _if_conditional429) {
                                                            if(_if_conditional430=*info->p==10,                                                            _if_conditional430) {
                                                                info->sline++;
                                                            }
                                                            buffer_append_char(buf2_300,*info->p);
                                                            info->p++;
                                                        }
                                                        else {
                                                            if(_if_conditional431=*info->p==123,                                                            _if_conditional431) {
                                                                nest_303++;
                                                                buffer_append_char(buf2_300,*info->p);
                                                                info->p++;
                                                            }
                                                            else {
                                                                if(_if_conditional432=*info->p==125,                                                                _if_conditional432) {
                                                                    nest_303--;
                                                                    buffer_append_char(buf2_300,*info->p);
                                                                    info->p++;
                                                                    if(_if_conditional433=nest_303==0,                                                                    _if_conditional433) {
                                                                        skip_spaces_and_lf(info);
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    if(_if_conditional434=*info->p==10,                                                                    _if_conditional434) {
                                                                        buffer_append_char(buf2_300,*info->p);
                                                                        info->p++;
                                                                        info->sline++;
                                                                    }
                                                                    else {
                                                                        buffer_append_char(buf2_300,*info->p);
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
                                    array_initializer_304=(char*)come_increment_ref_count(((char*)(right_value368=buffer_to_string(buf2_300))));
                                    right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1107, "struct sNode");
                                    _inf_obj_value6=come_increment_ref_count(((struct sStoreNode*)(right_value370=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value369=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1107, "sStoreNode")))),(char*)come_increment_ref_count(name_298),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_297),(_Bool)1,((void*)0),(char*)come_increment_ref_count(array_initializer_304),info))));
                                    _inf_value6->_protocol_obj=_inf_obj_value6;
                                    _inf_value6->finalize=(void*)sStoreNode_finalize;
                                    _inf_value6->clone=(void*)sStoreNode_clone;
                                    _inf_value6->compile=(void*)sStoreNode_compile;
                                    _inf_value6->sline=(void*)sNodeBase_sline;
                                    _inf_value6->sname=(void*)sNodeBase_sname;
                                    _inf_value6->terminated=(void*)sStoreNode_terminated;
                                    _inf_value6->kind=(void*)sStoreNode_kind;
                                    __result192__ = __result_obj__ = ((struct sNode*)(right_value379=_inf_value6));
                                    come_call_finalizer3(buf2_300,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    array_initializer_304 = come_decrement_ref_count2(array_initializer_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(type_297,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    name_298 = come_decrement_ref_count2(name_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    word_295 = come_decrement_ref_count2(word_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value369,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value370,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value379) { right_value379 = come_decrement_ref_count2(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result192__;
                                    come_call_finalizer3(buf2_300,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    array_initializer_304 = come_decrement_ref_count2(array_initializer_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    parse_sharp_v5(info);
                                    right_value_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value380=expression_v13(info))));
                                    if(right_value380) { right_value380 = come_decrement_ref_count2(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    parse_sharp_v5(info);
                                    right_values_307=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value382=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value381=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "07var.c", 1114, "list$1sNodeph"))))))));
                                    come_call_finalizer3(right_value381,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value382,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    while(_while_condtional35=*info->p==44,                                    _while_condtional35) {
                                        anonymous_var_nameX1533_308 = come_decrement_ref_count2(anonymous_var_nameX1533_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    __dec_obj156=right_value_306;
                                    right_value_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_306),info))));
                                    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value383) { right_value383 = come_decrement_ref_count2(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1121, "struct sNode");
                                    _inf_obj_value7=come_increment_ref_count(((struct sStoreNode*)(right_value385=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value384=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1121, "sStoreNode")))),(char*)come_increment_ref_count(name_298),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_297),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_306),((void*)0),info))));
                                    _inf_value7->_protocol_obj=_inf_obj_value7;
                                    _inf_value7->finalize=(void*)sStoreNode_finalize;
                                    _inf_value7->clone=(void*)sStoreNode_clone;
                                    _inf_value7->compile=(void*)sStoreNode_compile;
                                    _inf_value7->sline=(void*)sNodeBase_sline;
                                    _inf_value7->sname=(void*)sNodeBase_sname;
                                    _inf_value7->terminated=(void*)sStoreNode_terminated;
                                    _inf_value7->kind=(void*)sStoreNode_kind;
                                    __result195__ = __result_obj__ = ((struct sNode*)(right_value394=_inf_value7));
                                    if(right_value_306) { right_value_306 = come_decrement_ref_count2(right_value_306, ((struct sNode*)right_value_306)->finalize, ((struct sNode*)right_value_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_values_307,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(type_297,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    name_298 = come_decrement_ref_count2(name_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    word_295 = come_decrement_ref_count2(word_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value384,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value385,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result195__;
                                    if(right_value_306) { right_value_306 = come_decrement_ref_count2(right_value_306, ((struct sNode*)right_value_306)->finalize, ((struct sNode*)right_value_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_values_307,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                            }
                            else {
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1125, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sStoreNode*)(right_value396=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value395=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1125, "sStoreNode")))),(char*)come_increment_ref_count(name_298),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_297),(_Bool)1,((void*)0),((void*)0),info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sStoreNode_finalize;
                                _inf_value8->clone=(void*)sStoreNode_clone;
                                _inf_value8->compile=(void*)sStoreNode_compile;
                                _inf_value8->sline=(void*)sNodeBase_sline;
                                _inf_value8->sname=(void*)sNodeBase_sname;
                                _inf_value8->terminated=(void*)sStoreNode_terminated;
                                _inf_value8->kind=(void*)sStoreNode_kind;
                                __result198__ = __result_obj__ = ((struct sNode*)(right_value405=_inf_value8));
                                come_call_finalizer3(type_297,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_298 = come_decrement_ref_count2(name_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                word_295 = come_decrement_ref_count2(word_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value395,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value396,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value405) { right_value405 = come_decrement_ref_count2(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result198__;
                            }
                            come_call_finalizer3(type_297,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_298 = come_decrement_ref_count2(name_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        word_295 = come_decrement_ref_count2(word_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    err_msg(info,"unexpected word(%s)(1)\n",buf);
    exit(2);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional321;
_Bool _if_conditional322;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional321=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional321) {
                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional322=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional322) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional330;
void* right_value274;
struct list_item$1charph* litem_259;
char* __dec_obj103;
_Bool _if_conditional331;
void* right_value275;
struct list_item$1charph* litem_260;
char* __dec_obj104;
void* right_value276;
struct list_item$1charph* litem_261;
char* __dec_obj105;
struct list$1charph* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
memset(&litem_259, 0, sizeof(struct list_item$1charph*));
right_value275 = (void*)0;
memset(&litem_260, 0, sizeof(struct list_item$1charph*));
right_value276 = (void*)0;
memset(&litem_261, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional330=self->len==0,                _if_conditional330) {
                    litem_259=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value274=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 217, "list_item$1charph"))));
                    come_call_finalizer3(right_value274,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_259->prev=((void*)0);
                    litem_259->next=((void*)0);
                    __dec_obj103=litem_259->item;
                    litem_259->item=(char*)come_increment_ref_count(item);
                    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_259;
                    self->head=litem_259;
                }
                else {
                    if(_if_conditional331=self->len==1,                    _if_conditional331) {
                        litem_260=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value275=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph"))));
                        come_call_finalizer3(right_value275,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_260->prev=self->head;
                        litem_260->next=((void*)0);
                        __dec_obj104=litem_260->item;
                        litem_260->item=(char*)come_increment_ref_count(item);
                        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_260;
                        self->head->next=litem_260;
                    }
                    else {
                        litem_261=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph"))));
                        come_call_finalizer3(right_value276,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_261->prev=self->tail;
                        litem_261->next=((void*)0);
                        __dec_obj105=litem_261->item;
                        litem_261->item=(char*)come_increment_ref_count(item);
                        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_261;
                        self->tail=litem_261;
                    }
                }
                self->len++;
                __result171__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result171__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional351;
_Bool _if_conditional352;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional351=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional351) {
                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional352=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional352) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__;
struct sType* __dec_obj114;
char* __dec_obj115;
struct tuple3$3sTypephcharphvoidp* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj114=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj115=self->v2;
                self->v2=(char*)come_increment_ref_count(v2);
                __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                self->v3=v3;
                __result175__ = __result_obj__ = self;
                come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result175__;
                come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
void* __result_obj__;
_Bool _if_conditional353;
_Bool _if_conditional354;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional353=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional353) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional354=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional354) {
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional355;
void* right_value300;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_272;
struct tuple3$3sTypephcharphsNodeph* __dec_obj116;
_Bool _if_conditional356;
void* right_value301;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_273;
struct tuple3$3sTypephcharphsNodeph* __dec_obj117;
void* right_value302;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_274;
struct tuple3$3sTypephcharphsNodeph* __dec_obj118;
struct list$1tuple3$3sTypephcharphsNodephph* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value300 = (void*)0;
memset(&litem_272, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value301 = (void*)0;
memset(&litem_273, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value302 = (void*)0;
memset(&litem_274, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                if(_if_conditional355=self->len==0,                _if_conditional355) {
                    litem_272=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value300=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 217, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                    come_call_finalizer3(right_value300,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_272->prev=((void*)0);
                    litem_272->next=((void*)0);
                    __dec_obj116=litem_272->item;
                    litem_272->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj116,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_272;
                    self->head=litem_272;
                }
                else {
                    if(_if_conditional356=self->len==1,                    _if_conditional356) {
                        litem_273=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value301=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 227, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(right_value301,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_273->prev=self->head;
                        litem_273->next=((void*)0);
                        __dec_obj117=litem_273->item;
                        litem_273->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj117,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_273;
                        self->head->next=litem_273;
                    }
                    else {
                        litem_274=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value302=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 237, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(right_value302,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_274->prev=self->tail;
                        litem_274->next=((void*)0);
                        __dec_obj118=litem_274->item;
                        litem_274->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj118,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_274;
                        self->tail=litem_274;
                    }
                }
                self->len++;
                __result176__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result176__;
                come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__;
struct sType* __dec_obj126;
char* __dec_obj127;
struct sNode* __dec_obj128;
struct tuple3$3sTypephcharphsNodeph* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
                        __dec_obj126=self->v1;
                        self->v1=(struct sType*)come_increment_ref_count(v1);
                        come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
                        __dec_obj127=self->v2;
                        self->v2=(char*)come_increment_ref_count(v2);
                        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __dec_obj128=self->v3;
                        self->v3=(struct sNode*)come_increment_ref_count(v3);
                        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
                        __result180__ = __result_obj__ = self;
                        come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result180__;
                        come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLoadNode_finalize(struct sLoadNode* self){
void* __result_obj__;
_Bool _if_conditional413;
_Bool _if_conditional414;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional413=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional413) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional414=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional414) {
                                self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__;
_Bool _if_conditional415;
struct sLoadNode* __result187__;
void* right_value358;
struct sLoadNode* result_293;
_Bool _if_conditional416;
_Bool _if_conditional417;
void* right_value359;
char* __dec_obj144;
_Bool _if_conditional418;
void* right_value360;
char* __dec_obj145;
struct sLoadNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value358 = (void*)0;
memset(&result_293, 0, sizeof(struct sLoadNode*));
right_value359 = (void*)0;
right_value360 = (void*)0;
                            if(_if_conditional415=self==(void*)0,                            _if_conditional415) {
                                __result187__ = __result_obj__ = (void*)0;
                                return __result187__;
                            }
                            result_293=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value358=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "sLoadNode"))));
                            come_call_finalizer3(right_value358,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional416=self!=((void*)0),                            _if_conditional416) {
                                result_293->sline=self->sline;
                            }
                            if(_if_conditional417=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional417) {
                                __dec_obj144=result_293->sname;
                                result_293->sname=(char*)come_increment_ref_count(((char*)(right_value359=string_clone(self->sname))));
                                __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional418=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional418) {
                                __dec_obj145=result_293->name;
                                result_293->name=(char*)come_increment_ref_count(((char*)(right_value360=string_clone(self->name))));
                                __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result188__ = __result_obj__ = result_293;
                            come_call_finalizer3(result_293,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result188__;
                            come_call_finalizer3(result_293,sLoadNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sStoreNode_finalize(struct sStoreNode* self){
void* __result_obj__;
_Bool _if_conditional469;
_Bool _if_conditional470;
_Bool _if_conditional471;
_Bool _if_conditional472;
_Bool _if_conditional473;
_Bool _if_conditional474;
_Bool _if_conditional475;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional469=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional469) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional470=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional470) {
                                        self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional471=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional471) {
                                        come_call_finalizer3(self->multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional472=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional472) {
                                        come_call_finalizer3(self->multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional473=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional473) {
                                        if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional474=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional474) {
                                        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional475=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional475) {
                                        self->array_initializer = come_decrement_ref_count2(self->array_initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__;
_Bool _if_conditional476;
struct sStoreNode* __result196__;
void* right_value397;
struct sStoreNode* result_310;
_Bool _if_conditional477;
_Bool _if_conditional478;
void* right_value398;
char* __dec_obj164;
_Bool _if_conditional479;
void* right_value399;
char* __dec_obj165;
_Bool _if_conditional480;
void* right_value400;
struct list$1charph* __dec_obj166;
_Bool _if_conditional481;
void* right_value401;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj167;
_Bool _if_conditional482;
void* right_value402;
struct sNode* __dec_obj168;
_Bool _if_conditional483;
void* right_value403;
struct sType* __dec_obj169;
_Bool _if_conditional484;
void* right_value404;
char* __dec_obj170;
_Bool _if_conditional485;
struct sStoreNode* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value397 = (void*)0;
memset(&result_310, 0, sizeof(struct sStoreNode*));
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value404 = (void*)0;
                                    if(_if_conditional476=self==(void*)0,                                    _if_conditional476) {
                                        __result196__ = __result_obj__ = (void*)0;
                                        return __result196__;
                                    }
                                    result_310=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value397=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "sStoreNode"))));
                                    come_call_finalizer3(right_value397,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional477=self!=((void*)0),                                    _if_conditional477) {
                                        result_310->sline=self->sline;
                                    }
                                    if(_if_conditional478=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional478) {
                                        __dec_obj164=result_310->sname;
                                        result_310->sname=(char*)come_increment_ref_count(((char*)(right_value398=string_clone(self->sname))));
                                        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value398 = come_decrement_ref_count2(right_value398, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional479=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional479) {
                                        __dec_obj165=result_310->name;
                                        result_310->name=(char*)come_increment_ref_count(((char*)(right_value399=string_clone(self->name))));
                                        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value399 = come_decrement_ref_count2(right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional480=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional480) {
                                        __dec_obj166=result_310->multiple_assign;
                                        result_310->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value400=list$1charphp_clone(self->multiple_assign))));
                                        come_call_finalizer3(__dec_obj166,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value400,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional481=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional481) {
                                        __dec_obj167=result_310->multiple_declare;
                                        result_310->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value401=list$1tuple3$3sTypephcharphsNodephphp_clone(self->multiple_declare))));
                                        come_call_finalizer3(__dec_obj167,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value401,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional482=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional482) {
                                        __dec_obj168=result_310->right_value;
                                        result_310->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=sNode_clone(self->right_value))));
                                        if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value402) { right_value402 = come_decrement_ref_count2(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional483=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional483) {
                                        __dec_obj169=result_310->type;
                                        result_310->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value403=sType_clone(self->type))));
                                        come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value403,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional484=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional484) {
                                        __dec_obj170=result_310->array_initializer;
                                        result_310->array_initializer=(char*)come_increment_ref_count(((char*)(right_value404=string_clone(self->array_initializer))));
                                        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional485=self!=((void*)0),                                    _if_conditional485) {
                                        result_310->alloc=self->alloc;
                                    }
                                    __result197__ = __result_obj__ = result_310;
                                    come_call_finalizer3(result_310,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result197__;
                                    come_call_finalizer3(result_310,sStoreNode_finalize, 0, 0, 0, 0, (void*)0);
}

