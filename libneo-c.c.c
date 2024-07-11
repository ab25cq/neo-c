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
char* gComeStackFrameSName[1024];
int gComeStackFrameSLine[1024];
int gComeStackFrameID[1024];
int gNumComeStackFrame=0;
char* gComeStackFrameBuffer=((void*)0);
void* gComeResultObject=((void*)0);
static _Bool gComeMallocLib=(_Bool)0;
static _Bool gComeDebugLib=(_Bool)0;
_Bool gComeGCLib=(_Bool)0;
static int gNumAlloc=0;
static int gNumFree=0;
struct sMemHeaderTiny
{
    long int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
};
struct sMemHeader
{
    long int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* class_name;
    char* sname[16];
    int sline[16];
    int id[16];
};
struct sMemHeader* gAllocMem;
struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    void** mFreeMem[4048];
    int mNumFreeMem[4048];
    int mSizeFreeMem[4048];
};
struct sHeapPage gHeapPages;

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

void come_push_stackframe(char* sname, int sline, int id);

void come_pop_stackframe();

void come_save_stackframe(char* sname, int sline);

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

static void* alloc_from_pages(long int size);
static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline, char* class_name);
static void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);

void* come_calloc(long int count, long int size, char* sname, int sline, char* class_name);

void come_free_object(void* mem);

void come_free(void* mem);

void* come_memdup(void* block, char* sname, int sline, char* class_name);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

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

static void va_list_finalize(va_list self);
char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* charp_split_char(char* self, char c);

static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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

static void integer_finalize(struct integer* self);
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










void come_push_stackframe(char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional19=gNumComeStackFrame<1024,    _if_conditional19) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
void* __result_obj__;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional20=gNumComeStackFrame>0,    _if_conditional20) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __result_obj__;
void* right_value79;
void* right_value80;
struct buffer* buf_47;
void* right_value81;
int i_48;
void* right_value82;
_Bool _if_conditional21;
void* right_value83;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&buf_47, 0, sizeof(struct buffer*));
right_value81 = (void*)0;
memset(&i_48, 0, sizeof(int));
right_value82 = (void*)0;
right_value83 = (void*)0;
    buf_47=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value80=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value79=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 40, "buffer"))))))));
    come_call_finalizer3(right_value79,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value80,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_47,((char*)(right_value81=xsprintf("%s %d\n",sname,sline))));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_48=gNumComeStackFrame-2;    i_48>=0;    i_48--    ){
        buffer_append_str(buf_47,((char*)(right_value82=xsprintf("%s %d #%d\n",gComeStackFrameSName[i_48],gComeStackFrameSLine[i_48],gComeStackFrameID[i_48]))));
        right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(right_value83=buffer_to_string(buf_47))));
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(buf_47,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

void stackframe(){
void* __result_obj__;
int i_49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_49, 0, sizeof(int));
    for(    i_49=gNumComeStackFrame-1;    i_49>=0;    i_49--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_49],gComeStackFrameSLine[i_49],gComeStackFrameID[i_49]);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
void* right_value84;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
    __result58__ = __result_obj__ = ((char*)(right_value84=__builtin_string(gComeStackFrameBuffer)));
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result58__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional22;
void* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional22=mem==((void*)0),    _if_conditional22) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result59__ = __result_obj__ = mem;
    return __result59__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
void* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional23=mem==((void*)0),    _if_conditional23) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(_if_conditional24=mem<begin,    _if_conditional24) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(_if_conditional25=mem>=end,    _if_conditional25) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result60__ = __result_obj__ = mem;
    return __result60__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional26;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional26=!self,    _if_conditional26) {
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
_Bool _if_conditional27;
int __result63__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional27=self<0,    _if_conditional27) {
        block(parent);
    }
    __result63__ = self;
    return __result63__;
}

int int_expect(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional28;
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional28=self<0,    _if_conditional28) {
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
_Bool _if_conditional29;
int __result66__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional29=self<0,    _if_conditional29) {
        block(parent);
    }
    __result66__ = self;
    return __result66__;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional30;
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional30=!self,    _if_conditional30) {
        block(parent);
    }
    __result67__ = self;
    return __result67__;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional31;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional31=!self,    _if_conditional31) {
        block(parent);
    }
    __result68__ = self;
    return __result68__;
}

void xassert(char* msg, _Bool test){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
    printf("%s...",msg);
    if(_if_conditional32=!test,    _if_conditional32) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
void* __result_obj__;
int i_50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_50, 0, sizeof(int));
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*1024);
    memset(gComeStackFrameSLine,0,sizeof(int)*1024);
    memset(gComeStackFrameID,0,sizeof(int)*1024);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_50=0;    i_50<gHeapPages.mSizePages;    i_50++    ){
        gHeapPages.mPages[i_50]=calloc(1,sizeof(char)*4048);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(void**)*4048);
    memset(gHeapPages.mNumFreeMem,0,sizeof(int)*4048);
    memset(gHeapPages.mSizeFreeMem,0,sizeof(int)*4048);
    gAllocMem=((void*)0);
}

void come_heap_final(){
void* __result_obj__;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
struct sMemHeader* it_51;
int n_52;
_Bool flag_53;
_Bool _if_conditional36;
int i_54;
_Bool _if_conditional37;
_Bool _if_conditional38;
struct sMemHeaderTiny* it_55;
int n_56;
_Bool _if_conditional39;
int i_57;
int i_58;
_Bool _if_conditional40;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_51, 0, sizeof(struct sMemHeader*));
memset(&n_52, 0, sizeof(int));
memset(&flag_53, 0, sizeof(_Bool));
memset(&i_54, 0, sizeof(int));
memset(&it_55, 0, sizeof(struct sMemHeaderTiny*));
memset(&n_56, 0, sizeof(int));
memset(&i_57, 0, sizeof(int));
memset(&i_58, 0, sizeof(int));
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    if(gComeGCLib) {
    }
    else {
        if(gComeDebugLib) {
            it_51=gAllocMem;
            n_52=0;
            while(it_51) {
                n_52++;
                flag_53=(_Bool)0;
                printf("#%d ",n_52);
                if(it_51->class_name) {
                    printf("%p (%s): ",(char*)it_51+sizeof(struct sMemHeader)+sizeof(long int)+sizeof(long int),it_51->class_name);
                }
                for(                i_54=0;                i_54<16;                i_54++                ){
                    if(_if_conditional37=it_51->sname[i_54],                    _if_conditional37) {
                        printf("%s %d #%d, ",it_51->sname[i_54],it_51->sline[i_54],it_51->id[i_54]);
                        flag_53=(_Bool)1;
                    }
                }
                if(flag_53) {
                    puts("");
                }
                it_51=it_51->next;
            }
            printf("%d memory leaks. %d alloc, %d free.\n",n_52,gNumAlloc,gNumFree);
        }
        else {
            it_55=(struct sMemHeaderTiny*)gAllocMem;
            n_56=0;
            while(it_55) {
                n_56++;
                it_55=it_55->next;
            }
            if(_if_conditional39=n_56>0,            _if_conditional39) {
                printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_56,gNumAlloc,gNumFree);
            }
        }
    }
    for(    i_57=0;    i_57<gHeapPages.mSizePages;    i_57++    ){
        free(gHeapPages.mPages[i_57]);
    }
    free(gHeapPages.mPages);
    for(    i_58=0;    i_58<4048;    i_58++    ){
        if(_if_conditional40=gHeapPages.mFreeMem[i_58],        _if_conditional40) {
            free(gHeapPages.mFreeMem[i_58]);
        }
    }
}

static void* alloc_from_pages(long int size){
void* __result_obj__;
void* result_59;
_Bool _if_conditional41;
_Bool _if_conditional42;
struct sMemHeaderTiny* it_60;
_Bool _if_conditional43;
long int free_area_61;
_Bool _if_conditional44;
_Bool _if_conditional45;
int new_size_pages_62;
void** new_pages_63;
int i_64;
void* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_59, 0, sizeof(void*));
memset(&it_60, 0, sizeof(struct sMemHeaderTiny*));
memset(&free_area_61, 0, sizeof(long int));
memset(&new_size_pages_62, 0, sizeof(int));
memset(&new_pages_63, 0, sizeof(void**));
memset(&i_64, 0, sizeof(int));
    result_59=((void*)0);
    if(_if_conditional41=size<4048,    _if_conditional41) {
        if(_if_conditional42=gHeapPages.mFreeMem[size]&&gHeapPages.mNumFreeMem[size]>0,        _if_conditional42) {
            it_60=gHeapPages.mFreeMem[size][gHeapPages.mNumFreeMem[size]-1];
            gHeapPages.mNumFreeMem[size]--;
        }
        if(_if_conditional43=result_59==((void*)0),        _if_conditional43) {
            free_area_61=gHeapPages.mPages[gHeapPages.mCurrentPages]+4048-gHeapPages.mTop;
            if(_if_conditional44=size>=free_area_61,            _if_conditional44) {
                gHeapPages.mCurrentPages++;
                if(_if_conditional45=gHeapPages.mCurrentPages==gHeapPages.mSizePages,                _if_conditional45) {
                    new_size_pages_62=gHeapPages.mSizePages*2;
                    new_pages_63=calloc(1,sizeof(char*)*new_size_pages_62);
                    i_64=0;
                    for(                    ;                    i_64<gHeapPages.mSizePages;                    i_64++                    ){
                        new_pages_63[i_64]=gHeapPages.mPages[i_64];
                    }
                    for(                    ;                    i_64<new_size_pages_62;                    i_64++                    ){
                        new_pages_63[i_64]=calloc(1,sizeof(char)*4048);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_63;
                    gHeapPages.mSizePages=new_size_pages_62;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_59=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_59=calloc(1,size);
    }
    __result69__ = __result_obj__ = result_59;
    return __result69__;
}

static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional46;
void* result_65;
struct sMemHeader* it_66;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
void* __result70__;
void* result_67;
struct sMemHeaderTiny* it_68;
_Bool _if_conditional50;
void* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_65, 0, sizeof(void*));
memset(&it_66, 0, sizeof(struct sMemHeader*));
memset(&result_67, 0, sizeof(void*));
memset(&it_68, 0, sizeof(struct sMemHeaderTiny*));
    if(gComeDebugLib) {
        result_65=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_66=result_65;
        it_66->allocated=177783;
        it_66->size=size+sizeof(struct sMemHeader);
        come_push_stackframe(sname,sline,0);
        if(_if_conditional47=gNumComeStackFrame<16,        _if_conditional47) {
            memcpy(it_66->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_66->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(it_66->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_66->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_66->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(it_66->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        it_66->next=gAllocMem;
        it_66->prev=((void*)0);
        if(class_name) {
            it_66->class_name=strdup(class_name);
        }
        else {
            it_66->class_name=((void*)0);
        }
        if(gAllocMem) {
            gAllocMem->prev=it_66;
        }
        gAllocMem=it_66;
        gNumAlloc++;
        __result70__ = __result_obj__ = (char*)result_65+sizeof(struct sMemHeader);
        return __result70__;
    }
    else {
        result_67=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_68=result_67;
        it_68->allocated=177783;
        it_68->size=size+sizeof(struct sMemHeaderTiny);
        it_68->next=(struct sMemHeaderTiny*)gAllocMem;
        it_68->prev=((void*)0);
        if(gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_68;
        }
        gAllocMem=(struct sMemHeader*)it_68;
        gNumAlloc++;
        __result71__ = __result_obj__ = (char*)result_67+sizeof(struct sMemHeaderTiny);
        return __result71__;
    }
}

static void come_free_mem_of_heap_pool(void* mem){
void* __result_obj__;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
struct sMemHeader* it_69;
_Bool _if_conditional54;
struct sMemHeader* prev_it_70;
struct sMemHeader* next_it_71;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
long int size_72;
_Bool _if_conditional60;
int num_free_mem_73;
int size_free_mem_74;
_Bool _if_conditional61;
int new_size_free_mem_75;
void** new_free_mem_76;
_Bool _if_conditional62;
int new_size_free_mem_77;
void** new_free_mem_78;
struct sMemHeaderTiny* it_79;
_Bool _if_conditional63;
struct sMemHeaderTiny* prev_it_80;
struct sMemHeaderTiny* next_it_81;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
long int size_82;
_Bool _if_conditional68;
int num_free_mem_83;
int size_free_mem_84;
_Bool _if_conditional69;
int new_size_free_mem_85;
void** new_free_mem_86;
_Bool _if_conditional70;
int new_size_free_mem_87;
void** new_free_mem_88;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_69, 0, sizeof(struct sMemHeader*));
memset(&prev_it_70, 0, sizeof(struct sMemHeader*));
memset(&next_it_71, 0, sizeof(struct sMemHeader*));
memset(&size_72, 0, sizeof(long int));
memset(&num_free_mem_73, 0, sizeof(int));
memset(&size_free_mem_74, 0, sizeof(int));
memset(&new_size_free_mem_75, 0, sizeof(int));
memset(&new_free_mem_76, 0, sizeof(void**));
memset(&new_size_free_mem_77, 0, sizeof(int));
memset(&new_free_mem_78, 0, sizeof(void**));
memset(&it_79, 0, sizeof(struct sMemHeaderTiny*));
memset(&prev_it_80, 0, sizeof(struct sMemHeaderTiny*));
memset(&next_it_81, 0, sizeof(struct sMemHeaderTiny*));
memset(&size_82, 0, sizeof(long int));
memset(&num_free_mem_83, 0, sizeof(int));
memset(&size_free_mem_84, 0, sizeof(int));
memset(&new_size_free_mem_85, 0, sizeof(int));
memset(&new_free_mem_86, 0, sizeof(void**));
memset(&new_size_free_mem_87, 0, sizeof(int));
memset(&new_free_mem_88, 0, sizeof(void**));
    if(mem) {
        if(gComeGCLib) {
        }
        else {
            if(gComeDebugLib) {
                it_69=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
                if(_if_conditional54=it_69->allocated!=177783,                _if_conditional54) {
                    return;
                }
                it_69->allocated=0;
                prev_it_70=it_69->prev;
                next_it_71=it_69->next;
                if(it_69->class_name) {
                    free(it_69->class_name);
                }
                if(_if_conditional56=gAllocMem==it_69,                _if_conditional56) {
                    gAllocMem=next_it_71;
                    if(gAllocMem) {
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    if(prev_it_70) {
                        prev_it_70->next=next_it_71;
                    }
                    if(next_it_71) {
                        next_it_71->prev=prev_it_70;
                    }
                }
                size_72=it_69->size;
                if(_if_conditional60=size_72<4048,                _if_conditional60) {
                    num_free_mem_73=gHeapPages.mNumFreeMem[size_72];
                    size_free_mem_74=gHeapPages.mSizeFreeMem[size_72];
                    if(_if_conditional61=gHeapPages.mFreeMem[size_72]==((void*)0),                    _if_conditional61) {
                        new_size_free_mem_75=16;
                        new_free_mem_76=calloc(1,sizeof(void*)*new_size_free_mem_75);
                        gHeapPages.mSizeFreeMem[size_72]=new_size_free_mem_75;
                        gHeapPages.mFreeMem[size_72]=new_free_mem_76;
                    }
                    else {
                        if(_if_conditional62=num_free_mem_73==size_free_mem_74,                        _if_conditional62) {
                            new_size_free_mem_77=size_free_mem_74*2;
                            new_free_mem_78=calloc(1,sizeof(void*)*new_size_free_mem_77);
                            memcpy(new_free_mem_78,gHeapPages.mFreeMem[size_72],sizeof(void*)*num_free_mem_73);
                            free(gHeapPages.mFreeMem[size_72]);
                            gHeapPages.mSizeFreeMem[size_72]=new_size_free_mem_77;
                            gHeapPages.mFreeMem[size_72]=new_free_mem_78;
                        }
                    }
                    gHeapPages.mFreeMem[size_72][gHeapPages.mNumFreeMem[size_72]]=it_69;
                    gHeapPages.mNumFreeMem[size_72]++;
                }
                else {
                    free(it_69);
                }
                gNumFree++;
            }
            else {
                it_79=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
                if(_if_conditional63=it_79->allocated!=177783,                _if_conditional63) {
                    return;
                }
                it_79->allocated=0;
                prev_it_80=it_79->prev;
                next_it_81=it_79->next;
                if(_if_conditional64=gAllocMem==it_79,                _if_conditional64) {
                    gAllocMem=(struct sMemHeader*)next_it_81;
                    if(gAllocMem) {
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    if(prev_it_80) {
                        prev_it_80->next=next_it_81;
                    }
                    if(next_it_81) {
                        next_it_81->prev=prev_it_80;
                    }
                }
                size_82=it_79->size;
                if(_if_conditional68=size_82<4048,                _if_conditional68) {
                    num_free_mem_83=gHeapPages.mNumFreeMem[size_82];
                    size_free_mem_84=gHeapPages.mSizeFreeMem[size_82];
                    if(_if_conditional69=gHeapPages.mFreeMem[size_82]==((void*)0),                    _if_conditional69) {
                        new_size_free_mem_85=16;
                        new_free_mem_86=calloc(1,sizeof(void*)*new_size_free_mem_85);
                        gHeapPages.mSizeFreeMem[size_82]=new_size_free_mem_85;
                        gHeapPages.mFreeMem[size_82]=new_free_mem_86;
                    }
                    else {
                        if(_if_conditional70=num_free_mem_83==size_free_mem_84,                        _if_conditional70) {
                            new_size_free_mem_87=size_free_mem_84*2;
                            new_free_mem_88=calloc(1,sizeof(void*)*new_size_free_mem_87);
                            memcpy(new_free_mem_88,gHeapPages.mFreeMem[size_82],sizeof(void*)*num_free_mem_83);
                            free(gHeapPages.mFreeMem[size_82]);
                            gHeapPages.mSizeFreeMem[size_82]=new_size_free_mem_87;
                            gHeapPages.mFreeMem[size_82]=new_free_mem_88;
                        }
                    }
                    gHeapPages.mFreeMem[size_82][gHeapPages.mNumFreeMem[size_82]]=it_79;
                    gHeapPages.mNumFreeMem[size_82]++;
                }
                else {
                    free(it_79);
                }
                gNumFree++;
            }
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__;
struct sMemHeader* it_89;
_Bool _if_conditional71;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_89, 0, sizeof(struct sMemHeader*));
    it_89=(struct sMemHeader*)((char*)mem-sizeof(long int)-sizeof(long int)-sizeof(struct sMemHeaderTiny));
    if(_if_conditional71=it_89->allocated!=177783,    _if_conditional71) {
        printf("invalid heap object(%p)\n",it_89);
        exit(2);
    }
    __result72__ = __result_obj__ = it_89->class_name;
    return __result72__;
}

void* come_calloc(long int count, long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
char* mem_90;
long int* ref_count_91;
long int* size2_92;
void* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_90, 0, sizeof(char*));
memset(&ref_count_91, 0, sizeof(long int*));
memset(&size2_92, 0, sizeof(long int*));
    mem_90=come_alloc_mem_from_heap_pool(sizeof(long int)+sizeof(long int)+count*size,sname,sline,class_name);
    ref_count_91=(long int*)mem_90;
    *ref_count_91=0;
    size2_92=(long int*)(mem_90+sizeof(long int));
    *size2_92=size*count+sizeof(long int)+sizeof(long int);
    __result73__ = __result_obj__ = mem_90+sizeof(long int)+sizeof(long int);
    return __result73__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool _if_conditional72;
long int* ref_count_93;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_93, 0, sizeof(long int*));
    if(_if_conditional72=mem==((void*)0),    _if_conditional72) {
        return;
    }
    ref_count_93=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    come_free_mem_of_heap_pool((char*)ref_count_93);
}

void come_free(void* mem){
void* __result_obj__;
_Bool _if_conditional73;
long int* ref_count_94;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_94, 0, sizeof(long int*));
    if(_if_conditional73=mem==((void*)0),    _if_conditional73) {
        return;
    }
    ref_count_94=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    come_free_mem_of_heap_pool((char*)ref_count_94);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional74;
void* __result74__;
char* mem_95;
long int* size_p_96;
long int size_97;
void* result_98;
void* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_95, 0, sizeof(char*));
memset(&size_p_96, 0, sizeof(long int*));
memset(&size_97, 0, sizeof(long int));
memset(&result_98, 0, sizeof(void*));
    if(_if_conditional74=!block,    _if_conditional74) {
        __result74__ = __result_obj__ = ((void*)0);
        return __result74__;
    }
    mem_95=(char*)block-sizeof(long int)-sizeof(long int);
    size_p_96=(long int*)(mem_95+sizeof(long int));
    size_97=*size_p_96-sizeof(long int)-sizeof(long int);
    result_98=come_calloc(1,size_97,sname,sline,class_name);
    memcpy(result_98,block,size_97);
    __result75__ = __result_obj__ = result_98;
    return __result75__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional75;
void* __result76__;
long int* ref_count_99;
void* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_99, 0, sizeof(long int*));
    if(_if_conditional75=mem==((void*)0),    _if_conditional75) {
        __result76__ = __result_obj__ = mem;
        return __result76__;
    }
    ref_count_99=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    (*ref_count_99)++;
    __result77__ = __result_obj__ = mem;
    return __result77__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional76;
void* __result78__;
long int* ref_count_100;
void* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_100, 0, sizeof(long int*));
    if(_if_conditional76=mem==((void*)0),    _if_conditional76) {
        __result78__ = __result_obj__ = mem;
        return __result78__;
    }
    ref_count_100=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    printf("ref_count %ld\n",*ref_count_100);
    __result79__ = __result_obj__ = mem;
    return __result79__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional77;
void* __result80__;
long int* ref_count_101;
_Bool _if_conditional78;
long int count_102;
_Bool _if_conditional79;
_Bool _if_conditional80;
void (*finalizer_103)(void*);
void* __result81__;
void* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_101, 0, sizeof(long int*));
memset(&count_102, 0, sizeof(long int));
memset(&finalizer_103, 0, sizeof(void (*)(void*)));
    if(_if_conditional77=mem==((void*)0),    _if_conditional77) {
        __result80__ = __result_obj__ = ((void*)0);
        return __result80__;
    }
    ref_count_101=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    if(_if_conditional78=!no_decrement,    _if_conditional78) {
        (*ref_count_101)--;
    }
    count_102=*ref_count_101;
    if(_if_conditional79=!no_free&&(count_102<=0||force_delete_),    _if_conditional79) {
        if(_if_conditional80=protocol_obj&&protocol_fun,        _if_conditional80) {
            finalizer_103=protocol_fun;
            finalizer_103(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result81__ = __result_obj__ = ((void*)0);
        return __result81__;
    }
    __result82__ = __result_obj__ = mem;
    return __result82__;
}

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* __result83__;
_Bool _if_conditional83;
void* __result84__;
long int* ref_count_104;
_Bool _if_conditional84;
long int count_105;
_Bool _if_conditional85;
_Bool _if_conditional86;
void (*finalizer_106)(void*);
void* __result85__;
void* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_104, 0, sizeof(long int*));
memset(&count_105, 0, sizeof(long int));
memset(&finalizer_106, 0, sizeof(void (*)(void*)));
    if(result_obj) {
        if(_if_conditional82=mem==result_obj,        _if_conditional82) {
            __result83__ = __result_obj__ = mem;
            return __result83__;
        }
    }
    if(_if_conditional83=mem==((void*)0),    _if_conditional83) {
        __result84__ = __result_obj__ = ((void*)0);
        return __result84__;
    }
    ref_count_104=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    if(_if_conditional84=!no_decrement,    _if_conditional84) {
        (*ref_count_104)--;
    }
    count_105=*ref_count_104;
    if(_if_conditional85=!no_free&&(count_105<=0||force_delete_),    _if_conditional85) {
        if(_if_conditional86=protocol_obj&&protocol_fun,        _if_conditional86) {
            finalizer_106=protocol_fun;
            finalizer_106(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result85__ = __result_obj__ = ((void*)0);
        return __result85__;
    }
    __result86__ = __result_obj__ = mem;
    return __result86__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* __result_obj__;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
void (*finalizer_107)(void*);
void (*finalizer_108)(void*);
long int* ref_count_109;
_Bool _if_conditional91;
long int count_110;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
void (*finalizer_111)(void*);
_Bool _if_conditional95;
void (*finalizer_112)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_107, 0, sizeof(void (*)(void*)));
memset(&finalizer_108, 0, sizeof(void (*)(void*)));
memset(&ref_count_109, 0, sizeof(long int*));
memset(&count_110, 0, sizeof(long int));
memset(&finalizer_111, 0, sizeof(void (*)(void*)));
memset(&finalizer_112, 0, sizeof(void (*)(void*)));
    if(_if_conditional87=mem==((void*)0),    _if_conditional87) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(_if_conditional90=protocol_obj&&protocol_fun,            _if_conditional90) {
                finalizer_107=protocol_fun;
                finalizer_107(protocol_obj);
            }
            finalizer_108=fun;
            finalizer_108(mem);
        }
    }
    else {
        ref_count_109=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
        if(_if_conditional91=!no_decrement,        _if_conditional91) {
            (*ref_count_109)--;
        }
        count_110=*ref_count_109;
        if(_if_conditional92=!no_free&&(count_110<=0||force_delete_),        _if_conditional92) {
            if(mem) {
                if(_if_conditional94=protocol_obj&&protocol_fun,                _if_conditional94) {
                    finalizer_111=protocol_fun;
                    finalizer_111(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    finalizer_112=fun;
                    finalizer_112(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void* __result_obj__;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
void (*finalizer_113)(void*);
void (*finalizer_114)(void*);
long int* ref_count_115;
_Bool _if_conditional102;
long int count_116;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
void (*finalizer_117)(void*);
_Bool _if_conditional106;
void (*finalizer_118)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_113, 0, sizeof(void (*)(void*)));
memset(&finalizer_114, 0, sizeof(void (*)(void*)));
memset(&ref_count_115, 0, sizeof(long int*));
memset(&count_116, 0, sizeof(long int));
memset(&finalizer_117, 0, sizeof(void (*)(void*)));
memset(&finalizer_118, 0, sizeof(void (*)(void*)));
    if(result_obj) {
        if(_if_conditional97=mem==result_obj,        _if_conditional97) {
            return;
        }
    }
    if(_if_conditional98=mem==((void*)0),    _if_conditional98) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(_if_conditional101=protocol_obj&&protocol_fun,            _if_conditional101) {
                finalizer_113=protocol_fun;
                finalizer_113(protocol_obj);
            }
            finalizer_114=fun;
            finalizer_114(mem);
        }
    }
    else {
        ref_count_115=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
        if(_if_conditional102=!no_decrement,        _if_conditional102) {
            (*ref_count_115)--;
        }
        count_116=*ref_count_115;
        if(_if_conditional103=!no_free&&(count_116<=0||force_delete_),        _if_conditional103) {
            if(mem) {
                if(_if_conditional105=protocol_obj&&protocol_fun,                _if_conditional105) {
                    finalizer_117=protocol_fun;
                    finalizer_117(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    finalizer_118=fun;
                    finalizer_118(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void* __result_obj__;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
void (*finalizer_119)(void*);
long int* ref_count_120;
_Bool _if_conditional112;
long int count_121;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
void (*finalizer_122)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_119, 0, sizeof(void (*)(void*)));
memset(&ref_count_120, 0, sizeof(long int*));
memset(&count_121, 0, sizeof(long int));
memset(&finalizer_122, 0, sizeof(void (*)(void*)));
    if(result_obj) {
        if(_if_conditional108=mem==result_obj,        _if_conditional108) {
            return;
        }
    }
    if(_if_conditional109=mem==((void*)0),    _if_conditional109) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            finalizer_119=fun;
            finalizer_119(mem);
        }
    }
    else {
        ref_count_120=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
        if(_if_conditional112=!no_decrement,        _if_conditional112) {
            (*ref_count_120)--;
        }
        count_121=*ref_count_120;
        if(_if_conditional113=!no_free&&(count_121<=0||force_delete_),        _if_conditional113) {
            if(mem) {
                if(fun) {
                    finalizer_122=fun;
                    finalizer_122(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool _if_conditional116;
char* __result87__;
int len_123;
void* right_value85;
char* result_124;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_123, 0, sizeof(int));
right_value85 = (void*)0;
memset(&result_124, 0, sizeof(char*));
    if(_if_conditional116=str==((void*)0),    _if_conditional116) {
        __result87__ = __result_obj__ = ((void*)0);
        return __result87__;
    }
    len_123=strlen(str)+1;
    result_124=(char*)come_increment_ref_count(((char*)(right_value85=(char*)come_calloc(1, sizeof(char)*(1*(len_123)), "libneo-c.c", 952, "char"))));
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    strncpy(result_124,str,len_123);
    __result88__ = __result_obj__ = result_124;
    result_124 = come_decrement_ref_count2(result_124, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result88__;
    result_124 = come_decrement_ref_count2(result_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool found_125;
int i_126;
_Bool _if_conditional117;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&found_125, 0, sizeof(_Bool));
memset(&i_126, 0, sizeof(int));
    found_125=(_Bool)0;
    for(    i_126=0;    i_126<len;    i_126++    ){
        if(_if_conditional117=array[i_126]==element,        _if_conditional117) {
            found_125=(_Bool)1;
            break;
        }
    }
    __result89__ = found_125;
    return __result89__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
void* right_value86;
char* __dec_obj12;
struct buffer* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
    self->size=128;
    __dec_obj12=self->buf;
    self->buf=(char*)come_increment_ref_count(((char*)(right_value86=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 977, "char"))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->buf[0]=0;
    self->len=0;
    __result90__ = __result_obj__ = self;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result90__;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional118;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional118=self&&self->buf,    _if_conditional118) {
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional119=self&&self->buf,    _if_conditional119) {
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional120;
struct buffer* __result91__;
void* right_value87;
struct buffer* result_127;
void* right_value88;
char* __dec_obj13;
struct buffer* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&result_127, 0, sizeof(struct buffer*));
right_value88 = (void*)0;
    if(_if_conditional120=self==((void*)0),    _if_conditional120) {
        __result91__ = __result_obj__ = ((void*)0);
        return __result91__;
    }
    result_127=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value87=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 999, "buffer"))));
    come_call_finalizer3(right_value87,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_127->size=self->size;
    __dec_obj13=result_127->buf;
    result_127->buf=(char*)come_increment_ref_count(((char*)(right_value88=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1002, "char"))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_127->len=self->len;
    memcpy(result_127->buf,self->buf,self->len);
    __result92__ = __result_obj__ = result_127;
    come_call_finalizer3(result_127,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result92__;
    come_call_finalizer3(result_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional121;
int __result93__;
int __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional121=self==((void*)0),    _if_conditional121) {
        __result93__ = 0;
        return __result93__;
    }
    __result94__ = self->len;
    return __result94__;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional122=self==((void*)0),    _if_conditional122) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool _if_conditional123;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional123=self==((void*)0),    _if_conditional123) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, long int size){
void* __result_obj__;
_Bool _if_conditional124;
struct buffer* __result95__;
_Bool _if_conditional125;
void* right_value89;
char* old_buf_128;
int old_len_129;
int new_size_130;
void* right_value90;
char* __dec_obj14;
struct buffer* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&old_buf_128, 0, sizeof(char*));
memset(&old_len_129, 0, sizeof(int));
memset(&new_size_130, 0, sizeof(int));
right_value90 = (void*)0;
    if(_if_conditional124=self==((void*)0)||mem==((void*)0),    _if_conditional124) {
        __result95__ = __result_obj__ = self;
        return __result95__;
    }
    if(_if_conditional125=self->len+size+1+1>=self->size,    _if_conditional125) {
        old_buf_128=(char*)come_increment_ref_count(((char*)(right_value89=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1041, "char"))));
        right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_128,self->buf,self->size);
        old_len_129=self->len;
        new_size_130=(self->size+size+1)*2;
        __dec_obj14=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value90=(char*)come_calloc(1, sizeof(char)*(1*(new_size_130)), "libneo-c.c", 1045, "char"))));
        __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_128,old_len_129);
        self->buf[old_len_129]=0;
        self->size=new_size_130;
        old_buf_128 = come_decrement_ref_count2(old_buf_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result96__ = __result_obj__ = self;
    return __result96__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool _if_conditional126;
struct buffer* __result97__;
_Bool _if_conditional127;
void* right_value91;
char* old_buf_131;
int old_len_132;
int new_size_133;
void* right_value92;
char* __dec_obj15;
struct buffer* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&old_buf_131, 0, sizeof(char*));
memset(&old_len_132, 0, sizeof(int));
memset(&new_size_133, 0, sizeof(int));
right_value92 = (void*)0;
    if(_if_conditional126=self==((void*)0),    _if_conditional126) {
        __result97__ = __result_obj__ = ((void*)0);
        return __result97__;
    }
    if(_if_conditional127=self->len+1+1+1>=self->size,    _if_conditional127) {
        old_buf_131=(char*)come_increment_ref_count(((char*)(right_value91=charp_clone(self->buf))));
        right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        old_len_132=self->len;
        new_size_133=(self->size+10+1)*2;
        __dec_obj15=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value92=(char*)come_calloc(1, sizeof(char)*(1*(new_size_133)), "libneo-c.c", 1068, "char"))));
        __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_131,old_len_132);
        self->buf[old_len_132]=0;
        self->size=new_size_133;
        old_buf_131 = come_decrement_ref_count2(old_buf_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result98__ = __result_obj__ = self;
    return __result98__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional128;
struct buffer* __result99__;
int size_134;
_Bool _if_conditional129;
void* right_value93;
char* old_buf_135;
int old_len_136;
int new_size_137;
void* right_value94;
char* __dec_obj16;
struct buffer* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_134, 0, sizeof(int));
right_value93 = (void*)0;
memset(&old_buf_135, 0, sizeof(char*));
memset(&old_len_136, 0, sizeof(int));
memset(&new_size_137, 0, sizeof(int));
right_value94 = (void*)0;
    if(_if_conditional128=self==((void*)0)||mem==((void*)0),    _if_conditional128) {
        __result99__ = __result_obj__ = self;
        return __result99__;
    }
    size_134=strlen(mem);
    if(_if_conditional129=self->len+size_134+1+1>=self->size,    _if_conditional129) {
        old_buf_135=(char*)come_increment_ref_count(((char*)(right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1090, "char"))));
        right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_135,self->buf,self->size);
        old_len_136=self->len;
        new_size_137=(self->size+size_134+1)*2;
        __dec_obj16=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value94=(char*)come_calloc(1, sizeof(char)*(1*(new_size_137)), "libneo-c.c", 1094, "char"))));
        __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_135,old_len_136);
        self->buf[old_len_136]=0;
        self->size=new_size_137;
        old_buf_135 = come_decrement_ref_count2(old_buf_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_134);
    self->len+=size_134;
    self->buf[self->len]=0;
    __result100__ = __result_obj__ = self;
    return __result100__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional130;
struct buffer* __result101__;
int size_138;
_Bool _if_conditional131;
void* right_value95;
char* old_buf_139;
int old_len_140;
int new_size_141;
void* right_value96;
char* __dec_obj17;
struct buffer* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_138, 0, sizeof(int));
right_value95 = (void*)0;
memset(&old_buf_139, 0, sizeof(char*));
memset(&old_len_140, 0, sizeof(int));
memset(&new_size_141, 0, sizeof(int));
right_value96 = (void*)0;
    if(_if_conditional130=self==((void*)0)||mem==((void*)0),    _if_conditional130) {
        __result101__ = __result_obj__ = self;
        return __result101__;
    }
    size_138=strlen(mem)+1;
    if(_if_conditional131=self->len+size_138+1+1+1>=self->size,    _if_conditional131) {
        old_buf_139=(char*)come_increment_ref_count(((char*)(right_value95=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1114, "char"))));
        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_139,self->buf,self->size);
        old_len_140=self->len;
        new_size_141=(self->size+size_138+1)*2;
        __dec_obj17=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value96=(char*)come_calloc(1, sizeof(char)*(1*(new_size_141)), "libneo-c.c", 1118, "char"))));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_139,old_len_140);
        self->buf[old_len_140]=0;
        self->size=new_size_141;
        old_buf_139 = come_decrement_ref_count2(old_buf_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_138);
    self->len+=size_138;
    self->buf[self->len]=0;
    self->len++;
    __result102__ = __result_obj__ = self;
    return __result102__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool _if_conditional132;
struct buffer* __result103__;
int* mem_142;
int size_143;
_Bool _if_conditional133;
void* right_value97;
char* old_buf_144;
int old_len_145;
int new_size_146;
void* right_value98;
char* __dec_obj18;
struct buffer* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_142, 0, sizeof(int*));
memset(&size_143, 0, sizeof(int));
right_value97 = (void*)0;
memset(&old_buf_144, 0, sizeof(char*));
memset(&old_len_145, 0, sizeof(int));
memset(&new_size_146, 0, sizeof(int));
right_value98 = (void*)0;
    if(_if_conditional132=self==((void*)0),    _if_conditional132) {
        __result103__ = __result_obj__ = ((void*)0);
        return __result103__;
    }
    mem_142=&value;
    size_143=sizeof(int);
    if(_if_conditional133=self->len+size_143+1+1>=self->size,    _if_conditional133) {
        old_buf_144=(char*)come_increment_ref_count(((char*)(right_value97=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1141, "char"))));
        right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_144,self->buf,self->size);
        old_len_145=self->len;
        new_size_146=(self->size+size_143+1)*2;
        __dec_obj18=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value98=(char*)come_calloc(1, sizeof(char)*(1*(new_size_146)), "libneo-c.c", 1145, "char"))));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_144,old_len_145);
        self->buf[old_len_145]=0;
        self->size=new_size_146;
        old_buf_144 = come_decrement_ref_count2(old_buf_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_142,size_143);
    self->len+=size_143;
    self->buf[self->len]=0;
    __result104__ = __result_obj__ = self;
    return __result104__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
long* mem_147;
int size_148;
_Bool _if_conditional134;
void* right_value99;
char* old_buf_149;
int old_len_150;
int new_size_151;
void* right_value100;
char* __dec_obj19;
struct buffer* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_147, 0, sizeof(long*));
memset(&size_148, 0, sizeof(int));
right_value99 = (void*)0;
memset(&old_buf_149, 0, sizeof(char*));
memset(&old_len_150, 0, sizeof(int));
memset(&new_size_151, 0, sizeof(int));
right_value100 = (void*)0;
    mem_147=&value;
    size_148=sizeof(long);
    if(_if_conditional134=self->len+size_148+1+1>=self->size,    _if_conditional134) {
        old_buf_149=(char*)come_increment_ref_count(((char*)(right_value99=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1164, "char"))));
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_149,self->buf,self->size);
        old_len_150=self->len;
        new_size_151=(self->size+size_148+1)*2;
        __dec_obj19=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value100=(char*)come_calloc(1, sizeof(char)*(1*(new_size_151)), "libneo-c.c", 1168, "char"))));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_149,old_len_150);
        self->buf[old_len_150]=0;
        self->size=new_size_151;
        old_buf_149 = come_decrement_ref_count2(old_buf_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_147,size_148);
    self->len+=size_148;
    self->buf[self->len]=0;
    __result105__ = __result_obj__ = self;
    return __result105__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool _if_conditional135;
struct buffer* __result106__;
short short* mem_152;
int size_153;
_Bool _if_conditional136;
void* right_value101;
char* old_buf_154;
int old_len_155;
int new_size_156;
void* right_value102;
char* __dec_obj20;
struct buffer* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_152, 0, sizeof(short short*));
memset(&size_153, 0, sizeof(int));
right_value101 = (void*)0;
memset(&old_buf_154, 0, sizeof(char*));
memset(&old_len_155, 0, sizeof(int));
memset(&new_size_156, 0, sizeof(int));
right_value102 = (void*)0;
    if(_if_conditional135=self==((void*)0),    _if_conditional135) {
        __result106__ = __result_obj__ = ((void*)0);
        return __result106__;
    }
    mem_152=&value;
    size_153=sizeof(short short);
    if(_if_conditional136=self->len+size_153+1+1>=self->size,    _if_conditional136) {
        old_buf_154=(char*)come_increment_ref_count(((char*)(right_value101=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1191, "char"))));
        right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_154,self->buf,self->size);
        old_len_155=self->len;
        new_size_156=(self->size+size_153+1)*2;
        __dec_obj20=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value102=(char*)come_calloc(1, sizeof(char)*(1*(new_size_156)), "libneo-c.c", 1195, "char"))));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_154,old_len_155);
        self->buf[old_len_155]=0;
        self->size=new_size_156;
        old_buf_154 = come_decrement_ref_count2(old_buf_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_152,size_153);
    self->len+=size_153;
    self->buf[self->len]=0;
    __result107__ = __result_obj__ = self;
    return __result107__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional137;
struct buffer* __result108__;
int len_157;
_Bool _if_conditional138;
int new_size_158;
void* right_value103;
char* __dec_obj21;
int i_159;
struct buffer* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_157, 0, sizeof(int));
memset(&new_size_158, 0, sizeof(int));
right_value103 = (void*)0;
memset(&i_159, 0, sizeof(int));
    if(_if_conditional137=self==((void*)0),    _if_conditional137) {
        __result108__ = __result_obj__ = ((void*)0);
        return __result108__;
    }
    len_157=self->len;
    len_157=(len_157+3)&~3;
    if(_if_conditional138=len_157>=self->size,    _if_conditional138) {
        new_size_158=(self->size+1+1)*2;
        __dec_obj21=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value103=(char*)come_calloc(1, sizeof(char)*(1*(new_size_158)), "libneo-c.c", 1219, "char"))));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self->size=new_size_158;
    }
    for(    i_159=self->len;    i_159<len_157;    i_159++    ){
        self->buf[i_159]=0;
    }
    self->len=len_157;
    __result109__ = __result_obj__ = self;
    return __result109__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool _if_conditional139;
int __result110__;
_Bool _if_conditional140;
int __result111__;
_Bool _if_conditional141;
int __result112__;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional139=left==((void*)0)&&right==((void*)0),    _if_conditional139) {
        __result110__ = 0;
        return __result110__;
    }
    else {
        if(_if_conditional140=left==((void*)0),        _if_conditional140) {
            __result111__ = -1;
            return __result111__;
        }
        else {
            if(_if_conditional141=right==((void*)0),            _if_conditional141) {
                __result112__ = 1;
                return __result112__;
            }
        }
    }
    __result113__ = strcmp(left->buf,right->buf);
    return __result113__;
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
void* right_value104;
void* right_value105;
struct buffer* result_160;
_Bool _if_conditional142;
struct buffer* __result114__;
struct buffer* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&result_160, 0, sizeof(struct buffer*));
    result_160=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value105=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value104=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1249, "buffer"))))))));
    come_call_finalizer3(right_value104,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value105,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional142=self==((void*)0),    _if_conditional142) {
        __result114__ = __result_obj__ = result_160;
        come_call_finalizer3(result_160,buffer_finalize, 0, 0, 1, 0, (void*)0);
        return __result114__;
    }
    buffer_append_str(result_160,self);
    __result115__ = __result_obj__ = result_160;
    come_call_finalizer3(result_160,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result115__;
    come_call_finalizer3(result_160,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
void* right_value106;
void* right_value107;
struct buffer* result_161;
_Bool _if_conditional143;
struct buffer* __result116__;
struct buffer* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&result_161, 0, sizeof(struct buffer*));
    result_161=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value107=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value106=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1262, "buffer"))))))));
    come_call_finalizer3(right_value106,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value107,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional143=self==((void*)0),    _if_conditional143) {
        __result116__ = __result_obj__ = result_161;
        come_call_finalizer3(result_161,buffer_finalize, 0, 0, 1, 0, (void*)0);
        return __result116__;
    }
    buffer_append_str(result_161,self);
    __result117__ = __result_obj__ = result_161;
    come_call_finalizer3(result_161,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result117__;
    come_call_finalizer3(result_161,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional144;
void* right_value108;
char* __result118__;
void* right_value109;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
right_value109 = (void*)0;
    if(_if_conditional144=self==((void*)0),    _if_conditional144) {
        __result118__ = __result_obj__ = ((char*)(right_value108=__builtin_string("")));
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result118__;
    }
    __result119__ = __result_obj__ = ((char*)(right_value109=__builtin_string(self->buf)));
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result119__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
    __result120__ = self==right;
    return __result120__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    __result121__ = self==right;
    return __result121__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    __result122__ = self==right;
    return __result122__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
    __result123__ = self==right;
    return __result123__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    __result124__ = self==right;
    return __result124__;
}

_Bool size_t_equals(long int self, long int right){
void* __result_obj__;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    __result125__ = self==right;
    return __result125__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    __result126__ = self==right;
    return __result126__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
    __result127__ = self==right;
    return __result127__;
}

_Bool string_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional145;
_Bool __result128__;
_Bool _if_conditional146;
_Bool __result129__;
_Bool _if_conditional147;
_Bool __result130__;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional145=self==((void*)0)&&right==((void*)0),    _if_conditional145) {
        __result128__ = (_Bool)1;
        return __result128__;
    }
    else {
        if(_if_conditional146=self==((void*)0),        _if_conditional146) {
            __result129__ = (_Bool)0;
            return __result129__;
        }
        else {
            if(_if_conditional147=right==((void*)0),            _if_conditional147) {
                __result130__ = (_Bool)0;
                return __result130__;
            }
        }
    }
    __result131__ = strcmp(self,right)==0;
    return __result131__;
}

_Bool charp_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional148;
_Bool __result132__;
_Bool _if_conditional149;
_Bool __result133__;
_Bool _if_conditional150;
_Bool __result134__;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional148=self==((void*)0)&&right==((void*)0),    _if_conditional148) {
        __result132__ = (_Bool)1;
        return __result132__;
    }
    else {
        if(_if_conditional149=self==((void*)0),        _if_conditional149) {
            __result133__ = (_Bool)0;
            return __result133__;
        }
        else {
            if(_if_conditional150=right==((void*)0),            _if_conditional150) {
                __result134__ = (_Bool)0;
                return __result134__;
            }
        }
    }
    __result135__ = strcmp(self,right)==0;
    return __result135__;
}

_Bool string_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional151;
_Bool __result136__;
_Bool _if_conditional152;
_Bool __result137__;
_Bool _if_conditional153;
_Bool __result138__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional151=self==((void*)0)&&right==((void*)0),    _if_conditional151) {
        __result136__ = (_Bool)1;
        return __result136__;
    }
    else {
        if(_if_conditional152=self==((void*)0),        _if_conditional152) {
            __result137__ = (_Bool)0;
            return __result137__;
        }
        else {
            if(_if_conditional153=right==((void*)0),            _if_conditional153) {
                __result138__ = (_Bool)0;
                return __result138__;
            }
        }
    }
    __result139__ = strcmp(self,right)==0;
    return __result139__;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional154;
_Bool __result140__;
_Bool _if_conditional155;
_Bool __result141__;
_Bool _if_conditional156;
_Bool __result142__;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional154=self==((void*)0)&&right==((void*)0),    _if_conditional154) {
        __result140__ = (_Bool)1;
        return __result140__;
    }
    else {
        if(_if_conditional155=self==((void*)0),        _if_conditional155) {
            __result141__ = (_Bool)0;
            return __result141__;
        }
        else {
            if(_if_conditional156=right==((void*)0),            _if_conditional156) {
                __result142__ = (_Bool)0;
                return __result142__;
            }
        }
    }
    __result143__ = strcmp(self,right)==0;
    return __result143__;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional157;
_Bool __result144__;
_Bool _if_conditional158;
_Bool __result145__;
_Bool _if_conditional159;
_Bool __result146__;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional157=self==((void*)0)&&right==((void*)0),    _if_conditional157) {
        __result144__ = (_Bool)0;
        return __result144__;
    }
    else {
        if(_if_conditional158=self==((void*)0),        _if_conditional158) {
            __result145__ = (_Bool)1;
            return __result145__;
        }
        else {
            if(_if_conditional159=right==((void*)0),            _if_conditional159) {
                __result146__ = (_Bool)1;
                return __result146__;
            }
        }
    }
    __result147__ = strcmp(self,right)!=0;
    return __result147__;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional160;
_Bool __result148__;
_Bool _if_conditional161;
_Bool __result149__;
_Bool _if_conditional162;
_Bool __result150__;
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional160=self==((void*)0)&&right==((void*)0),    _if_conditional160) {
        __result148__ = (_Bool)0;
        return __result148__;
    }
    else {
        if(_if_conditional161=self==((void*)0),        _if_conditional161) {
            __result149__ = (_Bool)1;
            return __result149__;
        }
        else {
            if(_if_conditional162=right==((void*)0),            _if_conditional162) {
                __result150__ = (_Bool)1;
                return __result150__;
            }
        }
    }
    __result151__ = strcmp(self,right)!=0;
    return __result151__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional163;
void* right_value110;
char* __result152__;
int len_162;
void* right_value111;
char* result_163;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
memset(&len_162, 0, sizeof(int));
right_value111 = (void*)0;
memset(&result_163, 0, sizeof(char*));
    if(_if_conditional163=self==((void*)0)||right==((void*)0),    _if_conditional163) {
        __result152__ = __result_obj__ = ((char*)(right_value110=__builtin_string("")));
        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result152__;
    }
    len_162=strlen(self)+strlen(right);
    result_163=(char*)come_increment_ref_count(((char*)(right_value111=(char*)come_calloc(1, sizeof(char)*(1*(len_162+1)), "libneo-c.c", 1424, "char"))));
    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    strncpy(result_163,self,len_162+1);
    strncat(result_163,right,len_162+1);
    __result153__ = __result_obj__ = result_163;
    result_163 = come_decrement_ref_count2(result_163, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result153__;
    result_163 = come_decrement_ref_count2(result_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional164;
void* right_value112;
char* __result154__;
int len_164;
void* right_value113;
char* result_165;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
memset(&len_164, 0, sizeof(int));
right_value113 = (void*)0;
memset(&result_165, 0, sizeof(char*));
    if(_if_conditional164=self==((void*)0)||right==((void*)0),    _if_conditional164) {
        __result154__ = __result_obj__ = ((char*)(right_value112=__builtin_string("")));
        right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result154__;
    }
    len_164=strlen(self)+strlen(right);
    result_165=(char*)come_increment_ref_count(((char*)(right_value113=(char*)come_calloc(1, sizeof(char)*(1*(len_164+1)), "libneo-c.c", 1439, "char"))));
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    strncpy(result_165,self,len_164+1);
    strncat(result_165,right,len_164+1);
    __result155__ = __result_obj__ = result_165;
    result_165 = come_decrement_ref_count2(result_165, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result155__;
    result_165 = come_decrement_ref_count2(result_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional165;
void* right_value114;
char* __result156__;
void* right_value115;
void* right_value116;
struct buffer* buf_166;
int i_167;
void* right_value117;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&buf_166, 0, sizeof(struct buffer*));
memset(&i_167, 0, sizeof(int));
right_value117 = (void*)0;
    if(_if_conditional165=self==((void*)0),    _if_conditional165) {
        __result156__ = __result_obj__ = ((char*)(right_value114=__builtin_string("")));
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result156__;
    }
    buf_166=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value116=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value115=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1452, "buffer"))))))));
    come_call_finalizer3(right_value115,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value116,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_167=0;    i_167<right;    i_167++    ){
        buffer_append_str(buf_166,self);
    }
    __result157__ = __result_obj__ = ((char*)(right_value117=buffer_to_string(buf_166)));
    come_call_finalizer3(buf_166,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result157__;
    come_call_finalizer3(buf_166,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional166;
void* right_value118;
char* __result158__;
void* right_value119;
void* right_value120;
struct buffer* buf_168;
int i_169;
void* right_value121;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&buf_168, 0, sizeof(struct buffer*));
memset(&i_169, 0, sizeof(int));
right_value121 = (void*)0;
    if(_if_conditional166=self==((void*)0),    _if_conditional166) {
        __result158__ = __result_obj__ = ((char*)(right_value118=__builtin_string("")));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result158__;
    }
    buf_168=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value120=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value119=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1466, "buffer"))))))));
    come_call_finalizer3(right_value119,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value120,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_169=0;    i_169<right;    i_169++    ){
        buffer_append_str(buf_168,self);
    }
    __result159__ = __result_obj__ = ((char*)(right_value121=buffer_to_string(buf_168)));
    come_call_finalizer3(buf_168,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result159__;
    come_call_finalizer3(buf_168,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
unsigned int __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    __result160__ = (int_get_hash_key(((int)value)));
    return __result160__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
unsigned int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    __result161__ = value;
    return __result161__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
unsigned int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    __result162__ = value;
    return __result162__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
unsigned int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    __result163__ = value;
    return __result163__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
unsigned int __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    __result164__ = value;
    return __result164__;
}

unsigned int size_t_get_hash_key(long int value){
void* __result_obj__;
unsigned int __result165__;
memset(&__result_obj__, 0, sizeof(void*));
    __result165__ = value;
    return __result165__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
unsigned int __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    __result166__ = (unsigned int)value;
    return __result166__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
unsigned int __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    __result167__ = (unsigned int)value;
    return __result167__;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional167;
unsigned int __result168__;
int result_170;
char* p_171;
_Bool _while_condtional7;
unsigned int __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_170, 0, sizeof(int));
memset(&p_171, 0, sizeof(char*));
    if(_if_conditional167=value==((void*)0),    _if_conditional167) {
        __result168__ = 0;
        return __result168__;
    }
    result_170=0;
    p_171=value;
    while(_while_condtional7=*p_171,    _while_condtional7) {
        result_170+=(*p_171);
        p_171++;
    }
    __result169__ = result_170;
    return __result169__;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional168;
unsigned int __result170__;
int result_172;
char* p_173;
_Bool _while_condtional8;
unsigned int __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_172, 0, sizeof(int));
memset(&p_173, 0, sizeof(char*));
    if(_if_conditional168=value==((void*)0),    _if_conditional168) {
        __result170__ = 0;
        return __result170__;
    }
    result_172=0;
    p_173=value;
    while(_while_condtional8=*p_173,    _while_condtional8) {
        result_172+=(*p_173);
        p_173++;
    }
    __result171__ = result_172;
    return __result171__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    __result172__ = self;
    return __result172__;
}

char char_clone(char self){
void* __result_obj__;
char __result173__;
memset(&__result_obj__, 0, sizeof(void*));
    __result173__ = self;
    return __result173__;
}

short int short_clone(short short self){
void* __result_obj__;
short int __result174__;
memset(&__result_obj__, 0, sizeof(void*));
    __result174__ = self;
    return __result174__;
}

int int_clone(int self){
void* __result_obj__;
int __result175__;
memset(&__result_obj__, 0, sizeof(void*));
    __result175__ = self;
    return __result175__;
}

long int long_clone(long self){
void* __result_obj__;
long int __result176__;
memset(&__result_obj__, 0, sizeof(void*));
    __result176__ = self;
    return __result176__;
}

long int size_t_clone(long int self){
void* __result_obj__;
long int __result177__;
memset(&__result_obj__, 0, sizeof(void*));
    __result177__ = self;
    return __result177__;
}

double double_clone(double self){
void* __result_obj__;
double __result178__;
memset(&__result_obj__, 0, sizeof(void*));
    __result178__ = self;
    return __result178__;
}

float float_clone(float self){
void* __result_obj__;
float __result179__;
memset(&__result_obj__, 0, sizeof(void*));
    __result179__ = self;
    return __result179__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool _if_conditional169;
char* __result180__;
void* right_value122;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
    if(_if_conditional169=self==((void*)0),    _if_conditional169) {
        __result180__ = __result_obj__ = ((void*)0);
        return __result180__;
    }
    __result181__ = __result_obj__ = ((char*)(right_value122=__builtin_string(self)));
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result181__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool _if_conditional170;
char* __result182__;
void* right_value123;
char* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
    if(_if_conditional170=self==((void*)0),    _if_conditional170) {
        __result182__ = __result_obj__ = ((void*)0);
        return __result182__;
    }
    __result183__ = __result_obj__ = ((char*)(right_value123=__builtin_string(self)));
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result183__;
}

_Bool xiswalpha(unsigned int c){
void* __result_obj__;
_Bool result_174;
_Bool __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_174, 0, sizeof(_Bool));
    result_174=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result184__ = result_174;
    return __result184__;
}

_Bool xiswblank(unsigned int c){
void* __result_obj__;
_Bool __result185__;
memset(&__result_obj__, 0, sizeof(void*));
    __result185__ = c==32||c==9;
    return __result185__;
}

_Bool xiswdigit(unsigned int c){
void* __result_obj__;
_Bool __result186__;
memset(&__result_obj__, 0, sizeof(void*));
    __result186__ = (c>=48&&c<=57);
    return __result186__;
}

_Bool xiswalnum(unsigned int c){
void* __result_obj__;
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
    __result187__ = xiswalpha(c)||xiswdigit(c);
    return __result187__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool result_175;
_Bool __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_175, 0, sizeof(_Bool));
    result_175=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result188__ = result_175;
    return __result188__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __result189__;
memset(&__result_obj__, 0, sizeof(void*));
    __result189__ = c==32||c==9;
    return __result189__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __result190__;
memset(&__result_obj__, 0, sizeof(void*));
    __result190__ = (c>=48&&c<=57);
    return __result190__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __result191__;
memset(&__result_obj__, 0, sizeof(void*));
    __result191__ = xisalpha(c)||xisdigit(c);
    return __result191__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool result_176;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_176, 0, sizeof(_Bool));
    result_176=(c>=32&&c<=126);
    __result192__ = result_176;
    return __result192__;
}

_Bool xiswascii(unsigned int c){
void* __result_obj__;
_Bool result_177;
_Bool __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_177, 0, sizeof(_Bool));
    result_177=(c>=32&&c<=126);
    __result193__ = result_177;
    return __result193__;
}

int string_length(char* str){
void* __result_obj__;
_Bool _if_conditional171;
int __result194__;
int __result195__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional171=str==((void*)0),    _if_conditional171) {
        __result194__ = 0;
        return __result194__;
    }
    __result195__ = strlen(str);
    return __result195__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool _if_conditional172;
int __result196__;
int __result197__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional172=str==((void*)0),    _if_conditional172) {
        __result196__ = 0;
        return __result196__;
    }
    __result197__ = strlen(str);
    return __result197__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional173;
void* right_value124;
char* __result198__;
int len_178;
void* right_value125;
char* result_179;
int i_180;
char* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
memset(&len_178, 0, sizeof(int));
right_value125 = (void*)0;
memset(&result_179, 0, sizeof(char*));
memset(&i_180, 0, sizeof(int));
    if(_if_conditional173=str==((void*)0),    _if_conditional173) {
        __result198__ = __result_obj__ = ((char*)(right_value124=__builtin_string("")));
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result198__;
    }
    len_178=strlen(str);
    result_179=(char*)come_increment_ref_count(((char*)(right_value125=(char*)come_calloc(1, sizeof(char)*(1*(len_178+1)), "libneo-c.c", 1683, "char"))));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_180=0;    i_180<len_178;    i_180++    ){
        result_179[i_180]=str[len_178-i_180-1];
    }
    result_179[len_178]=0;
    __result199__ = __result_obj__ = result_179;
    result_179 = come_decrement_ref_count2(result_179, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result199__;
    result_179 = come_decrement_ref_count2(result_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional174;
void* right_value126;
char* __result200__;
int len_181;
void* right_value127;
char* result_182;
int i_183;
char* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
memset(&len_181, 0, sizeof(int));
right_value127 = (void*)0;
memset(&result_182, 0, sizeof(char*));
memset(&i_183, 0, sizeof(int));
    if(_if_conditional174=str==((void*)0),    _if_conditional174) {
        __result200__ = __result_obj__ = ((char*)(right_value126=__builtin_string("")));
        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result200__;
    }
    len_181=strlen(str);
    result_182=(char*)come_increment_ref_count(((char*)(right_value127=(char*)come_calloc(1, sizeof(char)*(1*(len_181+1)), "libneo-c.c", 1700, "char"))));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_183=0;    i_183<len_181;    i_183++    ){
        result_182[i_183]=str[len_181-i_183-1];
    }
    result_182[len_181]=0;
    __result201__ = __result_obj__ = result_182;
    result_182 = come_decrement_ref_count2(result_182, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result201__;
    result_182 = come_decrement_ref_count2(result_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional175;
void* right_value128;
char* __result202__;
int len_184;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
void* right_value129;
void* right_value130;
char* __result203__;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value131;
char* __result204__;
_Bool _if_conditional182;
void* right_value132;
char* __result205__;
void* right_value133;
char* result_185;
char* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
memset(&len_184, 0, sizeof(int));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&result_185, 0, sizeof(char*));
    if(_if_conditional175=str==((void*)0),    _if_conditional175) {
        __result202__ = __result_obj__ = ((char*)(right_value128=__builtin_string("")));
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result202__;
    }
    len_184=strlen(str);
    if(_if_conditional176=head<0,    _if_conditional176) {
        head+=len_184;
    }
    if(_if_conditional177=tail<0,    _if_conditional177) {
        tail+=len_184+1;
    }
    if(_if_conditional178=head>tail,    _if_conditional178) {
        __result203__ = __result_obj__ = ((char*)(right_value130=string_reverse(((char*)(right_value129=charp_substring(str,tail,head))))));
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result203__;
    }
    if(_if_conditional179=head<0,    _if_conditional179) {
        head=0;
    }
    if(_if_conditional180=tail>=len_184,    _if_conditional180) {
        tail=len_184;
    }
    if(_if_conditional181=head==tail,    _if_conditional181) {
        __result204__ = __result_obj__ = ((char*)(right_value131=__builtin_string("")));
        right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result204__;
    }
    if(_if_conditional182=tail-head+1<1,    _if_conditional182) {
        __result205__ = __result_obj__ = ((char*)(right_value132=__builtin_string("")));
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result205__;
    }
    result_185=(char*)come_increment_ref_count(((char*)(right_value133=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1745, "char"))));
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_185,str+head,tail-head);
    result_185[tail-head]=0;
    __result206__ = __result_obj__ = result_185;
    result_185 = come_decrement_ref_count2(result_185, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result206__;
    result_185 = come_decrement_ref_count2(result_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional183;
void* right_value134;
char* __result207__;
int len_186;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
void* right_value135;
void* right_value136;
char* __result208__;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value137;
char* __result209__;
_Bool _if_conditional190;
void* right_value138;
char* __result210__;
void* right_value139;
char* result_187;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
memset(&len_186, 0, sizeof(int));
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&result_187, 0, sizeof(char*));
    if(_if_conditional183=str==((void*)0),    _if_conditional183) {
        __result207__ = __result_obj__ = ((char*)(right_value134=__builtin_string("")));
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result207__;
    }
    len_186=strlen(str);
    if(_if_conditional184=head<0,    _if_conditional184) {
        head+=len_186;
    }
    if(_if_conditional185=tail<0,    _if_conditional185) {
        tail+=len_186+1;
    }
    if(_if_conditional186=head>tail,    _if_conditional186) {
        __result208__ = __result_obj__ = ((char*)(right_value136=string_reverse(((char*)(right_value135=charp_substring(str,tail,head))))));
        right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result208__;
    }
    if(_if_conditional187=head<0,    _if_conditional187) {
        head=0;
    }
    if(_if_conditional188=tail>=len_186,    _if_conditional188) {
        tail=len_186;
    }
    if(_if_conditional189=head==tail,    _if_conditional189) {
        __result209__ = __result_obj__ = ((char*)(right_value137=__builtin_string("")));
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result209__;
    }
    if(_if_conditional190=tail-head+1<1,    _if_conditional190) {
        __result210__ = __result_obj__ = ((char*)(right_value138=__builtin_string("")));
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result210__;
    }
    result_187=(char*)come_increment_ref_count(((char*)(right_value139=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1788, "char"))));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_187,str+head,tail-head);
    result_187[tail-head]=0;
    __result211__ = __result_obj__ = result_187;
    result_187 = come_decrement_ref_count2(result_187, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result211__;
    result_187 = come_decrement_ref_count2(result_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional191;
void* right_value140;
char* __result212__;
int len_188;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
void* right_value141;
void* right_value142;
char* __result213__;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value143;
char* __result214__;
_Bool _if_conditional198;
void* right_value144;
char* __result215__;
void* right_value145;
char* result_189;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
memset(&len_188, 0, sizeof(int));
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&result_189, 0, sizeof(char*));
    if(_if_conditional191=str==((void*)0),    _if_conditional191) {
        __result212__ = __result_obj__ = ((char*)(right_value140=__builtin_string("")));
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result212__;
    }
    len_188=strlen(str);
    if(_if_conditional192=head<0,    _if_conditional192) {
        head+=len_188;
    }
    if(_if_conditional193=tail<0,    _if_conditional193) {
        tail+=len_188+1;
    }
    if(_if_conditional194=head>tail,    _if_conditional194) {
        __result213__ = __result_obj__ = ((char*)(right_value142=string_reverse(((char*)(right_value141=charp_substring(str,tail,head))))));
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result213__;
    }
    if(_if_conditional195=head<0,    _if_conditional195) {
        head=0;
    }
    if(_if_conditional196=tail>=len_188,    _if_conditional196) {
        tail=len_188;
    }
    if(_if_conditional197=head==tail,    _if_conditional197) {
        __result214__ = __result_obj__ = ((char*)(right_value143=__builtin_string("")));
        right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result214__;
    }
    if(_if_conditional198=tail-head+1<1,    _if_conditional198) {
        __result215__ = __result_obj__ = ((char*)(right_value144=__builtin_string("")));
        right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result215__;
    }
    result_189=(char*)come_increment_ref_count(((char*)(right_value145=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1831, "char"))));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_189,str+head,tail-head);
    result_189[tail-head]=0;
    __result216__ = __result_obj__ = result_189;
    result_189 = come_decrement_ref_count2(result_189, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result216__;
    result_189 = come_decrement_ref_count2(result_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional199;
void* right_value146;
char* __result217__;
int len_190;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
void* right_value147;
void* right_value148;
char* __result218__;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
void* right_value149;
char* __result219__;
_Bool _if_conditional206;
void* right_value150;
char* __result220__;
void* right_value151;
char* result_191;
char* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
memset(&len_190, 0, sizeof(int));
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&result_191, 0, sizeof(char*));
    if(_if_conditional199=str==((void*)0),    _if_conditional199) {
        __result217__ = __result_obj__ = ((char*)(right_value146=__builtin_string("")));
        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result217__;
    }
    len_190=strlen(str);
    if(_if_conditional200=head<0,    _if_conditional200) {
        head+=len_190;
    }
    if(_if_conditional201=tail<0,    _if_conditional201) {
        tail+=len_190+1;
    }
    if(_if_conditional202=head>tail,    _if_conditional202) {
        __result218__ = __result_obj__ = ((char*)(right_value148=string_reverse(((char*)(right_value147=charp_substring(str,tail,head))))));
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result218__;
    }
    if(_if_conditional203=head<0,    _if_conditional203) {
        head=0;
    }
    if(_if_conditional204=tail>=len_190,    _if_conditional204) {
        tail=len_190;
    }
    if(_if_conditional205=head==tail,    _if_conditional205) {
        __result219__ = __result_obj__ = ((char*)(right_value149=__builtin_string("")));
        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result219__;
    }
    if(_if_conditional206=tail-head+1<1,    _if_conditional206) {
        __result220__ = __result_obj__ = ((char*)(right_value150=__builtin_string("")));
        right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result220__;
    }
    result_191=(char*)come_increment_ref_count(((char*)(right_value151=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1874, "char"))));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_191,str+head,tail-head);
    result_191[tail-head]=0;
    __result221__ = __result_obj__ = result_191;
    result_191 = come_decrement_ref_count2(result_191, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result221__;
    result_191 = come_decrement_ref_count2(result_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool _if_conditional207;
void* right_value152;
char* __result222__;
va_list args_192;
char* result_193;
int len_194;
_Bool _if_conditional208;
void* right_value153;
char* __result223__;
void* right_value154;
char* result2_195;
char* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&args_192, 0, sizeof(va_list));
memset(&result_193, 0, sizeof(char*));
memset(&len_194, 0, sizeof(int));
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&result2_195, 0, sizeof(char*));
    if(_if_conditional207=msg==((void*)0),    _if_conditional207) {
        __result222__ = __result_obj__ = ((char*)(right_value152=__builtin_string("")));
        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result222__;
    }
    __builtin_va_start(args_192,msg);
    len_194=vasprintf(&result_193,msg,args_192);
    __builtin_va_end(args_192);
    if(_if_conditional208=len_194<0,    _if_conditional208) {
        __result223__ = __result_obj__ = ((char*)(right_value153=__builtin_string("")));
        come_call_finalizer3((&args_192),va_list_finalize, 1, 0, 0, 0, (void*)0);
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result223__;
    }
    result2_195=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(result_193))));
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(result_193);
    __result224__ = __result_obj__ = result2_195;
    come_call_finalizer3((&args_192),va_list_finalize, 1, 0, 0, 0, (void*)0);
    result2_195 = come_decrement_ref_count2(result2_195, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result224__;
    come_call_finalizer3((&args_192),va_list_finalize, 1, 0, 0, 0, (void*)0);
    result2_195 = come_decrement_ref_count2(result2_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional209;
void* right_value155;
char* __result225__;
int len_196;
_Bool _if_conditional210;
void* right_value156;
char* __result226__;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
void* right_value157;
char* __result227__;
_Bool _if_conditional215;
void* right_value158;
char* sub_str_197;
void* right_value159;
char* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
memset(&len_196, 0, sizeof(int));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&sub_str_197, 0, sizeof(char*));
right_value159 = (void*)0;
    if(_if_conditional209=str==((void*)0),    _if_conditional209) {
        __result225__ = __result_obj__ = ((char*)(right_value155=__builtin_string("")));
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result225__;
    }
    len_196=strlen(str);
    if(_if_conditional210=strcmp(str,"")==0,    _if_conditional210) {
        __result226__ = __result_obj__ = ((char*)(right_value156=__builtin_string(str)));
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result226__;
    }
    if(_if_conditional211=head<0,    _if_conditional211) {
        head+=len_196;
    }
    if(_if_conditional212=tail<0,    _if_conditional212) {
        tail+=len_196+1;
    }
    if(_if_conditional213=head<0,    _if_conditional213) {
        head=0;
    }
    if(_if_conditional214=tail<0,    _if_conditional214) {
        __result227__ = __result_obj__ = ((char*)(right_value157=__builtin_string(str)));
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result227__;
    }
    if(_if_conditional215=tail>=len_196,    _if_conditional215) {
        tail=len_196;
    }
    sub_str_197=(char*)come_increment_ref_count(((char*)(right_value158=charp_substring(str,tail,-1))));
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(str+head,sub_str_197,string_length(sub_str_197)+1);
    __result228__ = __result_obj__ = ((char*)(right_value159=__builtin_string(str)));
    sub_str_197 = come_decrement_ref_count2(sub_str_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result228__;
    sub_str_197 = come_decrement_ref_count2(sub_str_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional216;
void* right_value160;
char* __result229__;
int len_198;
_Bool _if_conditional217;
void* right_value161;
char* __result230__;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
void* right_value162;
char* __result231__;
_Bool _if_conditional222;
void* right_value163;
char* sub_str_199;
void* right_value164;
char* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
memset(&len_198, 0, sizeof(int));
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&sub_str_199, 0, sizeof(char*));
right_value164 = (void*)0;
    if(_if_conditional216=str==((void*)0),    _if_conditional216) {
        __result229__ = __result_obj__ = ((char*)(right_value160=__builtin_string("")));
        right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result229__;
    }
    len_198=strlen(str);
    if(_if_conditional217=strcmp(str,"")==0,    _if_conditional217) {
        __result230__ = __result_obj__ = ((char*)(right_value161=__builtin_string(str)));
        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result230__;
    }
    if(_if_conditional218=head<0,    _if_conditional218) {
        head+=len_198;
    }
    if(_if_conditional219=tail<0,    _if_conditional219) {
        tail+=len_198+1;
    }
    if(_if_conditional220=head<0,    _if_conditional220) {
        head=0;
    }
    if(_if_conditional221=tail<0,    _if_conditional221) {
        __result231__ = __result_obj__ = ((char*)(right_value162=__builtin_string(str)));
        right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result231__;
    }
    if(_if_conditional222=tail>=len_198,    _if_conditional222) {
        tail=len_198;
    }
    sub_str_199=(char*)come_increment_ref_count(((char*)(right_value163=charp_substring(str,tail,-1))));
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(str+head,sub_str_199,string_length(sub_str_199)+1);
    __result232__ = __result_obj__ = ((char*)(right_value164=__builtin_string(str)));
    sub_str_199 = come_decrement_ref_count2(sub_str_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result232__;
    sub_str_199 = come_decrement_ref_count2(sub_str_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional223;
void* right_value165;
void* right_value166;
struct list$1charph* __result234__;
void* right_value167;
void* right_value168;
struct list$1charph* result_202;
void* right_value169;
void* right_value170;
struct buffer* str_203;
int i_204;
_Bool _if_conditional225;
void* right_value174;
_Bool _if_conditional228;
void* right_value175;
struct list$1charph* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&result_202, 0, sizeof(struct list$1charph*));
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&str_203, 0, sizeof(struct buffer*));
memset(&i_204, 0, sizeof(int));
right_value174 = (void*)0;
right_value175 = (void*)0;
    if(_if_conditional223=self==((void*)0),    _if_conditional223) {
        __result234__ = __result_obj__ = ((struct list$1charph*)(right_value166=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value165=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 1985, "list$1charph")))))));
        come_call_finalizer3(right_value165,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value166,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        return __result234__;
    }
    result_202=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value168=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value167=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 1988, "list$1charph"))))))));
    come_call_finalizer3(right_value167,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value168,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    str_203=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value170=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value169=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1990, "buffer"))))))));
    come_call_finalizer3(right_value169,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value170,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_204=0;    i_204<charp_length(self);    i_204++    ){
        if(_if_conditional225=self[i_204]==c,        _if_conditional225) {
            list$1charph_push_back(result_202,(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string(str_203->buf)))));
            right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_reset(str_203);
        }
        else {
            buffer_append_char(str_203,self[i_204]);
        }
    }
    if(_if_conditional228=buffer_length(str_203)!=0,    _if_conditional228) {
        list$1charph_push_back(result_202,(char*)come_increment_ref_count(((char*)(right_value175=__builtin_string(str_203->buf)))));
        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result236__ = __result_obj__ = result_202;
    come_call_finalizer3(result_202,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(str_203,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result236__;
    come_call_finalizer3(result_202,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(str_203,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result233__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result233__;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_200;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_201;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_200, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_201, 0, sizeof(struct list_item$1charph*));
                it_200=self->head;
                while(_while_condtional9=it_200!=((void*)0),                _while_condtional9) {
                    prev_it_201=it_200;
                    it_200=it_200->next;
                    come_call_finalizer3(prev_it_201,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional224=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional224) {
                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional226;
void* right_value171;
struct list_item$1charph* litem_205;
char* __dec_obj22;
_Bool _if_conditional227;
void* right_value172;
struct list_item$1charph* litem_206;
char* __dec_obj23;
void* right_value173;
struct list_item$1charph* litem_207;
char* __dec_obj24;
struct list$1charph* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
memset(&litem_205, 0, sizeof(struct list_item$1charph*));
right_value172 = (void*)0;
memset(&litem_206, 0, sizeof(struct list_item$1charph*));
right_value173 = (void*)0;
memset(&litem_207, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional226=self->len==0,                _if_conditional226) {
                    litem_205=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value171=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 217, "list_item$1charph"))));
                    come_call_finalizer3(right_value171,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_205->prev=((void*)0);
                    litem_205->next=((void*)0);
                    __dec_obj22=litem_205->item;
                    litem_205->item=(char*)come_increment_ref_count(item);
                    __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_205;
                    self->head=litem_205;
                }
                else {
                    if(_if_conditional227=self->len==1,                    _if_conditional227) {
                        litem_206=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value172=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph"))));
                        come_call_finalizer3(right_value172,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_206->prev=self->head;
                        litem_206->next=((void*)0);
                        __dec_obj23=litem_206->item;
                        litem_206->item=(char*)come_increment_ref_count(item);
                        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_206;
                        self->head->next=litem_206;
                    }
                    else {
                        litem_207=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value173=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph"))));
                        come_call_finalizer3(right_value173,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_207->prev=self->tail;
                        litem_207->next=((void*)0);
                        __dec_obj24=litem_207->item;
                        litem_207->item=(char*)come_increment_ref_count(item);
                        __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_207;
                        self->tail=litem_207;
                    }
                }
                self->len++;
                __result235__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result235__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional229;
void* right_value176;
void* right_value177;
struct list$1charph* __result237__;
void* right_value178;
void* right_value179;
struct list$1charph* result_208;
void* right_value180;
void* right_value181;
struct buffer* str_209;
int i_210;
_Bool _if_conditional230;
void* right_value182;
_Bool _if_conditional231;
void* right_value183;
struct list$1charph* __result238__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
memset(&result_208, 0, sizeof(struct list$1charph*));
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&str_209, 0, sizeof(struct buffer*));
memset(&i_210, 0, sizeof(int));
right_value182 = (void*)0;
right_value183 = (void*)0;
    if(_if_conditional229=self==((void*)0),    _if_conditional229) {
        __result237__ = __result_obj__ = ((struct list$1charph*)(right_value177=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value176=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 2011, "list$1charph")))))));
        come_call_finalizer3(right_value176,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value177,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        return __result237__;
    }
    result_208=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value179=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value178=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 2014, "list$1charph"))))))));
    come_call_finalizer3(right_value178,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value179,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    str_209=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value181=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value180=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2016, "buffer"))))))));
    come_call_finalizer3(right_value180,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value181,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_210=0;    i_210<charp_length(self);    i_210++    ){
        if(_if_conditional230=self[i_210]==c,        _if_conditional230) {
            list$1charph_push_back(result_208,(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string(str_209->buf)))));
            right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_reset(str_209);
        }
        else {
            buffer_append_char(str_209,self[i_210]);
        }
    }
    if(_if_conditional231=buffer_length(str_209)!=0,    _if_conditional231) {
        list$1charph_push_back(result_208,(char*)come_increment_ref_count(((char*)(right_value183=__builtin_string(str_209->buf)))));
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result238__ = __result_obj__ = result_208;
    come_call_finalizer3(result_208,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(str_209,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result238__;
    come_call_finalizer3(result_208,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(str_209,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* xbasename(char* path){
void* __result_obj__;
_Bool _if_conditional232;
void* right_value184;
char* __result239__;
char* p_211;
_Bool _while_condtional10;
_Bool _if_conditional233;
_Bool _if_conditional234;
void* right_value185;
char* __result240__;
void* right_value186;
char* __result241__;
void* right_value187;
char* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
memset(&p_211, 0, sizeof(char*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
    if(_if_conditional232=path==((void*)0),    _if_conditional232) {
        __result239__ = __result_obj__ = ((char*)(right_value184=__builtin_string("")));
        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result239__;
    }
    p_211=path+strlen(path);
    while(_while_condtional10=p_211>=path,    _while_condtional10) {
        if(_if_conditional233=*p_211==47,        _if_conditional233) {
            break;
        }
        else {
            p_211--;
        }
    }
    if(_if_conditional234=p_211<path,    _if_conditional234) {
        __result240__ = __result_obj__ = ((char*)(right_value185=__builtin_string(path)));
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result240__;
    }
    else {
        __result241__ = __result_obj__ = ((char*)(right_value186=__builtin_string(p_211+1)));
        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result241__;
    }
    __result242__ = __result_obj__ = ((char*)(right_value187=__builtin_string("")));
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result242__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool _if_conditional235;
void* right_value188;
char* __result243__;
void* right_value189;
void* right_value190;
char* __result244__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
    if(_if_conditional235=path==((void*)0),    _if_conditional235) {
        __result243__ = __result_obj__ = ((char*)(right_value188=__builtin_string("")));
        right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result243__;
    }
    __result244__ = __result_obj__ = ((char*)(right_value190=__builtin_string(dirname(((char*)(right_value189=__builtin_string(path)))))));
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result244__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool _if_conditional236;
void* right_value191;
char* __result245__;
void* right_value192;
char* path2_212;
char* p_213;
_Bool _while_condtional11;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value193;
char* __result246__;
void* right_value194;
char* __result247__;
void* right_value195;
char* __result248__;
memset(&__result_obj__, 0, sizeof(void*));
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&path2_212, 0, sizeof(char*));
memset(&p_213, 0, sizeof(char*));
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
    if(_if_conditional236=path==((void*)0),    _if_conditional236) {
        __result245__ = __result_obj__ = ((char*)(right_value191=__builtin_string("")));
        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result245__;
    }
    path2_212=(char*)come_increment_ref_count(((char*)(right_value192=xbasename(path))));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    p_213=path2_212+strlen(path2_212);
    while(_while_condtional11=p_213>=path2_212,    _while_condtional11) {
        if(_if_conditional237=*p_213==46,        _if_conditional237) {
            break;
        }
        else {
            p_213--;
        }
    }
    if(_if_conditional238=p_213<path2_212,    _if_conditional238) {
        __result246__ = __result_obj__ = ((char*)(right_value193=__builtin_string(path2_212)));
        path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result246__;
    }
    else {
        __result247__ = __result_obj__ = ((char*)(right_value194=string_substring(path2_212,0,p_213-path2_212)));
        path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result247__;
    }
    __result248__ = __result_obj__ = ((char*)(right_value195=__builtin_string("")));
    path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result248__;
    path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* xextname(char* path){
void* __result_obj__;
_Bool _if_conditional239;
void* right_value196;
char* __result249__;
char* p_214;
_Bool _while_condtional12;
_Bool _if_conditional240;
_Bool _if_conditional241;
void* right_value197;
char* __result250__;
void* right_value198;
char* __result251__;
void* right_value199;
char* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
memset(&p_214, 0, sizeof(char*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
    if(_if_conditional239=path==((void*)0),    _if_conditional239) {
        __result249__ = __result_obj__ = ((char*)(right_value196=__builtin_string("")));
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result249__;
    }
    p_214=path+strlen(path);
    while(_while_condtional12=p_214>=path,    _while_condtional12) {
        if(_if_conditional240=*p_214==46,        _if_conditional240) {
            break;
        }
        else {
            p_214--;
        }
    }
    if(_if_conditional241=p_214<path,    _if_conditional241) {
        __result250__ = __result_obj__ = ((char*)(right_value197=__builtin_string(path)));
        right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result250__;
    }
    else {
        __result251__ = __result_obj__ = ((char*)(right_value198=__builtin_string(p_214+1)));
        right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result251__;
    }
    __result252__ = __result_obj__ = ((char*)(right_value199=__builtin_string("")));
    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result252__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool _if_conditional242;
void* right_value200;
char* __result253__;
char* result_215;
void* right_value201;
char* result2_216;
char* __result254__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
memset(&result_215, 0, sizeof(char*));
right_value201 = (void*)0;
memset(&result2_216, 0, sizeof(char*));
    if(_if_conditional242=path==((void*)0),    _if_conditional242) {
        __result253__ = __result_obj__ = ((char*)(right_value200=__builtin_string("")));
        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result253__;
    }
    result_215=realpath(path,((void*)0));
    result2_216=(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string(result_215))));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(result_215);
    __result254__ = __result_obj__ = result2_216;
    result2_216 = come_decrement_ref_count2(result2_216, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result254__;
    result2_216 = come_decrement_ref_count2(result2_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool _if_conditional243;
void* right_value202;
char* __result255__;
void* right_value203;
char* __result256__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
right_value203 = (void*)0;
    if(self) {
        __result255__ = __result_obj__ = ((char*)(right_value202=__builtin_string("true")));
        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result255__;
    }
    else {
        __result256__ = __result_obj__ = ((char*)(right_value203=__builtin_string("false")));
        right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result256__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
void* right_value204;
char* __result257__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
    __result257__ = __result_obj__ = ((char*)(right_value204=xsprintf("%c",self)));
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result257__;
}

char* short_to_string(short short self){
void* __result_obj__;
void* right_value205;
char* __result258__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
    __result258__ = __result_obj__ = ((char*)(right_value205=xsprintf("%d",self)));
    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result258__;
}

char* int_to_string(int self){
void* __result_obj__;
void* right_value206;
char* __result259__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
    __result259__ = __result_obj__ = ((char*)(right_value206=xsprintf("%d",self)));
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result259__;
}

char* long_to_string(long self){
void* __result_obj__;
void* right_value207;
char* __result260__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
    __result260__ = __result_obj__ = ((char*)(right_value207=xsprintf("%ld",self)));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result260__;
}

char* size_t_to_string(long int self){
void* __result_obj__;
void* right_value208;
char* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
right_value208 = (void*)0;
    __result261__ = __result_obj__ = ((char*)(right_value208=xsprintf("%ld",self)));
    right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result261__;
}

char* float_to_string(float self){
void* __result_obj__;
void* right_value209;
char* __result262__;
memset(&__result_obj__, 0, sizeof(void*));
right_value209 = (void*)0;
    __result262__ = __result_obj__ = ((char*)(right_value209=xsprintf("%f",self)));
    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result262__;
}

char* double_to_string(double self){
void* __result_obj__;
void* right_value210;
char* __result263__;
memset(&__result_obj__, 0, sizeof(void*));
right_value210 = (void*)0;
    __result263__ = __result_obj__ = ((char*)(right_value210=xsprintf("%lf",self)));
    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result263__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional244;
void* right_value211;
char* __result264__;
void* right_value212;
char* __result265__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
right_value212 = (void*)0;
    if(_if_conditional244=self==((void*)0),    _if_conditional244) {
        __result264__ = __result_obj__ = ((char*)(right_value211=__builtin_string("")));
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result264__;
    }
    __result265__ = __result_obj__ = ((char*)(right_value212=__builtin_string(self)));
    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result265__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional245;
void* right_value213;
char* __result266__;
void* right_value214;
char* __result267__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
right_value214 = (void*)0;
    if(_if_conditional245=self==((void*)0),    _if_conditional245) {
        __result266__ = __result_obj__ = ((char*)(right_value213=__builtin_string("")));
        right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result266__;
    }
    __result267__ = __result_obj__ = ((char*)(right_value214=__builtin_string(self)));
    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result267__;
}

int bool_compare(_Bool left, _Bool right){
void* __result_obj__;
_Bool _if_conditional246;
int __result268__;
_Bool _if_conditional247;
int __result269__;
_Bool _if_conditional248;
int __result270__;
int __result271__;
int __result272__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional246=!left&&right,    _if_conditional246) {
        __result268__ = -1;
        return __result268__;
    }
    else {
        if(_if_conditional247=left&&right,        _if_conditional247) {
            __result269__ = 0;
            return __result269__;
        }
        else {
            if(_if_conditional248=!left&&!right,            _if_conditional248) {
                __result270__ = 0;
                return __result270__;
            }
            else {
                __result271__ = 1;
                return __result271__;
            }
        }
    }
    __result272__ = 0;
    return __result272__;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool _if_conditional249;
int __result273__;
_Bool _if_conditional250;
int __result274__;
int __result275__;
int __result276__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional249=left<right,    _if_conditional249) {
        __result273__ = -1;
        return __result273__;
    }
    else {
        if(_if_conditional250=left>right,        _if_conditional250) {
            __result274__ = 1;
            return __result274__;
        }
        else {
            __result275__ = 0;
            return __result275__;
        }
    }
    __result276__ = 0;
    return __result276__;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool _if_conditional251;
int __result277__;
_Bool _if_conditional252;
int __result278__;
int __result279__;
int __result280__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional251=left<right,    _if_conditional251) {
        __result277__ = -1;
        return __result277__;
    }
    else {
        if(_if_conditional252=left>right,        _if_conditional252) {
            __result278__ = 1;
            return __result278__;
        }
        else {
            __result279__ = 0;
            return __result279__;
        }
    }
    __result280__ = 0;
    return __result280__;
}

int int_compare(int left, int right){
void* __result_obj__;
_Bool _if_conditional253;
int __result281__;
_Bool _if_conditional254;
int __result282__;
int __result283__;
int __result284__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional253=left<right,    _if_conditional253) {
        __result281__ = -1;
        return __result281__;
    }
    else {
        if(_if_conditional254=left>right,        _if_conditional254) {
            __result282__ = 1;
            return __result282__;
        }
        else {
            __result283__ = 0;
            return __result283__;
        }
    }
    __result284__ = 0;
    return __result284__;
}

int long_compare(long left, long right){
void* __result_obj__;
_Bool _if_conditional255;
int __result285__;
_Bool _if_conditional256;
int __result286__;
int __result287__;
int __result288__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional255=left<right,    _if_conditional255) {
        __result285__ = -1;
        return __result285__;
    }
    else {
        if(_if_conditional256=left>right,        _if_conditional256) {
            __result286__ = 1;
            return __result286__;
        }
        else {
            __result287__ = 0;
            return __result287__;
        }
    }
    __result288__ = 0;
    return __result288__;
}

int size_t_compare(long int left, long int right){
void* __result_obj__;
_Bool _if_conditional257;
int __result289__;
_Bool _if_conditional258;
int __result290__;
int __result291__;
int __result292__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional257=left<right,    _if_conditional257) {
        __result289__ = -1;
        return __result289__;
    }
    else {
        if(_if_conditional258=left>right,        _if_conditional258) {
            __result290__ = 1;
            return __result290__;
        }
        else {
            __result291__ = 0;
            return __result291__;
        }
    }
    __result292__ = 0;
    return __result292__;
}

int float_compare(float left, float right){
void* __result_obj__;
_Bool _if_conditional259;
int __result293__;
_Bool _if_conditional260;
int __result294__;
int __result295__;
int __result296__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional259=left<right,    _if_conditional259) {
        __result293__ = -1;
        return __result293__;
    }
    else {
        if(_if_conditional260=left>right,        _if_conditional260) {
            __result294__ = 1;
            return __result294__;
        }
        else {
            __result295__ = 0;
            return __result295__;
        }
    }
    __result296__ = 0;
    return __result296__;
}

int double_compare(double left, double right){
void* __result_obj__;
_Bool _if_conditional261;
int __result297__;
_Bool _if_conditional262;
int __result298__;
int __result299__;
int __result300__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional261=left<right,    _if_conditional261) {
        __result297__ = -1;
        return __result297__;
    }
    else {
        if(_if_conditional262=left>right,        _if_conditional262) {
            __result298__ = 1;
            return __result298__;
        }
        else {
            __result299__ = 0;
            return __result299__;
        }
    }
    __result300__ = 0;
    return __result300__;
}

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional263;
int __result301__;
_Bool _if_conditional264;
int __result302__;
_Bool _if_conditional265;
int __result303__;
int __result304__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional263=left==((void*)0)&&right==((void*)0),    _if_conditional263) {
        __result301__ = 0;
        return __result301__;
    }
    else {
        if(_if_conditional264=left==((void*)0),        _if_conditional264) {
            __result302__ = -1;
            return __result302__;
        }
        else {
            if(_if_conditional265=right==((void*)0),            _if_conditional265) {
                __result303__ = 1;
                return __result303__;
            }
        }
    }
    __result304__ = strcmp(left,right);
    return __result304__;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional266;
int __result305__;
_Bool _if_conditional267;
int __result306__;
_Bool _if_conditional268;
int __result307__;
int __result308__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional266=left==((void*)0)&&right==((void*)0),    _if_conditional266) {
        __result305__ = 0;
        return __result305__;
    }
    else {
        if(_if_conditional267=left==((void*)0),        _if_conditional267) {
            __result306__ = -1;
            return __result306__;
        }
        else {
            if(_if_conditional268=right==((void*)0),            _if_conditional268) {
                __result307__ = 1;
                return __result307__;
            }
        }
    }
    __result308__ = strcmp(left,right);
    return __result308__;
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional269;
void* right_value215;
char* __result309__;
void* right_value216;
void* right_value217;
struct buffer* buf_217;
_Bool _while_condtional13;
int size_219;
_Bool _if_conditional270;
void* right_value218;
char* __result310__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&buf_217, 0, sizeof(struct buffer*));
memset(&size_219, 0, sizeof(int));
right_value218 = (void*)0;
    if(_if_conditional269=f==((void*)0),    _if_conditional269) {
        __result309__ = __result_obj__ = ((char*)(right_value215=__builtin_string("")));
        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result309__;
    }
    buf_217=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value217=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value216=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2367, "buffer"))))))));
    come_call_finalizer3(right_value216,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value217,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional13=1,    _while_condtional13) {
        char buf2_218[8192];
        memset(&buf2_218, 0, sizeof(char)        *(8192)        );
        size_219=fread(buf2_218,1,8192,f);
        buffer_append(buf_217,buf2_218,size_219);
        if(_if_conditional270=size_219<8192,        _if_conditional270) {
            break;
        }
    }
    __result310__ = __result_obj__ = ((char*)(right_value218=buffer_to_string(buf_217)));
    come_call_finalizer3(buf_217,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result310__;
    come_call_finalizer3(buf_217,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

int FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool _if_conditional271;
int __result311__;
int __result312__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional271=f==((void*)0)||str==((void*)0),    _if_conditional271) {
        __result311__ = -1;
        return __result311__;
    }
    __result312__ = fwrite(str,strlen(str),1,f);
    return __result312__;
}

int FILE_fclose(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional272;
int __result313__;
int result_220;
_Bool _if_conditional273;
int __result314__;
int __result315__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_220, 0, sizeof(int));
    if(_if_conditional272=f==((void*)0),    _if_conditional272) {
        __result313__ = -1;
        return __result313__;
    }
    result_220=fclose(f);
    if(_if_conditional273=result_220<0,    _if_conditional273) {
        __result314__ = result_220;
        return __result314__;
    }
    __result315__ = result_220;
    return __result315__;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional274;
struct _IO_FILE* __result316__;
va_list args_222;
int result_223;
_Bool _if_conditional275;
struct _IO_FILE* __result317__;
struct _IO_FILE* __result318__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_222, 0, sizeof(va_list));
memset(&result_223, 0, sizeof(int));
    if(_if_conditional274=f==((void*)0)||msg==((void*)0),    _if_conditional274) {
        __result316__ = __result_obj__ = f;
        return __result316__;
    }
    char msg2_221[1024*2*2*2];
    memset(&msg2_221, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_222,msg);
    vsnprintf(msg2_221,1024*2*2*2,msg,args_222);
    __builtin_va_end(args_222);
    result_223=fprintf(f,"%s",msg2_221);
    if(_if_conditional275=result_223<0,    _if_conditional275) {
        __result317__ = __result_obj__ = f;
        come_call_finalizer3((&args_222),va_list_finalize, 1, 0, 0, 0, (void*)0);
        return __result317__;
    }
    __result318__ = __result_obj__ = f;
    come_call_finalizer3((&args_222),va_list_finalize, 1, 0, 0, 0, (void*)0);
    return __result318__;
    come_call_finalizer3((&args_222),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

int string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional276;
int __result319__;
struct _IO_FILE* f_224;
_Bool _if_conditional277;
_Bool _if_conditional278;
int __result320__;
int result_225;
_Bool _if_conditional279;
int __result321__;
int result2_226;
_Bool _if_conditional280;
int __result322__;
int __result323__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_224, 0, sizeof(struct _IO_FILE*));
memset(&result_225, 0, sizeof(int));
memset(&result2_226, 0, sizeof(int));
    if(_if_conditional276=self==((void*)0)||file_name==((void*)0),    _if_conditional276) {
        __result319__ = -1;
        return __result319__;
    }
    if(append) {
        f_224=fopen(file_name,"a");
    }
    else {
        f_224=fopen(file_name,"w");
    }
    if(_if_conditional278=f_224==((void*)0),    _if_conditional278) {
        __result320__ = -1;
        return __result320__;
    }
    result_225=fwrite(self,strlen(self),1,f_224);
    if(_if_conditional279=result_225<0,    _if_conditional279) {
        __result321__ = result_225;
        return __result321__;
    }
    result2_226=fclose(f_224);
    if(_if_conditional280=result2_226<0,    _if_conditional280) {
        __result322__ = result2_226;
        return __result322__;
    }
    __result323__ = result_225;
    return __result323__;
}

int charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional281;
int __result324__;
struct _IO_FILE* f_227;
_Bool _if_conditional282;
_Bool _if_conditional283;
int __result325__;
int result_228;
_Bool _if_conditional284;
int __result326__;
int result2_229;
_Bool _if_conditional285;
int __result327__;
int __result328__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_227, 0, sizeof(struct _IO_FILE*));
memset(&result_228, 0, sizeof(int));
memset(&result2_229, 0, sizeof(int));
    if(_if_conditional281=self==((void*)0)||file_name==((void*)0),    _if_conditional281) {
        __result324__ = -1;
        return __result324__;
    }
    if(append) {
        f_227=fopen(file_name,"a");
    }
    else {
        f_227=fopen(file_name,"w");
    }
    if(_if_conditional283=f_227==((void*)0),    _if_conditional283) {
        __result325__ = -1;
        return __result325__;
    }
    result_228=fwrite(self,strlen(self),1,f_227);
    if(_if_conditional284=result_228<0,    _if_conditional284) {
        __result326__ = result_228;
        return __result326__;
    }
    result2_229=fclose(f_227);
    if(_if_conditional285=result2_229<0,    _if_conditional285) {
        __result327__ = result2_229;
        return __result327__;
    }
    __result328__ = result_228;
    return __result328__;
}

char* string_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional286;
void* right_value219;
char* __result329__;
struct _IO_FILE* f_230;
_Bool _if_conditional287;
void* right_value220;
char* __result330__;
void* right_value221;
void* right_value222;
struct buffer* buf_231;
_Bool _while_condtional14;
int size_233;
_Bool _if_conditional288;
void* right_value223;
char* result_234;
int result2_235;
_Bool _if_conditional289;
void* right_value224;
char* __result331__;
char* __result332__;
memset(&__result_obj__, 0, sizeof(void*));
right_value219 = (void*)0;
memset(&f_230, 0, sizeof(struct _IO_FILE*));
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&buf_231, 0, sizeof(struct buffer*));
memset(&size_233, 0, sizeof(int));
right_value223 = (void*)0;
memset(&result_234, 0, sizeof(char*));
memset(&result2_235, 0, sizeof(int));
right_value224 = (void*)0;
    if(_if_conditional286=file_name==((void*)0),    _if_conditional286) {
        __result329__ = __result_obj__ = ((char*)(right_value219=__builtin_string("")));
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result329__;
    }
    f_230=fopen(file_name,"r");
    if(_if_conditional287=f_230==((void*)0),    _if_conditional287) {
        __result330__ = __result_obj__ = ((char*)(right_value220=__builtin_string("")));
        right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result330__;
    }
    buf_231=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value222=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value221=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2507, "buffer"))))))));
    come_call_finalizer3(right_value221,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value222,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional14=1,    _while_condtional14) {
        char buf2_232[8192];
        memset(&buf2_232, 0, sizeof(char)        *(8192)        );
        size_233=fread(buf2_232,1,8192,f_230);
        buffer_append(buf_231,buf2_232,size_233);
        if(_if_conditional288=size_233<8192,        _if_conditional288) {
            break;
        }
    }
    result_234=(char*)come_increment_ref_count(((char*)(right_value223=buffer_to_string(buf_231))));
    right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result2_235=fclose(f_230);
    if(_if_conditional289=result2_235<0,    _if_conditional289) {
        __result331__ = __result_obj__ = ((char*)(right_value224=__builtin_string("")));
        come_call_finalizer3(buf_231,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_234 = come_decrement_ref_count2(result_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result331__;
    }
    __result332__ = __result_obj__ = result_234;
    come_call_finalizer3(buf_231,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_234 = come_decrement_ref_count2(result_234, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result332__;
    come_call_finalizer3(buf_231,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_234 = come_decrement_ref_count2(result_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional290;
void* right_value225;
char* __result333__;
struct _IO_FILE* f_236;
_Bool _if_conditional291;
void* right_value226;
char* __result334__;
void* right_value227;
void* right_value228;
struct buffer* buf_237;
_Bool _while_condtional15;
int size_239;
_Bool _if_conditional292;
void* right_value229;
char* result_240;
int result2_241;
_Bool _if_conditional293;
void* right_value230;
char* __result335__;
char* __result336__;
memset(&__result_obj__, 0, sizeof(void*));
right_value225 = (void*)0;
memset(&f_236, 0, sizeof(struct _IO_FILE*));
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&buf_237, 0, sizeof(struct buffer*));
memset(&size_239, 0, sizeof(int));
right_value229 = (void*)0;
memset(&result_240, 0, sizeof(char*));
memset(&result2_241, 0, sizeof(int));
right_value230 = (void*)0;
    if(_if_conditional290=file_name==((void*)0),    _if_conditional290) {
        __result333__ = __result_obj__ = ((char*)(right_value225=__builtin_string("")));
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result333__;
    }
    f_236=fopen(file_name,"r");
    if(_if_conditional291=f_236==((void*)0),    _if_conditional291) {
        __result334__ = __result_obj__ = ((char*)(right_value226=__builtin_string("")));
        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result334__;
    }
    buf_237=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value228=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value227=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2544, "buffer"))))))));
    come_call_finalizer3(right_value227,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value228,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional15=1,    _while_condtional15) {
        char buf2_238[8192];
        memset(&buf2_238, 0, sizeof(char)        *(8192)        );
        size_239=fread(buf2_238,1,8192,f_236);
        buffer_append(buf_237,buf2_238,size_239);
        if(_if_conditional292=size_239<8192,        _if_conditional292) {
            break;
        }
    }
    result_240=(char*)come_increment_ref_count(((char*)(right_value229=buffer_to_string(buf_237))));
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result2_241=fclose(f_236);
    if(_if_conditional293=result2_241<0,    _if_conditional293) {
        __result335__ = __result_obj__ = ((char*)(right_value230=__builtin_string("")));
        come_call_finalizer3(buf_237,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_240 = come_decrement_ref_count2(result_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result335__;
    }
    __result336__ = __result_obj__ = result_240;
    come_call_finalizer3(buf_237,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_240 = come_decrement_ref_count2(result_240, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result336__;
    come_call_finalizer3(buf_237,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_240 = come_decrement_ref_count2(result_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
void* right_value231;
void* right_value232;
struct list$1charph* result_242;
_Bool _if_conditional294;
struct list$1charph* __result337__;
_Bool _while_condtional16;
_Bool _if_conditional295;
void* right_value233;
struct list$1charph* __result338__;
memset(&__result_obj__, 0, sizeof(void*));
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&result_242, 0, sizeof(struct list$1charph*));
right_value233 = (void*)0;
    result_242=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value232=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value231=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 2571, "list$1charph"))))))));
    come_call_finalizer3(right_value231,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value232,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional294=f==((void*)0),    _if_conditional294) {
        __result337__ = __result_obj__ = result_242;
        come_call_finalizer3(result_242,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result337__;
    }
    while(_while_condtional16=1,    _while_condtional16) {
        char buf_243[8192];
        memset(&buf_243, 0, sizeof(char)        *(8192)        );
        if(_if_conditional295=fgets(buf_243,8192,f)==((void*)0),        _if_conditional295) {
            break;
        }
        list$1charph_push_back(result_242,(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string(buf_243)))));
        right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result338__ = __result_obj__ = result_242;
    come_call_finalizer3(result_242,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result338__;
    come_call_finalizer3(result_242,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool _if_conditional296;
int __result339__;
struct _IO_FILE* f_244;
_Bool _if_conditional297;
int __result340__;
int __result341__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_244, 0, sizeof(struct _IO_FILE*));
    if(_if_conditional296=path==((void*)0)||mode==((void*)0),    _if_conditional296) {
        __result339__ = -1;
        return __result339__;
    }
    f_244=fopen(path,mode);
    if(f_244) {
        block(parent,f_244);
        fclose(f_244);
        __result340__ = 0;
        return __result340__;
    }
    __result341__ = -1;
    return __result341__;
}

char* charp_puts(char* self){
void* __result_obj__;
_Bool _if_conditional298;
void* right_value234;
char* __result342__;
void* right_value235;
char* __result343__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
right_value235 = (void*)0;
    if(_if_conditional298=self==((void*)0),    _if_conditional298) {
        __result342__ = __result_obj__ = ((char*)(right_value234=__builtin_string("")));
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result342__;
    }
    puts(self);
    __result343__ = __result_obj__ = ((char*)(right_value235=__builtin_string(self)));
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result343__;
}

char* charp_print(char* self){
void* __result_obj__;
_Bool _if_conditional299;
void* right_value236;
char* __result344__;
void* right_value237;
char* __result345__;
memset(&__result_obj__, 0, sizeof(void*));
right_value236 = (void*)0;
right_value237 = (void*)0;
    if(_if_conditional299=self==((void*)0),    _if_conditional299) {
        __result344__ = __result_obj__ = ((char*)(right_value236=__builtin_string("")));
        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result344__;
    }
    printf("%s",self);
    __result345__ = __result_obj__ = ((char*)(right_value237=__builtin_string(self)));
    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result345__;
}

char* string_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional300;
void* right_value238;
char* __result346__;
char* msg2_245;
va_list args_246;
void* right_value239;
char* __result347__;
memset(&__result_obj__, 0, sizeof(void*));
right_value238 = (void*)0;
memset(&msg2_245, 0, sizeof(char*));
memset(&args_246, 0, sizeof(va_list));
right_value239 = (void*)0;
    if(_if_conditional300=self==((void*)0),    _if_conditional300) {
        __result346__ = __result_obj__ = ((char*)(right_value238=__builtin_string("")));
        right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result346__;
    }
    __builtin_va_start(args_246,self);
    vasprintf(&msg2_245,self,args_246);
    __builtin_va_end(args_246);
    printf("%s",msg2_245);
    free(msg2_245);
    __result347__ = __result_obj__ = ((char*)(right_value239=__builtin_string(self)));
    come_call_finalizer3((&args_246),va_list_finalize, 1, 0, 0, 0, (void*)0);
    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result347__;
    come_call_finalizer3((&args_246),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

char* charp_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional301;
void* right_value240;
char* __result348__;
char* msg2_247;
va_list args_248;
void* right_value241;
char* __result349__;
memset(&__result_obj__, 0, sizeof(void*));
right_value240 = (void*)0;
memset(&msg2_247, 0, sizeof(char*));
memset(&args_248, 0, sizeof(va_list));
right_value241 = (void*)0;
    if(_if_conditional301=self==((void*)0),    _if_conditional301) {
        __result348__ = __result_obj__ = ((char*)(right_value240=__builtin_string("")));
        right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result348__;
    }
    __builtin_va_start(args_248,self);
    vasprintf(&msg2_247,self,args_248);
    __builtin_va_end(args_248);
    printf("%s",msg2_247);
    free(msg2_247);
    __result349__ = __result_obj__ = ((char*)(right_value241=__builtin_string(self)));
    come_call_finalizer3((&args_248),va_list_finalize, 1, 0, 0, 0, (void*)0);
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result349__;
    come_call_finalizer3((&args_248),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

int int_printf(int self, char* msg){
void* __result_obj__;
int __result350__;
memset(&__result_obj__, 0, sizeof(void*));
    printf(msg,self);
    __result350__ = self;
    return __result350__;
}

char* string_puts(char* self){
void* __result_obj__;
_Bool _if_conditional302;
void* right_value242;
char* __result351__;
void* right_value243;
char* __result352__;
memset(&__result_obj__, 0, sizeof(void*));
right_value242 = (void*)0;
right_value243 = (void*)0;
    if(_if_conditional302=self==((void*)0),    _if_conditional302) {
        __result351__ = __result_obj__ = ((char*)(right_value242=__builtin_string("")));
        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result351__;
    }
    puts(self);
    __result352__ = __result_obj__ = ((char*)(right_value243=__builtin_string(self)));
    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result352__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
int i_249;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_249, 0, sizeof(int));
    for(    i_249=0;    i_249<self;    i_249++    ){
        block(parent,i_249);
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__;
struct integer* __result353__;
memset(&__result_obj__, 0, sizeof(void*));
    self->value=value;
    __result353__ = __result_obj__ = self;
    come_call_finalizer3(self,integer_finalize, 0, 0, 1, 0, (void*)0);
    return __result353__;
    come_call_finalizer3(self,integer_finalize, 0, 0, 1, 0, (void*)0);
}

static void integer_finalize(struct integer* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int integer_to_int(struct integer* self){
void* __result_obj__;
int __result354__;
memset(&__result_obj__, 0, sizeof(void*));
    __result354__ = self->value;
    return __result354__;
}

struct integer* char_to_integer(char self){
void* __result_obj__;
void* right_value244;
void* right_value245;
struct integer* __result355__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
right_value245 = (void*)0;
    __result355__ = __result_obj__ = ((struct integer*)(right_value245=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value244=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2714, "integer")))),self)));
    come_call_finalizer3(right_value244,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value245,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result355__;
}

struct integer* short_to_integer(short short self){
void* __result_obj__;
void* right_value246;
void* right_value247;
struct integer* __result356__;
memset(&__result_obj__, 0, sizeof(void*));
right_value246 = (void*)0;
right_value247 = (void*)0;
    __result356__ = __result_obj__ = ((struct integer*)(right_value247=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value246=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2719, "integer")))),self)));
    come_call_finalizer3(right_value246,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value247,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result356__;
}

struct integer* int_to_integer(int self){
void* __result_obj__;
void* right_value248;
void* right_value249;
struct integer* __result357__;
memset(&__result_obj__, 0, sizeof(void*));
right_value248 = (void*)0;
right_value249 = (void*)0;
    __result357__ = __result_obj__ = ((struct integer*)(right_value249=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value248=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2724, "integer")))),self)));
    come_call_finalizer3(right_value248,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value249,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result357__;
}

struct integer* long_to_integer(long self){
void* __result_obj__;
void* right_value250;
void* right_value251;
struct integer* __result358__;
memset(&__result_obj__, 0, sizeof(void*));
right_value250 = (void*)0;
right_value251 = (void*)0;
    __result358__ = __result_obj__ = ((struct integer*)(right_value251=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value250=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2729, "integer")))),self)));
    come_call_finalizer3(right_value250,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value251,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result358__;
}

int integer_compare(struct integer* left, struct integer* right){
void* __result_obj__;
_Bool _if_conditional303;
int __result359__;
_Bool _if_conditional304;
int __result360__;
int __result361__;
int __result362__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional303=left->value<right->value,    _if_conditional303) {
        __result359__ = -1;
        return __result359__;
    }
    else {
        if(_if_conditional304=left->value>right->value,        _if_conditional304) {
            __result360__ = 1;
            return __result360__;
        }
        else {
            __result361__ = 0;
            return __result361__;
        }
    }
    __result362__ = 0;
    return __result362__;
}

_Bool integer_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result363__;
memset(&__result_obj__, 0, sizeof(void*));
    __result363__ = self->value==right->value;
    return __result363__;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result364__;
memset(&__result_obj__, 0, sizeof(void*));
    __result364__ = self->value==right->value;
    return __result364__;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result365__;
memset(&__result_obj__, 0, sizeof(void*));
    __result365__ = self->value!=right->value;
    return __result365__;
}

struct integer* integer_operator_add(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value252;
void* right_value253;
struct integer* __result366__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
right_value253 = (void*)0;
    __result366__ = __result_obj__ = ((struct integer*)(right_value253=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value252=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2764, "integer")))),left->value+right->value)));
    come_call_finalizer3(right_value252,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value253,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result366__;
}

struct integer* integer_operator_sub(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value254;
void* right_value255;
struct integer* __result367__;
memset(&__result_obj__, 0, sizeof(void*));
right_value254 = (void*)0;
right_value255 = (void*)0;
    __result367__ = __result_obj__ = ((struct integer*)(right_value255=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value254=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2769, "integer")))),left->value-right->value)));
    come_call_finalizer3(right_value254,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value255,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result367__;
}

struct integer* integer_operator_mult(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value256;
void* right_value257;
struct integer* __result368__;
memset(&__result_obj__, 0, sizeof(void*));
right_value256 = (void*)0;
right_value257 = (void*)0;
    __result368__ = __result_obj__ = ((struct integer*)(right_value257=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value256=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2774, "integer")))),left->value*right->value)));
    come_call_finalizer3(right_value256,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value257,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result368__;
}

struct integer* integer_operator_div(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value258;
void* right_value259;
struct integer* __result369__;
memset(&__result_obj__, 0, sizeof(void*));
right_value258 = (void*)0;
right_value259 = (void*)0;
    __result369__ = __result_obj__ = ((struct integer*)(right_value259=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value258=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2779, "integer")))),left->value/right->value)));
    come_call_finalizer3(right_value258,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value259,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result369__;
}

struct integer* integer_operator_mod(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value260;
void* right_value261;
struct integer* __result370__;
memset(&__result_obj__, 0, sizeof(void*));
right_value260 = (void*)0;
right_value261 = (void*)0;
    __result370__ = __result_obj__ = ((struct integer*)(right_value261=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value260=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2784, "integer")))),left->value%right->value)));
    come_call_finalizer3(right_value260,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value261,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result370__;
}

struct integer* integer_operator_lshift(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value262;
void* right_value263;
struct integer* __result371__;
memset(&__result_obj__, 0, sizeof(void*));
right_value262 = (void*)0;
right_value263 = (void*)0;
    __result371__ = __result_obj__ = ((struct integer*)(right_value263=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value262=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2789, "integer")))),left->value<<right->value)));
    come_call_finalizer3(right_value262,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value263,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result371__;
}

struct integer* integer_operator_rshift(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value264;
void* right_value265;
struct integer* __result372__;
memset(&__result_obj__, 0, sizeof(void*));
right_value264 = (void*)0;
right_value265 = (void*)0;
    __result372__ = __result_obj__ = ((struct integer*)(right_value265=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value264=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2794, "integer")))),left->value>>right->value)));
    come_call_finalizer3(right_value264,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value265,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result372__;
}

struct integer* integer_operator_gteq(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value266;
void* right_value267;
struct integer* __result373__;
memset(&__result_obj__, 0, sizeof(void*));
right_value266 = (void*)0;
right_value267 = (void*)0;
    __result373__ = __result_obj__ = ((struct integer*)(right_value267=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value266=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2799, "integer")))),left->value>=right->value)));
    come_call_finalizer3(right_value266,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value267,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result373__;
}

struct integer* integer_operator_lteq(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value268;
void* right_value269;
struct integer* __result374__;
memset(&__result_obj__, 0, sizeof(void*));
right_value268 = (void*)0;
right_value269 = (void*)0;
    __result374__ = __result_obj__ = ((struct integer*)(right_value269=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value268=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2804, "integer")))),left->value<=right->value)));
    come_call_finalizer3(right_value268,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value269,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result374__;
}

struct integer* integer_operator_lt(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value270;
void* right_value271;
struct integer* __result375__;
memset(&__result_obj__, 0, sizeof(void*));
right_value270 = (void*)0;
right_value271 = (void*)0;
    __result375__ = __result_obj__ = ((struct integer*)(right_value271=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value270=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2809, "integer")))),left->value<right->value)));
    come_call_finalizer3(right_value270,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value271,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result375__;
}

struct integer* integer_operator_gt(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value272;
void* right_value273;
struct integer* __result376__;
memset(&__result_obj__, 0, sizeof(void*));
right_value272 = (void*)0;
right_value273 = (void*)0;
    __result376__ = __result_obj__ = ((struct integer*)(right_value273=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value272=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2814, "integer")))),left->value>right->value)));
    come_call_finalizer3(right_value272,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value273,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result376__;
}

struct integer* integer_operator_and(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value274;
void* right_value275;
struct integer* __result377__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
right_value275 = (void*)0;
    __result377__ = __result_obj__ = ((struct integer*)(right_value275=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value274=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2819, "integer")))),left->value&right->value)));
    come_call_finalizer3(right_value274,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value275,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result377__;
}

struct integer* integer_operator_xor(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value276;
void* right_value277;
struct integer* __result378__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
right_value277 = (void*)0;
    __result378__ = __result_obj__ = ((struct integer*)(right_value277=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value276=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2824, "integer")))),left->value^right->value)));
    come_call_finalizer3(right_value276,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value277,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result378__;
}

struct integer* integer_operator_or(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value278;
void* right_value279;
struct integer* __result379__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
right_value279 = (void*)0;
    __result379__ = __result_obj__ = ((struct integer*)(right_value279=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value278=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2829, "integer")))),left->value|right->value)));
    come_call_finalizer3(right_value278,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value279,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result379__;
}

struct integer* integer_operator_andand(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value280;
void* right_value281;
struct integer* __result380__;
memset(&__result_obj__, 0, sizeof(void*));
right_value280 = (void*)0;
right_value281 = (void*)0;
    __result380__ = __result_obj__ = ((struct integer*)(right_value281=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value280=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2834, "integer")))),left->value&&right->value)));
    come_call_finalizer3(right_value280,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value281,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result380__;
}

struct integer* integer_operator_oror(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value282;
void* right_value283;
struct integer* __result381__;
memset(&__result_obj__, 0, sizeof(void*));
right_value282 = (void*)0;
right_value283 = (void*)0;
    __result381__ = __result_obj__ = ((struct integer*)(right_value283=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value282=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2839, "integer")))),left->value||right->value)));
    come_call_finalizer3(right_value282,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value283,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result381__;
}

