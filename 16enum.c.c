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
struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};
struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};
struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};
struct sEnumNode
{
    int sline;
    char* sname;
    char* mTypeName;
    struct list$1tuple2$2charphsNodephph* mElements;
    _Bool mOutput;
    char* mDeclareSName;
};
struct tuple2$2charphvoidp
{
    char* v1;
    void* v2;
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

struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char* type_name, struct list$1tuple2$2charphsNodephph* elements, _Bool output, struct sInfo* info);

_Bool sEnumNode_terminated(struct sEnumNode* self);

char* sEnumNode_kind(struct sEnumNode* self);

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sNode* parse_enum(char* type_name, struct sInfo* info);

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
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
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

static void sEnumNode_finalize(struct sEnumNode* self);
static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self);
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










struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char* type_name, struct list$1tuple2$2charphsNodephph* elements, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
void* right_value80;
char* __dec_obj13;
void* right_value91;
struct list$1tuple2$2charphsNodephph* __dec_obj19;
void* right_value92;
char* __dec_obj20;
struct sEnumNode* __result66__;
struct sEnumNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
    self->sline=info->sline;
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj13=self->mTypeName;
    self->mTypeName=(char*)come_increment_ref_count(((char*)(right_value80=__builtin_string(type_name))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj19=self->mElements;
    self->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value91=list$1tuple2$2charphsNodephphp_clone(elements))));
    come_call_finalizer3(__dec_obj19,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value91,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    self->mOutput=output;
    __dec_obj20=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value92=__builtin_string(info->sname))));
    __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result66__ = __result_obj__ = self;
    come_call_finalizer3(self,sEnumNode_finalize, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result66__;
    __result67__ = __result_obj__ = self;
    come_call_finalizer3(self,sEnumNode_finalize, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result67__;
    come_call_finalizer3(self,sEnumNode_finalize, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sEnumNode_terminated(struct sEnumNode* self){
void* __result_obj__;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    __result68__ = (_Bool)1;
    return __result68__;
}

char* sEnumNode_kind(struct sEnumNode* self){
void* __result_obj__;
void* right_value93;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
    __result69__ = __result_obj__ = ((char*)(right_value93=__builtin_string("sEnumNode")));
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result69__;
}

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
char* type_name_58;
struct list$1tuple2$2charphsNodephph* elements_59;
void* right_value94;
void* right_value95;
struct buffer* buf_60;
_Bool _if_conditional49;
void* right_value96;
void* right_value97;
int i_61;
int n_62;
struct list$1tuple2$2charphsNodephph* o2_saved_63;
struct tuple2$2charphsNodeph* it_66;
struct tuple2$2charphsNodeph* multiple_assign_var1;
char* name_69;
struct sNode* value_70;
void* right_value98;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional82;
void* right_value99;
char* c_value_79;
void* right_value100;
void* right_value101;
_Bool _if_conditional83;
_Bool __result83__;
void* right_value102;
struct CVALUE* right_value_80;
void* right_value103;
void* right_value104;
void* right_value105;
_Bool _if_conditional86;
void* right_value106;
_Bool _if_conditional87;
_Bool _if_conditional88;
void* right_value107;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_name_58, 0, sizeof(char*));
memset(&elements_59, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&buf_60, 0, sizeof(struct buffer*));
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&i_61, 0, sizeof(int));
memset(&n_62, 0, sizeof(int));
memset(&o2_saved_63, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_66, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&name_69, 0, sizeof(char*));
memset(&value_70, 0, sizeof(struct sNode*));
memset(&name_69, 0, sizeof(char*));
memset(&value_70, 0, sizeof(struct sNode*));
right_value98 = (void*)0;
right_value99 = (void*)0;
memset(&c_value_79, 0, sizeof(char*));
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
memset(&right_value_80, 0, sizeof(struct CVALUE*));
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
    type_name_58=(char*)come_increment_ref_count(self->mTypeName);
    elements_59=self->mElements;
    buf_60=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value95=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value94=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "16enum.c", 42, "buffer"))))))));
    come_call_finalizer3(right_value94,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value95,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional49=string_operator_equals(type_name_58,""),    _if_conditional49) {
        buffer_append_str(buf_60,((char*)(right_value96=xsprintf("enum { ",type_name_58))));
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        buffer_append_str(buf_60,((char*)(right_value97=xsprintf("enum %s { ",type_name_58))));
        right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    i_61=0;
    n_62=0;
    for(    o2_saved_63=(elements_59),it_66=list$1tuple2$2charphsNodephph_begin((o2_saved_63));    !list$1tuple2$2charphsNodephph_end((o2_saved_63));    it_66=list$1tuple2$2charphsNodephph_next((o2_saved_63))    ){
        multiple_assign_var1=it_66;
        name_69=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        value_70=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional79=map$2charphsVarph_at(info->gv_table->mVars,((char*)(right_value98=__builtin_string(name_69))),((void*)0))!=((void*)0),        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional79) {
            self->mOutput=(_Bool)0;
        }
        if(_if_conditional80=value_70==((void*)0),        _if_conditional80) {
            buffer_append_str(buf_60,name_69);
            buffer_append_str(buf_60,"\n");
            if(_if_conditional82=i_61!=list$1tuple2$2charphsNodephph_length(elements_59)-1,            _if_conditional82) {
                buffer_append_str(buf_60,",");
            }
            c_value_79=(char*)come_increment_ref_count(((char*)(right_value99=xsprintf("%d",n_62))));
            right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_variable_to_global_table_with_int_value(name_69,(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value100=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 70, "sType")))),"int",(_Bool)0,info)))),c_value_79,info);
            come_call_finalizer3(right_value100,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value101,sType_finalize, 0, 1, 0, 0, __result_obj__);
            c_value_79 = come_decrement_ref_count2(c_value_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional83=!node_compile(value_70,info),            _if_conditional83) {
                __result83__ = (_Bool)0;
                name_69 = come_decrement_ref_count2(name_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(value_70) { value_70 = come_decrement_ref_count2(value_70, ((struct sNode*)value_70)->finalize, ((struct sNode*)value_70)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_58 = come_decrement_ref_count2(type_name_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_60,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result83__;
            }
            right_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value102=get_value_from_stack(-1,info))));
            come_call_finalizer3(right_value102,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            dec_stack_ptr(1,info);
            add_variable_to_global_table_with_int_value(name_69,(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value103=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 80, "sType")))),"int",(_Bool)0,info)))),right_value_80->c_value,info);
            come_call_finalizer3(right_value103,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value104,sType_finalize, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_60,((char*)(right_value105=xsprintf("%s=%s",name_69,right_value_80->c_value))));
            right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional86=i_61!=list$1tuple2$2charphsNodephph_length(elements_59)-1,            _if_conditional86) {
                buffer_append_str(buf_60,",");
            }
            buffer_append_str(buf_60,"\n");
            n_62=atoi(right_value_80->c_value);
            come_call_finalizer3(right_value_80,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        i_61++;
        n_62++;
        name_69 = come_decrement_ref_count2(name_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(value_70) { value_70 = come_decrement_ref_count2(value_70, ((struct sNode*)value_70)->finalize, ((struct sNode*)value_70)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    buffer_append_str(buf_60,((char*)(right_value106=xsprintf("};\n",type_name_58))));
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional87=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),    _if_conditional87) {
    }
    else {
        if(self->mOutput) {
            add_come_code_at_source_head(info,"%s",((char*)(right_value107=buffer_to_string(buf_60))));
            right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    __result84__ = (_Bool)1;
    type_name_58 = come_decrement_ref_count2(type_name_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_60,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result84__;
    type_name_58 = come_decrement_ref_count2(type_name_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_60,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional19;
struct list$1tuple2$2charphsNodephph* __result58__;
void* right_value81;
void* right_value82;
struct list$1tuple2$2charphsNodephph* result_49;
struct list_item$1tuple2$2charphsNodephph* it_50;
_Bool _while_condtional8;
void* right_value90;
struct list$1tuple2$2charphsNodephph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&result_49, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_50, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value90 = (void*)0;
        if(_if_conditional19=self==((void*)0),        _if_conditional19) {
            __result58__ = __result_obj__ = ((void*)0);
            return __result58__;
        }
        result_49=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value82=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value81=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 133, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer3(right_value81,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value82,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        it_50=self->head;
        while(_while_condtional8=it_50!=((void*)0),        _while_condtional8) {
            list$1tuple2$2charphsNodephph_add(result_49,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value90=tuple2$2charphsNodephp_clone(it_50->item)))));
            come_call_finalizer3(right_value90,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            it_50=it_50->next;
        }
        __result65__ = __result_obj__ = result_49;
        come_call_finalizer3(result_49,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result65__;
        come_call_finalizer3(result_49,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result59__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result59__;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_47;
_Bool _while_condtional7;
struct list_item$1tuple2$2charphsNodephph* prev_it_48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_47, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_48, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_47=self->head;
                while(_while_condtional7=it_47!=((void*)0),                _while_condtional7) {
                    prev_it_48=it_47;
                    it_47=it_47->next;
                    come_call_finalizer3(prev_it_48,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional20=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional20) {
                            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional23;
void* right_value83;
struct list_item$1tuple2$2charphsNodephph* litem_51;
struct tuple2$2charphsNodeph* __dec_obj14;
_Bool _if_conditional26;
void* right_value84;
struct list_item$1tuple2$2charphsNodephph* litem_52;
struct tuple2$2charphsNodeph* __dec_obj15;
void* right_value85;
struct list_item$1tuple2$2charphsNodephph* litem_53;
struct tuple2$2charphsNodeph* __dec_obj16;
struct list$1tuple2$2charphsNodephph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
memset(&litem_51, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value84 = (void*)0;
memset(&litem_52, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value85 = (void*)0;
memset(&litem_53, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional23=self->len==0,                _if_conditional23) {
                    litem_51=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value83=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 147, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value83,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_51->prev=((void*)0);
                    litem_51->next=((void*)0);
                    __dec_obj14=litem_51->item;
                    litem_51->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj14,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_51;
                    self->head=litem_51;
                }
                else {
                    if(_if_conditional26=self->len==1,                    _if_conditional26) {
                        litem_52=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value84=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 157, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value84,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_52->prev=self->head;
                        litem_52->next=((void*)0);
                        __dec_obj15=litem_52->item;
                        litem_52->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj15,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_52;
                        self->head->next=litem_52;
                    }
                    else {
                        litem_53=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value85=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 167, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value85,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_53->prev=self->tail;
                        litem_53->next=((void*)0);
                        __dec_obj16=litem_53->item;
                        litem_53->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj16,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_53;
                        self->tail=litem_53;
                    }
                }
                self->len++;
                __result60__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result60__;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional29;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional29=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional29) {
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional30=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional30) {
                                if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional31;
struct tuple2$2charphsNodeph* __result61__;
void* right_value86;
struct tuple2$2charphsNodeph* result_54;
_Bool _if_conditional34;
void* right_value87;
char* __dec_obj17;
_Bool _if_conditional35;
void* right_value89;
struct sNode* __dec_obj18;
struct tuple2$2charphsNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&result_54, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value87 = (void*)0;
right_value89 = (void*)0;
                if(_if_conditional31=self==(void*)0,                _if_conditional31) {
                    __result61__ = __result_obj__ = (void*)0;
                    return __result61__;
                }
                result_54=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value86=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer3(right_value86,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional34=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional34) {
                    __dec_obj17=result_54->v1;
                    result_54->v1=(char*)come_increment_ref_count(((char*)(right_value87=string_clone(self->v1))));
                    __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional35=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional35) {
                    __dec_obj18=result_54->v2;
                    result_54->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value89=sNode_clone(self->v2))));
                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count2(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value89) { right_value89 = come_decrement_ref_count2(right_value89, ((struct sNode*)right_value89)->finalize, ((struct sNode*)right_value89)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result64__ = __result_obj__ = result_54;
                come_call_finalizer3(result_54,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer3(result_54,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional32;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional32) {
                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional33=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional33) {
                        if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional36;
struct sNode* __result62__;
void* right_value88;
struct sNode* result_55;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
struct sNode* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&result_55, 0, sizeof(struct sNode*));
                        if(_if_conditional36=self==(void*)0,                        _if_conditional36) {
                            __result62__ = __result_obj__ = (void*)0;
                            return __result62__;
                        }
                        result_55=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value88=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value88) { right_value88 = come_decrement_ref_count2(right_value88, ((struct sNode*)right_value88)->finalize, ((struct sNode*)right_value88)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional37=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional37) {
                            result_55->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional38=self!=((void*)0),                        _if_conditional38) {
                            result_55->finalize=self->finalize;
                        }
                        if(_if_conditional39=self!=((void*)0),                        _if_conditional39) {
                            result_55->clone=self->clone;
                        }
                        if(_if_conditional40=self!=((void*)0),                        _if_conditional40) {
                            result_55->compile=self->compile;
                        }
                        if(_if_conditional41=self!=((void*)0),                        _if_conditional41) {
                            result_55->sline=self->sline;
                        }
                        if(_if_conditional42=self!=((void*)0),                        _if_conditional42) {
                            result_55->sname=self->sname;
                        }
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            result_55->terminated=self->terminated;
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            result_55->kind=self->kind;
                        }
                        __result63__ = __result_obj__ = result_55;
                        if(result_55) { result_55 = come_decrement_ref_count2(result_55, ((struct sNode*)result_55)->finalize, ((struct sNode*)result_55)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result63__;
                        if(result_55) { result_55 = come_decrement_ref_count2(result_55, ((struct sNode*)result_55)->finalize, ((struct sNode*)result_55)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_56;
_Bool _while_condtional9;
struct list_item$1tuple2$2charphsNodephph* prev_it_57;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_56, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_57, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
        it_56=self->head;
        while(_while_condtional9=it_56!=((void*)0),        _while_condtional9) {
            prev_it_57=it_56;
            it_56=it_56->next;
            come_call_finalizer3(prev_it_57,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional50;
struct tuple2$2charphsNodeph* result_64;
struct tuple2$2charphsNodeph* __result70__;
_Bool _if_conditional51;
struct tuple2$2charphsNodeph* __result71__;
struct tuple2$2charphsNodeph* result_65;
struct tuple2$2charphsNodeph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_64, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_65, 0, sizeof(struct tuple2$2charphsNodeph*));
        if(_if_conditional50=self==((void*)0),        _if_conditional50) {
            memset(&result_64,0,sizeof(struct tuple2$2charphsNodeph*));
            __result70__ = __result_obj__ = result_64;
            return __result70__;
        }
        self->it=self->head;
        if(self->it) {
            __result71__ = __result_obj__ = self->it->item;
            return __result71__;
        }
        memset(&result_65,0,sizeof(struct tuple2$2charphsNodeph*));
        __result72__ = __result_obj__ = result_65;
        return __result72__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
        __result73__ = self==((void*)0)||self->it==((void*)0);
        return __result73__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional52;
struct tuple2$2charphsNodeph* result_67;
struct tuple2$2charphsNodeph* __result74__;
_Bool _if_conditional53;
struct tuple2$2charphsNodeph* __result75__;
struct tuple2$2charphsNodeph* result_68;
struct tuple2$2charphsNodeph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_67, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_68, 0, sizeof(struct tuple2$2charphsNodeph*));
        if(_if_conditional52=self==((void*)0)||self->it==((void*)0),        _if_conditional52) {
            memset(&result_67,0,sizeof(struct tuple2$2charphsNodeph*));
            __result74__ = __result_obj__ = result_67;
            return __result74__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result75__ = __result_obj__ = self->it->item;
            return __result75__;
        }
        memset(&result_68,0,sizeof(struct tuple2$2charphsNodeph*));
        __result76__ = __result_obj__ = result_68;
        return __result76__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_71;
unsigned int it_72;
_Bool _while_condtional10;
_Bool _if_conditional54;
_Bool _if_conditional55;
struct sVar* __result77__;
_Bool _if_conditional77;
_Bool _if_conditional78;
struct sVar* __result78__;
struct sVar* __result79__;
struct sVar* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_71, 0, sizeof(unsigned int));
memset(&it_72, 0, sizeof(unsigned int));
            hash_71=string_get_hash_key(((char*)key))%self->size;
            it_72=hash_71;
            while(_while_condtional10=(_Bool)1,            _while_condtional10) {
                if(_if_conditional54=self->item_existance[it_72],                _if_conditional54) {
                    if(_if_conditional55=string_equals(self->keys[it_72],key),                    _if_conditional55) {
                        __result77__ = __result_obj__ = self->items[it_72];
                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                        return __result77__;
                    }
                    it_72++;
                    if(_if_conditional77=it_72>=self->size,                    _if_conditional77) {
                        it_72=0;
                    }
                    else {
                        if(_if_conditional78=it_72==hash_71,                        _if_conditional78) {
                            __result78__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result78__;
                        }
                    }
                }
                else {
                    __result79__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result79__;
                }
            }
            __result80__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result80__;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional76;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional56=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional56) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional57=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional57) {
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional58=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional58) {
                                come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional76=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional76) {
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional59;
_Bool _if_conditional61;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional59=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                    _if_conditional59) {
                                        come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional61=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                    _if_conditional61) {
                                        come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional63=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                    _if_conditional63) {
                                        come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional64=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                    _if_conditional64) {
                                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional65=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                    _if_conditional65) {
                                        come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional66=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                    _if_conditional66) {
                                        come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional68=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional68) {
                                        come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional69=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional69) {
                                        come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional71=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional71) {
                                        come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional72=self!=((void*)0)&&self->mAlignas!=((void*)0),                                    _if_conditional72) {
                                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional73=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                    _if_conditional73) {
                                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional74=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                    _if_conditional74) {
                                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional75=self!=((void*)0)&&self->mAsmName!=((void*)0),                                    _if_conditional75) {
                                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_73;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_74;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_73, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_74, 0, sizeof(struct list_item$1sTypeph*));
                                            it_73=self->head;
                                            while(_while_condtional11=it_73!=((void*)0),                                            _while_condtional11) {
                                                prev_it_74=it_73;
                                                it_73=it_73->next;
                                                come_call_finalizer3(prev_it_74,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional60;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional60=self!=((void*)0)&&self->item!=((void*)0),                                                    _if_conditional60) {
                                                        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional62;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional62=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional62) {
                                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_75;
_Bool _while_condtional12;
struct list_item$1sNodeph* prev_it_76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_75, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_76, 0, sizeof(struct list_item$1sNodeph*));
                                            it_75=self->head;
                                            while(_while_condtional12=it_75!=((void*)0),                                            _while_condtional12) {
                                                prev_it_76=it_75;
                                                it_75=it_75->next;
                                                come_call_finalizer3(prev_it_76,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional67;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional67=self!=((void*)0)&&self->item!=((void*)0),                                                    _if_conditional67) {
                                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_77;
_Bool _while_condtional13;
struct list_item$1charph* prev_it_78;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_77, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_78, 0, sizeof(struct list_item$1charph*));
                                            it_77=self->head;
                                            while(_while_condtional13=it_77!=((void*)0),                                            _while_condtional13) {
                                                prev_it_78=it_77;
                                                it_77=it_77->next;
                                                come_call_finalizer3(prev_it_78,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional70;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional70=self!=((void*)0)&&self->item!=((void*)0),                                                    _if_conditional70) {
                                                        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional81;
int __result81__;
int __result82__;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional81=self==((void*)0),                _if_conditional81) {
                    __result81__ = 0;
                    return __result81__;
                }
                __result82__ = self->len;
                return __result82__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional84;
_Bool _if_conditional85;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional84=self!=((void*)0)&&self->c_value!=((void*)0),                _if_conditional84) {
                    self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional85=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional85) {
                    come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sNode* parse_enum(char* type_name, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_81;
_Bool output_82;
_Bool _if_conditional100;
void* right_value108;
void* right_value109;
struct sClass* __dec_obj21;
void* right_value168;
struct sClass* __dec_obj56;
int __exception_result_var_b1;
void* right_value169;
void* right_value170;
struct list$1tuple2$2charphsNodephph* elements_163;
_Bool _while_condtional31;
void* right_value171;
char* element_name_164;
_Bool _if_conditional245;
_Bool no_comma_165;
void* right_value172;
struct sNode* element_value_166;
_Bool _if_conditional246;
void* right_value176;
void* right_value177;
_Bool _if_conditional249;
void* right_value178;
void* right_value179;
_Bool _if_conditional251;
_Bool _if_conditional252;
void* right_value180;
void* right_value181;
struct sNode* _inf_value1;
struct sEnumNode* _inf_obj_value1;
void* right_value187;
struct sNode* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_81, 0, sizeof(struct sClass*));
memset(&output_82, 0, sizeof(_Bool));
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&elements_163, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value171 = (void*)0;
memset(&element_name_164, 0, sizeof(char*));
memset(&no_comma_165, 0, sizeof(_Bool));
right_value172 = (void*)0;
memset(&element_value_166, 0, sizeof(struct sNode*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value187 = (void*)0;
    if(_if_conditional100=map$2charphsClassph_at(info->classes,type_name,((void*)0))==((void*)0),    _if_conditional100) {
        output_82=(_Bool)1;
        __dec_obj21=klass_81;
        klass_81=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value109=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value108=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 116, "sClass")))),type_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,info))));
        come_call_finalizer3(__dec_obj21,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value108,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value109,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name),(struct sClass*)come_increment_ref_count(klass_81));
    }
    else {
        output_82=(_Bool)0;
        __dec_obj56=klass_81;
        klass_81=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value168=sClass_clone(map$2charphsClassph_at(info->classes,type_name,((void*)0))))));
        come_call_finalizer3(__dec_obj56,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value168,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    (come_push_stackframe("16enum.c", 124, 0),__exception_result_var_b1=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b1);
    elements_163=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value170=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value169=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 126, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer3(right_value169,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value170,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional31=(_Bool)1,    _while_condtional31) {
        parse_sharp_v5(info);
        element_name_164=(char*)come_increment_ref_count(((char*)(right_value171=parse_word(info))));
        right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional245=*info->p==61,        _if_conditional245) {
            info->p++;
            skip_spaces_and_lf(info);
            no_comma_165=info->no_comma;
            info->no_comma=(_Bool)1;
            element_value_166=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value172=expression_v13(info))));
            if(right_value172) { right_value172 = come_decrement_ref_count2(right_value172, ((struct sNode*)right_value172)->finalize, ((struct sNode*)right_value172)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            info->no_comma=no_comma_165;
            if(_if_conditional246=!info->no_output_err,            _if_conditional246) {
                list$1tuple2$2charphsNodephph_push_back(elements_163,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value177=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value176=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 146, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_164),(struct sNode*)come_increment_ref_count(element_value_166))))));
                come_call_finalizer3(right_value176,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value177,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(element_value_166) { element_value_166 = come_decrement_ref_count2(element_value_166, ((struct sNode*)element_value_166)->finalize, ((struct sNode*)element_value_166)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional249=!info->no_output_err,            _if_conditional249) {
                list$1tuple2$2charphsNodephph_push_back(elements_163,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value179=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value178=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "16enum.c", 151, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(element_name_164),((void*)0))))));
                right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value179,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            }
        }
        parse_sharp_v5(info);
        if(_if_conditional251=*info->p==44,        _if_conditional251) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(_if_conditional252=*info->p==125,        _if_conditional252) {
            info->p++;
            skip_spaces_and_lf(info);
            element_name_164 = come_decrement_ref_count2(element_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        element_name_164 = come_decrement_ref_count2(element_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 171, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sEnumNode*)(right_value181=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value180=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 171, "sEnumNode")))),(char*)come_increment_ref_count(type_name),elements_163,output_82,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sEnumNode_finalize;
    _inf_value1->clone=(void*)sEnumNode_clone;
    _inf_value1->compile=(void*)sEnumNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sEnumNode_terminated;
    _inf_value1->kind=(void*)sEnumNode_kind;
    __result142__ = __result_obj__ = ((struct sNode*)(right_value187=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass_81,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elements_163,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value180,sEnumNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value181,sEnumNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value187) { right_value187 = come_decrement_ref_count2(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result142__;
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass_81,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elements_163,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_83;
unsigned int it_84;
_Bool _while_condtional14;
_Bool _if_conditional89;
_Bool _if_conditional90;
struct sClass* __result85__;
_Bool _if_conditional98;
_Bool _if_conditional99;
struct sClass* __result86__;
struct sClass* __result87__;
struct sClass* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_83, 0, sizeof(unsigned int));
memset(&it_84, 0, sizeof(unsigned int));
        hash_83=string_get_hash_key(((char*)key))%self->size;
        it_84=hash_83;
        while(_while_condtional14=(_Bool)1,        _while_condtional14) {
            if(_if_conditional89=self->item_existance[it_84],            _if_conditional89) {
                if(_if_conditional90=string_equals(self->keys[it_84],key),                _if_conditional90) {
                    __result85__ = __result_obj__ = self->items[it_84];
                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    return __result85__;
                }
                it_84++;
                if(_if_conditional98=it_84>=self->size,                _if_conditional98) {
                    it_84=0;
                }
                else {
                    if(_if_conditional99=it_84==hash_83,                    _if_conditional99) {
                        __result86__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result86__;
                    }
                }
            }
            else {
                __result87__ = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result87__;
            }
        }
        __result88__ = __result_obj__ = default_value;
        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result88__;
        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional96;
_Bool _if_conditional97;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional91=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional91) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional92=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional92) {
                            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional96=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional96) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional97=self!=((void*)0)&&self->mParentClassName!=((void*)0),                        _if_conditional97) {
                            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_85;
_Bool _while_condtional15;
struct list_item$1tuple2$2charphsTypephph* prev_it_86;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_85, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_86, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_85=self->head;
                                while(_while_condtional15=it_85!=((void*)0),                                _while_condtional15) {
                                    prev_it_86=it_85;
                                    it_85=it_85->next;
                                    come_call_finalizer3(prev_it_86,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional93;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional93=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional93) {
                                            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional101;
unsigned int hash_102;
unsigned int it_103;
_Bool _while_condtional17;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool same_key_exist_120;
char* it2_123;
_Bool _if_conditional140;
_Bool _if_conditional141;
struct map$2charphsClassph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_102, 0, sizeof(unsigned int));
memset(&it_103, 0, sizeof(unsigned int));
memset(&same_key_exist_120, 0, sizeof(_Bool));
memset(&it2_123, 0, sizeof(char*));
            if(_if_conditional101=self->len*10>=self->size,            _if_conditional101) {
                map$2charphsClassph_rehash(self);
            }
            hash_102=string_get_hash_key(key)%self->size;
            it_103=hash_102;
            while(_while_condtional17=(_Bool)1,            _while_condtional17) {
                if(_if_conditional109=self->item_existance[it_103],                _if_conditional109) {
                    if(_if_conditional110=string_equals(self->keys[it_103],key),                    _if_conditional110) {
                        if(_if_conditional111=1,                        _if_conditional111) {
                            list$1charp_remove(self->key_list,self->keys[it_103]);
                            self->keys[it_103] = come_decrement_ref_count2(self->keys[it_103], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_103]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_103]);
                            self->keys[it_103]=key;
                        }
                        if(_if_conditional131=1,                        _if_conditional131) {
                            come_call_finalizer3(self->items[it_103],sClass_finalize, 0, 0, 0, 0, (void*)0);
                            self->items[it_103]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_103]=item;
                        }
                        break;
                    }
                    it_103++;
                    if(_if_conditional132=it_103>=self->size,                    _if_conditional132) {
                        it_103=0;
                    }
                    else {
                        if(_if_conditional133=it_103==hash_102,                        _if_conditional133) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_103]=(_Bool)1;
                    if(_if_conditional134=1,                    _if_conditional134) {
                        self->keys[it_103]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_103]=key;
                    }
                    if(_if_conditional135=1,                    _if_conditional135) {
                        self->items[it_103]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_103]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_120=(_Bool)0;
            for(            it2_123=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_123=list$1charp_next(self->key_list)            ){
                if(_if_conditional140=string_equals(it2_123,key),                _if_conditional140) {
                    same_key_exist_120=(_Bool)1;
                }
            }
            if(_if_conditional141=!same_key_exist_120,            _if_conditional141) {
                list$1charp_push_back(self->key_list,key);
            }
            __result108__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result108__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_87;
void* right_value110;
char** keys_88;
void* right_value111;
struct sClass** items_89;
void* right_value112;
_Bool* item_existance_90;
int len_91;
char* it_94;
struct sClass* default_value_97;
struct sClass* it2_98;
unsigned int hash_99;
int n_100;
_Bool _while_condtional16;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
struct sClass* default_value_101;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_87, 0, sizeof(int));
right_value110 = (void*)0;
memset(&keys_88, 0, sizeof(char**));
right_value111 = (void*)0;
memset(&items_89, 0, sizeof(struct sClass**));
right_value112 = (void*)0;
memset(&item_existance_90, 0, sizeof(_Bool*));
memset(&len_91, 0, sizeof(int));
memset(&it_94, 0, sizeof(char*));
memset(&default_value_97, 0, sizeof(struct sClass*));
memset(&it2_98, 0, sizeof(struct sClass*));
memset(&hash_99, 0, sizeof(unsigned int));
memset(&n_100, 0, sizeof(int));
memset(&default_value_101, 0, sizeof(struct sClass*));
                    size_87=self->size*10;
                    keys_88=(char**)come_increment_ref_count(((char**)(right_value110=(char**)come_calloc(1, sizeof(char*)*(1*(size_87)), "./neo-c.h", 1313, "char*%"))));
                    right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_89=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value111=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_87)), "./neo-c.h", 1314, "sClass*%"))));
                    come_call_finalizer3(right_value111,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    item_existance_90=(_Bool*)come_increment_ref_count(((_Bool*)(right_value112=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_87)), "./neo-c.h", 1315, "bool"))));
                    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_91=0;
                    for(                    it_94=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_94=map$2charphsClassph_next(self)                    ){
                        memset(&default_value_97,0,sizeof(struct sClass*));
                        it2_98=map$2charphsClassph_at(self,it_94,default_value_97);
                        hash_99=string_get_hash_key(it_94)%size_87;
                        n_100=hash_99;
                        while(_while_condtional16=(_Bool)1,                        _while_condtional16) {
                            if(_if_conditional106=item_existance_90[n_100],                            _if_conditional106) {
                                n_100++;
                                if(_if_conditional107=n_100>=size_87,                                _if_conditional107) {
                                    n_100=0;
                                }
                                else {
                                    if(_if_conditional108=n_100==hash_99,                                    _if_conditional108) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_90[n_100]=(_Bool)1;
                                keys_88[n_100]=it_94;
                                items_89[n_100]=map$2charphsClassph_at(self,it_94,default_value_101);
                                len_91++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_88;
                    self->items=items_89;
                    self->item_existance=item_existance_90;
                    self->size=size_87;
                    self->len=len_91;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional102;
char* result_92;
char* __result89__;
_Bool _if_conditional103;
char* __result90__;
char* result_93;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_92, 0, sizeof(char*));
memset(&result_93, 0, sizeof(char*));
                        if(_if_conditional102=self==((void*)0),                        _if_conditional102) {
                            memset(&result_92,0,sizeof(char*));
                            __result89__ = __result_obj__ = result_92;
                            return __result89__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result90__ = __result_obj__ = self->key_list->it->item;
                            return __result90__;
                        }
                        memset(&result_93,0,sizeof(char*));
                        __result91__ = __result_obj__ = result_93;
                        return __result91__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result92__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result92__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional104;
char* result_95;
char* __result93__;
_Bool _if_conditional105;
char* __result94__;
char* result_96;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_95, 0, sizeof(char*));
memset(&result_96, 0, sizeof(char*));
                        if(_if_conditional104=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional104) {
                            memset(&result_95,0,sizeof(char*));
                            __result93__ = __result_obj__ = result_95;
                            return __result93__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result94__ = __result_obj__ = self->key_list->it->item;
                            return __result94__;
                        }
                        memset(&result_96,0,sizeof(char*));
                        __result95__ = __result_obj__ = result_96;
                        return __result95__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_104;
struct list_item$1charp* it_105;
_Bool _while_condtional18;
_Bool _if_conditional112;
struct list$1charp* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_104, 0, sizeof(int));
memset(&it_105, 0, sizeof(struct list_item$1charp*));
                                it2_104=0;
                                it_105=self->head;
                                while(_while_condtional18=it_105!=((void*)0),                                _while_condtional18) {
                                    if(_if_conditional112=string_equals(it_105->item,item),                                    _if_conditional112) {
                                        list$1charp_delete(self,it2_104,it2_104+1);
                                        break;
                                    }
                                    it2_104++;
                                    it_105=it_105->next;
                                }
                                __result99__ = __result_obj__ = self;
                                return __result99__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
int tmp_106;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct list$1charp* __result96__;
_Bool _if_conditional119;
_Bool _if_conditional120;
struct list_item$1charp* it_109;
int i_110;
_Bool _while_condtional20;
_Bool _if_conditional121;
struct list_item$1charp* prev_it_111;
_Bool _if_conditional122;
_Bool _if_conditional123;
struct list_item$1charp* it_112;
int i_113;
_Bool _while_condtional21;
_Bool _if_conditional124;
_Bool _if_conditional125;
struct list_item$1charp* prev_it_114;
struct list_item$1charp* it_115;
struct list_item$1charp* head_prev_it_116;
struct list_item$1charp* tail_it_117;
int i_118;
_Bool _while_condtional22;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
struct list_item$1charp* prev_it_119;
_Bool _if_conditional129;
_Bool _if_conditional130;
struct list$1charp* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_106, 0, sizeof(int));
memset(&it_109, 0, sizeof(struct list_item$1charp*));
memset(&i_110, 0, sizeof(int));
memset(&prev_it_111, 0, sizeof(struct list_item$1charp*));
memset(&it_112, 0, sizeof(struct list_item$1charp*));
memset(&i_113, 0, sizeof(int));
memset(&prev_it_114, 0, sizeof(struct list_item$1charp*));
memset(&it_115, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_116, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_117, 0, sizeof(struct list_item$1charp*));
memset(&i_118, 0, sizeof(int));
memset(&prev_it_119, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional113=head<0,                                            _if_conditional113) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional114=tail<0,                                            _if_conditional114) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional115=head>tail,                                            _if_conditional115) {
                                                tmp_106=tail;
                                                tail=head;
                                                head=tmp_106;
                                            }
                                            if(_if_conditional116=head<0,                                            _if_conditional116) {
                                                head=0;
                                            }
                                            if(_if_conditional117=tail>self->len,                                            _if_conditional117) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional118=head==tail,                                            _if_conditional118) {
                                                __result96__ = __result_obj__ = self;
                                                return __result96__;
                                            }
                                            if(_if_conditional119=head==0&&tail==self->len,                                            _if_conditional119) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional120=head==0,                                                _if_conditional120) {
                                                    it_109=self->head;
                                                    i_110=0;
                                                    while(_while_condtional20=it_109!=((void*)0),                                                    _while_condtional20) {
                                                        if(_if_conditional121=i_110<tail,                                                        _if_conditional121) {
                                                            prev_it_111=it_109;
                                                            it_109=it_109->next;
                                                            i_110++;
                                                            come_call_finalizer3(prev_it_111,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional122=i_110==tail,                                                            _if_conditional122) {
                                                                self->head=it_109;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_109=it_109->next;
                                                                i_110++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional123=tail==self->len,                                                    _if_conditional123) {
                                                        it_112=self->head;
                                                        i_113=0;
                                                        while(_while_condtional21=it_112!=((void*)0),                                                        _while_condtional21) {
                                                            if(_if_conditional124=i_113==head,                                                            _if_conditional124) {
                                                                self->tail=it_112->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional125=i_113>=head,                                                            _if_conditional125) {
                                                                prev_it_114=it_112;
                                                                it_112=it_112->next;
                                                                i_113++;
                                                                come_call_finalizer3(prev_it_114,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_112=it_112->next;
                                                                i_113++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_115=self->head;
                                                        head_prev_it_116=((void*)0);
                                                        tail_it_117=((void*)0);
                                                        i_118=0;
                                                        while(_while_condtional22=it_115!=((void*)0),                                                        _while_condtional22) {
                                                            if(_if_conditional126=i_118==head,                                                            _if_conditional126) {
                                                                head_prev_it_116=it_115->prev;
                                                            }
                                                            if(_if_conditional127=i_118==tail,                                                            _if_conditional127) {
                                                                tail_it_117=it_115;
                                                            }
                                                            if(_if_conditional128=i_118>=head&&i_118<tail,                                                            _if_conditional128) {
                                                                prev_it_119=it_115;
                                                                it_115=it_115->next;
                                                                i_118++;
                                                                come_call_finalizer3(prev_it_119,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_115=it_115->next;
                                                                i_118++;
                                                            }
                                                        }
                                                        if(_if_conditional129=head_prev_it_116!=((void*)0),                                                        _if_conditional129) {
                                                            head_prev_it_116->next=tail_it_117;
                                                        }
                                                        if(_if_conditional130=tail_it_117!=((void*)0),                                                        _if_conditional130) {
                                                            tail_it_117->prev=head_prev_it_116;
                                                        }
                                                    }
                                                }
                                            }
                                            __result98__ = __result_obj__ = self;
                                            return __result98__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_107;
_Bool _while_condtional19;
struct list_item$1charp* prev_it_108;
struct list$1charp* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_107, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_108, 0, sizeof(struct list_item$1charp*));
                                                    it_107=self->head;
                                                    while(_while_condtional19=it_107!=((void*)0),                                                    _while_condtional19) {
                                                        prev_it_108=it_107;
                                                        it_107=it_107->next;
                                                        come_call_finalizer3(prev_it_108,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result97__ = __result_obj__ = self;
                                                    return __result97__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional136;
char* result_121;
char* __result100__;
_Bool _if_conditional137;
char* __result101__;
char* result_122;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_121, 0, sizeof(char*));
memset(&result_122, 0, sizeof(char*));
                if(_if_conditional136=self==((void*)0),                _if_conditional136) {
                    memset(&result_121,0,sizeof(char*));
                    __result100__ = __result_obj__ = result_121;
                    return __result100__;
                }
                self->it=self->head;
                if(self->it) {
                    __result101__ = __result_obj__ = self->it->item;
                    return __result101__;
                }
                memset(&result_122,0,sizeof(char*));
                __result102__ = __result_obj__ = result_122;
                return __result102__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
                __result103__ = self==((void*)0)||self->it==((void*)0);
                return __result103__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional138;
char* result_124;
char* __result104__;
_Bool _if_conditional139;
char* __result105__;
char* result_125;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(char*));
memset(&result_125, 0, sizeof(char*));
                if(_if_conditional138=self==((void*)0)||self->it==((void*)0),                _if_conditional138) {
                    memset(&result_124,0,sizeof(char*));
                    __result104__ = __result_obj__ = result_124;
                    return __result104__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result105__ = __result_obj__ = self->it->item;
                    return __result105__;
                }
                memset(&result_125,0,sizeof(char*));
                __result106__ = __result_obj__ = result_125;
                return __result106__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional142;
void* right_value113;
struct list_item$1charp* litem_126;
_Bool _if_conditional143;
void* right_value114;
struct list_item$1charp* litem_127;
void* right_value115;
struct list_item$1charp* litem_128;
struct list$1charp* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
memset(&litem_126, 0, sizeof(struct list_item$1charp*));
right_value114 = (void*)0;
memset(&litem_127, 0, sizeof(struct list_item$1charp*));
right_value115 = (void*)0;
memset(&litem_128, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional142=self->len==0,                    _if_conditional142) {
                        litem_126=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value113=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                        come_call_finalizer3(right_value113,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_126->prev=((void*)0);
                        litem_126->next=((void*)0);
                        litem_126->item=item;
                        self->tail=litem_126;
                        self->head=litem_126;
                    }
                    else {
                        if(_if_conditional143=self->len==1,                        _if_conditional143) {
                            litem_127=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value114=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                            come_call_finalizer3(right_value114,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_127->prev=self->head;
                            litem_127->next=((void*)0);
                            litem_127->item=item;
                            self->tail=litem_127;
                            self->head->next=litem_127;
                        }
                        else {
                            litem_128=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value115=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                            come_call_finalizer3(right_value115,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_128->prev=self->tail;
                            litem_128->next=((void*)0);
                            litem_128->item=item;
                            self->tail->next=litem_128;
                            self->tail=litem_128;
                        }
                    }
                    self->len++;
                    __result107__ = __result_obj__ = self;
                    return __result107__;
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional144;
struct sClass* __result109__;
void* right_value116;
struct sClass* result_129;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value117;
char* __dec_obj22;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
void* right_value165;
struct list$1tuple2$2charphsTypephph* __dec_obj53;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
void* right_value166;
char* __dec_obj54;
_Bool _if_conditional243;
_Bool _if_conditional244;
void* right_value167;
char* __dec_obj55;
struct sClass* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
memset(&result_129, 0, sizeof(struct sClass*));
right_value117 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
            if(_if_conditional144=self==(void*)0,            _if_conditional144) {
                __result109__ = __result_obj__ = (void*)0;
                return __result109__;
            }
            result_129=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value116=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
            come_call_finalizer3(right_value116,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional145=self!=((void*)0),            _if_conditional145) {
                result_129->mStruct=self->mStruct;
            }
            if(_if_conditional146=self!=((void*)0),            _if_conditional146) {
                result_129->mFloat=self->mFloat;
            }
            if(_if_conditional147=self!=((void*)0),            _if_conditional147) {
                result_129->mUnion=self->mUnion;
            }
            if(_if_conditional148=self!=((void*)0),            _if_conditional148) {
                result_129->mGenerics=self->mGenerics;
            }
            if(_if_conditional149=self!=((void*)0),            _if_conditional149) {
                result_129->mMethodGenerics=self->mMethodGenerics;
            }
            if(_if_conditional150=self!=((void*)0),            _if_conditional150) {
                result_129->mEnum=self->mEnum;
            }
            if(_if_conditional151=self!=((void*)0),            _if_conditional151) {
                result_129->mProtocol=self->mProtocol;
            }
            if(_if_conditional152=self!=((void*)0),            _if_conditional152) {
                result_129->mNumber=self->mNumber;
            }
            if(_if_conditional153=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional153) {
                __dec_obj22=result_129->mName;
                result_129->mName=(char*)come_increment_ref_count(((char*)(right_value117=string_clone(self->mName))));
                __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional154=self!=((void*)0),            _if_conditional154) {
                result_129->mGenericsNum=self->mGenericsNum;
            }
            if(_if_conditional155=self!=((void*)0),            _if_conditional155) {
                result_129->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            if(_if_conditional156=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional156) {
                __dec_obj53=result_129->mFields;
                result_129->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value165=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                come_call_finalizer3(__dec_obj53,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value165,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional240=self!=((void*)0),            _if_conditional240) {
                result_129->mOutputed=self->mOutputed;
            }
            if(_if_conditional241=self!=((void*)0),            _if_conditional241) {
                result_129->mOutputed2=self->mOutputed2;
            }
            if(_if_conditional242=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional242) {
                __dec_obj54=result_129->mDeclareSName;
                result_129->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value166=string_clone(self->mDeclareSName))));
                __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional243=self!=((void*)0),            _if_conditional243) {
                result_129->mNobodyStruct=self->mNobodyStruct;
            }
            if(_if_conditional244=self!=((void*)0)&&self->mParentClassName!=((void*)0),            _if_conditional244) {
                __dec_obj55=result_129->mParentClassName;
                result_129->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value167=string_clone(self->mParentClassName))));
                __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result136__ = __result_obj__ = result_129;
            come_call_finalizer3(result_129,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result136__;
            come_call_finalizer3(result_129,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional157;
struct list$1tuple2$2charphsTypephph* __result110__;
void* right_value118;
void* right_value119;
struct list$1tuple2$2charphsTypephph* result_130;
struct list_item$1tuple2$2charphsTypephph* it_131;
_Bool _while_condtional23;
void* right_value164;
struct list$1tuple2$2charphsTypephph* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&result_130, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_131, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value164 = (void*)0;
                    if(_if_conditional157=self==((void*)0),                    _if_conditional157) {
                        __result110__ = __result_obj__ = ((void*)0);
                        return __result110__;
                    }
                    result_130=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value119=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value118=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 133, "list$1tuple2$2charphsTypephph"))))))));
                    come_call_finalizer3(right_value118,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value119,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_131=self->head;
                    while(_while_condtional23=it_131!=((void*)0),                    _while_condtional23) {
                        list$1tuple2$2charphsTypephph_add(result_130,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value164=tuple2$2charphsTypephp_clone(it_131->item)))));
                        come_call_finalizer3(right_value164,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        it_131=it_131->next;
                    }
                    __result135__ = __result_obj__ = result_130;
                    come_call_finalizer3(result_130,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result135__;
                    come_call_finalizer3(result_130,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result111__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result111__;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional158;
void* right_value120;
struct list_item$1tuple2$2charphsTypephph* litem_132;
struct tuple2$2charphsTypeph* __dec_obj23;
_Bool _if_conditional161;
void* right_value121;
struct list_item$1tuple2$2charphsTypephph* litem_133;
struct tuple2$2charphsTypeph* __dec_obj24;
void* right_value122;
struct list_item$1tuple2$2charphsTypephph* litem_134;
struct tuple2$2charphsTypeph* __dec_obj25;
struct list$1tuple2$2charphsTypephph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&litem_132, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value121 = (void*)0;
memset(&litem_133, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value122 = (void*)0;
memset(&litem_134, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            if(_if_conditional158=self->len==0,                            _if_conditional158) {
                                litem_132=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value120=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 147, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value120,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_132->prev=((void*)0);
                                litem_132->next=((void*)0);
                                __dec_obj23=litem_132->item;
                                litem_132->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj23,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_132;
                                self->head=litem_132;
                            }
                            else {
                                if(_if_conditional161=self->len==1,                                _if_conditional161) {
                                    litem_133=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value121=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 157, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value121,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_133->prev=self->head;
                                    litem_133->next=((void*)0);
                                    __dec_obj24=litem_133->item;
                                    litem_133->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj24,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_133;
                                    self->head->next=litem_133;
                                }
                                else {
                                    litem_134=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value122=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 167, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value122,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_134->prev=self->tail;
                                    litem_134->next=((void*)0);
                                    __dec_obj25=litem_134->item;
                                    litem_134->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj25,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_134;
                                    self->tail=litem_134;
                                }
                            }
                            self->len++;
                            __result112__ = __result_obj__ = self;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result112__;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional164;
_Bool _if_conditional165;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional164=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional164) {
                                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional165=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional165) {
                                            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional166;
struct tuple2$2charphsTypeph* __result113__;
void* right_value123;
struct tuple2$2charphsTypeph* result_135;
_Bool _if_conditional169;
void* right_value124;
char* __dec_obj26;
_Bool _if_conditional170;
void* right_value163;
struct sType* __dec_obj52;
struct tuple2$2charphsTypeph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&result_135, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value124 = (void*)0;
right_value163 = (void*)0;
                            if(_if_conditional166=self==(void*)0,                            _if_conditional166) {
                                __result113__ = __result_obj__ = (void*)0;
                                return __result113__;
                            }
                            result_135=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value123=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                            come_call_finalizer3(right_value123,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional169=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional169) {
                                __dec_obj26=result_135->v1;
                                result_135->v1=(char*)come_increment_ref_count(((char*)(right_value124=string_clone(self->v1))));
                                __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional170=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional170) {
                                __dec_obj52=result_135->v2;
                                result_135->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=sType_clone(self->v2))));
                                come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value163,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                            __result134__ = __result_obj__ = result_135;
                            come_call_finalizer3(result_135,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
                            return __result134__;
                            come_call_finalizer3(result_135,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional167;
_Bool _if_conditional168;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional167=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional167) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional168=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional168) {
                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional171;
struct sType* __result114__;
void* right_value125;
struct sType* result_136;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value132;
struct list$1sTypeph* __dec_obj30;
_Bool _if_conditional177;
void* right_value135;
struct tuple1$1sTypeph* __dec_obj32;
_Bool _if_conditional181;
void* right_value138;
struct tuple1$1sTypeph* __dec_obj34;
_Bool _if_conditional184;
void* right_value139;
char* __dec_obj35;
_Bool _if_conditional185;
void* right_value140;
struct list$1sTypeph* __dec_obj36;
_Bool _if_conditional186;
void* right_value147;
struct list$1sNodeph* __dec_obj40;
_Bool _if_conditional190;
_Bool _if_conditional191;
void* right_value148;
struct list$1sTypeph* __dec_obj41;
_Bool _if_conditional192;
void* right_value155;
struct list$1charph* __dec_obj45;
_Bool _if_conditional196;
void* right_value158;
struct tuple1$1sTypeph* __dec_obj47;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value159;
struct sNode* __dec_obj48;
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
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
void* right_value160;
struct sNode* __dec_obj49;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
void* right_value161;
char* __dec_obj50;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value162;
char* __dec_obj51;
_Bool _if_conditional239;
struct sType* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
memset(&result_136, 0, sizeof(struct sType*));
right_value132 = (void*)0;
right_value135 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value155 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
                                    if(_if_conditional171=self==(void*)0,                                    _if_conditional171) {
                                        __result114__ = __result_obj__ = (void*)0;
                                        return __result114__;
                                    }
                                    result_136=(struct sType*)come_increment_ref_count(((struct sType*)(right_value125=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                                    come_call_finalizer3(right_value125,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional172=self!=((void*)0),                                    _if_conditional172) {
                                        result_136->mClass=self->mClass;
                                    }
                                    if(_if_conditional173=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                    _if_conditional173) {
                                        __dec_obj30=result_136->mMultipleTypes;
                                        result_136->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value132=list$1sTypeph_clone(self->mMultipleTypes))));
                                        come_call_finalizer3(__dec_obj30,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value132,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional177=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                    _if_conditional177) {
                                        __dec_obj32=result_136->mNoSolvedGenericsType;
                                        result_136->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value135=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                        come_call_finalizer3(__dec_obj32,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value135,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional181=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                    _if_conditional181) {
                                        __dec_obj34=result_136->mOriginalLoadVarType;
                                        result_136->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value138=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                        come_call_finalizer3(__dec_obj34,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value138,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional184=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                    _if_conditional184) {
                                        __dec_obj35=result_136->mGenericsName;
                                        result_136->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value139=string_clone(self->mGenericsName))));
                                        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional185=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                    _if_conditional185) {
                                        __dec_obj36=result_136->mGenericsTypes;
                                        result_136->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value140=list$1sTypeph_clone(self->mGenericsTypes))));
                                        come_call_finalizer3(__dec_obj36,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value140,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional186=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                    _if_conditional186) {
                                        __dec_obj40=result_136->mArrayNum;
                                        result_136->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value147=list$1sNodeph_clone(self->mArrayNum))));
                                        come_call_finalizer3(__dec_obj40,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value147,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional190=self!=((void*)0),                                    _if_conditional190) {
                                        result_136->mOmitArrayNum=self->mOmitArrayNum;
                                    }
                                    if(_if_conditional191=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional191) {
                                        __dec_obj41=result_136->mParamTypes;
                                        result_136->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value148=list$1sTypeph_clone(self->mParamTypes))));
                                        come_call_finalizer3(__dec_obj41,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value148,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional192=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional192) {
                                        __dec_obj45=result_136->mParamNames;
                                        result_136->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value155=list$1charph_clone(self->mParamNames))));
                                        come_call_finalizer3(__dec_obj45,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value155,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional196=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional196) {
                                        __dec_obj47=result_136->mResultType;
                                        result_136->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value158=tuple1$1sTypephp_clone(self->mResultType))));
                                        come_call_finalizer3(__dec_obj47,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value158,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional199=self!=((void*)0),                                    _if_conditional199) {
                                        result_136->mVarArgs=self->mVarArgs;
                                    }
                                    if(_if_conditional200=self!=((void*)0)&&self->mAlignas!=((void*)0),                                    _if_conditional200) {
                                        __dec_obj48=result_136->mAlignas;
                                        result_136->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value159=sNode_clone(self->mAlignas))));
                                        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value159) { right_value159 = come_decrement_ref_count2(right_value159, ((struct sNode*)right_value159)->finalize, ((struct sNode*)right_value159)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional201=self!=((void*)0),                                    _if_conditional201) {
                                        result_136->mUnsigned=self->mUnsigned;
                                    }
                                    if(_if_conditional202=self!=((void*)0),                                    _if_conditional202) {
                                        result_136->mShort=self->mShort;
                                    }
                                    if(_if_conditional203=self!=((void*)0),                                    _if_conditional203) {
                                        result_136->mLong=self->mLong;
                                    }
                                    if(_if_conditional204=self!=((void*)0),                                    _if_conditional204) {
                                        result_136->mLongLong=self->mLongLong;
                                    }
                                    if(_if_conditional205=self!=((void*)0),                                    _if_conditional205) {
                                        result_136->mConstant=self->mConstant;
                                    }
                                    if(_if_conditional206=self!=((void*)0),                                    _if_conditional206) {
                                        result_136->mRegister=self->mRegister;
                                    }
                                    if(_if_conditional207=self!=((void*)0),                                    _if_conditional207) {
                                        result_136->mVolatile=self->mVolatile;
                                    }
                                    if(_if_conditional208=self!=((void*)0),                                    _if_conditional208) {
                                        result_136->mStatic=self->mStatic;
                                    }
                                    if(_if_conditional209=self!=((void*)0),                                    _if_conditional209) {
                                        result_136->mRecord=self->mRecord;
                                    }
                                    if(_if_conditional210=self!=((void*)0),                                    _if_conditional210) {
                                        result_136->mExtern=self->mExtern;
                                    }
                                    if(_if_conditional211=self!=((void*)0),                                    _if_conditional211) {
                                        result_136->mRestrict=self->mRestrict;
                                    }
                                    if(_if_conditional212=self!=((void*)0),                                    _if_conditional212) {
                                        result_136->mImmutable=self->mImmutable;
                                    }
                                    if(_if_conditional213=self!=((void*)0),                                    _if_conditional213) {
                                        result_136->mHeap=self->mHeap;
                                    }
                                    if(_if_conditional214=self!=((void*)0),                                    _if_conditional214) {
                                        result_136->mDummyHeap=self->mDummyHeap;
                                    }
                                    if(_if_conditional215=self!=((void*)0),                                    _if_conditional215) {
                                        result_136->mDelegate=self->mDelegate;
                                    }
                                    if(_if_conditional216=self!=((void*)0),                                    _if_conditional216) {
                                        result_136->mShare=self->mShare;
                                    }
                                    if(_if_conditional217=self!=((void*)0),                                    _if_conditional217) {
                                        result_136->mClone=self->mClone;
                                    }
                                    if(_if_conditional218=self!=((void*)0),                                    _if_conditional218) {
                                        result_136->mNoHeap=self->mNoHeap;
                                    }
                                    if(_if_conditional219=self!=((void*)0),                                    _if_conditional219) {
                                        result_136->mNoCallingDestructor=self->mNoCallingDestructor;
                                    }
                                    if(_if_conditional220=self!=((void*)0),                                    _if_conditional220) {
                                        result_136->mRefference=self->mRefference;
                                    }
                                    if(_if_conditional221=self!=((void*)0),                                    _if_conditional221) {
                                        result_136->mException=self->mException;
                                    }
                                    if(_if_conditional222=self!=((void*)0),                                    _if_conditional222) {
                                        result_136->mPointerNum=self->mPointerNum;
                                    }
                                    if(_if_conditional223=self!=((void*)0),                                    _if_conditional223) {
                                        result_136->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                    }
                                    if(_if_conditional224=self!=((void*)0),                                    _if_conditional224) {
                                        result_136->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                    }
                                    if(_if_conditional225=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                    _if_conditional225) {
                                        __dec_obj49=result_136->mSizeNum;
                                        result_136->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value160=sNode_clone(self->mSizeNum))));
                                        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value160) { right_value160 = come_decrement_ref_count2(right_value160, ((struct sNode*)right_value160)->finalize, ((struct sNode*)right_value160)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional226=self!=((void*)0),                                    _if_conditional226) {
                                        result_136->mDynamicArrayNum=self->mDynamicArrayNum;
                                    }
                                    if(_if_conditional227=self!=((void*)0),                                    _if_conditional227) {
                                        result_136->mTypeOfExpression=self->mTypeOfExpression;
                                    }
                                    if(_if_conditional228=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                    _if_conditional228) {
                                        __dec_obj50=result_136->mOriginalTypeName;
                                        result_136->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value161=string_clone(self->mOriginalTypeName))));
                                        __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional229=self!=((void*)0),                                    _if_conditional229) {
                                        result_136->mOriginalPointerNum=self->mOriginalPointerNum;
                                    }
                                    if(_if_conditional230=self!=((void*)0),                                    _if_conditional230) {
                                        result_136->mFunctionParam=self->mFunctionParam;
                                    }
                                    if(_if_conditional231=self!=((void*)0),                                    _if_conditional231) {
                                        result_136->mAllocaValue=self->mAllocaValue;
                                    }
                                    if(_if_conditional232=self!=((void*)0),                                    _if_conditional232) {
                                        result_136->mGenericsStruct=self->mGenericsStruct;
                                    }
                                    if(_if_conditional233=self!=((void*)0),                                    _if_conditional233) {
                                        result_136->mSolvedGenericsName=self->mSolvedGenericsName;
                                    }
                                    if(_if_conditional234=self!=((void*)0),                                    _if_conditional234) {
                                        result_136->mComeMemCore=self->mComeMemCore;
                                    }
                                    if(_if_conditional235=self!=((void*)0),                                    _if_conditional235) {
                                        result_136->mInline=self->mInline;
                                    }
                                    if(_if_conditional236=self!=((void*)0),                                    _if_conditional236) {
                                        result_136->mNullValue=self->mNullValue;
                                    }
                                    if(_if_conditional237=self!=((void*)0),                                    _if_conditional237) {
                                        result_136->mGuardValue=self->mGuardValue;
                                    }
                                    if(_if_conditional238=self!=((void*)0)&&self->mAsmName!=((void*)0),                                    _if_conditional238) {
                                        __dec_obj51=result_136->mAsmName;
                                        result_136->mAsmName=(char*)come_increment_ref_count(((char*)(right_value162=string_clone(self->mAsmName))));
                                        __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional239=self!=((void*)0),                                    _if_conditional239) {
                                        result_136->mArrayPointerType=self->mArrayPointerType;
                                    }
                                    __result133__ = __result_obj__ = result_136;
                                    come_call_finalizer3(result_136,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result133__;
                                    come_call_finalizer3(result_136,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional174;
struct list$1sTypeph* __result115__;
void* right_value126;
void* right_value127;
struct list$1sTypeph* result_137;
struct list_item$1sTypeph* it_138;
_Bool _while_condtional24;
void* right_value131;
struct list$1sTypeph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
right_value127 = (void*)0;
memset(&result_137, 0, sizeof(struct list$1sTypeph*));
memset(&it_138, 0, sizeof(struct list_item$1sTypeph*));
right_value131 = (void*)0;
                                            if(_if_conditional174=self==((void*)0),                                            _if_conditional174) {
                                                __result115__ = __result_obj__ = ((void*)0);
                                                return __result115__;
                                            }
                                            result_137=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value127=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value126=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                                            come_call_finalizer3(right_value126,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value127,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_138=self->head;
                                            while(_while_condtional24=it_138!=((void*)0),                                            _while_condtional24) {
                                                list$1sTypeph_add(result_137,(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(it_138->item)))));
                                                come_call_finalizer3(right_value131,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                it_138=it_138->next;
                                            }
                                            __result118__ = __result_obj__ = result_137;
                                            come_call_finalizer3(result_137,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result118__;
                                            come_call_finalizer3(result_137,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result116__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result116__;
                                                come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional175;
void* right_value128;
struct list_item$1sTypeph* litem_139;
struct sType* __dec_obj27;
_Bool _if_conditional176;
void* right_value129;
struct list_item$1sTypeph* litem_140;
struct sType* __dec_obj28;
void* right_value130;
struct list_item$1sTypeph* litem_141;
struct sType* __dec_obj29;
struct list$1sTypeph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
memset(&litem_139, 0, sizeof(struct list_item$1sTypeph*));
right_value129 = (void*)0;
memset(&litem_140, 0, sizeof(struct list_item$1sTypeph*));
right_value130 = (void*)0;
memset(&litem_141, 0, sizeof(struct list_item$1sTypeph*));
                                                    if(_if_conditional175=self->len==0,                                                    _if_conditional175) {
                                                        litem_139=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value128=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                                                        come_call_finalizer3(right_value128,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        litem_139->prev=((void*)0);
                                                        litem_139->next=((void*)0);
                                                        __dec_obj27=litem_139->item;
                                                        litem_139->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer3(__dec_obj27,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        self->tail=litem_139;
                                                        self->head=litem_139;
                                                    }
                                                    else {
                                                        if(_if_conditional176=self->len==1,                                                        _if_conditional176) {
                                                            litem_140=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value129=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(right_value129,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_140->prev=self->head;
                                                            litem_140->next=((void*)0);
                                                            __dec_obj28=litem_140->item;
                                                            litem_140->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->tail=litem_140;
                                                            self->head->next=litem_140;
                                                        }
                                                        else {
                                                            litem_141=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value130=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(right_value130,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_141->prev=self->tail;
                                                            litem_141->next=((void*)0);
                                                            __dec_obj29=litem_141->item;
                                                            litem_141->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj29,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->tail->next=litem_141;
                                                            self->tail=litem_141;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result117__ = __result_obj__ = self;
                                                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result117__;
                                                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_142;
_Bool _while_condtional25;
struct list_item$1sTypeph* prev_it_143;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_142, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_143, 0, sizeof(struct list_item$1sTypeph*));
                                            it_142=self->head;
                                            while(_while_condtional25=it_142!=((void*)0),                                            _while_condtional25) {
                                                prev_it_143=it_142;
                                                it_142=it_142->next;
                                                come_call_finalizer3(prev_it_143,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional179;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional179=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional179) {
                                                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional187;
struct list$1sNodeph* __result123__;
void* right_value141;
void* right_value142;
struct list$1sNodeph* result_146;
struct list_item$1sNodeph* it_147;
_Bool _while_condtional26;
void* right_value146;
struct list$1sNodeph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
right_value142 = (void*)0;
memset(&result_146, 0, sizeof(struct list$1sNodeph*));
memset(&it_147, 0, sizeof(struct list_item$1sNodeph*));
right_value146 = (void*)0;
                                            if(_if_conditional187=self==((void*)0),                                            _if_conditional187) {
                                                __result123__ = __result_obj__ = ((void*)0);
                                                return __result123__;
                                            }
                                            result_146=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value142=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value141=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                                            come_call_finalizer3(right_value141,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value142,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_147=self->head;
                                            while(_while_condtional26=it_147!=((void*)0),                                            _while_condtional26) {
                                                list$1sNodeph_add(result_146,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value146=sNode_clone(it_147->item)))));
                                                if(right_value146) { right_value146 = come_decrement_ref_count2(right_value146, ((struct sNode*)right_value146)->finalize, ((struct sNode*)right_value146)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                it_147=it_147->next;
                                            }
                                            __result126__ = __result_obj__ = result_146;
                                            come_call_finalizer3(result_146,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result126__;
                                            come_call_finalizer3(result_146,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result124__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result124__;
                                                come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional188;
void* right_value143;
struct list_item$1sNodeph* litem_148;
struct sNode* __dec_obj37;
_Bool _if_conditional189;
void* right_value144;
struct list_item$1sNodeph* litem_149;
struct sNode* __dec_obj38;
void* right_value145;
struct list_item$1sNodeph* litem_150;
struct sNode* __dec_obj39;
struct list$1sNodeph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
memset(&litem_148, 0, sizeof(struct list_item$1sNodeph*));
right_value144 = (void*)0;
memset(&litem_149, 0, sizeof(struct list_item$1sNodeph*));
right_value145 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1sNodeph*));
                                                    if(_if_conditional188=self->len==0,                                                    _if_conditional188) {
                                                        litem_148=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value143=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                                                        come_call_finalizer3(right_value143,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        litem_148->prev=((void*)0);
                                                        litem_148->next=((void*)0);
                                                        __dec_obj37=litem_148->item;
                                                        litem_148->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
                                                        self->tail=litem_148;
                                                        self->head=litem_148;
                                                    }
                                                    else {
                                                        if(_if_conditional189=self->len==1,                                                        _if_conditional189) {
                                                            litem_149=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value144=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(right_value144,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_149->prev=self->head;
                                                            litem_149->next=((void*)0);
                                                            __dec_obj38=litem_149->item;
                                                            litem_149->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
                                                            self->tail=litem_149;
                                                            self->head->next=litem_149;
                                                        }
                                                        else {
                                                            litem_150=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value145=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(right_value145,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_150->prev=self->tail;
                                                            litem_150->next=((void*)0);
                                                            __dec_obj39=litem_150->item;
                                                            litem_150->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); }
                                                            self->tail->next=litem_150;
                                                            self->tail=litem_150;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result125__ = __result_obj__ = self;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result125__;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_151;
_Bool _while_condtional27;
struct list_item$1sNodeph* prev_it_152;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_151, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_152, 0, sizeof(struct list_item$1sNodeph*));
                                            it_151=self->head;
                                            while(_while_condtional27=it_151!=((void*)0),                                            _while_condtional27) {
                                                prev_it_152=it_151;
                                                it_151=it_151->next;
                                                come_call_finalizer3(prev_it_152,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional193;
struct list$1charph* __result127__;
void* right_value149;
void* right_value150;
struct list$1charph* result_153;
struct list_item$1charph* it_154;
_Bool _while_condtional28;
void* right_value154;
struct list$1charph* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&result_153, 0, sizeof(struct list$1charph*));
memset(&it_154, 0, sizeof(struct list_item$1charph*));
right_value154 = (void*)0;
                                            if(_if_conditional193=self==((void*)0),                                            _if_conditional193) {
                                                __result127__ = __result_obj__ = ((void*)0);
                                                return __result127__;
                                            }
                                            result_153=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value149=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                                            come_call_finalizer3(right_value149,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value150,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_154=self->head;
                                            while(_while_condtional28=it_154!=((void*)0),                                            _while_condtional28) {
                                                list$1charph_add(result_153,(char*)come_increment_ref_count(((char*)(right_value154=string_clone(it_154->item)))));
                                                right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                it_154=it_154->next;
                                            }
                                            __result130__ = __result_obj__ = result_153;
                                            come_call_finalizer3(result_153,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result130__;
                                            come_call_finalizer3(result_153,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result128__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result128__;
                                                come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional194;
void* right_value151;
struct list_item$1charph* litem_155;
char* __dec_obj42;
_Bool _if_conditional195;
void* right_value152;
struct list_item$1charph* litem_156;
char* __dec_obj43;
void* right_value153;
struct list_item$1charph* litem_157;
char* __dec_obj44;
struct list$1charph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
memset(&litem_155, 0, sizeof(struct list_item$1charph*));
right_value152 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1charph*));
right_value153 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1charph*));
                                                    if(_if_conditional194=self->len==0,                                                    _if_conditional194) {
                                                        litem_155=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value151=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                                                        come_call_finalizer3(right_value151,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        litem_155->prev=((void*)0);
                                                        litem_155->next=((void*)0);
                                                        __dec_obj42=litem_155->item;
                                                        litem_155->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        self->tail=litem_155;
                                                        self->head=litem_155;
                                                    }
                                                    else {
                                                        if(_if_conditional195=self->len==1,                                                        _if_conditional195) {
                                                            litem_156=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value152=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                                            come_call_finalizer3(right_value152,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_156->prev=self->head;
                                                            litem_156->next=((void*)0);
                                                            __dec_obj43=litem_156->item;
                                                            litem_156->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            self->tail=litem_156;
                                                            self->head->next=litem_156;
                                                        }
                                                        else {
                                                            litem_157=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value153=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                                            come_call_finalizer3(right_value153,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_157->prev=self->tail;
                                                            litem_157->next=((void*)0);
                                                            __dec_obj44=litem_157->item;
                                                            litem_157->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            self->tail->next=litem_157;
                                                            self->tail=litem_157;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result129__ = __result_obj__ = self;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                    return __result129__;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_158;
_Bool _while_condtional29;
struct list_item$1charph* prev_it_159;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_158, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_159, 0, sizeof(struct list_item$1charph*));
                                            it_158=self->head;
                                            while(_while_condtional29=it_158!=((void*)0),                                            _while_condtional29) {
                                                prev_it_159=it_158;
                                                it_158=it_158->next;
                                                come_call_finalizer3(prev_it_159,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional197;
struct tuple1$1sTypeph* __result131__;
void* right_value156;
struct tuple1$1sTypeph* result_160;
_Bool _if_conditional198;
void* right_value157;
struct sType* __dec_obj46;
struct tuple1$1sTypeph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
memset(&result_160, 0, sizeof(struct tuple1$1sTypeph*));
right_value157 = (void*)0;
                                            if(_if_conditional197=self==(void*)0,                                            _if_conditional197) {
                                                __result131__ = __result_obj__ = (void*)0;
                                                return __result131__;
                                            }
                                            result_160=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value156=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                                            come_call_finalizer3(right_value156,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional198=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional198) {
                                                __dec_obj46=result_160->v1;
                                                result_160->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=sType_clone(self->v1))));
                                                come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(right_value157,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                            }
                                            __result132__ = __result_obj__ = result_160;
                                            come_call_finalizer3(result_160,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result132__;
                                            come_call_finalizer3(result_160,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_161;
_Bool _while_condtional30;
struct list_item$1tuple2$2charphsTypephph* prev_it_162;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_161, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_162, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    it_161=self->head;
                    while(_while_condtional30=it_161!=((void*)0),                    _while_condtional30) {
                        prev_it_162=it_161;
                        it_161=it_161->next;
                        come_call_finalizer3(prev_it_162,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional247;
void* right_value173;
struct list_item$1tuple2$2charphsNodephph* litem_167;
struct tuple2$2charphsNodeph* __dec_obj57;
_Bool _if_conditional248;
void* right_value174;
struct list_item$1tuple2$2charphsNodephph* litem_168;
struct tuple2$2charphsNodeph* __dec_obj58;
void* right_value175;
struct list_item$1tuple2$2charphsNodephph* litem_169;
struct tuple2$2charphsNodeph* __dec_obj59;
struct list$1tuple2$2charphsNodephph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
memset(&litem_167, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value174 = (void*)0;
memset(&litem_168, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value175 = (void*)0;
memset(&litem_169, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                    if(_if_conditional247=self->len==0,                    _if_conditional247) {
                        litem_167=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value173=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 217, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value173,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_167->prev=((void*)0);
                        litem_167->next=((void*)0);
                        __dec_obj57=litem_167->item;
                        litem_167->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj57,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_167;
                        self->head=litem_167;
                    }
                    else {
                        if(_if_conditional248=self->len==1,                        _if_conditional248) {
                            litem_168=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value174=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 227, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer3(right_value174,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_168->prev=self->head;
                            litem_168->next=((void*)0);
                            __dec_obj58=litem_168->item;
                            litem_168->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj58,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_168;
                            self->head->next=litem_168;
                        }
                        else {
                            litem_169=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value175=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 237, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer3(right_value175,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_169->prev=self->tail;
                            litem_169->next=((void*)0);
                            __dec_obj59=litem_169->item;
                            litem_169->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj59,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_169;
                            self->tail=litem_169;
                        }
                    }
                    self->len++;
                    __result137__ = __result_obj__ = self;
                    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result137__;
                    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj60;
struct sNode* __dec_obj61;
struct tuple2$2charphsNodeph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj60=self->v1;
                    self->v1=(char*)come_increment_ref_count(v1);
                    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj61=self->v2;
                    self->v2=(struct sNode*)come_increment_ref_count(v2);
                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
                    __result138__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result138__;
                    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__;
char* __dec_obj62;
struct tuple2$2charphvoidp* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj62=self->v1;
                    self->v1=(char*)come_increment_ref_count(v1);
                    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->v2=v2;
                    __result139__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result139__;
                    come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
void* __result_obj__;
_Bool _if_conditional250;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional250=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional250) {
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional264;
char* source_head_171;
_Bool output_172;
char* type_name_173;
_Bool _if_conditional265;
void* right_value188;
char* __dec_obj67;
_Bool _if_conditional266;
void* right_value189;
char* __dec_obj68;
void* right_value190;
void* right_value191;
int __exception_result_var_b2;
void* right_value192;
void* right_value193;
struct list$1tuple2$2charphsNodephph* elements_174;
_Bool _while_condtional32;
void* right_value194;
char* element_name_175;
_Bool _if_conditional267;
_Bool no_comma_176;
void* right_value195;
struct sNode* element_value_177;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
_Bool _if_conditional268;
_Bool _if_conditional269;
char* source_tail_178;
void* right_value200;
void* right_value201;
struct buffer* header_179;
void* right_value202;
void* right_value203;
void* right_value204;
struct sNode* _inf_value2;
struct sEnumNode* _inf_obj_value2;
void* right_value210;
struct sNode* __result145__;
void* right_value211;
struct sNode* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_171, 0, sizeof(char*));
memset(&output_172, 0, sizeof(_Bool));
memset(&type_name_173, 0, sizeof(char*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&elements_174, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value194 = (void*)0;
memset(&element_name_175, 0, sizeof(char*));
memset(&no_comma_176, 0, sizeof(_Bool));
right_value195 = (void*)0;
memset(&element_value_177, 0, sizeof(struct sNode*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
memset(&source_tail_178, 0, sizeof(char*));
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&header_179, 0, sizeof(struct buffer*));
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
    if(_if_conditional264=charp_operator_equals(buf,"enum"),    _if_conditional264) {
        source_head_171=info->p;
        output_172=(_Bool)1;
        type_name_173=((void*)0);
        if(_if_conditional265=*info->p==123,        _if_conditional265) {
            __dec_obj67=type_name_173;
            type_name_173=(char*)come_increment_ref_count(((char*)(right_value188=__builtin_string(""))));
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            if(_if_conditional266=map$2charphsClassph_at(info->classes,type_name_173,((void*)0))==((void*)0),            _if_conditional266) {
            }
            else {
                output_172=(_Bool)0;
            }
            __dec_obj68=type_name_173;
            type_name_173=(char*)come_increment_ref_count(((char*)(right_value189=parse_word(info))));
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_173),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value191=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value190=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 194, "sClass")))),type_name_173,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,info)))));
            come_call_finalizer3(right_value190,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value191,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        (come_push_stackframe("16enum.c", 197, 1),__exception_result_var_b2=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b2);
        elements_174=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value193=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value192=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 199, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer3(right_value192,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value193,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional32=(_Bool)1,        _while_condtional32) {
            parse_sharp_v5(info);
            element_name_175=(char*)come_increment_ref_count(((char*)(right_value194=parse_word(info))));
            right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(_if_conditional267=*info->p==61,            _if_conditional267) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_176=info->no_comma;
                info->no_comma=(_Bool)1;
                element_value_177=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value195=expression_v13(info))));
                if(right_value195) { right_value195 = come_decrement_ref_count2(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_176;
                list$1tuple2$2charphsNodephph_push_back(elements_174,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value197=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value196=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 216, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_175),(struct sNode*)come_increment_ref_count(element_value_177))))));
                come_call_finalizer3(right_value196,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value197,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                if(element_value_177) { element_value_177 = come_decrement_ref_count2(element_value_177, ((struct sNode*)element_value_177)->finalize, ((struct sNode*)element_value_177)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1tuple2$2charphsNodephph_push_back(elements_174,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value199=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value198=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "16enum.c", 219, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(element_name_175),((void*)0))))));
                right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value199,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            parse_sharp_v5(info);
            if(_if_conditional268=*info->p==44,            _if_conditional268) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            if(_if_conditional269=*info->p==125,            _if_conditional269) {
                info->p++;
                skip_spaces_and_lf(info);
                element_name_175 = come_decrement_ref_count2(element_name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            element_name_175 = come_decrement_ref_count2(element_name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        source_tail_178=info->p;
        header_179=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value201=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value200=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "16enum.c", 238, "buffer"))))))));
        come_call_finalizer3(right_value200,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value201,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_179,"enum ");
        buffer_append(header_179,source_head_171,source_tail_178-source_head_171);
        add_come_code_at_come_header(info,"%s;\n",((char*)(right_value202=buffer_to_string(header_179))));
        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 244, "struct sNode");
        _inf_obj_value2=come_increment_ref_count(((struct sEnumNode*)(right_value204=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value203=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 244, "sEnumNode")))),(char*)come_increment_ref_count(type_name_173),elements_174,output_172,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sEnumNode_finalize;
        _inf_value2->clone=(void*)sEnumNode_clone;
        _inf_value2->compile=(void*)sEnumNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sEnumNode_terminated;
        _inf_value2->kind=(void*)sEnumNode_kind;
        __result145__ = __result_obj__ = ((struct sNode*)(right_value210=_inf_value2));
        type_name_173 = come_decrement_ref_count2(type_name_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elements_174,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_179,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value203,sEnumNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value204,sEnumNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value210) { right_value210 = come_decrement_ref_count2(right_value210, ((struct sNode*)right_value210)->finalize, ((struct sNode*)right_value210)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result145__;
        type_name_173 = come_decrement_ref_count2(type_name_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elements_174,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_179,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result146__ = __result_obj__ = ((struct sNode*)(right_value211=top_level_v95(buf,head,head_sline,info)));
    if(right_value211) { right_value211 = come_decrement_ref_count2(right_value211, ((struct sNode*)right_value211)->finalize, ((struct sNode*)right_value211)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result146__;
}

static void sEnumNode_finalize(struct sEnumNode* self){
void* __result_obj__;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional270=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional270) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional271=self!=((void*)0)&&self->mTypeName!=((void*)0),            _if_conditional271) {
                self->mTypeName = come_decrement_ref_count2(self->mTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional272=self!=((void*)0)&&self->mElements!=((void*)0),            _if_conditional272) {
                come_call_finalizer3(self->mElements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional273=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional273) {
                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self){
void* __result_obj__;
_Bool _if_conditional274;
struct sEnumNode* __result143__;
void* right_value205;
struct sEnumNode* result_180;
_Bool _if_conditional275;
_Bool _if_conditional276;
void* right_value206;
char* __dec_obj69;
_Bool _if_conditional277;
void* right_value207;
char* __dec_obj70;
_Bool _if_conditional278;
void* right_value208;
struct list$1tuple2$2charphsNodephph* __dec_obj71;
_Bool _if_conditional279;
_Bool _if_conditional280;
void* right_value209;
char* __dec_obj72;
struct sEnumNode* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
memset(&result_180, 0, sizeof(struct sEnumNode*));
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
            if(_if_conditional274=self==(void*)0,            _if_conditional274) {
                __result143__ = __result_obj__ = (void*)0;
                return __result143__;
            }
            result_180=(struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value205=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "sEnumNode_clone", 3, "sEnumNode"))));
            come_call_finalizer3(right_value205,sEnumNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional275=self!=((void*)0),            _if_conditional275) {
                result_180->sline=self->sline;
            }
            if(_if_conditional276=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional276) {
                __dec_obj69=result_180->sname;
                result_180->sname=(char*)come_increment_ref_count(((char*)(right_value206=string_clone(self->sname))));
                __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional277=self!=((void*)0)&&self->mTypeName!=((void*)0),            _if_conditional277) {
                __dec_obj70=result_180->mTypeName;
                result_180->mTypeName=(char*)come_increment_ref_count(((char*)(right_value207=string_clone(self->mTypeName))));
                __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional278=self!=((void*)0)&&self->mElements!=((void*)0),            _if_conditional278) {
                __dec_obj71=result_180->mElements;
                result_180->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value208=list$1tuple2$2charphsNodephphp_clone(self->mElements))));
                come_call_finalizer3(__dec_obj71,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value208,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional279=self!=((void*)0),            _if_conditional279) {
                result_180->mOutput=self->mOutput;
            }
            if(_if_conditional280=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional280) {
                __dec_obj72=result_180->mDeclareSName;
                result_180->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value209=string_clone(self->mDeclareSName))));
                __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result144__ = __result_obj__ = result_180;
            come_call_finalizer3(result_180,sEnumNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result144__;
            come_call_finalizer3(result_180,sEnumNode_finalize, 0, 0, 0, 0, (void*)0);
}

