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
struct sPlusPlusNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    _Bool mQuote;
};
struct sMinusMinusNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    _Bool mQuote;
};
struct sPlusEqualNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sMinusEqualNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sMultEqualNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sDivEqualNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sModEqualNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sLShifEqualNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sRShiftEqualNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sXorEqualNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sOrEqualNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sAndEqualNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sExpEqualNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
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

struct sNode* parse_enum(char* type_name, struct sInfo* info);

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool compiletime_get_exception_value(struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

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

struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo* info);

_Bool sPlusPlusNode_terminated(struct sPlusPlusNode* self);

char* sPlusPlusNode_kind(struct sPlusPlusNode* self);

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info);

static struct sNode* sNode_clone(struct sNode* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo* info);

_Bool sMinusMinusNode_terminated(struct sMinusMinusNode* self);

char* sMinusMinusNode_kind(struct sMinusMinusNode* self);

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info);

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sPlusEqualNode_terminated(struct sPlusEqualNode* self);

char* sPlusEqualNode_kind(struct sPlusEqualNode* self);

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info);

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sMinusEqualNode_terminated(struct sMinusEqualNode* self);

char* sMinusEqualNode_kind(struct sMinusEqualNode* self);

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info);

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sMultEqualNode_terminated(struct sMultEqualNode* self);

char* sMultEqualNode_kind(struct sMultEqualNode* self);

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info);

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sDivEqualNode_terminated(struct sDivEqualNode* self);

char* sDivEqualNode_kind(struct sDivEqualNode* self);

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info);

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sModEqualNode_terminated(struct sModEqualNode* self);

char* sModEqualNode_kind(struct sModEqualNode* self);

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info);

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLShifEqualNode_terminated(struct sLShifEqualNode* self);

char* sLShifEqualNode_kind(struct sLShifEqualNode* self);

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info);

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sRShiftEqualNode_terminated(struct sRShiftEqualNode* self);

char* sRShiftEqualNode_kind(struct sRShiftEqualNode* self);

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info);

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sXorEqualNode_terminated(struct sXorEqualNode* self);

char* sXorEqualNode_kind(struct sXorEqualNode* self);

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info);

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sOrEqualNode_terminated(struct sOrEqualNode* self);

char* sOrEqualNode_kind(struct sOrEqualNode* self);

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info);

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAndEqualNode_terminated(struct sAndEqualNode* self);

char* sAndEqualNode_kind(struct sAndEqualNode* self);

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info);

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sExpEqualNode_terminated(struct sExpEqualNode* self);

char* sExpEqualNode_kind(struct sExpEqualNode* self);

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info);

struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);

static void sPlusPlusNode_finalize(struct sPlusPlusNode* self);
static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self);
static void sMinusMinusNode_finalize(struct sMinusMinusNode* self);
static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self);
static void sPlusEqualNode_finalize(struct sPlusEqualNode* self);
static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self);
static void sMinusEqualNode_finalize(struct sMinusEqualNode* self);
static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self);
static void sMultEqualNode_finalize(struct sMultEqualNode* self);
static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self);
static void sDivEqualNode_finalize(struct sDivEqualNode* self);
static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self);
static void sModEqualNode_finalize(struct sModEqualNode* self);
static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self);
static void sLShifEqualNode_finalize(struct sLShifEqualNode* self);
static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self);
static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self);
static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self);
static void sXorEqualNode_finalize(struct sXorEqualNode* self);
static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self);
static void sAndEqualNode_finalize(struct sAndEqualNode* self);
static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self);
static void sOrEqualNode_finalize(struct sOrEqualNode* self);
static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self);
static void sExpEqualNode_finalize(struct sExpEqualNode* self);
static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self);
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










struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
void* right_value81;
struct sNode* __dec_obj13;
struct sPlusPlusNode* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value81 = (void*)0;
    self->sline=info->sline;
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj13=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value81=sNode_clone(left))));
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count2(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value81) { right_value81 = come_decrement_ref_count2(right_value81, ((struct sNode*)right_value81)->finalize, ((struct sNode*)right_value81)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result60__ = __result_obj__ = self;
    come_call_finalizer3(self,sPlusPlusNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result60__;
    come_call_finalizer3(self,sPlusPlusNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sPlusPlusNode_terminated(struct sPlusPlusNode* self){
void* __result_obj__;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    __result61__ = (_Bool)0;
    return __result61__;
}

char* sPlusPlusNode_kind(struct sPlusPlusNode* self){
void* __result_obj__;
void* right_value82;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
    __result62__ = __result_obj__ = ((char*)(right_value82=__builtin_string("sPlusPlusNode")));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result62__;
}

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_48;
_Bool _if_conditional30;
_Bool __result63__;
void* right_value83;
struct CVALUE* left_value_49;
struct sType* type_56;
char* fun_name_57;
_Bool calling_fun_58;
_Bool _if_conditional50;
_Bool _if_conditional51;
void* right_value84;
struct CVALUE* come_value_59;
void* right_value85;
char* __dec_obj14;
void* right_value120;
struct sType* __dec_obj38;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_48, 0, sizeof(struct sNode*));
right_value83 = (void*)0;
memset(&left_value_49, 0, sizeof(struct CVALUE*));
memset(&type_56, 0, sizeof(struct sType*));
memset(&fun_name_57, 0, sizeof(char*));
memset(&calling_fun_58, 0, sizeof(_Bool));
right_value84 = (void*)0;
memset(&come_value_59, 0, sizeof(struct CVALUE*));
right_value85 = (void*)0;
right_value120 = (void*)0;
    left_48=self->mLeft;
    if(_if_conditional30=!node_compile(left_48,info),    _if_conditional30) {
        __result63__ = (_Bool)0;
        return __result63__;
    }
    left_value_49=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value83=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value83,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_56=(struct sType*)come_increment_ref_count(left_value_49->type);
    fun_name_57="operator_plus_plus";
    if(self->mQuote) {
        calling_fun_58=(_Bool)0;
    }
    else {
        calling_fun_58=operator_overload_fun_self(type_56,fun_name_57,left_value_49,info);
    }
    if(_if_conditional51=!calling_fun_58,    _if_conditional51) {
        come_value_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value84=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 52, "CVALUE"))));
        come_call_finalizer3(right_value84,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj14=come_value_59->c_value;
        come_value_59->c_value=(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("%s++",left_value_49->c_value))));
        __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj38=come_value_59->type;
        come_value_59->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=sType_clone(left_value_49->type))));
        come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value120,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_59->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_59));
        add_come_last_code(info,"%s;\n",come_value_59->c_value);
        come_call_finalizer3(come_value_59,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result81__ = (_Bool)1;
    come_call_finalizer3(left_value_49,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_56,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result81__;
    come_call_finalizer3(left_value_49,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_56,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional19;
struct sNode* __result58__;
void* right_value80;
struct sNode* result_47;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
struct sNode* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
memset(&result_47, 0, sizeof(struct sNode*));
        if(_if_conditional19=self==(void*)0,        _if_conditional19) {
            __result58__ = __result_obj__ = (void*)0;
            return __result58__;
        }
        result_47=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value80=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
        if(right_value80) { right_value80 = come_decrement_ref_count2(right_value80, ((struct sNode*)right_value80)->finalize, ((struct sNode*)right_value80)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional20=self!=((void*)0)&&self->clone!=((void*)0),        _if_conditional20) {
            result_47->_protocol_obj=self->clone(self->_protocol_obj);
        }
        if(_if_conditional21=self!=((void*)0),        _if_conditional21) {
            result_47->finalize=self->finalize;
        }
        if(_if_conditional22=self!=((void*)0),        _if_conditional22) {
            result_47->clone=self->clone;
        }
        if(_if_conditional23=self!=((void*)0),        _if_conditional23) {
            result_47->compile=self->compile;
        }
        if(_if_conditional24=self!=((void*)0),        _if_conditional24) {
            result_47->sline=self->sline;
        }
        if(_if_conditional25=self!=((void*)0),        _if_conditional25) {
            result_47->sname=self->sname;
        }
        if(_if_conditional26=self!=((void*)0),        _if_conditional26) {
            result_47->terminated=self->terminated;
        }
        if(_if_conditional27=self!=((void*)0),        _if_conditional27) {
            result_47->kind=self->kind;
        }
        __result59__ = __result_obj__ = result_47;
        if(result_47) { result_47 = come_decrement_ref_count2(result_47, ((struct sNode*)result_47)->finalize, ((struct sNode*)result_47)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result59__;
        if(result_47) { result_47 = come_decrement_ref_count2(result_47, ((struct sNode*)result_47)->finalize, ((struct sNode*)result_47)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional31;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional31=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional31) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional32=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional32) {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional33;
_Bool _if_conditional35;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional33=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional33) {
                    come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional35=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional35) {
                    come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional37=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional37) {
                    come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional38=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional38) {
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional39=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional39) {
                    come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional40=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional40) {
                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional42=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional42) {
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional43=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional43) {
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional45=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional45) {
                    come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional46=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional46) {
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional47=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional47) {
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional48=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional48) {
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional49=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional49) {
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
                        while(_while_condtional7=it_50!=((void*)0),                        _while_condtional7) {
                            prev_it_51=it_50;
                            it_50=it_50->next;
                            come_call_finalizer3(prev_it_51,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional34=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional34) {
                                    come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional36=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional36) {
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
                        while(_while_condtional8=it_52!=((void*)0),                        _while_condtional8) {
                            prev_it_53=it_52;
                            it_52=it_52->next;
                            come_call_finalizer3(prev_it_53,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional41=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional41) {
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
                        while(_while_condtional9=it_54!=((void*)0),                        _while_condtional9) {
                            prev_it_55=it_54;
                            it_54=it_54->next;
                            come_call_finalizer3(prev_it_55,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional44=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional44) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional52;
struct sType* __result64__;
void* right_value86;
struct sType* result_60;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value93;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional58;
void* right_value96;
struct tuple1$1sTypeph* __dec_obj20;
_Bool _if_conditional62;
void* right_value97;
struct tuple1$1sTypeph* __dec_obj21;
_Bool _if_conditional63;
void* right_value98;
char* __dec_obj22;
_Bool _if_conditional64;
void* right_value99;
struct list$1sTypeph* __dec_obj23;
_Bool _if_conditional65;
void* right_value106;
struct list$1sNodeph* __dec_obj27;
_Bool _if_conditional69;
_Bool _if_conditional70;
void* right_value107;
struct list$1sTypeph* __dec_obj28;
_Bool _if_conditional71;
void* right_value114;
struct list$1charph* __dec_obj32;
_Bool _if_conditional75;
void* right_value115;
struct tuple1$1sTypeph* __dec_obj33;
_Bool _if_conditional76;
_Bool _if_conditional77;
void* right_value116;
struct sNode* __dec_obj34;
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
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
void* right_value117;
struct sNode* __dec_obj35;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
void* right_value118;
char* __dec_obj36;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
void* right_value119;
char* __dec_obj37;
_Bool _if_conditional116;
struct sType* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&result_60, 0, sizeof(struct sType*));
right_value93 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
            if(_if_conditional52=self==(void*)0,            _if_conditional52) {
                __result64__ = __result_obj__ = (void*)0;
                return __result64__;
            }
            result_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value86,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional53=self!=((void*)0),            _if_conditional53) {
                result_60->mClass=self->mClass;
            }
            if(_if_conditional54=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional54) {
                __dec_obj18=result_60->mMultipleTypes;
                result_60->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value93=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer3(__dec_obj18,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value93,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional58=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional58) {
                __dec_obj20=result_60->mNoSolvedGenericsType;
                result_60->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value96=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj20,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value96,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional62=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional62) {
                __dec_obj21=result_60->mOriginalLoadVarType;
                result_60->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value97=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj21,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value97,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional63=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional63) {
                __dec_obj22=result_60->mGenericsName;
                result_60->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value98=string_clone(self->mGenericsName))));
                __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional64=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional64) {
                __dec_obj23=result_60->mGenericsTypes;
                result_60->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value99=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer3(__dec_obj23,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value99,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional65=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional65) {
                __dec_obj27=result_60->mArrayNum;
                result_60->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value106=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj27,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value106,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional69=self!=((void*)0),            _if_conditional69) {
                result_60->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional70=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional70) {
                __dec_obj28=result_60->mParamTypes;
                result_60->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value107=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer3(__dec_obj28,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value107,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional71=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional71) {
                __dec_obj32=result_60->mParamNames;
                result_60->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value114=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj32,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value114,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional75=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional75) {
                __dec_obj33=result_60->mResultType;
                result_60->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value115=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj33,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value115,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                result_60->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional77=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional77) {
                __dec_obj34=result_60->mAlignas;
                result_60->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=sNode_clone(self->mAlignas))));
                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value116) { right_value116 = come_decrement_ref_count2(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                result_60->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                result_60->mShort=self->mShort;
            }
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                result_60->mLong=self->mLong;
            }
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                result_60->mLongLong=self->mLongLong;
            }
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                result_60->mConstant=self->mConstant;
            }
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                result_60->mRegister=self->mRegister;
            }
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                result_60->mVolatile=self->mVolatile;
            }
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                result_60->mStatic=self->mStatic;
            }
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                result_60->mRecord=self->mRecord;
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                result_60->mExtern=self->mExtern;
            }
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                result_60->mRestrict=self->mRestrict;
            }
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                result_60->mImmutable=self->mImmutable;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                result_60->mHeap=self->mHeap;
            }
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                result_60->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                result_60->mDelegate=self->mDelegate;
            }
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                result_60->mShare=self->mShare;
            }
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                result_60->mClone=self->mClone;
            }
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                result_60->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                result_60->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                result_60->mRefference=self->mRefference;
            }
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                result_60->mException=self->mException;
            }
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                result_60->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                result_60->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                result_60->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional102=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional102) {
                __dec_obj35=result_60->mSizeNum;
                result_60->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=sNode_clone(self->mSizeNum))));
                if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                result_60->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                result_60->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional105=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional105) {
                __dec_obj36=result_60->mOriginalTypeName;
                result_60->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value118=string_clone(self->mOriginalTypeName))));
                __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                result_60->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                result_60->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                result_60->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                result_60->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                result_60->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                result_60->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional112=self!=((void*)0),            _if_conditional112) {
                result_60->mInline=self->mInline;
            }
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                result_60->mNullValue=self->mNullValue;
            }
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                result_60->mGuardValue=self->mGuardValue;
            }
            if(_if_conditional115=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional115) {
                __dec_obj37=result_60->mAsmName;
                result_60->mAsmName=(char*)come_increment_ref_count(((char*)(right_value119=string_clone(self->mAsmName))));
                __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional116=self!=((void*)0),            _if_conditional116) {
                result_60->mArrayPointerType=self->mArrayPointerType;
            }
            __result79__ = __result_obj__ = result_60;
            come_call_finalizer3(result_60,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result79__;
            come_call_finalizer3(result_60,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional55;
struct list$1sTypeph* __result65__;
void* right_value87;
void* right_value88;
struct list$1sTypeph* result_61;
struct list_item$1sTypeph* it_62;
_Bool _while_condtional10;
void* right_value92;
struct list$1sTypeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
right_value88 = (void*)0;
memset(&result_61, 0, sizeof(struct list$1sTypeph*));
memset(&it_62, 0, sizeof(struct list_item$1sTypeph*));
right_value92 = (void*)0;
                    if(_if_conditional55=self==((void*)0),                    _if_conditional55) {
                        __result65__ = __result_obj__ = ((void*)0);
                        return __result65__;
                    }
                    result_61=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value88=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value87=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                    come_call_finalizer3(right_value87,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value88,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_62=self->head;
                    while(_while_condtional10=it_62!=((void*)0),                    _while_condtional10) {
                        list$1sTypeph_add(result_61,(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_clone(it_62->item)))));
                        come_call_finalizer3(right_value92,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        it_62=it_62->next;
                    }
                    __result68__ = __result_obj__ = result_61;
                    come_call_finalizer3(result_61,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result68__;
                    come_call_finalizer3(result_61,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result66__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result66__;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional56;
void* right_value89;
struct list_item$1sTypeph* litem_63;
struct sType* __dec_obj15;
_Bool _if_conditional57;
void* right_value90;
struct list_item$1sTypeph* litem_64;
struct sType* __dec_obj16;
void* right_value91;
struct list_item$1sTypeph* litem_65;
struct sType* __dec_obj17;
struct list$1sTypeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1sTypeph*));
right_value90 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sTypeph*));
right_value91 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional56=self->len==0,                            _if_conditional56) {
                                litem_63=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value89=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value89,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_63->prev=((void*)0);
                                litem_63->next=((void*)0);
                                __dec_obj15=litem_63->item;
                                litem_63->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_63;
                                self->head=litem_63;
                            }
                            else {
                                if(_if_conditional57=self->len==1,                                _if_conditional57) {
                                    litem_64=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value90=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value90,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_64->prev=self->head;
                                    litem_64->next=((void*)0);
                                    __dec_obj16=litem_64->item;
                                    litem_64->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_64;
                                    self->head->next=litem_64;
                                }
                                else {
                                    litem_65=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value91=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value91,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_65->prev=self->tail;
                                    litem_65->next=((void*)0);
                                    __dec_obj17=litem_65->item;
                                    litem_65->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_65;
                                    self->tail=litem_65;
                                }
                            }
                            self->len++;
                            __result67__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result67__;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_66;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_67;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_66, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_67, 0, sizeof(struct list_item$1sTypeph*));
                    it_66=self->head;
                    while(_while_condtional11=it_66!=((void*)0),                    _while_condtional11) {
                        prev_it_67=it_66;
                        it_66=it_66->next;
                        come_call_finalizer3(prev_it_67,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional59;
struct tuple1$1sTypeph* __result69__;
void* right_value94;
struct tuple1$1sTypeph* result_68;
_Bool _if_conditional61;
void* right_value95;
struct sType* __dec_obj19;
struct tuple1$1sTypeph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
memset(&result_68, 0, sizeof(struct tuple1$1sTypeph*));
right_value95 = (void*)0;
                    if(_if_conditional59=self==(void*)0,                    _if_conditional59) {
                        __result69__ = __result_obj__ = (void*)0;
                        return __result69__;
                    }
                    result_68=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value94=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value94,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional61=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional61) {
                        __dec_obj19=result_68->v1;
                        result_68->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value95,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    __result70__ = __result_obj__ = result_68;
                    come_call_finalizer3(result_68,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result70__;
                    come_call_finalizer3(result_68,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional60;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional60=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional60) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional66;
struct list$1sNodeph* __result71__;
void* right_value100;
void* right_value101;
struct list$1sNodeph* result_69;
struct list_item$1sNodeph* it_70;
_Bool _while_condtional12;
void* right_value105;
struct list$1sNodeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
right_value101 = (void*)0;
memset(&result_69, 0, sizeof(struct list$1sNodeph*));
memset(&it_70, 0, sizeof(struct list_item$1sNodeph*));
right_value105 = (void*)0;
                    if(_if_conditional66=self==((void*)0),                    _if_conditional66) {
                        __result71__ = __result_obj__ = ((void*)0);
                        return __result71__;
                    }
                    result_69=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value101=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value100=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                    come_call_finalizer3(right_value100,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value101,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_70=self->head;
                    while(_while_condtional12=it_70!=((void*)0),                    _while_condtional12) {
                        list$1sNodeph_add(result_69,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value105=sNode_clone(it_70->item)))));
                        if(right_value105) { right_value105 = come_decrement_ref_count2(right_value105, ((struct sNode*)right_value105)->finalize, ((struct sNode*)right_value105)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_70=it_70->next;
                    }
                    __result74__ = __result_obj__ = result_69;
                    come_call_finalizer3(result_69,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result74__;
                    come_call_finalizer3(result_69,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result72__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional67;
void* right_value102;
struct list_item$1sNodeph* litem_71;
struct sNode* __dec_obj24;
_Bool _if_conditional68;
void* right_value103;
struct list_item$1sNodeph* litem_72;
struct sNode* __dec_obj25;
void* right_value104;
struct list_item$1sNodeph* litem_73;
struct sNode* __dec_obj26;
struct list$1sNodeph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
memset(&litem_71, 0, sizeof(struct list_item$1sNodeph*));
right_value103 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1sNodeph*));
right_value104 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional67=self->len==0,                            _if_conditional67) {
                                litem_71=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value102=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value102,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_71->prev=((void*)0);
                                litem_71->next=((void*)0);
                                __dec_obj24=litem_71->item;
                                litem_71->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_71;
                                self->head=litem_71;
                            }
                            else {
                                if(_if_conditional68=self->len==1,                                _if_conditional68) {
                                    litem_72=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value103=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value103,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_72->prev=self->head;
                                    litem_72->next=((void*)0);
                                    __dec_obj25=litem_72->item;
                                    litem_72->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_72;
                                    self->head->next=litem_72;
                                }
                                else {
                                    litem_73=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value104=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value104,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_73->prev=self->tail;
                                    litem_73->next=((void*)0);
                                    __dec_obj26=litem_73->item;
                                    litem_73->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_73;
                                    self->tail=litem_73;
                                }
                            }
                            self->len++;
                            __result73__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result73__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_74;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_75;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_74, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_75, 0, sizeof(struct list_item$1sNodeph*));
                    it_74=self->head;
                    while(_while_condtional13=it_74!=((void*)0),                    _while_condtional13) {
                        prev_it_75=it_74;
                        it_74=it_74->next;
                        come_call_finalizer3(prev_it_75,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional72;
struct list$1charph* __result75__;
void* right_value108;
void* right_value109;
struct list$1charph* result_76;
struct list_item$1charph* it_77;
_Bool _while_condtional14;
void* right_value113;
struct list$1charph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
right_value109 = (void*)0;
memset(&result_76, 0, sizeof(struct list$1charph*));
memset(&it_77, 0, sizeof(struct list_item$1charph*));
right_value113 = (void*)0;
                    if(_if_conditional72=self==((void*)0),                    _if_conditional72) {
                        __result75__ = __result_obj__ = ((void*)0);
                        return __result75__;
                    }
                    result_76=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value108=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                    come_call_finalizer3(right_value108,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value109,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_77=self->head;
                    while(_while_condtional14=it_77!=((void*)0),                    _while_condtional14) {
                        list$1charph_add(result_76,(char*)come_increment_ref_count(((char*)(right_value113=string_clone(it_77->item)))));
                        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_77=it_77->next;
                    }
                    __result78__ = __result_obj__ = result_76;
                    come_call_finalizer3(result_76,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result78__;
                    come_call_finalizer3(result_76,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result76__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result76__;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional73;
void* right_value110;
struct list_item$1charph* litem_78;
char* __dec_obj29;
_Bool _if_conditional74;
void* right_value111;
struct list_item$1charph* litem_79;
char* __dec_obj30;
void* right_value112;
struct list_item$1charph* litem_80;
char* __dec_obj31;
struct list$1charph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
memset(&litem_78, 0, sizeof(struct list_item$1charph*));
right_value111 = (void*)0;
memset(&litem_79, 0, sizeof(struct list_item$1charph*));
right_value112 = (void*)0;
memset(&litem_80, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional73=self->len==0,                            _if_conditional73) {
                                litem_78=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value110=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                                come_call_finalizer3(right_value110,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_78->prev=((void*)0);
                                litem_78->next=((void*)0);
                                __dec_obj29=litem_78->item;
                                litem_78->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_78;
                                self->head=litem_78;
                            }
                            else {
                                if(_if_conditional74=self->len==1,                                _if_conditional74) {
                                    litem_79=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value111=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                    come_call_finalizer3(right_value111,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_79->prev=self->head;
                                    litem_79->next=((void*)0);
                                    __dec_obj30=litem_79->item;
                                    litem_79->item=(char*)come_increment_ref_count(item);
                                    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_79;
                                    self->head->next=litem_79;
                                }
                                else {
                                    litem_80=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value112=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                    come_call_finalizer3(right_value112,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_80->prev=self->tail;
                                    litem_80->next=((void*)0);
                                    __dec_obj31=litem_80->item;
                                    litem_80->item=(char*)come_increment_ref_count(item);
                                    __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_80;
                                    self->tail=litem_80;
                                }
                            }
                            self->len++;
                            __result77__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result77__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_81;
_Bool _while_condtional15;
struct list_item$1charph* prev_it_82;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_81, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_82, 0, sizeof(struct list_item$1charph*));
                    it_81=self->head;
                    while(_while_condtional15=it_81!=((void*)0),                    _while_condtional15) {
                        prev_it_82=it_81;
                        it_81=it_81->next;
                        come_call_finalizer3(prev_it_82,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional117;
void* right_value121;
struct list_item$1CVALUEph* litem_83;
struct CVALUE* __dec_obj39;
_Bool _if_conditional119;
void* right_value122;
struct list_item$1CVALUEph* litem_84;
struct CVALUE* __dec_obj40;
void* right_value123;
struct list_item$1CVALUEph* litem_85;
struct CVALUE* __dec_obj41;
struct list$1CVALUEph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1CVALUEph*));
right_value122 = (void*)0;
memset(&litem_84, 0, sizeof(struct list_item$1CVALUEph*));
right_value123 = (void*)0;
memset(&litem_85, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional117=self->len==0,            _if_conditional117) {
                litem_83=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value121=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value121,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_83->prev=((void*)0);
                litem_83->next=((void*)0);
                __dec_obj39=litem_83->item;
                litem_83->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj39,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_83;
                self->head=litem_83;
            }
            else {
                if(_if_conditional119=self->len==1,                _if_conditional119) {
                    litem_84=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value122=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value122,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_84->prev=self->head;
                    litem_84->next=((void*)0);
                    __dec_obj40=litem_84->item;
                    litem_84->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj40,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_84;
                    self->head->next=litem_84;
                }
                else {
                    litem_85=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value123=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value123,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_85->prev=self->tail;
                    litem_85->next=((void*)0);
                    __dec_obj41=litem_85->item;
                    litem_85->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj41,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_85;
                    self->tail=litem_85;
                }
            }
            self->len++;
            __result80__ = __result_obj__ = self;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result80__;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional118;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional118=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional118) {
                        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value124;
char* __dec_obj42;
void* right_value125;
struct sNode* __dec_obj43;
struct sMinusMinusNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
right_value125 = (void*)0;
    self->sline=info->sline;
    __dec_obj42=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(info->sname))));
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj43=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value125=sNode_clone(left))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value125) { right_value125 = come_decrement_ref_count2(right_value125, ((struct sNode*)right_value125)->finalize, ((struct sNode*)right_value125)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result82__ = __result_obj__ = self;
    come_call_finalizer3(self,sMinusMinusNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result82__;
    come_call_finalizer3(self,sMinusMinusNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusMinusNode_terminated(struct sMinusMinusNode* self){
void* __result_obj__;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    __result83__ = (_Bool)0;
    return __result83__;
}

char* sMinusMinusNode_kind(struct sMinusMinusNode* self){
void* __result_obj__;
void* right_value126;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
    __result84__ = __result_obj__ = ((char*)(right_value126=__builtin_string("sMinusMinusNode")));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result84__;
}

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_86;
_Bool _if_conditional122;
_Bool __result85__;
void* right_value127;
struct CVALUE* left_value_87;
struct sType* type_88;
char* fun_name_89;
_Bool calling_fun_90;
_Bool _if_conditional123;
_Bool _if_conditional124;
void* right_value128;
struct CVALUE* come_value_91;
void* right_value129;
char* __dec_obj44;
void* right_value130;
struct sType* __dec_obj45;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_86, 0, sizeof(struct sNode*));
right_value127 = (void*)0;
memset(&left_value_87, 0, sizeof(struct CVALUE*));
memset(&type_88, 0, sizeof(struct sType*));
memset(&fun_name_89, 0, sizeof(char*));
memset(&calling_fun_90, 0, sizeof(_Bool));
right_value128 = (void*)0;
memset(&come_value_91, 0, sizeof(struct CVALUE*));
right_value129 = (void*)0;
right_value130 = (void*)0;
    left_86=self->mLeft;
    if(_if_conditional122=!node_compile(left_86,info),    _if_conditional122) {
        __result85__ = (_Bool)0;
        return __result85__;
    }
    left_value_87=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value127,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_88=(struct sType*)come_increment_ref_count(left_value_87->type);
    fun_name_89="operator_minus_minus";
    if(self->mQuote) {
        calling_fun_90=(_Bool)0;
    }
    else {
        calling_fun_90=operator_overload_fun_self(type_88,fun_name_89,left_value_87,info);
    }
    if(_if_conditional124=!calling_fun_90,    _if_conditional124) {
        come_value_91=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 115, "CVALUE"))));
        come_call_finalizer3(right_value128,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj44=come_value_91->c_value;
        come_value_91->c_value=(char*)come_increment_ref_count(((char*)(right_value129=xsprintf("%s--",left_value_87->c_value))));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj45=come_value_91->type;
        come_value_91->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_clone(left_value_87->type))));
        come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value130,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_91->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_91));
        add_come_last_code(info,"%s;\n",come_value_91->c_value);
        come_call_finalizer3(come_value_91,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result86__ = (_Bool)1;
    come_call_finalizer3(left_value_87,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_88,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result86__;
    come_call_finalizer3(left_value_87,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_88,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value131;
char* __dec_obj46;
void* right_value132;
struct sNode* __dec_obj47;
void* right_value133;
struct sNode* __dec_obj48;
struct sPlusEqualNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
    self->sline=info->sline;
    __dec_obj46=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value131=__builtin_string(info->sname))));
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj47=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value132=sNode_clone(left))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value132) { right_value132 = come_decrement_ref_count2(right_value132, ((struct sNode*)right_value132)->finalize, ((struct sNode*)right_value132)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj48=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value133=sNode_clone(right))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value133) { right_value133 = come_decrement_ref_count2(right_value133, ((struct sNode*)right_value133)->finalize, ((struct sNode*)right_value133)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result87__ = __result_obj__ = self;
    come_call_finalizer3(self,sPlusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result87__;
    come_call_finalizer3(self,sPlusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sPlusEqualNode_terminated(struct sPlusEqualNode* self){
void* __result_obj__;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    __result88__ = (_Bool)0;
    return __result88__;
}

char* sPlusEqualNode_kind(struct sPlusEqualNode* self){
void* __result_obj__;
void* right_value134;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
    __result89__ = __result_obj__ = ((char*)(right_value134=__builtin_string("sPlusEqualNode")));
    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result89__;
}

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_92;
_Bool _if_conditional128;
_Bool __result90__;
void* right_value135;
struct CVALUE* left_value_93;
struct sNode* right_94;
_Bool _if_conditional129;
_Bool __result91__;
void* right_value136;
struct CVALUE* right_value_95;
struct sType* type_96;
char* fun_name_97;
_Bool calling_fun_98;
_Bool _if_conditional130;
_Bool _if_conditional131;
void* right_value137;
struct CVALUE* come_value_99;
void* right_value138;
char* __dec_obj49;
void* right_value139;
struct sType* __dec_obj50;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_92, 0, sizeof(struct sNode*));
right_value135 = (void*)0;
memset(&left_value_93, 0, sizeof(struct CVALUE*));
memset(&right_94, 0, sizeof(struct sNode*));
right_value136 = (void*)0;
memset(&right_value_95, 0, sizeof(struct CVALUE*));
memset(&type_96, 0, sizeof(struct sType*));
memset(&fun_name_97, 0, sizeof(char*));
memset(&calling_fun_98, 0, sizeof(_Bool));
right_value137 = (void*)0;
memset(&come_value_99, 0, sizeof(struct CVALUE*));
right_value138 = (void*)0;
right_value139 = (void*)0;
    left_92=self->mLeft;
    if(_if_conditional128=!node_compile(left_92,info),    _if_conditional128) {
        __result90__ = (_Bool)0;
        return __result90__;
    }
    left_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value135=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value135,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_94=self->mRight;
    if(_if_conditional129=!node_compile(right_94,info),    _if_conditional129) {
        __result91__ = (_Bool)0;
        come_call_finalizer3(left_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result91__;
    }
    right_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value136=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value136,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_96=(struct sType*)come_increment_ref_count(left_value_93->type);
    fun_name_97="operator_plus_equal";
    if(self->mQuote) {
        calling_fun_98=(_Bool)0;
    }
    else {
        calling_fun_98=operator_overload_fun(type_96,fun_name_97,left_value_93,right_value_95,(_Bool)0,info);
    }
    if(_if_conditional131=!calling_fun_98,    _if_conditional131) {
        come_value_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 188, "CVALUE"))));
        come_call_finalizer3(right_value137,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj49=come_value_99->c_value;
        come_value_99->c_value=(char*)come_increment_ref_count(((char*)(right_value138=xsprintf("%s+=%s",left_value_93->c_value,right_value_95->c_value))));
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj50=come_value_99->type;
        come_value_99->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_clone(left_value_93->type))));
        come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value139,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_99->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_99));
        add_come_last_code(info,"%s;\n",come_value_99->c_value);
        come_call_finalizer3(come_value_99,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result92__ = (_Bool)1;
    come_call_finalizer3(left_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_95,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_96,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result92__;
    come_call_finalizer3(left_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_95,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_96,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value140;
char* __dec_obj51;
void* right_value141;
struct sNode* __dec_obj52;
void* right_value142;
struct sNode* __dec_obj53;
struct sMinusEqualNode* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
    self->sline=info->sline;
    __dec_obj51=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value140=__builtin_string(info->sname))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj52=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value141=sNode_clone(left))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value141) { right_value141 = come_decrement_ref_count2(right_value141, ((struct sNode*)right_value141)->finalize, ((struct sNode*)right_value141)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj53=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value142=sNode_clone(right))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value142) { right_value142 = come_decrement_ref_count2(right_value142, ((struct sNode*)right_value142)->finalize, ((struct sNode*)right_value142)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result93__ = __result_obj__ = self;
    come_call_finalizer3(self,sMinusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result93__;
    come_call_finalizer3(self,sMinusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusEqualNode_terminated(struct sMinusEqualNode* self){
void* __result_obj__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    __result94__ = (_Bool)0;
    return __result94__;
}

char* sMinusEqualNode_kind(struct sMinusEqualNode* self){
void* __result_obj__;
void* right_value143;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
    __result95__ = __result_obj__ = ((char*)(right_value143=__builtin_string("sPlusEqualNode")));
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
}

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_100;
_Bool _if_conditional135;
_Bool __result96__;
void* right_value144;
struct CVALUE* left_value_101;
struct sNode* right_102;
_Bool _if_conditional136;
_Bool __result97__;
void* right_value145;
struct CVALUE* right_value_103;
struct sType* type_104;
char* fun_name_105;
_Bool calling_fun_106;
_Bool _if_conditional137;
_Bool _if_conditional138;
void* right_value146;
struct CVALUE* come_value_107;
void* right_value147;
char* __dec_obj54;
void* right_value148;
struct sType* __dec_obj55;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_100, 0, sizeof(struct sNode*));
right_value144 = (void*)0;
memset(&left_value_101, 0, sizeof(struct CVALUE*));
memset(&right_102, 0, sizeof(struct sNode*));
right_value145 = (void*)0;
memset(&right_value_103, 0, sizeof(struct CVALUE*));
memset(&type_104, 0, sizeof(struct sType*));
memset(&fun_name_105, 0, sizeof(char*));
memset(&calling_fun_106, 0, sizeof(_Bool));
right_value146 = (void*)0;
memset(&come_value_107, 0, sizeof(struct CVALUE*));
right_value147 = (void*)0;
right_value148 = (void*)0;
    left_100=self->mLeft;
    if(_if_conditional135=!node_compile(left_100,info),    _if_conditional135) {
        __result96__ = (_Bool)0;
        return __result96__;
    }
    left_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value144=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value144,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_102=self->mRight;
    if(_if_conditional136=!node_compile(right_102,info),    _if_conditional136) {
        __result97__ = (_Bool)0;
        come_call_finalizer3(left_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result97__;
    }
    right_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value145=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value145,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_104=(struct sType*)come_increment_ref_count(left_value_101->type);
    fun_name_105="operator_minus_equal";
    if(self->mQuote) {
        calling_fun_106=(_Bool)0;
    }
    else {
        calling_fun_106=operator_overload_fun(type_104,fun_name_105,left_value_101,right_value_103,(_Bool)0,info);
    }
    if(_if_conditional138=!calling_fun_106,    _if_conditional138) {
        come_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value146=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 261, "CVALUE"))));
        come_call_finalizer3(right_value146,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj54=come_value_107->c_value;
        come_value_107->c_value=(char*)come_increment_ref_count(((char*)(right_value147=xsprintf("%s-=%s",left_value_101->c_value,right_value_103->c_value))));
        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj55=come_value_107->type;
        come_value_107->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(left_value_101->type))));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value148,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_107->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_107));
        add_come_last_code(info,"%s;\n",come_value_107->c_value);
        come_call_finalizer3(come_value_107,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result98__ = (_Bool)1;
    come_call_finalizer3(left_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_103,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_104,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result98__;
    come_call_finalizer3(left_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_103,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_104,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value149;
char* __dec_obj56;
void* right_value150;
struct sNode* __dec_obj57;
void* right_value151;
struct sNode* __dec_obj58;
struct sMultEqualNode* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
    self->sline=info->sline;
    __dec_obj56=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value149=__builtin_string(info->sname))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj57=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value150=sNode_clone(left))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value150) { right_value150 = come_decrement_ref_count2(right_value150, ((struct sNode*)right_value150)->finalize, ((struct sNode*)right_value150)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj58=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value151=sNode_clone(right))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value151) { right_value151 = come_decrement_ref_count2(right_value151, ((struct sNode*)right_value151)->finalize, ((struct sNode*)right_value151)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result99__ = __result_obj__ = self;
    come_call_finalizer3(self,sMultEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result99__;
    come_call_finalizer3(self,sMultEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMultEqualNode_terminated(struct sMultEqualNode* self){
void* __result_obj__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
    __result100__ = (_Bool)0;
    return __result100__;
}

char* sMultEqualNode_kind(struct sMultEqualNode* self){
void* __result_obj__;
void* right_value152;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
    __result101__ = __result_obj__ = ((char*)(right_value152=__builtin_string("sMultEqualNode")));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result101__;
}

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_108;
_Bool _if_conditional142;
_Bool __result102__;
void* right_value153;
struct CVALUE* left_value_109;
struct sNode* right_110;
_Bool _if_conditional143;
_Bool __result103__;
void* right_value154;
struct CVALUE* right_value_111;
struct sType* type_112;
char* fun_name_113;
_Bool calling_fun_114;
_Bool _if_conditional144;
_Bool _if_conditional145;
void* right_value155;
struct CVALUE* come_value_115;
void* right_value156;
char* __dec_obj59;
void* right_value157;
struct sType* __dec_obj60;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_108, 0, sizeof(struct sNode*));
right_value153 = (void*)0;
memset(&left_value_109, 0, sizeof(struct CVALUE*));
memset(&right_110, 0, sizeof(struct sNode*));
right_value154 = (void*)0;
memset(&right_value_111, 0, sizeof(struct CVALUE*));
memset(&type_112, 0, sizeof(struct sType*));
memset(&fun_name_113, 0, sizeof(char*));
memset(&calling_fun_114, 0, sizeof(_Bool));
right_value155 = (void*)0;
memset(&come_value_115, 0, sizeof(struct CVALUE*));
right_value156 = (void*)0;
right_value157 = (void*)0;
    left_108=self->mLeft;
    if(_if_conditional142=!node_compile(left_108,info),    _if_conditional142) {
        __result102__ = (_Bool)0;
        return __result102__;
    }
    left_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value153=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value153,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_110=self->mRight;
    if(_if_conditional143=!node_compile(right_110,info),    _if_conditional143) {
        __result103__ = (_Bool)0;
        come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result103__;
    }
    right_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value154=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value154,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_112=(struct sType*)come_increment_ref_count(left_value_109->type);
    fun_name_113="operator_mult_equal";
    if(self->mQuote) {
        calling_fun_114=(_Bool)0;
    }
    else {
        calling_fun_114=operator_overload_fun(type_112,fun_name_113,left_value_109,right_value_111,(_Bool)0,info);
    }
    if(_if_conditional145=!calling_fun_114,    _if_conditional145) {
        come_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value155=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 334, "CVALUE"))));
        come_call_finalizer3(right_value155,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj59=come_value_115->c_value;
        come_value_115->c_value=(char*)come_increment_ref_count(((char*)(right_value156=xsprintf("%s*=%s",left_value_109->c_value,right_value_111->c_value))));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj60=come_value_115->type;
        come_value_115->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=sType_clone(left_value_109->type))));
        come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value157,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_115->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_115));
        add_come_last_code(info,"%s;\n",come_value_115->c_value);
        come_call_finalizer3(come_value_115,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result104__ = (_Bool)1;
    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_112,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result104__;
    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_112,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value158;
char* __dec_obj61;
void* right_value159;
struct sNode* __dec_obj62;
void* right_value160;
struct sNode* __dec_obj63;
struct sDivEqualNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
    self->sline=info->sline;
    __dec_obj61=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string(info->sname))));
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj62=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value159=sNode_clone(left))));
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value159) { right_value159 = come_decrement_ref_count2(right_value159, ((struct sNode*)right_value159)->finalize, ((struct sNode*)right_value159)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj63=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value160=sNode_clone(right))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value160) { right_value160 = come_decrement_ref_count2(right_value160, ((struct sNode*)right_value160)->finalize, ((struct sNode*)right_value160)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result105__ = __result_obj__ = self;
    come_call_finalizer3(self,sDivEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result105__;
    come_call_finalizer3(self,sDivEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDivEqualNode_terminated(struct sDivEqualNode* self){
void* __result_obj__;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
    __result106__ = (_Bool)0;
    return __result106__;
}

char* sDivEqualNode_kind(struct sDivEqualNode* self){
void* __result_obj__;
void* right_value161;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
    __result107__ = __result_obj__ = ((char*)(right_value161=__builtin_string("sDivEqualNode")));
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
}

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_116;
_Bool _if_conditional149;
_Bool __result108__;
void* right_value162;
struct CVALUE* left_value_117;
struct sNode* right_118;
_Bool _if_conditional150;
_Bool __result109__;
void* right_value163;
struct CVALUE* right_value_119;
struct sType* type_120;
char* fun_name_121;
_Bool calling_fun_122;
_Bool _if_conditional151;
_Bool _if_conditional152;
void* right_value164;
struct CVALUE* come_value_123;
void* right_value165;
char* __dec_obj64;
void* right_value166;
struct sType* __dec_obj65;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_116, 0, sizeof(struct sNode*));
right_value162 = (void*)0;
memset(&left_value_117, 0, sizeof(struct CVALUE*));
memset(&right_118, 0, sizeof(struct sNode*));
right_value163 = (void*)0;
memset(&right_value_119, 0, sizeof(struct CVALUE*));
memset(&type_120, 0, sizeof(struct sType*));
memset(&fun_name_121, 0, sizeof(char*));
memset(&calling_fun_122, 0, sizeof(_Bool));
right_value164 = (void*)0;
memset(&come_value_123, 0, sizeof(struct CVALUE*));
right_value165 = (void*)0;
right_value166 = (void*)0;
    left_116=self->mLeft;
    if(_if_conditional149=!node_compile(left_116,info),    _if_conditional149) {
        __result108__ = (_Bool)0;
        return __result108__;
    }
    left_value_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value162=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value162,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_118=self->mRight;
    if(_if_conditional150=!node_compile(right_118,info),    _if_conditional150) {
        __result109__ = (_Bool)0;
        come_call_finalizer3(left_value_117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result109__;
    }
    right_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value163=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value163,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_120=(struct sType*)come_increment_ref_count(left_value_117->type);
    fun_name_121="operator_div_equal";
    if(self->mQuote) {
        calling_fun_122=(_Bool)0;
    }
    else {
        calling_fun_122=operator_overload_fun(type_120,fun_name_121,left_value_117,right_value_119,(_Bool)0,info);
    }
    if(_if_conditional152=!calling_fun_122,    _if_conditional152) {
        come_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value164=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 407, "CVALUE"))));
        come_call_finalizer3(right_value164,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj64=come_value_123->c_value;
        come_value_123->c_value=(char*)come_increment_ref_count(((char*)(right_value165=xsprintf("%s/=%s",left_value_117->c_value,right_value_119->c_value))));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj65=come_value_123->type;
        come_value_123->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_clone(left_value_117->type))));
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value166,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_123->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_123));
        add_come_last_code(info,"%s;\n",come_value_123->c_value);
        come_call_finalizer3(come_value_123,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result110__ = (_Bool)1;
    come_call_finalizer3(left_value_117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result110__;
    come_call_finalizer3(left_value_117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value167;
char* __dec_obj66;
void* right_value168;
struct sNode* __dec_obj67;
void* right_value169;
struct sNode* __dec_obj68;
struct sModEqualNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
    self->sline=info->sline;
    __dec_obj66=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value167=__builtin_string(info->sname))));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj67=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value168=sNode_clone(left))));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value168) { right_value168 = come_decrement_ref_count2(right_value168, ((struct sNode*)right_value168)->finalize, ((struct sNode*)right_value168)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj68=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value169=sNode_clone(right))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value169) { right_value169 = come_decrement_ref_count2(right_value169, ((struct sNode*)right_value169)->finalize, ((struct sNode*)right_value169)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result111__ = __result_obj__ = self;
    come_call_finalizer3(self,sModEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result111__;
    come_call_finalizer3(self,sModEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sModEqualNode_terminated(struct sModEqualNode* self){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    __result112__ = (_Bool)0;
    return __result112__;
}

char* sModEqualNode_kind(struct sModEqualNode* self){
void* __result_obj__;
void* right_value170;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
    __result113__ = __result_obj__ = ((char*)(right_value170=__builtin_string("sModEqualNode")));
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_124;
_Bool _if_conditional156;
_Bool __result114__;
void* right_value171;
struct CVALUE* left_value_125;
struct sNode* right_126;
_Bool _if_conditional157;
_Bool __result115__;
void* right_value172;
struct CVALUE* right_value_127;
struct sType* type_128;
char* fun_name_129;
_Bool calling_fun_130;
_Bool _if_conditional158;
_Bool _if_conditional159;
void* right_value173;
struct CVALUE* come_value_131;
void* right_value174;
char* __dec_obj69;
void* right_value175;
struct sType* __dec_obj70;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_124, 0, sizeof(struct sNode*));
right_value171 = (void*)0;
memset(&left_value_125, 0, sizeof(struct CVALUE*));
memset(&right_126, 0, sizeof(struct sNode*));
right_value172 = (void*)0;
memset(&right_value_127, 0, sizeof(struct CVALUE*));
memset(&type_128, 0, sizeof(struct sType*));
memset(&fun_name_129, 0, sizeof(char*));
memset(&calling_fun_130, 0, sizeof(_Bool));
right_value173 = (void*)0;
memset(&come_value_131, 0, sizeof(struct CVALUE*));
right_value174 = (void*)0;
right_value175 = (void*)0;
    left_124=self->mLeft;
    if(_if_conditional156=!node_compile(left_124,info),    _if_conditional156) {
        __result114__ = (_Bool)0;
        return __result114__;
    }
    left_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value171=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value171,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_126=self->mRight;
    if(_if_conditional157=!node_compile(right_126,info),    _if_conditional157) {
        __result115__ = (_Bool)0;
        come_call_finalizer3(left_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result115__;
    }
    right_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value172=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value172,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_128=(struct sType*)come_increment_ref_count(left_value_125->type);
    fun_name_129="operator_mod_equal";
    if(self->mQuote) {
        calling_fun_130=(_Bool)0;
    }
    else {
        calling_fun_130=operator_overload_fun(type_128,fun_name_129,left_value_125,right_value_127,(_Bool)0,info);
    }
    if(_if_conditional159=!calling_fun_130,    _if_conditional159) {
        come_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value173=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 480, "CVALUE"))));
        come_call_finalizer3(right_value173,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj69=come_value_131->c_value;
        come_value_131->c_value=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s%%=%s",left_value_125->c_value,right_value_127->c_value))));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj70=come_value_131->type;
        come_value_131->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_clone(left_value_125->type))));
        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value175,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_131->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_131));
        add_come_last_code(info,"%s;\n",come_value_131->c_value);
        come_call_finalizer3(come_value_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result116__ = (_Bool)1;
    come_call_finalizer3(left_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_128,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result116__;
    come_call_finalizer3(left_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_128,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value176;
char* __dec_obj71;
void* right_value177;
struct sNode* __dec_obj72;
void* right_value178;
struct sNode* __dec_obj73;
struct sLShifEqualNode* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
    self->sline=info->sline;
    __dec_obj71=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value176=__builtin_string(info->sname))));
    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj72=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value177=sNode_clone(left))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value177) { right_value177 = come_decrement_ref_count2(right_value177, ((struct sNode*)right_value177)->finalize, ((struct sNode*)right_value177)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj73=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=sNode_clone(right))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value178) { right_value178 = come_decrement_ref_count2(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result117__ = __result_obj__ = self;
    come_call_finalizer3(self,sLShifEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result117__;
    come_call_finalizer3(self,sLShifEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLShifEqualNode_terminated(struct sLShifEqualNode* self){
void* __result_obj__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = (_Bool)0;
    return __result118__;
}

char* sLShifEqualNode_kind(struct sLShifEqualNode* self){
void* __result_obj__;
void* right_value179;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
    __result119__ = __result_obj__ = ((char*)(right_value179=__builtin_string("sLShifEqualNode")));
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result119__;
}

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_132;
_Bool _if_conditional163;
_Bool __result120__;
void* right_value180;
struct CVALUE* left_value_133;
struct sNode* right_134;
_Bool _if_conditional164;
_Bool __result121__;
void* right_value181;
struct CVALUE* right_value_135;
struct sType* type_136;
char* fun_name_137;
_Bool calling_fun_138;
_Bool _if_conditional165;
_Bool _if_conditional166;
void* right_value182;
struct CVALUE* come_value_139;
void* right_value183;
char* __dec_obj74;
void* right_value184;
struct sType* __dec_obj75;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_132, 0, sizeof(struct sNode*));
right_value180 = (void*)0;
memset(&left_value_133, 0, sizeof(struct CVALUE*));
memset(&right_134, 0, sizeof(struct sNode*));
right_value181 = (void*)0;
memset(&right_value_135, 0, sizeof(struct CVALUE*));
memset(&type_136, 0, sizeof(struct sType*));
memset(&fun_name_137, 0, sizeof(char*));
memset(&calling_fun_138, 0, sizeof(_Bool));
right_value182 = (void*)0;
memset(&come_value_139, 0, sizeof(struct CVALUE*));
right_value183 = (void*)0;
right_value184 = (void*)0;
    left_132=self->mLeft;
    if(_if_conditional163=!node_compile(left_132,info),    _if_conditional163) {
        __result120__ = (_Bool)0;
        return __result120__;
    }
    left_value_133=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value180,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_134=self->mRight;
    if(_if_conditional164=!node_compile(right_134,info),    _if_conditional164) {
        __result121__ = (_Bool)0;
        come_call_finalizer3(left_value_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result121__;
    }
    right_value_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value181=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value181,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_136=(struct sType*)come_increment_ref_count(left_value_133->type);
    fun_name_137="operator_lshift_equal";
    if(self->mQuote) {
        calling_fun_138=(_Bool)0;
    }
    else {
        calling_fun_138=operator_overload_fun(type_136,fun_name_137,left_value_133,right_value_135,(_Bool)0,info);
    }
    if(_if_conditional166=!calling_fun_138,    _if_conditional166) {
        come_value_139=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 553, "CVALUE"))));
        come_call_finalizer3(right_value182,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj74=come_value_139->c_value;
        come_value_139->c_value=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("%s<<=%s",left_value_133->c_value,right_value_135->c_value))));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj75=come_value_139->type;
        come_value_139->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(left_value_133->type))));
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value184,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_139->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_139));
        add_come_last_code(info,"%s;\n",come_value_139->c_value);
        come_call_finalizer3(come_value_139,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result122__ = (_Bool)1;
    come_call_finalizer3(left_value_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_136,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result122__;
    come_call_finalizer3(left_value_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_136,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value185;
char* __dec_obj76;
void* right_value186;
struct sNode* __dec_obj77;
void* right_value187;
struct sNode* __dec_obj78;
struct sRShiftEqualNode* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
    self->sline=info->sline;
    __dec_obj76=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value185=__builtin_string(info->sname))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj77=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value186=sNode_clone(left))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value186) { right_value186 = come_decrement_ref_count2(right_value186, ((struct sNode*)right_value186)->finalize, ((struct sNode*)right_value186)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj78=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value187=sNode_clone(right))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value187) { right_value187 = come_decrement_ref_count2(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result123__ = __result_obj__ = self;
    come_call_finalizer3(self,sRShiftEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result123__;
    come_call_finalizer3(self,sRShiftEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sRShiftEqualNode_terminated(struct sRShiftEqualNode* self){
void* __result_obj__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    __result124__ = (_Bool)0;
    return __result124__;
}

char* sRShiftEqualNode_kind(struct sRShiftEqualNode* self){
void* __result_obj__;
void* right_value188;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
    __result125__ = __result_obj__ = ((char*)(right_value188=__builtin_string("sRShiftEqualNode")));
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result125__;
}

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_140;
_Bool _if_conditional170;
_Bool __result126__;
void* right_value189;
struct CVALUE* left_value_141;
struct sNode* right_142;
_Bool _if_conditional171;
_Bool __result127__;
void* right_value190;
struct CVALUE* right_value_143;
struct sType* type_144;
char* fun_name_145;
_Bool calling_fun_146;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value191;
struct CVALUE* come_value_147;
void* right_value192;
char* __dec_obj79;
void* right_value193;
struct sType* __dec_obj80;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_140, 0, sizeof(struct sNode*));
right_value189 = (void*)0;
memset(&left_value_141, 0, sizeof(struct CVALUE*));
memset(&right_142, 0, sizeof(struct sNode*));
right_value190 = (void*)0;
memset(&right_value_143, 0, sizeof(struct CVALUE*));
memset(&type_144, 0, sizeof(struct sType*));
memset(&fun_name_145, 0, sizeof(char*));
memset(&calling_fun_146, 0, sizeof(_Bool));
right_value191 = (void*)0;
memset(&come_value_147, 0, sizeof(struct CVALUE*));
right_value192 = (void*)0;
right_value193 = (void*)0;
    left_140=self->mLeft;
    if(_if_conditional170=!node_compile(left_140,info),    _if_conditional170) {
        __result126__ = (_Bool)0;
        return __result126__;
    }
    left_value_141=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value189,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_142=self->mRight;
    if(_if_conditional171=!node_compile(right_142,info),    _if_conditional171) {
        __result127__ = (_Bool)0;
        come_call_finalizer3(left_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result127__;
    }
    right_value_143=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value190=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value190,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_144=(struct sType*)come_increment_ref_count(left_value_141->type);
    fun_name_145="operator_rshift_equal";
    if(self->mQuote) {
        calling_fun_146=(_Bool)0;
    }
    else {
        calling_fun_146=operator_overload_fun(type_144,fun_name_145,left_value_141,right_value_143,(_Bool)0,info);
    }
    if(_if_conditional173=!calling_fun_146,    _if_conditional173) {
        come_value_147=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 626, "CVALUE"))));
        come_call_finalizer3(right_value191,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj79=come_value_147->c_value;
        come_value_147->c_value=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("%s>>=%s",left_value_141->c_value,right_value_143->c_value))));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj80=come_value_147->type;
        come_value_147->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(left_value_141->type))));
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value193,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_147->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_147));
        add_come_last_code(info,"%s;\n",come_value_147->c_value);
        come_call_finalizer3(come_value_147,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result128__ = (_Bool)1;
    come_call_finalizer3(left_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_143,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_144,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result128__;
    come_call_finalizer3(left_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_143,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_144,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value194;
char* __dec_obj81;
void* right_value195;
struct sNode* __dec_obj82;
void* right_value196;
struct sNode* __dec_obj83;
struct sXorEqualNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
    self->sline=info->sline;
    __dec_obj81=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string(info->sname))));
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj82=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value195=sNode_clone(left))));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value195) { right_value195 = come_decrement_ref_count2(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj83=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=sNode_clone(right))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value196) { right_value196 = come_decrement_ref_count2(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result129__ = __result_obj__ = self;
    come_call_finalizer3(self,sXorEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result129__;
    come_call_finalizer3(self,sXorEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sXorEqualNode_terminated(struct sXorEqualNode* self){
void* __result_obj__;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    __result130__ = (_Bool)0;
    return __result130__;
}

char* sXorEqualNode_kind(struct sXorEqualNode* self){
void* __result_obj__;
void* right_value197;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
    __result131__ = __result_obj__ = ((char*)(right_value197=__builtin_string("sXorEqualNode")));
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result131__;
}

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_148;
_Bool _if_conditional177;
_Bool __result132__;
void* right_value198;
struct CVALUE* left_value_149;
struct sNode* right_150;
_Bool _if_conditional178;
_Bool __result133__;
void* right_value199;
struct CVALUE* right_value_151;
struct sType* type_152;
char* fun_name_153;
_Bool calling_fun_154;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value200;
struct CVALUE* come_value_155;
void* right_value201;
char* __dec_obj84;
void* right_value202;
struct sType* __dec_obj85;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_148, 0, sizeof(struct sNode*));
right_value198 = (void*)0;
memset(&left_value_149, 0, sizeof(struct CVALUE*));
memset(&right_150, 0, sizeof(struct sNode*));
right_value199 = (void*)0;
memset(&right_value_151, 0, sizeof(struct CVALUE*));
memset(&type_152, 0, sizeof(struct sType*));
memset(&fun_name_153, 0, sizeof(char*));
memset(&calling_fun_154, 0, sizeof(_Bool));
right_value200 = (void*)0;
memset(&come_value_155, 0, sizeof(struct CVALUE*));
right_value201 = (void*)0;
right_value202 = (void*)0;
    left_148=self->mLeft;
    if(_if_conditional177=!node_compile(left_148,info),    _if_conditional177) {
        __result132__ = (_Bool)0;
        return __result132__;
    }
    left_value_149=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value198=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value198,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_150=self->mRight;
    if(_if_conditional178=!node_compile(right_150,info),    _if_conditional178) {
        __result133__ = (_Bool)0;
        come_call_finalizer3(left_value_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result133__;
    }
    right_value_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value199=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value199,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_152=(struct sType*)come_increment_ref_count(left_value_149->type);
    fun_name_153="operator_xor_equal";
    if(self->mQuote) {
        calling_fun_154=(_Bool)0;
    }
    else {
        calling_fun_154=operator_overload_fun(type_152,fun_name_153,left_value_149,right_value_151,(_Bool)0,info);
    }
    if(_if_conditional180=!calling_fun_154,    _if_conditional180) {
        come_value_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value200=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 699, "CVALUE"))));
        come_call_finalizer3(right_value200,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj84=come_value_155->c_value;
        come_value_155->c_value=(char*)come_increment_ref_count(((char*)(right_value201=xsprintf("%s^=%s",left_value_149->c_value,right_value_151->c_value))));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj85=come_value_155->type;
        come_value_155->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_clone(left_value_149->type))));
        come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value202,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_155->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_155));
        add_come_last_code(info,"%s;\n",come_value_155->c_value);
        come_call_finalizer3(come_value_155,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result134__ = (_Bool)1;
    come_call_finalizer3(left_value_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_152,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result134__;
    come_call_finalizer3(left_value_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_152,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value203;
char* __dec_obj86;
void* right_value204;
struct sNode* __dec_obj87;
void* right_value205;
struct sNode* __dec_obj88;
struct sOrEqualNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
    self->sline=info->sline;
    __dec_obj86=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string(info->sname))));
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj87=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value204=sNode_clone(left))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value204) { right_value204 = come_decrement_ref_count2(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj88=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=sNode_clone(right))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value205) { right_value205 = come_decrement_ref_count2(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result135__ = __result_obj__ = self;
    come_call_finalizer3(self,sOrEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result135__;
    come_call_finalizer3(self,sOrEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sOrEqualNode_terminated(struct sOrEqualNode* self){
void* __result_obj__;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
    __result136__ = (_Bool)0;
    return __result136__;
}

char* sOrEqualNode_kind(struct sOrEqualNode* self){
void* __result_obj__;
void* right_value206;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
    __result137__ = __result_obj__ = ((char*)(right_value206=__builtin_string("sOrEqualNode")));
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result137__;
}

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_156;
_Bool _if_conditional184;
_Bool __result138__;
void* right_value207;
struct CVALUE* left_value_157;
struct sNode* right_158;
_Bool _if_conditional185;
_Bool __result139__;
void* right_value208;
struct CVALUE* right_value_159;
struct sType* type_160;
char* fun_name_161;
_Bool calling_fun_162;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value209;
struct CVALUE* come_value_163;
void* right_value210;
char* __dec_obj89;
void* right_value211;
struct sType* __dec_obj90;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_156, 0, sizeof(struct sNode*));
right_value207 = (void*)0;
memset(&left_value_157, 0, sizeof(struct CVALUE*));
memset(&right_158, 0, sizeof(struct sNode*));
right_value208 = (void*)0;
memset(&right_value_159, 0, sizeof(struct CVALUE*));
memset(&type_160, 0, sizeof(struct sType*));
memset(&fun_name_161, 0, sizeof(char*));
memset(&calling_fun_162, 0, sizeof(_Bool));
right_value209 = (void*)0;
memset(&come_value_163, 0, sizeof(struct CVALUE*));
right_value210 = (void*)0;
right_value211 = (void*)0;
    left_156=self->mLeft;
    if(_if_conditional184=!node_compile(left_156,info),    _if_conditional184) {
        __result138__ = (_Bool)0;
        return __result138__;
    }
    left_value_157=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value207=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value207,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_158=self->mRight;
    if(_if_conditional185=!node_compile(right_158,info),    _if_conditional185) {
        __result139__ = (_Bool)0;
        come_call_finalizer3(left_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result139__;
    }
    right_value_159=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value208=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value208,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_160=(struct sType*)come_increment_ref_count(left_value_157->type);
    fun_name_161="operator_or_equal";
    if(self->mQuote) {
        calling_fun_162=(_Bool)0;
    }
    else {
        calling_fun_162=operator_overload_fun(type_160,fun_name_161,left_value_157,right_value_159,(_Bool)0,info);
    }
    if(_if_conditional187=!calling_fun_162,    _if_conditional187) {
        come_value_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 772, "CVALUE"))));
        come_call_finalizer3(right_value209,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj89=come_value_163->c_value;
        come_value_163->c_value=(char*)come_increment_ref_count(((char*)(right_value210=xsprintf("%s|=%s",left_value_157->c_value,right_value_159->c_value))));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj90=come_value_163->type;
        come_value_163->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_clone(left_value_157->type))));
        come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value211,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_163->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_163));
        add_come_last_code(info,"%s;\n",come_value_163->c_value);
        come_call_finalizer3(come_value_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result140__ = (_Bool)1;
    come_call_finalizer3(left_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_159,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_160,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result140__;
    come_call_finalizer3(left_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_159,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_160,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value212;
char* __dec_obj91;
void* right_value213;
struct sNode* __dec_obj92;
void* right_value214;
struct sNode* __dec_obj93;
struct sAndEqualNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
    self->sline=info->sline;
    __dec_obj91=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value212=__builtin_string(info->sname))));
    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj92=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value213=sNode_clone(left))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count2(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value213) { right_value213 = come_decrement_ref_count2(right_value213, ((struct sNode*)right_value213)->finalize, ((struct sNode*)right_value213)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj93=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value214=sNode_clone(right))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value214) { right_value214 = come_decrement_ref_count2(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result141__ = __result_obj__ = self;
    come_call_finalizer3(self,sAndEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result141__;
    come_call_finalizer3(self,sAndEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAndEqualNode_terminated(struct sAndEqualNode* self){
void* __result_obj__;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    __result142__ = (_Bool)0;
    return __result142__;
}

char* sAndEqualNode_kind(struct sAndEqualNode* self){
void* __result_obj__;
void* right_value215;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
    __result143__ = __result_obj__ = ((char*)(right_value215=__builtin_string("sAndEqualNode")));
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result143__;
}

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_164;
_Bool _if_conditional191;
_Bool __result144__;
void* right_value216;
struct CVALUE* left_value_165;
struct sNode* right_166;
_Bool _if_conditional192;
_Bool __result145__;
void* right_value217;
struct CVALUE* right_value_167;
struct sType* type_168;
char* fun_name_169;
_Bool calling_fun_170;
_Bool _if_conditional193;
_Bool _if_conditional194;
void* right_value218;
struct CVALUE* come_value_171;
void* right_value219;
char* __dec_obj94;
void* right_value220;
struct sType* __dec_obj95;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_164, 0, sizeof(struct sNode*));
right_value216 = (void*)0;
memset(&left_value_165, 0, sizeof(struct CVALUE*));
memset(&right_166, 0, sizeof(struct sNode*));
right_value217 = (void*)0;
memset(&right_value_167, 0, sizeof(struct CVALUE*));
memset(&type_168, 0, sizeof(struct sType*));
memset(&fun_name_169, 0, sizeof(char*));
memset(&calling_fun_170, 0, sizeof(_Bool));
right_value218 = (void*)0;
memset(&come_value_171, 0, sizeof(struct CVALUE*));
right_value219 = (void*)0;
right_value220 = (void*)0;
    left_164=self->mLeft;
    if(_if_conditional191=!node_compile(left_164,info),    _if_conditional191) {
        __result144__ = (_Bool)0;
        return __result144__;
    }
    left_value_165=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value216=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value216,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_166=self->mRight;
    if(_if_conditional192=!node_compile(right_166,info),    _if_conditional192) {
        __result145__ = (_Bool)0;
        come_call_finalizer3(left_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result145__;
    }
    right_value_167=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value217=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value217,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_168=(struct sType*)come_increment_ref_count(left_value_165->type);
    fun_name_169="operator_and_equal";
    if(self->mQuote) {
        calling_fun_170=(_Bool)0;
    }
    else {
        calling_fun_170=operator_overload_fun(type_168,fun_name_169,left_value_165,right_value_167,(_Bool)0,info);
    }
    if(_if_conditional194=!calling_fun_170,    _if_conditional194) {
        come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 845, "CVALUE"))));
        come_call_finalizer3(right_value218,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj94=come_value_171->c_value;
        come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("%s&=%s",left_value_165->c_value,right_value_167->c_value))));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj95=come_value_171->type;
        come_value_171->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_clone(left_value_165->type))));
        come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value220,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_171->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
        add_come_last_code(info,"%s;\n",come_value_171->c_value);
        come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result146__ = (_Bool)1;
    come_call_finalizer3(left_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_168,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result146__;
    come_call_finalizer3(left_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_168,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value221;
char* __dec_obj96;
void* right_value222;
struct sNode* __dec_obj97;
void* right_value223;
struct sNode* __dec_obj98;
struct sExpEqualNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
    self->sline=info->sline;
    __dec_obj96=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string(info->sname))));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj97=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value222=sNode_clone(left))));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value222) { right_value222 = come_decrement_ref_count2(right_value222, ((struct sNode*)right_value222)->finalize, ((struct sNode*)right_value222)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj98=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value223=sNode_clone(right))));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count2(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value223) { right_value223 = come_decrement_ref_count2(right_value223, ((struct sNode*)right_value223)->finalize, ((struct sNode*)right_value223)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result147__ = __result_obj__ = self;
    come_call_finalizer3(self,sExpEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result147__;
    come_call_finalizer3(self,sExpEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sExpEqualNode_terminated(struct sExpEqualNode* self){
void* __result_obj__;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    __result148__ = (_Bool)0;
    return __result148__;
}

char* sExpEqualNode_kind(struct sExpEqualNode* self){
void* __result_obj__;
void* right_value224;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value224 = (void*)0;
    __result149__ = __result_obj__ = ((char*)(right_value224=__builtin_string("sExpEqualNode")));
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result149__;
}

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_172;
_Bool _if_conditional198;
_Bool __result150__;
void* right_value225;
struct CVALUE* left_value_173;
struct sNode* right_174;
_Bool _if_conditional199;
_Bool __result151__;
void* right_value226;
struct CVALUE* right_value_175;
struct sType* type_176;
char* fun_name_177;
_Bool calling_fun_178;
_Bool _if_conditional200;
_Bool _if_conditional201;
void* right_value227;
struct CVALUE* come_value_179;
void* right_value228;
char* __dec_obj99;
void* right_value229;
struct sType* __dec_obj100;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_172, 0, sizeof(struct sNode*));
right_value225 = (void*)0;
memset(&left_value_173, 0, sizeof(struct CVALUE*));
memset(&right_174, 0, sizeof(struct sNode*));
right_value226 = (void*)0;
memset(&right_value_175, 0, sizeof(struct CVALUE*));
memset(&type_176, 0, sizeof(struct sType*));
memset(&fun_name_177, 0, sizeof(char*));
memset(&calling_fun_178, 0, sizeof(_Bool));
right_value227 = (void*)0;
memset(&come_value_179, 0, sizeof(struct CVALUE*));
right_value228 = (void*)0;
right_value229 = (void*)0;
    left_172=self->mLeft;
    if(_if_conditional198=!node_compile(left_172,info),    _if_conditional198) {
        __result150__ = (_Bool)0;
        return __result150__;
    }
    left_value_173=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value225=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value225,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_174=self->mRight;
    if(_if_conditional199=!node_compile(right_174,info),    _if_conditional199) {
        __result151__ = (_Bool)0;
        come_call_finalizer3(left_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result151__;
    }
    right_value_175=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value226=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value226,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_176=(struct sType*)come_increment_ref_count(left_value_173->type);
    fun_name_177="operator_exp_equal";
    if(self->mQuote) {
        calling_fun_178=(_Bool)0;
    }
    else {
        calling_fun_178=operator_overload_fun(type_176,fun_name_177,left_value_173,right_value_175,(_Bool)0,info);
    }
    if(_if_conditional201=!calling_fun_178,    _if_conditional201) {
        come_value_179=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value227=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 918, "CVALUE"))));
        come_call_finalizer3(right_value227,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj99=come_value_179->c_value;
        come_value_179->c_value=(char*)come_increment_ref_count(((char*)(right_value228=xsprintf("%s=%s",left_value_173->c_value,right_value_175->c_value))));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj100=come_value_179->type;
        come_value_179->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=sType_clone(left_value_173->type))));
        come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value229,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_179->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_179));
        add_come_last_code(info,"%s;\n",come_value_179->c_value);
        come_call_finalizer3(come_value_179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result152__ = (_Bool)1;
    come_call_finalizer3(left_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_176,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result152__;
    come_call_finalizer3(left_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_176,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional202;
_Bool quote_180;
_Bool _if_conditional203;
void* right_value230;
void* right_value231;
struct sNode* _inf_value1;
struct sPlusPlusNode* _inf_obj_value1;
void* right_value235;
struct sNode* __result155__;
_Bool _if_conditional211;
_Bool quote_182;
_Bool _if_conditional212;
void* right_value236;
void* right_value237;
struct sNode* _inf_value2;
struct sMinusMinusNode* _inf_obj_value2;
void* right_value241;
struct sNode* __result158__;
_Bool _if_conditional220;
_Bool quote_184;
_Bool _if_conditional221;
void* right_value242;
struct sNode* right_node_185;
void* right_value243;
void* right_value244;
struct sNode* _inf_value3;
struct sPlusEqualNode* _inf_obj_value3;
void* right_value249;
struct sNode* __result161__;
_Bool _if_conditional231;
_Bool quote_187;
_Bool _if_conditional232;
void* right_value250;
struct sNode* right_node_188;
void* right_value251;
void* right_value252;
struct sNode* _inf_value4;
struct sMinusEqualNode* _inf_obj_value4;
void* right_value257;
struct sNode* __result164__;
_Bool _if_conditional242;
_Bool quote_190;
_Bool _if_conditional243;
void* right_value258;
struct sNode* right_node_191;
void* right_value259;
void* right_value260;
struct sNode* _inf_value5;
struct sMultEqualNode* _inf_obj_value5;
void* right_value265;
struct sNode* __result167__;
_Bool _if_conditional253;
_Bool quote_193;
_Bool _if_conditional254;
void* right_value266;
struct sNode* right_node_194;
void* right_value267;
void* right_value268;
struct sNode* _inf_value6;
struct sDivEqualNode* _inf_obj_value6;
void* right_value273;
struct sNode* __result170__;
_Bool _if_conditional264;
_Bool quote_196;
_Bool _if_conditional265;
void* right_value274;
struct sNode* right_node_197;
void* right_value275;
void* right_value276;
struct sNode* _inf_value7;
struct sModEqualNode* _inf_obj_value7;
void* right_value281;
struct sNode* __result173__;
_Bool _if_conditional275;
_Bool quote_199;
_Bool _if_conditional276;
void* right_value282;
struct sNode* right_node_200;
void* right_value283;
void* right_value284;
struct sNode* _inf_value8;
struct sLShifEqualNode* _inf_obj_value8;
void* right_value289;
struct sNode* __result176__;
_Bool _if_conditional286;
_Bool quote_202;
_Bool _if_conditional287;
void* right_value290;
struct sNode* right_node_203;
void* right_value291;
void* right_value292;
struct sNode* _inf_value9;
struct sRShiftEqualNode* _inf_obj_value9;
void* right_value297;
struct sNode* __result179__;
_Bool _if_conditional297;
_Bool quote_205;
_Bool _if_conditional298;
void* right_value298;
struct sNode* right_node_206;
void* right_value299;
void* right_value300;
struct sNode* _inf_value10;
struct sXorEqualNode* _inf_obj_value10;
void* right_value305;
struct sNode* __result182__;
_Bool _if_conditional308;
_Bool quote_208;
_Bool _if_conditional309;
void* right_value306;
struct sNode* right_node_209;
void* right_value307;
void* right_value308;
struct sNode* _inf_value11;
struct sAndEqualNode* _inf_obj_value11;
void* right_value313;
struct sNode* __result185__;
_Bool _if_conditional319;
_Bool quote_211;
_Bool _if_conditional320;
void* right_value314;
struct sNode* right_node_212;
void* right_value315;
void* right_value316;
struct sNode* _inf_value12;
struct sOrEqualNode* _inf_obj_value12;
void* right_value321;
struct sNode* __result188__;
_Bool _if_conditional330;
_Bool quote_214;
_Bool _if_conditional331;
void* right_value322;
struct sNode* right_node_215;
void* right_value323;
void* right_value324;
struct sNode* _inf_value13;
struct sExpEqualNode* _inf_obj_value13;
void* right_value329;
struct sNode* __result191__;
struct sNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&quote_180, 0, sizeof(_Bool));
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value235 = (void*)0;
memset(&quote_182, 0, sizeof(_Bool));
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value241 = (void*)0;
memset(&quote_184, 0, sizeof(_Bool));
right_value242 = (void*)0;
memset(&right_node_185, 0, sizeof(struct sNode*));
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value249 = (void*)0;
memset(&quote_187, 0, sizeof(_Bool));
right_value250 = (void*)0;
memset(&right_node_188, 0, sizeof(struct sNode*));
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value257 = (void*)0;
memset(&quote_190, 0, sizeof(_Bool));
right_value258 = (void*)0;
memset(&right_node_191, 0, sizeof(struct sNode*));
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value265 = (void*)0;
memset(&quote_193, 0, sizeof(_Bool));
right_value266 = (void*)0;
memset(&right_node_194, 0, sizeof(struct sNode*));
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value273 = (void*)0;
memset(&quote_196, 0, sizeof(_Bool));
right_value274 = (void*)0;
memset(&right_node_197, 0, sizeof(struct sNode*));
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value281 = (void*)0;
memset(&quote_199, 0, sizeof(_Bool));
right_value282 = (void*)0;
memset(&right_node_200, 0, sizeof(struct sNode*));
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value289 = (void*)0;
memset(&quote_202, 0, sizeof(_Bool));
right_value290 = (void*)0;
memset(&right_node_203, 0, sizeof(struct sNode*));
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value297 = (void*)0;
memset(&quote_205, 0, sizeof(_Bool));
right_value298 = (void*)0;
memset(&right_node_206, 0, sizeof(struct sNode*));
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value305 = (void*)0;
memset(&quote_208, 0, sizeof(_Bool));
right_value306 = (void*)0;
memset(&right_node_209, 0, sizeof(struct sNode*));
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value313 = (void*)0;
memset(&quote_211, 0, sizeof(_Bool));
right_value314 = (void*)0;
memset(&right_node_212, 0, sizeof(struct sNode*));
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value321 = (void*)0;
memset(&quote_214, 0, sizeof(_Bool));
right_value322 = (void*)0;
memset(&right_node_215, 0, sizeof(struct sNode*));
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value329 = (void*)0;
    if(_if_conditional202=(*info->p==92&&*(info->p+1)==43&&*(info->p+2)==43)||(*info->p==43&&*(info->p+1)==43),    _if_conditional202) {
        if(_if_conditional203=*info->p==92,        _if_conditional203) {
            info->p+=3;
            skip_spaces_and_lf(info);
            quote_180=(_Bool)1;
        }
        else {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_180=(_Bool)0;
        }
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 948, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sPlusPlusNode*)(right_value231=sPlusPlusNode_initialize((struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(right_value230=(struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "19eq.c", 948, "sPlusPlusNode")))),(struct sNode*)come_increment_ref_count(node),quote_180,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sPlusPlusNode_finalize;
        _inf_value1->clone=(void*)sPlusPlusNode_clone;
        _inf_value1->compile=(void*)sPlusPlusNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sPlusPlusNode_terminated;
        _inf_value1->kind=(void*)sPlusPlusNode_kind;
        __result155__ = __result_obj__ = ((struct sNode*)(right_value235=_inf_value1));
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(right_value230,sPlusPlusNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value231,sPlusPlusNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value235) { right_value235 = come_decrement_ref_count2(right_value235, ((struct sNode*)right_value235)->finalize, ((struct sNode*)right_value235)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result155__;
    }
    else {
        if(_if_conditional211=(*info->p==92&&*(info->p+1)==45&&*(info->p+2)==45)||(*info->p==45&&*(info->p+1)==45),        _if_conditional211) {
            if(_if_conditional212=*info->p==92,            _if_conditional212) {
                info->p+=3;
                skip_spaces_and_lf(info);
                quote_182=(_Bool)1;
            }
            else {
                info->p+=2;
                skip_spaces_and_lf(info);
                quote_182=(_Bool)0;
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 963, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sMinusMinusNode*)(right_value237=sMinusMinusNode_initialize((struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(right_value236=(struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "19eq.c", 963, "sMinusMinusNode")))),(struct sNode*)come_increment_ref_count(node),quote_182,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMinusMinusNode_finalize;
            _inf_value2->clone=(void*)sMinusMinusNode_clone;
            _inf_value2->compile=(void*)sMinusMinusNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sMinusMinusNode_terminated;
            _inf_value2->kind=(void*)sMinusMinusNode_kind;
            __result158__ = __result_obj__ = ((struct sNode*)(right_value241=_inf_value2));
            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
            come_call_finalizer3(right_value236,sMinusMinusNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value237,sMinusMinusNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value241) { right_value241 = come_decrement_ref_count2(right_value241, ((struct sNode*)right_value241)->finalize, ((struct sNode*)right_value241)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result158__;
        }
        else {
            if(_if_conditional220=(*info->p==92&&*(info->p+1)==43&&*(info->p+2)==61)||(*info->p==43&&*(info->p+1)==61),            _if_conditional220) {
                if(_if_conditional221=*info->p==92,                _if_conditional221) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    quote_184=(_Bool)1;
                }
                else {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    quote_184=(_Bool)0;
                }
                right_node_185=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value242=expression_v13(info))));
                if(right_value242) { right_value242 = come_decrement_ref_count2(right_value242, ((struct sNode*)right_value242)->finalize, ((struct sNode*)right_value242)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 980, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sPlusEqualNode*)(right_value244=sPlusEqualNode_initialize((struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(right_value243=(struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "19eq.c", 980, "sPlusEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_185),quote_184,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sPlusEqualNode_finalize;
                _inf_value3->clone=(void*)sPlusEqualNode_clone;
                _inf_value3->compile=(void*)sPlusEqualNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sPlusEqualNode_terminated;
                _inf_value3->kind=(void*)sPlusEqualNode_kind;
                __result161__ = __result_obj__ = ((struct sNode*)(right_value249=_inf_value3));
                if(right_node_185) { right_node_185 = come_decrement_ref_count2(right_node_185, ((struct sNode*)right_node_185)->finalize, ((struct sNode*)right_node_185)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(right_value243,sPlusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value244,sPlusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value249) { right_value249 = come_decrement_ref_count2(right_value249, ((struct sNode*)right_value249)->finalize, ((struct sNode*)right_value249)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result161__;
                if(right_node_185) { right_node_185 = come_decrement_ref_count2(right_node_185, ((struct sNode*)right_node_185)->finalize, ((struct sNode*)right_node_185)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional231=(*info->p==92&&*(info->p+1)==45&&*(info->p+2)==61)||(*info->p==45&&*(info->p+1)==61),                _if_conditional231) {
                    if(_if_conditional232=*info->p==92,                    _if_conditional232) {
                        info->p+=3;
                        skip_spaces_and_lf(info);
                        quote_187=(_Bool)1;
                    }
                    else {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        quote_187=(_Bool)0;
                    }
                    right_node_188=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value250=expression_v13(info))));
                    if(right_value250) { right_value250 = come_decrement_ref_count2(right_value250, ((struct sNode*)right_value250)->finalize, ((struct sNode*)right_value250)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 997, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sMinusEqualNode*)(right_value252=sMinusEqualNode_initialize((struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(right_value251=(struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "19eq.c", 997, "sMinusEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_188),quote_187,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sMinusEqualNode_finalize;
                    _inf_value4->clone=(void*)sMinusEqualNode_clone;
                    _inf_value4->compile=(void*)sMinusEqualNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sMinusEqualNode_terminated;
                    _inf_value4->kind=(void*)sMinusEqualNode_kind;
                    __result164__ = __result_obj__ = ((struct sNode*)(right_value257=_inf_value4));
                    if(right_node_188) { right_node_188 = come_decrement_ref_count2(right_node_188, ((struct sNode*)right_node_188)->finalize, ((struct sNode*)right_node_188)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    come_call_finalizer3(right_value251,sMinusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value252,sMinusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value257) { right_value257 = come_decrement_ref_count2(right_value257, ((struct sNode*)right_value257)->finalize, ((struct sNode*)right_value257)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result164__;
                    if(right_node_188) { right_node_188 = come_decrement_ref_count2(right_node_188, ((struct sNode*)right_node_188)->finalize, ((struct sNode*)right_node_188)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional242=(*info->p==92&&*(info->p+1)==42&&*(info->p+2)==61)||(*info->p==42&&*(info->p+1)==61),                    _if_conditional242) {
                        if(_if_conditional243=*info->p==92,                        _if_conditional243) {
                            info->p+=3;
                            skip_spaces_and_lf(info);
                            quote_190=(_Bool)1;
                        }
                        else {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            quote_190=(_Bool)0;
                        }
                        right_node_191=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value258=expression_v13(info))));
                        if(right_value258) { right_value258 = come_decrement_ref_count2(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1014, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sMultEqualNode*)(right_value260=sMultEqualNode_initialize((struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(right_value259=(struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "19eq.c", 1014, "sMultEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_191),quote_190,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sMultEqualNode_finalize;
                        _inf_value5->clone=(void*)sMultEqualNode_clone;
                        _inf_value5->compile=(void*)sMultEqualNode_compile;
                        _inf_value5->sline=(void*)sNodeBase_sline;
                        _inf_value5->sname=(void*)sNodeBase_sname;
                        _inf_value5->terminated=(void*)sMultEqualNode_terminated;
                        _inf_value5->kind=(void*)sMultEqualNode_kind;
                        __result167__ = __result_obj__ = ((struct sNode*)(right_value265=_inf_value5));
                        if(right_node_191) { right_node_191 = come_decrement_ref_count2(right_node_191, ((struct sNode*)right_node_191)->finalize, ((struct sNode*)right_node_191)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        come_call_finalizer3(right_value259,sMultEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value260,sMultEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value265) { right_value265 = come_decrement_ref_count2(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result167__;
                        if(right_node_191) { right_node_191 = come_decrement_ref_count2(right_node_191, ((struct sNode*)right_node_191)->finalize, ((struct sNode*)right_node_191)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional253=(*info->p==92&&*(info->p+1)==47&&*(info->p+2)==61)||(*info->p==47&&*(info->p+1)==61),                        _if_conditional253) {
                            if(_if_conditional254=*info->p==92,                            _if_conditional254) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                quote_193=(_Bool)1;
                            }
                            else {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                                quote_193=(_Bool)0;
                            }
                            right_node_194=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value266=expression_v13(info))));
                            if(right_value266) { right_value266 = come_decrement_ref_count2(right_value266, ((struct sNode*)right_value266)->finalize, ((struct sNode*)right_value266)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1031, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sDivEqualNode*)(right_value268=sDivEqualNode_initialize((struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(right_value267=(struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "19eq.c", 1031, "sDivEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_194),quote_193,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sDivEqualNode_finalize;
                            _inf_value6->clone=(void*)sDivEqualNode_clone;
                            _inf_value6->compile=(void*)sDivEqualNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sDivEqualNode_terminated;
                            _inf_value6->kind=(void*)sDivEqualNode_kind;
                            __result170__ = __result_obj__ = ((struct sNode*)(right_value273=_inf_value6));
                            if(right_node_194) { right_node_194 = come_decrement_ref_count2(right_node_194, ((struct sNode*)right_node_194)->finalize, ((struct sNode*)right_node_194)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            come_call_finalizer3(right_value267,sDivEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value268,sDivEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value273) { right_value273 = come_decrement_ref_count2(right_value273, ((struct sNode*)right_value273)->finalize, ((struct sNode*)right_value273)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result170__;
                            if(right_node_194) { right_node_194 = come_decrement_ref_count2(right_node_194, ((struct sNode*)right_node_194)->finalize, ((struct sNode*)right_node_194)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional264=(*info->p==92&&*(info->p+1)==37&&*(info->p+2)==61)||(*info->p==37&&*(info->p+1)==61),                            _if_conditional264) {
                                if(_if_conditional265=*info->p==92,                                _if_conditional265) {
                                    info->p+=3;
                                    skip_spaces_and_lf(info);
                                    quote_196=(_Bool)1;
                                }
                                else {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                    quote_196=(_Bool)0;
                                }
                                right_node_197=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value274=expression_v13(info))));
                                if(right_value274) { right_value274 = come_decrement_ref_count2(right_value274, ((struct sNode*)right_value274)->finalize, ((struct sNode*)right_value274)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1049, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sModEqualNode*)(right_value276=sModEqualNode_initialize((struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(right_value275=(struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "19eq.c", 1049, "sModEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_197),quote_196,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sModEqualNode_finalize;
                                _inf_value7->clone=(void*)sModEqualNode_clone;
                                _inf_value7->compile=(void*)sModEqualNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sModEqualNode_terminated;
                                _inf_value7->kind=(void*)sModEqualNode_kind;
                                __result173__ = __result_obj__ = ((struct sNode*)(right_value281=_inf_value7));
                                if(right_node_197) { right_node_197 = come_decrement_ref_count2(right_node_197, ((struct sNode*)right_node_197)->finalize, ((struct sNode*)right_node_197)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                come_call_finalizer3(right_value275,sModEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value276,sModEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value281) { right_value281 = come_decrement_ref_count2(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result173__;
                                if(right_node_197) { right_node_197 = come_decrement_ref_count2(right_node_197, ((struct sNode*)right_node_197)->finalize, ((struct sNode*)right_node_197)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional275=(*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)==61)||(*info->p==60&&*(info->p+1)==60&&*(info->p+2)==61),                                _if_conditional275) {
                                    if(_if_conditional276=*info->p==92,                                    _if_conditional276) {
                                        info->p+=4;
                                        skip_spaces_and_lf(info);
                                        quote_199=(_Bool)1;
                                    }
                                    else {
                                        info->p+=3;
                                        skip_spaces_and_lf(info);
                                        quote_199=(_Bool)0;
                                    }
                                    right_node_200=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value282=expression_v13(info))));
                                    if(right_value282) { right_value282 = come_decrement_ref_count2(right_value282, ((struct sNode*)right_value282)->finalize, ((struct sNode*)right_value282)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1066, "struct sNode");
                                    _inf_obj_value8=come_increment_ref_count(((struct sLShifEqualNode*)(right_value284=sLShifEqualNode_initialize((struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(right_value283=(struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "19eq.c", 1066, "sLShifEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_200),quote_199,info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sLShifEqualNode_finalize;
                                    _inf_value8->clone=(void*)sLShifEqualNode_clone;
                                    _inf_value8->compile=(void*)sLShifEqualNode_compile;
                                    _inf_value8->sline=(void*)sNodeBase_sline;
                                    _inf_value8->sname=(void*)sNodeBase_sname;
                                    _inf_value8->terminated=(void*)sLShifEqualNode_terminated;
                                    _inf_value8->kind=(void*)sLShifEqualNode_kind;
                                    __result176__ = __result_obj__ = ((struct sNode*)(right_value289=_inf_value8));
                                    if(right_node_200) { right_node_200 = come_decrement_ref_count2(right_node_200, ((struct sNode*)right_node_200)->finalize, ((struct sNode*)right_node_200)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    come_call_finalizer3(right_value283,sLShifEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value284,sLShifEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value289) { right_value289 = come_decrement_ref_count2(right_value289, ((struct sNode*)right_value289)->finalize, ((struct sNode*)right_value289)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result176__;
                                    if(right_node_200) { right_node_200 = come_decrement_ref_count2(right_node_200, ((struct sNode*)right_node_200)->finalize, ((struct sNode*)right_node_200)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional286=(*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)==61)||(*info->p==62&&*(info->p+1)==62&&*(info->p+2)==61),                                    _if_conditional286) {
                                        if(_if_conditional287=*info->p==92,                                        _if_conditional287) {
                                            info->p+=4;
                                            skip_spaces_and_lf(info);
                                            quote_202=(_Bool)1;
                                        }
                                        else {
                                            info->p+=3;
                                            skip_spaces_and_lf(info);
                                            quote_202=(_Bool)0;
                                        }
                                        right_node_203=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value290=expression_v13(info))));
                                        if(right_value290) { right_value290 = come_decrement_ref_count2(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1083, "struct sNode");
                                        _inf_obj_value9=come_increment_ref_count(((struct sRShiftEqualNode*)(right_value292=sRShiftEqualNode_initialize((struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(right_value291=(struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "19eq.c", 1083, "sRShiftEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_203),quote_202,info))));
                                        _inf_value9->_protocol_obj=_inf_obj_value9;
                                        _inf_value9->finalize=(void*)sRShiftEqualNode_finalize;
                                        _inf_value9->clone=(void*)sRShiftEqualNode_clone;
                                        _inf_value9->compile=(void*)sRShiftEqualNode_compile;
                                        _inf_value9->sline=(void*)sNodeBase_sline;
                                        _inf_value9->sname=(void*)sNodeBase_sname;
                                        _inf_value9->terminated=(void*)sRShiftEqualNode_terminated;
                                        _inf_value9->kind=(void*)sRShiftEqualNode_kind;
                                        __result179__ = __result_obj__ = ((struct sNode*)(right_value297=_inf_value9));
                                        if(right_node_203) { right_node_203 = come_decrement_ref_count2(right_node_203, ((struct sNode*)right_node_203)->finalize, ((struct sNode*)right_node_203)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                        come_call_finalizer3(right_value291,sRShiftEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value292,sRShiftEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value297) { right_value297 = come_decrement_ref_count2(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result179__;
                                        if(right_node_203) { right_node_203 = come_decrement_ref_count2(right_node_203, ((struct sNode*)right_node_203)->finalize, ((struct sNode*)right_node_203)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(_if_conditional297=(*info->p==92&&*(info->p+1)==94&&*(info->p+2)==61)||(*info->p==94&&*(info->p+1)==61),                                        _if_conditional297) {
                                            if(_if_conditional298=*info->p==92,                                            _if_conditional298) {
                                                info->p+=3;
                                                skip_spaces_and_lf(info);
                                                quote_205=(_Bool)1;
                                            }
                                            else {
                                                info->p+=2;
                                                skip_spaces_and_lf(info);
                                                quote_205=(_Bool)0;
                                            }
                                            right_node_206=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=expression_v13(info))));
                                            if(right_value298) { right_value298 = come_decrement_ref_count2(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1100, "struct sNode");
                                            _inf_obj_value10=come_increment_ref_count(((struct sXorEqualNode*)(right_value300=sXorEqualNode_initialize((struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(right_value299=(struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "19eq.c", 1100, "sXorEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_206),quote_205,info))));
                                            _inf_value10->_protocol_obj=_inf_obj_value10;
                                            _inf_value10->finalize=(void*)sXorEqualNode_finalize;
                                            _inf_value10->clone=(void*)sXorEqualNode_clone;
                                            _inf_value10->compile=(void*)sXorEqualNode_compile;
                                            _inf_value10->sline=(void*)sNodeBase_sline;
                                            _inf_value10->sname=(void*)sNodeBase_sname;
                                            _inf_value10->terminated=(void*)sXorEqualNode_terminated;
                                            _inf_value10->kind=(void*)sXorEqualNode_kind;
                                            __result182__ = __result_obj__ = ((struct sNode*)(right_value305=_inf_value10));
                                            if(right_node_206) { right_node_206 = come_decrement_ref_count2(right_node_206, ((struct sNode*)right_node_206)->finalize, ((struct sNode*)right_node_206)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                            come_call_finalizer3(right_value299,sXorEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value300,sXorEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(right_value305) { right_value305 = come_decrement_ref_count2(right_value305, ((struct sNode*)right_value305)->finalize, ((struct sNode*)right_value305)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result182__;
                                            if(right_node_206) { right_node_206 = come_decrement_ref_count2(right_node_206, ((struct sNode*)right_node_206)->finalize, ((struct sNode*)right_node_206)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            if(_if_conditional308=(*info->p==92&&*(info->p+1)==38&&*(info->p+2)==61)||(*info->p==38&&*(info->p+1)==61),                                            _if_conditional308) {
                                                if(_if_conditional309=*info->p==92,                                                _if_conditional309) {
                                                    info->p+=3;
                                                    skip_spaces_and_lf(info);
                                                    quote_208=(_Bool)1;
                                                }
                                                else {
                                                    info->p+=2;
                                                    skip_spaces_and_lf(info);
                                                    quote_208=(_Bool)0;
                                                }
                                                right_node_209=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value306=expression_v13(info))));
                                                if(right_value306) { right_value306 = come_decrement_ref_count2(right_value306, ((struct sNode*)right_value306)->finalize, ((struct sNode*)right_value306)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1117, "struct sNode");
                                                _inf_obj_value11=come_increment_ref_count(((struct sAndEqualNode*)(right_value308=sAndEqualNode_initialize((struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(right_value307=(struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "19eq.c", 1117, "sAndEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_209),quote_208,info))));
                                                _inf_value11->_protocol_obj=_inf_obj_value11;
                                                _inf_value11->finalize=(void*)sAndEqualNode_finalize;
                                                _inf_value11->clone=(void*)sAndEqualNode_clone;
                                                _inf_value11->compile=(void*)sAndEqualNode_compile;
                                                _inf_value11->sline=(void*)sNodeBase_sline;
                                                _inf_value11->sname=(void*)sNodeBase_sname;
                                                _inf_value11->terminated=(void*)sAndEqualNode_terminated;
                                                _inf_value11->kind=(void*)sAndEqualNode_kind;
                                                __result185__ = __result_obj__ = ((struct sNode*)(right_value313=_inf_value11));
                                                if(right_node_209) { right_node_209 = come_decrement_ref_count2(right_node_209, ((struct sNode*)right_node_209)->finalize, ((struct sNode*)right_node_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                come_call_finalizer3(right_value307,sAndEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer3(right_value308,sAndEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(right_value313) { right_value313 = come_decrement_ref_count2(right_value313, ((struct sNode*)right_value313)->finalize, ((struct sNode*)right_value313)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result185__;
                                                if(right_node_209) { right_node_209 = come_decrement_ref_count2(right_node_209, ((struct sNode*)right_node_209)->finalize, ((struct sNode*)right_node_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(_if_conditional319=(*info->p==92&&*(info->p+1)==124&&*(info->p+2)==61)||(*info->p==124&&*(info->p+1)==61),                                                _if_conditional319) {
                                                    if(_if_conditional320=*info->p==92,                                                    _if_conditional320) {
                                                        info->p+=3;
                                                        skip_spaces_and_lf(info);
                                                        quote_211=(_Bool)1;
                                                    }
                                                    else {
                                                        info->p+=2;
                                                        skip_spaces_and_lf(info);
                                                        quote_211=(_Bool)0;
                                                    }
                                                    right_node_212=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value314=expression_v13(info))));
                                                    if(right_value314) { right_value314 = come_decrement_ref_count2(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1134, "struct sNode");
                                                    _inf_obj_value12=come_increment_ref_count(((struct sOrEqualNode*)(right_value316=sOrEqualNode_initialize((struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(right_value315=(struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "19eq.c", 1134, "sOrEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_212),quote_211,info))));
                                                    _inf_value12->_protocol_obj=_inf_obj_value12;
                                                    _inf_value12->finalize=(void*)sOrEqualNode_finalize;
                                                    _inf_value12->clone=(void*)sOrEqualNode_clone;
                                                    _inf_value12->compile=(void*)sOrEqualNode_compile;
                                                    _inf_value12->sline=(void*)sNodeBase_sline;
                                                    _inf_value12->sname=(void*)sNodeBase_sname;
                                                    _inf_value12->terminated=(void*)sOrEqualNode_terminated;
                                                    _inf_value12->kind=(void*)sOrEqualNode_kind;
                                                    __result188__ = __result_obj__ = ((struct sNode*)(right_value321=_inf_value12));
                                                    if(right_node_212) { right_node_212 = come_decrement_ref_count2(right_node_212, ((struct sNode*)right_node_212)->finalize, ((struct sNode*)right_node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    come_call_finalizer3(right_value315,sOrEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(right_value316,sOrEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value321) { right_value321 = come_decrement_ref_count2(right_value321, ((struct sNode*)right_value321)->finalize, ((struct sNode*)right_value321)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result188__;
                                                    if(right_node_212) { right_node_212 = come_decrement_ref_count2(right_node_212, ((struct sNode*)right_node_212)->finalize, ((struct sNode*)right_node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    if(_if_conditional330=(*info->p==92&&*(info->p+1)==61&&*(info->p+2)!=61)||(*info->p==61&&*(info->p+1)!=61),                                                    _if_conditional330) {
                                                        if(_if_conditional331=*info->p==92,                                                        _if_conditional331) {
                                                            info->p+=2;
                                                            skip_spaces_and_lf(info);
                                                            quote_214=(_Bool)1;
                                                        }
                                                        else {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            quote_214=(_Bool)0;
                                                        }
                                                        right_node_215=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value322=expression_v13(info))));
                                                        if(right_value322) { right_value322 = come_decrement_ref_count2(right_value322, ((struct sNode*)right_value322)->finalize, ((struct sNode*)right_value322)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1151, "struct sNode");
                                                        _inf_obj_value13=come_increment_ref_count(((struct sExpEqualNode*)(right_value324=sExpEqualNode_initialize((struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(right_value323=(struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "19eq.c", 1151, "sExpEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_215),quote_214,info))));
                                                        _inf_value13->_protocol_obj=_inf_obj_value13;
                                                        _inf_value13->finalize=(void*)sExpEqualNode_finalize;
                                                        _inf_value13->clone=(void*)sExpEqualNode_clone;
                                                        _inf_value13->compile=(void*)sExpEqualNode_compile;
                                                        _inf_value13->sline=(void*)sNodeBase_sline;
                                                        _inf_value13->sname=(void*)sNodeBase_sname;
                                                        _inf_value13->terminated=(void*)sExpEqualNode_terminated;
                                                        _inf_value13->kind=(void*)sExpEqualNode_kind;
                                                        __result191__ = __result_obj__ = ((struct sNode*)(right_value329=_inf_value13));
                                                        if(right_node_215) { right_node_215 = come_decrement_ref_count2(right_node_215, ((struct sNode*)right_node_215)->finalize, ((struct sNode*)right_node_215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                        come_call_finalizer3(right_value323,sExpEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value324,sExpEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value329) { right_value329 = come_decrement_ref_count2(right_value329, ((struct sNode*)right_value329)->finalize, ((struct sNode*)right_value329)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result191__;
                                                        if(right_node_215) { right_node_215 = come_decrement_ref_count2(right_node_215, ((struct sNode*)right_node_215)->finalize, ((struct sNode*)right_node_215)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    __result192__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result192__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sPlusPlusNode_finalize(struct sPlusPlusNode* self){
void* __result_obj__;
_Bool _if_conditional204;
_Bool _if_conditional205;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional204=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional204) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional205=self!=((void*)0)&&self->mLeft!=((void*)0),            _if_conditional205) {
                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
}

static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self){
void* __result_obj__;
_Bool _if_conditional206;
struct sPlusPlusNode* __result153__;
void* right_value232;
struct sPlusPlusNode* result_181;
_Bool _if_conditional207;
_Bool _if_conditional208;
void* right_value233;
char* __dec_obj101;
_Bool _if_conditional209;
void* right_value234;
struct sNode* __dec_obj102;
_Bool _if_conditional210;
struct sPlusPlusNode* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value232 = (void*)0;
memset(&result_181, 0, sizeof(struct sPlusPlusNode*));
right_value233 = (void*)0;
right_value234 = (void*)0;
            if(_if_conditional206=self==(void*)0,            _if_conditional206) {
                __result153__ = __result_obj__ = (void*)0;
                return __result153__;
            }
            result_181=(struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(right_value232=(struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "sPlusPlusNode_clone", 3, "sPlusPlusNode"))));
            come_call_finalizer3(right_value232,sPlusPlusNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional207=self!=((void*)0),            _if_conditional207) {
                result_181->sline=self->sline;
            }
            if(_if_conditional208=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional208) {
                __dec_obj101=result_181->sname;
                result_181->sname=(char*)come_increment_ref_count(((char*)(right_value233=string_clone(self->sname))));
                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional209=self!=((void*)0)&&self->mLeft!=((void*)0),            _if_conditional209) {
                __dec_obj102=result_181->mLeft;
                result_181->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value234=sNode_clone(self->mLeft))));
                if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value234) { right_value234 = come_decrement_ref_count2(right_value234, ((struct sNode*)right_value234)->finalize, ((struct sNode*)right_value234)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional210=self!=((void*)0),            _if_conditional210) {
                result_181->mQuote=self->mQuote;
            }
            __result154__ = __result_obj__ = result_181;
            come_call_finalizer3(result_181,sPlusPlusNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result154__;
            come_call_finalizer3(result_181,sPlusPlusNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMinusMinusNode_finalize(struct sMinusMinusNode* self){
void* __result_obj__;
_Bool _if_conditional213;
_Bool _if_conditional214;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional213=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional213) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional214=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional214) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
}

static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self){
void* __result_obj__;
_Bool _if_conditional215;
struct sMinusMinusNode* __result156__;
void* right_value238;
struct sMinusMinusNode* result_183;
_Bool _if_conditional216;
_Bool _if_conditional217;
void* right_value239;
char* __dec_obj103;
_Bool _if_conditional218;
void* right_value240;
struct sNode* __dec_obj104;
_Bool _if_conditional219;
struct sMinusMinusNode* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value238 = (void*)0;
memset(&result_183, 0, sizeof(struct sMinusMinusNode*));
right_value239 = (void*)0;
right_value240 = (void*)0;
                if(_if_conditional215=self==(void*)0,                _if_conditional215) {
                    __result156__ = __result_obj__ = (void*)0;
                    return __result156__;
                }
                result_183=(struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(right_value238=(struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "sMinusMinusNode_clone", 3, "sMinusMinusNode"))));
                come_call_finalizer3(right_value238,sMinusMinusNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional216=self!=((void*)0),                _if_conditional216) {
                    result_183->sline=self->sline;
                }
                if(_if_conditional217=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional217) {
                    __dec_obj103=result_183->sname;
                    result_183->sname=(char*)come_increment_ref_count(((char*)(right_value239=string_clone(self->sname))));
                    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional218=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional218) {
                    __dec_obj104=result_183->mLeft;
                    result_183->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value240=sNode_clone(self->mLeft))));
                    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value240) { right_value240 = come_decrement_ref_count2(right_value240, ((struct sNode*)right_value240)->finalize, ((struct sNode*)right_value240)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional219=self!=((void*)0),                _if_conditional219) {
                    result_183->mQuote=self->mQuote;
                }
                __result157__ = __result_obj__ = result_183;
                come_call_finalizer3(result_183,sMinusMinusNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result157__;
                come_call_finalizer3(result_183,sMinusMinusNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sPlusEqualNode_finalize(struct sPlusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional222=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional222) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional223=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional223) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional224=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional224) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional225;
struct sPlusEqualNode* __result159__;
void* right_value245;
struct sPlusEqualNode* result_186;
_Bool _if_conditional226;
_Bool _if_conditional227;
void* right_value246;
char* __dec_obj105;
_Bool _if_conditional228;
void* right_value247;
struct sNode* __dec_obj106;
_Bool _if_conditional229;
void* right_value248;
struct sNode* __dec_obj107;
_Bool _if_conditional230;
struct sPlusEqualNode* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
memset(&result_186, 0, sizeof(struct sPlusEqualNode*));
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
                    if(_if_conditional225=self==(void*)0,                    _if_conditional225) {
                        __result159__ = __result_obj__ = (void*)0;
                        return __result159__;
                    }
                    result_186=(struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(right_value245=(struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "sPlusEqualNode_clone", 3, "sPlusEqualNode"))));
                    come_call_finalizer3(right_value245,sPlusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional226=self!=((void*)0),                    _if_conditional226) {
                        result_186->sline=self->sline;
                    }
                    if(_if_conditional227=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional227) {
                        __dec_obj105=result_186->sname;
                        result_186->sname=(char*)come_increment_ref_count(((char*)(right_value246=string_clone(self->sname))));
                        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional228=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional228) {
                        __dec_obj106=result_186->mLeft;
                        result_186->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value247=sNode_clone(self->mLeft))));
                        if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value247) { right_value247 = come_decrement_ref_count2(right_value247, ((struct sNode*)right_value247)->finalize, ((struct sNode*)right_value247)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional229=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional229) {
                        __dec_obj107=result_186->mRight;
                        result_186->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value248=sNode_clone(self->mRight))));
                        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count2(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value248) { right_value248 = come_decrement_ref_count2(right_value248, ((struct sNode*)right_value248)->finalize, ((struct sNode*)right_value248)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional230=self!=((void*)0),                    _if_conditional230) {
                        result_186->mQuote=self->mQuote;
                    }
                    __result160__ = __result_obj__ = result_186;
                    come_call_finalizer3(result_186,sPlusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result160__;
                    come_call_finalizer3(result_186,sPlusEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMinusEqualNode_finalize(struct sMinusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional233=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional233) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional234=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional234) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional235=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional235) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional236;
struct sMinusEqualNode* __result162__;
void* right_value253;
struct sMinusEqualNode* result_189;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value254;
char* __dec_obj108;
_Bool _if_conditional239;
void* right_value255;
struct sNode* __dec_obj109;
_Bool _if_conditional240;
void* right_value256;
struct sNode* __dec_obj110;
_Bool _if_conditional241;
struct sMinusEqualNode* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value253 = (void*)0;
memset(&result_189, 0, sizeof(struct sMinusEqualNode*));
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
                        if(_if_conditional236=self==(void*)0,                        _if_conditional236) {
                            __result162__ = __result_obj__ = (void*)0;
                            return __result162__;
                        }
                        result_189=(struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(right_value253=(struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "sMinusEqualNode_clone", 3, "sMinusEqualNode"))));
                        come_call_finalizer3(right_value253,sMinusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional237=self!=((void*)0),                        _if_conditional237) {
                            result_189->sline=self->sline;
                        }
                        if(_if_conditional238=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional238) {
                            __dec_obj108=result_189->sname;
                            result_189->sname=(char*)come_increment_ref_count(((char*)(right_value254=string_clone(self->sname))));
                            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional239=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional239) {
                            __dec_obj109=result_189->mLeft;
                            result_189->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value255=sNode_clone(self->mLeft))));
                            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value255) { right_value255 = come_decrement_ref_count2(right_value255, ((struct sNode*)right_value255)->finalize, ((struct sNode*)right_value255)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional240=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional240) {
                            __dec_obj110=result_189->mRight;
                            result_189->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value256=sNode_clone(self->mRight))));
                            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value256) { right_value256 = come_decrement_ref_count2(right_value256, ((struct sNode*)right_value256)->finalize, ((struct sNode*)right_value256)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional241=self!=((void*)0),                        _if_conditional241) {
                            result_189->mQuote=self->mQuote;
                        }
                        __result163__ = __result_obj__ = result_189;
                        come_call_finalizer3(result_189,sMinusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result163__;
                        come_call_finalizer3(result_189,sMinusEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMultEqualNode_finalize(struct sMultEqualNode* self){
void* __result_obj__;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional244=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional244) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional245=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional245) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional246=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional246) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self){
void* __result_obj__;
_Bool _if_conditional247;
struct sMultEqualNode* __result165__;
void* right_value261;
struct sMultEqualNode* result_192;
_Bool _if_conditional248;
_Bool _if_conditional249;
void* right_value262;
char* __dec_obj111;
_Bool _if_conditional250;
void* right_value263;
struct sNode* __dec_obj112;
_Bool _if_conditional251;
void* right_value264;
struct sNode* __dec_obj113;
_Bool _if_conditional252;
struct sMultEqualNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value261 = (void*)0;
memset(&result_192, 0, sizeof(struct sMultEqualNode*));
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
                            if(_if_conditional247=self==(void*)0,                            _if_conditional247) {
                                __result165__ = __result_obj__ = (void*)0;
                                return __result165__;
                            }
                            result_192=(struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(right_value261=(struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "sMultEqualNode_clone", 3, "sMultEqualNode"))));
                            come_call_finalizer3(right_value261,sMultEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional248=self!=((void*)0),                            _if_conditional248) {
                                result_192->sline=self->sline;
                            }
                            if(_if_conditional249=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional249) {
                                __dec_obj111=result_192->sname;
                                result_192->sname=(char*)come_increment_ref_count(((char*)(right_value262=string_clone(self->sname))));
                                __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional250=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional250) {
                                __dec_obj112=result_192->mLeft;
                                result_192->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value263=sNode_clone(self->mLeft))));
                                if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value263) { right_value263 = come_decrement_ref_count2(right_value263, ((struct sNode*)right_value263)->finalize, ((struct sNode*)right_value263)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional251=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional251) {
                                __dec_obj113=result_192->mRight;
                                result_192->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value264=sNode_clone(self->mRight))));
                                if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value264) { right_value264 = come_decrement_ref_count2(right_value264, ((struct sNode*)right_value264)->finalize, ((struct sNode*)right_value264)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional252=self!=((void*)0),                            _if_conditional252) {
                                result_192->mQuote=self->mQuote;
                            }
                            __result166__ = __result_obj__ = result_192;
                            come_call_finalizer3(result_192,sMultEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result166__;
                            come_call_finalizer3(result_192,sMultEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDivEqualNode_finalize(struct sDivEqualNode* self){
void* __result_obj__;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional255=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional255) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional256=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional256) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional257=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional257) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self){
void* __result_obj__;
_Bool _if_conditional258;
struct sDivEqualNode* __result168__;
void* right_value269;
struct sDivEqualNode* result_195;
_Bool _if_conditional259;
_Bool _if_conditional260;
void* right_value270;
char* __dec_obj114;
_Bool _if_conditional261;
void* right_value271;
struct sNode* __dec_obj115;
_Bool _if_conditional262;
void* right_value272;
struct sNode* __dec_obj116;
_Bool _if_conditional263;
struct sDivEqualNode* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
right_value269 = (void*)0;
memset(&result_195, 0, sizeof(struct sDivEqualNode*));
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
                                if(_if_conditional258=self==(void*)0,                                _if_conditional258) {
                                    __result168__ = __result_obj__ = (void*)0;
                                    return __result168__;
                                }
                                result_195=(struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(right_value269=(struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "sDivEqualNode_clone", 3, "sDivEqualNode"))));
                                come_call_finalizer3(right_value269,sDivEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional259=self!=((void*)0),                                _if_conditional259) {
                                    result_195->sline=self->sline;
                                }
                                if(_if_conditional260=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional260) {
                                    __dec_obj114=result_195->sname;
                                    result_195->sname=(char*)come_increment_ref_count(((char*)(right_value270=string_clone(self->sname))));
                                    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional261=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional261) {
                                    __dec_obj115=result_195->mLeft;
                                    result_195->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value271=sNode_clone(self->mLeft))));
                                    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value271) { right_value271 = come_decrement_ref_count2(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional262=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional262) {
                                    __dec_obj116=result_195->mRight;
                                    result_195->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value272=sNode_clone(self->mRight))));
                                    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value272) { right_value272 = come_decrement_ref_count2(right_value272, ((struct sNode*)right_value272)->finalize, ((struct sNode*)right_value272)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional263=self!=((void*)0),                                _if_conditional263) {
                                    result_195->mQuote=self->mQuote;
                                }
                                __result169__ = __result_obj__ = result_195;
                                come_call_finalizer3(result_195,sDivEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result169__;
                                come_call_finalizer3(result_195,sDivEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sModEqualNode_finalize(struct sModEqualNode* self){
void* __result_obj__;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional266=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional266) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional267=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional267) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional268=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional268) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self){
void* __result_obj__;
_Bool _if_conditional269;
struct sModEqualNode* __result171__;
void* right_value277;
struct sModEqualNode* result_198;
_Bool _if_conditional270;
_Bool _if_conditional271;
void* right_value278;
char* __dec_obj117;
_Bool _if_conditional272;
void* right_value279;
struct sNode* __dec_obj118;
_Bool _if_conditional273;
void* right_value280;
struct sNode* __dec_obj119;
_Bool _if_conditional274;
struct sModEqualNode* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value277 = (void*)0;
memset(&result_198, 0, sizeof(struct sModEqualNode*));
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
                                    if(_if_conditional269=self==(void*)0,                                    _if_conditional269) {
                                        __result171__ = __result_obj__ = (void*)0;
                                        return __result171__;
                                    }
                                    result_198=(struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(right_value277=(struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "sModEqualNode_clone", 3, "sModEqualNode"))));
                                    come_call_finalizer3(right_value277,sModEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional270=self!=((void*)0),                                    _if_conditional270) {
                                        result_198->sline=self->sline;
                                    }
                                    if(_if_conditional271=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional271) {
                                        __dec_obj117=result_198->sname;
                                        result_198->sname=(char*)come_increment_ref_count(((char*)(right_value278=string_clone(self->sname))));
                                        __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional272=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional272) {
                                        __dec_obj118=result_198->mLeft;
                                        result_198->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value279=sNode_clone(self->mLeft))));
                                        if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value279) { right_value279 = come_decrement_ref_count2(right_value279, ((struct sNode*)right_value279)->finalize, ((struct sNode*)right_value279)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional273=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional273) {
                                        __dec_obj119=result_198->mRight;
                                        result_198->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value280=sNode_clone(self->mRight))));
                                        if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value280) { right_value280 = come_decrement_ref_count2(right_value280, ((struct sNode*)right_value280)->finalize, ((struct sNode*)right_value280)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional274=self!=((void*)0),                                    _if_conditional274) {
                                        result_198->mQuote=self->mQuote;
                                    }
                                    __result172__ = __result_obj__ = result_198;
                                    come_call_finalizer3(result_198,sModEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result172__;
                                    come_call_finalizer3(result_198,sModEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLShifEqualNode_finalize(struct sLShifEqualNode* self){
void* __result_obj__;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool _if_conditional279;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional277=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional277) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional278=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional278) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional279=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional279) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
}

static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self){
void* __result_obj__;
_Bool _if_conditional280;
struct sLShifEqualNode* __result174__;
void* right_value285;
struct sLShifEqualNode* result_201;
_Bool _if_conditional281;
_Bool _if_conditional282;
void* right_value286;
char* __dec_obj120;
_Bool _if_conditional283;
void* right_value287;
struct sNode* __dec_obj121;
_Bool _if_conditional284;
void* right_value288;
struct sNode* __dec_obj122;
_Bool _if_conditional285;
struct sLShifEqualNode* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value285 = (void*)0;
memset(&result_201, 0, sizeof(struct sLShifEqualNode*));
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
                                        if(_if_conditional280=self==(void*)0,                                        _if_conditional280) {
                                            __result174__ = __result_obj__ = (void*)0;
                                            return __result174__;
                                        }
                                        result_201=(struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(right_value285=(struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "sLShifEqualNode_clone", 3, "sLShifEqualNode"))));
                                        come_call_finalizer3(right_value285,sLShifEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional281=self!=((void*)0),                                        _if_conditional281) {
                                            result_201->sline=self->sline;
                                        }
                                        if(_if_conditional282=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional282) {
                                            __dec_obj120=result_201->sname;
                                            result_201->sname=(char*)come_increment_ref_count(((char*)(right_value286=string_clone(self->sname))));
                                            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional283=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional283) {
                                            __dec_obj121=result_201->mLeft;
                                            result_201->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=sNode_clone(self->mLeft))));
                                            if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value287) { right_value287 = come_decrement_ref_count2(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional284=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional284) {
                                            __dec_obj122=result_201->mRight;
                                            result_201->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value288=sNode_clone(self->mRight))));
                                            if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count2(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value288) { right_value288 = come_decrement_ref_count2(right_value288, ((struct sNode*)right_value288)->finalize, ((struct sNode*)right_value288)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional285=self!=((void*)0),                                        _if_conditional285) {
                                            result_201->mQuote=self->mQuote;
                                        }
                                        __result175__ = __result_obj__ = result_201;
                                        come_call_finalizer3(result_201,sLShifEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result175__;
                                        come_call_finalizer3(result_201,sLShifEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self){
void* __result_obj__;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional288=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional288) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional289=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional289) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional290=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional290) {
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
}

static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self){
void* __result_obj__;
_Bool _if_conditional291;
struct sRShiftEqualNode* __result177__;
void* right_value293;
struct sRShiftEqualNode* result_204;
_Bool _if_conditional292;
_Bool _if_conditional293;
void* right_value294;
char* __dec_obj123;
_Bool _if_conditional294;
void* right_value295;
struct sNode* __dec_obj124;
_Bool _if_conditional295;
void* right_value296;
struct sNode* __dec_obj125;
_Bool _if_conditional296;
struct sRShiftEqualNode* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
right_value293 = (void*)0;
memset(&result_204, 0, sizeof(struct sRShiftEqualNode*));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
                                            if(_if_conditional291=self==(void*)0,                                            _if_conditional291) {
                                                __result177__ = __result_obj__ = (void*)0;
                                                return __result177__;
                                            }
                                            result_204=(struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(right_value293=(struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "sRShiftEqualNode_clone", 3, "sRShiftEqualNode"))));
                                            come_call_finalizer3(right_value293,sRShiftEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional292=self!=((void*)0),                                            _if_conditional292) {
                                                result_204->sline=self->sline;
                                            }
                                            if(_if_conditional293=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional293) {
                                                __dec_obj123=result_204->sname;
                                                result_204->sname=(char*)come_increment_ref_count(((char*)(right_value294=string_clone(self->sname))));
                                                __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            if(_if_conditional294=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional294) {
                                                __dec_obj124=result_204->mLeft;
                                                result_204->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value295=sNode_clone(self->mLeft))));
                                                if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value295) { right_value295 = come_decrement_ref_count2(right_value295, ((struct sNode*)right_value295)->finalize, ((struct sNode*)right_value295)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional295=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional295) {
                                                __dec_obj125=result_204->mRight;
                                                result_204->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value296=sNode_clone(self->mRight))));
                                                if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value296) { right_value296 = come_decrement_ref_count2(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional296=self!=((void*)0),                                            _if_conditional296) {
                                                result_204->mQuote=self->mQuote;
                                            }
                                            __result178__ = __result_obj__ = result_204;
                                            come_call_finalizer3(result_204,sRShiftEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result178__;
                                            come_call_finalizer3(result_204,sRShiftEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sXorEqualNode_finalize(struct sXorEqualNode* self){
void* __result_obj__;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional299=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional299) {
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional300=self!=((void*)0)&&self->mLeft!=((void*)0),                                                _if_conditional300) {
                                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                if(_if_conditional301=self!=((void*)0)&&self->mRight!=((void*)0),                                                _if_conditional301) {
                                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
}

static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self){
void* __result_obj__;
_Bool _if_conditional302;
struct sXorEqualNode* __result180__;
void* right_value301;
struct sXorEqualNode* result_207;
_Bool _if_conditional303;
_Bool _if_conditional304;
void* right_value302;
char* __dec_obj126;
_Bool _if_conditional305;
void* right_value303;
struct sNode* __dec_obj127;
_Bool _if_conditional306;
void* right_value304;
struct sNode* __dec_obj128;
_Bool _if_conditional307;
struct sXorEqualNode* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value301 = (void*)0;
memset(&result_207, 0, sizeof(struct sXorEqualNode*));
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
                                                if(_if_conditional302=self==(void*)0,                                                _if_conditional302) {
                                                    __result180__ = __result_obj__ = (void*)0;
                                                    return __result180__;
                                                }
                                                result_207=(struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(right_value301=(struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "sXorEqualNode_clone", 3, "sXorEqualNode"))));
                                                come_call_finalizer3(right_value301,sXorEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional303=self!=((void*)0),                                                _if_conditional303) {
                                                    result_207->sline=self->sline;
                                                }
                                                if(_if_conditional304=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional304) {
                                                    __dec_obj126=result_207->sname;
                                                    result_207->sname=(char*)come_increment_ref_count(((char*)(right_value302=string_clone(self->sname))));
                                                    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                if(_if_conditional305=self!=((void*)0)&&self->mLeft!=((void*)0),                                                _if_conditional305) {
                                                    __dec_obj127=result_207->mLeft;
                                                    result_207->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value303=sNode_clone(self->mLeft))));
                                                    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value303) { right_value303 = come_decrement_ref_count2(right_value303, ((struct sNode*)right_value303)->finalize, ((struct sNode*)right_value303)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                if(_if_conditional306=self!=((void*)0)&&self->mRight!=((void*)0),                                                _if_conditional306) {
                                                    __dec_obj128=result_207->mRight;
                                                    result_207->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value304=sNode_clone(self->mRight))));
                                                    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value304) { right_value304 = come_decrement_ref_count2(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                if(_if_conditional307=self!=((void*)0),                                                _if_conditional307) {
                                                    result_207->mQuote=self->mQuote;
                                                }
                                                __result181__ = __result_obj__ = result_207;
                                                come_call_finalizer3(result_207,sXorEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result181__;
                                                come_call_finalizer3(result_207,sXorEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAndEqualNode_finalize(struct sAndEqualNode* self){
void* __result_obj__;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional310=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional310) {
                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional311=self!=((void*)0)&&self->mLeft!=((void*)0),                                                    _if_conditional311) {
                                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    if(_if_conditional312=self!=((void*)0)&&self->mRight!=((void*)0),                                                    _if_conditional312) {
                                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
}

static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self){
void* __result_obj__;
_Bool _if_conditional313;
struct sAndEqualNode* __result183__;
void* right_value309;
struct sAndEqualNode* result_210;
_Bool _if_conditional314;
_Bool _if_conditional315;
void* right_value310;
char* __dec_obj129;
_Bool _if_conditional316;
void* right_value311;
struct sNode* __dec_obj130;
_Bool _if_conditional317;
void* right_value312;
struct sNode* __dec_obj131;
_Bool _if_conditional318;
struct sAndEqualNode* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value309 = (void*)0;
memset(&result_210, 0, sizeof(struct sAndEqualNode*));
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
                                                    if(_if_conditional313=self==(void*)0,                                                    _if_conditional313) {
                                                        __result183__ = __result_obj__ = (void*)0;
                                                        return __result183__;
                                                    }
                                                    result_210=(struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(right_value309=(struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "sAndEqualNode_clone", 3, "sAndEqualNode"))));
                                                    come_call_finalizer3(right_value309,sAndEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(_if_conditional314=self!=((void*)0),                                                    _if_conditional314) {
                                                        result_210->sline=self->sline;
                                                    }
                                                    if(_if_conditional315=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional315) {
                                                        __dec_obj129=result_210->sname;
                                                        result_210->sname=(char*)come_increment_ref_count(((char*)(right_value310=string_clone(self->sname))));
                                                        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    if(_if_conditional316=self!=((void*)0)&&self->mLeft!=((void*)0),                                                    _if_conditional316) {
                                                        __dec_obj130=result_210->mLeft;
                                                        result_210->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value311=sNode_clone(self->mLeft))));
                                                        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value311) { right_value311 = come_decrement_ref_count2(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    if(_if_conditional317=self!=((void*)0)&&self->mRight!=((void*)0),                                                    _if_conditional317) {
                                                        __dec_obj131=result_210->mRight;
                                                        result_210->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value312=sNode_clone(self->mRight))));
                                                        if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value312) { right_value312 = come_decrement_ref_count2(right_value312, ((struct sNode*)right_value312)->finalize, ((struct sNode*)right_value312)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    if(_if_conditional318=self!=((void*)0),                                                    _if_conditional318) {
                                                        result_210->mQuote=self->mQuote;
                                                    }
                                                    __result184__ = __result_obj__ = result_210;
                                                    come_call_finalizer3(result_210,sAndEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result184__;
                                                    come_call_finalizer3(result_210,sAndEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sOrEqualNode_finalize(struct sOrEqualNode* self){
void* __result_obj__;
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional321=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional321) {
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional322=self!=((void*)0)&&self->mLeft!=((void*)0),                                                        _if_conditional322) {
                                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        if(_if_conditional323=self!=((void*)0)&&self->mRight!=((void*)0),                                                        _if_conditional323) {
                                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self){
void* __result_obj__;
_Bool _if_conditional324;
struct sOrEqualNode* __result186__;
void* right_value317;
struct sOrEqualNode* result_213;
_Bool _if_conditional325;
_Bool _if_conditional326;
void* right_value318;
char* __dec_obj132;
_Bool _if_conditional327;
void* right_value319;
struct sNode* __dec_obj133;
_Bool _if_conditional328;
void* right_value320;
struct sNode* __dec_obj134;
_Bool _if_conditional329;
struct sOrEqualNode* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
right_value317 = (void*)0;
memset(&result_213, 0, sizeof(struct sOrEqualNode*));
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
                                                        if(_if_conditional324=self==(void*)0,                                                        _if_conditional324) {
                                                            __result186__ = __result_obj__ = (void*)0;
                                                            return __result186__;
                                                        }
                                                        result_213=(struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(right_value317=(struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "sOrEqualNode_clone", 3, "sOrEqualNode"))));
                                                        come_call_finalizer3(right_value317,sOrEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional325=self!=((void*)0),                                                        _if_conditional325) {
                                                            result_213->sline=self->sline;
                                                        }
                                                        if(_if_conditional326=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional326) {
                                                            __dec_obj132=result_213->sname;
                                                            result_213->sname=(char*)come_increment_ref_count(((char*)(right_value318=string_clone(self->sname))));
                                                            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(_if_conditional327=self!=((void*)0)&&self->mLeft!=((void*)0),                                                        _if_conditional327) {
                                                            __dec_obj133=result_213->mLeft;
                                                            result_213->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value319=sNode_clone(self->mLeft))));
                                                            if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value319) { right_value319 = come_decrement_ref_count2(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        if(_if_conditional328=self!=((void*)0)&&self->mRight!=((void*)0),                                                        _if_conditional328) {
                                                            __dec_obj134=result_213->mRight;
                                                            result_213->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value320=sNode_clone(self->mRight))));
                                                            if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value320) { right_value320 = come_decrement_ref_count2(right_value320, ((struct sNode*)right_value320)->finalize, ((struct sNode*)right_value320)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        if(_if_conditional329=self!=((void*)0),                                                        _if_conditional329) {
                                                            result_213->mQuote=self->mQuote;
                                                        }
                                                        __result187__ = __result_obj__ = result_213;
                                                        come_call_finalizer3(result_213,sOrEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result187__;
                                                        come_call_finalizer3(result_213,sOrEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sExpEqualNode_finalize(struct sExpEqualNode* self){
void* __result_obj__;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional332=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional332) {
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                            if(_if_conditional333=self!=((void*)0)&&self->mLeft!=((void*)0),                                                            _if_conditional333) {
                                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            if(_if_conditional334=self!=((void*)0)&&self->mRight!=((void*)0),                                                            _if_conditional334) {
                                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
}

static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self){
void* __result_obj__;
_Bool _if_conditional335;
struct sExpEqualNode* __result189__;
void* right_value325;
struct sExpEqualNode* result_216;
_Bool _if_conditional336;
_Bool _if_conditional337;
void* right_value326;
char* __dec_obj135;
_Bool _if_conditional338;
void* right_value327;
struct sNode* __dec_obj136;
_Bool _if_conditional339;
void* right_value328;
struct sNode* __dec_obj137;
_Bool _if_conditional340;
struct sExpEqualNode* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value325 = (void*)0;
memset(&result_216, 0, sizeof(struct sExpEqualNode*));
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
                                                            if(_if_conditional335=self==(void*)0,                                                            _if_conditional335) {
                                                                __result189__ = __result_obj__ = (void*)0;
                                                                return __result189__;
                                                            }
                                                            result_216=(struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(right_value325=(struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "sExpEqualNode_clone", 3, "sExpEqualNode"))));
                                                            come_call_finalizer3(right_value325,sExpEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional336=self!=((void*)0),                                                            _if_conditional336) {
                                                                result_216->sline=self->sline;
                                                            }
                                                            if(_if_conditional337=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional337) {
                                                                __dec_obj135=result_216->sname;
                                                                result_216->sname=(char*)come_increment_ref_count(((char*)(right_value326=string_clone(self->sname))));
                                                                __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            if(_if_conditional338=self!=((void*)0)&&self->mLeft!=((void*)0),                                                            _if_conditional338) {
                                                                __dec_obj136=result_216->mLeft;
                                                                result_216->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value327=sNode_clone(self->mLeft))));
                                                                if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value327) { right_value327 = come_decrement_ref_count2(right_value327, ((struct sNode*)right_value327)->finalize, ((struct sNode*)right_value327)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            if(_if_conditional339=self!=((void*)0)&&self->mRight!=((void*)0),                                                            _if_conditional339) {
                                                                __dec_obj137=result_216->mRight;
                                                                result_216->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=sNode_clone(self->mRight))));
                                                                if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value328) { right_value328 = come_decrement_ref_count2(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            if(_if_conditional340=self!=((void*)0),                                                            _if_conditional340) {
                                                                result_216->mQuote=self->mQuote;
                                                            }
                                                            __result190__ = __result_obj__ = result_216;
                                                            come_call_finalizer3(result_216,sExpEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                                            return __result190__;
                                                            come_call_finalizer3(result_216,sExpEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

