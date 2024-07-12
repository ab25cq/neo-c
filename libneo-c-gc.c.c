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
typedef long int ptrdiff_t;
struct anonymous_typeX21
{
    long long __max_align_ll;
    long double __max_align_ld;
};
typedef struct anonymous_typeX21 max_align_t;
typedef void* GC_PTR;
typedef unsigned long int GC_word;
typedef long GC_signed_word;
extern unsigned long int GC_gc_no;
typedef void* (*GC_oom_func)(long int);
extern void* (*GC_oom_fn)(long int);
typedef void (*GC_on_heap_resize_proc)(unsigned long int);
extern void (*GC_on_heap_resize)(unsigned long int);
enum anonymous_typeY22 { GC_EVENT_START
,GC_EVENT_MARK_START
,GC_EVENT_MARK_END
,GC_EVENT_RECLAIM_START
,GC_EVENT_RECLAIM_END
,GC_EVENT_END
,GC_EVENT_PRE_STOP_WORLD
,GC_EVENT_POST_STOP_WORLD
,GC_EVENT_PRE_START_WORLD
,GC_EVENT_POST_START_WORLD
,GC_EVENT_THREAD_SUSPENDED
,GC_EVENT_THREAD_UNSUSPENDED
};
typedef enum anonymous_typeY22 GC_EventType;
typedef void (*GC_on_collection_event_proc)(enum anonymous_typeY22);
extern int GC_find_leak;
extern int GC_all_interior_pointers;
extern int GC_finalize_on_demand;
extern int GC_java_finalization;
typedef void (*GC_finalizer_notifier_proc)();
extern void (*GC_finalizer_notifier)();
extern int GC_dont_gc;
extern int GC_dont_expand;
extern int GC_use_entire_heap;
extern int GC_full_freq;
extern unsigned long int GC_non_gc_bytes;
extern int GC_no_dls;
extern unsigned long int GC_free_space_divisor;
extern unsigned long int GC_max_retries;
extern char* GC_stackbottom;
extern int GC_dont_precollect;
extern unsigned long int GC_time_limit;
struct GC_timeval_s
{
    unsigned long int tv_ms;
    unsigned long int tv_nsec;
};
typedef int (*GC_stop_func)();
struct GC_prof_stats_s
{
    unsigned long int heapsize_full;
    unsigned long int free_bytes_full;
    unsigned long int unmapped_bytes;
    unsigned long int bytes_allocd_since_gc;
    unsigned long int allocd_bytes_before_gc;
    unsigned long int non_gc_bytes;
    unsigned long int gc_no;
    unsigned long int markers_m1;
    unsigned long int bytes_reclaimed_since_gc;
    unsigned long int reclaimed_bytes_before_gc;
    unsigned long int expl_freed_bytes_since_gc;
    unsigned long int obtained_from_os_bytes;
};
typedef void (*GC_finalization_proc)(void*,void*);
enum anonymous_typeY23 { GC_TOGGLE_REF_DROP
,GC_TOGGLE_REF_STRONG
,GC_TOGGLE_REF_WEAK
};
typedef enum anonymous_typeY23 GC_ToggleRefStatus;
typedef enum anonymous_typeY23 (*GC_toggleref_func)(void*);
typedef void (*GC_await_finalize_proc)(void*);
typedef void (*GC_warn_proc)(char*,unsigned long int);
typedef void (*GC_abort_func)(const char*);
typedef unsigned long int GC_hidden_pointer;
typedef void* (*GC_fn_type)(void*);
struct GC_stack_base
{
    void* mem_base;
};
typedef void* (*GC_stack_base_func)(struct GC_stack_base*,void*);
extern void (*GC_same_obj_print_proc)(void*,void*);
extern void (*GC_is_valid_displacement_print_proc)(void*);
extern void (*GC_is_visible_print_proc)(void*);
typedef int (*GC_has_static_roots_func)(const char*,void*,long int);
char* gComeStackFrameSName[16];
int gComeStackFrameSLine[16];
int gComeStackFrameID[1024];
int gNumComeStackFrame=0;
char* gComeStackFrameBuffer=((void*)0);
void* gComeResultObject=((void*)0);
static _Bool gComeMallocLib=(_Bool)0;
static _Bool gComeDebugLib=(_Bool)0;
_Bool gComeGCLib=(_Bool)0;
struct sMemHeaderTiny
{
    long int size;
    int allocated;
    char* class_name;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
};
struct sMemHeader
{
    long int size;
    int allocated;
    char* class_name;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* sname[16];
    int sline[16];
    int id[16];
};
struct sMemHeader* gAllocMem;

// header function
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

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);

static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size);
static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size);
static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size);
static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size);
static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size);
static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short short item);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
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

char* dirname(char* __path);

char* __xpg_basename(char* __path);

unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX92)(long int));

void* (*GC_get_oom_fn())(long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX94)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX96)(enum anonymous_typeY22));

void (*GC_get_on_collection_event())(enum anonymous_typeY22);

void GC_set_find_leak(int anonymous_var_nameX97);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX98);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX99);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX100);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX101)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX102);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX103);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX104);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX105);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX106);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX107);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX108);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX109);

unsigned long int GC_get_time_limit();

void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX110);

struct GC_timeval_s GC_get_time_limit_tv();

void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX111);

unsigned long int GC_get_allocd_bytes_per_finalizer();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX112);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(long int anonymous_var_nameX113);

long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX114);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX115);

int GC_get_max_prior_attempts();

void GC_set_disable_automatic_collection(int anonymous_var_nameX116);

int GC_get_disable_automatic_collection();

void GC_set_handle_fork(int anonymous_var_nameX117);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(long int anonymous_var_nameX118);

void* GC_malloc_atomic(long int anonymous_var_nameX119);

char* GC_strdup(const char* anonymous_var_nameX120);

char* GC_strndup(const char* anonymous_var_nameX121, long int anonymous_var_nameX122);

void* GC_malloc_uncollectable(long int anonymous_var_nameX123);

void* GC_malloc_stubborn(long int anonymous_var_nameX124);

void* GC_memalign(long int anonymous_var_nameX125, long int anonymous_var_nameX126);

int GC_posix_memalign(void** anonymous_var_nameX127, long int anonymous_var_nameX128, long int anonymous_var_nameX129);

void GC_free(void* anonymous_var_nameX130);

void GC_change_stubborn(const void* anonymous_var_nameX131);

void GC_end_stubborn_change(const void* anonymous_var_nameX132);

void* GC_base(void* anonymous_var_nameX133);

int GC_is_heap_ptr(const void* anonymous_var_nameX134);

long int GC_size(const void* anonymous_var_nameX135);

void* GC_realloc(void* anonymous_var_nameX136, long int anonymous_var_nameX137);

int GC_expand_hp(long int anonymous_var_nameX138);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX139);

void GC_exclude_static_roots(void* anonymous_var_nameX140, void* anonymous_var_nameX141);

void GC_clear_exclusion_table();

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX142, void* anonymous_var_nameX143);

void GC_remove_roots(void* anonymous_var_nameX144, void* anonymous_var_nameX145);

void GC_register_displacement(long int anonymous_var_nameX146);

void GC_debug_register_displacement(long int anonymous_var_nameX147);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX148)());

void GC_set_stop_func(int (*anonymous_var_nameX149)());

int (*GC_get_stop_func())();

long int GC_get_heap_size();

long int GC_get_free_bytes();

long int GC_get_unmapped_bytes();

long int GC_get_bytes_since_gc();

long int GC_get_expl_freed_bytes_since_gc();

long int GC_get_total_bytes();

long int GC_get_obtained_from_os_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX150, unsigned long int* anonymous_var_nameX151, unsigned long int* anonymous_var_nameX152, unsigned long int* anonymous_var_nameX153, unsigned long int* anonymous_var_nameX154);

long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX155, long int anonymous_var_nameX156);

long int GC_get_size_map_at(int i);

long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX157);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

void GC_start_incremental_collection();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(long int anonymous_var_nameX158);

void* GC_malloc_atomic_ignore_off_page(long int anonymous_var_nameX159);

void* GC_malloc_atomic_uncollectable(long int anonymous_var_nameX160);

void* GC_debug_malloc_atomic_uncollectable(long int anonymous_var_nameX161, const char* s, int i);

void* GC_debug_malloc(long int anonymous_var_nameX162, const char* s, int i);

void* GC_debug_malloc_atomic(long int anonymous_var_nameX163, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX164, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX165, long int anonymous_var_nameX166, const char* s, int i);

void* GC_debug_malloc_uncollectable(long int anonymous_var_nameX167, const char* s, int i);

void* GC_debug_malloc_stubborn(long int anonymous_var_nameX168, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(long int anonymous_var_nameX169, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(long int anonymous_var_nameX170, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX171);

void* GC_debug_realloc(void* anonymous_var_nameX172, long int anonymous_var_nameX173, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX174);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX175);

void* GC_debug_malloc_replacement(long int anonymous_var_nameX176);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX177, long int anonymous_var_nameX178);

void GC_register_finalizer(void* anonymous_var_nameX181, void (*anonymous_var_nameX182)(void*,void*), void* anonymous_var_nameX183, void (*anonymous_var_nameX184)(void*,void*), void** anonymous_var_nameX185);

void GC_debug_register_finalizer(void* anonymous_var_nameX186, void (*anonymous_var_nameX187)(void*,void*), void* anonymous_var_nameX188, void (*anonymous_var_nameX189)(void*,void*), void** anonymous_var_nameX190);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX191, void (*anonymous_var_nameX192)(void*,void*), void* anonymous_var_nameX193, void (*anonymous_var_nameX194)(void*,void*), void** anonymous_var_nameX195);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX196, void (*anonymous_var_nameX197)(void*,void*), void* anonymous_var_nameX198, void (*anonymous_var_nameX199)(void*,void*), void** anonymous_var_nameX200);

void GC_register_finalizer_no_order(void* anonymous_var_nameX201, void (*anonymous_var_nameX202)(void*,void*), void* anonymous_var_nameX203, void (*anonymous_var_nameX204)(void*,void*), void** anonymous_var_nameX205);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX206, void (*anonymous_var_nameX207)(void*,void*), void* anonymous_var_nameX208, void (*anonymous_var_nameX209)(void*,void*), void** anonymous_var_nameX210);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX211, void (*anonymous_var_nameX212)(void*,void*), void* anonymous_var_nameX213, void (*anonymous_var_nameX214)(void*,void*), void** anonymous_var_nameX215);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX216, void (*anonymous_var_nameX217)(void*,void*), void* anonymous_var_nameX218, void (*anonymous_var_nameX219)(void*,void*), void** anonymous_var_nameX220);

int GC_register_disappearing_link(void** anonymous_var_nameX221);

int GC_general_register_disappearing_link(void** anonymous_var_nameX222, const void* anonymous_var_nameX223);

int GC_move_disappearing_link(void** anonymous_var_nameX224, void** anonymous_var_nameX225);

int GC_unregister_disappearing_link(void** anonymous_var_nameX226);

int GC_register_long_link(void** anonymous_var_nameX227, const void* anonymous_var_nameX228);

int GC_move_long_link(void** anonymous_var_nameX229, void** anonymous_var_nameX230);

int GC_unregister_long_link(void** anonymous_var_nameX231);

void GC_set_toggleref_func(enum anonymous_typeY23 (*anonymous_var_nameX233)(void*));

enum anonymous_typeY23 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX234, int anonymous_var_nameX235);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX237)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX238);

void GC_set_warn_proc(void (*anonymous_var_nameX241)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX242, unsigned long int anonymous_var_nameX243);

void GC_set_log_fd(int anonymous_var_nameX244);

void GC_set_abort_func(void (*anonymous_var_nameX246)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX248)(void*), void* anonymous_var_nameX249);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX252)(struct GC_stack_base*,void*), void* anonymous_var_nameX253);

void GC_start_mark_threads();

void* GC_do_blocking(void* (*anonymous_var_nameX254)(void*), void* anonymous_var_nameX255);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX256)(void*), void* anonymous_var_nameX257);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX258);

void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX259);

void GC_set_stackbottom(void* anonymous_var_nameX260, const struct GC_stack_base* anonymous_var_nameX261);

void* GC_same_obj(void* anonymous_var_nameX262, void* anonymous_var_nameX263);

void* GC_pre_incr(void** anonymous_var_nameX264, long int anonymous_var_nameX265);

void* GC_post_incr(void** anonymous_var_nameX266, long int anonymous_var_nameX267);

void* GC_is_visible(void* anonymous_var_nameX268);

void* GC_is_valid_displacement(void* anonymous_var_nameX269);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX270);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX271, const void* anonymous_var_nameX272);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX273, const void* anonymous_var_nameX274);

void* GC_malloc_many(long int anonymous_var_nameX295);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX299)(const char*,void*,long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX300);

int GC_get_force_unmap_on_gcollect();

void GC_win32_free_heap();

void come_push_stackframe(char* sname, int sline, int id);

void come_pop_stackframe();

void come_save_stackframe(char* sname, int sline);

void exception_stackframe();

void stackframe();

char* come_get_stackframe();

void* come_null_check(void* mem, char* sname, int sline, int id);

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));

_Bool bool_value(_Bool self);

int int_catch(int self, void* parent, void (*block)(void*));

int int_expect(int self, void* parent, void (*block)(void*));

int int_value(int self);

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));

void xassert(char* msg, _Bool test);

void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline, char* class_name);
static void come_free_mem_of_heap_pool(char* mem);
char* come_dynamic_typeof(void* mem);

void* come_calloc(long int count, long int size, char* sname, int sline, char* class_name);

void come_free_object(void* mem);

void come_free(void* mem);

void* come_memdup(void* block, char* sname, int sline, char* class_name);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

char* __builtin_string(char* str);

_Bool come_is_contained_element(void** array, int len, void* element);

struct buffer* buffer_initialize(struct buffer* self);

void buffer_finalize(struct buffer* self);

void buffer_force_finalize(struct buffer* self);

struct buffer* buffer_clone(struct buffer* self);

int buffer_length(struct buffer* self);

void buffer_reset(struct buffer* self);

void buffer_trim(struct buffer* self, int len);

struct buffer* buffer_append(struct buffer* self, char* mem, long int size);

struct buffer* buffer_append_char(struct buffer* self, char c);

struct buffer* buffer_append_str(struct buffer* self, char* mem);

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);

struct buffer* buffer_append_int(struct buffer* self, int value);

struct buffer* buffer_append_long(struct buffer* self, long value);

struct buffer* buffer_append_short(struct buffer* self, short short value);

struct buffer* buffer_alignment(struct buffer* self);

int buffer_compare(struct buffer* left, struct buffer* right);

struct buffer* string_to_buffer(char* self);

struct buffer* charp_to_buffer(char* self);

char* buffer_to_string(struct buffer* self);

_Bool bool_equals(_Bool self, _Bool right);

_Bool int_equals(int self, int right);

_Bool char_equals(char self, char right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool size_t_equals(long int self, long int right);

_Bool float_equals(float self, float right);

_Bool double_equals(double self, double right);

_Bool string_equals(char* self, char* right);

_Bool charp_equals(char* self, char* right);

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

unsigned int short_get_hash_key(short int value);

unsigned int int_get_hash_key(int value);

unsigned int long_get_hash_key(long value);

unsigned int size_t_get_hash_key(long int value);

unsigned int float_get_hash_key(float value);

unsigned int double_get_hash_key(double value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

_Bool bool_clone(_Bool self);

char char_clone(char self);

short int short_clone(short short self);

int int_clone(int self);

long int long_clone(long self);

long int size_t_clone(long int self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswalpha(unsigned int c);

_Bool xiswblank(unsigned int c);

_Bool xiswdigit(unsigned int c);

_Bool xiswalnum(unsigned int c);

_Bool xisalpha(char c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

_Bool xiswascii(unsigned int c);

int string_length(char* str);

int charp_length(char* str);

char* string_reverse(char* str);

char* charp_reverse(char* str);

char* string_operator_load_range_element(char* str, int head, int tail);

char* charp_operator_load_range_element(char* str, int head, int tail);

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

char* xsprintf(char* msg, ...);

char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* charp_split_char(char* self, char c);

static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);

char* xbasename(char* path);

char* xdirname(char* path);

char* xnoextname(char* path);

char* xextname(char* path);

char* xrealpath(char* path);

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

int size_t_compare(long int left, long int right);

int float_compare(float left, float right);

int double_compare(double left, double right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

char* FILE_read(struct _IO_FILE* f);

int FILE_write(struct _IO_FILE* f, char* str);

int FILE_fclose(struct _IO_FILE* f);

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

int string_write(char* self, char* file_name, _Bool append);

int charp_write(char* self, char* file_name, _Bool append);

char* string_read(char* file_name);

char* charp_read(char* file_name);

struct list$1charph* FILE_readlines(struct _IO_FILE* f);

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

char* charp_puts(char* self);

char* charp_print(char* self);

char* string_printf(char* self, ...);

char* charp_printf(char* self, ...);

int int_printf(int self, char* msg);

char* string_puts(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

struct integer* integer_initialize(struct integer* self, long value);

int integer_to_int(struct integer* self);

struct integer* char_to_integer(char self);

struct integer* short_to_integer(short short self);

struct integer* int_to_integer(int self);

struct integer* long_to_integer(long self);

int integer_compare(struct integer* left, struct integer* right);

_Bool integer_equals(struct integer* self, struct integer* right);

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
struct buffer* result_0;
struct buffer* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct buffer*));
    result_0=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1897, "buffer"));
    buffer_append(result_0,self,sizeof(char)*len);
    __result8__ = __result_obj__ = result_0;
    return __result8__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, long int len){
void* __result_obj__;
struct buffer* result_1;
struct buffer* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct buffer*));
    result_1=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1904, "buffer"));
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    __result9__ = __result_obj__ = result_1;
    return __result9__;
}
static inline struct buffer* intpa_to_buffer(int* self, long int len){
void* __result_obj__;
struct buffer* result_2;
struct buffer* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct buffer*));
    result_2=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1911, "buffer"));
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    __result10__ = __result_obj__ = result_2;
    return __result10__;
}
static inline struct buffer* longpa_to_buffer(long* self, long int len){
void* __result_obj__;
struct buffer* result_3;
struct buffer* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct buffer*));
    result_3=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1918, "buffer"));
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    __result11__ = __result_obj__ = result_3;
    return __result11__;
}
static inline struct buffer* floatpa_to_buffer(float* self, long int len){
void* __result_obj__;
struct buffer* result_4;
struct buffer* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct buffer*));
    result_4=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1925, "buffer"));
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    __result12__ = __result_obj__ = result_4;
    return __result12__;
}
static inline struct buffer* doublepa_to_buffer(double* self, long int len){
void* __result_obj__;
struct buffer* result_5;
struct buffer* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct buffer*));
    result_5=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1932, "buffer"));
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    __result13__ = __result_obj__ = result_5;
    return __result13__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1char* result_6;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
    result_6=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1948, "smart_pointer$1char");
    result_6->memory=buffer_clone(self);
    result_6->p=result_6->memory->buf;
    __result14__ = __result_obj__ = result_6;
    return __result14__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1char* result_7;
struct smart_pointer$1char* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
    result_7=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1958, "smart_pointer$1char");
    result_7->memory=buffer_clone(self);
    result_7->p=(char*)result_7->memory->buf;
    __result15__ = __result_obj__ = result_7;
    return __result15__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1short* result_8;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
    result_8=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1968, "smart_pointer$1short");
    result_8->memory=buffer_clone(self);
    result_8->p=(short short*)result_8->memory->buf;
    __result16__ = __result_obj__ = result_8;
    return __result16__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1int* result_9;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
    result_9=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1978, "smart_pointer$1int");
    result_9->memory=buffer_clone(self);
    result_9->p=(int*)result_9->memory->buf;
    __result17__ = __result_obj__ = result_9;
    return __result17__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1long* result_10;
struct smart_pointer$1long* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
    result_10=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1988, "smart_pointer$1long");
    result_10->memory=buffer_clone(self);
    result_10->p=(long*)result_10->memory->buf;
    __result18__ = __result_obj__ = result_10;
    return __result18__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, long int len){
void* __result_obj__;
struct smart_pointer$1char* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
    __result20__ = __result_obj__ = smart_pointer$1char_initialize((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2159, "smart_pointer$1char"),self,len);
    return __result20__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, long int len){
void* __result_obj__;
struct smart_pointer$1short* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
    __result22__ = __result_obj__ = smart_pointer$1short_initialize((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2164, "smart_pointer$1short"),self,len);
    return __result22__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, long int len){
void* __result_obj__;
struct smart_pointer$1int* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
    __result24__ = __result_obj__ = smart_pointer$1int_initialize((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2169, "smart_pointer$1int"),self,len);
    return __result24__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, long int len){
void* __result_obj__;
struct smart_pointer$1long* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
    __result26__ = __result_obj__ = smart_pointer$1long_initialize((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2174, "smart_pointer$1long"),self,len);
    return __result26__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, long int len){
void* __result_obj__;
struct smart_pointer$1float* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
    __result28__ = __result_obj__ = smart_pointer$1float_initialize((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2179, "smart_pointer$1float"),self,len);
    return __result28__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, long int len){
void* __result_obj__;
struct smart_pointer$1double* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
    __result30__ = __result_obj__ = smart_pointer$1double_initialize((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2184, "smart_pointer$1double"),self,len);
    return __result30__;
}
static inline struct list$1char* charpa_to_list(char* self, long int len){
void* __result_obj__;
struct list$1char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
    __result33__ = __result_obj__ = list$1char_initialize_with_values((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2189, "list$1char"),len,self);
    return __result33__;
}
static inline struct list$1short* shortpa_to_list(short short* self, long int len){
void* __result_obj__;
struct list$1short* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
    __result36__ = __result_obj__ = list$1short_initialize_with_values((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2194, "list$1short"),len,self);
    return __result36__;
}
static inline struct list$1int* intpa_to_list(int* self, long int len){
void* __result_obj__;
struct list$1int* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
    __result39__ = __result_obj__ = list$1int_initialize_with_values((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2199, "list$1int"),len,self);
    return __result39__;
}
static inline struct list$1long* longpa_to_list(long* self, long int len){
void* __result_obj__;
struct list$1long* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
    __result42__ = __result_obj__ = list$1long_initialize_with_values((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2204, "list$1long"),len,self);
    return __result42__;
}
static inline struct list$1float* floatpa_to_list(float* self, long int len){
void* __result_obj__;
struct list$1float* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    __result45__ = __result_obj__ = list$1float_initialize_with_values((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2209, "list$1float"),len,self);
    return __result45__;
}
static inline struct list$1double* doublepa_to_list(double* self, long int len){
void* __result_obj__;
struct list$1double* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    __result48__ = __result_obj__ = list$1double_initialize_with_values((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2214, "list$1double"),len,self);
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
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    __result55__ = __result_obj__ = xsprintf(msg,self);
    return __result55__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    __result56__ = __result_obj__ = xsprintf(msg,self);
    return __result56__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    __result57__ = __result_obj__ = xsprintf(msg,self);
    return __result57__;
}

// body function



















static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1char* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"));
        buffer_append(self->memory,memory,sizeof(char)*size);
        self->p=(char*)self->memory->buf;
        __result19__ = __result_obj__ = self;
        return __result19__;
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1short* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"));
        buffer_append(self->memory,memory,sizeof(short short)*size);
        self->p=(short short*)self->memory->buf;
        __result21__ = __result_obj__ = self;
        return __result21__;
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1int* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"));
        buffer_append(self->memory,memory,sizeof(int)*size);
        self->p=(int*)self->memory->buf;
        __result23__ = __result_obj__ = self;
        return __result23__;
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1long* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"));
        buffer_append(self->memory,memory,sizeof(long)*size);
        self->p=(long*)self->memory->buf;
        __result25__ = __result_obj__ = self;
        return __result25__;
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1float* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"));
        buffer_append(self->memory,memory,sizeof(float)*size);
        self->p=(float*)self->memory->buf;
        __result27__ = __result_obj__ = self;
        return __result27__;
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
struct smart_pointer$1double* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
        self->memory=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"));
        buffer_append(self->memory,memory,sizeof(double)*size);
        self->p=(double*)self->memory->buf;
        __result29__ = __result_obj__ = self;
        return __result29__;
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
        return __result32__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__;
_Bool _if_conditional1;
struct list_item$1char* litem_12;
_Bool _if_conditional2;
struct list_item$1char* litem_13;
struct list_item$1char* litem_14;
struct list$1char* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1char*));
memset(&litem_13, 0, sizeof(struct list_item$1char*));
memset(&litem_14, 0, sizeof(struct list_item$1char*));
                if(_if_conditional1=self->len==0,                _if_conditional1) {
                    litem_12=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 217, "list_item$1char");
                    litem_12->prev=((void*)0);
                    litem_12->next=((void*)0);
                    litem_12->item=item;
                    self->tail=litem_12;
                    self->head=litem_12;
                }
                else {
                    if(_if_conditional2=self->len==1,                    _if_conditional2) {
                        litem_13=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 227, "list_item$1char");
                        litem_13->prev=self->head;
                        litem_13->next=((void*)0);
                        litem_13->item=item;
                        self->tail=litem_13;
                        self->head->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 237, "list_item$1char");
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


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_15;
struct list$1short* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_15, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_15=0;        i_15<num_value;        i_15++        ){
            list$1short_push_back(self,values[i_15]);
        }
        __result35__ = __result_obj__ = self;
        return __result35__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__;
_Bool _if_conditional3;
struct list_item$1short* litem_16;
_Bool _if_conditional4;
struct list_item$1short* litem_17;
struct list_item$1short* litem_18;
struct list$1short* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1short*));
memset(&litem_17, 0, sizeof(struct list_item$1short*));
memset(&litem_18, 0, sizeof(struct list_item$1short*));
                if(_if_conditional3=self->len==0,                _if_conditional3) {
                    litem_16=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 217, "list_item$1short");
                    litem_16->prev=((void*)0);
                    litem_16->next=((void*)0);
                    litem_16->item=item;
                    self->tail=litem_16;
                    self->head=litem_16;
                }
                else {
                    if(_if_conditional4=self->len==1,                    _if_conditional4) {
                        litem_17=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 227, "list_item$1short");
                        litem_17->prev=self->head;
                        litem_17->next=((void*)0);
                        litem_17->item=item;
                        self->tail=litem_17;
                        self->head->next=litem_17;
                    }
                    else {
                        litem_18=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 237, "list_item$1short");
                        litem_18->prev=self->tail;
                        litem_18->next=((void*)0);
                        litem_18->item=item;
                        self->tail->next=litem_18;
                        self->tail=litem_18;
                    }
                }
                self->len++;
                __result34__ = __result_obj__ = self;
                return __result34__;
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_19;
struct list$1int* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_19, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_19=0;        i_19<num_value;        i_19++        ){
            list$1int_push_back(self,values[i_19]);
        }
        __result38__ = __result_obj__ = self;
        return __result38__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__;
_Bool _if_conditional5;
struct list_item$1int* litem_20;
_Bool _if_conditional6;
struct list_item$1int* litem_21;
struct list_item$1int* litem_22;
struct list$1int* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1int*));
memset(&litem_21, 0, sizeof(struct list_item$1int*));
memset(&litem_22, 0, sizeof(struct list_item$1int*));
                if(_if_conditional5=self->len==0,                _if_conditional5) {
                    litem_20=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 217, "list_item$1int");
                    litem_20->prev=((void*)0);
                    litem_20->next=((void*)0);
                    litem_20->item=item;
                    self->tail=litem_20;
                    self->head=litem_20;
                }
                else {
                    if(_if_conditional6=self->len==1,                    _if_conditional6) {
                        litem_21=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 227, "list_item$1int");
                        litem_21->prev=self->head;
                        litem_21->next=((void*)0);
                        litem_21->item=item;
                        self->tail=litem_21;
                        self->head->next=litem_21;
                    }
                    else {
                        litem_22=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 237, "list_item$1int");
                        litem_22->prev=self->tail;
                        litem_22->next=((void*)0);
                        litem_22->item=item;
                        self->tail->next=litem_22;
                        self->tail=litem_22;
                    }
                }
                self->len++;
                __result37__ = __result_obj__ = self;
                return __result37__;
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_23;
struct list$1long* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            list$1long_push_back(self,values[i_23]);
        }
        __result41__ = __result_obj__ = self;
        return __result41__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__;
_Bool _if_conditional7;
struct list_item$1long* litem_24;
_Bool _if_conditional8;
struct list_item$1long* litem_25;
struct list_item$1long* litem_26;
struct list$1long* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1long*));
memset(&litem_25, 0, sizeof(struct list_item$1long*));
memset(&litem_26, 0, sizeof(struct list_item$1long*));
                if(_if_conditional7=self->len==0,                _if_conditional7) {
                    litem_24=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 217, "list_item$1long");
                    litem_24->prev=((void*)0);
                    litem_24->next=((void*)0);
                    litem_24->item=item;
                    self->tail=litem_24;
                    self->head=litem_24;
                }
                else {
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        litem_25=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 227, "list_item$1long");
                        litem_25->prev=self->head;
                        litem_25->next=((void*)0);
                        litem_25->item=item;
                        self->tail=litem_25;
                        self->head->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 237, "list_item$1long");
                        litem_26->prev=self->tail;
                        litem_26->next=((void*)0);
                        litem_26->item=item;
                        self->tail->next=litem_26;
                        self->tail=litem_26;
                    }
                }
                self->len++;
                __result40__ = __result_obj__ = self;
                return __result40__;
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_27;
struct list$1float* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_27, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_27=0;        i_27<num_value;        i_27++        ){
            list$1float_push_back(self,values[i_27]);
        }
        __result44__ = __result_obj__ = self;
        return __result44__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__;
_Bool _if_conditional9;
struct list_item$1float* litem_28;
_Bool _if_conditional10;
struct list_item$1float* litem_29;
struct list_item$1float* litem_30;
struct list$1float* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1float*));
memset(&litem_29, 0, sizeof(struct list_item$1float*));
memset(&litem_30, 0, sizeof(struct list_item$1float*));
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    litem_28=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 217, "list_item$1float");
                    litem_28->prev=((void*)0);
                    litem_28->next=((void*)0);
                    litem_28->item=item;
                    self->tail=litem_28;
                    self->head=litem_28;
                }
                else {
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        litem_29=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 227, "list_item$1float");
                        litem_29->prev=self->head;
                        litem_29->next=((void*)0);
                        litem_29->item=item;
                        self->tail=litem_29;
                        self->head->next=litem_29;
                    }
                    else {
                        litem_30=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 237, "list_item$1float");
                        litem_30->prev=self->tail;
                        litem_30->next=((void*)0);
                        litem_30->item=item;
                        self->tail->next=litem_30;
                        self->tail=litem_30;
                    }
                }
                self->len++;
                __result43__ = __result_obj__ = self;
                return __result43__;
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_31;
struct list$1double* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_31, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_31=0;        i_31<num_value;        i_31++        ){
            list$1double_push_back(self,values[i_31]);
        }
        __result47__ = __result_obj__ = self;
        return __result47__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__;
_Bool _if_conditional11;
struct list_item$1double* litem_32;
_Bool _if_conditional12;
struct list_item$1double* litem_33;
struct list_item$1double* litem_34;
struct list$1double* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_32, 0, sizeof(struct list_item$1double*));
memset(&litem_33, 0, sizeof(struct list_item$1double*));
memset(&litem_34, 0, sizeof(struct list_item$1double*));
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    litem_32=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 217, "list_item$1double");
                    litem_32->prev=((void*)0);
                    litem_32->next=((void*)0);
                    litem_32->item=item;
                    self->tail=litem_32;
                    self->head=litem_32;
                }
                else {
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        litem_33=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 227, "list_item$1double");
                        litem_33->prev=self->head;
                        litem_33->next=((void*)0);
                        litem_33->item=item;
                        self->tail=litem_33;
                        self->head->next=litem_33;
                    }
                    else {
                        litem_34=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 237, "list_item$1double");
                        litem_34->prev=self->tail;
                        litem_34->next=((void*)0);
                        litem_34->item=item;
                        self->tail->next=litem_34;
                        self->tail=litem_34;
                    }
                }
                self->len++;
                __result46__ = __result_obj__ = self;
                return __result46__;
}










void come_push_stackframe(char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional13=gNumComeStackFrame<1024,    _if_conditional13) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
void* __result_obj__;
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional14=gNumComeStackFrame>0,    _if_conditional14) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __result_obj__;
struct buffer* buf_35;
int i_36;
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_35, 0, sizeof(struct buffer*));
memset(&i_36, 0, sizeof(int));
    buf_35=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 44, "buffer"));
    buffer_append_str(buf_35,xsprintf("%s %d\n",sname,sline));
    for(    i_36=gNumComeStackFrame-2;    i_36>=0;    i_36--    ){
        buffer_append_str(buf_35,xsprintf("%s %d #%d\n",gComeStackFrameSName[i_36],gComeStackFrameSLine[i_36],gComeStackFrameID[i_36]));
    }
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(buffer_to_string(buf_35));
}

void exception_stackframe(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    printf("%s",gComeStackFrameBuffer);
}

void stackframe(){
void* __result_obj__;
int i_37;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_37, 0, sizeof(int));
    for(    i_37=gNumComeStackFrame-1;    i_37>=0;    i_37--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_37],gComeStackFrameSLine[i_37],gComeStackFrameID[i_37]);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    __result58__ = __result_obj__ = __builtin_string(gComeStackFrameBuffer);
    return __result58__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional16;
void* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional16=mem==((void*)0),    _if_conditional16) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result59__ = __result_obj__ = mem;
    return __result59__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
void* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional17=mem==((void*)0),    _if_conditional17) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(_if_conditional18=mem<begin,    _if_conditional18) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(_if_conditional19=mem>=end,    _if_conditional19) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result60__ = __result_obj__ = mem;
    return __result60__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional20;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional20=!self,    _if_conditional20) {
        block(parent);
        stackframe();
        exit(1);
    }
    __result61__ = self;
    return __result61__;
}

_Bool bool_value(_Bool self){
void* __result_obj__;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    __result62__ = self;
    return __result62__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional21;
int __result63__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional21=self<0,    _if_conditional21) {
        block(parent);
    }
    __result63__ = self;
    return __result63__;
}

int int_expect(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional22;
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional22=self<0,    _if_conditional22) {
        block(parent);
        stackframe();
        exit(1);
    }
    __result64__ = self;
    return __result64__;
}

int int_value(int self){
void* __result_obj__;
int __result65__;
memset(&__result_obj__, 0, sizeof(void*));
    __result65__ = self;
    return __result65__;
}

int int_except(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional23;
int __result66__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional23=self<0,    _if_conditional23) {
        block(parent);
    }
    __result66__ = self;
    return __result66__;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional24;
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional24=!self,    _if_conditional24) {
        block(parent);
    }
    __result67__ = self;
    return __result67__;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional25;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional25=!self,    _if_conditional25) {
        block(parent);
    }
    __result68__ = self;
    return __result68__;
}

void xassert(char* msg, _Bool test){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
    printf("%s...",msg);
    if(_if_conditional26=!test,    _if_conditional26) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
void* __result_obj__;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
    gComeMallocLib=(_Bool)0;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    if(gComeGCLib) {
        GC_init();
        GC_set_warn_proc(GC_ignore_warn_proc);
        GC_enable_incremental();
    }
    gComeStackFrameBuffer=((void*)0);
}

void come_heap_final(){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
}

static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional29;
void* result_38;
struct sMemHeader* it_39;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
void* __result69__;
void* result_40;
struct sMemHeaderTiny* it_41;
_Bool _if_conditional33;
_Bool _if_conditional34;
void* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_38, 0, sizeof(void*));
memset(&it_39, 0, sizeof(struct sMemHeader*));
memset(&result_40, 0, sizeof(void*));
memset(&it_41, 0, sizeof(struct sMemHeaderTiny*));
    if(gComeDebugLib) {
        result_38=GC_malloc(size+sizeof(struct sMemHeader));
        memset(result_38,0,size+sizeof(struct sMemHeader));
        it_39=result_38;
        it_39->allocated=177783;
        it_39->size=size+sizeof(struct sMemHeader);
        come_push_stackframe(sname,sline,0);
        if(_if_conditional30=gNumComeStackFrame<16,        _if_conditional30) {
            memcpy(it_39->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_39->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(it_39->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_39->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_39->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(it_39->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        it_39->next=gAllocMem;
        it_39->prev=((void*)0);
        if(class_name) {
            it_39->class_name=GC_strdup(class_name);
        }
        else {
            it_39->class_name=((void*)0);
        }
        if(gAllocMem) {
            gAllocMem->prev=it_39;
        }
        gAllocMem=it_39;
        __result69__ = __result_obj__ = (char*)result_38+sizeof(struct sMemHeader);
        return __result69__;
    }
    else {
        result_40=GC_malloc(size+sizeof(struct sMemHeaderTiny));
        memset(result_40,0,size+sizeof(struct sMemHeaderTiny));
        it_41=result_40;
        it_41->allocated=177783;
        if(class_name) {
            it_41->class_name=GC_strdup(class_name);
        }
        else {
            it_41->class_name=((void*)0);
        }
        it_41->size=size+sizeof(struct sMemHeaderTiny);
        it_41->next=(struct sMemHeaderTiny*)gAllocMem;
        it_41->prev=((void*)0);
        if(gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_41;
        }
        gAllocMem=(struct sMemHeader*)it_41;
        __result70__ = __result_obj__ = (char*)result_40+sizeof(struct sMemHeaderTiny);
        return __result70__;
    }
}

static void come_free_mem_of_heap_pool(char* mem){
void* __result_obj__;
_Bool _if_conditional35;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
    if(mem) {
        if(gComeDebugLib) {
        }
        else {
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__;
struct sMemHeaderTiny* it_42;
_Bool _if_conditional37;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_42, 0, sizeof(struct sMemHeaderTiny*));
    it_42=(struct sMemHeaderTiny*)((char*)mem-sizeof(long int)-sizeof(long int)-sizeof(struct sMemHeaderTiny));
    if(_if_conditional37=it_42->allocated!=177783,    _if_conditional37) {
        fprintf(stderr,"invalid heap object(%p)\n",it_42);
        exit(2);
    }
    __result71__ = __result_obj__ = it_42->class_name;
    return __result71__;
}

void* come_calloc(long int count, long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
char* mem_43;
long int* ref_count_44;
long int* size2_45;
void* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_43, 0, sizeof(char*));
memset(&ref_count_44, 0, sizeof(long int*));
memset(&size2_45, 0, sizeof(long int*));
    mem_43=come_alloc_mem_from_heap_pool(sizeof(long int)+sizeof(long int)+count*size,sname,sline,class_name);
    ref_count_44=(long int*)mem_43;
    *ref_count_44=0;
    size2_45=(long int*)(mem_43+sizeof(long int));
    *size2_45=size*count+sizeof(long int)+sizeof(long int);
    __result72__ = __result_obj__ = mem_43+sizeof(long int)+sizeof(long int);
    return __result72__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool _if_conditional38;
long int* ref_count_46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_46, 0, sizeof(long int*));
    if(_if_conditional38=mem==((void*)0),    _if_conditional38) {
        return;
    }
    ref_count_46=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    come_free_mem_of_heap_pool((char*)ref_count_46);
}

void come_free(void* mem){
void* __result_obj__;
_Bool _if_conditional39;
long int* ref_count_47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_47, 0, sizeof(long int*));
    if(_if_conditional39=mem==((void*)0),    _if_conditional39) {
        return;
    }
    ref_count_47=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    come_free_mem_of_heap_pool((char*)ref_count_47);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional40;
void* __result73__;
char* mem_48;
long int* size_p_49;
long int size_50;
void* result_51;
void* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_48, 0, sizeof(char*));
memset(&size_p_49, 0, sizeof(long int*));
memset(&size_50, 0, sizeof(long int));
memset(&result_51, 0, sizeof(void*));
    if(_if_conditional40=!block,    _if_conditional40) {
        __result73__ = __result_obj__ = ((void*)0);
        return __result73__;
    }
    mem_48=(char*)block-sizeof(long int)-sizeof(long int);
    size_p_49=(long int*)(mem_48+sizeof(long int));
    size_50=*size_p_49-sizeof(long int)-sizeof(long int);
    result_51=come_calloc(1,size_50,sname,sline,class_name);
    memcpy(result_51,block,size_50);
    __result74__ = __result_obj__ = result_51;
    return __result74__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional41;
void* __result75__;
long int* ref_count_52;
void* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_52, 0, sizeof(long int*));
    if(_if_conditional41=mem==((void*)0),    _if_conditional41) {
        __result75__ = __result_obj__ = mem;
        return __result75__;
    }
    ref_count_52=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    (*ref_count_52)++;
    __result76__ = __result_obj__ = mem;
    return __result76__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional42;
void* __result77__;
long int* ref_count_53;
void* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_53, 0, sizeof(long int*));
    if(_if_conditional42=mem==((void*)0),    _if_conditional42) {
        __result77__ = __result_obj__ = mem;
        return __result77__;
    }
    ref_count_53=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    printf("ref_count %ld\n",*ref_count_53);
    __result78__ = __result_obj__ = mem;
    return __result78__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional43;
void* __result79__;
long int* ref_count_54;
_Bool _if_conditional44;
long int count_55;
_Bool _if_conditional45;
_Bool _if_conditional46;
void (*finalizer_56)(void*);
void* __result80__;
void* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_54, 0, sizeof(long int*));
memset(&count_55, 0, sizeof(long int));
memset(&finalizer_56, 0, sizeof(void (*)(void*)));
    if(_if_conditional43=mem==((void*)0),    _if_conditional43) {
        __result79__ = __result_obj__ = ((void*)0);
        return __result79__;
    }
    ref_count_54=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    if(_if_conditional44=!no_decrement,    _if_conditional44) {
        (*ref_count_54)--;
    }
    count_55=*ref_count_54;
    if(_if_conditional45=!no_free&&(count_55<=0||force_delete_),    _if_conditional45) {
        if(_if_conditional46=protocol_obj&&protocol_fun,        _if_conditional46) {
            finalizer_56=protocol_fun;
            finalizer_56(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result80__ = __result_obj__ = ((void*)0);
        return __result80__;
    }
    __result81__ = __result_obj__ = mem;
    return __result81__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* __result_obj__;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
void (*finalizer_57)(void*);
void (*finalizer_58)(void*);
long int* ref_count_59;
_Bool _if_conditional51;
long int count_60;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
void (*finalizer_61)(void*);
_Bool _if_conditional55;
void (*finalizer_62)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_57, 0, sizeof(void (*)(void*)));
memset(&finalizer_58, 0, sizeof(void (*)(void*)));
memset(&ref_count_59, 0, sizeof(long int*));
memset(&count_60, 0, sizeof(long int));
memset(&finalizer_61, 0, sizeof(void (*)(void*)));
memset(&finalizer_62, 0, sizeof(void (*)(void*)));
    if(_if_conditional47=mem==((void*)0),    _if_conditional47) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(_if_conditional50=protocol_obj&&protocol_fun,            _if_conditional50) {
                finalizer_57=protocol_fun;
                finalizer_57(protocol_obj);
            }
            finalizer_58=fun;
            finalizer_58(mem);
        }
    }
    else {
        ref_count_59=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
        if(_if_conditional51=!no_decrement,        _if_conditional51) {
            (*ref_count_59)--;
        }
        count_60=*ref_count_59;
        if(_if_conditional52=!no_free&&(count_60<=0||force_delete_),        _if_conditional52) {
            if(mem) {
                if(_if_conditional54=protocol_obj&&protocol_fun,                _if_conditional54) {
                    finalizer_61=protocol_fun;
                    finalizer_61(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    finalizer_62=fun;
                    finalizer_62(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool _if_conditional56;
char* __result82__;
int len_63;
char* result_64;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_63, 0, sizeof(int));
memset(&result_64, 0, sizeof(char*));
    if(_if_conditional56=str==((void*)0),    _if_conditional56) {
        __result82__ = __result_obj__ = ((void*)0);
        return __result82__;
    }
    len_63=strlen(str)+1;
    result_64=(char*)come_calloc(1, sizeof(char)*(1*(len_63)), "libneo-c-gc.c", 504, "char");
    strncpy(result_64,str,len_63);
    __result83__ = __result_obj__ = result_64;
    return __result83__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool found_65;
int i_66;
_Bool _if_conditional57;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&found_65, 0, sizeof(_Bool));
memset(&i_66, 0, sizeof(int));
    found_65=(_Bool)0;
    for(    i_66=0;    i_66<len;    i_66++    ){
        if(_if_conditional57=array[i_66]==element,        _if_conditional57) {
            found_65=(_Bool)1;
            break;
        }
    }
    __result84__ = found_65;
    return __result84__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
struct buffer* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
    self->size=128;
    self->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 529, "char");
    self->buf[0]=0;
    self->len=0;
    __result85__ = __result_obj__ = self;
    return __result85__;
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional58;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional58=self&&self->buf,    _if_conditional58) {
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional59;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional59=self&&self->buf,    _if_conditional59) {
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional60;
struct buffer* __result86__;
struct buffer* result_67;
struct buffer* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_67, 0, sizeof(struct buffer*));
    if(_if_conditional60=self==((void*)0),    _if_conditional60) {
        __result86__ = __result_obj__ = ((void*)0);
        return __result86__;
    }
    result_67=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 551, "buffer");
    result_67->size=self->size;
    result_67->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 554, "char");
    result_67->len=self->len;
    memcpy(result_67->buf,self->buf,self->len);
    __result87__ = __result_obj__ = result_67;
    return __result87__;
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional61;
int __result88__;
int __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional61=self==((void*)0),    _if_conditional61) {
        __result88__ = 0;
        return __result88__;
    }
    __result89__ = self->len;
    return __result89__;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional62;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional62=self==((void*)0),    _if_conditional62) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool _if_conditional63;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional63=self==((void*)0),    _if_conditional63) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, long int size){
void* __result_obj__;
_Bool _if_conditional64;
struct buffer* __result90__;
_Bool _if_conditional65;
char* old_buf_68;
int old_len_69;
int new_size_70;
struct buffer* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_buf_68, 0, sizeof(char*));
memset(&old_len_69, 0, sizeof(int));
memset(&new_size_70, 0, sizeof(int));
    if(_if_conditional64=self==((void*)0)||mem==((void*)0),    _if_conditional64) {
        __result90__ = __result_obj__ = self;
        return __result90__;
    }
    if(_if_conditional65=self->len+size+1+1>=self->size,    _if_conditional65) {
        old_buf_68=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 593, "char");
        memcpy(old_buf_68,self->buf,self->size);
        old_len_69=self->len;
        new_size_70=(self->size+size+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_70)), "libneo-c-gc.c", 597, "char");
        memcpy(self->buf,old_buf_68,old_len_69);
        self->buf[old_len_69]=0;
        self->size=new_size_70;
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result91__ = __result_obj__ = self;
    return __result91__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool _if_conditional66;
struct buffer* __result92__;
_Bool _if_conditional67;
char* old_buf_71;
int old_len_72;
int new_size_73;
struct buffer* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_buf_71, 0, sizeof(char*));
memset(&old_len_72, 0, sizeof(int));
memset(&new_size_73, 0, sizeof(int));
    if(_if_conditional66=self==((void*)0),    _if_conditional66) {
        __result92__ = __result_obj__ = ((void*)0);
        return __result92__;
    }
    if(_if_conditional67=self->len+1+1+1>=self->size,    _if_conditional67) {
        old_buf_71=charp_clone(self->buf);
        old_len_72=self->len;
        new_size_73=(self->size+10+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_73)), "libneo-c-gc.c", 620, "char");
        memcpy(self->buf,old_buf_71,old_len_72);
        self->buf[old_len_72]=0;
        self->size=new_size_73;
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result93__ = __result_obj__ = self;
    return __result93__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional68;
struct buffer* __result94__;
int size_74;
_Bool _if_conditional69;
char* old_buf_75;
int old_len_76;
int new_size_77;
struct buffer* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_74, 0, sizeof(int));
memset(&old_buf_75, 0, sizeof(char*));
memset(&old_len_76, 0, sizeof(int));
memset(&new_size_77, 0, sizeof(int));
    if(_if_conditional68=self==((void*)0)||mem==((void*)0),    _if_conditional68) {
        __result94__ = __result_obj__ = self;
        return __result94__;
    }
    size_74=strlen(mem);
    if(_if_conditional69=self->len+size_74+1+1>=self->size,    _if_conditional69) {
        old_buf_75=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 642, "char");
        memcpy(old_buf_75,self->buf,self->size);
        old_len_76=self->len;
        new_size_77=(self->size+size_74+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_77)), "libneo-c-gc.c", 646, "char");
        memcpy(self->buf,old_buf_75,old_len_76);
        self->buf[old_len_76]=0;
        self->size=new_size_77;
    }
    memcpy(self->buf+self->len,mem,size_74);
    self->len+=size_74;
    self->buf[self->len]=0;
    __result95__ = __result_obj__ = self;
    return __result95__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional70;
struct buffer* __result96__;
int size_78;
_Bool _if_conditional71;
char* old_buf_79;
int old_len_80;
int new_size_81;
struct buffer* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_78, 0, sizeof(int));
memset(&old_buf_79, 0, sizeof(char*));
memset(&old_len_80, 0, sizeof(int));
memset(&new_size_81, 0, sizeof(int));
    if(_if_conditional70=self==((void*)0)||mem==((void*)0),    _if_conditional70) {
        __result96__ = __result_obj__ = self;
        return __result96__;
    }
    size_78=strlen(mem)+1;
    if(_if_conditional71=self->len+size_78+1+1+1>=self->size,    _if_conditional71) {
        old_buf_79=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 666, "char");
        memcpy(old_buf_79,self->buf,self->size);
        old_len_80=self->len;
        new_size_81=(self->size+size_78+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_81)), "libneo-c-gc.c", 670, "char");
        memcpy(self->buf,old_buf_79,old_len_80);
        self->buf[old_len_80]=0;
        self->size=new_size_81;
    }
    memcpy(self->buf+self->len,mem,size_78);
    self->len+=size_78;
    self->buf[self->len]=0;
    self->len++;
    __result97__ = __result_obj__ = self;
    return __result97__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool _if_conditional72;
struct buffer* __result98__;
int* mem_82;
int size_83;
_Bool _if_conditional73;
char* old_buf_84;
int old_len_85;
int new_size_86;
struct buffer* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_82, 0, sizeof(int*));
memset(&size_83, 0, sizeof(int));
memset(&old_buf_84, 0, sizeof(char*));
memset(&old_len_85, 0, sizeof(int));
memset(&new_size_86, 0, sizeof(int));
    if(_if_conditional72=self==((void*)0),    _if_conditional72) {
        __result98__ = __result_obj__ = ((void*)0);
        return __result98__;
    }
    mem_82=&value;
    size_83=sizeof(int);
    if(_if_conditional73=self->len+size_83+1+1>=self->size,    _if_conditional73) {
        old_buf_84=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 693, "char");
        memcpy(old_buf_84,self->buf,self->size);
        old_len_85=self->len;
        new_size_86=(self->size+size_83+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_86)), "libneo-c-gc.c", 697, "char");
        memcpy(self->buf,old_buf_84,old_len_85);
        self->buf[old_len_85]=0;
        self->size=new_size_86;
    }
    memcpy(self->buf+self->len,mem_82,size_83);
    self->len+=size_83;
    self->buf[self->len]=0;
    __result99__ = __result_obj__ = self;
    return __result99__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
long* mem_87;
int size_88;
_Bool _if_conditional74;
char* old_buf_89;
int old_len_90;
int new_size_91;
struct buffer* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_87, 0, sizeof(long*));
memset(&size_88, 0, sizeof(int));
memset(&old_buf_89, 0, sizeof(char*));
memset(&old_len_90, 0, sizeof(int));
memset(&new_size_91, 0, sizeof(int));
    mem_87=&value;
    size_88=sizeof(long);
    if(_if_conditional74=self->len+size_88+1+1>=self->size,    _if_conditional74) {
        old_buf_89=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 716, "char");
        memcpy(old_buf_89,self->buf,self->size);
        old_len_90=self->len;
        new_size_91=(self->size+size_88+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_91)), "libneo-c-gc.c", 720, "char");
        memcpy(self->buf,old_buf_89,old_len_90);
        self->buf[old_len_90]=0;
        self->size=new_size_91;
    }
    memcpy(self->buf+self->len,mem_87,size_88);
    self->len+=size_88;
    self->buf[self->len]=0;
    __result100__ = __result_obj__ = self;
    return __result100__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool _if_conditional75;
struct buffer* __result101__;
short short* mem_92;
int size_93;
_Bool _if_conditional76;
char* old_buf_94;
int old_len_95;
int new_size_96;
struct buffer* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_92, 0, sizeof(short short*));
memset(&size_93, 0, sizeof(int));
memset(&old_buf_94, 0, sizeof(char*));
memset(&old_len_95, 0, sizeof(int));
memset(&new_size_96, 0, sizeof(int));
    if(_if_conditional75=self==((void*)0),    _if_conditional75) {
        __result101__ = __result_obj__ = ((void*)0);
        return __result101__;
    }
    mem_92=&value;
    size_93=sizeof(short short);
    if(_if_conditional76=self->len+size_93+1+1>=self->size,    _if_conditional76) {
        old_buf_94=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c-gc.c", 743, "char");
        memcpy(old_buf_94,self->buf,self->size);
        old_len_95=self->len;
        new_size_96=(self->size+size_93+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_96)), "libneo-c-gc.c", 747, "char");
        memcpy(self->buf,old_buf_94,old_len_95);
        self->buf[old_len_95]=0;
        self->size=new_size_96;
    }
    memcpy(self->buf+self->len,mem_92,size_93);
    self->len+=size_93;
    self->buf[self->len]=0;
    __result102__ = __result_obj__ = self;
    return __result102__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional77;
struct buffer* __result103__;
int len_97;
_Bool _if_conditional78;
int new_size_98;
int i_99;
struct buffer* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_97, 0, sizeof(int));
memset(&new_size_98, 0, sizeof(int));
memset(&i_99, 0, sizeof(int));
    if(_if_conditional77=self==((void*)0),    _if_conditional77) {
        __result103__ = __result_obj__ = ((void*)0);
        return __result103__;
    }
    len_97=self->len;
    len_97=(len_97+3)&~3;
    if(_if_conditional78=len_97>=self->size,    _if_conditional78) {
        new_size_98=(self->size+1+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_98)), "libneo-c-gc.c", 771, "char");
        self->size=new_size_98;
    }
    for(    i_99=self->len;    i_99<len_97;    i_99++    ){
        self->buf[i_99]=0;
    }
    self->len=len_97;
    __result104__ = __result_obj__ = self;
    return __result104__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool _if_conditional79;
int __result105__;
_Bool _if_conditional80;
int __result106__;
_Bool _if_conditional81;
int __result107__;
int __result108__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional79=left==((void*)0)&&right==((void*)0),    _if_conditional79) {
        __result105__ = 0;
        return __result105__;
    }
    else {
        if(_if_conditional80=left==((void*)0),        _if_conditional80) {
            __result106__ = -1;
            return __result106__;
        }
        else {
            if(_if_conditional81=right==((void*)0),            _if_conditional81) {
                __result107__ = 1;
                return __result107__;
            }
        }
    }
    __result108__ = strcmp(left->buf,right->buf);
    return __result108__;
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
struct buffer* result_100;
_Bool _if_conditional82;
struct buffer* __result109__;
struct buffer* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_100, 0, sizeof(struct buffer*));
    result_100=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 801, "buffer"));
    if(_if_conditional82=self==((void*)0),    _if_conditional82) {
        __result109__ = __result_obj__ = result_100;
        return __result109__;
    }
    buffer_append_str(result_100,self);
    __result110__ = __result_obj__ = result_100;
    return __result110__;
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
struct buffer* result_101;
_Bool _if_conditional83;
struct buffer* __result111__;
struct buffer* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_101, 0, sizeof(struct buffer*));
    result_101=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 814, "buffer"));
    if(_if_conditional83=self==((void*)0),    _if_conditional83) {
        __result111__ = __result_obj__ = result_101;
        return __result111__;
    }
    buffer_append_str(result_101,self);
    __result112__ = __result_obj__ = result_101;
    return __result112__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional84;
char* __result113__;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional84=self==((void*)0),    _if_conditional84) {
        __result113__ = __result_obj__ = __builtin_string("");
        return __result113__;
    }
    __result114__ = __result_obj__ = __builtin_string(self->buf);
    return __result114__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
    __result115__ = self==right;
    return __result115__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    __result116__ = self==right;
    return __result116__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
    __result117__ = self==right;
    return __result117__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = self==right;
    return __result118__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
    __result119__ = self==right;
    return __result119__;
}

_Bool size_t_equals(long int self, long int right){
void* __result_obj__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
    __result120__ = self==right;
    return __result120__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    __result121__ = self==right;
    return __result121__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    __result122__ = self==right;
    return __result122__;
}

_Bool string_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional85;
_Bool __result123__;
_Bool _if_conditional86;
_Bool __result124__;
_Bool _if_conditional87;
_Bool __result125__;
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional85=self==((void*)0)&&right==((void*)0),    _if_conditional85) {
        __result123__ = (_Bool)1;
        return __result123__;
    }
    else {
        if(_if_conditional86=self==((void*)0),        _if_conditional86) {
            __result124__ = (_Bool)0;
            return __result124__;
        }
        else {
            if(_if_conditional87=right==((void*)0),            _if_conditional87) {
                __result125__ = (_Bool)0;
                return __result125__;
            }
        }
    }
    __result126__ = strcmp(self,right)==0;
    return __result126__;
}

_Bool charp_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional88;
_Bool __result127__;
_Bool _if_conditional89;
_Bool __result128__;
_Bool _if_conditional90;
_Bool __result129__;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional88=self==((void*)0)&&right==((void*)0),    _if_conditional88) {
        __result127__ = (_Bool)1;
        return __result127__;
    }
    else {
        if(_if_conditional89=self==((void*)0),        _if_conditional89) {
            __result128__ = (_Bool)0;
            return __result128__;
        }
        else {
            if(_if_conditional90=right==((void*)0),            _if_conditional90) {
                __result129__ = (_Bool)0;
                return __result129__;
            }
        }
    }
    __result130__ = strcmp(self,right)==0;
    return __result130__;
}

_Bool string_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional91;
_Bool __result131__;
_Bool _if_conditional92;
_Bool __result132__;
_Bool _if_conditional93;
_Bool __result133__;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional91=self==((void*)0)&&right==((void*)0),    _if_conditional91) {
        __result131__ = (_Bool)1;
        return __result131__;
    }
    else {
        if(_if_conditional92=self==((void*)0),        _if_conditional92) {
            __result132__ = (_Bool)0;
            return __result132__;
        }
        else {
            if(_if_conditional93=right==((void*)0),            _if_conditional93) {
                __result133__ = (_Bool)0;
                return __result133__;
            }
        }
    }
    __result134__ = strcmp(self,right)==0;
    return __result134__;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional94;
_Bool __result135__;
_Bool _if_conditional95;
_Bool __result136__;
_Bool _if_conditional96;
_Bool __result137__;
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional94=self==((void*)0)&&right==((void*)0),    _if_conditional94) {
        __result135__ = (_Bool)1;
        return __result135__;
    }
    else {
        if(_if_conditional95=self==((void*)0),        _if_conditional95) {
            __result136__ = (_Bool)0;
            return __result136__;
        }
        else {
            if(_if_conditional96=right==((void*)0),            _if_conditional96) {
                __result137__ = (_Bool)0;
                return __result137__;
            }
        }
    }
    __result138__ = strcmp(self,right)==0;
    return __result138__;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional97;
_Bool __result139__;
_Bool _if_conditional98;
_Bool __result140__;
_Bool _if_conditional99;
_Bool __result141__;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional97=self==((void*)0)&&right==((void*)0),    _if_conditional97) {
        __result139__ = (_Bool)0;
        return __result139__;
    }
    else {
        if(_if_conditional98=self==((void*)0),        _if_conditional98) {
            __result140__ = (_Bool)1;
            return __result140__;
        }
        else {
            if(_if_conditional99=right==((void*)0),            _if_conditional99) {
                __result141__ = (_Bool)1;
                return __result141__;
            }
        }
    }
    __result142__ = strcmp(self,right)!=0;
    return __result142__;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional100;
_Bool __result143__;
_Bool _if_conditional101;
_Bool __result144__;
_Bool _if_conditional102;
_Bool __result145__;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional100=self==((void*)0)&&right==((void*)0),    _if_conditional100) {
        __result143__ = (_Bool)0;
        return __result143__;
    }
    else {
        if(_if_conditional101=self==((void*)0),        _if_conditional101) {
            __result144__ = (_Bool)1;
            return __result144__;
        }
        else {
            if(_if_conditional102=right==((void*)0),            _if_conditional102) {
                __result145__ = (_Bool)1;
                return __result145__;
            }
        }
    }
    __result146__ = strcmp(self,right)!=0;
    return __result146__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional103;
char* __result147__;
int len_102;
char* result_103;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_102, 0, sizeof(int));
memset(&result_103, 0, sizeof(char*));
    if(_if_conditional103=self==((void*)0)||right==((void*)0),    _if_conditional103) {
        __result147__ = __result_obj__ = __builtin_string("");
        return __result147__;
    }
    len_102=strlen(self)+strlen(right);
    result_103=(char*)come_calloc(1, sizeof(char)*(1*(len_102+1)), "libneo-c-gc.c", 975, "char");
    strncpy(result_103,self,len_102+1);
    strncat(result_103,right,len_102+1);
    __result148__ = __result_obj__ = result_103;
    return __result148__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional104;
char* __result149__;
int len_104;
char* result_105;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_104, 0, sizeof(int));
memset(&result_105, 0, sizeof(char*));
    if(_if_conditional104=self==((void*)0)||right==((void*)0),    _if_conditional104) {
        __result149__ = __result_obj__ = __builtin_string("");
        return __result149__;
    }
    len_104=strlen(self)+strlen(right);
    result_105=(char*)come_calloc(1, sizeof(char)*(1*(len_104+1)), "libneo-c-gc.c", 990, "char");
    strncpy(result_105,self,len_104+1);
    strncat(result_105,right,len_104+1);
    __result150__ = __result_obj__ = result_105;
    return __result150__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional105;
char* __result151__;
struct buffer* buf_106;
int i_107;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_106, 0, sizeof(struct buffer*));
memset(&i_107, 0, sizeof(int));
    if(_if_conditional105=self==((void*)0),    _if_conditional105) {
        __result151__ = __result_obj__ = __builtin_string("");
        return __result151__;
    }
    buf_106=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1003, "buffer"));
    for(    i_107=0;    i_107<right;    i_107++    ){
        buffer_append_str(buf_106,self);
    }
    __result152__ = __result_obj__ = buffer_to_string(buf_106);
    return __result152__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional106;
char* __result153__;
struct buffer* buf_108;
int i_109;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_108, 0, sizeof(struct buffer*));
memset(&i_109, 0, sizeof(int));
    if(_if_conditional106=self==((void*)0),    _if_conditional106) {
        __result153__ = __result_obj__ = __builtin_string("");
        return __result153__;
    }
    buf_108=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1017, "buffer"));
    for(    i_109=0;    i_109<right;    i_109++    ){
        buffer_append_str(buf_108,self);
    }
    __result154__ = __result_obj__ = buffer_to_string(buf_108);
    return __result154__;
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
unsigned int __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    __result155__ = (int_get_hash_key(((int)value)));
    return __result155__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
unsigned int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    __result156__ = value;
    return __result156__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
unsigned int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    __result157__ = value;
    return __result157__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
unsigned int __result158__;
memset(&__result_obj__, 0, sizeof(void*));
    __result158__ = value;
    return __result158__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
unsigned int __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    __result159__ = value;
    return __result159__;
}

unsigned int size_t_get_hash_key(long int value){
void* __result_obj__;
unsigned int __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    __result160__ = value;
    return __result160__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
unsigned int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    __result161__ = (unsigned int)value;
    return __result161__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
unsigned int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    __result162__ = (unsigned int)value;
    return __result162__;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional107;
unsigned int __result163__;
int result_110;
char* p_111;
_Bool _while_condtional1;
unsigned int __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_110, 0, sizeof(int));
memset(&p_111, 0, sizeof(char*));
    if(_if_conditional107=value==((void*)0),    _if_conditional107) {
        __result163__ = 0;
        return __result163__;
    }
    result_110=0;
    p_111=value;
    while(_while_condtional1=*p_111,    _while_condtional1) {
        result_110+=(*p_111);
        p_111++;
    }
    __result164__ = result_110;
    return __result164__;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional108;
unsigned int __result165__;
int result_112;
char* p_113;
_Bool _while_condtional2;
unsigned int __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_112, 0, sizeof(int));
memset(&p_113, 0, sizeof(char*));
    if(_if_conditional108=value==((void*)0),    _if_conditional108) {
        __result165__ = 0;
        return __result165__;
    }
    result_112=0;
    p_113=value;
    while(_while_condtional2=*p_113,    _while_condtional2) {
        result_112+=(*p_113);
        p_113++;
    }
    __result166__ = result_112;
    return __result166__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    __result167__ = self;
    return __result167__;
}

char char_clone(char self){
void* __result_obj__;
char __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    __result168__ = self;
    return __result168__;
}

short int short_clone(short short self){
void* __result_obj__;
short int __result169__;
memset(&__result_obj__, 0, sizeof(void*));
    __result169__ = self;
    return __result169__;
}

int int_clone(int self){
void* __result_obj__;
int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
    __result170__ = self;
    return __result170__;
}

long int long_clone(long self){
void* __result_obj__;
long int __result171__;
memset(&__result_obj__, 0, sizeof(void*));
    __result171__ = self;
    return __result171__;
}

long int size_t_clone(long int self){
void* __result_obj__;
long int __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    __result172__ = self;
    return __result172__;
}

double double_clone(double self){
void* __result_obj__;
double __result173__;
memset(&__result_obj__, 0, sizeof(void*));
    __result173__ = self;
    return __result173__;
}

float float_clone(float self){
void* __result_obj__;
float __result174__;
memset(&__result_obj__, 0, sizeof(void*));
    __result174__ = self;
    return __result174__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool _if_conditional109;
char* __result175__;
char* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional109=self==((void*)0),    _if_conditional109) {
        __result175__ = __result_obj__ = ((void*)0);
        return __result175__;
    }
    __result176__ = __result_obj__ = __builtin_string(self);
    return __result176__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool _if_conditional110;
char* __result177__;
char* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional110=self==((void*)0),    _if_conditional110) {
        __result177__ = __result_obj__ = ((void*)0);
        return __result177__;
    }
    __result178__ = __result_obj__ = __builtin_string(self);
    return __result178__;
}

_Bool xiswalpha(unsigned int c){
void* __result_obj__;
_Bool result_114;
_Bool __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_114, 0, sizeof(_Bool));
    result_114=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result179__ = result_114;
    return __result179__;
}

_Bool xiswblank(unsigned int c){
void* __result_obj__;
_Bool __result180__;
memset(&__result_obj__, 0, sizeof(void*));
    __result180__ = c==32||c==9;
    return __result180__;
}

_Bool xiswdigit(unsigned int c){
void* __result_obj__;
_Bool __result181__;
memset(&__result_obj__, 0, sizeof(void*));
    __result181__ = (c>=48&&c<=57);
    return __result181__;
}

_Bool xiswalnum(unsigned int c){
void* __result_obj__;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
    __result182__ = xiswalpha(c)||xiswdigit(c);
    return __result182__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool result_115;
_Bool __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_115, 0, sizeof(_Bool));
    result_115=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result183__ = result_115;
    return __result183__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __result184__;
memset(&__result_obj__, 0, sizeof(void*));
    __result184__ = c==32||c==9;
    return __result184__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __result185__;
memset(&__result_obj__, 0, sizeof(void*));
    __result185__ = (c>=48&&c<=57);
    return __result185__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __result186__;
memset(&__result_obj__, 0, sizeof(void*));
    __result186__ = xisalpha(c)||xisdigit(c);
    return __result186__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool result_116;
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_116, 0, sizeof(_Bool));
    result_116=(c>=32&&c<=126);
    __result187__ = result_116;
    return __result187__;
}

_Bool xiswascii(unsigned int c){
void* __result_obj__;
_Bool result_117;
_Bool __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_117, 0, sizeof(_Bool));
    result_117=(c>=32&&c<=126);
    __result188__ = result_117;
    return __result188__;
}

int string_length(char* str){
void* __result_obj__;
_Bool _if_conditional111;
int __result189__;
int __result190__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional111=str==((void*)0),    _if_conditional111) {
        __result189__ = 0;
        return __result189__;
    }
    __result190__ = strlen(str);
    return __result190__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool _if_conditional112;
int __result191__;
int __result192__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional112=str==((void*)0),    _if_conditional112) {
        __result191__ = 0;
        return __result191__;
    }
    __result192__ = strlen(str);
    return __result192__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional113;
char* __result193__;
int len_118;
char* result_119;
int i_120;
char* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_118, 0, sizeof(int));
memset(&result_119, 0, sizeof(char*));
memset(&i_120, 0, sizeof(int));
    if(_if_conditional113=str==((void*)0),    _if_conditional113) {
        __result193__ = __result_obj__ = __builtin_string("");
        return __result193__;
    }
    len_118=strlen(str);
    result_119=(char*)come_calloc(1, sizeof(char)*(1*(len_118+1)), "libneo-c-gc.c", 1234, "char");
    for(    i_120=0;    i_120<len_118;    i_120++    ){
        result_119[i_120]=str[len_118-i_120-1];
    }
    result_119[len_118]=0;
    __result194__ = __result_obj__ = result_119;
    return __result194__;
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional114;
char* __result195__;
int len_121;
char* result_122;
int i_123;
char* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_121, 0, sizeof(int));
memset(&result_122, 0, sizeof(char*));
memset(&i_123, 0, sizeof(int));
    if(_if_conditional114=str==((void*)0),    _if_conditional114) {
        __result195__ = __result_obj__ = __builtin_string("");
        return __result195__;
    }
    len_121=strlen(str);
    result_122=(char*)come_calloc(1, sizeof(char)*(1*(len_121+1)), "libneo-c-gc.c", 1251, "char");
    for(    i_123=0;    i_123<len_121;    i_123++    ){
        result_122[i_123]=str[len_121-i_123-1];
    }
    result_122[len_121]=0;
    __result196__ = __result_obj__ = result_122;
    return __result196__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional115;
char* __result197__;
int len_124;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
char* __result198__;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
char* __result199__;
_Bool _if_conditional122;
char* __result200__;
char* result_125;
char* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_124, 0, sizeof(int));
memset(&result_125, 0, sizeof(char*));
    if(_if_conditional115=str==((void*)0),    _if_conditional115) {
        __result197__ = __result_obj__ = __builtin_string("");
        return __result197__;
    }
    len_124=strlen(str);
    if(_if_conditional116=head<0,    _if_conditional116) {
        head+=len_124;
    }
    if(_if_conditional117=tail<0,    _if_conditional117) {
        tail+=len_124+1;
    }
    if(_if_conditional118=head>tail,    _if_conditional118) {
        __result198__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result198__;
    }
    if(_if_conditional119=head<0,    _if_conditional119) {
        head=0;
    }
    if(_if_conditional120=tail>=len_124,    _if_conditional120) {
        tail=len_124;
    }
    if(_if_conditional121=head==tail,    _if_conditional121) {
        __result199__ = __result_obj__ = __builtin_string("");
        return __result199__;
    }
    if(_if_conditional122=tail-head+1<1,    _if_conditional122) {
        __result200__ = __result_obj__ = __builtin_string("");
        return __result200__;
    }
    result_125=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c-gc.c", 1296, "char");
    memcpy(result_125,str+head,tail-head);
    result_125[tail-head]=0;
    __result201__ = __result_obj__ = result_125;
    return __result201__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional123;
char* __result202__;
int len_126;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
char* __result203__;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
char* __result204__;
_Bool _if_conditional130;
char* __result205__;
char* result_127;
char* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_126, 0, sizeof(int));
memset(&result_127, 0, sizeof(char*));
    if(_if_conditional123=str==((void*)0),    _if_conditional123) {
        __result202__ = __result_obj__ = __builtin_string("");
        return __result202__;
    }
    len_126=strlen(str);
    if(_if_conditional124=head<0,    _if_conditional124) {
        head+=len_126;
    }
    if(_if_conditional125=tail<0,    _if_conditional125) {
        tail+=len_126+1;
    }
    if(_if_conditional126=head>tail,    _if_conditional126) {
        __result203__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result203__;
    }
    if(_if_conditional127=head<0,    _if_conditional127) {
        head=0;
    }
    if(_if_conditional128=tail>=len_126,    _if_conditional128) {
        tail=len_126;
    }
    if(_if_conditional129=head==tail,    _if_conditional129) {
        __result204__ = __result_obj__ = __builtin_string("");
        return __result204__;
    }
    if(_if_conditional130=tail-head+1<1,    _if_conditional130) {
        __result205__ = __result_obj__ = __builtin_string("");
        return __result205__;
    }
    result_127=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c-gc.c", 1339, "char");
    memcpy(result_127,str+head,tail-head);
    result_127[tail-head]=0;
    __result206__ = __result_obj__ = result_127;
    return __result206__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional131;
char* __result207__;
int len_128;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
char* __result208__;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
char* __result209__;
_Bool _if_conditional138;
char* __result210__;
char* result_129;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_128, 0, sizeof(int));
memset(&result_129, 0, sizeof(char*));
    if(_if_conditional131=str==((void*)0),    _if_conditional131) {
        __result207__ = __result_obj__ = __builtin_string("");
        return __result207__;
    }
    len_128=strlen(str);
    if(_if_conditional132=head<0,    _if_conditional132) {
        head+=len_128;
    }
    if(_if_conditional133=tail<0,    _if_conditional133) {
        tail+=len_128+1;
    }
    if(_if_conditional134=head>tail,    _if_conditional134) {
        __result208__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result208__;
    }
    if(_if_conditional135=head<0,    _if_conditional135) {
        head=0;
    }
    if(_if_conditional136=tail>=len_128,    _if_conditional136) {
        tail=len_128;
    }
    if(_if_conditional137=head==tail,    _if_conditional137) {
        __result209__ = __result_obj__ = __builtin_string("");
        return __result209__;
    }
    if(_if_conditional138=tail-head+1<1,    _if_conditional138) {
        __result210__ = __result_obj__ = __builtin_string("");
        return __result210__;
    }
    result_129=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c-gc.c", 1382, "char");
    memcpy(result_129,str+head,tail-head);
    result_129[tail-head]=0;
    __result211__ = __result_obj__ = result_129;
    return __result211__;
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional139;
char* __result212__;
int len_130;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
char* __result213__;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
char* __result214__;
_Bool _if_conditional146;
char* __result215__;
char* result_131;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_130, 0, sizeof(int));
memset(&result_131, 0, sizeof(char*));
    if(_if_conditional139=str==((void*)0),    _if_conditional139) {
        __result212__ = __result_obj__ = __builtin_string("");
        return __result212__;
    }
    len_130=strlen(str);
    if(_if_conditional140=head<0,    _if_conditional140) {
        head+=len_130;
    }
    if(_if_conditional141=tail<0,    _if_conditional141) {
        tail+=len_130+1;
    }
    if(_if_conditional142=head>tail,    _if_conditional142) {
        __result213__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result213__;
    }
    if(_if_conditional143=head<0,    _if_conditional143) {
        head=0;
    }
    if(_if_conditional144=tail>=len_130,    _if_conditional144) {
        tail=len_130;
    }
    if(_if_conditional145=head==tail,    _if_conditional145) {
        __result214__ = __result_obj__ = __builtin_string("");
        return __result214__;
    }
    if(_if_conditional146=tail-head+1<1,    _if_conditional146) {
        __result215__ = __result_obj__ = __builtin_string("");
        return __result215__;
    }
    result_131=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c-gc.c", 1425, "char");
    memcpy(result_131,str+head,tail-head);
    result_131[tail-head]=0;
    __result216__ = __result_obj__ = result_131;
    return __result216__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool _if_conditional147;
char* __result217__;
va_list args_132;
char* result_133;
int len_134;
_Bool _if_conditional148;
char* __result218__;
char* result2_135;
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_132, 0, sizeof(va_list));
memset(&result_133, 0, sizeof(char*));
memset(&len_134, 0, sizeof(int));
memset(&result2_135, 0, sizeof(char*));
    if(_if_conditional147=msg==((void*)0),    _if_conditional147) {
        __result217__ = __result_obj__ = __builtin_string("");
        return __result217__;
    }
    __builtin_va_start(args_132,msg);
    len_134=vasprintf(&result_133,msg,args_132);
    __builtin_va_end(args_132);
    if(_if_conditional148=len_134<0,    _if_conditional148) {
        __result218__ = __result_obj__ = __builtin_string("");
        return __result218__;
    }
    result2_135=__builtin_string(result_133);
    free(result_133);
    __result219__ = __result_obj__ = result2_135;
    return __result219__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional149;
char* __result220__;
int len_136;
_Bool _if_conditional150;
char* __result221__;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
char* __result222__;
_Bool _if_conditional155;
char* sub_str_137;
char* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_136, 0, sizeof(int));
memset(&sub_str_137, 0, sizeof(char*));
    if(_if_conditional149=str==((void*)0),    _if_conditional149) {
        __result220__ = __result_obj__ = __builtin_string("");
        return __result220__;
    }
    len_136=strlen(str);
    if(_if_conditional150=strcmp(str,"")==0,    _if_conditional150) {
        __result221__ = __result_obj__ = __builtin_string(str);
        return __result221__;
    }
    if(_if_conditional151=head<0,    _if_conditional151) {
        head+=len_136;
    }
    if(_if_conditional152=tail<0,    _if_conditional152) {
        tail+=len_136+1;
    }
    if(_if_conditional153=head<0,    _if_conditional153) {
        head=0;
    }
    if(_if_conditional154=tail<0,    _if_conditional154) {
        __result222__ = __result_obj__ = __builtin_string(str);
        return __result222__;
    }
    if(_if_conditional155=tail>=len_136,    _if_conditional155) {
        tail=len_136;
    }
    sub_str_137=charp_substring(str,tail,-1);
    memcpy(str+head,sub_str_137,string_length(sub_str_137)+1);
    __result223__ = __result_obj__ = __builtin_string(str);
    return __result223__;
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional156;
char* __result224__;
int len_138;
_Bool _if_conditional157;
char* __result225__;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
char* __result226__;
_Bool _if_conditional162;
char* sub_str_139;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_138, 0, sizeof(int));
memset(&sub_str_139, 0, sizeof(char*));
    if(_if_conditional156=str==((void*)0),    _if_conditional156) {
        __result224__ = __result_obj__ = __builtin_string("");
        return __result224__;
    }
    len_138=strlen(str);
    if(_if_conditional157=strcmp(str,"")==0,    _if_conditional157) {
        __result225__ = __result_obj__ = __builtin_string(str);
        return __result225__;
    }
    if(_if_conditional158=head<0,    _if_conditional158) {
        head+=len_138;
    }
    if(_if_conditional159=tail<0,    _if_conditional159) {
        tail+=len_138+1;
    }
    if(_if_conditional160=head<0,    _if_conditional160) {
        head=0;
    }
    if(_if_conditional161=tail<0,    _if_conditional161) {
        __result226__ = __result_obj__ = __builtin_string(str);
        return __result226__;
    }
    if(_if_conditional162=tail>=len_138,    _if_conditional162) {
        tail=len_138;
    }
    sub_str_139=charp_substring(str,tail,-1);
    memcpy(str+head,sub_str_139,string_length(sub_str_139)+1);
    __result227__ = __result_obj__ = __builtin_string(str);
    return __result227__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional163;
struct list$1charph* __result229__;
struct list$1charph* result_140;
struct buffer* str_141;
int i_142;
_Bool _if_conditional164;
_Bool _if_conditional167;
struct list$1charph* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_140, 0, sizeof(struct list$1charph*));
memset(&str_141, 0, sizeof(struct buffer*));
memset(&i_142, 0, sizeof(int));
    if(_if_conditional163=self==((void*)0),    _if_conditional163) {
        __result229__ = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 1536, "list$1charph"));
        return __result229__;
    }
    result_140=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 1539, "list$1charph"));
    str_141=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1541, "buffer"));
    for(    i_142=0;    i_142<charp_length(self);    i_142++    ){
        if(_if_conditional164=self[i_142]==c,        _if_conditional164) {
            list$1charph_push_back(result_140,__builtin_string(str_141->buf));
            buffer_reset(str_141);
        }
        else {
            buffer_append_char(str_141,self[i_142]);
        }
    }
    if(_if_conditional167=buffer_length(str_141)!=0,    _if_conditional167) {
        list$1charph_push_back(result_140,__builtin_string(str_141->buf));
    }
    __result231__ = __result_obj__ = result_140;
    return __result231__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result228__ = __result_obj__ = self;
            return __result228__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional165;
struct list_item$1charph* litem_143;
_Bool _if_conditional166;
struct list_item$1charph* litem_144;
struct list_item$1charph* litem_145;
struct list$1charph* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_143, 0, sizeof(struct list_item$1charph*));
memset(&litem_144, 0, sizeof(struct list_item$1charph*));
memset(&litem_145, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional165=self->len==0,                _if_conditional165) {
                    litem_143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 217, "list_item$1charph");
                    litem_143->prev=((void*)0);
                    litem_143->next=((void*)0);
                    litem_143->item=item;
                    self->tail=litem_143;
                    self->head=litem_143;
                }
                else {
                    if(_if_conditional166=self->len==1,                    _if_conditional166) {
                        litem_144=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph");
                        litem_144->prev=self->head;
                        litem_144->next=((void*)0);
                        litem_144->item=item;
                        self->tail=litem_144;
                        self->head->next=litem_144;
                    }
                    else {
                        litem_145=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph");
                        litem_145->prev=self->tail;
                        litem_145->next=((void*)0);
                        litem_145->item=item;
                        self->tail->next=litem_145;
                        self->tail=litem_145;
                    }
                }
                self->len++;
                __result230__ = __result_obj__ = self;
                return __result230__;
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional168;
struct list$1charph* __result232__;
struct list$1charph* result_146;
struct buffer* str_147;
int i_148;
_Bool _if_conditional169;
_Bool _if_conditional170;
struct list$1charph* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_146, 0, sizeof(struct list$1charph*));
memset(&str_147, 0, sizeof(struct buffer*));
memset(&i_148, 0, sizeof(int));
    if(_if_conditional168=self==((void*)0),    _if_conditional168) {
        __result232__ = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 1562, "list$1charph"));
        return __result232__;
    }
    result_146=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 1565, "list$1charph"));
    str_147=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1567, "buffer"));
    for(    i_148=0;    i_148<charp_length(self);    i_148++    ){
        if(_if_conditional169=self[i_148]==c,        _if_conditional169) {
            list$1charph_push_back(result_146,__builtin_string(str_147->buf));
            buffer_reset(str_147);
        }
        else {
            buffer_append_char(str_147,self[i_148]);
        }
    }
    if(_if_conditional170=buffer_length(str_147)!=0,    _if_conditional170) {
        list$1charph_push_back(result_146,__builtin_string(str_147->buf));
    }
    __result233__ = __result_obj__ = result_146;
    return __result233__;
}

char* xbasename(char* path){
void* __result_obj__;
_Bool _if_conditional171;
char* __result234__;
char* p_149;
_Bool _while_condtional3;
_Bool _if_conditional172;
_Bool _if_conditional173;
char* __result235__;
char* __result236__;
char* __result237__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_149, 0, sizeof(char*));
    if(_if_conditional171=path==((void*)0),    _if_conditional171) {
        __result234__ = __result_obj__ = __builtin_string("");
        return __result234__;
    }
    p_149=path+strlen(path);
    while(_while_condtional3=p_149>=path,    _while_condtional3) {
        if(_if_conditional172=*p_149==47,        _if_conditional172) {
            break;
        }
        else {
            p_149--;
        }
    }
    if(_if_conditional173=p_149<path,    _if_conditional173) {
        __result235__ = __result_obj__ = __builtin_string(path);
        return __result235__;
    }
    else {
        __result236__ = __result_obj__ = __builtin_string(p_149+1);
        return __result236__;
    }
    __result237__ = __result_obj__ = __builtin_string("");
    return __result237__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool _if_conditional174;
char* __result238__;
char* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional174=path==((void*)0),    _if_conditional174) {
        __result238__ = __result_obj__ = __builtin_string("");
        return __result238__;
    }
    __result239__ = __result_obj__ = __builtin_string(dirname(__builtin_string(path)));
    return __result239__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool _if_conditional175;
char* __result240__;
char* path2_150;
char* p_151;
_Bool _while_condtional4;
_Bool _if_conditional176;
_Bool _if_conditional177;
char* __result241__;
char* __result242__;
char* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&path2_150, 0, sizeof(char*));
memset(&p_151, 0, sizeof(char*));
    if(_if_conditional175=path==((void*)0),    _if_conditional175) {
        __result240__ = __result_obj__ = __builtin_string("");
        return __result240__;
    }
    path2_150=xbasename(path);
    p_151=path2_150+strlen(path2_150);
    while(_while_condtional4=p_151>=path2_150,    _while_condtional4) {
        if(_if_conditional176=*p_151==46,        _if_conditional176) {
            break;
        }
        else {
            p_151--;
        }
    }
    if(_if_conditional177=p_151<path2_150,    _if_conditional177) {
        __result241__ = __result_obj__ = __builtin_string(path2_150);
        return __result241__;
    }
    else {
        __result242__ = __result_obj__ = string_substring(path2_150,0,p_151-path2_150);
        return __result242__;
    }
    __result243__ = __result_obj__ = __builtin_string("");
    return __result243__;
}

char* xextname(char* path){
void* __result_obj__;
_Bool _if_conditional178;
char* __result244__;
char* p_152;
_Bool _while_condtional5;
_Bool _if_conditional179;
_Bool _if_conditional180;
char* __result245__;
char* __result246__;
char* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_152, 0, sizeof(char*));
    if(_if_conditional178=path==((void*)0),    _if_conditional178) {
        __result244__ = __result_obj__ = __builtin_string("");
        return __result244__;
    }
    p_152=path+strlen(path);
    while(_while_condtional5=p_152>=path,    _while_condtional5) {
        if(_if_conditional179=*p_152==46,        _if_conditional179) {
            break;
        }
        else {
            p_152--;
        }
    }
    if(_if_conditional180=p_152<path,    _if_conditional180) {
        __result245__ = __result_obj__ = __builtin_string(path);
        return __result245__;
    }
    else {
        __result246__ = __result_obj__ = __builtin_string(p_152+1);
        return __result246__;
    }
    __result247__ = __result_obj__ = __builtin_string("");
    return __result247__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool _if_conditional181;
char* __result248__;
char* result_153;
char* result2_154;
char* __result249__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_153, 0, sizeof(char*));
memset(&result2_154, 0, sizeof(char*));
    if(_if_conditional181=path==((void*)0),    _if_conditional181) {
        __result248__ = __result_obj__ = __builtin_string("");
        return __result248__;
    }
    result_153=realpath(path,((void*)0));
    result2_154=__builtin_string(result_153);
    free(result_153);
    __result249__ = __result_obj__ = result2_154;
    return __result249__;
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool _if_conditional182;
char* __result250__;
char* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self) {
        __result250__ = __result_obj__ = __builtin_string("true");
        return __result250__;
    }
    else {
        __result251__ = __result_obj__ = __builtin_string("false");
        return __result251__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
char* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
    __result252__ = __result_obj__ = xsprintf("%c",self);
    return __result252__;
}

char* short_to_string(short short self){
void* __result_obj__;
char* __result253__;
memset(&__result_obj__, 0, sizeof(void*));
    __result253__ = __result_obj__ = xsprintf("%d",self);
    return __result253__;
}

char* int_to_string(int self){
void* __result_obj__;
char* __result254__;
memset(&__result_obj__, 0, sizeof(void*));
    __result254__ = __result_obj__ = xsprintf("%d",self);
    return __result254__;
}

char* long_to_string(long self){
void* __result_obj__;
char* __result255__;
memset(&__result_obj__, 0, sizeof(void*));
    __result255__ = __result_obj__ = xsprintf("%ld",self);
    return __result255__;
}

char* size_t_to_string(long int self){
void* __result_obj__;
char* __result256__;
memset(&__result_obj__, 0, sizeof(void*));
    __result256__ = __result_obj__ = xsprintf("%ld",self);
    return __result256__;
}

char* float_to_string(float self){
void* __result_obj__;
char* __result257__;
memset(&__result_obj__, 0, sizeof(void*));
    __result257__ = __result_obj__ = xsprintf("%f",self);
    return __result257__;
}

char* double_to_string(double self){
void* __result_obj__;
char* __result258__;
memset(&__result_obj__, 0, sizeof(void*));
    __result258__ = __result_obj__ = xsprintf("%lf",self);
    return __result258__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional183;
char* __result259__;
char* __result260__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional183=self==((void*)0),    _if_conditional183) {
        __result259__ = __result_obj__ = __builtin_string("");
        return __result259__;
    }
    __result260__ = __result_obj__ = __builtin_string(self);
    return __result260__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional184;
char* __result261__;
char* __result262__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional184=self==((void*)0),    _if_conditional184) {
        __result261__ = __result_obj__ = __builtin_string("");
        return __result261__;
    }
    __result262__ = __result_obj__ = __builtin_string(self);
    return __result262__;
}

int bool_compare(_Bool left, _Bool right){
void* __result_obj__;
_Bool _if_conditional185;
int __result263__;
_Bool _if_conditional186;
int __result264__;
_Bool _if_conditional187;
int __result265__;
int __result266__;
int __result267__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional185=!left&&right,    _if_conditional185) {
        __result263__ = -1;
        return __result263__;
    }
    else {
        if(_if_conditional186=left&&right,        _if_conditional186) {
            __result264__ = 0;
            return __result264__;
        }
        else {
            if(_if_conditional187=!left&&!right,            _if_conditional187) {
                __result265__ = 0;
                return __result265__;
            }
            else {
                __result266__ = 1;
                return __result266__;
            }
        }
    }
    __result267__ = 0;
    return __result267__;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool _if_conditional188;
int __result268__;
_Bool _if_conditional189;
int __result269__;
int __result270__;
int __result271__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional188=left<right,    _if_conditional188) {
        __result268__ = -1;
        return __result268__;
    }
    else {
        if(_if_conditional189=left>right,        _if_conditional189) {
            __result269__ = 1;
            return __result269__;
        }
        else {
            __result270__ = 0;
            return __result270__;
        }
    }
    __result271__ = 0;
    return __result271__;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool _if_conditional190;
int __result272__;
_Bool _if_conditional191;
int __result273__;
int __result274__;
int __result275__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional190=left<right,    _if_conditional190) {
        __result272__ = -1;
        return __result272__;
    }
    else {
        if(_if_conditional191=left>right,        _if_conditional191) {
            __result273__ = 1;
            return __result273__;
        }
        else {
            __result274__ = 0;
            return __result274__;
        }
    }
    __result275__ = 0;
    return __result275__;
}

int int_compare(int left, int right){
void* __result_obj__;
_Bool _if_conditional192;
int __result276__;
_Bool _if_conditional193;
int __result277__;
int __result278__;
int __result279__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional192=left<right,    _if_conditional192) {
        __result276__ = -1;
        return __result276__;
    }
    else {
        if(_if_conditional193=left>right,        _if_conditional193) {
            __result277__ = 1;
            return __result277__;
        }
        else {
            __result278__ = 0;
            return __result278__;
        }
    }
    __result279__ = 0;
    return __result279__;
}

int long_compare(long left, long right){
void* __result_obj__;
_Bool _if_conditional194;
int __result280__;
_Bool _if_conditional195;
int __result281__;
int __result282__;
int __result283__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional194=left<right,    _if_conditional194) {
        __result280__ = -1;
        return __result280__;
    }
    else {
        if(_if_conditional195=left>right,        _if_conditional195) {
            __result281__ = 1;
            return __result281__;
        }
        else {
            __result282__ = 0;
            return __result282__;
        }
    }
    __result283__ = 0;
    return __result283__;
}

int size_t_compare(long int left, long int right){
void* __result_obj__;
_Bool _if_conditional196;
int __result284__;
_Bool _if_conditional197;
int __result285__;
int __result286__;
int __result287__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional196=left<right,    _if_conditional196) {
        __result284__ = -1;
        return __result284__;
    }
    else {
        if(_if_conditional197=left>right,        _if_conditional197) {
            __result285__ = 1;
            return __result285__;
        }
        else {
            __result286__ = 0;
            return __result286__;
        }
    }
    __result287__ = 0;
    return __result287__;
}

int float_compare(float left, float right){
void* __result_obj__;
_Bool _if_conditional198;
int __result288__;
_Bool _if_conditional199;
int __result289__;
int __result290__;
int __result291__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional198=left<right,    _if_conditional198) {
        __result288__ = -1;
        return __result288__;
    }
    else {
        if(_if_conditional199=left>right,        _if_conditional199) {
            __result289__ = 1;
            return __result289__;
        }
        else {
            __result290__ = 0;
            return __result290__;
        }
    }
    __result291__ = 0;
    return __result291__;
}

int double_compare(double left, double right){
void* __result_obj__;
_Bool _if_conditional200;
int __result292__;
_Bool _if_conditional201;
int __result293__;
int __result294__;
int __result295__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional200=left<right,    _if_conditional200) {
        __result292__ = -1;
        return __result292__;
    }
    else {
        if(_if_conditional201=left>right,        _if_conditional201) {
            __result293__ = 1;
            return __result293__;
        }
        else {
            __result294__ = 0;
            return __result294__;
        }
    }
    __result295__ = 0;
    return __result295__;
}

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional202;
int __result296__;
_Bool _if_conditional203;
int __result297__;
_Bool _if_conditional204;
int __result298__;
int __result299__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional202=left==((void*)0)&&right==((void*)0),    _if_conditional202) {
        __result296__ = 0;
        return __result296__;
    }
    else {
        if(_if_conditional203=left==((void*)0),        _if_conditional203) {
            __result297__ = -1;
            return __result297__;
        }
        else {
            if(_if_conditional204=right==((void*)0),            _if_conditional204) {
                __result298__ = 1;
                return __result298__;
            }
        }
    }
    __result299__ = strcmp(left,right);
    return __result299__;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional205;
int __result300__;
_Bool _if_conditional206;
int __result301__;
_Bool _if_conditional207;
int __result302__;
int __result303__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional205=left==((void*)0)&&right==((void*)0),    _if_conditional205) {
        __result300__ = 0;
        return __result300__;
    }
    else {
        if(_if_conditional206=left==((void*)0),        _if_conditional206) {
            __result301__ = -1;
            return __result301__;
        }
        else {
            if(_if_conditional207=right==((void*)0),            _if_conditional207) {
                __result302__ = 1;
                return __result302__;
            }
        }
    }
    __result303__ = strcmp(left,right);
    return __result303__;
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional208;
char* __result304__;
struct buffer* buf_155;
_Bool _while_condtional6;
int size_157;
_Bool _if_conditional209;
char* __result305__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_155, 0, sizeof(struct buffer*));
memset(&size_157, 0, sizeof(int));
    if(_if_conditional208=f==((void*)0),    _if_conditional208) {
        __result304__ = __result_obj__ = __builtin_string("");
        return __result304__;
    }
    buf_155=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 1918, "buffer"));
    while(_while_condtional6=1,    _while_condtional6) {
        char buf2_156[8192];
        memset(&buf2_156, 0, sizeof(char)        *(8192)        );
        size_157=fread(buf2_156,1,8192,f);
        buffer_append(buf_155,buf2_156,size_157);
        if(_if_conditional209=size_157<8192,        _if_conditional209) {
            break;
        }
    }
    __result305__ = __result_obj__ = buffer_to_string(buf_155);
    return __result305__;
}

int FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool _if_conditional210;
int __result306__;
int __result307__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional210=f==((void*)0)||str==((void*)0),    _if_conditional210) {
        __result306__ = -1;
        return __result306__;
    }
    __result307__ = fwrite(str,strlen(str),1,f);
    return __result307__;
}

int FILE_fclose(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional211;
int __result308__;
int result_158;
_Bool _if_conditional212;
int __result309__;
int __result310__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_158, 0, sizeof(int));
    if(_if_conditional211=f==((void*)0),    _if_conditional211) {
        __result308__ = -1;
        return __result308__;
    }
    result_158=fclose(f);
    if(_if_conditional212=result_158<0,    _if_conditional212) {
        __result309__ = result_158;
        return __result309__;
    }
    __result310__ = result_158;
    return __result310__;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional213;
struct _IO_FILE* __result311__;
va_list args_160;
int result_161;
_Bool _if_conditional214;
struct _IO_FILE* __result312__;
struct _IO_FILE* __result313__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_160, 0, sizeof(va_list));
memset(&result_161, 0, sizeof(int));
    if(_if_conditional213=f==((void*)0)||msg==((void*)0),    _if_conditional213) {
        __result311__ = __result_obj__ = f;
        return __result311__;
    }
    char msg2_159[1024*2*2*2];
    memset(&msg2_159, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_160,msg);
    vsnprintf(msg2_159,1024*2*2*2,msg,args_160);
    __builtin_va_end(args_160);
    result_161=fprintf(f,"%s",msg2_159);
    if(_if_conditional214=result_161<0,    _if_conditional214) {
        __result312__ = __result_obj__ = f;
        return __result312__;
    }
    __result313__ = __result_obj__ = f;
    return __result313__;
}

int string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional215;
int __result314__;
struct _IO_FILE* f_162;
_Bool _if_conditional216;
_Bool _if_conditional217;
int __result315__;
int result_163;
_Bool _if_conditional218;
int __result316__;
int result2_164;
_Bool _if_conditional219;
int __result317__;
int __result318__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_162, 0, sizeof(struct _IO_FILE*));
memset(&result_163, 0, sizeof(int));
memset(&result2_164, 0, sizeof(int));
    if(_if_conditional215=self==((void*)0)||file_name==((void*)0),    _if_conditional215) {
        __result314__ = -1;
        return __result314__;
    }
    if(append) {
        f_162=fopen(file_name,"a");
    }
    else {
        f_162=fopen(file_name,"w");
    }
    if(_if_conditional217=f_162==((void*)0),    _if_conditional217) {
        __result315__ = -1;
        return __result315__;
    }
    result_163=fwrite(self,strlen(self),1,f_162);
    if(_if_conditional218=result_163<0,    _if_conditional218) {
        __result316__ = result_163;
        return __result316__;
    }
    result2_164=fclose(f_162);
    if(_if_conditional219=result2_164<0,    _if_conditional219) {
        __result317__ = result2_164;
        return __result317__;
    }
    __result318__ = result_163;
    return __result318__;
}

int charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional220;
int __result319__;
struct _IO_FILE* f_165;
_Bool _if_conditional221;
_Bool _if_conditional222;
int __result320__;
int result_166;
_Bool _if_conditional223;
int __result321__;
int result2_167;
_Bool _if_conditional224;
int __result322__;
int __result323__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_165, 0, sizeof(struct _IO_FILE*));
memset(&result_166, 0, sizeof(int));
memset(&result2_167, 0, sizeof(int));
    if(_if_conditional220=self==((void*)0)||file_name==((void*)0),    _if_conditional220) {
        __result319__ = -1;
        return __result319__;
    }
    if(append) {
        f_165=fopen(file_name,"a");
    }
    else {
        f_165=fopen(file_name,"w");
    }
    if(_if_conditional222=f_165==((void*)0),    _if_conditional222) {
        __result320__ = -1;
        return __result320__;
    }
    result_166=fwrite(self,strlen(self),1,f_165);
    if(_if_conditional223=result_166<0,    _if_conditional223) {
        __result321__ = result_166;
        return __result321__;
    }
    result2_167=fclose(f_165);
    if(_if_conditional224=result2_167<0,    _if_conditional224) {
        __result322__ = result2_167;
        return __result322__;
    }
    __result323__ = result_166;
    return __result323__;
}

char* string_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional225;
char* __result324__;
struct _IO_FILE* f_168;
_Bool _if_conditional226;
char* __result325__;
struct buffer* buf_169;
_Bool _while_condtional7;
int size_171;
_Bool _if_conditional227;
char* result_172;
int result2_173;
_Bool _if_conditional228;
char* __result326__;
char* __result327__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_168, 0, sizeof(struct _IO_FILE*));
memset(&buf_169, 0, sizeof(struct buffer*));
memset(&size_171, 0, sizeof(int));
memset(&result_172, 0, sizeof(char*));
memset(&result2_173, 0, sizeof(int));
    if(_if_conditional225=file_name==((void*)0),    _if_conditional225) {
        __result324__ = __result_obj__ = __builtin_string("");
        return __result324__;
    }
    f_168=fopen(file_name,"r");
    if(_if_conditional226=f_168==((void*)0),    _if_conditional226) {
        __result325__ = __result_obj__ = __builtin_string("");
        return __result325__;
    }
    buf_169=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 2058, "buffer"));
    while(_while_condtional7=1,    _while_condtional7) {
        char buf2_170[8192];
        memset(&buf2_170, 0, sizeof(char)        *(8192)        );
        size_171=fread(buf2_170,1,8192,f_168);
        buffer_append(buf_169,buf2_170,size_171);
        if(_if_conditional227=size_171<8192,        _if_conditional227) {
            break;
        }
    }
    result_172=buffer_to_string(buf_169);
    result2_173=fclose(f_168);
    if(_if_conditional228=result2_173<0,    _if_conditional228) {
        __result326__ = __result_obj__ = __builtin_string("");
        return __result326__;
    }
    __result327__ = __result_obj__ = result_172;
    return __result327__;
}

char* charp_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional229;
char* __result328__;
struct _IO_FILE* f_174;
_Bool _if_conditional230;
char* __result329__;
struct buffer* buf_175;
_Bool _while_condtional8;
int size_177;
_Bool _if_conditional231;
char* result_178;
int result2_179;
_Bool _if_conditional232;
char* __result330__;
char* __result331__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_174, 0, sizeof(struct _IO_FILE*));
memset(&buf_175, 0, sizeof(struct buffer*));
memset(&size_177, 0, sizeof(int));
memset(&result_178, 0, sizeof(char*));
memset(&result2_179, 0, sizeof(int));
    if(_if_conditional229=file_name==((void*)0),    _if_conditional229) {
        __result328__ = __result_obj__ = __builtin_string("");
        return __result328__;
    }
    f_174=fopen(file_name,"r");
    if(_if_conditional230=f_174==((void*)0),    _if_conditional230) {
        __result329__ = __result_obj__ = __builtin_string("");
        return __result329__;
    }
    buf_175=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c-gc.c", 2095, "buffer"));
    while(_while_condtional8=1,    _while_condtional8) {
        char buf2_176[8192];
        memset(&buf2_176, 0, sizeof(char)        *(8192)        );
        size_177=fread(buf2_176,1,8192,f_174);
        buffer_append(buf_175,buf2_176,size_177);
        if(_if_conditional231=size_177<8192,        _if_conditional231) {
            break;
        }
    }
    result_178=buffer_to_string(buf_175);
    result2_179=fclose(f_174);
    if(_if_conditional232=result2_179<0,    _if_conditional232) {
        __result330__ = __result_obj__ = __builtin_string("");
        return __result330__;
    }
    __result331__ = __result_obj__ = result_178;
    return __result331__;
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
struct list$1charph* result_180;
_Bool _if_conditional233;
struct list$1charph* __result332__;
_Bool _while_condtional9;
_Bool _if_conditional234;
struct list$1charph* __result333__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_180, 0, sizeof(struct list$1charph*));
    result_180=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c-gc.c", 2122, "list$1charph"));
    if(_if_conditional233=f==((void*)0),    _if_conditional233) {
        __result332__ = __result_obj__ = result_180;
        return __result332__;
    }
    while(_while_condtional9=1,    _while_condtional9) {
        char buf_181[8192];
        memset(&buf_181, 0, sizeof(char)        *(8192)        );
        if(_if_conditional234=fgets(buf_181,8192,f)==((void*)0),        _if_conditional234) {
            break;
        }
        list$1charph_push_back(result_180,__builtin_string(buf_181));
    }
    __result333__ = __result_obj__ = result_180;
    return __result333__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool _if_conditional235;
int __result334__;
struct _IO_FILE* f_182;
_Bool _if_conditional236;
int __result335__;
int __result336__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_182, 0, sizeof(struct _IO_FILE*));
    if(_if_conditional235=path==((void*)0)||mode==((void*)0),    _if_conditional235) {
        __result334__ = -1;
        return __result334__;
    }
    f_182=fopen(path,mode);
    if(f_182) {
        block(parent,f_182);
        fclose(f_182);
        __result335__ = 0;
        return __result335__;
    }
    __result336__ = -1;
    return __result336__;
}

char* charp_puts(char* self){
void* __result_obj__;
_Bool _if_conditional237;
char* __result337__;
char* __result338__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional237=self==((void*)0),    _if_conditional237) {
        __result337__ = __result_obj__ = __builtin_string("");
        return __result337__;
    }
    puts(self);
    __result338__ = __result_obj__ = __builtin_string(self);
    return __result338__;
}

char* charp_print(char* self){
void* __result_obj__;
_Bool _if_conditional238;
char* __result339__;
char* __result340__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional238=self==((void*)0),    _if_conditional238) {
        __result339__ = __result_obj__ = __builtin_string("");
        return __result339__;
    }
    printf("%s",self);
    __result340__ = __result_obj__ = __builtin_string(self);
    return __result340__;
}

char* string_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional239;
char* __result341__;
char* msg2_183;
va_list args_184;
char* __result342__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_183, 0, sizeof(char*));
memset(&args_184, 0, sizeof(va_list));
    if(_if_conditional239=self==((void*)0),    _if_conditional239) {
        __result341__ = __result_obj__ = __builtin_string("");
        return __result341__;
    }
    __builtin_va_start(args_184,self);
    vasprintf(&msg2_183,self,args_184);
    __builtin_va_end(args_184);
    printf("%s",msg2_183);
    free(msg2_183);
    __result342__ = __result_obj__ = __builtin_string(self);
    return __result342__;
}

char* charp_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional240;
char* __result343__;
char* msg2_185;
va_list args_186;
char* __result344__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_185, 0, sizeof(char*));
memset(&args_186, 0, sizeof(va_list));
    if(_if_conditional240=self==((void*)0),    _if_conditional240) {
        __result343__ = __result_obj__ = __builtin_string("");
        return __result343__;
    }
    __builtin_va_start(args_186,self);
    vasprintf(&msg2_185,self,args_186);
    __builtin_va_end(args_186);
    printf("%s",msg2_185);
    free(msg2_185);
    __result344__ = __result_obj__ = __builtin_string(self);
    return __result344__;
}

int int_printf(int self, char* msg){
void* __result_obj__;
int __result345__;
memset(&__result_obj__, 0, sizeof(void*));
    printf(msg,self);
    __result345__ = self;
    return __result345__;
}

char* string_puts(char* self){
void* __result_obj__;
_Bool _if_conditional241;
char* __result346__;
char* __result347__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional241=self==((void*)0),    _if_conditional241) {
        __result346__ = __result_obj__ = __builtin_string("");
        return __result346__;
    }
    puts(self);
    __result347__ = __result_obj__ = __builtin_string(self);
    return __result347__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
int i_187;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_187, 0, sizeof(int));
    for(    i_187=0;    i_187<self;    i_187++    ){
        block(parent,i_187);
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__;
struct integer* __result348__;
memset(&__result_obj__, 0, sizeof(void*));
    self->value=value;
    __result348__ = __result_obj__ = self;
    return __result348__;
}

int integer_to_int(struct integer* self){
void* __result_obj__;
int __result349__;
memset(&__result_obj__, 0, sizeof(void*));
    __result349__ = self->value;
    return __result349__;
}

struct integer* char_to_integer(char self){
void* __result_obj__;
struct integer* __result350__;
memset(&__result_obj__, 0, sizeof(void*));
    __result350__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2265, "integer"),self);
    return __result350__;
}

struct integer* short_to_integer(short short self){
void* __result_obj__;
struct integer* __result351__;
memset(&__result_obj__, 0, sizeof(void*));
    __result351__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2270, "integer"),self);
    return __result351__;
}

struct integer* int_to_integer(int self){
void* __result_obj__;
struct integer* __result352__;
memset(&__result_obj__, 0, sizeof(void*));
    __result352__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2275, "integer"),self);
    return __result352__;
}

struct integer* long_to_integer(long self){
void* __result_obj__;
struct integer* __result353__;
memset(&__result_obj__, 0, sizeof(void*));
    __result353__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2280, "integer"),self);
    return __result353__;
}

int integer_compare(struct integer* left, struct integer* right){
void* __result_obj__;
_Bool _if_conditional242;
int __result354__;
_Bool _if_conditional243;
int __result355__;
int __result356__;
int __result357__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional242=left->value<right->value,    _if_conditional242) {
        __result354__ = -1;
        return __result354__;
    }
    else {
        if(_if_conditional243=left->value>right->value,        _if_conditional243) {
            __result355__ = 1;
            return __result355__;
        }
        else {
            __result356__ = 0;
            return __result356__;
        }
    }
    __result357__ = 0;
    return __result357__;
}

_Bool integer_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result358__;
memset(&__result_obj__, 0, sizeof(void*));
    __result358__ = self->value==right->value;
    return __result358__;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result359__;
memset(&__result_obj__, 0, sizeof(void*));
    __result359__ = self->value==right->value;
    return __result359__;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result360__;
memset(&__result_obj__, 0, sizeof(void*));
    __result360__ = self->value!=right->value;
    return __result360__;
}

struct integer* integer_operator_add(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result361__;
memset(&__result_obj__, 0, sizeof(void*));
    __result361__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2315, "integer"),left->value+right->value);
    return __result361__;
}

struct integer* integer_operator_sub(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result362__;
memset(&__result_obj__, 0, sizeof(void*));
    __result362__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2320, "integer"),left->value-right->value);
    return __result362__;
}

struct integer* integer_operator_mult(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result363__;
memset(&__result_obj__, 0, sizeof(void*));
    __result363__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2325, "integer"),left->value*right->value);
    return __result363__;
}

struct integer* integer_operator_div(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result364__;
memset(&__result_obj__, 0, sizeof(void*));
    __result364__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2330, "integer"),left->value/right->value);
    return __result364__;
}

struct integer* integer_operator_mod(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result365__;
memset(&__result_obj__, 0, sizeof(void*));
    __result365__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2335, "integer"),left->value%right->value);
    return __result365__;
}

struct integer* integer_operator_lshift(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result366__;
memset(&__result_obj__, 0, sizeof(void*));
    __result366__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2340, "integer"),left->value<<right->value);
    return __result366__;
}

struct integer* integer_operator_rshift(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result367__;
memset(&__result_obj__, 0, sizeof(void*));
    __result367__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2345, "integer"),left->value>>right->value);
    return __result367__;
}

struct integer* integer_operator_gteq(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result368__;
memset(&__result_obj__, 0, sizeof(void*));
    __result368__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2350, "integer"),left->value>=right->value);
    return __result368__;
}

struct integer* integer_operator_lteq(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result369__;
memset(&__result_obj__, 0, sizeof(void*));
    __result369__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2355, "integer"),left->value<=right->value);
    return __result369__;
}

struct integer* integer_operator_lt(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result370__;
memset(&__result_obj__, 0, sizeof(void*));
    __result370__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2360, "integer"),left->value<right->value);
    return __result370__;
}

struct integer* integer_operator_gt(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result371__;
memset(&__result_obj__, 0, sizeof(void*));
    __result371__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2365, "integer"),left->value>right->value);
    return __result371__;
}

struct integer* integer_operator_and(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result372__;
memset(&__result_obj__, 0, sizeof(void*));
    __result372__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2370, "integer"),left->value&right->value);
    return __result372__;
}

struct integer* integer_operator_xor(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result373__;
memset(&__result_obj__, 0, sizeof(void*));
    __result373__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2375, "integer"),left->value^right->value);
    return __result373__;
}

struct integer* integer_operator_or(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result374__;
memset(&__result_obj__, 0, sizeof(void*));
    __result374__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2380, "integer"),left->value|right->value);
    return __result374__;
}

struct integer* integer_operator_andand(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result375__;
memset(&__result_obj__, 0, sizeof(void*));
    __result375__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2385, "integer"),left->value&&right->value);
    return __result375__;
}

struct integer* integer_operator_oror(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result376__;
memset(&__result_obj__, 0, sizeof(void*));
    __result376__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c-gc.c", 2390, "integer"),left->value||right->value);
    return __result376__;
}

